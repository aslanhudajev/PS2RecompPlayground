#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage4BossMove
// Address: 0x1bbbc0 - 0x1beee4
void Stage4BossMove_0x1bbbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage4BossMove_0x1bbbc0");
#endif

    ctx->pc = 0x1bbbc0u;

    // 0x1bbbc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bbbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bbbc4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bbbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bbbc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bbbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bbbcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bbbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1bbbd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bbbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bbbd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bbbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bbbd8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1bbbd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bbbdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbbe0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbbe4: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1bbbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1bbbe8: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1BBBE8u;
    SET_GPR_U32(ctx, 31, 0x1BBBF0u);
    ctx->pc = 0x1BBBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBE8u;
            // 0x1bbbec: 0xdc25aa18  ld          $a1, -0x55E8($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBBF0u; }
        if (ctx->pc != 0x1BBBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBBF0u; }
        if (ctx->pc != 0x1BBBF0u) { return; }
    }
    ctx->pc = 0x1BBBF0u;
    // 0x1bbbf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bbbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbbf4: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1BBBF4u;
    SET_GPR_U32(ctx, 31, 0x1BBBFCu);
    ctx->pc = 0x1BBBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBF4u;
            // 0x1bbbf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBBFCu; }
        if (ctx->pc != 0x1BBBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBBFCu; }
        if (ctx->pc != 0x1BBBFCu) { return; }
    }
    ctx->pc = 0x1BBBFCu;
    // 0x1bbbfc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bbc00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bbc00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc04: 0x24021770  addiu       $v0, $zero, 0x1770
    ctx->pc = 0x1bbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x1bbc08: 0xc0409de  jal         func_102778
    ctx->pc = 0x1BBC08u;
    SET_GPR_U32(ctx, 31, 0x1BBC10u);
    ctx->pc = 0x1BBC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC08u;
            // 0x1bbc0c: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC10u; }
        if (ctx->pc != 0x1BBC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC10u; }
        if (ctx->pc != 0x1BBC10u) { return; }
    }
    ctx->pc = 0x1BBC10u;
    // 0x1bbc10: 0x3c043f9e  lui         $a0, 0x3F9E
    ctx->pc = 0x1bbc10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16286 << 16));
    // 0x1bbc14: 0x3403eb85  ori         $v1, $zero, 0xEB85
    ctx->pc = 0x1bbc14u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)60293u)));
    // 0x1bbc18: 0x3484b851  ori         $a0, $a0, 0xB851
    ctx->pc = 0x1bbc18u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)47185u)));
    // 0x1bbc1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bbc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bbc20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bbc20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1bbc24: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x1bbc24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7864u)));
    // 0x1bbc28: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bbc28u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1bbc2c: 0xc040880  jal         func_102200
    ctx->pc = 0x1BBC2Cu;
    SET_GPR_U32(ctx, 31, 0x1BBC34u);
    ctx->pc = 0x1BBC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC2Cu;
            // 0x1bbc30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC34u; }
        if (ctx->pc != 0x1BBC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC34u; }
        if (ctx->pc != 0x1BBC34u) { return; }
    }
    ctx->pc = 0x1BBC34u;
    // 0x1bbc34: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1BBC34u;
    SET_GPR_U32(ctx, 31, 0x1BBC3Cu);
    ctx->pc = 0x1BBC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC34u;
            // 0x1bbc38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC3Cu; }
        if (ctx->pc != 0x1BBC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC3Cu; }
        if (ctx->pc != 0x1BBC3Cu) { return; }
    }
    ctx->pc = 0x1BBC3Cu;
    // 0x1bbc3c: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x1bbc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x1bbc40: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1bbc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1bbc44: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x1bbc44u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
    // 0x1bbc48: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bbc48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1bbc4c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1bbc4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bbc50: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bbc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bbc54: 0x0  nop
    ctx->pc = 0x1bbc54u;
    // NOP
    // 0x1bbc58: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1bbc58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1bbc5c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1bbc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1bbc60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbc60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbc64: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1bbc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbc68: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1bbc68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1bbc6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bbc6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bbc70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbc74: 0x0  nop
    ctx->pc = 0x1bbc74u;
    // NOP
    // 0x1bbc78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bbc78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbc7c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBC7Cu;
    {
        const bool branch_taken_0x1bbc7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC7Cu;
            // 0x1bbc80: 0xe6210018  swc1        $f1, 0x18($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc7c) {
            ctx->pc = 0x1BBCA0u;
            goto label_1bbca0;
        }
    }
    ctx->pc = 0x1BBC84u;
    // 0x1bbc84: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bbc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1bbc88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbc88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbc8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbc90: 0x0  nop
    ctx->pc = 0x1bbc90u;
    // NOP
    // 0x1bbc94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bbc94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bbc98: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1bbc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1bbc9c: 0x0  nop
    ctx->pc = 0x1bbc9cu;
    // NOP
label_1bbca0:
    // 0x1bbca0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1bbca4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1bbca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbca8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbca8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbcac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbcacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbcb0: 0x0  nop
    ctx->pc = 0x1bbcb0u;
    // NOP
    // 0x1bbcb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bbcb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbcb8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBCB8u;
    {
        const bool branch_taken_0x1bbcb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCB8u;
            // 0x1bbcbc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbcb8) {
            ctx->pc = 0x1BBCD8u;
            goto label_1bbcd8;
        }
    }
    ctx->pc = 0x1BBCC0u;
    // 0x1bbcc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbcc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbcc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbcc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbcc8: 0x0  nop
    ctx->pc = 0x1bbcc8u;
    // NOP
    // 0x1bbccc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bbcccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bbcd0: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1bbcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1bbcd4: 0x0  nop
    ctx->pc = 0x1bbcd4u;
    // NOP
label_1bbcd8:
    // 0x1bbcd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bbcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbcdc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1bbcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1bbce0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbce0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbce4: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1bbce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bbce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbcec: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1bbcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbcf0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bbcf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bbcf4: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1bbcf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1bbcf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbcfc: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1bbcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bbd00: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bbd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbd04: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bbd04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bbd08: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1bbd08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1bbd0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbd10: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x1bbd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bbd14: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1bbd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbd18: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bbd18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bbd1c: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1bbd1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1bbd20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbd24: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1bbd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bbd28: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1bbd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbd2c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bbd2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bbd30: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1bbd30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1bbd34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbd38: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1bbd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbd3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bbd3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbd40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBD40u;
    {
        const bool branch_taken_0x1bbd40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD40u;
            // 0x1bbd44: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd40) {
            ctx->pc = 0x1BBD60u;
            goto label_1bbd60;
        }
    }
    ctx->pc = 0x1BBD48u;
    // 0x1bbd48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bbd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1bbd4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbd4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbd50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbd54: 0x0  nop
    ctx->pc = 0x1bbd54u;
    // NOP
    // 0x1bbd58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bbd58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bbd5c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1bbd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1bbd60:
    // 0x1bbd60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bbd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbd64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1bbd68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbd68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbd6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbd70: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1bbd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbd74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bbd74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbd78: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBD78u;
    {
        const bool branch_taken_0x1bbd78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD78u;
            // 0x1bbd7c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd78) {
            ctx->pc = 0x1BBD98u;
            goto label_1bbd98;
        }
    }
    ctx->pc = 0x1BBD80u;
    // 0x1bbd80: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bbd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1bbd84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbd84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbd8c: 0x0  nop
    ctx->pc = 0x1bbd8cu;
    // NOP
    // 0x1bbd90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bbd90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bbd94: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bbd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1bbd98:
    // 0x1bbd98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bbd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbd9c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1bbd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1bbda0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbda0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbda4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbda8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1bbda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbdac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bbdacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbdb0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBDB0u;
    {
        const bool branch_taken_0x1bbdb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBDB0u;
            // 0x1bbdb4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdb0) {
            ctx->pc = 0x1BBDD0u;
            goto label_1bbdd0;
        }
    }
    ctx->pc = 0x1BBDB8u;
    // 0x1bbdb8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1bbdbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbdbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbdc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbdc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbdc4: 0x0  nop
    ctx->pc = 0x1bbdc4u;
    // NOP
    // 0x1bbdc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bbdc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bbdcc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bbdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1bbdd0:
    // 0x1bbdd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bbdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbdd4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1bbdd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbdd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbde0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1bbde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbde4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bbde4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbde8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBDE8u;
    {
        const bool branch_taken_0x1bbde8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBDE8u;
            // 0x1bbdec: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbde8) {
            ctx->pc = 0x1BBE08u;
            goto label_1bbe08;
        }
    }
    ctx->pc = 0x1BBDF0u;
    // 0x1bbdf0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1bbdf4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bbdf4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bbdf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbdfc: 0x0  nop
    ctx->pc = 0x1bbdfcu;
    // NOP
    // 0x1bbe00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bbe00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bbe04: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bbe04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1bbe08:
    // 0x1bbe08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbe0c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1bbe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bbe10: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1bbe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bbe14: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1bbe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bbe18: 0xc06fc7c  jal         func_1BF1F0
    ctx->pc = 0x1BBE18u;
    SET_GPR_U32(ctx, 31, 0x1BBE20u);
    ctx->pc = 0x1BBE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE18u;
            // 0x1bbe1c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF1F0u;
    if (runtime->hasFunction(0x1BF1F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE20u; }
        if (ctx->pc != 0x1BBE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bf1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE20u; }
        if (ctx->pc != 0x1BBE20u) { return; }
    }
    ctx->pc = 0x1BBE20u;
    // 0x1bbe20: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bbe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bbe24: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1bbe24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1bbe28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bbe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bbe2c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1bbe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1bbe30: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bbe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bbe34: 0x28410708  slti        $at, $v0, 0x708
    ctx->pc = 0x1bbe34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1800) ? 1 : 0);
    // 0x1bbe38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBE38u;
    {
        const bool branch_taken_0x1bbe38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE38u;
            // 0x1bbe3c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe38) {
            ctx->pc = 0x1BBE48u;
            goto label_1bbe48;
        }
    }
    ctx->pc = 0x1BBE40u;
    // 0x1bbe40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBE40u;
    {
        const bool branch_taken_0x1bbe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe40) {
            ctx->pc = 0x1BBE68u;
            goto label_1bbe68;
        }
    }
    ctx->pc = 0x1BBE48u;
label_1bbe48:
    // 0x1bbe48: 0x28410fa0  slti        $at, $v0, 0xFA0
    ctx->pc = 0x1bbe48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4000) ? 1 : 0);
    // 0x1bbe4c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBE4Cu;
    {
        const bool branch_taken_0x1bbe4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE4Cu;
            // 0x1bbe50: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe4c) {
            ctx->pc = 0x1BBE60u;
            goto label_1bbe60;
        }
    }
    ctx->pc = 0x1BBE54u;
    // 0x1bbe54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBE54u;
    {
        const bool branch_taken_0x1bbe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe54) {
            ctx->pc = 0x1BBE68u;
            goto label_1bbe68;
        }
    }
    ctx->pc = 0x1BBE5Cu;
    // 0x1bbe5c: 0x0  nop
    ctx->pc = 0x1bbe5cu;
    // NOP
label_1bbe60:
    // 0x1bbe60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bbe60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe64: 0x0  nop
    ctx->pc = 0x1bbe64u;
    // NOP
label_1bbe68:
    // 0x1bbe68: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1bbe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1bbe6c: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x1bbe6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bbe70: 0x10200a81  beqz        $at, . + 4 + (0xA81 << 2)
    ctx->pc = 0x1BBE70u;
    {
        const bool branch_taken_0x1bbe70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE70u;
            // 0x1bbe74: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe70) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BBE78u;
    // 0x1bbe78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bbe7c: 0x24632a70  addiu       $v1, $v1, 0x2A70
    ctx->pc = 0x1bbe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10864));
    // 0x1bbe80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bbe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bbe84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bbe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbe88: 0x400008  jr          $v0
    ctx->pc = 0x1BBE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBE90u: goto label_1bbe90;
            case 0x1BBF18u: goto label_1bbf18;
            case 0x1BD310u: goto label_1bd310;
            case 0x1BD380u: goto label_1bd380;
            case 0x1BDB78u: goto label_1bdb78;
            case 0x1BE328u: goto label_1be328;
            case 0x1BE658u: goto label_1be658;
            case 0x1BE7C8u: goto label_1be7c8;
            case 0x1BE838u: goto label_1be838;
            case 0x1BE878u: goto label_1be878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBE90u;
label_1bbe90:
    // 0x1bbe90: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1bbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1bbe94: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1bbe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbe98: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bbe98u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1bbe9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbe9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbea0: 0x0  nop
    ctx->pc = 0x1bbea0u;
    // NOP
    // 0x1bbea4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bbea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbea8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBEA8u;
    {
        const bool branch_taken_0x1bbea8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBEA8u;
            // 0x1bbeac: 0x3c023f7d  lui         $v0, 0x3F7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbea8) {
            ctx->pc = 0x1BBEC8u;
            goto label_1bbec8;
        }
    }
    ctx->pc = 0x1BBEB0u;
    // 0x1bbeb0: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1bbeb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1bbeb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbeb8: 0x0  nop
    ctx->pc = 0x1bbeb8u;
    // NOP
    // 0x1bbebc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bbebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bbec0: 0x10000a6d  b           . + 4 + (0xA6D << 2)
    ctx->pc = 0x1BBEC0u;
    {
        const bool branch_taken_0x1bbec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBEC0u;
            // 0x1bbec4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbec0) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BBEC8u;
label_1bbec8:
    // 0x1bbec8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BBEC8u;
    SET_GPR_U32(ctx, 31, 0x1BBED0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBED0u; }
        if (ctx->pc != 0x1BBED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBED0u; }
        if (ctx->pc != 0x1BBED0u) { return; }
    }
    ctx->pc = 0x1BBED0u;
    // 0x1bbed0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1bbed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1bbed4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bbed4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1bbed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bbed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbedc: 0x0  nop
    ctx->pc = 0x1bbedcu;
    // NOP
    // 0x1bbee0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bbee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bbee4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BBEE4u;
    SET_GPR_U32(ctx, 31, 0x1BBEECu);
    ctx->pc = 0x1BBEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBEE4u;
            // 0x1bbee8: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEECu; }
        if (ctx->pc != 0x1BBEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEECu; }
        if (ctx->pc != 0x1BBEECu) { return; }
    }
    ctx->pc = 0x1BBEECu;
    // 0x1bbeec: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1bbeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1bbef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbef4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1bbef4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1bbef8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bbef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbefc: 0x0  nop
    ctx->pc = 0x1bbefcu;
    // NOP
    // 0x1bbf00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bbf00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bbf04: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1bbf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1bbf08: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1bbf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1bbf0c: 0x10000a5a  b           . + 4 + (0xA5A << 2)
    ctx->pc = 0x1BBF0Cu;
    {
        const bool branch_taken_0x1bbf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF0Cu;
            // 0x1bbf10: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf0c) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BBF14u;
    // 0x1bbf14: 0x0  nop
    ctx->pc = 0x1bbf14u;
    // NOP
label_1bbf18:
    // 0x1bbf18: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1bbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1bbf1c: 0x10520002  beq         $v0, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BBF1Cu;
    {
        const bool branch_taken_0x1bbf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1BBF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF1Cu;
            // 0x1bbf20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf1c) {
            ctx->pc = 0x1BBF28u;
            goto label_1bbf28;
        }
    }
    ctx->pc = 0x1BBF24u;
    // 0x1bbf24: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1bbf24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_1bbf28:
    // 0x1bbf28: 0xae120110  sw          $s2, 0x110($s0)
    ctx->pc = 0x1bbf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 18));
    // 0x1bbf2c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1bbf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbf30: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1bbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1bbf34: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bbf34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1bbf38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbf38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbf3c: 0x0  nop
    ctx->pc = 0x1bbf3cu;
    // NOP
    // 0x1bbf40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bbf40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbf44: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1BBF44u;
    {
        const bool branch_taken_0x1bbf44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF44u;
            // 0x1bbf48: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf44) {
            ctx->pc = 0x1BBF78u;
            goto label_1bbf78;
        }
    }
    ctx->pc = 0x1BBF4Cu;
    // 0x1bbf4c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bbf4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1bbf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbf54: 0x0  nop
    ctx->pc = 0x1bbf54u;
    // NOP
    // 0x1bbf58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bbf58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbf5c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBF5Cu;
    {
        const bool branch_taken_0x1bbf5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF5Cu;
            // 0x1bbf60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf5c) {
            ctx->pc = 0x1BBF78u;
            goto label_1bbf78;
        }
    }
    ctx->pc = 0x1BBF64u;
    // 0x1bbf64: 0xc06fbbc  jal         func_1BEEF0
    ctx->pc = 0x1BBF64u;
    SET_GPR_U32(ctx, 31, 0x1BBF6Cu);
    ctx->pc = 0x1BEEF0u;
    if (runtime->hasFunction(0x1BEEF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BEEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF6Cu; }
        if (ctx->pc != 0x1BBF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1beef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF6Cu; }
        if (ctx->pc != 0x1BBF6Cu) { return; }
    }
    ctx->pc = 0x1BBF6Cu;
    // 0x1bbf6c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1BBF6Cu;
    {
        const bool branch_taken_0x1bbf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf6c) {
            ctx->pc = 0x1BBFE8u;
            goto label_1bbfe8;
        }
    }
    ctx->pc = 0x1BBF74u;
    // 0x1bbf74: 0x0  nop
    ctx->pc = 0x1bbf74u;
    // NOP
label_1bbf78:
    // 0x1bbf78: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1bbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1bbf7c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1bbf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bbf80: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bbf80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1bbf84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbf84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbf88: 0x0  nop
    ctx->pc = 0x1bbf88u;
    // NOP
    // 0x1bbf8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bbf8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbf90: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1BBF90u;
    {
        const bool branch_taken_0x1bbf90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF90u;
            // 0x1bbf94: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf90) {
            ctx->pc = 0x1BBFC0u;
            goto label_1bbfc0;
        }
    }
    ctx->pc = 0x1BBF98u;
    // 0x1bbf98: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bbf98u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1bbf9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbf9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbfa0: 0x0  nop
    ctx->pc = 0x1bbfa0u;
    // NOP
    // 0x1bbfa4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bbfa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbfa8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBFA8u;
    {
        const bool branch_taken_0x1bbfa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BBFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFA8u;
            // 0x1bbfac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfa8) {
            ctx->pc = 0x1BBFC0u;
            goto label_1bbfc0;
        }
    }
    ctx->pc = 0x1BBFB0u;
    // 0x1bbfb0: 0xc06fbbc  jal         func_1BEEF0
    ctx->pc = 0x1BBFB0u;
    SET_GPR_U32(ctx, 31, 0x1BBFB8u);
    ctx->pc = 0x1BEEF0u;
    if (runtime->hasFunction(0x1BEEF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BEEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFB8u; }
        if (ctx->pc != 0x1BBFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1beef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBFB8u; }
        if (ctx->pc != 0x1BBFB8u) { return; }
    }
    ctx->pc = 0x1BBFB8u;
    // 0x1bbfb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BBFB8u;
    {
        const bool branch_taken_0x1bbfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbfb8) {
            ctx->pc = 0x1BBFE8u;
            goto label_1bbfe8;
        }
    }
    ctx->pc = 0x1BBFC0u;
label_1bbfc0:
    // 0x1bbfc0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1bbfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x1bbfc4: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1bbfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bbfc8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1bbfc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1bbfcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bbfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbfd0: 0x0  nop
    ctx->pc = 0x1bbfd0u;
    // NOP
    // 0x1bbfd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bbfd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bbfd8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1bbfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1bbfdc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1bbfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bbfe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bbfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bbfe4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1bbfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1bbfe8:
    // 0x1bbfe8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bbfec: 0x12420304  beq         $s2, $v0, . + 4 + (0x304 << 2)
    ctx->pc = 0x1BBFECu;
    {
        const bool branch_taken_0x1bbfec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BBFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFECu;
            // 0x1bbff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfec) {
            ctx->pc = 0x1BCC00u;
            goto label_1bcc00;
        }
    }
    ctx->pc = 0x1BBFF4u;
    // 0x1bbff4: 0x124201ae  beq         $s2, $v0, . + 4 + (0x1AE << 2)
    ctx->pc = 0x1BBFF4u;
    {
        const bool branch_taken_0x1bbff4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bbff4) {
            ctx->pc = 0x1BC6B0u;
            goto label_1bc6b0;
        }
    }
    ctx->pc = 0x1BBFFCu;
    // 0x1bbffc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBFFCu;
    {
        const bool branch_taken_0x1bbffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbffc) {
            ctx->pc = 0x1BC010u;
            goto label_1bc010;
        }
    }
    ctx->pc = 0x1BC004u;
    // 0x1bc004: 0x10000a1c  b           . + 4 + (0xA1C << 2)
    ctx->pc = 0x1BC004u;
    {
        const bool branch_taken_0x1bc004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc004) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC00Cu;
    // 0x1bc00c: 0x0  nop
    ctx->pc = 0x1bc00cu;
    // NOP
label_1bc010:
    // 0x1bc010: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bc010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc014: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1bc014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bc018: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1bc018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc01c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1bc01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bc020: 0xc06fc7c  jal         func_1BF1F0
    ctx->pc = 0x1BC020u;
    SET_GPR_U32(ctx, 31, 0x1BC028u);
    ctx->pc = 0x1BC024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC020u;
            // 0x1bc024: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF1F0u;
    if (runtime->hasFunction(0x1BF1F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC028u; }
        if (ctx->pc != 0x1BC028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bf1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC028u; }
        if (ctx->pc != 0x1BC028u) { return; }
    }
    ctx->pc = 0x1BC028u;
    // 0x1bc028: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BC028u;
    SET_GPR_U32(ctx, 31, 0x1BC030u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC030u; }
        if (ctx->pc != 0x1BC030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC030u; }
        if (ctx->pc != 0x1BC030u) { return; }
    }
    ctx->pc = 0x1BC030u;
    // 0x1bc030: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc034: 0x14430082  bne         $v0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1BC034u;
    {
        const bool branch_taken_0x1bc034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc034) {
            ctx->pc = 0x1BC240u;
            goto label_1bc240;
        }
    }
    ctx->pc = 0x1BC03Cu;
    // 0x1bc03c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bc03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bc040: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1bc040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1bc044: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bc044u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bc048: 0x0  nop
    ctx->pc = 0x1bc048u;
    // NOP
    // 0x1bc04c: 0x0  nop
    ctx->pc = 0x1bc04cu;
    // NOP
    // 0x1bc050: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc050u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bc054: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BC054u;
    {
        const bool branch_taken_0x1bc054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc054) {
            ctx->pc = 0x1BC0E8u;
            goto label_1bc0e8;
        }
    }
    ctx->pc = 0x1BC05Cu;
    // 0x1bc05c: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1bc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bc060: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC060u;
    {
        const bool branch_taken_0x1bc060 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BC064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC060u;
            // 0x1bc064: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc060) {
            ctx->pc = 0x1BC074u;
            goto label_1bc074;
        }
    }
    ctx->pc = 0x1BC068u;
    // 0x1bc068: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC068u;
    {
        const bool branch_taken_0x1bc068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc068) {
            ctx->pc = 0x1BC074u;
            goto label_1bc074;
        }
    }
    ctx->pc = 0x1BC070u;
    // 0x1bc070: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1bc070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1bc074:
    // 0x1bc074: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BC074u;
    {
        const bool branch_taken_0x1bc074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc074) {
            ctx->pc = 0x1BC0B0u;
            goto label_1bc0b0;
        }
    }
    ctx->pc = 0x1BC07Cu;
    // 0x1bc07c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bc07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc080: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc084: 0x2464ff88  addiu       $a0, $v1, -0x78
    ctx->pc = 0x1bc084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x1bc088: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BC088u;
    SET_GPR_U32(ctx, 31, 0x1BC090u);
    ctx->pc = 0x1BC08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC088u;
            // 0x1bc08c: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC090u; }
        if (ctx->pc != 0x1BC090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC090u; }
        if (ctx->pc != 0x1BC090u) { return; }
    }
    ctx->pc = 0x1BC090u;
    // 0x1bc090: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bc090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc094: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc098: 0x2464ff79  addiu       $a0, $v1, -0x87
    ctx->pc = 0x1bc098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967161));
    // 0x1bc09c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BC09Cu;
    SET_GPR_U32(ctx, 31, 0x1BC0A4u);
    ctx->pc = 0x1BC0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC09Cu;
            // 0x1bc0a0: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0A4u; }
        if (ctx->pc != 0x1BC0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0A4u; }
        if (ctx->pc != 0x1BC0A4u) { return; }
    }
    ctx->pc = 0x1BC0A4u;
    // 0x1bc0a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BC0A4u;
    {
        const bool branch_taken_0x1bc0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc0a4) {
            ctx->pc = 0x1BC0D8u;
            goto label_1bc0d8;
        }
    }
    ctx->pc = 0x1BC0ACu;
    // 0x1bc0ac: 0x0  nop
    ctx->pc = 0x1bc0acu;
    // NOP
label_1bc0b0:
    // 0x1bc0b0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bc0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc0b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc0b8: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x1bc0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1bc0bc: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BC0BCu;
    SET_GPR_U32(ctx, 31, 0x1BC0C4u);
    ctx->pc = 0x1BC0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC0BCu;
            // 0x1bc0c0: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0C4u; }
        if (ctx->pc != 0x1BC0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0C4u; }
        if (ctx->pc != 0x1BC0C4u) { return; }
    }
    ctx->pc = 0x1BC0C4u;
    // 0x1bc0c4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bc0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc0c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc0cc: 0x24640087  addiu       $a0, $v1, 0x87
    ctx->pc = 0x1bc0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 135));
    // 0x1bc0d0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BC0D0u;
    SET_GPR_U32(ctx, 31, 0x1BC0D8u);
    ctx->pc = 0x1BC0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC0D0u;
            // 0x1bc0d4: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0D8u; }
        if (ctx->pc != 0x1BC0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0D8u; }
        if (ctx->pc != 0x1BC0D8u) { return; }
    }
    ctx->pc = 0x1BC0D8u;
label_1bc0d8:
    // 0x1bc0d8: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1bc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bc0dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bc0e0: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1bc0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1bc0e4: 0x0  nop
    ctx->pc = 0x1bc0e4u;
    // NOP
label_1bc0e8:
    // 0x1bc0e8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bc0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bc0ec: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1bc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bc0f0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bc0f0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bc0f4: 0x0  nop
    ctx->pc = 0x1bc0f4u;
    // NOP
    // 0x1bc0f8: 0x0  nop
    ctx->pc = 0x1bc0f8u;
    // NOP
    // 0x1bc0fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc0fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bc100: 0x144009dd  bnez        $v0, . + 4 + (0x9DD << 2)
    ctx->pc = 0x1BC100u;
    {
        const bool branch_taken_0x1bc100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc100) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC108u;
    // 0x1bc108: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1bc108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc10c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc10cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc110: 0x0  nop
    ctx->pc = 0x1bc110u;
    // NOP
    // 0x1bc114: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc118: 0x45010041  bc1t        . + 4 + (0x41 << 2)
    ctx->pc = 0x1BC118u;
    {
        const bool branch_taken_0x1bc118 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC118u;
            // 0x1bc11c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc118) {
            ctx->pc = 0x1BC220u;
            goto label_1bc220;
        }
    }
    ctx->pc = 0x1BC120u;
    // 0x1bc120: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bc120u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bc124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc128: 0x0  nop
    ctx->pc = 0x1bc128u;
    // NOP
    // 0x1bc12c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc130: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x1BC130u;
    {
        const bool branch_taken_0x1bc130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc130) {
            ctx->pc = 0x1BC220u;
            goto label_1bc220;
        }
    }
    ctx->pc = 0x1BC138u;
    // 0x1bc138: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bc138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc13c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc140: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1bc140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1bc144: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1bc144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bc148: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1bc148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1bc14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc150: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BC150u;
    SET_GPR_U32(ctx, 31, 0x1BC158u);
    ctx->pc = 0x1BC154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC150u;
            // 0x1bc154: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC158u; }
        if (ctx->pc != 0x1BC158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC158u; }
        if (ctx->pc != 0x1BC158u) { return; }
    }
    ctx->pc = 0x1BC158u;
    // 0x1bc158: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC158u;
    SET_GPR_U32(ctx, 31, 0x1BC160u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC160u; }
        if (ctx->pc != 0x1BC160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC160u; }
        if (ctx->pc != 0x1BC160u) { return; }
    }
    ctx->pc = 0x1BC160u;
    // 0x1bc160: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc164: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc168: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc16c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc170: 0x0  nop
    ctx->pc = 0x1bc170u;
    // NOP
    // 0x1bc174: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc178: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC178u;
    SET_GPR_U32(ctx, 31, 0x1BC180u);
    ctx->pc = 0x1BC17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC178u;
            // 0x1bc17c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC180u; }
        if (ctx->pc != 0x1BC180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC180u; }
        if (ctx->pc != 0x1BC180u) { return; }
    }
    ctx->pc = 0x1BC180u;
    // 0x1bc180: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc184: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc184u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc188: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc18c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc18cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc190: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC190u;
    SET_GPR_U32(ctx, 31, 0x1BC198u);
    ctx->pc = 0x1BC194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC190u;
            // 0x1bc194: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC198u; }
        if (ctx->pc != 0x1BC198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC198u; }
        if (ctx->pc != 0x1BC198u) { return; }
    }
    ctx->pc = 0x1BC198u;
    // 0x1bc198: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC198u;
    SET_GPR_U32(ctx, 31, 0x1BC1A0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1A0u; }
        if (ctx->pc != 0x1BC1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1A0u; }
        if (ctx->pc != 0x1BC1A0u) { return; }
    }
    ctx->pc = 0x1BC1A0u;
    // 0x1bc1a0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc1a4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc1a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc1a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc1ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc1b0: 0x0  nop
    ctx->pc = 0x1bc1b0u;
    // NOP
    // 0x1bc1b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc1b8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC1B8u;
    SET_GPR_U32(ctx, 31, 0x1BC1C0u);
    ctx->pc = 0x1BC1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1B8u;
            // 0x1bc1bc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1C0u; }
        if (ctx->pc != 0x1BC1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1C0u; }
        if (ctx->pc != 0x1BC1C0u) { return; }
    }
    ctx->pc = 0x1BC1C0u;
    // 0x1bc1c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc1c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc1c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc1c8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc1cc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc1ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc1d0: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC1D0u;
    SET_GPR_U32(ctx, 31, 0x1BC1D8u);
    ctx->pc = 0x1BC1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1D0u;
            // 0x1bc1d4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1D8u; }
        if (ctx->pc != 0x1BC1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1D8u; }
        if (ctx->pc != 0x1BC1D8u) { return; }
    }
    ctx->pc = 0x1BC1D8u;
    // 0x1bc1d8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC1D8u;
    SET_GPR_U32(ctx, 31, 0x1BC1E0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1E0u; }
        if (ctx->pc != 0x1BC1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1E0u; }
        if (ctx->pc != 0x1BC1E0u) { return; }
    }
    ctx->pc = 0x1BC1E0u;
    // 0x1bc1e0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc1e4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc1e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc1ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc1f0: 0x0  nop
    ctx->pc = 0x1bc1f0u;
    // NOP
    // 0x1bc1f4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc1f8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC1F8u;
    SET_GPR_U32(ctx, 31, 0x1BC200u);
    ctx->pc = 0x1BC1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC1F8u;
            // 0x1bc1fc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC200u; }
        if (ctx->pc != 0x1BC200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC200u; }
        if (ctx->pc != 0x1BC200u) { return; }
    }
    ctx->pc = 0x1BC200u;
    // 0x1bc200: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc204: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc204u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc208: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc20c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc20cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc210: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC210u;
    SET_GPR_U32(ctx, 31, 0x1BC218u);
    ctx->pc = 0x1BC214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC210u;
            // 0x1bc214: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC218u; }
        if (ctx->pc != 0x1BC218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC218u; }
        if (ctx->pc != 0x1BC218u) { return; }
    }
    ctx->pc = 0x1BC218u;
    // 0x1bc218: 0x10000997  b           . + 4 + (0x997 << 2)
    ctx->pc = 0x1BC218u;
    {
        const bool branch_taken_0x1bc218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc218) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC220u;
