#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: menuDisplay
// Address: 0x1059b0 - 0x105bc4
void menuDisplay_0x1059b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1059b0u;

    // 0x1059b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1059b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1059b4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1059b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1059b8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1059b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1059bc: 0x3c110014  lui         $s1, 0x14
    ctx->pc = 0x1059bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)20 << 16));
    // 0x1059c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1059c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1059c4: 0x3c120014  lui         $s2, 0x14
    ctx->pc = 0x1059c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20 << 16));
    // 0x1059c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1059c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1059cc: 0x26301698  addiu       $s0, $s1, 0x1698
    ctx->pc = 0x1059ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5784));
    // 0x1059d0: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x1059d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1059d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1059d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1059d8: 0xc6020570  lwc1        $f2, 0x570($s0)
    ctx->pc = 0x1059d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1059dc: 0xc6010568  lwc1        $f1, 0x568($s0)
    ctx->pc = 0x1059dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1059e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1059e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1059e4: 0xc6030574  lwc1        $f3, 0x574($s0)
    ctx->pc = 0x1059e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1059e8: 0x8e040550  lw          $a0, 0x550($s0)
    ctx->pc = 0x1059e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x1059ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1059ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1059f0: 0x8e050554  lw          $a1, 0x554($s0)
    ctx->pc = 0x1059f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x1059f4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1059f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1059f8: 0x8e060558  lw          $a2, 0x558($s0)
    ctx->pc = 0x1059f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x1059fc: 0x8e07055c  lw          $a3, 0x55C($s0)
    ctx->pc = 0x1059fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1372)));
    // 0x105a00: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105a00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x105a04: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x105a04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x105a08: 0x8e080560  lw          $t0, 0x560($s0)
    ctx->pc = 0x105a08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x105a0c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x105a10: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x105a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x105a14: 0xc040f80  jal         func_103E00
    ctx->pc = 0x105A14u;
    SET_GPR_U32(ctx, 31, 0x105A1Cu);
    ctx->pc = 0x105A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105A14u;
            // 0x105a18: 0x920b0578  lbu         $t3, 0x578($s0) (Delay Slot)
        SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103E00u;
    if (runtime->hasFunction(0x103E00u)) {
        auto targetFn = runtime->lookupFunction(0x103E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A1Cu; }
        if (ctx->pc != 0x105A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw24bitImage_0x103e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A1Cu; }
        if (ctx->pc != 0x105A1Cu) { return; }
    }
    ctx->pc = 0x105A1Cu;
    // 0x105a1c: 0x2643dfc0  addiu       $v1, $s2, -0x2040
    ctx->pc = 0x105a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959040));
    // 0x105a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x105a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105a24: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x105a24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x105a28: 0x14440018  bne         $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x105A28u;
    {
        const bool branch_taken_0x105a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x105A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A28u;
            // 0x105a2c: 0xc6020284  lwc1        $f2, 0x284($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a28) {
            ctx->pc = 0x105A8Cu;
            goto label_105a8c;
        }
    }
    ctx->pc = 0x105A30u;
    // 0x105a30: 0xc6000278  lwc1        $f0, 0x278($s0)
    ctx->pc = 0x105a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105a34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105a38: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x105a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105a3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x105a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x105a40: 0xc6030288  lwc1        $f3, 0x288($s0)
    ctx->pc = 0x105a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105a44: 0x3c027f00  lui         $v0, 0x7F00
    ctx->pc = 0x105a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32512 << 16));
    // 0x105a48: 0x920b028c  lbu         $t3, 0x28C($s0)
    ctx->pc = 0x105a48u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x105a4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x105a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x105a50: 0x8e080274  lw          $t0, 0x274($s0)
    ctx->pc = 0x105a50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x105a54: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x105a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x105a58: 0x344280ff  ori         $v0, $v0, 0x80FF
    ctx->pc = 0x105a58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33023u)));
    // 0x105a5c: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x105a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x105a60: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105a60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x105a64: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x105a64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x105a68: 0x8e050268  lw          $a1, 0x268($s0)
    ctx->pc = 0x105a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x105a6c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105a6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x105a70: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x105a70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x105a74: 0x8e06026c  lw          $a2, 0x26C($s0)
    ctx->pc = 0x105a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x105a78: 0x8e070270  lw          $a3, 0x270($s0)
    ctx->pc = 0x105a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x105a7c: 0xc041560  jal         func_105580
    ctx->pc = 0x105A7Cu;
    SET_GPR_U32(ctx, 31, 0x105A84u);
    ctx->pc = 0x105A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105A7Cu;
            // 0x105a80: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A84u; }
        if (ctx->pc != 0x105A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A84u; }
        if (ctx->pc != 0x105A84u) { return; }
    }
    ctx->pc = 0x105A84u;
    // 0x105a84: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x105A84u;
    {
        const bool branch_taken_0x105a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A84u;
            // 0x105a88: 0x2642dfc0  addiu       $v0, $s2, -0x2040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a84) {
            ctx->pc = 0x105AE4u;
            goto label_105ae4;
        }
    }
    ctx->pc = 0x105A8Cu;
