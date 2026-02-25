#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Nerai
// Address: 0x193d70 - 0x193f08
void EnemyshotMove_Nerai_0x193d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Nerai_0x193d70");
#endif

    ctx->pc = 0x193d70u;

    // 0x193d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193d7c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x193d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193d80: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x193d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193d84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x193d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193d88: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x193d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x193d8c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x193d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193d90: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x193d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193d94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x193d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193d98: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x193d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x193d9c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x193d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x193da0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x193da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x193da4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x193da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x193da8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x193da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x193dac: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x193dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x193db0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x193DB0u;
    {
        const bool branch_taken_0x193db0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x193DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193DB0u;
            // 0x193db4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193db0) {
            ctx->pc = 0x193DC0u;
            goto label_193dc0;
        }
    }
    ctx->pc = 0x193DB8u;
    // 0x193db8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x193db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x193dbc: 0x0  nop
    ctx->pc = 0x193dbcu;
    // NOP
label_193dc0:
    // 0x193dc0: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x193dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x193dc4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x193dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193dc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193dcc: 0x0  nop
    ctx->pc = 0x193dccu;
    // NOP
    // 0x193dd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193dd4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x193DD4u;
    {
        const bool branch_taken_0x193dd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193DD4u;
            // 0x193dd8: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193dd4) {
            ctx->pc = 0x193E20u;
            goto label_193e20;
        }
    }
    ctx->pc = 0x193DDCu;
    // 0x193ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193de0: 0x0  nop
    ctx->pc = 0x193de0u;
    // NOP
    // 0x193de4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193de4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193de8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x193DE8u;
    {
        const bool branch_taken_0x193de8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193de8) {
            ctx->pc = 0x193E20u;
            goto label_193e20;
        }
    }
    ctx->pc = 0x193DF0u;
    // 0x193df0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x193df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193df4: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x193df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x193df8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193dfc: 0x0  nop
    ctx->pc = 0x193dfcu;
    // NOP
    // 0x193e00: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x193e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193e04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x193E04u;
    {
        const bool branch_taken_0x193e04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193E04u;
            // 0x193e08: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e04) {
            ctx->pc = 0x193E20u;
            goto label_193e20;
        }
    }
    ctx->pc = 0x193E0Cu;
    // 0x193e0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193e10: 0x0  nop
    ctx->pc = 0x193e10u;
    // NOP
    // 0x193e14: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x193e14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193e18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x193E18u;
    {
        const bool branch_taken_0x193e18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193e18) {
            ctx->pc = 0x193E30u;
            goto label_193e30;
        }
    }
    ctx->pc = 0x193E20u;
label_193e20:
    // 0x193e20: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193E20u;
    SET_GPR_U32(ctx, 31, 0x193E28u);
    ctx->pc = 0x193E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193E20u;
            // 0x193e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E28u; }
        if (ctx->pc != 0x193E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E28u; }
        if (ctx->pc != 0x193E28u) { return; }
    }
    ctx->pc = 0x193E28u;
    // 0x193e28: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x193E28u;
    {
        const bool branch_taken_0x193e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193e28) {
            ctx->pc = 0x193EF8u;
            goto label_193ef8;
        }
    }
    ctx->pc = 0x193E30u;
label_193e30:
    // 0x193e30: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x193e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x193e34: 0x1c60001c  bgtz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x193E34u;
    {
        const bool branch_taken_0x193e34 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x193E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193E34u;
            // 0x193e38: 0x3c01ffff  lui         $at, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e34) {
            ctx->pc = 0x193EA8u;
            goto label_193ea8;
        }
    }
    ctx->pc = 0x193E3Cu;
    // 0x193e3c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x193e3cu;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)1u)));
    // 0x193e40: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x193e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x193e44: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x193E44u;
    {
        const bool branch_taken_0x193e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193E44u;
            // 0x193e48: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e44) {
            ctx->pc = 0x193E78u;
            goto label_193e78;
        }
    }
    ctx->pc = 0x193E4Cu;
    // 0x193e4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e50: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x193e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x193e54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193e58: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193e5c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x193e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x193e60: 0xc065944  jal         func_196510
    ctx->pc = 0x193E60u;
    SET_GPR_U32(ctx, 31, 0x193E68u);
    ctx->pc = 0x193E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193E60u;
            // 0x193e64: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E68u; }
        if (ctx->pc != 0x193E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E68u; }
        if (ctx->pc != 0x193E68u) { return; }
    }
    ctx->pc = 0x193E68u;
    // 0x193e68: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193E68u;
    SET_GPR_U32(ctx, 31, 0x193E70u);
    ctx->pc = 0x193E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193E68u;
            // 0x193e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E70u; }
        if (ctx->pc != 0x193E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E70u; }
        if (ctx->pc != 0x193E70u) { return; }
    }
    ctx->pc = 0x193E70u;
    // 0x193e70: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x193E70u;
    {
        const bool branch_taken_0x193e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193e70) {
            ctx->pc = 0x193EF8u;
            goto label_193ef8;
        }
    }
    ctx->pc = 0x193E78u;
label_193e78:
    // 0x193e78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x193e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193e7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x193e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x193e80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x193e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x193e84: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x193e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x193e88: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x193e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x193e8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x193e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x193e90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193e94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193e98: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x193e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x193e9c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x193E9Cu;
    {
        const bool branch_taken_0x193e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193E9Cu;
            // 0x193ea0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e9c) {
            ctx->pc = 0x193EF8u;
            goto label_193ef8;
        }
    }
    ctx->pc = 0x193EA4u;
    // 0x193ea4: 0x0  nop
    ctx->pc = 0x193ea4u;
    // NOP
label_193ea8:
    // 0x193ea8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x193ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x193eac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193eb0: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x193eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x193eb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x193eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193eb8: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x193eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x193ebc: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x193ebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x193ec0: 0x24c64430  addiu       $a2, $a2, 0x4430
    ctx->pc = 0x193ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17456));
    // 0x193ec4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x193ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ec8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x193ec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ecc: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x193eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x193ed0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ed4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x193ed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x193ed8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x193ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x193edc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x193edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ee0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193ee4: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x193ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x193ee8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193eec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193ef0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x193EF0u;
    SET_GPR_U32(ctx, 31, 0x193EF8u);
    ctx->pc = 0x193EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193EF0u;
            // 0x193ef4: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193EF8u; }
        if (ctx->pc != 0x193EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193EF8u; }
        if (ctx->pc != 0x193EF8u) { return; }
    }
    ctx->pc = 0x193EF8u;
label_193ef8:
    // 0x193ef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193f00: 0x3e00008  jr          $ra
    ctx->pc = 0x193F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F00u;
            // 0x193f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193DC0u: goto label_193dc0;
            case 0x193E20u: goto label_193e20;
            case 0x193E30u: goto label_193e30;
            case 0x193E78u: goto label_193e78;
            case 0x193EA8u: goto label_193ea8;
            case 0x193EF8u: goto label_193ef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193F08u;
}