label_1bc220:
    // 0x1bc220: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc224: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc228: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bc228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc22c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC22Cu;
    SET_GPR_U32(ctx, 31, 0x1BC234u);
    ctx->pc = 0x1BC230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC22Cu;
            // 0x1bc230: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC234u; }
        if (ctx->pc != 0x1BC234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC234u; }
        if (ctx->pc != 0x1BC234u) { return; }
    }
    ctx->pc = 0x1BC234u;
    // 0x1bc234: 0x10000990  b           . + 4 + (0x990 << 2)
    ctx->pc = 0x1BC234u;
    {
        const bool branch_taken_0x1bc234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc234) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC23Cu;
    // 0x1bc23c: 0x0  nop
    ctx->pc = 0x1bc23cu;
    // NOP
label_1bc240:
    // 0x1bc240: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BC240u;
    SET_GPR_U32(ctx, 31, 0x1BC248u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC248u; }
        if (ctx->pc != 0x1BC248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC248u; }
        if (ctx->pc != 0x1BC248u) { return; }
    }
    ctx->pc = 0x1BC248u;
    // 0x1bc248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc24c: 0x14430092  bne         $v0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x1BC24Cu;
    {
        const bool branch_taken_0x1bc24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc24c) {
            ctx->pc = 0x1BC498u;
            goto label_1bc498;
        }
    }
    ctx->pc = 0x1BC254u;
    // 0x1bc254: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bc254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bc258: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1bc258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1bc25c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bc25cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bc260: 0x0  nop
    ctx->pc = 0x1bc260u;
    // NOP
    // 0x1bc264: 0x0  nop
    ctx->pc = 0x1bc264u;
    // NOP
    // 0x1bc268: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc268u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bc26c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BC26Cu;
    {
        const bool branch_taken_0x1bc26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc26c) {
            ctx->pc = 0x1BC300u;
            goto label_1bc300;
        }
    }
    ctx->pc = 0x1BC274u;
    // 0x1bc274: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1bc274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bc278: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC278u;
    {
        const bool branch_taken_0x1bc278 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BC27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC278u;
            // 0x1bc27c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc278) {
            ctx->pc = 0x1BC28Cu;
            goto label_1bc28c;
        }
    }
    ctx->pc = 0x1BC280u;
    // 0x1bc280: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC280u;
    {
        const bool branch_taken_0x1bc280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc280) {
            ctx->pc = 0x1BC28Cu;
            goto label_1bc28c;
        }
    }
    ctx->pc = 0x1BC288u;
    // 0x1bc288: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1bc288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1bc28c:
    // 0x1bc28c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BC28Cu;
    {
        const bool branch_taken_0x1bc28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc28c) {
            ctx->pc = 0x1BC2C8u;
            goto label_1bc2c8;
        }
    }
    ctx->pc = 0x1BC294u;
    // 0x1bc294: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bc294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc298: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc29c: 0x2464ff88  addiu       $a0, $v1, -0x78
    ctx->pc = 0x1bc29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x1bc2a0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BC2A0u;
    SET_GPR_U32(ctx, 31, 0x1BC2A8u);
    ctx->pc = 0x1BC2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2A0u;
            // 0x1bc2a4: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2A8u; }
        if (ctx->pc != 0x1BC2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2A8u; }
        if (ctx->pc != 0x1BC2A8u) { return; }
    }
    ctx->pc = 0x1BC2A8u;
    // 0x1bc2a8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bc2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc2ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc2b0: 0x2464ff79  addiu       $a0, $v1, -0x87
    ctx->pc = 0x1bc2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967161));
    // 0x1bc2b4: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BC2B4u;
    SET_GPR_U32(ctx, 31, 0x1BC2BCu);
    ctx->pc = 0x1BC2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2B4u;
            // 0x1bc2b8: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2BCu; }
        if (ctx->pc != 0x1BC2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2BCu; }
        if (ctx->pc != 0x1BC2BCu) { return; }
    }
    ctx->pc = 0x1BC2BCu;
    // 0x1bc2bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BC2BCu;
    {
        const bool branch_taken_0x1bc2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc2bc) {
            ctx->pc = 0x1BC2F0u;
            goto label_1bc2f0;
        }
    }
    ctx->pc = 0x1BC2C4u;
    // 0x1bc2c4: 0x0  nop
    ctx->pc = 0x1bc2c4u;
    // NOP
label_1bc2c8:
    // 0x1bc2c8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bc2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc2cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc2d0: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x1bc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1bc2d4: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BC2D4u;
    SET_GPR_U32(ctx, 31, 0x1BC2DCu);
    ctx->pc = 0x1BC2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2D4u;
            // 0x1bc2d8: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2DCu; }
        if (ctx->pc != 0x1BC2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2DCu; }
        if (ctx->pc != 0x1BC2DCu) { return; }
    }
    ctx->pc = 0x1BC2DCu;
    // 0x1bc2dc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bc2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc2e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc2e4: 0x24640087  addiu       $a0, $v1, 0x87
    ctx->pc = 0x1bc2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 135));
    // 0x1bc2e8: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BC2E8u;
    SET_GPR_U32(ctx, 31, 0x1BC2F0u);
    ctx->pc = 0x1BC2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2E8u;
            // 0x1bc2ec: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2F0u; }
        if (ctx->pc != 0x1BC2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC2F0u; }
        if (ctx->pc != 0x1BC2F0u) { return; }
    }
    ctx->pc = 0x1BC2F0u;
label_1bc2f0:
    // 0x1bc2f0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1bc2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bc2f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bc2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bc2f8: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1bc2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1bc2fc: 0x0  nop
    ctx->pc = 0x1bc2fcu;
    // NOP
label_1bc300:
    // 0x1bc300: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bc300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bc304: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1bc304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1bc308: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bc308u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bc30c: 0x0  nop
    ctx->pc = 0x1bc30cu;
    // NOP
    // 0x1bc310: 0x0  nop
    ctx->pc = 0x1bc310u;
    // NOP
    // 0x1bc314: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc314u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bc318: 0x14400957  bnez        $v0, . + 4 + (0x957 << 2)
    ctx->pc = 0x1BC318u;
    {
        const bool branch_taken_0x1bc318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc318) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC320u;
    // 0x1bc320: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1bc320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc328: 0x0  nop
    ctx->pc = 0x1bc328u;
    // NOP
    // 0x1bc32c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc32cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc330: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x1BC330u;
    {
        const bool branch_taken_0x1bc330 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC330u;
            // 0x1bc334: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc330) {
            ctx->pc = 0x1BC478u;
            goto label_1bc478;
        }
    }
    ctx->pc = 0x1BC338u;
    // 0x1bc338: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bc338u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bc33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc340: 0x0  nop
    ctx->pc = 0x1bc340u;
    // NOP
    // 0x1bc344: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc348: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x1BC348u;
    {
        const bool branch_taken_0x1bc348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc348) {
            ctx->pc = 0x1BC478u;
            goto label_1bc478;
        }
    }
    ctx->pc = 0x1BC350u;
    // 0x1bc350: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bc350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc354: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc358: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1bc358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1bc35c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1bc35cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bc360: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1bc360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1bc364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc368: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BC368u;
    SET_GPR_U32(ctx, 31, 0x1BC370u);
    ctx->pc = 0x1BC36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC368u;
            // 0x1bc36c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC370u; }
        if (ctx->pc != 0x1BC370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC370u; }
        if (ctx->pc != 0x1BC370u) { return; }
    }
    ctx->pc = 0x1BC370u;
    // 0x1bc370: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC370u;
    SET_GPR_U32(ctx, 31, 0x1BC378u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC378u; }
        if (ctx->pc != 0x1BC378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC378u; }
        if (ctx->pc != 0x1BC378u) { return; }
    }
    ctx->pc = 0x1BC378u;
    // 0x1bc378: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc37c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc380: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc384: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc388: 0x0  nop
    ctx->pc = 0x1bc388u;
    // NOP
    // 0x1bc38c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc38cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc390: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC390u;
    SET_GPR_U32(ctx, 31, 0x1BC398u);
    ctx->pc = 0x1BC394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC390u;
            // 0x1bc394: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC398u; }
        if (ctx->pc != 0x1BC398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC398u; }
        if (ctx->pc != 0x1BC398u) { return; }
    }
    ctx->pc = 0x1BC398u;
    // 0x1bc398: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc39c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc39cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc3a0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc3a4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc3a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc3a8: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC3A8u;
    SET_GPR_U32(ctx, 31, 0x1BC3B0u);
    ctx->pc = 0x1BC3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3A8u;
            // 0x1bc3ac: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3B0u; }
        if (ctx->pc != 0x1BC3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3B0u; }
        if (ctx->pc != 0x1BC3B0u) { return; }
    }
    ctx->pc = 0x1BC3B0u;
    // 0x1bc3b0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC3B0u;
    SET_GPR_U32(ctx, 31, 0x1BC3B8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3B8u; }
        if (ctx->pc != 0x1BC3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3B8u; }
        if (ctx->pc != 0x1BC3B8u) { return; }
    }
    ctx->pc = 0x1BC3B8u;
    // 0x1bc3b8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc3bc: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc3c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc3c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc3c8: 0x0  nop
    ctx->pc = 0x1bc3c8u;
    // NOP
    // 0x1bc3cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc3ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc3d0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC3D0u;
    SET_GPR_U32(ctx, 31, 0x1BC3D8u);
    ctx->pc = 0x1BC3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3D0u;
            // 0x1bc3d4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3D8u; }
        if (ctx->pc != 0x1BC3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3D8u; }
        if (ctx->pc != 0x1BC3D8u) { return; }
    }
    ctx->pc = 0x1BC3D8u;
    // 0x1bc3d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc3dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc3dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc3e0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc3e4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc3e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc3e8: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC3E8u;
    SET_GPR_U32(ctx, 31, 0x1BC3F0u);
    ctx->pc = 0x1BC3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC3E8u;
            // 0x1bc3ec: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3F0u; }
        if (ctx->pc != 0x1BC3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3F0u; }
        if (ctx->pc != 0x1BC3F0u) { return; }
    }
    ctx->pc = 0x1BC3F0u;
    // 0x1bc3f0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC3F0u;
    SET_GPR_U32(ctx, 31, 0x1BC3F8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3F8u; }
        if (ctx->pc != 0x1BC3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC3F8u; }
        if (ctx->pc != 0x1BC3F8u) { return; }
    }
    ctx->pc = 0x1BC3F8u;
    // 0x1bc3f8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc3fc: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc400: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc404: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc408: 0x0  nop
    ctx->pc = 0x1bc408u;
    // NOP
    // 0x1bc40c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc410: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC410u;
    SET_GPR_U32(ctx, 31, 0x1BC418u);
    ctx->pc = 0x1BC414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC410u;
            // 0x1bc414: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC418u; }
        if (ctx->pc != 0x1BC418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC418u; }
        if (ctx->pc != 0x1BC418u) { return; }
    }
    ctx->pc = 0x1BC418u;
    // 0x1bc418: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc41c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc41cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc420: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc424: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc424u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc428: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC428u;
    SET_GPR_U32(ctx, 31, 0x1BC430u);
    ctx->pc = 0x1BC42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC428u;
            // 0x1bc42c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC430u; }
        if (ctx->pc != 0x1BC430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC430u; }
        if (ctx->pc != 0x1BC430u) { return; }
    }
    ctx->pc = 0x1BC430u;
    // 0x1bc430: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC430u;
    SET_GPR_U32(ctx, 31, 0x1BC438u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC438u; }
        if (ctx->pc != 0x1BC438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC438u; }
        if (ctx->pc != 0x1BC438u) { return; }
    }
    ctx->pc = 0x1BC438u;
    // 0x1bc438: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc43c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc440: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc448: 0x0  nop
    ctx->pc = 0x1bc448u;
    // NOP
    // 0x1bc44c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc44cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc450: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC450u;
    SET_GPR_U32(ctx, 31, 0x1BC458u);
    ctx->pc = 0x1BC454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC450u;
            // 0x1bc454: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC458u; }
        if (ctx->pc != 0x1BC458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC458u; }
        if (ctx->pc != 0x1BC458u) { return; }
    }
    ctx->pc = 0x1BC458u;
    // 0x1bc458: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc45c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc45cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc460: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc464: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc464u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc468: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC468u;
    SET_GPR_U32(ctx, 31, 0x1BC470u);
    ctx->pc = 0x1BC46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC468u;
            // 0x1bc46c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC470u; }
        if (ctx->pc != 0x1BC470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC470u; }
        if (ctx->pc != 0x1BC470u) { return; }
    }
    ctx->pc = 0x1BC470u;
    // 0x1bc470: 0x10000901  b           . + 4 + (0x901 << 2)
    ctx->pc = 0x1BC470u;
    {
        const bool branch_taken_0x1bc470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc470) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC478u;
label_1bc478:
    // 0x1bc478: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc47c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc480: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bc480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc484: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC484u;
    SET_GPR_U32(ctx, 31, 0x1BC48Cu);
    ctx->pc = 0x1BC488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC484u;
            // 0x1bc488: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC48Cu; }
        if (ctx->pc != 0x1BC48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC48Cu; }
        if (ctx->pc != 0x1BC48Cu) { return; }
    }
    ctx->pc = 0x1BC48Cu;
    // 0x1bc48c: 0x100008fa  b           . + 4 + (0x8FA << 2)
    ctx->pc = 0x1BC48Cu;
    {
        const bool branch_taken_0x1bc48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc48c) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC494u;
    // 0x1bc494: 0x0  nop
    ctx->pc = 0x1bc494u;
    // NOP
label_1bc498:
    // 0x1bc498: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bc498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bc49c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1bc49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bc4a0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bc4a0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bc4a4: 0x0  nop
    ctx->pc = 0x1bc4a4u;
    // NOP
    // 0x1bc4a8: 0x0  nop
    ctx->pc = 0x1bc4a8u;
    // NOP
    // 0x1bc4ac: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc4acu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bc4b0: 0x144008f1  bnez        $v0, . + 4 + (0x8F1 << 2)
    ctx->pc = 0x1BC4B0u;
    {
        const bool branch_taken_0x1bc4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4b0) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC4B8u;
    // 0x1bc4b8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1bc4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc4bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc4bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc4c0: 0x0  nop
    ctx->pc = 0x1bc4c0u;
    // NOP
    // 0x1bc4c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc4c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc4c8: 0x45010071  bc1t        . + 4 + (0x71 << 2)
    ctx->pc = 0x1BC4C8u;
    {
        const bool branch_taken_0x1bc4c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4C8u;
            // 0x1bc4cc: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc4c8) {
            ctx->pc = 0x1BC690u;
            goto label_1bc690;
        }
    }
    ctx->pc = 0x1BC4D0u;
    // 0x1bc4d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bc4d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bc4d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc4d8: 0x0  nop
    ctx->pc = 0x1bc4d8u;
    // NOP
    // 0x1bc4dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc4e0: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x1BC4E0u;
    {
        const bool branch_taken_0x1bc4e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc4e0) {
            ctx->pc = 0x1BC690u;
            goto label_1bc690;
        }
    }
    ctx->pc = 0x1BC4E8u;
    // 0x1bc4e8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bc4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc4ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc4f0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1bc4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1bc4f4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1bc4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bc4f8: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1bc4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1bc4fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc500: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BC500u;
    SET_GPR_U32(ctx, 31, 0x1BC508u);
    ctx->pc = 0x1BC504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC500u;
            // 0x1bc504: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC508u; }
        if (ctx->pc != 0x1BC508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC508u; }
        if (ctx->pc != 0x1BC508u) { return; }
    }
    ctx->pc = 0x1BC508u;
    // 0x1bc508: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC508u;
    SET_GPR_U32(ctx, 31, 0x1BC510u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC510u; }
        if (ctx->pc != 0x1BC510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC510u; }
        if (ctx->pc != 0x1BC510u) { return; }
    }
    ctx->pc = 0x1BC510u;
    // 0x1bc510: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc514: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc518: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc51c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc520: 0x0  nop
    ctx->pc = 0x1bc520u;
    // NOP
    // 0x1bc524: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc528: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC528u;
    SET_GPR_U32(ctx, 31, 0x1BC530u);
    ctx->pc = 0x1BC52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC528u;
            // 0x1bc52c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC530u; }
        if (ctx->pc != 0x1BC530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC530u; }
        if (ctx->pc != 0x1BC530u) { return; }
    }
    ctx->pc = 0x1BC530u;
    // 0x1bc530: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc534: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc534u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc538: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc53c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc53cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc540: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC540u;
    SET_GPR_U32(ctx, 31, 0x1BC548u);
    ctx->pc = 0x1BC544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC540u;
            // 0x1bc544: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC548u; }
        if (ctx->pc != 0x1BC548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC548u; }
        if (ctx->pc != 0x1BC548u) { return; }
    }
    ctx->pc = 0x1BC548u;
    // 0x1bc548: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC548u;
    SET_GPR_U32(ctx, 31, 0x1BC550u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC550u; }
        if (ctx->pc != 0x1BC550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC550u; }
        if (ctx->pc != 0x1BC550u) { return; }
    }
    ctx->pc = 0x1BC550u;
    // 0x1bc550: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc554: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc558: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc55c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc560: 0x0  nop
    ctx->pc = 0x1bc560u;
    // NOP
    // 0x1bc564: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc568: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC568u;
    SET_GPR_U32(ctx, 31, 0x1BC570u);
    ctx->pc = 0x1BC56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC568u;
            // 0x1bc56c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC570u; }
        if (ctx->pc != 0x1BC570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC570u; }
        if (ctx->pc != 0x1BC570u) { return; }
    }
    ctx->pc = 0x1BC570u;
    // 0x1bc570: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc574: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc574u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc578: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc57c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc57cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc580: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC580u;
    SET_GPR_U32(ctx, 31, 0x1BC588u);
    ctx->pc = 0x1BC584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC580u;
            // 0x1bc584: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC588u; }
        if (ctx->pc != 0x1BC588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC588u; }
        if (ctx->pc != 0x1BC588u) { return; }
    }
    ctx->pc = 0x1BC588u;
    // 0x1bc588: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC588u;
    SET_GPR_U32(ctx, 31, 0x1BC590u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC590u; }
        if (ctx->pc != 0x1BC590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC590u; }
        if (ctx->pc != 0x1BC590u) { return; }
    }
    ctx->pc = 0x1BC590u;
    // 0x1bc590: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc594: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc598: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc59c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc5a0: 0x0  nop
    ctx->pc = 0x1bc5a0u;
    // NOP
    // 0x1bc5a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc5a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc5a8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC5A8u;
    SET_GPR_U32(ctx, 31, 0x1BC5B0u);
    ctx->pc = 0x1BC5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5A8u;
            // 0x1bc5ac: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5B0u; }
        if (ctx->pc != 0x1BC5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5B0u; }
        if (ctx->pc != 0x1BC5B0u) { return; }
    }
    ctx->pc = 0x1BC5B0u;
    // 0x1bc5b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc5b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc5b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc5b8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc5bc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc5bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc5c0: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC5C0u;
    SET_GPR_U32(ctx, 31, 0x1BC5C8u);
    ctx->pc = 0x1BC5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5C0u;
            // 0x1bc5c4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5C8u; }
        if (ctx->pc != 0x1BC5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5C8u; }
        if (ctx->pc != 0x1BC5C8u) { return; }
    }
    ctx->pc = 0x1BC5C8u;
    // 0x1bc5c8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC5C8u;
    SET_GPR_U32(ctx, 31, 0x1BC5D0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5D0u; }
        if (ctx->pc != 0x1BC5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5D0u; }
        if (ctx->pc != 0x1BC5D0u) { return; }
    }
    ctx->pc = 0x1BC5D0u;
    // 0x1bc5d0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc5d4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc5d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc5dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc5e0: 0x0  nop
    ctx->pc = 0x1bc5e0u;
    // NOP
    // 0x1bc5e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc5e8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC5E8u;
    SET_GPR_U32(ctx, 31, 0x1BC5F0u);
    ctx->pc = 0x1BC5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5E8u;
            // 0x1bc5ec: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5F0u; }
        if (ctx->pc != 0x1BC5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5F0u; }
        if (ctx->pc != 0x1BC5F0u) { return; }
    }
    ctx->pc = 0x1BC5F0u;
    // 0x1bc5f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc5f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc5f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc5f8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc5fc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc5fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc600: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC600u;
    SET_GPR_U32(ctx, 31, 0x1BC608u);
    ctx->pc = 0x1BC604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC600u;
            // 0x1bc604: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC608u; }
        if (ctx->pc != 0x1BC608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC608u; }
        if (ctx->pc != 0x1BC608u) { return; }
    }
    ctx->pc = 0x1BC608u;
    // 0x1bc608: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC608u;
    SET_GPR_U32(ctx, 31, 0x1BC610u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC610u; }
        if (ctx->pc != 0x1BC610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC610u; }
        if (ctx->pc != 0x1BC610u) { return; }
    }
    ctx->pc = 0x1BC610u;
    // 0x1bc610: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc614: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc618: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc61c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc620: 0x0  nop
    ctx->pc = 0x1bc620u;
    // NOP
    // 0x1bc624: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc628: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC628u;
    SET_GPR_U32(ctx, 31, 0x1BC630u);
    ctx->pc = 0x1BC62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC628u;
            // 0x1bc62c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC630u; }
        if (ctx->pc != 0x1BC630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC630u; }
        if (ctx->pc != 0x1BC630u) { return; }
    }
    ctx->pc = 0x1BC630u;
    // 0x1bc630: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc634: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc634u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc638: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc63c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc63cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc640: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC640u;
    SET_GPR_U32(ctx, 31, 0x1BC648u);
    ctx->pc = 0x1BC644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC640u;
            // 0x1bc644: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC648u; }
        if (ctx->pc != 0x1BC648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC648u; }
        if (ctx->pc != 0x1BC648u) { return; }
    }
    ctx->pc = 0x1BC648u;
    // 0x1bc648: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC648u;
    SET_GPR_U32(ctx, 31, 0x1BC650u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC650u; }
        if (ctx->pc != 0x1BC650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC650u; }
        if (ctx->pc != 0x1BC650u) { return; }
    }
    ctx->pc = 0x1BC650u;
    // 0x1bc650: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bc650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bc654: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc658: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bc658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc65c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bc65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc660: 0x0  nop
    ctx->pc = 0x1bc660u;
    // NOP
    // 0x1bc664: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc668: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC668u;
    SET_GPR_U32(ctx, 31, 0x1BC670u);
    ctx->pc = 0x1BC66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC668u;
            // 0x1bc66c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC670u; }
        if (ctx->pc != 0x1BC670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC670u; }
        if (ctx->pc != 0x1BC670u) { return; }
    }
    ctx->pc = 0x1BC670u;
    // 0x1bc670: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc674: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc674u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc678: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc67c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bc67cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc680: 0xc065254  jal         func_194950
    ctx->pc = 0x1BC680u;
    SET_GPR_U32(ctx, 31, 0x1BC688u);
    ctx->pc = 0x1BC684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC680u;
            // 0x1bc684: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC688u; }
        if (ctx->pc != 0x1BC688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC688u; }
        if (ctx->pc != 0x1BC688u) { return; }
    }
    ctx->pc = 0x1BC688u;
    // 0x1bc688: 0x1000087b  b           . + 4 + (0x87B << 2)
    ctx->pc = 0x1BC688u;
    {
        const bool branch_taken_0x1bc688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc688) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC690u;
label_1bc690:
    // 0x1bc690: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bc690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc694: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc698: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bc698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc69c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC69Cu;
    SET_GPR_U32(ctx, 31, 0x1BC6A4u);
    ctx->pc = 0x1BC6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC69Cu;
            // 0x1bc6a0: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6A4u; }
        if (ctx->pc != 0x1BC6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6A4u; }
        if (ctx->pc != 0x1BC6A4u) { return; }
    }
    ctx->pc = 0x1BC6A4u;
    // 0x1bc6a4: 0x10000874  b           . + 4 + (0x874 << 2)
    ctx->pc = 0x1BC6A4u;
    {
        const bool branch_taken_0x1bc6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc6a4) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC6ACu;
    // 0x1bc6ac: 0x0  nop
    ctx->pc = 0x1bc6acu;
    // NOP
label_1bc6b0:
    // 0x1bc6b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bc6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc6b4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1bc6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bc6b8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1bc6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc6bc: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1bc6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bc6c0: 0xc06fc7c  jal         func_1BF1F0
    ctx->pc = 0x1BC6C0u;
    SET_GPR_U32(ctx, 31, 0x1BC6C8u);
    ctx->pc = 0x1BC6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC6C0u;
            // 0x1bc6c4: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF1F0u;
    if (runtime->hasFunction(0x1BF1F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6C8u; }
        if (ctx->pc != 0x1BC6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bf1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6C8u; }
        if (ctx->pc != 0x1BC6C8u) { return; }
    }
    ctx->pc = 0x1BC6C8u;
    // 0x1bc6c8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BC6C8u;
    SET_GPR_U32(ctx, 31, 0x1BC6D0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6D0u; }
        if (ctx->pc != 0x1BC6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6D0u; }
        if (ctx->pc != 0x1BC6D0u) { return; }
    }
    ctx->pc = 0x1BC6D0u;
    // 0x1bc6d0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BC6D0u;
    SET_GPR_U32(ctx, 31, 0x1BC6D8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6D8u; }
        if (ctx->pc != 0x1BC6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC6D8u; }
        if (ctx->pc != 0x1BC6D8u) { return; }
    }
    ctx->pc = 0x1BC6D8u;
    // 0x1bc6d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc6dc: 0x1443007c  bne         $v0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x1BC6DCu;
    {
        const bool branch_taken_0x1bc6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc6dc) {
            ctx->pc = 0x1BC8D0u;
            goto label_1bc8d0;
        }
    }
    ctx->pc = 0x1BC6E4u;
    // 0x1bc6e4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bc6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bc6e8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1bc6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bc6ec: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bc6ecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bc6f0: 0x0  nop
    ctx->pc = 0x1bc6f0u;
    // NOP
    // 0x1bc6f4: 0x0  nop
    ctx->pc = 0x1bc6f4u;
    // NOP
    // 0x1bc6f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc6f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bc6fc: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1BC6FCu;
    {
        const bool branch_taken_0x1bc6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc6fc) {
            ctx->pc = 0x1BC860u;
            goto label_1bc860;
        }
    }
    ctx->pc = 0x1BC704u;
    // 0x1bc704: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1bc704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bc708: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC708u;
    {
        const bool branch_taken_0x1bc708 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BC70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC708u;
            // 0x1bc70c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc708) {
            ctx->pc = 0x1BC71Cu;
            goto label_1bc71c;
        }
    }
    ctx->pc = 0x1BC710u;
    // 0x1bc710: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC710u;
    {
        const bool branch_taken_0x1bc710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc710) {
            ctx->pc = 0x1BC71Cu;
            goto label_1bc71c;
        }
    }
    ctx->pc = 0x1BC718u;
    // 0x1bc718: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1bc718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1bc71c:
    // 0x1bc71c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BC71Cu;
    {
        const bool branch_taken_0x1bc71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc71c) {
            ctx->pc = 0x1BC7C0u;
            goto label_1bc7c0;
        }
    }
    ctx->pc = 0x1BC724u;
    // 0x1bc724: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc728: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1bc728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1bc72c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc730: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc734: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC734u;
    SET_GPR_U32(ctx, 31, 0x1BC73Cu);
    ctx->pc = 0x1BC738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC734u;
            // 0x1bc738: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC73Cu; }
        if (ctx->pc != 0x1BC73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC73Cu; }
        if (ctx->pc != 0x1BC73Cu) { return; }
    }
    ctx->pc = 0x1BC73Cu;
    // 0x1bc73c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc740: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1bc740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1bc744: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc748: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc74c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC74Cu;
    SET_GPR_U32(ctx, 31, 0x1BC754u);
    ctx->pc = 0x1BC750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC74Cu;
            // 0x1bc750: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC754u; }
        if (ctx->pc != 0x1BC754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC754u; }
        if (ctx->pc != 0x1BC754u) { return; }
    }
    ctx->pc = 0x1BC754u;
    // 0x1bc754: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc758: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1bc758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1bc75c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc760: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc764: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC764u;
    SET_GPR_U32(ctx, 31, 0x1BC76Cu);
    ctx->pc = 0x1BC768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC764u;
            // 0x1bc768: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC76Cu; }
        if (ctx->pc != 0x1BC76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC76Cu; }
        if (ctx->pc != 0x1BC76Cu) { return; }
    }
    ctx->pc = 0x1BC76Cu;
    // 0x1bc76c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc770: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1bc770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1bc774: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc778: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc77c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC77Cu;
    SET_GPR_U32(ctx, 31, 0x1BC784u);
    ctx->pc = 0x1BC780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC77Cu;
            // 0x1bc780: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC784u; }
        if (ctx->pc != 0x1BC784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC784u; }
        if (ctx->pc != 0x1BC784u) { return; }
    }
    ctx->pc = 0x1BC784u;
    // 0x1bc784: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc788: 0x3c02c3b4  lui         $v0, 0xC3B4
    ctx->pc = 0x1bc788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50100 << 16));
    // 0x1bc78c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc790: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc794: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC794u;
    SET_GPR_U32(ctx, 31, 0x1BC79Cu);
    ctx->pc = 0x1BC798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC794u;
            // 0x1bc798: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC79Cu; }
        if (ctx->pc != 0x1BC79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC79Cu; }
        if (ctx->pc != 0x1BC79Cu) { return; }
    }
    ctx->pc = 0x1BC79Cu;
    // 0x1bc79c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc7a0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1bc7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1bc7a4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc7a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc7ac: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC7ACu;
    SET_GPR_U32(ctx, 31, 0x1BC7B4u);
    ctx->pc = 0x1BC7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7ACu;
            // 0x1bc7b0: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7B4u; }
        if (ctx->pc != 0x1BC7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7B4u; }
        if (ctx->pc != 0x1BC7B4u) { return; }
    }
    ctx->pc = 0x1BC7B4u;
    // 0x1bc7b4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BC7B4u;
    {
        const bool branch_taken_0x1bc7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc7b4) {
            ctx->pc = 0x1BC850u;
            goto label_1bc850;
        }
    }
    ctx->pc = 0x1BC7BCu;
    // 0x1bc7bc: 0x0  nop
    ctx->pc = 0x1bc7bcu;
    // NOP
label_1bc7c0:
    // 0x1bc7c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc7c4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc7c8: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x1bc7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x1bc7cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc7d0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC7D0u;
    SET_GPR_U32(ctx, 31, 0x1BC7D8u);
    ctx->pc = 0x1BC7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7D0u;
            // 0x1bc7d4: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7D8u; }
        if (ctx->pc != 0x1BC7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7D8u; }
        if (ctx->pc != 0x1BC7D8u) { return; }
    }
    ctx->pc = 0x1BC7D8u;
    // 0x1bc7d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc7dc: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1bc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1bc7e0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc7e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc7e8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC7E8u;
    SET_GPR_U32(ctx, 31, 0x1BC7F0u);
    ctx->pc = 0x1BC7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC7E8u;
            // 0x1bc7ec: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7F0u; }
        if (ctx->pc != 0x1BC7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7F0u; }
        if (ctx->pc != 0x1BC7F0u) { return; }
    }
    ctx->pc = 0x1BC7F0u;
    // 0x1bc7f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc7f4: 0x3c02c352  lui         $v0, 0xC352
    ctx->pc = 0x1bc7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50002 << 16));
    // 0x1bc7f8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc7fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc800: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC800u;
    SET_GPR_U32(ctx, 31, 0x1BC808u);
    ctx->pc = 0x1BC804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC800u;
            // 0x1bc804: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC808u; }
        if (ctx->pc != 0x1BC808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC808u; }
        if (ctx->pc != 0x1BC808u) { return; }
    }
    ctx->pc = 0x1BC808u;
    // 0x1bc808: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc80c: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x1bc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
    // 0x1bc810: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc814: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc818: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC818u;
    SET_GPR_U32(ctx, 31, 0x1BC820u);
    ctx->pc = 0x1BC81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC818u;
            // 0x1bc81c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC820u; }
        if (ctx->pc != 0x1BC820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC820u; }
        if (ctx->pc != 0x1BC820u) { return; }
    }
    ctx->pc = 0x1BC820u;
    // 0x1bc820: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc824: 0x3c02c3a5  lui         $v0, 0xC3A5
    ctx->pc = 0x1bc824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50085 << 16));
    // 0x1bc828: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc82c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc830: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC830u;
    SET_GPR_U32(ctx, 31, 0x1BC838u);
    ctx->pc = 0x1BC834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC830u;
            // 0x1bc834: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC838u; }
        if (ctx->pc != 0x1BC838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC838u; }
        if (ctx->pc != 0x1BC838u) { return; }
    }
    ctx->pc = 0x1BC838u;
    // 0x1bc838: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc83c: 0x3c0243a5  lui         $v0, 0x43A5
    ctx->pc = 0x1bc83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17317 << 16));
    // 0x1bc840: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc844: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc848: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC848u;
    SET_GPR_U32(ctx, 31, 0x1BC850u);
    ctx->pc = 0x1BC84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC848u;
            // 0x1bc84c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC850u; }
        if (ctx->pc != 0x1BC850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC850u; }
        if (ctx->pc != 0x1BC850u) { return; }
    }
    ctx->pc = 0x1BC850u;
