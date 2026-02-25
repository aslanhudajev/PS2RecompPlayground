#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Laser_Big
// Address: 0x1925f0 - 0x192750
void EnemyshotMove_Laser_Big_0x1925f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Laser_Big_0x1925f0");
#endif

    ctx->pc = 0x1925f0u;

    // 0x1925f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1925f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1925f4: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x1925f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x1925f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1925f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1925fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1925fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192604: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x192604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x192608: 0x24a3fff8  addiu       $v1, $a1, -0x8
    ctx->pc = 0x192608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x19260c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x19260cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x192610: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x192610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192614: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192618: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x192618u;
    {
        const bool branch_taken_0x192618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19261Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192618u;
            // 0x19261c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192618) {
            ctx->pc = 0x192650u;
            goto label_192650;
        }
    }
    ctx->pc = 0x192620u;
    // 0x192620: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x192620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192624: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x192624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x192628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19262c: 0x0  nop
    ctx->pc = 0x19262cu;
    // NOP
    // 0x192630: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x192630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192634: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x192634u;
    {
        const bool branch_taken_0x192634 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192634u;
            // 0x192638: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192634) {
            ctx->pc = 0x192650u;
            goto label_192650;
        }
    }
    ctx->pc = 0x19263Cu;
    // 0x19263c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19263cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192640: 0x0  nop
    ctx->pc = 0x192640u;
    // NOP
    // 0x192644: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x192644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192648: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x192648u;
    {
        const bool branch_taken_0x192648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192648) {
            ctx->pc = 0x192660u;
            goto label_192660;
        }
    }
    ctx->pc = 0x192650u;
label_192650:
    // 0x192650: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x192650u;
    SET_GPR_U32(ctx, 31, 0x192658u);
    ctx->pc = 0x192654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192650u;
            // 0x192654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192658u; }
        if (ctx->pc != 0x192658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192658u; }
        if (ctx->pc != 0x192658u) { return; }
    }
    ctx->pc = 0x192658u;
    // 0x192658: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x192658u;
    {
        const bool branch_taken_0x192658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192658) {
            ctx->pc = 0x192740u;
            goto label_192740;
        }
    }
    ctx->pc = 0x192660u;
label_192660:
    // 0x192660: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x192660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x192664: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x192664u;
    {
        const bool branch_taken_0x192664 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x192664) {
            ctx->pc = 0x192680u;
            goto label_192680;
        }
    }
    ctx->pc = 0x19266Cu;
    // 0x19266c: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x19266Cu;
    SET_GPR_U32(ctx, 31, 0x192674u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192674u; }
        if (ctx->pc != 0x192674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192674u; }
        if (ctx->pc != 0x192674u) { return; }
    }
    ctx->pc = 0x192674u;
    // 0x192674: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x192674u;
    {
        const bool branch_taken_0x192674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192674) {
            ctx->pc = 0x192740u;
            goto label_192740;
        }
    }
    ctx->pc = 0x19267Cu;
    // 0x19267c: 0x0  nop
    ctx->pc = 0x19267cu;
    // NOP
label_192680:
    // 0x192680: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x192680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x192684: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x192684u;
    {
        const bool branch_taken_0x192684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192684) {
            ctx->pc = 0x1926E0u;
            goto label_1926e0;
        }
    }
    ctx->pc = 0x19268Cu;
    // 0x19268c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x19268cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x192690: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x192690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x192694: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192698: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x192698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19269c: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x19269cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1926a0: 0x24c643f0  addiu       $a2, $a2, 0x43F0
    ctx->pc = 0x1926a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17392));
    // 0x1926a4: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1926a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1926a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1926a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1926acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926b0: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1926b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1926b4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1926b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1926b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1926b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1926bc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1926bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1926c0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1926c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1926c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1926c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1926c8: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1926c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1926cc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1926ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1926d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1926d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1926d4: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1926D4u;
    SET_GPR_U32(ctx, 31, 0x1926DCu);
    ctx->pc = 0x1926D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1926D4u;
            // 0x1926d8: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926DCu; }
        if (ctx->pc != 0x1926DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1926DCu; }
        if (ctx->pc != 0x1926DCu) { return; }
    }
    ctx->pc = 0x1926DCu;
    // 0x1926dc: 0x0  nop
    ctx->pc = 0x1926dcu;
    // NOP
label_1926e0:
    // 0x1926e0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1926e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1926e4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1926e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1926e8: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1926E8u;
    {
        const bool branch_taken_0x1926e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1926e8) {
            ctx->pc = 0x192740u;
            goto label_192740;
        }
    }
    ctx->pc = 0x1926F0u;
    // 0x1926f0: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x1926f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1926f4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1926f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1926f8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1926f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1926fc: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x1926fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192700: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x192700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x192704: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x192704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192708: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192708u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19270c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19270cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x192710: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x192710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x192714: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x192714u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x192718: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x192718u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x19271c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19271cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x192720: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192724: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x192724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x192728: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19272c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19272cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x192730: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x192730u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x192734: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x192734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x192738: 0xc0651cc  jal         func_194730
    ctx->pc = 0x192738u;
    SET_GPR_U32(ctx, 31, 0x192740u);
    ctx->pc = 0x19273Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192738u;
            // 0x19273c: 0x8e060034  lw          $a2, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194730u;
    if (runtime->hasFunction(0x194730u)) {
        auto targetFn = runtime->lookupFunction(0x194730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192740u; }
        if (ctx->pc != 0x192740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_Big_0x194730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192740u; }
        if (ctx->pc != 0x192740u) { return; }
    }
    ctx->pc = 0x192740u;
label_192740:
    // 0x192740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192748: 0x3e00008  jr          $ra
    ctx->pc = 0x192748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192748u;
            // 0x19274c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192650u: goto label_192650;
            case 0x192660u: goto label_192660;
            case 0x192680u: goto label_192680;
            case 0x1926E0u: goto label_1926e0;
            case 0x192740u: goto label_192740;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192750u;
}
