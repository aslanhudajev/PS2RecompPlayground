#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Dekatama_boss
// Address: 0x192c70 - 0x192e80
void EnemyshotMove_Dekatama_boss_0x192c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Dekatama_boss_0x192c70");
#endif

    ctx->pc = 0x192c70u;

    // 0x192c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192c78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192c80: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x192c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192c84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192c84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192c88: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x192C88u;
    {
        const bool branch_taken_0x192c88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C88u;
            // 0x192c8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c88) {
            ctx->pc = 0x192CA8u;
            goto label_192ca8;
        }
    }
    ctx->pc = 0x192C90u;
    // 0x192c90: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x192c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x192c94: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x192c94u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x192c98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192c98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192c9c: 0x0  nop
    ctx->pc = 0x192c9cu;
    // NOP
    // 0x192ca0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x192ca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x192ca4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x192ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_192ca8:
    // 0x192ca8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x192ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192cb0: 0x0  nop
    ctx->pc = 0x192cb0u;
    // NOP
    // 0x192cb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192cb8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x192CB8u;
    {
        const bool branch_taken_0x192cb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192CB8u;
            // 0x192cbc: 0x3c033c23  lui         $v1, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192cb8) {
            ctx->pc = 0x192CD8u;
            goto label_192cd8;
        }
    }
    ctx->pc = 0x192CC0u;
    // 0x192cc0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x192cc0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x192cc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192cc8: 0x0  nop
    ctx->pc = 0x192cc8u;
    // NOP
    // 0x192ccc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192cd0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x192cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x192cd4: 0x0  nop
    ctx->pc = 0x192cd4u;
    // NOP
label_192cd8:
    // 0x192cd8: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x192cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x192cdc: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x192cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192ce0: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x192ce0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49807u)));
    // 0x192ce4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x192ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192ce8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192cec: 0x0  nop
    ctx->pc = 0x192cecu;
    // NOP
    // 0x192cf0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x192cf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x192cf4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x192cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x192cf8: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x192cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192cfc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x192cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192d00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x192d00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x192d04: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x192d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x192d08: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x192d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192d0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192d10: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x192d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x192d14: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x192d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x192d18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x192d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x192d1c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x192d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x192d20: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x192d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x192d24: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x192d24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x192d28: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x192D28u;
    {
        const bool branch_taken_0x192d28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x192d28) {
            ctx->pc = 0x192D38u;
            goto label_192d38;
        }
    }
    ctx->pc = 0x192D30u;
    // 0x192d30: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x192d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x192d34: 0x0  nop
    ctx->pc = 0x192d34u;
    // NOP
label_192d38:
    // 0x192d38: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x192d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x192d3c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x192d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192d40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192d44: 0x0  nop
    ctx->pc = 0x192d44u;
    // NOP
    // 0x192d48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192d4c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x192D4Cu;
    {
        const bool branch_taken_0x192d4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192D4Cu;
            // 0x192d50: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d4c) {
            ctx->pc = 0x192D98u;
            goto label_192d98;
        }
    }
    ctx->pc = 0x192D54u;
    // 0x192d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192d58: 0x0  nop
    ctx->pc = 0x192d58u;
    // NOP
    // 0x192d5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192d5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192d60: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x192D60u;
    {
        const bool branch_taken_0x192d60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192d60) {
            ctx->pc = 0x192D98u;
            goto label_192d98;
        }
    }
    ctx->pc = 0x192D68u;
    // 0x192d68: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x192d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192d6c: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x192d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x192d70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192d74: 0x0  nop
    ctx->pc = 0x192d74u;
    // NOP
    // 0x192d78: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x192d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192d7c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x192D7Cu;
    {
        const bool branch_taken_0x192d7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192D7Cu;
            // 0x192d80: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d7c) {
            ctx->pc = 0x192D98u;
            goto label_192d98;
        }
    }
    ctx->pc = 0x192D84u;
    // 0x192d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192d88: 0x0  nop
    ctx->pc = 0x192d88u;
    // NOP
    // 0x192d8c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x192d8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192d90: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x192D90u;
    {
        const bool branch_taken_0x192d90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192d90) {
            ctx->pc = 0x192DA8u;
            goto label_192da8;
        }
    }
    ctx->pc = 0x192D98u;