label_1bc850:
    // 0x1bc850: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1bc850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bc854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bc854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bc858: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1bc858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1bc85c: 0x0  nop
    ctx->pc = 0x1bc85cu;
    // NOP
label_1bc860:
    // 0x1bc860: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bc860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bc864: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1bc864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bc868: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bc868u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bc86c: 0x0  nop
    ctx->pc = 0x1bc86cu;
    // NOP
    // 0x1bc870: 0x0  nop
    ctx->pc = 0x1bc870u;
    // NOP
    // 0x1bc874: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc874u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bc878: 0x144007ff  bnez        $v0, . + 4 + (0x7FF << 2)
    ctx->pc = 0x1BC878u;
    {
        const bool branch_taken_0x1bc878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc878) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC880u;
    // 0x1bc880: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bc880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc884: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1bc884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc888: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1bc888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc88c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bc88cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bc890: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bc890u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bc894: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1bc894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1bc898: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1bc898u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1bc89c: 0xc069010  jal         func_1A4040
    ctx->pc = 0x1BC89Cu;
    SET_GPR_U32(ctx, 31, 0x1BC8A4u);
    ctx->pc = 0x1BC8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC89Cu;
            // 0x1bc8a0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8A4u; }
        if (ctx->pc != 0x1BC8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8A4u; }
        if (ctx->pc != 0x1BC8A4u) { return; }
    }
    ctx->pc = 0x1BC8A4u;
    // 0x1bc8a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bc8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc8a8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1bc8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc8ac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1bc8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc8b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bc8b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bc8b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bc8b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bc8b8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1bc8b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1bc8bc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1bc8bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1bc8c0: 0xc069010  jal         func_1A4040
    ctx->pc = 0x1BC8C0u;
    SET_GPR_U32(ctx, 31, 0x1BC8C8u);
    ctx->pc = 0x1BC8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC8C0u;
            // 0x1bc8c4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8C8u; }
        if (ctx->pc != 0x1BC8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8C8u; }
        if (ctx->pc != 0x1BC8C8u) { return; }
    }
    ctx->pc = 0x1BC8C8u;
    // 0x1bc8c8: 0x100007eb  b           . + 4 + (0x7EB << 2)
    ctx->pc = 0x1BC8C8u;
    {
        const bool branch_taken_0x1bc8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8c8) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BC8D0u;
label_1bc8d0:
    // 0x1bc8d0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BC8D0u;
    SET_GPR_U32(ctx, 31, 0x1BC8D8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8D8u; }
        if (ctx->pc != 0x1BC8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC8D8u; }
        if (ctx->pc != 0x1BC8D8u) { return; }
    }
    ctx->pc = 0x1BC8D8u;
    // 0x1bc8d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc8dc: 0x1443007c  bne         $v0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x1BC8DCu;
    {
        const bool branch_taken_0x1bc8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc8dc) {
            ctx->pc = 0x1BCAD0u;
            goto label_1bcad0;
        }
    }
    ctx->pc = 0x1BC8E4u;
    // 0x1bc8e4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bc8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bc8e8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1bc8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bc8ec: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bc8ecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bc8f0: 0x0  nop
    ctx->pc = 0x1bc8f0u;
    // NOP
    // 0x1bc8f4: 0x0  nop
    ctx->pc = 0x1bc8f4u;
    // NOP
    // 0x1bc8f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1bc8f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bc8fc: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1BC8FCu;
    {
        const bool branch_taken_0x1bc8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8fc) {
            ctx->pc = 0x1BCA60u;
            goto label_1bca60;
        }
    }
    ctx->pc = 0x1BC904u;
    // 0x1bc904: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1bc904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bc908: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC908u;
    {
        const bool branch_taken_0x1bc908 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BC90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC908u;
            // 0x1bc90c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc908) {
            ctx->pc = 0x1BC91Cu;
            goto label_1bc91c;
        }
    }
    ctx->pc = 0x1BC910u;
    // 0x1bc910: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC910u;
    {
        const bool branch_taken_0x1bc910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc910) {
            ctx->pc = 0x1BC91Cu;
            goto label_1bc91c;
        }
    }
    ctx->pc = 0x1BC918u;
    // 0x1bc918: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1bc918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1bc91c:
    // 0x1bc91c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BC91Cu;
    {
        const bool branch_taken_0x1bc91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc91c) {
            ctx->pc = 0x1BC9C0u;
            goto label_1bc9c0;
        }
    }
    ctx->pc = 0x1BC924u;
    // 0x1bc924: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc928: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1bc928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1bc92c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc930: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc934: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC934u;
    SET_GPR_U32(ctx, 31, 0x1BC93Cu);
    ctx->pc = 0x1BC938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC934u;
            // 0x1bc938: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC93Cu; }
        if (ctx->pc != 0x1BC93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC93Cu; }
        if (ctx->pc != 0x1BC93Cu) { return; }
    }
    ctx->pc = 0x1BC93Cu;
    // 0x1bc93c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc940: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1bc940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1bc944: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc948: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc94c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC94Cu;
    SET_GPR_U32(ctx, 31, 0x1BC954u);
    ctx->pc = 0x1BC950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC94Cu;
            // 0x1bc950: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC954u; }
        if (ctx->pc != 0x1BC954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC954u; }
        if (ctx->pc != 0x1BC954u) { return; }
    }
    ctx->pc = 0x1BC954u;
    // 0x1bc954: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc958: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1bc958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1bc95c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc960: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc964: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC964u;
    SET_GPR_U32(ctx, 31, 0x1BC96Cu);
    ctx->pc = 0x1BC968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC964u;
            // 0x1bc968: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC96Cu; }
        if (ctx->pc != 0x1BC96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC96Cu; }
        if (ctx->pc != 0x1BC96Cu) { return; }
    }
    ctx->pc = 0x1BC96Cu;
    // 0x1bc96c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc970: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1bc970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1bc974: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc978: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc97c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC97Cu;
    SET_GPR_U32(ctx, 31, 0x1BC984u);
    ctx->pc = 0x1BC980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC97Cu;
            // 0x1bc980: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC984u; }
        if (ctx->pc != 0x1BC984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC984u; }
        if (ctx->pc != 0x1BC984u) { return; }
    }
    ctx->pc = 0x1BC984u;
    // 0x1bc984: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc988: 0x3c02c3b4  lui         $v0, 0xC3B4
    ctx->pc = 0x1bc988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50100 << 16));
    // 0x1bc98c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc990: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc994: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC994u;
    SET_GPR_U32(ctx, 31, 0x1BC99Cu);
    ctx->pc = 0x1BC998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC994u;
            // 0x1bc998: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC99Cu; }
        if (ctx->pc != 0x1BC99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC99Cu; }
        if (ctx->pc != 0x1BC99Cu) { return; }
    }
    ctx->pc = 0x1BC99Cu;
    // 0x1bc99c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc9a0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1bc9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1bc9a4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc9a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc9ac: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC9ACu;
    SET_GPR_U32(ctx, 31, 0x1BC9B4u);
    ctx->pc = 0x1BC9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC9ACu;
            // 0x1bc9b0: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9B4u; }
        if (ctx->pc != 0x1BC9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9B4u; }
        if (ctx->pc != 0x1BC9B4u) { return; }
    }
    ctx->pc = 0x1BC9B4u;
    // 0x1bc9b4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BC9B4u;
    {
        const bool branch_taken_0x1bc9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9b4) {
            ctx->pc = 0x1BCA50u;
            goto label_1bca50;
        }
    }
    ctx->pc = 0x1BC9BCu;
    // 0x1bc9bc: 0x0  nop
    ctx->pc = 0x1bc9bcu;
    // NOP
label_1bc9c0:
    // 0x1bc9c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc9c4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc9c8: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x1bc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x1bc9cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc9d0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC9D0u;
    SET_GPR_U32(ctx, 31, 0x1BC9D8u);
    ctx->pc = 0x1BC9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC9D0u;
            // 0x1bc9d4: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9D8u; }
        if (ctx->pc != 0x1BC9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9D8u; }
        if (ctx->pc != 0x1BC9D8u) { return; }
    }
    ctx->pc = 0x1BC9D8u;
    // 0x1bc9d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc9dc: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1bc9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1bc9e0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc9e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc9e8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BC9E8u;
    SET_GPR_U32(ctx, 31, 0x1BC9F0u);
    ctx->pc = 0x1BC9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC9E8u;
            // 0x1bc9ec: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9F0u; }
        if (ctx->pc != 0x1BC9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC9F0u; }
        if (ctx->pc != 0x1BC9F0u) { return; }
    }
    ctx->pc = 0x1BC9F0u;
    // 0x1bc9f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bc9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc9f4: 0x3c02c352  lui         $v0, 0xC352
    ctx->pc = 0x1bc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50002 << 16));
    // 0x1bc9f8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bc9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bc9fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bca00: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BCA00u;
    SET_GPR_U32(ctx, 31, 0x1BCA08u);
    ctx->pc = 0x1BCA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA00u;
            // 0x1bca04: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA08u; }
        if (ctx->pc != 0x1BCA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA08u; }
        if (ctx->pc != 0x1BCA08u) { return; }
    }
    ctx->pc = 0x1BCA08u;
    // 0x1bca08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bca08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bca0c: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x1bca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
    // 0x1bca10: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bca10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bca14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bca14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bca18: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BCA18u;
    SET_GPR_U32(ctx, 31, 0x1BCA20u);
    ctx->pc = 0x1BCA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA18u;
            // 0x1bca1c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA20u; }
        if (ctx->pc != 0x1BCA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA20u; }
        if (ctx->pc != 0x1BCA20u) { return; }
    }
    ctx->pc = 0x1BCA20u;
    // 0x1bca20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bca24: 0x3c02c3a5  lui         $v0, 0xC3A5
    ctx->pc = 0x1bca24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50085 << 16));
    // 0x1bca28: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bca2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bca2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bca30: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BCA30u;
    SET_GPR_U32(ctx, 31, 0x1BCA38u);
    ctx->pc = 0x1BCA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA30u;
            // 0x1bca34: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA38u; }
        if (ctx->pc != 0x1BCA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA38u; }
        if (ctx->pc != 0x1BCA38u) { return; }
    }
    ctx->pc = 0x1BCA38u;
    // 0x1bca38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bca3c: 0x3c0243a5  lui         $v0, 0x43A5
    ctx->pc = 0x1bca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17317 << 16));
    // 0x1bca40: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bca44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bca44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bca48: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BCA48u;
    SET_GPR_U32(ctx, 31, 0x1BCA50u);
    ctx->pc = 0x1BCA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA48u;
            // 0x1bca4c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA50u; }
        if (ctx->pc != 0x1BCA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCA50u; }
        if (ctx->pc != 0x1BCA50u) { return; }
    }
    ctx->pc = 0x1BCA50u;
label_1bca50:
    // 0x1bca50: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1bca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bca54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bca58: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1bca58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1bca5c: 0x0  nop
    ctx->pc = 0x1bca5cu;
    // NOP
label_1bca60:
    // 0x1bca60: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bca64: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1bca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1bca68: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bca68u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bca6c: 0x0  nop
    ctx->pc = 0x1bca6cu;
    // NOP
    // 0x1bca70: 0x0  nop
    ctx->pc = 0x1bca70u;
    // NOP
    // 0x1bca74: 0x1010  mfhi        $v0
    ctx->pc = 0x1bca74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bca78: 0x1440077f  bnez        $v0, . + 4 + (0x77F << 2)
    ctx->pc = 0x1BCA78u;
    {
        const bool branch_taken_0x1bca78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bca78) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BCA80u;
    // 0x1bca80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bca84: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1bca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bca88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1bca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bca8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bca8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bca90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bca90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bca94: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1bca94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1bca98: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1bca98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1bca9c: 0xc069010  jal         func_1A4040
    ctx->pc = 0x1BCA9Cu;
    SET_GPR_U32(ctx, 31, 0x1BCAA4u);
    ctx->pc = 0x1BCAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCA9Cu;
            // 0x1bcaa0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAA4u; }
        if (ctx->pc != 0x1BCAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAA4u; }
        if (ctx->pc != 0x1BCAA4u) { return; }
    }
    ctx->pc = 0x1BCAA4u;
    // 0x1bcaa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bcaa8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1bcaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcaac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1bcaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcab0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bcab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bcab4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bcab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bcab8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1bcab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1bcabc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1bcabcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1bcac0: 0xc069010  jal         func_1A4040
    ctx->pc = 0x1BCAC0u;
    SET_GPR_U32(ctx, 31, 0x1BCAC8u);
    ctx->pc = 0x1BCAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCAC0u;
            // 0x1bcac4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAC8u; }
        if (ctx->pc != 0x1BCAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCAC8u; }
        if (ctx->pc != 0x1BCAC8u) { return; }
    }
    ctx->pc = 0x1BCAC8u;
    // 0x1bcac8: 0x1000076b  b           . + 4 + (0x76B << 2)
    ctx->pc = 0x1BCAC8u;
    {
        const bool branch_taken_0x1bcac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcac8) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BCAD0u;
label_1bcad0:
    // 0x1bcad0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bcad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bcad4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1bcad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1bcad8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bcad8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bcadc: 0x0  nop
    ctx->pc = 0x1bcadcu;
    // NOP
    // 0x1bcae0: 0x0  nop
    ctx->pc = 0x1bcae0u;
    // NOP
    // 0x1bcae4: 0x1010  mfhi        $v0
    ctx->pc = 0x1bcae4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bcae8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BCAE8u;
    {
        const bool branch_taken_0x1bcae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcae8) {
            ctx->pc = 0x1BCB90u;
            goto label_1bcb90;
        }
    }
    ctx->pc = 0x1BCAF0u;
    // 0x1bcaf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bcaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcaf4: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1bcaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1bcaf8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bcaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcafc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bcafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bcb00: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BCB00u;
    SET_GPR_U32(ctx, 31, 0x1BCB08u);
    ctx->pc = 0x1BCB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB00u;
            // 0x1bcb04: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB08u; }
        if (ctx->pc != 0x1BCB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB08u; }
        if (ctx->pc != 0x1BCB08u) { return; }
    }
    ctx->pc = 0x1BCB08u;
    // 0x1bcb08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bcb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcb0c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1bcb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1bcb10: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bcb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcb14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bcb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bcb18: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BCB18u;
    SET_GPR_U32(ctx, 31, 0x1BCB20u);
    ctx->pc = 0x1BCB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB18u;
            // 0x1bcb1c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB20u; }
        if (ctx->pc != 0x1BCB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB20u; }
        if (ctx->pc != 0x1BCB20u) { return; }
    }
    ctx->pc = 0x1BCB20u;
    // 0x1bcb20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bcb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcb24: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1bcb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1bcb28: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bcb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcb2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bcb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bcb30: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BCB30u;
    SET_GPR_U32(ctx, 31, 0x1BCB38u);
    ctx->pc = 0x1BCB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB30u;
            // 0x1bcb34: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB38u; }
        if (ctx->pc != 0x1BCB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB38u; }
        if (ctx->pc != 0x1BCB38u) { return; }
    }
    ctx->pc = 0x1BCB38u;
    // 0x1bcb38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bcb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcb3c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1bcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1bcb40: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bcb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcb44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bcb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bcb48: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BCB48u;
    SET_GPR_U32(ctx, 31, 0x1BCB50u);
    ctx->pc = 0x1BCB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB48u;
            // 0x1bcb4c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB50u; }
        if (ctx->pc != 0x1BCB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB50u; }
        if (ctx->pc != 0x1BCB50u) { return; }
    }
    ctx->pc = 0x1BCB50u;
    // 0x1bcb50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bcb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcb54: 0x3c02c3b4  lui         $v0, 0xC3B4
    ctx->pc = 0x1bcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50100 << 16));
    // 0x1bcb58: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bcb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcb5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bcb5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bcb60: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BCB60u;
    SET_GPR_U32(ctx, 31, 0x1BCB68u);
    ctx->pc = 0x1BCB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB60u;
            // 0x1bcb64: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB68u; }
        if (ctx->pc != 0x1BCB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB68u; }
        if (ctx->pc != 0x1BCB68u) { return; }
    }
    ctx->pc = 0x1BCB68u;
    // 0x1bcb68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bcb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcb6c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1bcb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1bcb70: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bcb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcb74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bcb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bcb78: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BCB78u;
    SET_GPR_U32(ctx, 31, 0x1BCB80u);
    ctx->pc = 0x1BCB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB78u;
            // 0x1bcb7c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB80u; }
        if (ctx->pc != 0x1BCB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCB80u; }
        if (ctx->pc != 0x1BCB80u) { return; }
    }
    ctx->pc = 0x1BCB80u;
    // 0x1bcb80: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1bcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bcb84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bcb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bcb88: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1bcb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1bcb8c: 0x0  nop
    ctx->pc = 0x1bcb8cu;
    // NOP
label_1bcb90:
    // 0x1bcb90: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bcb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bcb94: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1bcb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1bcb98: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bcb98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bcb9c: 0x0  nop
    ctx->pc = 0x1bcb9cu;
    // NOP
    // 0x1bcba0: 0x0  nop
    ctx->pc = 0x1bcba0u;
    // NOP
    // 0x1bcba4: 0x1010  mfhi        $v0
    ctx->pc = 0x1bcba4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bcba8: 0x14400733  bnez        $v0, . + 4 + (0x733 << 2)
    ctx->pc = 0x1BCBA8u;
    {
        const bool branch_taken_0x1bcba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcba8) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BCBB0u;
    // 0x1bcbb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bcbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bcbb4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1bcbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcbb8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1bcbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcbbc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bcbbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bcbc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bcbc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bcbc4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1bcbc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1bcbc8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1bcbc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1bcbcc: 0xc069010  jal         func_1A4040
    ctx->pc = 0x1BCBCCu;
    SET_GPR_U32(ctx, 31, 0x1BCBD4u);
    ctx->pc = 0x1BCBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBCCu;
            // 0x1bcbd0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBD4u; }
        if (ctx->pc != 0x1BCBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBD4u; }
        if (ctx->pc != 0x1BCBD4u) { return; }
    }
    ctx->pc = 0x1BCBD4u;
    // 0x1bcbd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bcbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bcbd8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1bcbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcbdc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1bcbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcbe0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bcbe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bcbe4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bcbe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bcbe8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1bcbe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1bcbec: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1bcbecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1bcbf0: 0xc069010  jal         func_1A4040
    ctx->pc = 0x1BCBF0u;
    SET_GPR_U32(ctx, 31, 0x1BCBF8u);
    ctx->pc = 0x1BCBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCBF0u;
            // 0x1bcbf4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4040u;
    if (runtime->hasFunction(0x1A4040u)) {
        auto targetFn = runtime->lookupFunction(0x1A4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBF8u; }
        if (ctx->pc != 0x1BCBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn4_01_0x1a4040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCBF8u; }
        if (ctx->pc != 0x1BCBF8u) { return; }
    }
    ctx->pc = 0x1BCBF8u;
    // 0x1bcbf8: 0x1000071f  b           . + 4 + (0x71F << 2)
    ctx->pc = 0x1BCBF8u;
    {
        const bool branch_taken_0x1bcbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcbf8) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BCC00u;
label_1bcc00:
    // 0x1bcc00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bcc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bcc04: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1bcc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bcc08: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1bcc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bcc0c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1bcc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bcc10: 0xc06fc7c  jal         func_1BF1F0
    ctx->pc = 0x1BCC10u;
    SET_GPR_U32(ctx, 31, 0x1BCC18u);
    ctx->pc = 0x1BCC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC10u;
            // 0x1bcc14: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF1F0u;
    if (runtime->hasFunction(0x1BF1F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC18u; }
        if (ctx->pc != 0x1BCC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bf1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC18u; }
        if (ctx->pc != 0x1BCC18u) { return; }
    }
    ctx->pc = 0x1BCC18u;
    // 0x1bcc18: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BCC18u;
    SET_GPR_U32(ctx, 31, 0x1BCC20u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC20u; }
        if (ctx->pc != 0x1BCC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC20u; }
        if (ctx->pc != 0x1BCC20u) { return; }
    }
    ctx->pc = 0x1BCC20u;
    // 0x1bcc20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bcc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bcc24: 0x144300b8  bne         $v0, $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1BCC24u;
    {
        const bool branch_taken_0x1bcc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bcc24) {
            ctx->pc = 0x1BCF08u;
            goto label_1bcf08;
        }
    }
    ctx->pc = 0x1BCC2Cu;
    // 0x1bcc2c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bcc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bcc30: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1bcc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1bcc34: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bcc34u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bcc38: 0x0  nop
    ctx->pc = 0x1bcc38u;
    // NOP
    // 0x1bcc3c: 0x0  nop
    ctx->pc = 0x1bcc3cu;
    // NOP
    // 0x1bcc40: 0x1010  mfhi        $v0
    ctx->pc = 0x1bcc40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bcc44: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BCC44u;
    {
        const bool branch_taken_0x1bcc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc44) {
            ctx->pc = 0x1BCCF0u;
            goto label_1bccf0;
        }
    }
    ctx->pc = 0x1BCC4Cu;
    // 0x1bcc4c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcc50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcc54: 0x2464ff88  addiu       $a0, $v1, -0x78
    ctx->pc = 0x1bcc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x1bcc58: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCC58u;
    SET_GPR_U32(ctx, 31, 0x1BCC60u);
    ctx->pc = 0x1BCC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC58u;
            // 0x1bcc5c: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC60u; }
        if (ctx->pc != 0x1BCC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC60u; }
        if (ctx->pc != 0x1BCC60u) { return; }
    }
    ctx->pc = 0x1BCC60u;
    // 0x1bcc60: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcc64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcc68: 0x2464ff79  addiu       $a0, $v1, -0x87
    ctx->pc = 0x1bcc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967161));
    // 0x1bcc6c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC74u);
    ctx->pc = 0x1BCC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC6Cu;
            // 0x1bcc70: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC74u; }
        if (ctx->pc != 0x1BCC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC74u; }
        if (ctx->pc != 0x1BCC74u) { return; }
    }
    ctx->pc = 0x1BCC74u;
    // 0x1bcc74: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcc78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcc7c: 0x2464ff8d  addiu       $a0, $v1, -0x73
    ctx->pc = 0x1bcc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967181));
    // 0x1bcc80: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCC80u;
    SET_GPR_U32(ctx, 31, 0x1BCC88u);
    ctx->pc = 0x1BCC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC80u;
            // 0x1bcc84: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC88u; }
        if (ctx->pc != 0x1BCC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC88u; }
        if (ctx->pc != 0x1BCC88u) { return; }
    }
    ctx->pc = 0x1BCC88u;
    // 0x1bcc88: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcc8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcc90: 0x2464ff7e  addiu       $a0, $v1, -0x82
    ctx->pc = 0x1bcc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967166));
    // 0x1bcc94: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCC94u;
    SET_GPR_U32(ctx, 31, 0x1BCC9Cu);
    ctx->pc = 0x1BCC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC94u;
            // 0x1bcc98: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC9Cu; }
        if (ctx->pc != 0x1BCC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC9Cu; }
        if (ctx->pc != 0x1BCC9Cu) { return; }
    }
    ctx->pc = 0x1BCC9Cu;
    // 0x1bcc9c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcca0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcca4: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x1bcca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1bcca8: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCCA8u;
    SET_GPR_U32(ctx, 31, 0x1BCCB0u);
    ctx->pc = 0x1BCCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCA8u;
            // 0x1bccac: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCB0u; }
        if (ctx->pc != 0x1BCCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCB0u; }
        if (ctx->pc != 0x1BCCB0u) { return; }
    }
    ctx->pc = 0x1BCCB0u;
    // 0x1bccb0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bccb4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bccb8: 0x24640087  addiu       $a0, $v1, 0x87
    ctx->pc = 0x1bccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 135));
    // 0x1bccbc: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCCBCu;
    SET_GPR_U32(ctx, 31, 0x1BCCC4u);
    ctx->pc = 0x1BCCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCBCu;
            // 0x1bccc0: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCC4u; }
        if (ctx->pc != 0x1BCCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCC4u; }
        if (ctx->pc != 0x1BCCC4u) { return; }
    }
    ctx->pc = 0x1BCCC4u;
    // 0x1bccc4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bccc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcccc: 0x24640073  addiu       $a0, $v1, 0x73
    ctx->pc = 0x1bccccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 115));
    // 0x1bccd0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCCD0u;
    SET_GPR_U32(ctx, 31, 0x1BCCD8u);
    ctx->pc = 0x1BCCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCD0u;
            // 0x1bccd4: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCD8u; }
        if (ctx->pc != 0x1BCCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCD8u; }
        if (ctx->pc != 0x1BCCD8u) { return; }
    }
    ctx->pc = 0x1BCCD8u;
    // 0x1bccd8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bccdc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcce0: 0x24640082  addiu       $a0, $v1, 0x82
    ctx->pc = 0x1bcce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 130));
    // 0x1bcce4: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCCE4u;
    SET_GPR_U32(ctx, 31, 0x1BCCECu);
    ctx->pc = 0x1BCCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCE4u;
            // 0x1bcce8: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCECu; }
        if (ctx->pc != 0x1BCCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCCECu; }
        if (ctx->pc != 0x1BCCECu) { return; }
    }
    ctx->pc = 0x1BCCECu;
    // 0x1bccec: 0x0  nop
    ctx->pc = 0x1bccecu;
    // NOP
label_1bccf0:
    // 0x1bccf0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bccf4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCCF4u;
    {
        const bool branch_taken_0x1bccf4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BCCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCCF4u;
            // 0x1bccf8: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccf4) {
            ctx->pc = 0x1BCD08u;
            goto label_1bcd08;
        }
    }
    ctx->pc = 0x1BCCFCu;
    // 0x1bccfc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCCFCu;
    {
        const bool branch_taken_0x1bccfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bccfc) {
            ctx->pc = 0x1BCD08u;
            goto label_1bcd08;
        }
    }
    ctx->pc = 0x1BCD04u;
    // 0x1bcd04: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1bcd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1bcd08:
    // 0x1bcd08: 0x144006db  bnez        $v0, . + 4 + (0x6DB << 2)
    ctx->pc = 0x1BCD08u;
    {
        const bool branch_taken_0x1bcd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd08) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BCD10u;
    // 0x1bcd10: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1bcd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcd14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bcd14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcd18: 0x0  nop
    ctx->pc = 0x1bcd18u;
    // NOP
    // 0x1bcd1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bcd1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcd20: 0x45010071  bc1t        . + 4 + (0x71 << 2)
    ctx->pc = 0x1BCD20u;
    {
        const bool branch_taken_0x1bcd20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BCD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD20u;
            // 0x1bcd24: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd20) {
            ctx->pc = 0x1BCEE8u;
            goto label_1bcee8;
        }
    }
    ctx->pc = 0x1BCD28u;
    // 0x1bcd28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bcd28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bcd2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcd30: 0x0  nop
    ctx->pc = 0x1bcd30u;
    // NOP
    // 0x1bcd34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bcd34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcd38: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x1BCD38u;
    {
        const bool branch_taken_0x1bcd38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcd38) {
            ctx->pc = 0x1BCEE8u;
            goto label_1bcee8;
        }
    }
    ctx->pc = 0x1BCD40u;
    // 0x1bcd40: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bcd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcd44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcd48: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1bcd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1bcd4c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1bcd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bcd50: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1bcd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1bcd54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcd54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcd58: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BCD58u;
    SET_GPR_U32(ctx, 31, 0x1BCD60u);
    ctx->pc = 0x1BCD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD58u;
            // 0x1bcd5c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD60u; }
        if (ctx->pc != 0x1BCD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD60u; }
        if (ctx->pc != 0x1BCD60u) { return; }
    }
    ctx->pc = 0x1BCD60u;
    // 0x1bcd60: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCD60u;
    SET_GPR_U32(ctx, 31, 0x1BCD68u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD68u; }
        if (ctx->pc != 0x1BCD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD68u; }
        if (ctx->pc != 0x1BCD68u) { return; }
    }
    ctx->pc = 0x1BCD68u;
    // 0x1bcd68: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bcd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bcd6c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bcd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bcd70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bcd70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bcd74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bcd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bcd78: 0x0  nop
    ctx->pc = 0x1bcd78u;
    // NOP
    // 0x1bcd7c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bcd7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bcd80: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCD80u;
    SET_GPR_U32(ctx, 31, 0x1BCD88u);
    ctx->pc = 0x1BCD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD80u;
            // 0x1bcd84: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD88u; }
        if (ctx->pc != 0x1BCD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD88u; }
        if (ctx->pc != 0x1BCD88u) { return; }
    }
    ctx->pc = 0x1BCD88u;
    // 0x1bcd88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcd8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bcd8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bcd90: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bcd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcd94: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bcd94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bcd98: 0xc065254  jal         func_194950
    ctx->pc = 0x1BCD98u;
    SET_GPR_U32(ctx, 31, 0x1BCDA0u);
    ctx->pc = 0x1BCD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCD98u;
            // 0x1bcd9c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDA0u; }
        if (ctx->pc != 0x1BCDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDA0u; }
        if (ctx->pc != 0x1BCDA0u) { return; }
    }
    ctx->pc = 0x1BCDA0u;
    // 0x1bcda0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCDA0u;
    SET_GPR_U32(ctx, 31, 0x1BCDA8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDA8u; }
        if (ctx->pc != 0x1BCDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDA8u; }
        if (ctx->pc != 0x1BCDA8u) { return; }
    }
    ctx->pc = 0x1BCDA8u;
    // 0x1bcda8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bcda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bcdac: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bcdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bcdb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bcdb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bcdb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bcdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bcdb8: 0x0  nop
    ctx->pc = 0x1bcdb8u;
    // NOP
    // 0x1bcdbc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bcdbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bcdc0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCDC0u;
    SET_GPR_U32(ctx, 31, 0x1BCDC8u);
    ctx->pc = 0x1BCDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDC0u;
            // 0x1bcdc4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDC8u; }
        if (ctx->pc != 0x1BCDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDC8u; }
        if (ctx->pc != 0x1BCDC8u) { return; }
    }
    ctx->pc = 0x1BCDC8u;
    // 0x1bcdc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcdcc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bcdccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bcdd0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bcdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcdd4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bcdd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bcdd8: 0xc065254  jal         func_194950
    ctx->pc = 0x1BCDD8u;
    SET_GPR_U32(ctx, 31, 0x1BCDE0u);
    ctx->pc = 0x1BCDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCDD8u;
            // 0x1bcddc: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDE0u; }
        if (ctx->pc != 0x1BCDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDE0u; }
        if (ctx->pc != 0x1BCDE0u) { return; }
    }
    ctx->pc = 0x1BCDE0u;
    // 0x1bcde0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCDE0u;
    SET_GPR_U32(ctx, 31, 0x1BCDE8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDE8u; }
        if (ctx->pc != 0x1BCDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCDE8u; }
        if (ctx->pc != 0x1BCDE8u) { return; }
    }
    ctx->pc = 0x1BCDE8u;
    // 0x1bcde8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bcde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bcdec: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bcdf0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bcdf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bcdf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bcdf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bcdf8: 0x0  nop
    ctx->pc = 0x1bcdf8u;
    // NOP
    // 0x1bcdfc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bcdfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bce00: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCE00u;
    SET_GPR_U32(ctx, 31, 0x1BCE08u);
    ctx->pc = 0x1BCE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE00u;
            // 0x1bce04: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE08u; }
        if (ctx->pc != 0x1BCE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE08u; }
        if (ctx->pc != 0x1BCE08u) { return; }
    }
    ctx->pc = 0x1BCE08u;
    // 0x1bce08: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bce0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bce0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bce10: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bce10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bce14: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bce14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bce18: 0xc065254  jal         func_194950
    ctx->pc = 0x1BCE18u;
    SET_GPR_U32(ctx, 31, 0x1BCE20u);
    ctx->pc = 0x1BCE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE18u;
            // 0x1bce1c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE20u; }
        if (ctx->pc != 0x1BCE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE20u; }
        if (ctx->pc != 0x1BCE20u) { return; }
    }
    ctx->pc = 0x1BCE20u;
    // 0x1bce20: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCE20u;
    SET_GPR_U32(ctx, 31, 0x1BCE28u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE28u; }
        if (ctx->pc != 0x1BCE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE28u; }
        if (ctx->pc != 0x1BCE28u) { return; }
    }
    ctx->pc = 0x1BCE28u;
    // 0x1bce28: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bce28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bce2c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bce30: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bce30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bce34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bce34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bce38: 0x0  nop
    ctx->pc = 0x1bce38u;
    // NOP
    // 0x1bce3c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bce3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bce40: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCE40u;
    SET_GPR_U32(ctx, 31, 0x1BCE48u);
    ctx->pc = 0x1BCE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE40u;
            // 0x1bce44: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE48u; }
        if (ctx->pc != 0x1BCE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE48u; }
        if (ctx->pc != 0x1BCE48u) { return; }
    }
    ctx->pc = 0x1BCE48u;
    // 0x1bce48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bce4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bce4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bce50: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bce50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bce54: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bce54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bce58: 0xc065254  jal         func_194950
    ctx->pc = 0x1BCE58u;
    SET_GPR_U32(ctx, 31, 0x1BCE60u);
    ctx->pc = 0x1BCE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE58u;
            // 0x1bce5c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE60u; }
        if (ctx->pc != 0x1BCE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE60u; }
        if (ctx->pc != 0x1BCE60u) { return; }
    }
    ctx->pc = 0x1BCE60u;
    // 0x1bce60: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCE60u;
    SET_GPR_U32(ctx, 31, 0x1BCE68u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE68u; }
        if (ctx->pc != 0x1BCE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE68u; }
        if (ctx->pc != 0x1BCE68u) { return; }
    }
    ctx->pc = 0x1BCE68u;
    // 0x1bce68: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bce68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bce6c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bce70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bce70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bce74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bce74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bce78: 0x0  nop
    ctx->pc = 0x1bce78u;
    // NOP
    // 0x1bce7c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bce7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bce80: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCE80u;
    SET_GPR_U32(ctx, 31, 0x1BCE88u);
    ctx->pc = 0x1BCE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE80u;
            // 0x1bce84: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE88u; }
        if (ctx->pc != 0x1BCE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE88u; }
        if (ctx->pc != 0x1BCE88u) { return; }
    }
    ctx->pc = 0x1BCE88u;
    // 0x1bce88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bce8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bce8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bce90: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bce94: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bce94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bce98: 0xc065254  jal         func_194950
    ctx->pc = 0x1BCE98u;
    SET_GPR_U32(ctx, 31, 0x1BCEA0u);
    ctx->pc = 0x1BCE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCE98u;
            // 0x1bce9c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEA0u; }
        if (ctx->pc != 0x1BCEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEA0u; }
        if (ctx->pc != 0x1BCEA0u) { return; }
    }
    ctx->pc = 0x1BCEA0u;
    // 0x1bcea0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCEA0u;
    SET_GPR_U32(ctx, 31, 0x1BCEA8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEA8u; }
        if (ctx->pc != 0x1BCEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEA8u; }
        if (ctx->pc != 0x1BCEA8u) { return; }
    }
    ctx->pc = 0x1BCEA8u;
    // 0x1bcea8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bcea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bceac: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bceb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bceb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bceb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bceb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bceb8: 0x0  nop
    ctx->pc = 0x1bceb8u;
    // NOP
    // 0x1bcebc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bcebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bcec0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BCEC0u;
    SET_GPR_U32(ctx, 31, 0x1BCEC8u);
    ctx->pc = 0x1BCEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCEC0u;
            // 0x1bcec4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEC8u; }
        if (ctx->pc != 0x1BCEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEC8u; }
        if (ctx->pc != 0x1BCEC8u) { return; }
    }
    ctx->pc = 0x1BCEC8u;
    // 0x1bcec8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcecc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bceccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bced0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bced0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bced4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bced4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bced8: 0xc065254  jal         func_194950
    ctx->pc = 0x1BCED8u;
    SET_GPR_U32(ctx, 31, 0x1BCEE0u);
    ctx->pc = 0x1BCEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCED8u;
            // 0x1bcedc: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEE0u; }
        if (ctx->pc != 0x1BCEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEE0u; }
        if (ctx->pc != 0x1BCEE0u) { return; }
    }
    ctx->pc = 0x1BCEE0u;
    // 0x1bcee0: 0x10000665  b           . + 4 + (0x665 << 2)
    ctx->pc = 0x1BCEE0u;
    {
        const bool branch_taken_0x1bcee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcee0) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BCEE8u;
