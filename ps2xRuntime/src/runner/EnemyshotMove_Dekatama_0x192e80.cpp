#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Dekatama
// Address: 0x192e80 - 0x193018
void EnemyshotMove_Dekatama_0x192e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Dekatama_0x192e80");
#endif

    ctx->pc = 0x192e80u;

    // 0x192e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192e8c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x192e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192e90: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x192e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x192e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192e98: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x192e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x192e9c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x192e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192ea0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x192ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192ea4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x192ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192ea8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x192ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x192eac: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x192eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x192eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x192eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x192eb4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x192eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x192eb8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x192eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x192ebc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x192ebcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x192ec0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x192EC0u;
    {
        const bool branch_taken_0x192ec0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x192EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192EC0u;
            // 0x192ec4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ec0) {
            ctx->pc = 0x192ED0u;
            goto label_192ed0;
        }
    }
    ctx->pc = 0x192EC8u;
    // 0x192ec8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x192ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x192ecc: 0x0  nop
    ctx->pc = 0x192eccu;
    // NOP
label_192ed0:
    // 0x192ed0: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x192ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x192ed4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x192ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192ed8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192edc: 0x0  nop
    ctx->pc = 0x192edcu;
    // NOP
    // 0x192ee0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192ee4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x192EE4u;
    {
        const bool branch_taken_0x192ee4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192EE4u;
            // 0x192ee8: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ee4) {
            ctx->pc = 0x192F30u;
            goto label_192f30;
        }
    }
    ctx->pc = 0x192EECu;
    // 0x192eec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192ef0: 0x0  nop
    ctx->pc = 0x192ef0u;
    // NOP
    // 0x192ef4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192ef8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x192EF8u;
    {
        const bool branch_taken_0x192ef8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192ef8) {
            ctx->pc = 0x192F30u;
            goto label_192f30;
        }
    }
    ctx->pc = 0x192F00u;
    // 0x192f00: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x192f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192f04: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x192f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x192f08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192f0c: 0x0  nop
    ctx->pc = 0x192f0cu;
    // NOP
    // 0x192f10: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x192f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192f14: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x192F14u;
    {
        const bool branch_taken_0x192f14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192F14u;
            // 0x192f18: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f14) {
            ctx->pc = 0x192F30u;
            goto label_192f30;
        }
    }
    ctx->pc = 0x192F1Cu;
    // 0x192f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192f20: 0x0  nop
    ctx->pc = 0x192f20u;
    // NOP
    // 0x192f24: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x192f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192f28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x192F28u;
    {
        const bool branch_taken_0x192f28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192f28) {
            ctx->pc = 0x192F40u;
            goto label_192f40;
        }
    }
    ctx->pc = 0x192F30u;
label_192f30:
    // 0x192f30: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x192F30u;
    SET_GPR_U32(ctx, 31, 0x192F38u);
    ctx->pc = 0x192F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F30u;
            // 0x192f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F38u; }
        if (ctx->pc != 0x192F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F38u; }
        if (ctx->pc != 0x192F38u) { return; }
    }
    ctx->pc = 0x192F38u;
    // 0x192f38: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x192F38u;
    {
        const bool branch_taken_0x192f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f38) {
            ctx->pc = 0x193008u;
            goto label_193008;
        }
    }
    ctx->pc = 0x192F40u;
label_192f40:
    // 0x192f40: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x192f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x192f44: 0x1c60001c  bgtz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x192F44u;
    {
        const bool branch_taken_0x192f44 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x192F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192F44u;
            // 0x192f48: 0x3c01ffff  lui         $at, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f44) {
            ctx->pc = 0x192FB8u;
            goto label_192fb8;
        }
    }
    ctx->pc = 0x192F4Cu;
    // 0x192f4c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x192f4cu;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)1u)));
    // 0x192f50: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x192f50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x192f54: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x192F54u;
    {
        const bool branch_taken_0x192f54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192F54u;
            // 0x192f58: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f54) {
            ctx->pc = 0x192F88u;
            goto label_192f88;
        }
    }
    ctx->pc = 0x192F5Cu;
    // 0x192f5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f60: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x192f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x192f64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x192f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192f68: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192f68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x192f6c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x192f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x192f70: 0xc065944  jal         func_196510
    ctx->pc = 0x192F70u;
    SET_GPR_U32(ctx, 31, 0x192F78u);
    ctx->pc = 0x192F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F70u;
            // 0x192f74: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F78u; }
        if (ctx->pc != 0x192F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F78u; }
        if (ctx->pc != 0x192F78u) { return; }
    }
    ctx->pc = 0x192F78u;
    // 0x192f78: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x192F78u;
    SET_GPR_U32(ctx, 31, 0x192F80u);
    ctx->pc = 0x192F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F78u;
            // 0x192f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F80u; }
        if (ctx->pc != 0x192F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F80u; }
        if (ctx->pc != 0x192F80u) { return; }
    }
    ctx->pc = 0x192F80u;
    // 0x192f80: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x192F80u;
    {
        const bool branch_taken_0x192f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f80) {
            ctx->pc = 0x193008u;
            goto label_193008;
        }
    }
    ctx->pc = 0x192F88u;
label_192f88:
    // 0x192f88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x192f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192f8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x192f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x192f90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x192f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x192f94: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x192f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x192f98: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x192f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x192f9c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x192f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x192fa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x192fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x192fa4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x192fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192fa8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x192fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x192fac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x192FACu;
    {
        const bool branch_taken_0x192fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FACu;
            // 0x192fb0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192fac) {
            ctx->pc = 0x193008u;
            goto label_193008;
        }
    }
    ctx->pc = 0x192FB4u;
    // 0x192fb4: 0x0  nop
    ctx->pc = 0x192fb4u;
    // NOP
label_192fb8:
    // 0x192fb8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x192fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x192fbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192fc0: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x192fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x192fc4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x192fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192fc8: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x192fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x192fcc: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x192fccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x192fd0: 0x24c64430  addiu       $a2, $a2, 0x4430
    ctx->pc = 0x192fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17456));
    // 0x192fd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x192fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fd8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x192fd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fdc: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x192fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x192fe0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x192fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192fe4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192fe8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x192fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x192fec: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x192fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192ff0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192ff4: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x192ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x192ff8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x192ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192ffc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193000: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x193000u;
    SET_GPR_U32(ctx, 31, 0x193008u);
    ctx->pc = 0x193004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193000u;
            // 0x193004: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193008u; }
        if (ctx->pc != 0x193008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193008u; }
        if (ctx->pc != 0x193008u) { return; }
    }
    ctx->pc = 0x193008u;
label_193008:
    // 0x193008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19300c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19300cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193010: 0x3e00008  jr          $ra
    ctx->pc = 0x193010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193010u;
            // 0x193014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192ED0u: goto label_192ed0;
            case 0x192F30u: goto label_192f30;
            case 0x192F40u: goto label_192f40;
            case 0x192F88u: goto label_192f88;
            case 0x192FB8u: goto label_192fb8;
            case 0x193008u: goto label_193008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193018u;
}