label_192d98:
    // 0x192d98: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x192D98u;
    SET_GPR_U32(ctx, 31, 0x192DA0u);
    ctx->pc = 0x192D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192D98u;
            // 0x192d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DA0u; }
        if (ctx->pc != 0x192DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DA0u; }
        if (ctx->pc != 0x192DA0u) { return; }
    }
    ctx->pc = 0x192DA0u;
    // 0x192da0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x192DA0u;
    {
        const bool branch_taken_0x192da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192da0) {
            ctx->pc = 0x192E70u;
            goto label_192e70;
        }
    }
    ctx->pc = 0x192DA8u;
label_192da8:
    // 0x192da8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x192da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x192dac: 0x1c60001c  bgtz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x192DACu;
    {
        const bool branch_taken_0x192dac = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x192DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DACu;
            // 0x192db0: 0x3c01ffff  lui         $at, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192dac) {
            ctx->pc = 0x192E20u;
            goto label_192e20;
        }
    }
    ctx->pc = 0x192DB4u;
    // 0x192db4: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x192db4u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)1u)));
    // 0x192db8: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x192db8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x192dbc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x192DBCu;
    {
        const bool branch_taken_0x192dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DBCu;
            // 0x192dc0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192dbc) {
            ctx->pc = 0x192DF0u;
            goto label_192df0;
        }
    }
    ctx->pc = 0x192DC4u;
    // 0x192dc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192dc8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x192dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x192dcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x192dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192dd0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192dd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x192dd4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x192dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x192dd8: 0xc065944  jal         func_196510
    ctx->pc = 0x192DD8u;
    SET_GPR_U32(ctx, 31, 0x192DE0u);
    ctx->pc = 0x192DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192DD8u;
            // 0x192ddc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DE0u; }
        if (ctx->pc != 0x192DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DE0u; }
        if (ctx->pc != 0x192DE0u) { return; }
    }
    ctx->pc = 0x192DE0u;
    // 0x192de0: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x192DE0u;
    SET_GPR_U32(ctx, 31, 0x192DE8u);
    ctx->pc = 0x192DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192DE0u;
            // 0x192de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DE8u; }
        if (ctx->pc != 0x192DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DE8u; }
        if (ctx->pc != 0x192DE8u) { return; }
    }
    ctx->pc = 0x192DE8u;
    // 0x192de8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x192DE8u;
    {
        const bool branch_taken_0x192de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192de8) {
            ctx->pc = 0x192E70u;
            goto label_192e70;
        }
    }
    ctx->pc = 0x192DF0u;
label_192df0:
    // 0x192df0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x192df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192df4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x192df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x192df8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x192df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x192dfc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x192dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x192e00: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x192e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x192e04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x192e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x192e08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x192e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x192e0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x192e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192e10: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x192e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x192e14: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x192E14u;
    {
        const bool branch_taken_0x192e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E14u;
            // 0x192e18: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e14) {
            ctx->pc = 0x192E70u;
            goto label_192e70;
        }
    }
    ctx->pc = 0x192E1Cu;
    // 0x192e1c: 0x0  nop
    ctx->pc = 0x192e1cu;
    // NOP
label_192e20:
    // 0x192e20: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x192e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x192e24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192e28: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x192e28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x192e2c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x192e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192e30: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x192e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x192e34: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x192e34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x192e38: 0x24c64430  addiu       $a2, $a2, 0x4430
    ctx->pc = 0x192e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17456));
    // 0x192e3c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x192e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e40: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x192e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e44: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x192e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x192e48: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x192e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192e50: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x192e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x192e54: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x192e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192e5c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x192e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x192e60: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x192e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192e68: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x192E68u;
    SET_GPR_U32(ctx, 31, 0x192E70u);
    ctx->pc = 0x192E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192E68u;
            // 0x192e6c: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E70u; }
        if (ctx->pc != 0x192E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E70u; }
        if (ctx->pc != 0x192E70u) { return; }
    }
    ctx->pc = 0x192E70u;
label_192e70:
    // 0x192e70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192e74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192e78: 0x3e00008  jr          $ra
    ctx->pc = 0x192E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E78u;
            // 0x192e7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192CA8u: goto label_192ca8;
            case 0x192CD8u: goto label_192cd8;
            case 0x192D38u: goto label_192d38;
            case 0x192D98u: goto label_192d98;
            case 0x192DA8u: goto label_192da8;
            case 0x192DF0u: goto label_192df0;
            case 0x192E20u: goto label_192e20;
            case 0x192E70u: goto label_192e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192E80u;
}