label_1bcee8:
    // 0x1bcee8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bceec: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bceecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcef0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bcef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bcef4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BCEF4u;
    SET_GPR_U32(ctx, 31, 0x1BCEFCu);
    ctx->pc = 0x1BCEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCEF4u;
            // 0x1bcef8: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEFCu; }
        if (ctx->pc != 0x1BCEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEFCu; }
        if (ctx->pc != 0x1BCEFCu) { return; }
    }
    ctx->pc = 0x1BCEFCu;
    // 0x1bcefc: 0x1000065e  b           . + 4 + (0x65E << 2)
    ctx->pc = 0x1BCEFCu;
    {
        const bool branch_taken_0x1bcefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcefc) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BCF04u;
    // 0x1bcf04: 0x0  nop
    ctx->pc = 0x1bcf04u;
    // NOP
label_1bcf08:
    // 0x1bcf08: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BCF08u;
    SET_GPR_U32(ctx, 31, 0x1BCF10u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF10u; }
        if (ctx->pc != 0x1BCF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF10u; }
        if (ctx->pc != 0x1BCF10u) { return; }
    }
    ctx->pc = 0x1BCF10u;
    // 0x1bcf10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bcf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcf14: 0x14430098  bne         $v0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x1BCF14u;
    {
        const bool branch_taken_0x1bcf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bcf14) {
            ctx->pc = 0x1BD178u;
            goto label_1bd178;
        }
    }
    ctx->pc = 0x1BCF1Cu;
    // 0x1bcf1c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bcf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bcf20: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bcf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bcf24: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bcf24u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bcf28: 0x0  nop
    ctx->pc = 0x1bcf28u;
    // NOP
    // 0x1bcf2c: 0x0  nop
    ctx->pc = 0x1bcf2cu;
    // NOP
    // 0x1bcf30: 0x1010  mfhi        $v0
    ctx->pc = 0x1bcf30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bcf34: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BCF34u;
    {
        const bool branch_taken_0x1bcf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf34) {
            ctx->pc = 0x1BCFE0u;
            goto label_1bcfe0;
        }
    }
    ctx->pc = 0x1BCF3Cu;
    // 0x1bcf3c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcf40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcf44: 0x2464ff88  addiu       $a0, $v1, -0x78
    ctx->pc = 0x1bcf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x1bcf48: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCF48u;
    SET_GPR_U32(ctx, 31, 0x1BCF50u);
    ctx->pc = 0x1BCF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF48u;
            // 0x1bcf4c: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF50u; }
        if (ctx->pc != 0x1BCF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF50u; }
        if (ctx->pc != 0x1BCF50u) { return; }
    }
    ctx->pc = 0x1BCF50u;
    // 0x1bcf50: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcf54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcf58: 0x2464ff79  addiu       $a0, $v1, -0x87
    ctx->pc = 0x1bcf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967161));
    // 0x1bcf5c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCF5Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF64u);
    ctx->pc = 0x1BCF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF5Cu;
            // 0x1bcf60: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF64u; }
        if (ctx->pc != 0x1BCF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF64u; }
        if (ctx->pc != 0x1BCF64u) { return; }
    }
    ctx->pc = 0x1BCF64u;
    // 0x1bcf64: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcf68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcf6c: 0x2464ff8d  addiu       $a0, $v1, -0x73
    ctx->pc = 0x1bcf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967181));
    // 0x1bcf70: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCF70u;
    SET_GPR_U32(ctx, 31, 0x1BCF78u);
    ctx->pc = 0x1BCF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF70u;
            // 0x1bcf74: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF78u; }
        if (ctx->pc != 0x1BCF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF78u; }
        if (ctx->pc != 0x1BCF78u) { return; }
    }
    ctx->pc = 0x1BCF78u;
    // 0x1bcf78: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcf7c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcf80: 0x2464ff7e  addiu       $a0, $v1, -0x82
    ctx->pc = 0x1bcf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967166));
    // 0x1bcf84: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCF84u;
    SET_GPR_U32(ctx, 31, 0x1BCF8Cu);
    ctx->pc = 0x1BCF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF84u;
            // 0x1bcf88: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF8Cu; }
        if (ctx->pc != 0x1BCF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF8Cu; }
        if (ctx->pc != 0x1BCF8Cu) { return; }
    }
    ctx->pc = 0x1BCF8Cu;
    // 0x1bcf8c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcf90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcf94: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x1bcf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1bcf98: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCF98u;
    SET_GPR_U32(ctx, 31, 0x1BCFA0u);
    ctx->pc = 0x1BCF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF98u;
            // 0x1bcf9c: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFA0u; }
        if (ctx->pc != 0x1BCFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFA0u; }
        if (ctx->pc != 0x1BCFA0u) { return; }
    }
    ctx->pc = 0x1BCFA0u;
    // 0x1bcfa0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcfa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcfa8: 0x24640087  addiu       $a0, $v1, 0x87
    ctx->pc = 0x1bcfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 135));
    // 0x1bcfac: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCFACu;
    SET_GPR_U32(ctx, 31, 0x1BCFB4u);
    ctx->pc = 0x1BCFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFACu;
            // 0x1bcfb0: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFB4u; }
        if (ctx->pc != 0x1BCFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFB4u; }
        if (ctx->pc != 0x1BCFB4u) { return; }
    }
    ctx->pc = 0x1BCFB4u;
    // 0x1bcfb4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcfb8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcfbc: 0x24640073  addiu       $a0, $v1, 0x73
    ctx->pc = 0x1bcfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 115));
    // 0x1bcfc0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCFC0u;
    SET_GPR_U32(ctx, 31, 0x1BCFC8u);
    ctx->pc = 0x1BCFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFC0u;
            // 0x1bcfc4: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFC8u; }
        if (ctx->pc != 0x1BCFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFC8u; }
        if (ctx->pc != 0x1BCFC8u) { return; }
    }
    ctx->pc = 0x1BCFC8u;
    // 0x1bcfc8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bcfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bcfcc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bcfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bcfd0: 0x24640082  addiu       $a0, $v1, 0x82
    ctx->pc = 0x1bcfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 130));
    // 0x1bcfd4: 0xc06560c  jal         func_195830
    ctx->pc = 0x1BCFD4u;
    SET_GPR_U32(ctx, 31, 0x1BCFDCu);
    ctx->pc = 0x1BCFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFD4u;
            // 0x1bcfd8: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFDCu; }
        if (ctx->pc != 0x1BCFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFDCu; }
        if (ctx->pc != 0x1BCFDCu) { return; }
    }
    ctx->pc = 0x1BCFDCu;
    // 0x1bcfdc: 0x0  nop
    ctx->pc = 0x1bcfdcu;
    // NOP
label_1bcfe0:
    // 0x1bcfe0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bcfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bcfe4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCFE4u;
    {
        const bool branch_taken_0x1bcfe4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BCFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFE4u;
            // 0x1bcfe8: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcfe4) {
            ctx->pc = 0x1BCFF8u;
            goto label_1bcff8;
        }
    }
    ctx->pc = 0x1BCFECu;
    // 0x1bcfec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCFECu;
    {
        const bool branch_taken_0x1bcfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfec) {
            ctx->pc = 0x1BCFF8u;
            goto label_1bcff8;
        }
    }
    ctx->pc = 0x1BCFF4u;
    // 0x1bcff4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1bcff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1bcff8:
    // 0x1bcff8: 0x1440061f  bnez        $v0, . + 4 + (0x61F << 2)
    ctx->pc = 0x1BCFF8u;
    {
        const bool branch_taken_0x1bcff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcff8) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD000u;
    // 0x1bd000: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1bd000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bd004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd008: 0x0  nop
    ctx->pc = 0x1bd008u;
    // NOP
    // 0x1bd00c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bd00cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd010: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x1BD010u;
    {
        const bool branch_taken_0x1bd010 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD010u;
            // 0x1bd014: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd010) {
            ctx->pc = 0x1BD158u;
            goto label_1bd158;
        }
    }
    ctx->pc = 0x1BD018u;
    // 0x1bd018: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd018u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bd01c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd020: 0x0  nop
    ctx->pc = 0x1bd020u;
    // NOP
    // 0x1bd024: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bd024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd028: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x1BD028u;
    {
        const bool branch_taken_0x1bd028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bd028) {
            ctx->pc = 0x1BD158u;
            goto label_1bd158;
        }
    }
    ctx->pc = 0x1BD030u;
    // 0x1bd030: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bd030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd034: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd038: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1bd038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1bd03c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1bd03cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bd040: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1bd040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1bd044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd048: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BD048u;
    SET_GPR_U32(ctx, 31, 0x1BD050u);
    ctx->pc = 0x1BD04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD048u;
            // 0x1bd04c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD050u; }
        if (ctx->pc != 0x1BD050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD050u; }
        if (ctx->pc != 0x1BD050u) { return; }
    }
    ctx->pc = 0x1BD050u;
    // 0x1bd050: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD050u;
    SET_GPR_U32(ctx, 31, 0x1BD058u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD058u; }
        if (ctx->pc != 0x1BD058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD058u; }
        if (ctx->pc != 0x1BD058u) { return; }
    }
    ctx->pc = 0x1BD058u;
    // 0x1bd058: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bd058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bd05c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bd060: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bd060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd064: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bd064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd068: 0x0  nop
    ctx->pc = 0x1bd068u;
    // NOP
    // 0x1bd06c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd06cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd070: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD070u;
    SET_GPR_U32(ctx, 31, 0x1BD078u);
    ctx->pc = 0x1BD074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD070u;
            // 0x1bd074: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD078u; }
        if (ctx->pc != 0x1BD078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD078u; }
        if (ctx->pc != 0x1BD078u) { return; }
    }
    ctx->pc = 0x1BD078u;
    // 0x1bd078: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd07c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd07cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd080: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd084: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bd084u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bd088: 0xc065254  jal         func_194950
    ctx->pc = 0x1BD088u;
    SET_GPR_U32(ctx, 31, 0x1BD090u);
    ctx->pc = 0x1BD08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD088u;
            // 0x1bd08c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD090u; }
        if (ctx->pc != 0x1BD090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD090u; }
        if (ctx->pc != 0x1BD090u) { return; }
    }
    ctx->pc = 0x1BD090u;
    // 0x1bd090: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD090u;
    SET_GPR_U32(ctx, 31, 0x1BD098u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD098u; }
        if (ctx->pc != 0x1BD098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD098u; }
        if (ctx->pc != 0x1BD098u) { return; }
    }
    ctx->pc = 0x1BD098u;
    // 0x1bd098: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bd098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bd09c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bd09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bd0a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bd0a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd0a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bd0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd0a8: 0x0  nop
    ctx->pc = 0x1bd0a8u;
    // NOP
    // 0x1bd0ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd0acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd0b0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD0B0u;
    SET_GPR_U32(ctx, 31, 0x1BD0B8u);
    ctx->pc = 0x1BD0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0B0u;
            // 0x1bd0b4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0B8u; }
        if (ctx->pc != 0x1BD0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0B8u; }
        if (ctx->pc != 0x1BD0B8u) { return; }
    }
    ctx->pc = 0x1BD0B8u;
    // 0x1bd0b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd0bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd0bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd0c0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd0c4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bd0c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bd0c8: 0xc065254  jal         func_194950
    ctx->pc = 0x1BD0C8u;
    SET_GPR_U32(ctx, 31, 0x1BD0D0u);
    ctx->pc = 0x1BD0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0C8u;
            // 0x1bd0cc: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0D0u; }
        if (ctx->pc != 0x1BD0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0D0u; }
        if (ctx->pc != 0x1BD0D0u) { return; }
    }
    ctx->pc = 0x1BD0D0u;
    // 0x1bd0d0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD0D0u;
    SET_GPR_U32(ctx, 31, 0x1BD0D8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0D8u; }
        if (ctx->pc != 0x1BD0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0D8u; }
        if (ctx->pc != 0x1BD0D8u) { return; }
    }
    ctx->pc = 0x1BD0D8u;
    // 0x1bd0d8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bd0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bd0dc: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bd0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bd0e0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bd0e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd0e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bd0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd0e8: 0x0  nop
    ctx->pc = 0x1bd0e8u;
    // NOP
    // 0x1bd0ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd0f0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD0F0u;
    SET_GPR_U32(ctx, 31, 0x1BD0F8u);
    ctx->pc = 0x1BD0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0F0u;
            // 0x1bd0f4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0F8u; }
        if (ctx->pc != 0x1BD0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0F8u; }
        if (ctx->pc != 0x1BD0F8u) { return; }
    }
    ctx->pc = 0x1BD0F8u;
    // 0x1bd0f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd0fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd0fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd100: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd104: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bd104u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bd108: 0xc065254  jal         func_194950
    ctx->pc = 0x1BD108u;
    SET_GPR_U32(ctx, 31, 0x1BD110u);
    ctx->pc = 0x1BD10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD108u;
            // 0x1bd10c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD110u; }
        if (ctx->pc != 0x1BD110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD110u; }
        if (ctx->pc != 0x1BD110u) { return; }
    }
    ctx->pc = 0x1BD110u;
    // 0x1bd110: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD110u;
    SET_GPR_U32(ctx, 31, 0x1BD118u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD118u; }
        if (ctx->pc != 0x1BD118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD118u; }
        if (ctx->pc != 0x1BD118u) { return; }
    }
    ctx->pc = 0x1BD118u;
    // 0x1bd118: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bd118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bd11c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bd120: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bd120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd124: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bd124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd128: 0x0  nop
    ctx->pc = 0x1bd128u;
    // NOP
    // 0x1bd12c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd12cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd130: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD130u;
    SET_GPR_U32(ctx, 31, 0x1BD138u);
    ctx->pc = 0x1BD134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD130u;
            // 0x1bd134: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD138u; }
        if (ctx->pc != 0x1BD138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD138u; }
        if (ctx->pc != 0x1BD138u) { return; }
    }
    ctx->pc = 0x1BD138u;
    // 0x1bd138: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd13c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd13cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd140: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd144: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bd144u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bd148: 0xc065254  jal         func_194950
    ctx->pc = 0x1BD148u;
    SET_GPR_U32(ctx, 31, 0x1BD150u);
    ctx->pc = 0x1BD14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD148u;
            // 0x1bd14c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD150u; }
        if (ctx->pc != 0x1BD150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD150u; }
        if (ctx->pc != 0x1BD150u) { return; }
    }
    ctx->pc = 0x1BD150u;
    // 0x1bd150: 0x100005c9  b           . + 4 + (0x5C9 << 2)
    ctx->pc = 0x1BD150u;
    {
        const bool branch_taken_0x1bd150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd150) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD158u;
label_1bd158:
    // 0x1bd158: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd15c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd160: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bd160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd164: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BD164u;
    SET_GPR_U32(ctx, 31, 0x1BD16Cu);
    ctx->pc = 0x1BD168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD164u;
            // 0x1bd168: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD16Cu; }
        if (ctx->pc != 0x1BD16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD16Cu; }
        if (ctx->pc != 0x1BD16Cu) { return; }
    }
    ctx->pc = 0x1BD16Cu;
    // 0x1bd16c: 0x100005c2  b           . + 4 + (0x5C2 << 2)
    ctx->pc = 0x1BD16Cu;
    {
        const bool branch_taken_0x1bd16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd16c) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD174u;
    // 0x1bd174: 0x0  nop
    ctx->pc = 0x1bd174u;
    // NOP
label_1bd178:
    // 0x1bd178: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bd178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bd17c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1bd17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bd180: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bd180u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bd184: 0x0  nop
    ctx->pc = 0x1bd184u;
    // NOP
    // 0x1bd188: 0x0  nop
    ctx->pc = 0x1bd188u;
    // NOP
    // 0x1bd18c: 0x1010  mfhi        $v0
    ctx->pc = 0x1bd18cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bd190: 0x144005b9  bnez        $v0, . + 4 + (0x5B9 << 2)
    ctx->pc = 0x1BD190u;
    {
        const bool branch_taken_0x1bd190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd190) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD198u;
    // 0x1bd198: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1bd198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd19c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bd19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd1a0: 0x0  nop
    ctx->pc = 0x1bd1a0u;
    // NOP
    // 0x1bd1a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bd1a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd1a8: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x1BD1A8u;
    {
        const bool branch_taken_0x1bd1a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1A8u;
            // 0x1bd1ac: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1a8) {
            ctx->pc = 0x1BD2F0u;
            goto label_1bd2f0;
        }
    }
    ctx->pc = 0x1BD1B0u;
    // 0x1bd1b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd1b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bd1b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd1b8: 0x0  nop
    ctx->pc = 0x1bd1b8u;
    // NOP
    // 0x1bd1bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bd1bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd1c0: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x1BD1C0u;
    {
        const bool branch_taken_0x1bd1c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bd1c0) {
            ctx->pc = 0x1BD2F0u;
            goto label_1bd2f0;
        }
    }
    ctx->pc = 0x1BD1C8u;
    // 0x1bd1c8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1bd1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd1cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd1d0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1bd1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1bd1d4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1bd1d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bd1d8: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1bd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1bd1dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd1e0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BD1E0u;
    SET_GPR_U32(ctx, 31, 0x1BD1E8u);
    ctx->pc = 0x1BD1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1E0u;
            // 0x1bd1e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1E8u; }
        if (ctx->pc != 0x1BD1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1E8u; }
        if (ctx->pc != 0x1BD1E8u) { return; }
    }
    ctx->pc = 0x1BD1E8u;
    // 0x1bd1e8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD1E8u;
    SET_GPR_U32(ctx, 31, 0x1BD1F0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1F0u; }
        if (ctx->pc != 0x1BD1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1F0u; }
        if (ctx->pc != 0x1BD1F0u) { return; }
    }
    ctx->pc = 0x1BD1F0u;
    // 0x1bd1f0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bd1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bd1f4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bd1f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bd1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd1fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bd1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd200: 0x0  nop
    ctx->pc = 0x1bd200u;
    // NOP
    // 0x1bd204: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd208: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD208u;
    SET_GPR_U32(ctx, 31, 0x1BD210u);
    ctx->pc = 0x1BD20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD208u;
            // 0x1bd20c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD210u; }
        if (ctx->pc != 0x1BD210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD210u; }
        if (ctx->pc != 0x1BD210u) { return; }
    }
    ctx->pc = 0x1BD210u;
    // 0x1bd210: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd214: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd214u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd218: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd21c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bd21cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bd220: 0xc065254  jal         func_194950
    ctx->pc = 0x1BD220u;
    SET_GPR_U32(ctx, 31, 0x1BD228u);
    ctx->pc = 0x1BD224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD220u;
            // 0x1bd224: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD228u; }
        if (ctx->pc != 0x1BD228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD228u; }
        if (ctx->pc != 0x1BD228u) { return; }
    }
    ctx->pc = 0x1BD228u;
    // 0x1bd228: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD228u;
    SET_GPR_U32(ctx, 31, 0x1BD230u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD230u; }
        if (ctx->pc != 0x1BD230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD230u; }
        if (ctx->pc != 0x1BD230u) { return; }
    }
    ctx->pc = 0x1BD230u;
    // 0x1bd230: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bd230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bd234: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bd234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bd238: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bd238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd23c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bd23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd240: 0x0  nop
    ctx->pc = 0x1bd240u;
    // NOP
    // 0x1bd244: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd248: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD248u;
    SET_GPR_U32(ctx, 31, 0x1BD250u);
    ctx->pc = 0x1BD24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD248u;
            // 0x1bd24c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD250u; }
        if (ctx->pc != 0x1BD250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD250u; }
        if (ctx->pc != 0x1BD250u) { return; }
    }
    ctx->pc = 0x1BD250u;
    // 0x1bd250: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd254: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd254u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd258: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd25c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bd25cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bd260: 0xc065254  jal         func_194950
    ctx->pc = 0x1BD260u;
    SET_GPR_U32(ctx, 31, 0x1BD268u);
    ctx->pc = 0x1BD264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD260u;
            // 0x1bd264: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD268u; }
        if (ctx->pc != 0x1BD268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD268u; }
        if (ctx->pc != 0x1BD268u) { return; }
    }
    ctx->pc = 0x1BD268u;
    // 0x1bd268: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD268u;
    SET_GPR_U32(ctx, 31, 0x1BD270u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD270u; }
        if (ctx->pc != 0x1BD270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD270u; }
        if (ctx->pc != 0x1BD270u) { return; }
    }
    ctx->pc = 0x1BD270u;
    // 0x1bd270: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bd270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bd274: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bd274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bd278: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bd278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bd27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd280: 0x0  nop
    ctx->pc = 0x1bd280u;
    // NOP
    // 0x1bd284: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd288: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD288u;
    SET_GPR_U32(ctx, 31, 0x1BD290u);
    ctx->pc = 0x1BD28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD288u;
            // 0x1bd28c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD290u; }
        if (ctx->pc != 0x1BD290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD290u; }
        if (ctx->pc != 0x1BD290u) { return; }
    }
    ctx->pc = 0x1BD290u;
    // 0x1bd290: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd294: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd294u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd298: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd29c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bd29cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bd2a0: 0xc065254  jal         func_194950
    ctx->pc = 0x1BD2A0u;
    SET_GPR_U32(ctx, 31, 0x1BD2A8u);
    ctx->pc = 0x1BD2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2A0u;
            // 0x1bd2a4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2A8u; }
        if (ctx->pc != 0x1BD2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2A8u; }
        if (ctx->pc != 0x1BD2A8u) { return; }
    }
    ctx->pc = 0x1BD2A8u;
    // 0x1bd2a8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD2A8u;
    SET_GPR_U32(ctx, 31, 0x1BD2B0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2B0u; }
        if (ctx->pc != 0x1BD2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2B0u; }
        if (ctx->pc != 0x1BD2B0u) { return; }
    }
    ctx->pc = 0x1BD2B0u;
    // 0x1bd2b0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1bd2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1bd2b4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bd2b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bd2b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd2bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bd2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd2c0: 0x0  nop
    ctx->pc = 0x1bd2c0u;
    // NOP
    // 0x1bd2c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd2c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd2c8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BD2C8u;
    SET_GPR_U32(ctx, 31, 0x1BD2D0u);
    ctx->pc = 0x1BD2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2C8u;
            // 0x1bd2cc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2D0u; }
        if (ctx->pc != 0x1BD2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2D0u; }
        if (ctx->pc != 0x1BD2D0u) { return; }
    }
    ctx->pc = 0x1BD2D0u;
    // 0x1bd2d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd2d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bd2d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bd2d8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd2dc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1bd2dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1bd2e0: 0xc065254  jal         func_194950
    ctx->pc = 0x1BD2E0u;
    SET_GPR_U32(ctx, 31, 0x1BD2E8u);
    ctx->pc = 0x1BD2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2E0u;
            // 0x1bd2e4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2E8u; }
        if (ctx->pc != 0x1BD2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD2E8u; }
        if (ctx->pc != 0x1BD2E8u) { return; }
    }
    ctx->pc = 0x1BD2E8u;
    // 0x1bd2e8: 0x10000563  b           . + 4 + (0x563 << 2)
    ctx->pc = 0x1BD2E8u;
    {
        const bool branch_taken_0x1bd2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd2e8) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD2F0u;
label_1bd2f0:
    // 0x1bd2f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd2f4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd2f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bd2f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd2fc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1BD2FCu;
    SET_GPR_U32(ctx, 31, 0x1BD304u);
    ctx->pc = 0x1BD300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2FCu;
            // 0x1bd300: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD304u; }
        if (ctx->pc != 0x1BD304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD304u; }
        if (ctx->pc != 0x1BD304u) { return; }
    }
    ctx->pc = 0x1BD304u;
    // 0x1bd304: 0x1000055c  b           . + 4 + (0x55C << 2)
    ctx->pc = 0x1BD304u;
    {
        const bool branch_taken_0x1bd304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd304) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD30Cu;
    // 0x1bd30c: 0x0  nop
    ctx->pc = 0x1bd30cu;
    // NOP
label_1bd310:
    // 0x1bd310: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd314: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1bd314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1bd318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd31c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1bd31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bd320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd324: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1BD324u;
    {
        const bool branch_taken_0x1bd324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bd324) {
            ctx->pc = 0x1BD350u;
            goto label_1bd350;
        }
    }
    ctx->pc = 0x1BD32Cu;
    // 0x1bd32c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1bd32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd330: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1bd330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1bd334: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bd334u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1bd338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd33c: 0x0  nop
    ctx->pc = 0x1bd33cu;
    // NOP
    // 0x1bd340: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bd340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bd344: 0x1000054c  b           . + 4 + (0x54C << 2)
    ctx->pc = 0x1BD344u;
    {
        const bool branch_taken_0x1bd344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD344u;
            // 0x1bd348: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd344) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD34Cu;
    // 0x1bd34c: 0x0  nop
    ctx->pc = 0x1bd34cu;
    // NOP
label_1bd350:
    // 0x1bd350: 0x3c05c2a0  lui         $a1, 0xC2A0
    ctx->pc = 0x1bd350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49824 << 16));
    // 0x1bd354: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1bd354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1bd358: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bd358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd35c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bd35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd360: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x1bd360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
    // 0x1bd364: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bd364u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1bd368: 0xac850124  sw          $a1, 0x124($a0)
    ctx->pc = 0x1bd368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 5));
    // 0x1bd36c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1bd36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1bd370: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1bd370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1bd374: 0x10000540  b           . + 4 + (0x540 << 2)
    ctx->pc = 0x1BD374u;
    {
        const bool branch_taken_0x1bd374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD374u;
            // 0x1bd378: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd374) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD37Cu;
    // 0x1bd37c: 0x0  nop
    ctx->pc = 0x1bd37cu;
    // NOP
label_1bd380:
    // 0x1bd380: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bd380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd384: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1bd384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bd388: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1bd388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd38c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1bd38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd390: 0xc06fc7c  jal         func_1BF1F0
    ctx->pc = 0x1BD390u;
    SET_GPR_U32(ctx, 31, 0x1BD398u);
    ctx->pc = 0x1BD394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD390u;
            // 0x1bd394: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF1F0u;
    if (runtime->hasFunction(0x1BF1F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD398u; }
        if (ctx->pc != 0x1BD398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bf1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD398u; }
        if (ctx->pc != 0x1BD398u) { return; }
    }
    ctx->pc = 0x1BD398u;
    // 0x1bd398: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd39c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1bd39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1bd3a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd3a4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1bd3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd3a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bd3a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd3ac: 0x450001da  bc1f        . + 4 + (0x1DA << 2)
    ctx->pc = 0x1BD3ACu;
    {
        const bool branch_taken_0x1bd3ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3ACu;
            // 0x1bd3b0: 0x24640120  addiu       $a0, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3ac) {
            ctx->pc = 0x1BDB18u;
            goto label_1bdb18;
        }
    }
    ctx->pc = 0x1BD3B4u;
    // 0x1bd3b4: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1bd3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bd3b8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1bd3bc: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1bd3bcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1bd3c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bd3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd3c4: 0x3c023bb4  lui         $v0, 0x3BB4
    ctx->pc = 0x1bd3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15284 << 16));
    // 0x1bd3c8: 0x34423958  ori         $v0, $v0, 0x3958
    ctx->pc = 0x1bd3c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)14680u)));
    // 0x1bd3cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd3d0: 0x0  nop
    ctx->pc = 0x1bd3d0u;
    // NOP
    // 0x1bd3d4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1bd3d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1bd3d8: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1bd3d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1bd3dc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1bd3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd3e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bd3e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bd3e4: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BD3E4u;
    SET_GPR_U32(ctx, 31, 0x1BD3ECu);
    ctx->pc = 0x1BD3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD3E4u;
            // 0x1bd3e8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3ECu; }
        if (ctx->pc != 0x1BD3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3ECu; }
        if (ctx->pc != 0x1BD3ECu) { return; }
    }
    ctx->pc = 0x1BD3ECu;
    // 0x1bd3ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd3f0: 0x14430097  bne         $v0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x1BD3F0u;
    {
        const bool branch_taken_0x1bd3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd3f0) {
            ctx->pc = 0x1BD650u;
            goto label_1bd650;
        }
    }
    ctx->pc = 0x1BD3F8u;
    // 0x1bd3f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bd3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bd3fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bd3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bd400: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bd400u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bd404: 0x0  nop
    ctx->pc = 0x1bd404u;
    // NOP
    // 0x1bd408: 0x0  nop
    ctx->pc = 0x1bd408u;
    // NOP
    // 0x1bd40c: 0x1010  mfhi        $v0
    ctx->pc = 0x1bd40cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bd410: 0x14400519  bnez        $v0, . + 4 + (0x519 << 2)
    ctx->pc = 0x1BD410u;
    {
        const bool branch_taken_0x1bd410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD410u;
            // 0x1bd414: 0x3072000f  andi        $s2, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd410) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD418u;
    // 0x1bd418: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD418u;
    {
        const bool branch_taken_0x1bd418 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1bd418) {
            ctx->pc = 0x1BD42Cu;
            goto label_1bd42c;
        }
    }
    ctx->pc = 0x1BD420u;
    // 0x1bd420: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD420u;
    {
        const bool branch_taken_0x1bd420 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd420) {
            ctx->pc = 0x1BD42Cu;
            goto label_1bd42c;
        }
    }
    ctx->pc = 0x1BD428u;
    // 0x1bd428: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x1bd428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