label_105a8c:
    // 0x105a8c: 0xc6000278  lwc1        $f0, 0x278($s0)
    ctx->pc = 0x105a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105a90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105a94: 0xc601027c  lwc1        $f1, 0x27C($s0)
    ctx->pc = 0x105a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105a98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x105a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x105a9c: 0xc6030288  lwc1        $f3, 0x288($s0)
    ctx->pc = 0x105a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105aa0: 0x3c0220ff  lui         $v0, 0x20FF
    ctx->pc = 0x105aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8447 << 16));
    // 0x105aa4: 0x920b028c  lbu         $t3, 0x28C($s0)
    ctx->pc = 0x105aa4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x105aa8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x105aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x105aac: 0x8e080274  lw          $t0, 0x274($s0)
    ctx->pc = 0x105aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x105ab0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x105ab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x105ab4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x105ab4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x105ab8: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x105ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x105abc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105abcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x105ac0: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x105ac0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x105ac4: 0x8e050268  lw          $a1, 0x268($s0)
    ctx->pc = 0x105ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x105ac8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105ac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x105acc: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x105accu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x105ad0: 0x8e06026c  lw          $a2, 0x26C($s0)
    ctx->pc = 0x105ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x105ad4: 0x8e070270  lw          $a3, 0x270($s0)
    ctx->pc = 0x105ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x105ad8: 0xc041560  jal         func_105580
    ctx->pc = 0x105AD8u;
    SET_GPR_U32(ctx, 31, 0x105AE0u);
    ctx->pc = 0x105ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105AD8u;
            // 0x105adc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105AE0u; }
        if (ctx->pc != 0x105AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105AE0u; }
        if (ctx->pc != 0x105AE0u) { return; }
    }
    ctx->pc = 0x105AE0u;
    // 0x105ae0: 0x2642dfc0  addiu       $v0, $s2, -0x2040
    ctx->pc = 0x105ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959040));
