#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Kowase
// Address: 0x1928d0 - 0x192a68
void EnemyshotMove_Kowase_0x1928d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Kowase_0x1928d0");
#endif

    ctx->pc = 0x1928d0u;

    // 0x1928d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1928d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1928d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1928d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1928d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1928d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1928dc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1928dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1928e0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1928e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1928e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1928e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1928e8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1928e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1928ec: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1928ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1928f0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1928f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1928f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1928f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1928f8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1928f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1928fc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1928fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x192900: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x192900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x192904: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x192904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x192908: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x192908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19290c: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x19290cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x192910: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x192910u;
    {
        const bool branch_taken_0x192910 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x192914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192910u;
            // 0x192914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192910) {
            ctx->pc = 0x192920u;
            goto label_192920;
        }
    }
    ctx->pc = 0x192918u;
    // 0x192918: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x192918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x19291c: 0x0  nop
    ctx->pc = 0x19291cu;
    // NOP
label_192920:
    // 0x192920: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x192920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x192924: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x192924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19292c: 0x0  nop
    ctx->pc = 0x19292cu;
    // NOP
    // 0x192930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192934: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x192934u;
    {
        const bool branch_taken_0x192934 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192934u;
            // 0x192938: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192934) {
            ctx->pc = 0x192980u;
            goto label_192980;
        }
    }
    ctx->pc = 0x19293Cu;
    // 0x19293c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19293cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192940: 0x0  nop
    ctx->pc = 0x192940u;
    // NOP
    // 0x192944: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192944u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192948: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x192948u;
    {
        const bool branch_taken_0x192948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192948) {
            ctx->pc = 0x192980u;
            goto label_192980;
        }
    }
    ctx->pc = 0x192950u;
    // 0x192950: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x192950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192954: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x192954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x192958: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19295c: 0x0  nop
    ctx->pc = 0x19295cu;
    // NOP
    // 0x192960: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x192960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192964: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x192964u;
    {
        const bool branch_taken_0x192964 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192964u;
            // 0x192968: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192964) {
            ctx->pc = 0x192980u;
            goto label_192980;
        }
    }
    ctx->pc = 0x19296Cu;
    // 0x19296c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19296cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192970: 0x0  nop
    ctx->pc = 0x192970u;
    // NOP
    // 0x192974: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x192974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192978: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x192978u;
    {
        const bool branch_taken_0x192978 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192978) {
            ctx->pc = 0x192990u;
            goto label_192990;
        }
    }
    ctx->pc = 0x192980u;
label_192980:
    // 0x192980: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x192980u;
    SET_GPR_U32(ctx, 31, 0x192988u);
    ctx->pc = 0x192984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192980u;
            // 0x192984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192988u; }
        if (ctx->pc != 0x192988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192988u; }
        if (ctx->pc != 0x192988u) { return; }
    }
    ctx->pc = 0x192988u;
    // 0x192988: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x192988u;
    {
        const bool branch_taken_0x192988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192988) {
            ctx->pc = 0x192A58u;
            goto label_192a58;
        }
    }
    ctx->pc = 0x192990u;
label_192990:
    // 0x192990: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x192990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x192994: 0x1c60001c  bgtz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x192994u;
    {
        const bool branch_taken_0x192994 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x192998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192994u;
            // 0x192998: 0x3c01ffff  lui         $at, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192994) {
            ctx->pc = 0x192A08u;
            goto label_192a08;
        }
    }
    ctx->pc = 0x19299Cu;
    // 0x19299c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x19299cu;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)1u)));
    // 0x1929a0: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1929a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1929a4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1929A4u;
    {
        const bool branch_taken_0x1929a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929A4u;
            // 0x1929a8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929a4) {
            ctx->pc = 0x1929D8u;
            goto label_1929d8;
        }
    }
    ctx->pc = 0x1929ACu;
    // 0x1929ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1929acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929b0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1929b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1929b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1929b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1929b8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1929b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1929bc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1929bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1929c0: 0xc065944  jal         func_196510
    ctx->pc = 0x1929C0u;
    SET_GPR_U32(ctx, 31, 0x1929C8u);
    ctx->pc = 0x1929C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1929C0u;
            // 0x1929c4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929C8u; }
        if (ctx->pc != 0x1929C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929C8u; }
        if (ctx->pc != 0x1929C8u) { return; }
    }
    ctx->pc = 0x1929C8u;
    // 0x1929c8: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x1929C8u;
    SET_GPR_U32(ctx, 31, 0x1929D0u);
    ctx->pc = 0x1929CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1929C8u;
            // 0x1929cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929D0u; }
        if (ctx->pc != 0x1929D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929D0u; }
        if (ctx->pc != 0x1929D0u) { return; }
    }
    ctx->pc = 0x1929D0u;
    // 0x1929d0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1929D0u;
    {
        const bool branch_taken_0x1929d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1929d0) {
            ctx->pc = 0x192A58u;
            goto label_192a58;
        }
    }
    ctx->pc = 0x1929D8u;
label_1929d8:
    // 0x1929d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1929d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1929dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1929dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1929e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1929e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1929e4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1929e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1929e8: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x1929e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x1929ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1929ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1929f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1929f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1929f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1929f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1929f8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1929f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1929fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1929FCu;
    {
        const bool branch_taken_0x1929fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929FCu;
            // 0x192a00: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929fc) {
            ctx->pc = 0x192A58u;
            goto label_192a58;
        }
    }
    ctx->pc = 0x192A04u;
    // 0x192a04: 0x0  nop
    ctx->pc = 0x192a04u;
    // NOP
label_192a08:
    // 0x192a08: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x192a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x192a0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192a10: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x192a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x192a14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x192a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192a18: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x192a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x192a1c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x192a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x192a20: 0x24c642b0  addiu       $a2, $a2, 0x42B0
    ctx->pc = 0x192a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17072));
    // 0x192a24: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x192a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a28: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x192a28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a2c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x192a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x192a30: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x192a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192a34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192a34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192a38: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x192a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x192a3c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x192a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192a40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192a44: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x192a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x192a48: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x192a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192a4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192a50: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x192A50u;
    SET_GPR_U32(ctx, 31, 0x192A58u);
    ctx->pc = 0x192A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192A50u;
            // 0x192a54: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A58u; }
        if (ctx->pc != 0x192A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A58u; }
        if (ctx->pc != 0x192A58u) { return; }
    }
    ctx->pc = 0x192A58u;
label_192a58:
    // 0x192a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192a5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192a60: 0x3e00008  jr          $ra
    ctx->pc = 0x192A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A60u;
            // 0x192a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192920u: goto label_192920;
            case 0x192980u: goto label_192980;
            case 0x192990u: goto label_192990;
            case 0x1929D8u: goto label_1929d8;
            case 0x192A08u: goto label_192a08;
            case 0x192A58u: goto label_192a58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192A68u;
}