label_1bd42c:
    // 0x1bd42c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd430: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd434: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1bd434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1bd438: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BD438u;
    SET_GPR_U32(ctx, 31, 0x1BD440u);
    ctx->pc = 0x1BD43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD438u;
            // 0x1bd43c: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD440u; }
        if (ctx->pc != 0x1BD440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD440u; }
        if (ctx->pc != 0x1BD440u) { return; }
    }
    ctx->pc = 0x1BD440u;
    // 0x1bd440: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd444: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd448: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd44c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd450: 0x2646000a  addiu       $a2, $s2, 0xA
    ctx->pc = 0x1bd450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x1bd454: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1bd454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1bd458: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD458u;
    SET_GPR_U32(ctx, 31, 0x1BD460u);
    ctx->pc = 0x1BD45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD458u;
            // 0x1bd45c: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD460u; }
        if (ctx->pc != 0x1BD460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD460u; }
        if (ctx->pc != 0x1BD460u) { return; }
    }
    ctx->pc = 0x1BD460u;
    // 0x1bd460: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd464: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1bd464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1bd468: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd46c: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x1bd46cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bd470: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd474: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bd474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd478: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd47c: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1bd47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1bd480: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD480u;
    SET_GPR_U32(ctx, 31, 0x1BD488u);
    ctx->pc = 0x1BD484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD480u;
            // 0x1bd484: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD488u; }
        if (ctx->pc != 0x1BD488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD488u; }
        if (ctx->pc != 0x1BD488u) { return; }
    }
    ctx->pc = 0x1BD488u;
    // 0x1bd488: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd48c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd490: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1bd490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1bd494: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BD494u;
    SET_GPR_U32(ctx, 31, 0x1BD49Cu);
    ctx->pc = 0x1BD498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD494u;
            // 0x1bd498: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD49Cu; }
        if (ctx->pc != 0x1BD49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD49Cu; }
        if (ctx->pc != 0x1BD49Cu) { return; }
    }
    ctx->pc = 0x1BD49Cu;
    // 0x1bd49c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd4a0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd4a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd4a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd4ac: 0x2646000a  addiu       $a2, $s2, 0xA
    ctx->pc = 0x1bd4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x1bd4b0: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1bd4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1bd4b4: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD4B4u;
    SET_GPR_U32(ctx, 31, 0x1BD4BCu);
    ctx->pc = 0x1BD4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4B4u;
            // 0x1bd4b8: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4BCu; }
        if (ctx->pc != 0x1BD4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4BCu; }
        if (ctx->pc != 0x1BD4BCu) { return; }
    }
    ctx->pc = 0x1BD4BCu;
    // 0x1bd4bc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd4c0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd4c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd4c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd4cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bd4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4d0: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1bd4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1bd4d4: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD4D4u;
    SET_GPR_U32(ctx, 31, 0x1BD4DCu);
    ctx->pc = 0x1BD4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4D4u;
            // 0x1bd4d8: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4DCu; }
        if (ctx->pc != 0x1BD4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4DCu; }
        if (ctx->pc != 0x1BD4DCu) { return; }
    }
    ctx->pc = 0x1BD4DCu;
    // 0x1bd4dc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd4e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd4e4: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1bd4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1bd4e8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BD4E8u;
    SET_GPR_U32(ctx, 31, 0x1BD4F0u);
    ctx->pc = 0x1BD4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4E8u;
            // 0x1bd4ec: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4F0u; }
        if (ctx->pc != 0x1BD4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4F0u; }
        if (ctx->pc != 0x1BD4F0u) { return; }
    }
    ctx->pc = 0x1BD4F0u;
    // 0x1bd4f0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd4f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd4f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd4fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd500: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x1bd500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1bd504: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1bd504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1bd508: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD508u;
    SET_GPR_U32(ctx, 31, 0x1BD510u);
    ctx->pc = 0x1BD50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD508u;
            // 0x1bd50c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD510u; }
        if (ctx->pc != 0x1BD510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD510u; }
        if (ctx->pc != 0x1BD510u) { return; }
    }
    ctx->pc = 0x1BD510u;
    // 0x1bd510: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd514: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1bd514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1bd518: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd51c: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x1bd51cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bd520: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd524: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bd524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd528: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd52c: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1bd52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1bd530: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD530u;
    SET_GPR_U32(ctx, 31, 0x1BD538u);
    ctx->pc = 0x1BD534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD530u;
            // 0x1bd534: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD538u; }
        if (ctx->pc != 0x1BD538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD538u; }
        if (ctx->pc != 0x1BD538u) { return; }
    }
    ctx->pc = 0x1BD538u;
    // 0x1bd538: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd53c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd540: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1bd540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1bd544: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BD544u;
    SET_GPR_U32(ctx, 31, 0x1BD54Cu);
    ctx->pc = 0x1BD548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD544u;
            // 0x1bd548: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD54Cu; }
        if (ctx->pc != 0x1BD54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD54Cu; }
        if (ctx->pc != 0x1BD54Cu) { return; }
    }
    ctx->pc = 0x1BD54Cu;
    // 0x1bd54c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd550: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd554: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd558: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd55c: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x1bd55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1bd560: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1bd560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1bd564: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD564u;
    SET_GPR_U32(ctx, 31, 0x1BD56Cu);
    ctx->pc = 0x1BD568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD564u;
            // 0x1bd568: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD56Cu; }
        if (ctx->pc != 0x1BD56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD56Cu; }
        if (ctx->pc != 0x1BD56Cu) { return; }
    }
    ctx->pc = 0x1BD56Cu;
    // 0x1bd56c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd570: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd574: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd578: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd57c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bd57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd580: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1bd580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1bd584: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD584u;
    SET_GPR_U32(ctx, 31, 0x1BD58Cu);
    ctx->pc = 0x1BD588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD584u;
            // 0x1bd588: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD58Cu; }
        if (ctx->pc != 0x1BD58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD58Cu; }
        if (ctx->pc != 0x1BD58Cu) { return; }
    }
    ctx->pc = 0x1BD58Cu;
    // 0x1bd58c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd590: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1bd590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1bd594: 0x142004b8  bnez        $at, . + 4 + (0x4B8 << 2)
    ctx->pc = 0x1BD594u;
    {
        const bool branch_taken_0x1bd594 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD594u;
            // 0x1bd598: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd594) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD59Cu;
    // 0x1bd59c: 0x102004b6  beqz        $at, . + 4 + (0x4B6 << 2)
    ctx->pc = 0x1BD59Cu;
    {
        const bool branch_taken_0x1bd59c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD59Cu;
            // 0x1bd5a0: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd59c) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD5A4u;
    // 0x1bd5a4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bd5a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd5a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd5ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd5b0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1bd5b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bd5b4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1bd5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1bd5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd5bc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BD5BCu;
    SET_GPR_U32(ctx, 31, 0x1BD5C4u);
    ctx->pc = 0x1BD5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5BCu;
            // 0x1bd5c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD5C4u; }
        if (ctx->pc != 0x1BD5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD5C4u; }
        if (ctx->pc != 0x1BD5C4u) { return; }
    }
    ctx->pc = 0x1BD5C4u;
    // 0x1bd5c4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd5c8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bd5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bd5cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd5d0: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1bd5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1bd5d4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1bd5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1bd5d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bd5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd5e0: 0x0  nop
    ctx->pc = 0x1bd5e0u;
    // NOP
    // 0x1bd5e4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bd5e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bd5e8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BD5E8u;
    SET_GPR_U32(ctx, 31, 0x1BD5F0u);
    ctx->pc = 0x1BD5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD5E8u;
            // 0x1bd5ec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD5F0u; }
        if (ctx->pc != 0x1BD5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD5F0u; }
        if (ctx->pc != 0x1BD5F0u) { return; }
    }
    ctx->pc = 0x1BD5F0u;
    // 0x1bd5f0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd5f4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bd5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bd5f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd5fc: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1bd5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1bd600: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1bd600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1bd604: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bd604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd60c: 0x0  nop
    ctx->pc = 0x1bd60cu;
    // NOP
    // 0x1bd610: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bd610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bd614: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BD614u;
    SET_GPR_U32(ctx, 31, 0x1BD61Cu);
    ctx->pc = 0x1BD618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD614u;
            // 0x1bd618: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD61Cu; }
        if (ctx->pc != 0x1BD61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD61Cu; }
        if (ctx->pc != 0x1BD61Cu) { return; }
    }
    ctx->pc = 0x1BD61Cu;
    // 0x1bd61c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd620: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bd620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bd624: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd628: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1bd628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1bd62c: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1bd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1bd630: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bd630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd638: 0x0  nop
    ctx->pc = 0x1bd638u;
    // NOP
    // 0x1bd63c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bd63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bd640: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BD640u;
    SET_GPR_U32(ctx, 31, 0x1BD648u);
    ctx->pc = 0x1BD644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD640u;
            // 0x1bd644: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD648u; }
        if (ctx->pc != 0x1BD648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD648u; }
        if (ctx->pc != 0x1BD648u) { return; }
    }
    ctx->pc = 0x1BD648u;
    // 0x1bd648: 0x1000048b  b           . + 4 + (0x48B << 2)
    ctx->pc = 0x1BD648u;
    {
        const bool branch_taken_0x1bd648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd648) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD650u;
label_1bd650:
    // 0x1bd650: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BD650u;
    SET_GPR_U32(ctx, 31, 0x1BD658u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD658u; }
        if (ctx->pc != 0x1BD658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD658u; }
        if (ctx->pc != 0x1BD658u) { return; }
    }
    ctx->pc = 0x1BD658u;
    // 0x1bd658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd65c: 0x14430098  bne         $v0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x1BD65Cu;
    {
        const bool branch_taken_0x1bd65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd65c) {
            ctx->pc = 0x1BD8C0u;
            goto label_1bd8c0;
        }
    }
    ctx->pc = 0x1BD664u;
    // 0x1bd664: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bd668: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bd668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bd66c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bd66cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bd670: 0x0  nop
    ctx->pc = 0x1bd670u;
    // NOP
    // 0x1bd674: 0x0  nop
    ctx->pc = 0x1bd674u;
    // NOP
    // 0x1bd678: 0x1010  mfhi        $v0
    ctx->pc = 0x1bd678u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bd67c: 0x1440047e  bnez        $v0, . + 4 + (0x47E << 2)
    ctx->pc = 0x1BD67Cu;
    {
        const bool branch_taken_0x1bd67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD67Cu;
            // 0x1bd680: 0x3071000f  andi        $s1, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd67c) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD684u;
    // 0x1bd684: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD684u;
    {
        const bool branch_taken_0x1bd684 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1bd684) {
            ctx->pc = 0x1BD698u;
            goto label_1bd698;
        }
    }
    ctx->pc = 0x1BD68Cu;
    // 0x1bd68c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD68Cu;
    {
        const bool branch_taken_0x1bd68c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd68c) {
            ctx->pc = 0x1BD698u;
            goto label_1bd698;
        }
    }
    ctx->pc = 0x1BD694u;
    // 0x1bd694: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x1bd694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1bd698:
    // 0x1bd698: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd69c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd6a0: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1bd6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1bd6a4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BD6A4u;
    SET_GPR_U32(ctx, 31, 0x1BD6ACu);
    ctx->pc = 0x1BD6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6A4u;
            // 0x1bd6a8: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6ACu; }
        if (ctx->pc != 0x1BD6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6ACu; }
        if (ctx->pc != 0x1BD6ACu) { return; }
    }
    ctx->pc = 0x1BD6ACu;
    // 0x1bd6ac: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd6b0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd6b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd6b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd6bc: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1bd6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1bd6c0: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1bd6c4: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD6C4u;
    SET_GPR_U32(ctx, 31, 0x1BD6CCu);
    ctx->pc = 0x1BD6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6C4u;
            // 0x1bd6c8: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6CCu; }
        if (ctx->pc != 0x1BD6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6CCu; }
        if (ctx->pc != 0x1BD6CCu) { return; }
    }
    ctx->pc = 0x1BD6CCu;
    // 0x1bd6cc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd6d0: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1bd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1bd6d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd6d8: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1bd6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bd6dc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd6e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd6e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd6e8: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1bd6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1bd6ec: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD6ECu;
    SET_GPR_U32(ctx, 31, 0x1BD6F4u);
    ctx->pc = 0x1BD6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6ECu;
            // 0x1bd6f0: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6F4u; }
        if (ctx->pc != 0x1BD6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD6F4u; }
        if (ctx->pc != 0x1BD6F4u) { return; }
    }
    ctx->pc = 0x1BD6F4u;
    // 0x1bd6f4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd6f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd6fc: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1bd6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1bd700: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BD700u;
    SET_GPR_U32(ctx, 31, 0x1BD708u);
    ctx->pc = 0x1BD704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD700u;
            // 0x1bd704: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD708u; }
        if (ctx->pc != 0x1BD708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD708u; }
        if (ctx->pc != 0x1BD708u) { return; }
    }
    ctx->pc = 0x1BD708u;
    // 0x1bd708: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd70c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd710: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd714: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd718: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1bd718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1bd71c: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1bd71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1bd720: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD720u;
    SET_GPR_U32(ctx, 31, 0x1BD728u);
    ctx->pc = 0x1BD724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD720u;
            // 0x1bd724: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD728u; }
        if (ctx->pc != 0x1BD728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD728u; }
        if (ctx->pc != 0x1BD728u) { return; }
    }
    ctx->pc = 0x1BD728u;
    // 0x1bd728: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd72c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd730: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd734: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd738: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd73c: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1bd73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1bd740: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD740u;
    SET_GPR_U32(ctx, 31, 0x1BD748u);
    ctx->pc = 0x1BD744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD740u;
            // 0x1bd744: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD748u; }
        if (ctx->pc != 0x1BD748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD748u; }
        if (ctx->pc != 0x1BD748u) { return; }
    }
    ctx->pc = 0x1BD748u;
    // 0x1bd748: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd74c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd750: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1bd750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1bd754: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BD754u;
    SET_GPR_U32(ctx, 31, 0x1BD75Cu);
    ctx->pc = 0x1BD758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD754u;
            // 0x1bd758: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD75Cu; }
        if (ctx->pc != 0x1BD75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD75Cu; }
        if (ctx->pc != 0x1BD75Cu) { return; }
    }
    ctx->pc = 0x1BD75Cu;
    // 0x1bd75c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd760: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd764: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd768: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd76c: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1bd76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1bd770: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1bd770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1bd774: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD774u;
    SET_GPR_U32(ctx, 31, 0x1BD77Cu);
    ctx->pc = 0x1BD778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD774u;
            // 0x1bd778: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD77Cu; }
        if (ctx->pc != 0x1BD77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD77Cu; }
        if (ctx->pc != 0x1BD77Cu) { return; }
    }
    ctx->pc = 0x1BD77Cu;
    // 0x1bd77c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd780: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1bd780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1bd784: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd788: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1bd788u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bd78c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd790: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd794: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd798: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1bd798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1bd79c: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD79Cu;
    SET_GPR_U32(ctx, 31, 0x1BD7A4u);
    ctx->pc = 0x1BD7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD79Cu;
            // 0x1bd7a0: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7A4u; }
        if (ctx->pc != 0x1BD7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7A4u; }
        if (ctx->pc != 0x1BD7A4u) { return; }
    }
    ctx->pc = 0x1BD7A4u;
    // 0x1bd7a4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd7a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd7ac: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1bd7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1bd7b0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BD7B0u;
    SET_GPR_U32(ctx, 31, 0x1BD7B8u);
    ctx->pc = 0x1BD7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7B0u;
            // 0x1bd7b4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7B8u; }
        if (ctx->pc != 0x1BD7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7B8u; }
        if (ctx->pc != 0x1BD7B8u) { return; }
    }
    ctx->pc = 0x1BD7B8u;
    // 0x1bd7b8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd7bc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd7c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd7c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd7c8: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1bd7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1bd7cc: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1bd7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1bd7d0: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD7D0u;
    SET_GPR_U32(ctx, 31, 0x1BD7D8u);
    ctx->pc = 0x1BD7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7D0u;
            // 0x1bd7d4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7D8u; }
        if (ctx->pc != 0x1BD7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7D8u; }
        if (ctx->pc != 0x1BD7D8u) { return; }
    }
    ctx->pc = 0x1BD7D8u;
    // 0x1bd7d8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd7dc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd7e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd7e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd7e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7ec: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1bd7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1bd7f0: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD7F0u;
    SET_GPR_U32(ctx, 31, 0x1BD7F8u);
    ctx->pc = 0x1BD7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7F0u;
            // 0x1bd7f4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7F8u; }
        if (ctx->pc != 0x1BD7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7F8u; }
        if (ctx->pc != 0x1BD7F8u) { return; }
    }
    ctx->pc = 0x1BD7F8u;
    // 0x1bd7f8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd7fc: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1bd7fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1bd800: 0x1420041d  bnez        $at, . + 4 + (0x41D << 2)
    ctx->pc = 0x1BD800u;
    {
        const bool branch_taken_0x1bd800 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD800u;
            // 0x1bd804: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd800) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD808u;
    // 0x1bd808: 0x1020041b  beqz        $at, . + 4 + (0x41B << 2)
    ctx->pc = 0x1BD808u;
    {
        const bool branch_taken_0x1bd808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD808u;
            // 0x1bd80c: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd808) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD810u;
    // 0x1bd810: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bd810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bd814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd818: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd81c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1bd81cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bd820: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1bd820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1bd824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd828: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BD828u;
    SET_GPR_U32(ctx, 31, 0x1BD830u);
    ctx->pc = 0x1BD82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD828u;
            // 0x1bd82c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD830u; }
        if (ctx->pc != 0x1BD830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD830u; }
        if (ctx->pc != 0x1BD830u) { return; }
    }
    ctx->pc = 0x1BD830u;
    // 0x1bd830: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd834: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bd834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bd838: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd83c: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1bd83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1bd840: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1bd840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1bd844: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bd844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd84c: 0x0  nop
    ctx->pc = 0x1bd84cu;
    // NOP
    // 0x1bd850: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bd850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bd854: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BD854u;
    SET_GPR_U32(ctx, 31, 0x1BD85Cu);
    ctx->pc = 0x1BD858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD854u;
            // 0x1bd858: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD85Cu; }
        if (ctx->pc != 0x1BD85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD85Cu; }
        if (ctx->pc != 0x1BD85Cu) { return; }
    }
    ctx->pc = 0x1BD85Cu;
    // 0x1bd85c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd860: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bd860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bd864: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd868: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1bd868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1bd86c: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1bd86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1bd870: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bd870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd878: 0x0  nop
    ctx->pc = 0x1bd878u;
    // NOP
    // 0x1bd87c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bd87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bd880: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BD880u;
    SET_GPR_U32(ctx, 31, 0x1BD888u);
    ctx->pc = 0x1BD884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD880u;
            // 0x1bd884: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD888u; }
        if (ctx->pc != 0x1BD888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD888u; }
        if (ctx->pc != 0x1BD888u) { return; }
    }
    ctx->pc = 0x1BD888u;
    // 0x1bd888: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd88c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bd88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bd890: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd894: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1bd894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1bd898: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1bd898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1bd89c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bd89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd8a4: 0x0  nop
    ctx->pc = 0x1bd8a4u;
    // NOP
    // 0x1bd8a8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bd8a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bd8ac: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BD8ACu;
    SET_GPR_U32(ctx, 31, 0x1BD8B4u);
    ctx->pc = 0x1BD8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8ACu;
            // 0x1bd8b0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8B4u; }
        if (ctx->pc != 0x1BD8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD8B4u; }
        if (ctx->pc != 0x1BD8B4u) { return; }
    }
    ctx->pc = 0x1BD8B4u;
    // 0x1bd8b4: 0x100003f0  b           . + 4 + (0x3F0 << 2)
    ctx->pc = 0x1BD8B4u;
    {
        const bool branch_taken_0x1bd8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8b4) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD8BCu;
    // 0x1bd8bc: 0x0  nop
    ctx->pc = 0x1bd8bcu;
    // NOP
label_1bd8c0:
    // 0x1bd8c0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bd8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bd8c4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1bd8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bd8c8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bd8c8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bd8cc: 0x0  nop
    ctx->pc = 0x1bd8ccu;
    // NOP
    // 0x1bd8d0: 0x0  nop
    ctx->pc = 0x1bd8d0u;
    // NOP
    // 0x1bd8d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1bd8d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bd8d8: 0x144003e7  bnez        $v0, . + 4 + (0x3E7 << 2)
    ctx->pc = 0x1BD8D8u;
    {
        const bool branch_taken_0x1bd8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8D8u;
            // 0x1bd8dc: 0x3071000f  andi        $s1, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8d8) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BD8E0u;
    // 0x1bd8e0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD8E0u;
    {
        const bool branch_taken_0x1bd8e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1bd8e0) {
            ctx->pc = 0x1BD8F4u;
            goto label_1bd8f4;
        }
    }
    ctx->pc = 0x1BD8E8u;
    // 0x1bd8e8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD8E8u;
    {
        const bool branch_taken_0x1bd8e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8e8) {
            ctx->pc = 0x1BD8F4u;
            goto label_1bd8f4;
        }
    }
    ctx->pc = 0x1BD8F0u;
    // 0x1bd8f0: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x1bd8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1bd8f4:
    // 0x1bd8f4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd8f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd8fc: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1bd8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1bd900: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BD900u;
    SET_GPR_U32(ctx, 31, 0x1BD908u);
    ctx->pc = 0x1BD904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD900u;
            // 0x1bd904: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD908u; }
        if (ctx->pc != 0x1BD908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD908u; }
        if (ctx->pc != 0x1BD908u) { return; }
    }
    ctx->pc = 0x1BD908u;
    // 0x1bd908: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd90c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd910: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd914: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd918: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1bd918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1bd91c: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1bd91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1bd920: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD920u;
    SET_GPR_U32(ctx, 31, 0x1BD928u);
    ctx->pc = 0x1BD924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD920u;
            // 0x1bd924: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD928u; }
        if (ctx->pc != 0x1BD928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD928u; }
        if (ctx->pc != 0x1BD928u) { return; }
    }
    ctx->pc = 0x1BD928u;
    // 0x1bd928: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd92c: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1bd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1bd930: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd934: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1bd934u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bd938: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd93c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd940: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd944: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1bd944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1bd948: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD948u;
    SET_GPR_U32(ctx, 31, 0x1BD950u);
    ctx->pc = 0x1BD94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD948u;
            // 0x1bd94c: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD950u; }
        if (ctx->pc != 0x1BD950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD950u; }
        if (ctx->pc != 0x1BD950u) { return; }
    }
    ctx->pc = 0x1BD950u;
    // 0x1bd950: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd954: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd958: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1bd958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1bd95c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BD95Cu;
    SET_GPR_U32(ctx, 31, 0x1BD964u);
    ctx->pc = 0x1BD960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD95Cu;
            // 0x1bd960: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD964u; }
        if (ctx->pc != 0x1BD964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD964u; }
        if (ctx->pc != 0x1BD964u) { return; }
    }
    ctx->pc = 0x1BD964u;
    // 0x1bd964: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd968: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd96c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd970: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd974: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1bd974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1bd978: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1bd978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1bd97c: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD97Cu;
    SET_GPR_U32(ctx, 31, 0x1BD984u);
    ctx->pc = 0x1BD980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD97Cu;
            // 0x1bd980: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD984u; }
        if (ctx->pc != 0x1BD984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD984u; }
        if (ctx->pc != 0x1BD984u) { return; }
    }
    ctx->pc = 0x1BD984u;
    // 0x1bd984: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd988: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd98c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd990: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd994: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd998: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1bd998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1bd99c: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD99Cu;
    SET_GPR_U32(ctx, 31, 0x1BD9A4u);
    ctx->pc = 0x1BD9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD99Cu;
            // 0x1bd9a0: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9A4u; }
        if (ctx->pc != 0x1BD9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9A4u; }
        if (ctx->pc != 0x1BD9A4u) { return; }
    }
    ctx->pc = 0x1BD9A4u;
    // 0x1bd9a4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bd9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd9a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd9ac: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1bd9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1bd9b0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BD9B0u;
    SET_GPR_U32(ctx, 31, 0x1BD9B8u);
    ctx->pc = 0x1BD9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9B0u;
            // 0x1bd9b4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9B8u; }
        if (ctx->pc != 0x1BD9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9B8u; }
        if (ctx->pc != 0x1BD9B8u) { return; }
    }
    ctx->pc = 0x1BD9B8u;
    // 0x1bd9b8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd9bc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd9c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd9c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd9c8: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1bd9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1bd9cc: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1bd9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1bd9d0: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD9D0u;
    SET_GPR_U32(ctx, 31, 0x1BD9D8u);
    ctx->pc = 0x1BD9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9D0u;
            // 0x1bd9d4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9D8u; }
        if (ctx->pc != 0x1BD9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD9D8u; }
        if (ctx->pc != 0x1BD9D8u) { return; }
    }
    ctx->pc = 0x1BD9D8u;
    // 0x1bd9d8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bd9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bd9dc: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1bd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1bd9e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bd9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd9e4: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1bd9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bd9e8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bd9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bd9ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd9f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bd9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd9f4: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1bd9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1bd9f8: 0xc065480  jal         func_195200
    ctx->pc = 0x1BD9F8u;
    SET_GPR_U32(ctx, 31, 0x1BDA00u);
    ctx->pc = 0x1BD9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD9F8u;
            // 0x1bd9fc: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA00u; }
        if (ctx->pc != 0x1BDA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA00u; }
        if (ctx->pc != 0x1BDA00u) { return; }
    }
    ctx->pc = 0x1BDA00u;
    // 0x1bda00: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bda00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bda04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bda04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bda08: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1bda08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1bda0c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BDA0Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA14u);
    ctx->pc = 0x1BDA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA0Cu;
            // 0x1bda10: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA14u; }
        if (ctx->pc != 0x1BDA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA14u; }
        if (ctx->pc != 0x1BDA14u) { return; }
    }
    ctx->pc = 0x1BDA14u;
    // 0x1bda14: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bda14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bda18: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bda18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bda1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bda1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bda20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bda20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bda24: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1bda24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1bda28: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1bda28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1bda2c: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDA2Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA34u);
    ctx->pc = 0x1BDA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA2Cu;
            // 0x1bda30: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA34u; }
        if (ctx->pc != 0x1BDA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA34u; }
        if (ctx->pc != 0x1BDA34u) { return; }
    }
    ctx->pc = 0x1BDA34u;
    // 0x1bda34: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bda38: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bda38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bda3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bda40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bda40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bda44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bda44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda48: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1bda48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1bda4c: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDA4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA54u);
    ctx->pc = 0x1BDA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA4Cu;
            // 0x1bda50: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA54u; }
        if (ctx->pc != 0x1BDA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA54u; }
        if (ctx->pc != 0x1BDA54u) { return; }
    }
    ctx->pc = 0x1BDA54u;
    // 0x1bda54: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bda54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bda58: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1bda58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1bda5c: 0x14200386  bnez        $at, . + 4 + (0x386 << 2)
    ctx->pc = 0x1BDA5Cu;
    {
        const bool branch_taken_0x1bda5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA5Cu;
            // 0x1bda60: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda5c) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BDA64u;
    // 0x1bda64: 0x10200384  beqz        $at, . + 4 + (0x384 << 2)
    ctx->pc = 0x1BDA64u;
    {
        const bool branch_taken_0x1bda64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA64u;
            // 0x1bda68: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda64) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BDA6Cu;
    // 0x1bda6c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bda6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bda70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bda70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bda74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bda74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bda78: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1bda78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bda7c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1bda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1bda80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bda80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bda84: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BDA84u;
    SET_GPR_U32(ctx, 31, 0x1BDA8Cu);
    ctx->pc = 0x1BDA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDA84u;
            // 0x1bda88: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA8Cu; }
        if (ctx->pc != 0x1BDA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDA8Cu; }
        if (ctx->pc != 0x1BDA8Cu) { return; }
    }
    ctx->pc = 0x1BDA8Cu;
    // 0x1bda8c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bda8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bda90: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bda90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bda94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bda94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bda98: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1bda98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1bda9c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1bda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1bdaa0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bdaa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bdaa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdaa8: 0x0  nop
    ctx->pc = 0x1bdaa8u;
    // NOP
    // 0x1bdaac: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bdaacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bdab0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BDAB0u;
    SET_GPR_U32(ctx, 31, 0x1BDAB8u);
    ctx->pc = 0x1BDAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDAB0u;
            // 0x1bdab4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAB8u; }
        if (ctx->pc != 0x1BDAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAB8u; }
        if (ctx->pc != 0x1BDAB8u) { return; }
    }
    ctx->pc = 0x1BDAB8u;
    // 0x1bdab8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bdab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdabc: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bdabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bdac0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdac4: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1bdac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1bdac8: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1bdac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1bdacc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bdaccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bdad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdad4: 0x0  nop
    ctx->pc = 0x1bdad4u;
    // NOP
    // 0x1bdad8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bdad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bdadc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BDADCu;
    SET_GPR_U32(ctx, 31, 0x1BDAE4u);
    ctx->pc = 0x1BDAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDADCu;
            // 0x1bdae0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAE4u; }
        if (ctx->pc != 0x1BDAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDAE4u; }
        if (ctx->pc != 0x1BDAE4u) { return; }
    }
    ctx->pc = 0x1BDAE4u;
    // 0x1bdae4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bdae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdae8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bdae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bdaec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bdaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdaf0: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1bdaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1bdaf4: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1bdaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1bdaf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bdaf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bdafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdb00: 0x0  nop
    ctx->pc = 0x1bdb00u;
    // NOP
    // 0x1bdb04: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bdb04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bdb08: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BDB08u;
    SET_GPR_U32(ctx, 31, 0x1BDB10u);
    ctx->pc = 0x1BDB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB08u;
            // 0x1bdb0c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB10u; }
        if (ctx->pc != 0x1BDB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB10u; }
        if (ctx->pc != 0x1BDB10u) { return; }
    }
    ctx->pc = 0x1BDB10u;
    // 0x1bdb10: 0x10000359  b           . + 4 + (0x359 << 2)
    ctx->pc = 0x1BDB10u;
    {
        const bool branch_taken_0x1bdb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdb10) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BDB18u;
