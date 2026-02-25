#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Laser
// Address: 0x192750 - 0x1928c8
void EnemyshotMove_Laser_0x192750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Laser_0x192750");
#endif

    ctx->pc = 0x192750u;

    // 0x192750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192754: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x192754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x192758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19275c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19275cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192764: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x192764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x192768: 0x24a3fffc  addiu       $v1, $a1, -0x4
    ctx->pc = 0x192768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x19276c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x19276cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x192770: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x192770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192774: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192778: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x192778u;
    {
        const bool branch_taken_0x192778 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19277Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192778u;
            // 0x19277c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192778) {
            ctx->pc = 0x1927C8u;
            goto label_1927c8;
        }
    }
    ctx->pc = 0x192780u;
    // 0x192780: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x192780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x192784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192788: 0x0  nop
    ctx->pc = 0x192788u;
    // NOP
    // 0x19278c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19278cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192790: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x192790u;
    {
        const bool branch_taken_0x192790 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192790) {
            ctx->pc = 0x1927C8u;
            goto label_1927c8;
        }
    }
    ctx->pc = 0x192798u;
    // 0x192798: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x192798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19279c: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x19279cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x1927a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1927a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1927a4: 0x0  nop
    ctx->pc = 0x1927a4u;
    // NOP
    // 0x1927a8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1927a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1927ac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1927ACu;
    {
        const bool branch_taken_0x1927ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1927B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1927ACu;
            // 0x1927b0: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927ac) {
            ctx->pc = 0x1927C8u;
            goto label_1927c8;
        }
    }
    ctx->pc = 0x1927B4u;
    // 0x1927b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1927b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1927b8: 0x0  nop
    ctx->pc = 0x1927b8u;
    // NOP
    // 0x1927bc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1927bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1927c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1927C0u;
    {
        const bool branch_taken_0x1927c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1927c0) {
            ctx->pc = 0x1927D8u;
            goto label_1927d8;
        }
    }
    ctx->pc = 0x1927C8u;
label_1927c8:
    // 0x1927c8: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x1927C8u;
    SET_GPR_U32(ctx, 31, 0x1927D0u);
    ctx->pc = 0x1927CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1927C8u;
            // 0x1927cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927D0u; }
        if (ctx->pc != 0x1927D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927D0u; }
        if (ctx->pc != 0x1927D0u) { return; }
    }
    ctx->pc = 0x1927D0u;
    // 0x1927d0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1927D0u;
    {
        const bool branch_taken_0x1927d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1927d0) {
            ctx->pc = 0x1928B8u;
            goto label_1928b8;
        }
    }
    ctx->pc = 0x1927D8u;
label_1927d8:
    // 0x1927d8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1927d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1927dc: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1927DCu;
    {
        const bool branch_taken_0x1927dc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1927dc) {
            ctx->pc = 0x1927F8u;
            goto label_1927f8;
        }
    }
    ctx->pc = 0x1927E4u;
    // 0x1927e4: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x1927E4u;
    SET_GPR_U32(ctx, 31, 0x1927ECu);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927ECu; }
        if (ctx->pc != 0x1927ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927ECu; }
        if (ctx->pc != 0x1927ECu) { return; }
    }
    ctx->pc = 0x1927ECu;
    // 0x1927ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1927ECu;
    {
        const bool branch_taken_0x1927ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1927ec) {
            ctx->pc = 0x1928B8u;
            goto label_1928b8;
        }
    }
    ctx->pc = 0x1927F4u;
    // 0x1927f4: 0x0  nop
    ctx->pc = 0x1927f4u;
    // NOP
label_1927f8:
    // 0x1927f8: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x1927f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1927fc: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1927FCu;
    {
        const bool branch_taken_0x1927fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1927fc) {
            ctx->pc = 0x192858u;
            goto label_192858;
        }
    }
    ctx->pc = 0x192804u;
    // 0x192804: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x192804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x192808: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x192808u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x19280c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19280cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192810: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x192810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192814: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x192814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x192818: 0x24c643f0  addiu       $a2, $a2, 0x43F0
    ctx->pc = 0x192818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17392));
    // 0x19281c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x19281cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x192820: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x192820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192824: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x192824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192828: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x192828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x19282c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x19282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192830: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192834: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x192834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x192838: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x192838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19283c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19283cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192840: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x192840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x192844: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x192844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192848: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19284c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x19284Cu;
    SET_GPR_U32(ctx, 31, 0x192854u);
    ctx->pc = 0x192850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19284Cu;
            // 0x192850: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192854u; }
        if (ctx->pc != 0x192854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192854u; }
        if (ctx->pc != 0x192854u) { return; }
    }
    ctx->pc = 0x192854u;
    // 0x192854: 0x0  nop
    ctx->pc = 0x192854u;
    // NOP
label_192858:
    // 0x192858: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x192858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19285c: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x19285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x192860: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x192860u;
    {
        const bool branch_taken_0x192860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x192860) {
            ctx->pc = 0x1928B8u;
            goto label_1928b8;
        }
    }
    ctx->pc = 0x192868u;
    // 0x192868: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x192868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19286c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x19286cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x192870: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x192870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192874: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x192874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192878: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x192878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19287c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x19287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192880: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x192884: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x192888: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x192888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x19288c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x19288cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x192890: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x192890u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x192894: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192894u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x192898: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19289c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x19289cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1928a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1928a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1928a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1928a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1928a8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1928a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1928ac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1928acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1928b0: 0xc065200  jal         func_194800
    ctx->pc = 0x1928B0u;
    SET_GPR_U32(ctx, 31, 0x1928B8u);
    ctx->pc = 0x1928B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1928B0u;
            // 0x1928b4: 0x8e060034  lw          $a2, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194800u;
    if (runtime->hasFunction(0x194800u)) {
        auto targetFn = runtime->lookupFunction(0x194800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928B8u; }
        if (ctx->pc != 0x1928B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_0x194800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928B8u; }
        if (ctx->pc != 0x1928B8u) { return; }
    }
    ctx->pc = 0x1928B8u;
label_1928b8:
    // 0x1928b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1928b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1928bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1928bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1928c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1928C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1928C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1928C0u;
            // 0x1928c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1927C8u: goto label_1927c8;
            case 0x1927D8u: goto label_1927d8;
            case 0x1927F8u: goto label_1927f8;
            case 0x192858u: goto label_192858;
            case 0x1928B8u: goto label_1928b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1928C8u;
}
