#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Houkou
// Address: 0x193f10 - 0x194080
void EnemyshotMove_Houkou_0x193f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Houkou_0x193f10");
#endif

    ctx->pc = 0x193f10u;

    // 0x193f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193f14: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x193f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x193f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193f24: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x193f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f2c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x193f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193f30: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x193f30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x193f34: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x193f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x193f38: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x193f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193f3c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x193f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193f40: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x193f40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x193f44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193f48: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x193F48u;
    {
        const bool branch_taken_0x193f48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F48u;
            // 0x193f4c: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f48) {
            ctx->pc = 0x193F98u;
            goto label_193f98;
        }
    }
    ctx->pc = 0x193F50u;
    // 0x193f50: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x193f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x193f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193f58: 0x0  nop
    ctx->pc = 0x193f58u;
    // NOP
    // 0x193f5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193f60: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x193F60u;
    {
        const bool branch_taken_0x193f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193f60) {
            ctx->pc = 0x193F98u;
            goto label_193f98;
        }
    }
    ctx->pc = 0x193F68u;
    // 0x193f68: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x193f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193f6c: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x193f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x193f70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193f74: 0x0  nop
    ctx->pc = 0x193f74u;
    // NOP
    // 0x193f78: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x193f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193f7c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x193F7Cu;
    {
        const bool branch_taken_0x193f7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F7Cu;
            // 0x193f80: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f7c) {
            ctx->pc = 0x193F98u;
            goto label_193f98;
        }
    }
    ctx->pc = 0x193F84u;
    // 0x193f84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193f88: 0x0  nop
    ctx->pc = 0x193f88u;
    // NOP
    // 0x193f8c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x193f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193f90: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x193F90u;
    {
        const bool branch_taken_0x193f90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193f90) {
            ctx->pc = 0x193FA8u;
            goto label_193fa8;
        }
    }
    ctx->pc = 0x193F98u;
label_193f98:
    // 0x193f98: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193F98u;
    SET_GPR_U32(ctx, 31, 0x193FA0u);
    ctx->pc = 0x193F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193F98u;
            // 0x193f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FA0u; }
        if (ctx->pc != 0x193FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FA0u; }
        if (ctx->pc != 0x193FA0u) { return; }
    }
    ctx->pc = 0x193FA0u;
    // 0x193fa0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x193FA0u;
    {
        const bool branch_taken_0x193fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193fa0) {
            ctx->pc = 0x194070u;
            goto label_194070;
        }
    }
    ctx->pc = 0x193FA8u;
label_193fa8:
    // 0x193fa8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x193fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x193fac: 0x1c60001c  bgtz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x193FACu;
    {
        const bool branch_taken_0x193fac = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x193FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193FACu;
            // 0x193fb0: 0x3c01ffff  lui         $at, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193fac) {
            ctx->pc = 0x194020u;
            goto label_194020;
        }
    }
    ctx->pc = 0x193FB4u;
    // 0x193fb4: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x193fb4u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)1u)));
    // 0x193fb8: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x193fb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x193fbc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x193FBCu;
    {
        const bool branch_taken_0x193fbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193FBCu;
            // 0x193fc0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193fbc) {
            ctx->pc = 0x193FF0u;
            goto label_193ff0;
        }
    }
    ctx->pc = 0x193FC4u;
    // 0x193fc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193fc8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x193fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x193fcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193fd0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193fd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193fd4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x193fd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x193fd8: 0xc065944  jal         func_196510
    ctx->pc = 0x193FD8u;
    SET_GPR_U32(ctx, 31, 0x193FE0u);
    ctx->pc = 0x193FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193FD8u;
            // 0x193fdc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FE0u; }
        if (ctx->pc != 0x193FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FE0u; }
        if (ctx->pc != 0x193FE0u) { return; }
    }
    ctx->pc = 0x193FE0u;
    // 0x193fe0: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193FE0u;
    SET_GPR_U32(ctx, 31, 0x193FE8u);
    ctx->pc = 0x193FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193FE0u;
            // 0x193fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FE8u; }
        if (ctx->pc != 0x193FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FE8u; }
        if (ctx->pc != 0x193FE8u) { return; }
    }
    ctx->pc = 0x193FE8u;
    // 0x193fe8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x193FE8u;
    {
        const bool branch_taken_0x193fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193fe8) {
            ctx->pc = 0x194070u;
            goto label_194070;
        }
    }
    ctx->pc = 0x193FF0u;
label_193ff0:
    // 0x193ff0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x193ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193ff4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x193ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x193ff8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x193ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x193ffc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x193ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x194000: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x194000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x194004: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x194004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x194008: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19400c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19400cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194010: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x194010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x194014: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x194014u;
    {
        const bool branch_taken_0x194014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194014u;
            // 0x194018: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194014) {
            ctx->pc = 0x194070u;
            goto label_194070;
        }
    }
    ctx->pc = 0x19401Cu;
    // 0x19401c: 0x0  nop
    ctx->pc = 0x19401cu;
    // NOP
label_194020:
    // 0x194020: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x194020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x194024: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x194024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194028: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x194028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x19402c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19402cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x194030: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x194030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x194034: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x194034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x194038: 0x24c64430  addiu       $a2, $a2, 0x4430
    ctx->pc = 0x194038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17456));
    // 0x19403c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19403cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194040: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x194040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194044: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x194044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x194048: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x194048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19404c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19404cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x194050: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x194050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x194054: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x194054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194058: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x194058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19405c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x19405cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x194060: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x194060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194064: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x194064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x194068: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x194068u;
    SET_GPR_U32(ctx, 31, 0x194070u);
    ctx->pc = 0x19406Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194068u;
            // 0x19406c: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194070u; }
        if (ctx->pc != 0x194070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194070u; }
        if (ctx->pc != 0x194070u) { return; }
    }
    ctx->pc = 0x194070u;
label_194070:
    // 0x194070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194078: 0x3e00008  jr          $ra
    ctx->pc = 0x194078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194078u;
            // 0x19407c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193F98u: goto label_193f98;
            case 0x193FA8u: goto label_193fa8;
            case 0x193FF0u: goto label_193ff0;
            case 0x194020u: goto label_194020;
            case 0x194070u: goto label_194070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194080u;
}