label_1bdb18:
    // 0x1bdb18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdb1c: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BDB1Cu;
    {
        const bool branch_taken_0x1bdb1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdb1c) {
            ctx->pc = 0x1BDB48u;
            goto label_1bdb48;
        }
    }
    ctx->pc = 0x1BDB24u;
    // 0x1bdb24: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1bdb24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1bdb28: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1bdb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1bdb2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bdb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdb30: 0x3c04c2c8  lui         $a0, 0xC2C8
    ctx->pc = 0x1bdb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49864 << 16));
    // 0x1bdb34: 0xac640124  sw          $a0, 0x124($v1)
    ctx->pc = 0x1bdb34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 4));
    // 0x1bdb38: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1bdb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1bdb3c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1bdb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1bdb40: 0x1000034d  b           . + 4 + (0x34D << 2)
    ctx->pc = 0x1BDB40u;
    {
        const bool branch_taken_0x1bdb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB40u;
            // 0x1bdb44: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb40) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BDB48u;
label_1bdb48:
    // 0x1bdb48: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x1bdb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
    // 0x1bdb4c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bdb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1bdb50: 0x3c05c2a0  lui         $a1, 0xC2A0
    ctx->pc = 0x1bdb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49824 << 16));
    // 0x1bdb54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bdb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdb58: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bdb58u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1bdb5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1bdb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bdb60: 0xac850124  sw          $a1, 0x124($a0)
    ctx->pc = 0x1bdb60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 5));
    // 0x1bdb64: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1bdb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1bdb68: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1bdb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1bdb6c: 0x10000342  b           . + 4 + (0x342 << 2)
    ctx->pc = 0x1BDB6Cu;
    {
        const bool branch_taken_0x1bdb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB6Cu;
            // 0x1bdb70: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb6c) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BDB74u;
    // 0x1bdb74: 0x0  nop
    ctx->pc = 0x1bdb74u;
    // NOP
label_1bdb78:
    // 0x1bdb78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bdb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdb7c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1bdb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bdb80: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1bdb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bdb84: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1bdb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bdb88: 0xc06fc7c  jal         func_1BF1F0
    ctx->pc = 0x1BDB88u;
    SET_GPR_U32(ctx, 31, 0x1BDB90u);
    ctx->pc = 0x1BDB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB88u;
            // 0x1bdb8c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF1F0u;
    if (runtime->hasFunction(0x1BF1F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB90u; }
        if (ctx->pc != 0x1BDB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bf1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB90u; }
        if (ctx->pc != 0x1BDB90u) { return; }
    }
    ctx->pc = 0x1BDB90u;
    // 0x1bdb90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bdb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdb94: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1bdb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1bdb98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdb98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdb9c: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1bdb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdba0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bdba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bdba4: 0x450101d6  bc1t        . + 4 + (0x1D6 << 2)
    ctx->pc = 0x1BDBA4u;
    {
        const bool branch_taken_0x1bdba4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BDBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBA4u;
            // 0x1bdba8: 0x24620120  addiu       $v0, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdba4) {
            ctx->pc = 0x1BE300u;
            goto label_1be300;
        }
    }
    ctx->pc = 0x1BDBACu;
    // 0x1bdbac: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1bdbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bdbb0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1bdbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1bdbb4: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1bdbb4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1bdbb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bdbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bdbbc: 0x3c023bb4  lui         $v0, 0x3BB4
    ctx->pc = 0x1bdbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15284 << 16));
    // 0x1bdbc0: 0x34423958  ori         $v0, $v0, 0x3958
    ctx->pc = 0x1bdbc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)14680u)));
    // 0x1bdbc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdbc8: 0x0  nop
    ctx->pc = 0x1bdbc8u;
    // NOP
    // 0x1bdbcc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1bdbccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1bdbd0: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1bdbd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1bdbd4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1bdbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdbd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bdbd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bdbdc: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BDBDCu;
    SET_GPR_U32(ctx, 31, 0x1BDBE4u);
    ctx->pc = 0x1BDBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBDCu;
            // 0x1bdbe0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBE4u; }
        if (ctx->pc != 0x1BDBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBE4u; }
        if (ctx->pc != 0x1BDBE4u) { return; }
    }
    ctx->pc = 0x1BDBE4u;
    // 0x1bdbe4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bdbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bdbe8: 0x14430097  bne         $v0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x1BDBE8u;
    {
        const bool branch_taken_0x1bdbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bdbe8) {
            ctx->pc = 0x1BDE48u;
            goto label_1bde48;
        }
    }
    ctx->pc = 0x1BDBF0u;
    // 0x1bdbf0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bdbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bdbf4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDBF4u;
    {
        const bool branch_taken_0x1bdbf4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BDBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBF4u;
            // 0x1bdbf8: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdbf4) {
            ctx->pc = 0x1BDC08u;
            goto label_1bdc08;
        }
    }
    ctx->pc = 0x1BDBFCu;
    // 0x1bdbfc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDBFCu;
    {
        const bool branch_taken_0x1bdbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdbfc) {
            ctx->pc = 0x1BDC08u;
            goto label_1bdc08;
        }
    }
    ctx->pc = 0x1BDC04u;
    // 0x1bdc04: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1bdc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1bdc08:
    // 0x1bdc08: 0x1440031b  bnez        $v0, . + 4 + (0x31B << 2)
    ctx->pc = 0x1BDC08u;
    {
        const bool branch_taken_0x1bdc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC08u;
            // 0x1bdc0c: 0x3071000f  andi        $s1, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc08) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BDC10u;
    // 0x1bdc10: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDC10u;
    {
        const bool branch_taken_0x1bdc10 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1bdc10) {
            ctx->pc = 0x1BDC24u;
            goto label_1bdc24;
        }
    }
    ctx->pc = 0x1BDC18u;
    // 0x1bdc18: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDC18u;
    {
        const bool branch_taken_0x1bdc18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc18) {
            ctx->pc = 0x1BDC24u;
            goto label_1bdc24;
        }
    }
    ctx->pc = 0x1BDC20u;
    // 0x1bdc20: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x1bdc20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1bdc24:
    // 0x1bdc24: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bdc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdc28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bdc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdc2c: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1bdc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1bdc30: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BDC30u;
    SET_GPR_U32(ctx, 31, 0x1BDC38u);
    ctx->pc = 0x1BDC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC30u;
            // 0x1bdc34: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC38u; }
        if (ctx->pc != 0x1BDC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC38u; }
        if (ctx->pc != 0x1BDC38u) { return; }
    }
    ctx->pc = 0x1BDC38u;
    // 0x1bdc38: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdc3c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdc40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdc44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdc48: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1bdc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1bdc4c: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1bdc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1bdc50: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDC50u;
    SET_GPR_U32(ctx, 31, 0x1BDC58u);
    ctx->pc = 0x1BDC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC50u;
            // 0x1bdc54: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC58u; }
        if (ctx->pc != 0x1BDC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC58u; }
        if (ctx->pc != 0x1BDC58u) { return; }
    }
    ctx->pc = 0x1BDC58u;
    // 0x1bdc58: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdc5c: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1bdc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1bdc60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdc64: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1bdc64u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bdc68: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdc6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bdc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdc74: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1bdc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1bdc78: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDC78u;
    SET_GPR_U32(ctx, 31, 0x1BDC80u);
    ctx->pc = 0x1BDC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC78u;
            // 0x1bdc7c: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC80u; }
        if (ctx->pc != 0x1BDC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC80u; }
        if (ctx->pc != 0x1BDC80u) { return; }
    }
    ctx->pc = 0x1BDC80u;
    // 0x1bdc80: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bdc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdc84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdc88: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1bdc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1bdc8c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BDC8Cu;
    SET_GPR_U32(ctx, 31, 0x1BDC94u);
    ctx->pc = 0x1BDC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC8Cu;
            // 0x1bdc90: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC94u; }
        if (ctx->pc != 0x1BDC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC94u; }
        if (ctx->pc != 0x1BDC94u) { return; }
    }
    ctx->pc = 0x1BDC94u;
    // 0x1bdc94: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdc98: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdc9c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdca0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdca4: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1bdca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1bdca8: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1bdca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1bdcac: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDCACu;
    SET_GPR_U32(ctx, 31, 0x1BDCB4u);
    ctx->pc = 0x1BDCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCACu;
            // 0x1bdcb0: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCB4u; }
        if (ctx->pc != 0x1BDCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCB4u; }
        if (ctx->pc != 0x1BDCB4u) { return; }
    }
    ctx->pc = 0x1BDCB4u;
    // 0x1bdcb4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdcb8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdcbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdcc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdcc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdcc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bdcc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdcc8: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1bdcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1bdccc: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDCCCu;
    SET_GPR_U32(ctx, 31, 0x1BDCD4u);
    ctx->pc = 0x1BDCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCCCu;
            // 0x1bdcd0: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCD4u; }
        if (ctx->pc != 0x1BDCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCD4u; }
        if (ctx->pc != 0x1BDCD4u) { return; }
    }
    ctx->pc = 0x1BDCD4u;
    // 0x1bdcd4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bdcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdcd8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bdcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdcdc: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1bdcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1bdce0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BDCE0u;
    SET_GPR_U32(ctx, 31, 0x1BDCE8u);
    ctx->pc = 0x1BDCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDCE0u;
            // 0x1bdce4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCE8u; }
        if (ctx->pc != 0x1BDCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDCE8u; }
        if (ctx->pc != 0x1BDCE8u) { return; }
    }
    ctx->pc = 0x1BDCE8u;
    // 0x1bdce8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdcec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdcf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdcf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdcf8: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1bdcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1bdcfc: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1bdcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1bdd00: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDD00u;
    SET_GPR_U32(ctx, 31, 0x1BDD08u);
    ctx->pc = 0x1BDD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD00u;
            // 0x1bdd04: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD08u; }
        if (ctx->pc != 0x1BDD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD08u; }
        if (ctx->pc != 0x1BDD08u) { return; }
    }
    ctx->pc = 0x1BDD08u;
    // 0x1bdd08: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdd0c: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1bdd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1bdd10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdd14: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1bdd14u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bdd18: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdd1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bdd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdd20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdd24: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1bdd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1bdd28: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDD28u;
    SET_GPR_U32(ctx, 31, 0x1BDD30u);
    ctx->pc = 0x1BDD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD28u;
            // 0x1bdd2c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD30u; }
        if (ctx->pc != 0x1BDD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD30u; }
        if (ctx->pc != 0x1BDD30u) { return; }
    }
    ctx->pc = 0x1BDD30u;
    // 0x1bdd30: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bdd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdd34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bdd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdd38: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1bdd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1bdd3c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BDD3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDD44u);
    ctx->pc = 0x1BDD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD3Cu;
            // 0x1bdd40: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD44u; }
        if (ctx->pc != 0x1BDD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD44u; }
        if (ctx->pc != 0x1BDD44u) { return; }
    }
    ctx->pc = 0x1BDD44u;
    // 0x1bdd44: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdd48: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdd4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdd50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdd54: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1bdd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1bdd58: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1bdd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1bdd5c: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDD5Cu;
    SET_GPR_U32(ctx, 31, 0x1BDD64u);
    ctx->pc = 0x1BDD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD5Cu;
            // 0x1bdd60: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD64u; }
        if (ctx->pc != 0x1BDD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD64u; }
        if (ctx->pc != 0x1BDD64u) { return; }
    }
    ctx->pc = 0x1BDD64u;
    // 0x1bdd64: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdd68: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdd6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdd70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdd74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bdd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd78: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1bdd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1bdd7c: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDD7Cu;
    SET_GPR_U32(ctx, 31, 0x1BDD84u);
    ctx->pc = 0x1BDD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD7Cu;
            // 0x1bdd80: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD84u; }
        if (ctx->pc != 0x1BDD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD84u; }
        if (ctx->pc != 0x1BDD84u) { return; }
    }
    ctx->pc = 0x1BDD84u;
    // 0x1bdd84: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bdd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdd88: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1bdd88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1bdd8c: 0x142002ba  bnez        $at, . + 4 + (0x2BA << 2)
    ctx->pc = 0x1BDD8Cu;
    {
        const bool branch_taken_0x1bdd8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD8Cu;
            // 0x1bdd90: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd8c) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BDD94u;
    // 0x1bdd94: 0x102002b8  beqz        $at, . + 4 + (0x2B8 << 2)
    ctx->pc = 0x1BDD94u;
    {
        const bool branch_taken_0x1bdd94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD94u;
            // 0x1bdd98: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd94) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BDD9Cu;
    // 0x1bdd9c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bdd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bdda0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdda0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdda4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bdda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdda8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1bdda8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bddac: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1bddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1bddb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bddb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bddb4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BDDB4u;
    SET_GPR_U32(ctx, 31, 0x1BDDBCu);
    ctx->pc = 0x1BDDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDB4u;
            // 0x1bddb8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDBCu; }
        if (ctx->pc != 0x1BDDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDBCu; }
        if (ctx->pc != 0x1BDDBCu) { return; }
    }
    ctx->pc = 0x1BDDBCu;
    // 0x1bddbc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bddc0: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bddc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bddc8: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1bddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1bddcc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1bddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1bddd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bddd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bddd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bddd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bddd8: 0x0  nop
    ctx->pc = 0x1bddd8u;
    // NOP
    // 0x1bdddc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bdddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bdde0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BDDE0u;
    SET_GPR_U32(ctx, 31, 0x1BDDE8u);
    ctx->pc = 0x1BDDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDE0u;
            // 0x1bdde4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDE8u; }
        if (ctx->pc != 0x1BDDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDDE8u; }
        if (ctx->pc != 0x1BDDE8u) { return; }
    }
    ctx->pc = 0x1BDDE8u;
    // 0x1bdde8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bdde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bddec: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bddecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bddf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bddf4: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1bddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1bddf8: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1bddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1bddfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bddfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bde00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bde00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bde04: 0x0  nop
    ctx->pc = 0x1bde04u;
    // NOP
    // 0x1bde08: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bde08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bde0c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BDE0Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE14u);
    ctx->pc = 0x1BDE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE0Cu;
            // 0x1bde10: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE14u; }
        if (ctx->pc != 0x1BDE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE14u; }
        if (ctx->pc != 0x1BDE14u) { return; }
    }
    ctx->pc = 0x1BDE14u;
    // 0x1bde14: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bde14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bde18: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1bde18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1bde1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bde1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bde20: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1bde20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1bde24: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1bde24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1bde28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bde28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bde2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bde2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bde30: 0x0  nop
    ctx->pc = 0x1bde30u;
    // NOP
    // 0x1bde34: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bde34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bde38: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BDE38u;
    SET_GPR_U32(ctx, 31, 0x1BDE40u);
    ctx->pc = 0x1BDE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE38u;
            // 0x1bde3c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE40u; }
        if (ctx->pc != 0x1BDE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE40u; }
        if (ctx->pc != 0x1BDE40u) { return; }
    }
    ctx->pc = 0x1BDE40u;
    // 0x1bde40: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x1BDE40u;
    {
        const bool branch_taken_0x1bde40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde40) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BDE48u;
label_1bde48:
    // 0x1bde48: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BDE48u;
    SET_GPR_U32(ctx, 31, 0x1BDE50u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE50u; }
        if (ctx->pc != 0x1BDE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDE50u; }
        if (ctx->pc != 0x1BDE50u) { return; }
    }
    ctx->pc = 0x1BDE50u;
    // 0x1bde50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bde50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bde54: 0x14430098  bne         $v0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x1BDE54u;
    {
        const bool branch_taken_0x1bde54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bde54) {
            ctx->pc = 0x1BE0B8u;
            goto label_1be0b8;
        }
    }
    ctx->pc = 0x1BDE5Cu;
    // 0x1bde5c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bde5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bde60: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDE60u;
    {
        const bool branch_taken_0x1bde60 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BDE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE60u;
            // 0x1bde64: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde60) {
            ctx->pc = 0x1BDE74u;
            goto label_1bde74;
        }
    }
    ctx->pc = 0x1BDE68u;
    // 0x1bde68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDE68u;
    {
        const bool branch_taken_0x1bde68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde68) {
            ctx->pc = 0x1BDE74u;
            goto label_1bde74;
        }
    }
    ctx->pc = 0x1BDE70u;
    // 0x1bde70: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1bde70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1bde74:
    // 0x1bde74: 0x14400280  bnez        $v0, . + 4 + (0x280 << 2)
    ctx->pc = 0x1BDE74u;
    {
        const bool branch_taken_0x1bde74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE74u;
            // 0x1bde78: 0x3071000f  andi        $s1, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde74) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BDE7Cu;
    // 0x1bde7c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDE7Cu;
    {
        const bool branch_taken_0x1bde7c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1bde7c) {
            ctx->pc = 0x1BDE90u;
            goto label_1bde90;
        }
    }
    ctx->pc = 0x1BDE84u;
    // 0x1bde84: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDE84u;
    {
        const bool branch_taken_0x1bde84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde84) {
            ctx->pc = 0x1BDE90u;
            goto label_1bde90;
        }
    }
    ctx->pc = 0x1BDE8Cu;
    // 0x1bde8c: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x1bde8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1bde90:
    // 0x1bde90: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bde90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bde94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bde94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bde98: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1bde98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1bde9c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BDE9Cu;
    SET_GPR_U32(ctx, 31, 0x1BDEA4u);
    ctx->pc = 0x1BDEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDE9Cu;
            // 0x1bdea0: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEA4u; }
        if (ctx->pc != 0x1BDEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEA4u; }
        if (ctx->pc != 0x1BDEA4u) { return; }
    }
    ctx->pc = 0x1BDEA4u;
    // 0x1bdea4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdea8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdeac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdeb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdeb4: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1bdeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1bdeb8: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1bdeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1bdebc: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDEBCu;
    SET_GPR_U32(ctx, 31, 0x1BDEC4u);
    ctx->pc = 0x1BDEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEBCu;
            // 0x1bdec0: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEC4u; }
        if (ctx->pc != 0x1BDEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEC4u; }
        if (ctx->pc != 0x1BDEC4u) { return; }
    }
    ctx->pc = 0x1BDEC4u;
    // 0x1bdec4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdec8: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1bdec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1bdecc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bded0: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1bded0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bded4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bded4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bded8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bded8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdedc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdee0: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1bdee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1bdee4: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDEE4u;
    SET_GPR_U32(ctx, 31, 0x1BDEECu);
    ctx->pc = 0x1BDEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEE4u;
            // 0x1bdee8: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEECu; }
        if (ctx->pc != 0x1BDEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEECu; }
        if (ctx->pc != 0x1BDEECu) { return; }
    }
    ctx->pc = 0x1BDEECu;
    // 0x1bdeec: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bdeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdef0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bdef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdef4: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1bdef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1bdef8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BDEF8u;
    SET_GPR_U32(ctx, 31, 0x1BDF00u);
    ctx->pc = 0x1BDEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEF8u;
            // 0x1bdefc: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF00u; }
        if (ctx->pc != 0x1BDF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF00u; }
        if (ctx->pc != 0x1BDF00u) { return; }
    }
    ctx->pc = 0x1BDF00u;
    // 0x1bdf00: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdf04: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdf08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdf0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdf0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdf10: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1bdf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1bdf14: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1bdf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1bdf18: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDF18u;
    SET_GPR_U32(ctx, 31, 0x1BDF20u);
    ctx->pc = 0x1BDF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF18u;
            // 0x1bdf1c: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF20u; }
        if (ctx->pc != 0x1BDF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF20u; }
        if (ctx->pc != 0x1BDF20u) { return; }
    }
    ctx->pc = 0x1BDF20u;
    // 0x1bdf20: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdf24: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdf28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdf2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdf2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdf30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bdf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf34: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1bdf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1bdf38: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDF38u;
    SET_GPR_U32(ctx, 31, 0x1BDF40u);
    ctx->pc = 0x1BDF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF38u;
            // 0x1bdf3c: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF40u; }
        if (ctx->pc != 0x1BDF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF40u; }
        if (ctx->pc != 0x1BDF40u) { return; }
    }
    ctx->pc = 0x1BDF40u;
    // 0x1bdf40: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bdf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdf44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bdf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdf48: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1bdf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1bdf4c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BDF4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF54u);
    ctx->pc = 0x1BDF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF4Cu;
            // 0x1bdf50: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF54u; }
        if (ctx->pc != 0x1BDF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF54u; }
        if (ctx->pc != 0x1BDF54u) { return; }
    }
    ctx->pc = 0x1BDF54u;
    // 0x1bdf54: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdf58: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdf5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdf60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdf60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdf64: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1bdf68: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1bdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1bdf6c: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF74u);
    ctx->pc = 0x1BDF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF6Cu;
            // 0x1bdf70: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF74u; }
        if (ctx->pc != 0x1BDF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF74u; }
        if (ctx->pc != 0x1BDF74u) { return; }
    }
    ctx->pc = 0x1BDF74u;
    // 0x1bdf74: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdf78: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1bdf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1bdf7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdf80: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1bdf80u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bdf84: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdf88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bdf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdf90: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1bdf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1bdf94: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDF94u;
    SET_GPR_U32(ctx, 31, 0x1BDF9Cu);
    ctx->pc = 0x1BDF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF94u;
            // 0x1bdf98: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF9Cu; }
        if (ctx->pc != 0x1BDF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF9Cu; }
        if (ctx->pc != 0x1BDF9Cu) { return; }
    }
    ctx->pc = 0x1BDF9Cu;
    // 0x1bdf9c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bdf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdfa0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bdfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdfa4: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1bdfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1bdfa8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BDFA8u;
    SET_GPR_U32(ctx, 31, 0x1BDFB0u);
    ctx->pc = 0x1BDFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFA8u;
            // 0x1bdfac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFB0u; }
        if (ctx->pc != 0x1BDFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFB0u; }
        if (ctx->pc != 0x1BDFB0u) { return; }
    }
    ctx->pc = 0x1BDFB0u;
    // 0x1bdfb0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdfb4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdfb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdfbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdfc0: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1bdfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1bdfc4: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1bdfc8: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDFC8u;
    SET_GPR_U32(ctx, 31, 0x1BDFD0u);
    ctx->pc = 0x1BDFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFC8u;
            // 0x1bdfcc: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFD0u; }
        if (ctx->pc != 0x1BDFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFD0u; }
        if (ctx->pc != 0x1BDFD0u) { return; }
    }
    ctx->pc = 0x1BDFD0u;
    // 0x1bdfd0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1bdfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdfd4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bdfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bdfd8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bdfdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bdfdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdfe0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bdfe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfe4: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1bdfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1bdfe8: 0xc065480  jal         func_195200
    ctx->pc = 0x1BDFE8u;
    SET_GPR_U32(ctx, 31, 0x1BDFF0u);
    ctx->pc = 0x1BDFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFE8u;
            // 0x1bdfec: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFF0u; }
        if (ctx->pc != 0x1BDFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFF0u; }
        if (ctx->pc != 0x1BDFF0u) { return; }
    }
    ctx->pc = 0x1BDFF0u;
    // 0x1bdff0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bdff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bdff4: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1bdff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1bdff8: 0x1420021f  bnez        $at, . + 4 + (0x21F << 2)
    ctx->pc = 0x1BDFF8u;
    {
        const bool branch_taken_0x1bdff8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFF8u;
            // 0x1bdffc: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdff8) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE000u;
    // 0x1be000: 0x1020021d  beqz        $at, . + 4 + (0x21D << 2)
    ctx->pc = 0x1BE000u;
    {
        const bool branch_taken_0x1be000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE000u;
            // 0x1be004: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be000) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE008u;
    // 0x1be008: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1be008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1be00c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be010: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be014: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1be014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1be018: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1be018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1be01c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be020: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BE020u;
    SET_GPR_U32(ctx, 31, 0x1BE028u);
    ctx->pc = 0x1BE024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE020u;
            // 0x1be024: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE028u; }
        if (ctx->pc != 0x1BE028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE028u; }
        if (ctx->pc != 0x1BE028u) { return; }
    }
    ctx->pc = 0x1BE028u;
    // 0x1be028: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1be028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be02c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1be02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1be030: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be034: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1be034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1be038: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1be038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1be03c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be03cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be044: 0x0  nop
    ctx->pc = 0x1be044u;
    // NOP
    // 0x1be048: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1be048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1be04c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BE04Cu;
    SET_GPR_U32(ctx, 31, 0x1BE054u);
    ctx->pc = 0x1BE050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE04Cu;
            // 0x1be050: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE054u; }
        if (ctx->pc != 0x1BE054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE054u; }
        if (ctx->pc != 0x1BE054u) { return; }
    }
    ctx->pc = 0x1BE054u;
    // 0x1be054: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1be054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be058: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1be058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1be05c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be060: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1be060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1be064: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1be064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1be068: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be06c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be070: 0x0  nop
    ctx->pc = 0x1be070u;
    // NOP
    // 0x1be074: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1be074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1be078: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BE078u;
    SET_GPR_U32(ctx, 31, 0x1BE080u);
    ctx->pc = 0x1BE07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE078u;
            // 0x1be07c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE080u; }
        if (ctx->pc != 0x1BE080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE080u; }
        if (ctx->pc != 0x1BE080u) { return; }
    }
    ctx->pc = 0x1BE080u;
    // 0x1be080: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1be080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be084: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1be084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1be088: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be08c: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1be08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1be090: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1be090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1be094: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be09c: 0x0  nop
    ctx->pc = 0x1be09cu;
    // NOP
    // 0x1be0a0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1be0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1be0a4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BE0A4u;
    SET_GPR_U32(ctx, 31, 0x1BE0ACu);
    ctx->pc = 0x1BE0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0A4u;
            // 0x1be0a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0ACu; }
        if (ctx->pc != 0x1BE0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0ACu; }
        if (ctx->pc != 0x1BE0ACu) { return; }
    }
    ctx->pc = 0x1BE0ACu;
    // 0x1be0ac: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x1BE0ACu;
    {
        const bool branch_taken_0x1be0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be0ac) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE0B4u;
    // 0x1be0b4: 0x0  nop
    ctx->pc = 0x1be0b4u;
    // NOP
label_1be0b8:
    // 0x1be0b8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1be0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be0bc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE0BCu;
    {
        const bool branch_taken_0x1be0bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BE0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0BCu;
            // 0x1be0c0: 0x3052000f  andi        $s2, $v0, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0bc) {
            ctx->pc = 0x1BE0D0u;
            goto label_1be0d0;
        }
    }
    ctx->pc = 0x1BE0C4u;
    // 0x1be0c4: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE0C4u;
    {
        const bool branch_taken_0x1be0c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be0c4) {
            ctx->pc = 0x1BE0D0u;
            goto label_1be0d0;
        }
    }
    ctx->pc = 0x1BE0CCu;
    // 0x1be0cc: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x1be0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
label_1be0d0:
    // 0x1be0d0: 0x164001e9  bnez        $s2, . + 4 + (0x1E9 << 2)
    ctx->pc = 0x1BE0D0u;
    {
        const bool branch_taken_0x1be0d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be0d0) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE0D8u;
    // 0x1be0d8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1be0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be0dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be0e0: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1be0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1be0e4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BE0E4u;
    SET_GPR_U32(ctx, 31, 0x1BE0ECu);
    ctx->pc = 0x1BE0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0E4u;
            // 0x1be0e8: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0ECu; }
        if (ctx->pc != 0x1BE0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0ECu; }
        if (ctx->pc != 0x1BE0ECu) { return; }
    }
    ctx->pc = 0x1BE0ECu;
    // 0x1be0ec: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1be0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be0f0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1be0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1be0f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1be0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be0f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be0fc: 0x2646000a  addiu       $a2, $s2, 0xA
    ctx->pc = 0x1be0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x1be100: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1be100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1be104: 0xc065480  jal         func_195200
    ctx->pc = 0x1BE104u;
    SET_GPR_U32(ctx, 31, 0x1BE10Cu);
    ctx->pc = 0x1BE108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE104u;
            // 0x1be108: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE10Cu; }
        if (ctx->pc != 0x1BE10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE10Cu; }
        if (ctx->pc != 0x1BE10Cu) { return; }
    }
    ctx->pc = 0x1BE10Cu;
    // 0x1be10c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1be10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be110: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1be110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1be114: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1be114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be118: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x1be118u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1be11c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1be11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1be120: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1be120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be124: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be128: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1be128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1be12c: 0xc065480  jal         func_195200
    ctx->pc = 0x1BE12Cu;
    SET_GPR_U32(ctx, 31, 0x1BE134u);
    ctx->pc = 0x1BE130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE12Cu;
            // 0x1be130: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE134u; }
        if (ctx->pc != 0x1BE134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE134u; }
        if (ctx->pc != 0x1BE134u) { return; }
    }
    ctx->pc = 0x1BE134u;
    // 0x1be134: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1be134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be138: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be13c: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1be13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1be140: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BE140u;
    SET_GPR_U32(ctx, 31, 0x1BE148u);
    ctx->pc = 0x1BE144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE140u;
            // 0x1be144: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE148u; }
        if (ctx->pc != 0x1BE148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE148u; }
        if (ctx->pc != 0x1BE148u) { return; }
    }
    ctx->pc = 0x1BE148u;
    // 0x1be148: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1be148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be14c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1be14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1be150: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be154: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be158: 0x2646000a  addiu       $a2, $s2, 0xA
    ctx->pc = 0x1be158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x1be15c: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1be15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1be160: 0xc065480  jal         func_195200
    ctx->pc = 0x1BE160u;
    SET_GPR_U32(ctx, 31, 0x1BE168u);
    ctx->pc = 0x1BE164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE160u;
            // 0x1be164: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE168u; }
        if (ctx->pc != 0x1BE168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE168u; }
        if (ctx->pc != 0x1BE168u) { return; }
    }
    ctx->pc = 0x1BE168u;
    // 0x1be168: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1be168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be16c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1be16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1be170: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1be170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be174: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be178: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1be178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be17c: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1be17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1be180: 0xc065480  jal         func_195200
    ctx->pc = 0x1BE180u;
    SET_GPR_U32(ctx, 31, 0x1BE188u);
    ctx->pc = 0x1BE184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE180u;
            // 0x1be184: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE188u; }
        if (ctx->pc != 0x1BE188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE188u; }
        if (ctx->pc != 0x1BE188u) { return; }
    }
    ctx->pc = 0x1BE188u;
    // 0x1be188: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1be188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be18c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be190: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1be190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1be194: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BE194u;
    SET_GPR_U32(ctx, 31, 0x1BE19Cu);
    ctx->pc = 0x1BE198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE194u;
            // 0x1be198: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE19Cu; }
        if (ctx->pc != 0x1BE19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE19Cu; }
        if (ctx->pc != 0x1BE19Cu) { return; }
    }
    ctx->pc = 0x1BE19Cu;
    // 0x1be19c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1be19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be1a0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1be1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1be1a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1be1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be1a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be1ac: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x1be1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1be1b0: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1be1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1be1b4: 0xc065480  jal         func_195200
    ctx->pc = 0x1BE1B4u;
    SET_GPR_U32(ctx, 31, 0x1BE1BCu);
    ctx->pc = 0x1BE1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1B4u;
            // 0x1be1b8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1BCu; }
        if (ctx->pc != 0x1BE1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1BCu; }
        if (ctx->pc != 0x1BE1BCu) { return; }
    }
    ctx->pc = 0x1BE1BCu;
    // 0x1be1bc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be1c0: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1be1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1be1c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1be1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be1c8: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x1be1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1be1cc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1be1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1be1d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1be1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be1d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be1d8: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1be1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1be1dc: 0xc065480  jal         func_195200
    ctx->pc = 0x1BE1DCu;
    SET_GPR_U32(ctx, 31, 0x1BE1E4u);
    ctx->pc = 0x1BE1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1DCu;
            // 0x1be1e0: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1E4u; }
        if (ctx->pc != 0x1BE1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1E4u; }
        if (ctx->pc != 0x1BE1E4u) { return; }
    }
    ctx->pc = 0x1BE1E4u;
    // 0x1be1e4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1be1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be1e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be1ec: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1be1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1be1f0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BE1F0u;
    SET_GPR_U32(ctx, 31, 0x1BE1F8u);
    ctx->pc = 0x1BE1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1F0u;
            // 0x1be1f4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1F8u; }
        if (ctx->pc != 0x1BE1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1F8u; }
        if (ctx->pc != 0x1BE1F8u) { return; }
    }
    ctx->pc = 0x1BE1F8u;
    // 0x1be1f8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1be1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be1fc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1be1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1be200: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1be200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be204: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be208: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x1be208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1be20c: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1be20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1be210: 0xc065480  jal         func_195200
    ctx->pc = 0x1BE210u;
    SET_GPR_U32(ctx, 31, 0x1BE218u);
    ctx->pc = 0x1BE214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE210u;
            // 0x1be214: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE218u; }
        if (ctx->pc != 0x1BE218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE218u; }
        if (ctx->pc != 0x1BE218u) { return; }
    }
    ctx->pc = 0x1BE218u;
    // 0x1be218: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1be218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be21c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1be21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1be220: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1be220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be224: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1be224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be228: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1be228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be22c: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1be22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1be230: 0xc065480  jal         func_195200
    ctx->pc = 0x1BE230u;
    SET_GPR_U32(ctx, 31, 0x1BE238u);
    ctx->pc = 0x1BE234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE230u;
            // 0x1be234: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE238u; }
        if (ctx->pc != 0x1BE238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE238u; }
        if (ctx->pc != 0x1BE238u) { return; }
    }
    ctx->pc = 0x1BE238u;
    // 0x1be238: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1be238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be23c: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1be23cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1be240: 0x1420018d  bnez        $at, . + 4 + (0x18D << 2)
    ctx->pc = 0x1BE240u;
    {
        const bool branch_taken_0x1be240 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE240u;
            // 0x1be244: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be240) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE248u;
    // 0x1be248: 0x1020018b  beqz        $at, . + 4 + (0x18B << 2)
    ctx->pc = 0x1BE248u;
    {
        const bool branch_taken_0x1be248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE248u;
            // 0x1be24c: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be248) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE250u;
    // 0x1be250: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1be250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1be254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be258: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be25c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1be25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1be260: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1be260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1be264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be268: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BE268u;
    SET_GPR_U32(ctx, 31, 0x1BE270u);
    ctx->pc = 0x1BE26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE268u;
            // 0x1be26c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE270u; }
        if (ctx->pc != 0x1BE270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE270u; }
        if (ctx->pc != 0x1BE270u) { return; }
    }
    ctx->pc = 0x1BE270u;
    // 0x1be270: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1be270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be274: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1be274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1be278: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be27c: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1be27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1be280: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1be280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1be284: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be28c: 0x0  nop
    ctx->pc = 0x1be28cu;
    // NOP
    // 0x1be290: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1be290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1be294: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BE294u;
    SET_GPR_U32(ctx, 31, 0x1BE29Cu);
    ctx->pc = 0x1BE298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE294u;
            // 0x1be298: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE29Cu; }
        if (ctx->pc != 0x1BE29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE29Cu; }
        if (ctx->pc != 0x1BE29Cu) { return; }
    }
    ctx->pc = 0x1BE29Cu;
    // 0x1be29c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1be29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be2a0: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1be2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1be2a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be2a8: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1be2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1be2ac: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1be2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1be2b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be2b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be2b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be2b8: 0x0  nop
    ctx->pc = 0x1be2b8u;
    // NOP
    // 0x1be2bc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1be2bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1be2c0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BE2C0u;
    SET_GPR_U32(ctx, 31, 0x1BE2C8u);
    ctx->pc = 0x1BE2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2C0u;
            // 0x1be2c4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2C8u; }
        if (ctx->pc != 0x1BE2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2C8u; }
        if (ctx->pc != 0x1BE2C8u) { return; }
    }
    ctx->pc = 0x1BE2C8u;
    // 0x1be2c8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1be2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be2cc: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1be2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1be2d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be2d4: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1be2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1be2d8: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1be2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1be2dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be2e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be2e4: 0x0  nop
    ctx->pc = 0x1be2e4u;
    // NOP
    // 0x1be2e8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1be2e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1be2ec: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BE2ECu;
    SET_GPR_U32(ctx, 31, 0x1BE2F4u);
    ctx->pc = 0x1BE2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2ECu;
            // 0x1be2f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2F4u; }
        if (ctx->pc != 0x1BE2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2F4u; }
        if (ctx->pc != 0x1BE2F4u) { return; }
    }
    ctx->pc = 0x1BE2F4u;
    // 0x1be2f4: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x1BE2F4u;
    {
        const bool branch_taken_0x1be2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be2f4) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE2FCu;
    // 0x1be2fc: 0x0  nop
    ctx->pc = 0x1be2fcu;
    // NOP