label_105ae4:
    // 0x105ae4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x105ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105ae8: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x105ae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x105aec: 0x14640019  bne         $v1, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x105AECu;
    {
        const bool branch_taken_0x105aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x105AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105AECu;
            // 0x105af0: 0x26221698  addiu       $v0, $s1, 0x1698 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105aec) {
            ctx->pc = 0x105B54u;
            goto label_105b54;
        }
    }
    ctx->pc = 0x105AF4u;
    // 0x105af4: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x105af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
    // 0x105af8: 0xc4400300  lwc1        $f0, 0x300($v0)
    ctx->pc = 0x105af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105afc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105b00: 0xc442030c  lwc1        $f2, 0x30C($v0)
    ctx->pc = 0x105b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105b04: 0xc4410304  lwc1        $f1, 0x304($v0)
    ctx->pc = 0x105b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105b08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x105b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x105b0c: 0xc4430310  lwc1        $f3, 0x310($v0)
    ctx->pc = 0x105b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105b10: 0x904b0314  lbu         $t3, 0x314($v0)
    ctx->pc = 0x105b10u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 788)));
    // 0x105b14: 0x346380ff  ori         $v1, $v1, 0x80FF
    ctx->pc = 0x105b14u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)33023u)));
    // 0x105b18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x105b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x105b1c: 0x8c4802fc  lw          $t0, 0x2FC($v0)
    ctx->pc = 0x105b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 764)));
    // 0x105b20: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x105b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x105b24: 0x8c4402ec  lw          $a0, 0x2EC($v0)
    ctx->pc = 0x105b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 748)));
    // 0x105b28: 0x8c4502f0  lw          $a1, 0x2F0($v0)
    ctx->pc = 0x105b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 752)));
    // 0x105b2c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105b2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x105b30: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x105b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x105b34: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105b34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x105b38: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x105b38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x105b3c: 0x8c4602f4  lw          $a2, 0x2F4($v0)
    ctx->pc = 0x105b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 756)));
    // 0x105b40: 0x8c4702f8  lw          $a3, 0x2F8($v0)
    ctx->pc = 0x105b40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
    // 0x105b44: 0xc041560  jal         func_105580
    ctx->pc = 0x105B44u;
    SET_GPR_U32(ctx, 31, 0x105B4Cu);
    ctx->pc = 0x105B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105B44u;
            // 0x105b48: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B4Cu; }
        if (ctx->pc != 0x105B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B4Cu; }
        if (ctx->pc != 0x105B4Cu) { return; }
    }
    ctx->pc = 0x105B4Cu;
    // 0x105b4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x105B4Cu;
    {
        const bool branch_taken_0x105b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105B4Cu;
            // 0x105b50: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b4c) {
            ctx->pc = 0x105BB0u;
            goto label_105bb0;
        }
    }
    ctx->pc = 0x105B54u;
label_105b54:
    // 0x105b54: 0x3c0320ff  lui         $v1, 0x20FF
    ctx->pc = 0x105b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8447 << 16));
    // 0x105b58: 0xc4400300  lwc1        $f0, 0x300($v0)
    ctx->pc = 0x105b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105b5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x105b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x105b60: 0xc442030c  lwc1        $f2, 0x30C($v0)
    ctx->pc = 0x105b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105b64: 0xc4410304  lwc1        $f1, 0x304($v0)
    ctx->pc = 0x105b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105b68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x105b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x105b6c: 0xc4430310  lwc1        $f3, 0x310($v0)
    ctx->pc = 0x105b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105b70: 0x904b0314  lbu         $t3, 0x314($v0)
    ctx->pc = 0x105b70u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 788)));
    // 0x105b74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x105b74u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x105b78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x105b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x105b7c: 0x8c4802fc  lw          $t0, 0x2FC($v0)
    ctx->pc = 0x105b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 764)));
    // 0x105b80: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x105b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x105b84: 0x8c4402ec  lw          $a0, 0x2EC($v0)
    ctx->pc = 0x105b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 748)));
    // 0x105b88: 0x8c4502f0  lw          $a1, 0x2F0($v0)
    ctx->pc = 0x105b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 752)));
    // 0x105b8c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x105b90: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x105b90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x105b94: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x105b94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x105b98: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x105b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x105b9c: 0x8c4602f4  lw          $a2, 0x2F4($v0)
    ctx->pc = 0x105b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 756)));
    // 0x105ba0: 0x8c4702f8  lw          $a3, 0x2F8($v0)
    ctx->pc = 0x105ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
    // 0x105ba4: 0xc041560  jal         func_105580
    ctx->pc = 0x105BA4u;
    SET_GPR_U32(ctx, 31, 0x105BACu);
    ctx->pc = 0x105BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105BA4u;
            // 0x105ba8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105BACu; }
        if (ctx->pc != 0x105BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105BACu; }
        if (ctx->pc != 0x105BACu) { return; }
    }
    ctx->pc = 0x105BACu;
    // 0x105bac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x105bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_105bb0:
    // 0x105bb0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x105bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105bb4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x105bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105bb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x105bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x105BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105BBCu;
            // 0x105bc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105A8Cu: goto label_105a8c;
            case 0x105AE4u: goto label_105ae4;
            case 0x105B54u: goto label_105b54;
            case 0x105BB0u: goto label_105bb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x105BC4u;
}