label_1be300:
    // 0x1be300: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1be300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1be304: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1be304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be308: 0x3c04c2c8  lui         $a0, 0xC2C8
    ctx->pc = 0x1be308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49864 << 16));
    // 0x1be30c: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1be30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1be310: 0xac640124  sw          $a0, 0x124($v1)
    ctx->pc = 0x1be310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 4));
    // 0x1be314: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1be314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1be318: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1be318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1be31c: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x1BE31Cu;
    {
        const bool branch_taken_0x1be31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE31Cu;
            // 0x1be320: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be31c) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE324u;
    // 0x1be324: 0x0  nop
    ctx->pc = 0x1be324u;
    // NOP
label_1be328:
    // 0x1be328: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1BE328u;
    SET_GPR_U32(ctx, 31, 0x1BE330u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE330u; }
        if (ctx->pc != 0x1BE330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE330u; }
        if (ctx->pc != 0x1BE330u) { return; }
    }
    ctx->pc = 0x1BE330u;
    // 0x1be330: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1be330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be334: 0x3c023f45  lui         $v0, 0x3F45
    ctx->pc = 0x1be334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16197 << 16));
    // 0x1be338: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x1be338u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7864u)));
    // 0x1be33c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1be33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1be340: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be344: 0x0  nop
    ctx->pc = 0x1be344u;
    // NOP
    // 0x1be348: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1be348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1be34c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1be34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1be350: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1be350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be354: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1be354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1be358: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1be358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1be35c: 0xc06fc7c  jal         func_1BF1F0
    ctx->pc = 0x1BE35Cu;
    SET_GPR_U32(ctx, 31, 0x1BE364u);
    ctx->pc = 0x1BE360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE35Cu;
            // 0x1be360: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF1F0u;
    if (runtime->hasFunction(0x1BF1F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE364u; }
        if (ctx->pc != 0x1BE364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bf1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE364u; }
        if (ctx->pc != 0x1BE364u) { return; }
    }
    ctx->pc = 0x1BE364u;
    // 0x1be364: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1be364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be36c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1be36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1be370: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1be370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be374: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x1BE374u;
    SET_GPR_U32(ctx, 31, 0x1BE37Cu);
    ctx->pc = 0x1BE378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE374u;
            // 0x1be378: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (runtime->hasFunction(0x16E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE37Cu; }
        if (ctx->pc != 0x1BE37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Hp0_0x16e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE37Cu; }
        if (ctx->pc != 0x1BE37Cu) { return; }
    }
    ctx->pc = 0x1BE37Cu;
    // 0x1be37c: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x1BE37Cu;
    SET_GPR_U32(ctx, 31, 0x1BE384u);
    ctx->pc = 0x1BE380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE37Cu;
            // 0x1be380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE384u; }
        if (ctx->pc != 0x1BE384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE384u; }
        if (ctx->pc != 0x1BE384u) { return; }
    }
    ctx->pc = 0x1BE384u;
    // 0x1be384: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BE384u;
    SET_GPR_U32(ctx, 31, 0x1BE38Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE38Cu; }
        if (ctx->pc != 0x1BE38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE38Cu; }
        if (ctx->pc != 0x1BE38Cu) { return; }
    }
    ctx->pc = 0x1BE38Cu;
    // 0x1be38c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1be38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1be390: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1be390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1be394: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1be394u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1be398: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1be398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be39c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1be39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be3a0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1be3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1be3a4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1be3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1be3a8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1be3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1be3ac: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1be3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1be3b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be3b4: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1be3b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1be3b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1be3b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1be3bc: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x1be3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1be3c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1be3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1be3c4: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1be3c4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1be3c8: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1BE3C8u;
    SET_GPR_U32(ctx, 31, 0x1BE3D0u);
    ctx->pc = 0x1BE3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3C8u;
            // 0x1be3cc: 0x2444ff60  addiu       $a0, $v0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3D0u; }
        if (ctx->pc != 0x1BE3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3D0u; }
        if (ctx->pc != 0x1BE3D0u) { return; }
    }
    ctx->pc = 0x1BE3D0u;
    // 0x1be3d0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be3d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1be3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1be3d8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1be3d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1be3dc: 0x0  nop
    ctx->pc = 0x1be3dcu;
    // NOP
    // 0x1be3e0: 0x0  nop
    ctx->pc = 0x1be3e0u;
    // NOP
    // 0x1be3e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1be3e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1be3e8: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1BE3E8u;
    {
        const bool branch_taken_0x1be3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be3e8) {
            ctx->pc = 0x1BE568u;
            goto label_1be568;
        }
    }
    ctx->pc = 0x1BE3F0u;
    // 0x1be3f0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BE3F0u;
    SET_GPR_U32(ctx, 31, 0x1BE3F8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3F8u; }
        if (ctx->pc != 0x1BE3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3F8u; }
        if (ctx->pc != 0x1BE3F8u) { return; }
    }
    ctx->pc = 0x1BE3F8u;
    // 0x1be3f8: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1be3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1be3fc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1be3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1be400: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1be400u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1be404: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1be404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be408: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1be408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be40c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1be40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1be410: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1be410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1be414: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1be414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1be418: 0x8810  mfhi        $s1
    ctx->pc = 0x1be418u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1be41c: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1be41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1be420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be424: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1be424u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1be428: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1be428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1be42c: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x1be42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1be430: 0x2444ff60  addiu       $a0, $v0, -0xA0
    ctx->pc = 0x1be430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1be434: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1BE434u;
    SET_GPR_U32(ctx, 31, 0x1BE43Cu);
    ctx->pc = 0x1BE438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE434u;
            // 0x1be438: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE43Cu; }
        if (ctx->pc != 0x1BE43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE43Cu; }
        if (ctx->pc != 0x1BE43Cu) { return; }
    }
    ctx->pc = 0x1BE43Cu;
    // 0x1be43c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1be43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1be440: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1be440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1be444: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1be444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1be448: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1be448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1be44c: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1be44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1be450: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1be450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1be454: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be45c: 0x0  nop
    ctx->pc = 0x1be45cu;
    // NOP
    // 0x1be460: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1be460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1be464: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BE464u;
    SET_GPR_U32(ctx, 31, 0x1BE46Cu);
    ctx->pc = 0x1BE468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE464u;
            // 0x1be468: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE46Cu; }
        if (ctx->pc != 0x1BE46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE46Cu; }
        if (ctx->pc != 0x1BE46Cu) { return; }
    }
    ctx->pc = 0x1BE46Cu;
    // 0x1be46c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BE46Cu;
    SET_GPR_U32(ctx, 31, 0x1BE474u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE474u; }
        if (ctx->pc != 0x1BE474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE474u; }
        if (ctx->pc != 0x1BE474u) { return; }
    }
    ctx->pc = 0x1BE474u;
    // 0x1be474: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be474u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1be478: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BE478u;
    {
        const bool branch_taken_0x1be478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be478) {
            ctx->pc = 0x1BE4B0u;
            goto label_1be4b0;
        }
    }
    ctx->pc = 0x1BE480u;
    // 0x1be480: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1be480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1be484: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1be484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1be488: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1be488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1be48c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1be48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1be490: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1be490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1be494: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1be494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1be498: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be49c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be4a0: 0x0  nop
    ctx->pc = 0x1be4a0u;
    // NOP
    // 0x1be4a4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1be4a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1be4a8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BE4A8u;
    SET_GPR_U32(ctx, 31, 0x1BE4B0u);
    ctx->pc = 0x1BE4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE4A8u;
            // 0x1be4ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4B0u; }
        if (ctx->pc != 0x1BE4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4B0u; }
        if (ctx->pc != 0x1BE4B0u) { return; }
    }
    ctx->pc = 0x1BE4B0u;
label_1be4b0:
    // 0x1be4b0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BE4B0u;
    SET_GPR_U32(ctx, 31, 0x1BE4B8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4B8u; }
        if (ctx->pc != 0x1BE4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4B8u; }
        if (ctx->pc != 0x1BE4B8u) { return; }
    }
    ctx->pc = 0x1BE4B8u;
    // 0x1be4b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be4b8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1be4bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BE4BCu;
    {
        const bool branch_taken_0x1be4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be4bc) {
            ctx->pc = 0x1BE4F8u;
            goto label_1be4f8;
        }
    }
    ctx->pc = 0x1BE4C4u;
    // 0x1be4c4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1be4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1be4c8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1be4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1be4cc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1be4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1be4d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1be4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1be4d4: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1be4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1be4d8: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1be4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1be4dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1be4dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be4e4: 0x0  nop
    ctx->pc = 0x1be4e4u;
    // NOP
    // 0x1be4e8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1be4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1be4ec: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BE4ECu;
    SET_GPR_U32(ctx, 31, 0x1BE4F4u);
    ctx->pc = 0x1BE4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE4ECu;
            // 0x1be4f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4F4u; }
        if (ctx->pc != 0x1BE4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4F4u; }
        if (ctx->pc != 0x1BE4F4u) { return; }
    }
    ctx->pc = 0x1BE4F4u;
    // 0x1be4f4: 0x0  nop
    ctx->pc = 0x1be4f4u;
    // NOP
label_1be4f8:
    // 0x1be4f8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BE4F8u;
    SET_GPR_U32(ctx, 31, 0x1BE500u);
    ctx->pc = 0x1BE4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE4F8u;
            // 0x1be4fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE500u; }
        if (ctx->pc != 0x1BE500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE500u; }
        if (ctx->pc != 0x1BE500u) { return; }
    }
    ctx->pc = 0x1BE500u;
    // 0x1be500: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE500u;
    {
        const bool branch_taken_0x1be500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be500) {
            ctx->pc = 0x1BE530u;
            goto label_1be530;
        }
    }
    ctx->pc = 0x1BE508u;
    // 0x1be508: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BE508u;
    SET_GPR_U32(ctx, 31, 0x1BE510u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE510u; }
        if (ctx->pc != 0x1BE510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE510u; }
        if (ctx->pc != 0x1BE510u) { return; }
    }
    ctx->pc = 0x1BE510u;
    // 0x1be510: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1be510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1be514: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1be514u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1be518: 0x0  nop
    ctx->pc = 0x1be518u;
    // NOP
    // 0x1be51c: 0x0  nop
    ctx->pc = 0x1be51cu;
    // NOP
    // 0x1be520: 0x2810  mfhi        $a1
    ctx->pc = 0x1be520u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1be524: 0xc055124  jal         func_154490
    ctx->pc = 0x1BE524u;
    SET_GPR_U32(ctx, 31, 0x1BE52Cu);
    ctx->pc = 0x1BE528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE524u;
            // 0x1be528: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE52Cu; }
        if (ctx->pc != 0x1BE52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE52Cu; }
        if (ctx->pc != 0x1BE52Cu) { return; }
    }
    ctx->pc = 0x1BE52Cu;
    // 0x1be52c: 0x0  nop
    ctx->pc = 0x1be52cu;
    // NOP
label_1be530:
    // 0x1be530: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BE530u;
    SET_GPR_U32(ctx, 31, 0x1BE538u);
    ctx->pc = 0x1BE534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE530u;
            // 0x1be534: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE538u; }
        if (ctx->pc != 0x1BE538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE538u; }
        if (ctx->pc != 0x1BE538u) { return; }
    }
    ctx->pc = 0x1BE538u;
    // 0x1be538: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE538u;
    {
        const bool branch_taken_0x1be538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be538) {
            ctx->pc = 0x1BE568u;
            goto label_1be568;
        }
    }
    ctx->pc = 0x1BE540u;
    // 0x1be540: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BE540u;
    SET_GPR_U32(ctx, 31, 0x1BE548u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE548u; }
        if (ctx->pc != 0x1BE548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE548u; }
        if (ctx->pc != 0x1BE548u) { return; }
    }
    ctx->pc = 0x1BE548u;
    // 0x1be548: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1be548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1be54c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1be54cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1be550: 0x0  nop
    ctx->pc = 0x1be550u;
    // NOP
    // 0x1be554: 0x0  nop
    ctx->pc = 0x1be554u;
    // NOP
    // 0x1be558: 0x2810  mfhi        $a1
    ctx->pc = 0x1be558u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1be55c: 0xc055124  jal         func_154490
    ctx->pc = 0x1BE55Cu;
    SET_GPR_U32(ctx, 31, 0x1BE564u);
    ctx->pc = 0x1BE560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE55Cu;
            // 0x1be560: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE564u; }
        if (ctx->pc != 0x1BE564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE564u; }
        if (ctx->pc != 0x1BE564u) { return; }
    }
    ctx->pc = 0x1BE564u;
    // 0x1be564: 0x0  nop
    ctx->pc = 0x1be564u;
    // NOP
label_1be568:
    // 0x1be568: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1be568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be56c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1be56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1be570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be574: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1be574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be578: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be57c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x1BE57Cu;
    {
        const bool branch_taken_0x1be57c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be57c) {
            ctx->pc = 0x1BE608u;
            goto label_1be608;
        }
    }
    ctx->pc = 0x1BE584u;
    // 0x1be584: 0xc4830114  lwc1        $f3, 0x114($a0)
    ctx->pc = 0x1be584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1be588: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1be588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1be58c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1be58cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1be590: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x1be590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
    // 0x1be594: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1be594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1be598: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1be598u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
    // 0x1be59c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be5a0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1be5a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1be5a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1be5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1be5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be5ac: 0xe4820114  swc1        $f2, 0x114($a0)
    ctx->pc = 0x1be5acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x1be5b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1be5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be5b4: 0xc4420110  lwc1        $f2, 0x110($v0)
    ctx->pc = 0x1be5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be5b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1be5b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1be5bc: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1be5bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1be5c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1be5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be5c4: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1be5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be5c8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1be5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be5cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1be5ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1be5d0: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1be5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1be5d4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1be5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be5d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be5d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be5dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE5DCu;
    {
        const bool branch_taken_0x1be5dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be5dc) {
            ctx->pc = 0x1BE5E8u;
            goto label_1be5e8;
        }
    }
    ctx->pc = 0x1BE5E4u;
    // 0x1be5e4: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1be5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_1be5e8:
    // 0x1be5e8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1be5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1be5ec: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1be5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be5f0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1be5f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1be5f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be5f8: 0x0  nop
    ctx->pc = 0x1be5f8u;
    // NOP
    // 0x1be5fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1be5fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1be600: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1BE600u;
    {
        const bool branch_taken_0x1be600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE600u;
            // 0x1be604: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be600) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE608u;
label_1be608:
    // 0x1be608: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1be608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1be60c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1be60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1be610: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1be610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1be614: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1be614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1be618: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1be618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1be61c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1be61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be620: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1be620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1be624: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1be624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be62c: 0x2465fe0c  addiu       $a1, $v1, -0x1F4
    ctx->pc = 0x1be62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966796));
    // 0x1be630: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1be630u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1be634: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1BE634u;
    SET_GPR_U32(ctx, 31, 0x1BE63Cu);
    ctx->pc = 0x1BE638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE634u;
            // 0x1be638: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE63Cu; }
        if (ctx->pc != 0x1BE63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE63Cu; }
        if (ctx->pc != 0x1BE63Cu) { return; }
    }
    ctx->pc = 0x1BE63Cu;
    // 0x1be63c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1be63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1be640: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1be640u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1be644: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1be644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1be648: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1be648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1be64c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1BE64Cu;
    {
        const bool branch_taken_0x1be64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE64Cu;
            // 0x1be650: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be64c) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE654u;
    // 0x1be654: 0x0  nop
    ctx->pc = 0x1be654u;
    // NOP
label_1be658:
    // 0x1be658: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be660: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BE660u;
    {
        const bool branch_taken_0x1be660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE660u;
            // 0x1be664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be660) {
            ctx->pc = 0x1BE698u;
            goto label_1be698;
        }
    }
    ctx->pc = 0x1BE668u;
    // 0x1be668: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BE668u;
    SET_GPR_U32(ctx, 31, 0x1BE670u);
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE670u; }
        if (ctx->pc != 0x1BE670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE670u; }
        if (ctx->pc != 0x1BE670u) { return; }
    }
    ctx->pc = 0x1BE670u;
    // 0x1be670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE670u;
    {
        const bool branch_taken_0x1be670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE670u;
            // 0x1be674: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be670) {
            ctx->pc = 0x1BE680u;
            goto label_1be680;
        }
    }
    ctx->pc = 0x1BE678u;
    // 0x1be678: 0xc055124  jal         func_154490
    ctx->pc = 0x1BE678u;
    SET_GPR_U32(ctx, 31, 0x1BE680u);
    ctx->pc = 0x1BE67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE678u;
            // 0x1be67c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE680u; }
        if (ctx->pc != 0x1BE680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE680u; }
        if (ctx->pc != 0x1BE680u) { return; }
    }
    ctx->pc = 0x1BE680u;
label_1be680:
    // 0x1be680: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BE680u;
    SET_GPR_U32(ctx, 31, 0x1BE688u);
    ctx->pc = 0x1BE684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE680u;
            // 0x1be684: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE688u; }
        if (ctx->pc != 0x1BE688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE688u; }
        if (ctx->pc != 0x1BE688u) { return; }
    }
    ctx->pc = 0x1BE688u;
    // 0x1be688: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE688u;
    {
        const bool branch_taken_0x1be688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE688u;
            // 0x1be68c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be688) {
            ctx->pc = 0x1BE698u;
            goto label_1be698;
        }
    }
    ctx->pc = 0x1BE690u;
    // 0x1be690: 0xc055124  jal         func_154490
    ctx->pc = 0x1BE690u;
    SET_GPR_U32(ctx, 31, 0x1BE698u);
    ctx->pc = 0x1BE694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE690u;
            // 0x1be694: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE698u; }
        if (ctx->pc != 0x1BE698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE698u; }
        if (ctx->pc != 0x1BE698u) { return; }
    }
    ctx->pc = 0x1BE698u;
label_1be698:
    // 0x1be698: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be69c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1be69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1be6a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE6A0u;
    {
        const bool branch_taken_0x1be6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6A0u;
            // 0x1be6a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6a0) {
            ctx->pc = 0x1BE6B0u;
            goto label_1be6b0;
        }
    }
    ctx->pc = 0x1BE6A8u;
    // 0x1be6a8: 0xc060718  jal         func_181C60
    ctx->pc = 0x1BE6A8u;
    SET_GPR_U32(ctx, 31, 0x1BE6B0u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE6B0u; }
        if (ctx->pc != 0x1BE6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE6B0u; }
        if (ctx->pc != 0x1BE6B0u) { return; }
    }
    ctx->pc = 0x1BE6B0u;
label_1be6b0:
    // 0x1be6b0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be6b4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1be6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1be6b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE6B8u;
    {
        const bool branch_taken_0x1be6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6B8u;
            // 0x1be6bc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6b8) {
            ctx->pc = 0x1BE6C8u;
            goto label_1be6c8;
        }
    }
    ctx->pc = 0x1BE6C0u;
    // 0x1be6c0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BE6C0u;
    SET_GPR_U32(ctx, 31, 0x1BE6C8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE6C8u; }
        if (ctx->pc != 0x1BE6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE6C8u; }
        if (ctx->pc != 0x1BE6C8u) { return; }
    }
    ctx->pc = 0x1BE6C8u;
label_1be6c8:
    // 0x1be6c8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be6cc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1be6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1be6d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE6D0u;
    {
        const bool branch_taken_0x1be6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6D0u;
            // 0x1be6d4: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6d0) {
            ctx->pc = 0x1BE6E0u;
            goto label_1be6e0;
        }
    }
    ctx->pc = 0x1BE6D8u;
    // 0x1be6d8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BE6D8u;
    SET_GPR_U32(ctx, 31, 0x1BE6E0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE6E0u; }
        if (ctx->pc != 0x1BE6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE6E0u; }
        if (ctx->pc != 0x1BE6E0u) { return; }
    }
    ctx->pc = 0x1BE6E0u;
label_1be6e0:
    // 0x1be6e0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be6e4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1be6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1be6e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE6E8u;
    {
        const bool branch_taken_0x1be6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6E8u;
            // 0x1be6ec: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6e8) {
            ctx->pc = 0x1BE6F8u;
            goto label_1be6f8;
        }
    }
    ctx->pc = 0x1BE6F0u;
    // 0x1be6f0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BE6F0u;
    SET_GPR_U32(ctx, 31, 0x1BE6F8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE6F8u; }
        if (ctx->pc != 0x1BE6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE6F8u; }
        if (ctx->pc != 0x1BE6F8u) { return; }
    }
    ctx->pc = 0x1BE6F8u;
label_1be6f8:
    // 0x1be6f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be6fc: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1be6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1be700: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE700u;
    {
        const bool branch_taken_0x1be700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE700u;
            // 0x1be704: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be700) {
            ctx->pc = 0x1BE710u;
            goto label_1be710;
        }
    }
    ctx->pc = 0x1BE708u;
    // 0x1be708: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BE708u;
    SET_GPR_U32(ctx, 31, 0x1BE710u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE710u; }
        if (ctx->pc != 0x1BE710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE710u; }
        if (ctx->pc != 0x1BE710u) { return; }
    }
    ctx->pc = 0x1BE710u;
label_1be710:
    // 0x1be710: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be714: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1be714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1be718: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE718u;
    {
        const bool branch_taken_0x1be718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE718u;
            // 0x1be71c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be718) {
            ctx->pc = 0x1BE728u;
            goto label_1be728;
        }
    }
    ctx->pc = 0x1BE720u;
    // 0x1be720: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BE720u;
    SET_GPR_U32(ctx, 31, 0x1BE728u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE728u; }
        if (ctx->pc != 0x1BE728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE728u; }
        if (ctx->pc != 0x1BE728u) { return; }
    }
    ctx->pc = 0x1BE728u;
label_1be728:
    // 0x1be728: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be72c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1be72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1be730: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE730u;
    {
        const bool branch_taken_0x1be730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE730u;
            // 0x1be734: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be730) {
            ctx->pc = 0x1BE740u;
            goto label_1be740;
        }
    }
    ctx->pc = 0x1BE738u;
    // 0x1be738: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BE738u;
    SET_GPR_U32(ctx, 31, 0x1BE740u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE740u; }
        if (ctx->pc != 0x1BE740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE740u; }
        if (ctx->pc != 0x1BE740u) { return; }
    }
    ctx->pc = 0x1BE740u;
label_1be740:
    // 0x1be740: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be744: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1be744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1be748: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE748u;
    {
        const bool branch_taken_0x1be748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE748u;
            // 0x1be74c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be748) {
            ctx->pc = 0x1BE758u;
            goto label_1be758;
        }
    }
    ctx->pc = 0x1BE750u;
    // 0x1be750: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BE750u;
    SET_GPR_U32(ctx, 31, 0x1BE758u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE758u; }
        if (ctx->pc != 0x1BE758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE758u; }
        if (ctx->pc != 0x1BE758u) { return; }
    }
    ctx->pc = 0x1BE758u;
label_1be758:
    // 0x1be758: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be75c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1be75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1be760: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE760u;
    {
        const bool branch_taken_0x1be760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE760u;
            // 0x1be764: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be760) {
            ctx->pc = 0x1BE770u;
            goto label_1be770;
        }
    }
    ctx->pc = 0x1BE768u;
    // 0x1be768: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BE768u;
    SET_GPR_U32(ctx, 31, 0x1BE770u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE770u; }
        if (ctx->pc != 0x1BE770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE770u; }
        if (ctx->pc != 0x1BE770u) { return; }
    }
    ctx->pc = 0x1BE770u;
label_1be770:
    // 0x1be770: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be774: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1be774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1be778: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE778u;
    {
        const bool branch_taken_0x1be778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE778u;
            // 0x1be77c: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be778) {
            ctx->pc = 0x1BE788u;
            goto label_1be788;
        }
    }
    ctx->pc = 0x1BE780u;
    // 0x1be780: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BE780u;
    SET_GPR_U32(ctx, 31, 0x1BE788u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE788u; }
        if (ctx->pc != 0x1BE788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE788u; }
        if (ctx->pc != 0x1BE788u) { return; }
    }
    ctx->pc = 0x1BE788u;
label_1be788:
    // 0x1be788: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be78c: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1be78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1be790: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1BE790u;
    {
        const bool branch_taken_0x1be790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be790) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE798u;
    // 0x1be798: 0xc056054  jal         func_158150
    ctx->pc = 0x1BE798u;
    SET_GPR_U32(ctx, 31, 0x1BE7A0u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7A0u; }
        if (ctx->pc != 0x1BE7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7A0u; }
        if (ctx->pc != 0x1BE7A0u) { return; }
    }
    ctx->pc = 0x1BE7A0u;
    // 0x1be7a0: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1BE7A0u;
    SET_GPR_U32(ctx, 31, 0x1BE7A8u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7A8u; }
        if (ctx->pc != 0x1BE7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7A8u; }
        if (ctx->pc != 0x1BE7A8u) { return; }
    }
    ctx->pc = 0x1BE7A8u;
    // 0x1be7a8: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1BE7A8u;
    SET_GPR_U32(ctx, 31, 0x1BE7B0u);
    ctx->pc = 0x1BE7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7A8u;
            // 0x1be7ac: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7B0u; }
        if (ctx->pc != 0x1BE7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7B0u; }
        if (ctx->pc != 0x1BE7B0u) { return; }
    }
    ctx->pc = 0x1BE7B0u;
    // 0x1be7b0: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1BE7B0u;
    SET_GPR_U32(ctx, 31, 0x1BE7B8u);
    ctx->pc = 0x1BE7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7B0u;
            // 0x1be7b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7B8u; }
        if (ctx->pc != 0x1BE7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7B8u; }
        if (ctx->pc != 0x1BE7B8u) { return; }
    }
    ctx->pc = 0x1BE7B8u;
    // 0x1be7b8: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1BE7B8u;
    SET_GPR_U32(ctx, 31, 0x1BE7C0u);
    ctx->pc = 0x1BE7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7B8u;
            // 0x1be7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7C0u; }
        if (ctx->pc != 0x1BE7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7C0u; }
        if (ctx->pc != 0x1BE7C0u) { return; }
    }
    ctx->pc = 0x1BE7C0u;
    // 0x1be7c0: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x1BE7C0u;
    {
        const bool branch_taken_0x1be7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be7c0) {
            ctx->pc = 0x1BEEC8u;
            goto label_1beec8;
        }
    }
    ctx->pc = 0x1BE7C8u;
label_1be7c8:
    // 0x1be7c8: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1BE7C8u;
    SET_GPR_U32(ctx, 31, 0x1BE7D0u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7D0u; }
        if (ctx->pc != 0x1BE7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE7D0u; }
        if (ctx->pc != 0x1BE7D0u) { return; }
    }
    ctx->pc = 0x1BE7D0u;
    // 0x1be7d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1be7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be7d4: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1be7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1be7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be7dc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1be7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be7e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1be7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be7e4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1BE7E4u;
    {
        const bool branch_taken_0x1be7e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE7E4u;
            // 0x1be7e8: 0x24620124  addiu       $v0, $v1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7e4) {
            ctx->pc = 0x1BE810u;
            goto label_1be810;
        }
    }
    ctx->pc = 0x1BE7ECu;
    // 0x1be7ec: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1be7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be7f0: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1be7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x1be7f4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1be7f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1be7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be7fc: 0x0  nop
    ctx->pc = 0x1be7fcu;
    // NOP
    // 0x1be800: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1be800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1be804: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1BE804u;
    {
        const bool branch_taken_0x1be804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE804u;
            // 0x1be808: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be804) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE80Cu;
    // 0x1be80c: 0x0  nop
    ctx->pc = 0x1be80cu;
    // NOP
label_1be810:
    // 0x1be810: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1be810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1be814: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1be814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1be818: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1be818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1be81c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1be81cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1be820: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1be820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1be824: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1be824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1be828: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1be828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1be82c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE82Cu;
    {
        const bool branch_taken_0x1be82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE82Cu;
            // 0x1be830: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be82c) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE834u;
    // 0x1be834: 0x0  nop
    ctx->pc = 0x1be834u;
    // NOP
label_1be838:
    // 0x1be838: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be83c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1be83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1be840: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BE840u;
    {
        const bool branch_taken_0x1be840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be840) {
            ctx->pc = 0x1BE878u;
            goto label_1be878;
        }
    }
    ctx->pc = 0x1BE848u;
    // 0x1be848: 0xc056054  jal         func_158150
    ctx->pc = 0x1BE848u;
    SET_GPR_U32(ctx, 31, 0x1BE850u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE850u; }
        if (ctx->pc != 0x1BE850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE850u; }
        if (ctx->pc != 0x1BE850u) { return; }
    }
    ctx->pc = 0x1BE850u;
    // 0x1be850: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1BE850u;
    SET_GPR_U32(ctx, 31, 0x1BE858u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE858u; }
        if (ctx->pc != 0x1BE858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE858u; }
        if (ctx->pc != 0x1BE858u) { return; }
    }
    ctx->pc = 0x1BE858u;
    // 0x1be858: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1BE858u;
    SET_GPR_U32(ctx, 31, 0x1BE860u);
    ctx->pc = 0x1BE85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE858u;
            // 0x1be85c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE860u; }
        if (ctx->pc != 0x1BE860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE860u; }
        if (ctx->pc != 0x1BE860u) { return; }
    }
    ctx->pc = 0x1BE860u;
    // 0x1be860: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1BE860u;
    SET_GPR_U32(ctx, 31, 0x1BE868u);
    ctx->pc = 0x1BE864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE860u;
            // 0x1be864: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE868u; }
        if (ctx->pc != 0x1BE868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE868u; }
        if (ctx->pc != 0x1BE868u) { return; }
    }
    ctx->pc = 0x1BE868u;
    // 0x1be868: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1BE868u;
    SET_GPR_U32(ctx, 31, 0x1BE870u);
    ctx->pc = 0x1BE86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE868u;
            // 0x1be86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE870u; }
        if (ctx->pc != 0x1BE870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE870u; }
        if (ctx->pc != 0x1BE870u) { return; }
    }
    ctx->pc = 0x1BE870u;
    // 0x1be870: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x1BE870u;
    {
        const bool branch_taken_0x1be870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be870) {
            ctx->pc = 0x1BEEC8u;
            goto label_1beec8;
        }
    }
    ctx->pc = 0x1BE878u;
label_1be878:
    // 0x1be878: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1BE878u;
    SET_GPR_U32(ctx, 31, 0x1BE880u);
    ctx->pc = 0x1BE87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE878u;
            // 0x1be87c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE880u; }
        if (ctx->pc != 0x1BE880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE880u; }
        if (ctx->pc != 0x1BE880u) { return; }
    }
    ctx->pc = 0x1BE880u;
    // 0x1be880: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1be880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be884: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1be884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1be888: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1BE888u;
    SET_GPR_U32(ctx, 31, 0x1BE890u);
    ctx->pc = 0x1BE88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE888u;
            // 0x1be88c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE890u; }
        if (ctx->pc != 0x1BE890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE890u; }
        if (ctx->pc != 0x1BE890u) { return; }
    }
    ctx->pc = 0x1BE890u;
    // 0x1be890: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1be890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be894: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1be894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1be898: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1BE898u;
    SET_GPR_U32(ctx, 31, 0x1BE8A0u);
    ctx->pc = 0x1BE89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE898u;
            // 0x1be89c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8A0u; }
        if (ctx->pc != 0x1BE8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8A0u; }
        if (ctx->pc != 0x1BE8A0u) { return; }
    }
    ctx->pc = 0x1BE8A0u;
    // 0x1be8a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1be8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be8a4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1be8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1be8a8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1BE8A8u;
    SET_GPR_U32(ctx, 31, 0x1BE8B0u);
    ctx->pc = 0x1BE8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8A8u;
            // 0x1be8ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8B0u; }
        if (ctx->pc != 0x1BE8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8B0u; }
        if (ctx->pc != 0x1BE8B0u) { return; }
    }
    ctx->pc = 0x1BE8B0u;
    // 0x1be8b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1be8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be8b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1be8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8b8: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1BE8B8u;
    SET_GPR_U32(ctx, 31, 0x1BE8C0u);
    ctx->pc = 0x1BE8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8B8u;
            // 0x1be8bc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8C0u; }
        if (ctx->pc != 0x1BE8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8C0u; }
        if (ctx->pc != 0x1BE8C0u) { return; }
    }
    ctx->pc = 0x1BE8C0u;
    // 0x1be8c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1be8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1be8c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1be8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1be8c8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1be8c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1be8cc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BE8CCu;
    {
        const bool branch_taken_0x1be8cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be8cc) {
            ctx->pc = 0x1BE920u;
            goto label_1be920;
        }
    }
    ctx->pc = 0x1BE8D4u;
    // 0x1be8d4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1be8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1be8d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE8D8u;
    {
        const bool branch_taken_0x1be8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be8d8) {
            ctx->pc = 0x1BE8F0u;
            goto label_1be8f0;
        }
    }
    ctx->pc = 0x1BE8E0u;
    // 0x1be8e0: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1BE8E0u;
    SET_GPR_U32(ctx, 31, 0x1BE8E8u);
    ctx->pc = 0x1BE8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8E0u;
            // 0x1be8e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8E8u; }
        if (ctx->pc != 0x1BE8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8E8u; }
        if (ctx->pc != 0x1BE8E8u) { return; }
    }
    ctx->pc = 0x1BE8E8u;
    // 0x1be8e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE8E8u;
    {
        const bool branch_taken_0x1be8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be8e8) {
            ctx->pc = 0x1BE8F8u;
            goto label_1be8f8;
        }
    }
    ctx->pc = 0x1BE8F0u;
label_1be8f0:
    // 0x1be8f0: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1BE8F0u;
    SET_GPR_U32(ctx, 31, 0x1BE8F8u);
    ctx->pc = 0x1BE8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8F0u;
            // 0x1be8f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8F8u; }
        if (ctx->pc != 0x1BE8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8F8u; }
        if (ctx->pc != 0x1BE8F8u) { return; }
    }
    ctx->pc = 0x1BE8F8u;
label_1be8f8:
    // 0x1be8f8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1be8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1be8fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE8FCu;
    {
        const bool branch_taken_0x1be8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be8fc) {
            ctx->pc = 0x1BE910u;
            goto label_1be910;
        }
    }
    ctx->pc = 0x1BE904u;
    // 0x1be904: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BE904u;
    {
        const bool branch_taken_0x1be904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE904u;
            // 0x1be908: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be904) {
            ctx->pc = 0x1BE970u;
            goto label_1be970;
        }
    }
    ctx->pc = 0x1BE90Cu;
    // 0x1be90c: 0x0  nop
    ctx->pc = 0x1be90cu;
    // NOP
label_1be910:
    // 0x1be910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be914: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1BE914u;
    {
        const bool branch_taken_0x1be914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE914u;
            // 0x1be918: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be914) {
            ctx->pc = 0x1BE970u;
            goto label_1be970;
        }
    }
    ctx->pc = 0x1BE91Cu;
    // 0x1be91c: 0x0  nop
    ctx->pc = 0x1be91cu;
    // NOP
label_1be920:
    // 0x1be920: 0x286102bc  slti        $at, $v1, 0x2BC
    ctx->pc = 0x1be920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)700) ? 1 : 0);
    // 0x1be924: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1BE924u;
    {
        const bool branch_taken_0x1be924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be924) {
            ctx->pc = 0x1BE960u;
            goto label_1be960;
        }
    }
    ctx->pc = 0x1BE92Cu;
    // 0x1be92c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1be92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1be930: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1be930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1be934: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1be934u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1be938: 0x0  nop
    ctx->pc = 0x1be938u;
    // NOP
    // 0x1be93c: 0x0  nop
    ctx->pc = 0x1be93cu;
    // NOP
    // 0x1be940: 0x1010  mfhi        $v0
    ctx->pc = 0x1be940u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1be944: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE944u;
    {
        const bool branch_taken_0x1be944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be944) {
            ctx->pc = 0x1BE960u;
            goto label_1be960;
        }
    }
    ctx->pc = 0x1BE94Cu;
    // 0x1be94c: 0xc060500  jal         func_181400
    ctx->pc = 0x1BE94Cu;
    SET_GPR_U32(ctx, 31, 0x1BE954u);
    ctx->pc = 0x1BE950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE94Cu;
            // 0x1be950: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE954u; }
        if (ctx->pc != 0x1BE954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE954u; }
        if (ctx->pc != 0x1BE954u) { return; }
    }
    ctx->pc = 0x1BE954u;
    // 0x1be954: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE954u;
    {
        const bool branch_taken_0x1be954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be954) {
            ctx->pc = 0x1BE968u;
            goto label_1be968;
        }
    }
    ctx->pc = 0x1BE95Cu;
    // 0x1be95c: 0x0  nop
    ctx->pc = 0x1be95cu;
    // NOP
label_1be960:
    // 0x1be960: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1BE960u;
    SET_GPR_U32(ctx, 31, 0x1BE968u);
    ctx->pc = 0x1BE964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE960u;
            // 0x1be964: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE968u; }
        if (ctx->pc != 0x1BE968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE968u; }
        if (ctx->pc != 0x1BE968u) { return; }
    }
    ctx->pc = 0x1BE968u;
label_1be968:
    // 0x1be968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be96c: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1be96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1be970:
    // 0x1be970: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1be970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1be974: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1be974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1be978: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1be978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1be97c: 0x1c80000c  bgtz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BE97Cu;
    {
        const bool branch_taken_0x1be97c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1be97c) {
            ctx->pc = 0x1BE9B0u;
            goto label_1be9b0;
        }
    }
    ctx->pc = 0x1BE984u;
    // 0x1be984: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1be984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1be988: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1be988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1be98c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1be98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1be990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1be990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be994: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1be994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1be998: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1be998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1be99c: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1BE99Cu;
    SET_GPR_U32(ctx, 31, 0x1BE9A4u);
    ctx->pc = 0x1BE9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE99Cu;
            // 0x1be9a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9A4u; }
        if (ctx->pc != 0x1BE9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9A4u; }
        if (ctx->pc != 0x1BE9A4u) { return; }
    }
    ctx->pc = 0x1BE9A4u;
    // 0x1be9a4: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x1BE9A4u;
    {
        const bool branch_taken_0x1be9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be9a4) {
            ctx->pc = 0x1BEEB8u;
            goto label_1beeb8;
        }
    }
    ctx->pc = 0x1BE9ACu;
    // 0x1be9ac: 0x0  nop
    ctx->pc = 0x1be9acu;
    // NOP
label_1be9b0:
    // 0x1be9b0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1be9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1be9b4: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE9B4u;
    {
        const bool branch_taken_0x1be9b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BE9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9B4u;
            // 0x1be9b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9b4) {
            ctx->pc = 0x1BE9D0u;
            goto label_1be9d0;
        }
    }
    ctx->pc = 0x1BE9BCu;
    // 0x1be9bc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE9BCu;
    {
        const bool branch_taken_0x1be9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be9bc) {
            ctx->pc = 0x1BE9D0u;
            goto label_1be9d0;
        }
    }
    ctx->pc = 0x1BE9C4u;
    // 0x1be9c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1be9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be9c8: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x1BE9C8u;
    {
        const bool branch_taken_0x1be9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9C8u;
            // 0x1be9cc: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9c8) {
            ctx->pc = 0x1BEEB8u;
            goto label_1beeb8;
        }
    }
    ctx->pc = 0x1BE9D0u;
label_1be9d0:
    // 0x1be9d0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1be9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1be9d4: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1be9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1be9d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1be9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be9dc: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1be9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1be9e0: 0x24c6b9a0  addiu       $a2, $a2, -0x4660
    ctx->pc = 0x1be9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949280));
    // 0x1be9e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1be9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9e8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1be9e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9ec: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1be9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1be9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be9f4: 0x0  nop
    ctx->pc = 0x1be9f4u;
    // NOP
    // 0x1be9f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be9f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1be9fc: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1be9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1bea00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bea04: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x1bea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x1bea08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bea08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bea0c: 0x0  nop
    ctx->pc = 0x1bea0cu;
    // NOP
    // 0x1bea10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bea10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bea14: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1bea14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1bea18: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bea1c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1bea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1bea20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bea20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bea24: 0x0  nop
    ctx->pc = 0x1bea24u;
    // NOP
    // 0x1bea28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bea28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bea2c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1bea2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1bea30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bea34: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1bea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1bea38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bea38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bea3c: 0x0  nop
    ctx->pc = 0x1bea3cu;
    // NOP
    // 0x1bea40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bea40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bea44: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BEA44u;
    SET_GPR_U32(ctx, 31, 0x1BEA4Cu);
    ctx->pc = 0x1BEA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA44u;
            // 0x1bea48: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA4Cu; }
        if (ctx->pc != 0x1BEA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA4Cu; }
        if (ctx->pc != 0x1BEA4Cu) { return; }
    }
    ctx->pc = 0x1BEA4Cu;
    // 0x1bea4c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bea50: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1bea50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1bea54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bea54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bea58: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x1bea58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x1bea5c: 0x24c6b9a0  addiu       $a2, $a2, -0x4660
    ctx->pc = 0x1bea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949280));
    // 0x1bea60: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bea60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea64: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1bea64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea68: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1bea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1bea6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bea6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bea70: 0x0  nop
    ctx->pc = 0x1bea70u;
    // NOP
    // 0x1bea74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bea74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bea78: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1bea78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1bea7c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bea80: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1bea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1bea84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bea84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bea88: 0x0  nop
    ctx->pc = 0x1bea88u;
    // NOP
    // 0x1bea8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bea8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bea90: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1bea90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1bea94: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bea94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bea98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1bea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1bea9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bea9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beaa0: 0x0  nop
    ctx->pc = 0x1beaa0u;
    // NOP
    // 0x1beaa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1beaa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beaa8: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1beaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1beaac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1beaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1beab0: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1beab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1beab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beab8: 0x0  nop
    ctx->pc = 0x1beab8u;
    // NOP
    // 0x1beabc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1beabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beac0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BEAC0u;
    SET_GPR_U32(ctx, 31, 0x1BEAC8u);
    ctx->pc = 0x1BEAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAC0u;
            // 0x1beac4: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEAC8u; }
        if (ctx->pc != 0x1BEAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEAC8u; }
        if (ctx->pc != 0x1BEAC8u) { return; }
    }
    ctx->pc = 0x1BEAC8u;
    // 0x1beac8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1beac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1beacc: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1beaccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1bead0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bead0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bead4: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x1bead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x1bead8: 0x24c6b9a0  addiu       $a2, $a2, -0x4660
    ctx->pc = 0x1bead8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949280));
    // 0x1beadc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1beadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beae0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1beae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beae4: 0x2442ff94  addiu       $v0, $v0, -0x6C
    ctx->pc = 0x1beae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967188));
    // 0x1beae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beaec: 0x0  nop
    ctx->pc = 0x1beaecu;
    // NOP
    // 0x1beaf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1beaf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beaf4: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1beaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1beaf8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1beaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1beafc: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1beafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1beb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beb04: 0x0  nop
    ctx->pc = 0x1beb04u;
    // NOP
    // 0x1beb08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1beb08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beb0c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1beb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1beb10: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1beb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1beb14: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1beb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1beb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beb1c: 0x0  nop
    ctx->pc = 0x1beb1cu;
    // NOP
    // 0x1beb20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1beb20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beb24: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1beb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1beb28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1beb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1beb2c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1beb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1beb30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beb34: 0x0  nop
    ctx->pc = 0x1beb34u;
    // NOP
    // 0x1beb38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1beb38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beb3c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BEB3Cu;
    SET_GPR_U32(ctx, 31, 0x1BEB44u);
    ctx->pc = 0x1BEB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB3Cu;
            // 0x1beb40: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB44u; }
        if (ctx->pc != 0x1BEB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB44u; }
        if (ctx->pc != 0x1BEB44u) { return; }
    }
    ctx->pc = 0x1BEB44u;
    // 0x1beb44: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1beb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1beb48: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1beb48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1beb4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1beb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1beb50: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x1beb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1beb54: 0x24c6b9a0  addiu       $a2, $a2, -0x4660
    ctx->pc = 0x1beb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949280));
    // 0x1beb58: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1beb58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb5c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1beb5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb60: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1beb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1beb64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beb68: 0x0  nop
    ctx->pc = 0x1beb68u;
    // NOP
    // 0x1beb6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1beb6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beb70: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1beb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1beb74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1beb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1beb78: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1beb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1beb7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beb80: 0x0  nop
    ctx->pc = 0x1beb80u;
    // NOP
    // 0x1beb84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1beb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beb88: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x1beb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1beb8c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1beb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1beb90: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x1beb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1beb94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beb94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beb98: 0x0  nop
    ctx->pc = 0x1beb98u;
    // NOP
    // 0x1beb9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1beb9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beba0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x1beba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1beba4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1beba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1beba8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1beba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1bebac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bebacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bebb0: 0x0  nop
    ctx->pc = 0x1bebb0u;
    // NOP
    // 0x1bebb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bebb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bebb8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BEBB8u;
    SET_GPR_U32(ctx, 31, 0x1BEBC0u);
    ctx->pc = 0x1BEBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEBB8u;
            // 0x1bebbc: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBC0u; }
        if (ctx->pc != 0x1BEBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBC0u; }
        if (ctx->pc != 0x1BEBC0u) { return; }
    }
    ctx->pc = 0x1BEBC0u;
    // 0x1bebc0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bebc4: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1bebc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1bebc8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bebcc: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x1bebccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1bebd0: 0x24c6b9a0  addiu       $a2, $a2, -0x4660
    ctx->pc = 0x1bebd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949280));
    // 0x1bebd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bebd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebd8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1bebd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebdc: 0x2442ffbc  addiu       $v0, $v0, -0x44
    ctx->pc = 0x1bebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967228));
    // 0x1bebe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bebe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bebe4: 0x0  nop
    ctx->pc = 0x1bebe4u;
    // NOP
    // 0x1bebe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bebe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bebec: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x1bebecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x1bebf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bebf4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1bebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1bebf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bebf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bebfc: 0x0  nop
    ctx->pc = 0x1bebfcu;
    // NOP
    // 0x1bec00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bec00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bec04: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1bec04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1bec08: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bec0c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1bec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1bec10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bec10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bec14: 0x0  nop
    ctx->pc = 0x1bec14u;
    // NOP
    // 0x1bec18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bec18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bec1c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1bec1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1bec20: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bec24: 0x24420096  addiu       $v0, $v0, 0x96
    ctx->pc = 0x1bec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
    // 0x1bec28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bec28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bec2c: 0x0  nop
    ctx->pc = 0x1bec2cu;
    // NOP
    // 0x1bec30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bec30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bec34: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BEC34u;
    SET_GPR_U32(ctx, 31, 0x1BEC3Cu);
    ctx->pc = 0x1BEC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC34u;
            // 0x1bec38: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC3Cu; }
        if (ctx->pc != 0x1BEC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC3Cu; }
        if (ctx->pc != 0x1BEC3Cu) { return; }
    }
    ctx->pc = 0x1BEC3Cu;
    // 0x1bec3c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bec40: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1bec40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1bec44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bec44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bec48: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x1bec48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1bec4c: 0x24c6b9a0  addiu       $a2, $a2, -0x4660
    ctx->pc = 0x1bec4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949280));
    // 0x1bec50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bec50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec54: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1bec54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec58: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1bec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1bec5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bec5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bec60: 0x0  nop
    ctx->pc = 0x1bec60u;
    // NOP
    // 0x1bec64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bec64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bec68: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1bec68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1bec6c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bec70: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1bec70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1bec74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bec74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bec78: 0x0  nop
    ctx->pc = 0x1bec78u;
    // NOP
    // 0x1bec7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bec7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bec80: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1bec80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1bec84: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bec88: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x1bec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x1bec8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bec8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bec90: 0x0  nop
    ctx->pc = 0x1bec90u;
    // NOP
    // 0x1bec94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bec94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bec98: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1bec98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1bec9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1beca0: 0x24420096  addiu       $v0, $v0, 0x96
    ctx->pc = 0x1beca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
    // 0x1beca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beca8: 0x0  nop
    ctx->pc = 0x1beca8u;
    // NOP
    // 0x1becac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1becacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1becb0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BECB0u;
    SET_GPR_U32(ctx, 31, 0x1BECB8u);
    ctx->pc = 0x1BECB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECB0u;
            // 0x1becb4: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BECB8u; }
        if (ctx->pc != 0x1BECB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BECB8u; }
        if (ctx->pc != 0x1BECB8u) { return; }
    }
    ctx->pc = 0x1BECB8u;
    // 0x1becb8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1becb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1becbc: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1becbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1becc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1becc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1becc4: 0x2605008c  addiu       $a1, $s0, 0x8C
    ctx->pc = 0x1becc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x1becc8: 0x24c6b9a0  addiu       $a2, $a2, -0x4660
    ctx->pc = 0x1becc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949280));
    // 0x1beccc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1becccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becd0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1becd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becd4: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x1becd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x1becd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1becd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1becdc: 0x0  nop
    ctx->pc = 0x1becdcu;
    // NOP
    // 0x1bece0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bece0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bece4: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x1bece4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x1bece8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1becec: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1bececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1becf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1becf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1becf4: 0x0  nop
    ctx->pc = 0x1becf4u;
    // NOP
    // 0x1becf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1becf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1becfc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1becfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1bed00: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bed04: 0x2442ff94  addiu       $v0, $v0, -0x6C
    ctx->pc = 0x1bed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967188));
    // 0x1bed08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bed08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bed0c: 0x0  nop
    ctx->pc = 0x1bed0cu;
    // NOP
    // 0x1bed10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bed10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bed14: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x1bed14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x1bed18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bed1c: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1bed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1bed20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bed20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bed24: 0x0  nop
    ctx->pc = 0x1bed24u;
    // NOP
    // 0x1bed28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bed28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bed2c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BED2Cu;
    SET_GPR_U32(ctx, 31, 0x1BED34u);
    ctx->pc = 0x1BED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED2Cu;
            // 0x1bed30: 0xe6000098  swc1        $f0, 0x98($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED34u; }
        if (ctx->pc != 0x1BED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED34u; }
        if (ctx->pc != 0x1BED34u) { return; }
    }
    ctx->pc = 0x1BED34u;
    // 0x1bed34: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bed38: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1bed38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1bed3c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bed40: 0x2605009c  addiu       $a1, $s0, 0x9C
    ctx->pc = 0x1bed40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x1bed44: 0x24c6b9a0  addiu       $a2, $a2, -0x4660
    ctx->pc = 0x1bed44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949280));
    // 0x1bed48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bed48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed4c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1bed4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed50: 0x2442ff65  addiu       $v0, $v0, -0x9B
    ctx->pc = 0x1bed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967141));
    // 0x1bed54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bed54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bed58: 0x0  nop
    ctx->pc = 0x1bed58u;
    // NOP
    // 0x1bed5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bed5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bed60: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x1bed60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x1bed64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bed68: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x1bed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x1bed6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bed6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bed70: 0x0  nop
    ctx->pc = 0x1bed70u;
    // NOP
    // 0x1bed74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bed74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bed78: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x1bed78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x1bed7c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bed80: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x1bed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x1bed84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bed84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bed88: 0x0  nop
    ctx->pc = 0x1bed88u;
    // NOP
    // 0x1bed8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bed8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bed90: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x1bed90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x1bed94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bed98: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1bed98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1bed9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bed9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beda0: 0x0  nop
    ctx->pc = 0x1beda0u;
    // NOP
    // 0x1beda4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1beda4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beda8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BEDA8u;
    SET_GPR_U32(ctx, 31, 0x1BEDB0u);
    ctx->pc = 0x1BEDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDA8u;
            // 0x1bedac: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEDB0u; }
        if (ctx->pc != 0x1BEDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEDB0u; }
        if (ctx->pc != 0x1BEDB0u) { return; }
    }
    ctx->pc = 0x1BEDB0u;
    // 0x1bedb0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bedb4: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1bedb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1bedb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bedb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bedbc: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x1bedbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x1bedc0: 0x24c6b9a0  addiu       $a2, $a2, -0x4660
    ctx->pc = 0x1bedc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949280));
    // 0x1bedc4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bedc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedc8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1bedc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedcc: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x1bedccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1bedd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bedd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bedd4: 0x0  nop
    ctx->pc = 0x1bedd4u;
    // NOP
    // 0x1bedd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bedd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beddc: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x1beddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x1bede0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bede4: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1bede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1bede8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bede8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bedec: 0x0  nop
    ctx->pc = 0x1bedecu;
    // NOP
    // 0x1bedf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bedf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bedf4: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x1bedf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x1bedf8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bedfc: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1bedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1bee00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bee00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bee04: 0x0  nop
    ctx->pc = 0x1bee04u;
    // NOP
    // 0x1bee08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bee08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bee0c: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x1bee0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x1bee10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bee14: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1bee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1bee18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bee18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bee1c: 0x0  nop
    ctx->pc = 0x1bee1cu;
    // NOP
    // 0x1bee20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bee20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bee24: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BEE24u;
    SET_GPR_U32(ctx, 31, 0x1BEE2Cu);
    ctx->pc = 0x1BEE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE24u;
            // 0x1bee28: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE2Cu; }
        if (ctx->pc != 0x1BEE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE2Cu; }
        if (ctx->pc != 0x1BEE2Cu) { return; }
    }
    ctx->pc = 0x1BEE2Cu;
    // 0x1bee2c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bee30: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1bee30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1bee34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bee38: 0x260500bc  addiu       $a1, $s0, 0xBC
    ctx->pc = 0x1bee38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x1bee3c: 0x24c6b9a0  addiu       $a2, $a2, -0x4660
    ctx->pc = 0x1bee3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949280));
    // 0x1bee40: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bee40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee44: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1bee44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee48: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1bee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1bee4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bee4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bee50: 0x0  nop
    ctx->pc = 0x1bee50u;
    // NOP
    // 0x1bee54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bee54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bee58: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1bee58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1bee5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bee60: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x1bee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x1bee64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bee64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bee68: 0x0  nop
    ctx->pc = 0x1bee68u;
    // NOP
    // 0x1bee6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bee6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bee70: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1bee70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1bee74: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bee78: 0x2442009b  addiu       $v0, $v0, 0x9B
    ctx->pc = 0x1bee78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 155));
    // 0x1bee7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bee7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bee80: 0x0  nop
    ctx->pc = 0x1bee80u;
    // NOP
    // 0x1bee84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bee84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bee88: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1bee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1bee8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bee90: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1bee90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1bee94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bee94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bee98: 0x0  nop
    ctx->pc = 0x1bee98u;
    // NOP
    // 0x1bee9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bee9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1beea0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BEEA0u;
    SET_GPR_U32(ctx, 31, 0x1BEEA8u);
    ctx->pc = 0x1BEEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEEA0u;
            // 0x1beea4: 0xe60000c8  swc1        $f0, 0xC8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEEA8u; }
        if (ctx->pc != 0x1BEEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEEA8u; }
        if (ctx->pc != 0x1BEEA8u) { return; }
    }
    ctx->pc = 0x1BEEA8u;
    // 0x1beea8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1beea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1beeac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1beeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1beeb0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1beeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1beeb4: 0x0  nop
    ctx->pc = 0x1beeb4u;
    // NOP
label_1beeb8:
    // 0x1beeb8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1beeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1beebc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1beebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1beec0: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1beec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1beec4: 0x0  nop
    ctx->pc = 0x1beec4u;
    // NOP
label_1beec8:
    // 0x1beec8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1beec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1beecc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1beeccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1beed0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1beed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1beed4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1beed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1beed8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1beed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beedc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEEDCu;
            // 0x1beee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBCA0u: goto label_1bbca0;
            case 0x1BBCD8u: goto label_1bbcd8;
            case 0x1BBD60u: goto label_1bbd60;
            case 0x1BBD98u: goto label_1bbd98;
            case 0x1BBDD0u: goto label_1bbdd0;
            case 0x1BBE08u: goto label_1bbe08;
            case 0x1BBE48u: goto label_1bbe48;
            case 0x1BBE60u: goto label_1bbe60;
            case 0x1BBE68u: goto label_1bbe68;
            case 0x1BBE90u: goto label_1bbe90;
            case 0x1BBEC8u: goto label_1bbec8;
            case 0x1BBF18u: goto label_1bbf18;
            case 0x1BBF28u: goto label_1bbf28;
            case 0x1BBF78u: goto label_1bbf78;
            case 0x1BBFC0u: goto label_1bbfc0;
            case 0x1BBFE8u: goto label_1bbfe8;
            case 0x1BC010u: goto label_1bc010;
            case 0x1BC074u: goto label_1bc074;
            case 0x1BC0B0u: goto label_1bc0b0;
            case 0x1BC0D8u: goto label_1bc0d8;
            case 0x1BC0E8u: goto label_1bc0e8;
            case 0x1BC220u: goto label_1bc220;
            case 0x1BC240u: goto label_1bc240;
            case 0x1BC28Cu: goto label_1bc28c;
            case 0x1BC2C8u: goto label_1bc2c8;
            case 0x1BC2F0u: goto label_1bc2f0;
            case 0x1BC300u: goto label_1bc300;
            case 0x1BC478u: goto label_1bc478;
            case 0x1BC498u: goto label_1bc498;
            case 0x1BC690u: goto label_1bc690;
            case 0x1BC6B0u: goto label_1bc6b0;
            case 0x1BC71Cu: goto label_1bc71c;
            case 0x1BC7C0u: goto label_1bc7c0;
            case 0x1BC850u: goto label_1bc850;
            case 0x1BC860u: goto label_1bc860;
            case 0x1BC8D0u: goto label_1bc8d0;
            case 0x1BC91Cu: goto label_1bc91c;
            case 0x1BC9C0u: goto label_1bc9c0;
            case 0x1BCA50u: goto label_1bca50;
            case 0x1BCA60u: goto label_1bca60;
            case 0x1BCAD0u: goto label_1bcad0;
            case 0x1BCB90u: goto label_1bcb90;
            case 0x1BCC00u: goto label_1bcc00;
            case 0x1BCCF0u: goto label_1bccf0;
            case 0x1BCD08u: goto label_1bcd08;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF08u: goto label_1bcf08;
            case 0x1BCFE0u: goto label_1bcfe0;
            case 0x1BCFF8u: goto label_1bcff8;
            case 0x1BD158u: goto label_1bd158;
            case 0x1BD178u: goto label_1bd178;
            case 0x1BD2F0u: goto label_1bd2f0;
            case 0x1BD310u: goto label_1bd310;
            case 0x1BD350u: goto label_1bd350;
            case 0x1BD380u: goto label_1bd380;
            case 0x1BD42Cu: goto label_1bd42c;
            case 0x1BD650u: goto label_1bd650;
            case 0x1BD698u: goto label_1bd698;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD8F4u: goto label_1bd8f4;
            case 0x1BDB18u: goto label_1bdb18;
            case 0x1BDB48u: goto label_1bdb48;
            case 0x1BDB78u: goto label_1bdb78;
            case 0x1BDC08u: goto label_1bdc08;
            case 0x1BDC24u: goto label_1bdc24;
            case 0x1BDE48u: goto label_1bde48;
            case 0x1BDE74u: goto label_1bde74;
            case 0x1BDE90u: goto label_1bde90;
            case 0x1BE0B8u: goto label_1be0b8;
            case 0x1BE0D0u: goto label_1be0d0;
            case 0x1BE300u: goto label_1be300;
            case 0x1BE328u: goto label_1be328;
            case 0x1BE4B0u: goto label_1be4b0;
            case 0x1BE4F8u: goto label_1be4f8;
            case 0x1BE530u: goto label_1be530;
            case 0x1BE568u: goto label_1be568;
            case 0x1BE5E8u: goto label_1be5e8;
            case 0x1BE608u: goto label_1be608;
            case 0x1BE658u: goto label_1be658;
            case 0x1BE680u: goto label_1be680;
            case 0x1BE698u: goto label_1be698;
            case 0x1BE6B0u: goto label_1be6b0;
            case 0x1BE6C8u: goto label_1be6c8;
            case 0x1BE6E0u: goto label_1be6e0;
            case 0x1BE6F8u: goto label_1be6f8;
            case 0x1BE710u: goto label_1be710;
            case 0x1BE728u: goto label_1be728;
            case 0x1BE740u: goto label_1be740;
            case 0x1BE758u: goto label_1be758;
            case 0x1BE770u: goto label_1be770;
            case 0x1BE788u: goto label_1be788;
            case 0x1BE7C8u: goto label_1be7c8;
            case 0x1BE810u: goto label_1be810;
            case 0x1BE838u: goto label_1be838;
            case 0x1BE878u: goto label_1be878;
            case 0x1BE8F0u: goto label_1be8f0;
            case 0x1BE8F8u: goto label_1be8f8;
            case 0x1BE910u: goto label_1be910;
            case 0x1BE920u: goto label_1be920;
            case 0x1BE960u: goto label_1be960;
            case 0x1BE968u: goto label_1be968;
            case 0x1BE970u: goto label_1be970;
            case 0x1BE9B0u: goto label_1be9b0;
            case 0x1BE9D0u: goto label_1be9d0;
            case 0x1BEEB8u: goto label_1beeb8;
            case 0x1BEEC8u: goto label_1beec8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BEEE4u;
}
