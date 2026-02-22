#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: tryDisplay
// Address: 0x107aa8 - 0x107e00
void tryDisplay_0x107aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x107aa8u;

    // 0x107aa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x107aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x107aac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x107aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x107ab0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x107ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x107ab4: 0x3c120014  lui         $s2, 0x14
    ctx->pc = 0x107ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20 << 16));
    // 0x107ab8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x107ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x107abc: 0x26511698  addiu       $s1, $s2, 0x1698
    ctx->pc = 0x107abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 5784));
    // 0x107ac0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x107ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x107ac4: 0xc6200564  lwc1        $f0, 0x564($s1)
    ctx->pc = 0x107ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107ac8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x107ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107acc: 0xc6220570  lwc1        $f2, 0x570($s1)
    ctx->pc = 0x107accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107ad0: 0xc6210568  lwc1        $f1, 0x568($s1)
    ctx->pc = 0x107ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107ad4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x107ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x107ad8: 0xc6230574  lwc1        $f3, 0x574($s1)
    ctx->pc = 0x107ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107adc: 0x8e240550  lw          $a0, 0x550($s1)
    ctx->pc = 0x107adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x107ae0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x107ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107ae4: 0x8e250554  lw          $a1, 0x554($s1)
    ctx->pc = 0x107ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    // 0x107ae8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x107ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107aec: 0x8e260558  lw          $a2, 0x558($s1)
    ctx->pc = 0x107aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x107af0: 0x8e27055c  lw          $a3, 0x55C($s1)
    ctx->pc = 0x107af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1372)));
    // 0x107af4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107af4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x107af8: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x107af8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x107afc: 0x8e280560  lw          $t0, 0x560($s1)
    ctx->pc = 0x107afcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x107b00: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107b00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107b04: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x107b04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x107b08: 0xc040f80  jal         func_103E00
    ctx->pc = 0x107B08u;
    SET_GPR_U32(ctx, 31, 0x107B10u);
    ctx->pc = 0x107B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107B08u;
            // 0x107b0c: 0x922b0578  lbu         $t3, 0x578($s1) (Delay Slot)
        SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103E00u;
    if (runtime->hasFunction(0x103E00u)) {
        auto targetFn = runtime->lookupFunction(0x103E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107B10u; }
        if (ctx->pc != 0x107B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw24bitImage_0x103e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107B10u; }
        if (ctx->pc != 0x107B10u) { return; }
    }
    ctx->pc = 0x107B10u;
    // 0x107b10: 0x87828110  lh          $v0, -0x7EF0($gp)
    ctx->pc = 0x107b10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x107b14: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x107B14u;
    {
        const bool branch_taken_0x107b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107B14u;
            // 0x107b18: 0xc62205b4  lwc1        $f2, 0x5B4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b14) {
            ctx->pc = 0x107C20u;
            goto label_107c20;
        }
    }
    ctx->pc = 0x107B1Cu;
    // 0x107b1c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x107b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107b20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x107b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107b24: 0xc62105ac  lwc1        $f1, 0x5AC($s1)
    ctx->pc = 0x107b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107b28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x107b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x107b2c: 0xc62305b8  lwc1        $f3, 0x5B8($s1)
    ctx->pc = 0x107b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107b30: 0x3c107f00  lui         $s0, 0x7F00
    ctx->pc = 0x107b30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32512 << 16));
    // 0x107b34: 0x922b05bc  lbu         $t3, 0x5BC($s1)
    ctx->pc = 0x107b34u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1468)));
    // 0x107b38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x107b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107b3c: 0x361080ff  ori         $s0, $s0, 0x80FF
    ctx->pc = 0x107b3cu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)33023u)));
    // 0x107b40: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x107b40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107b44: 0x8e240594  lw          $a0, 0x594($s1)
    ctx->pc = 0x107b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1428)));
    // 0x107b48: 0x8e250598  lw          $a1, 0x598($s1)
    ctx->pc = 0x107b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1432)));
    // 0x107b4c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107b4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x107b50: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x107b50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x107b54: 0x8e26059c  lw          $a2, 0x59C($s1)
    ctx->pc = 0x107b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1436)));
    // 0x107b58: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107b58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107b5c: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x107b5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x107b60: 0x8e2705a0  lw          $a3, 0x5A0($s1)
    ctx->pc = 0x107b60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x107b64: 0x8e2805a4  lw          $t0, 0x5A4($s1)
    ctx->pc = 0x107b64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1444)));
    // 0x107b68: 0xc041560  jal         func_105580
    ctx->pc = 0x107B68u;
    SET_GPR_U32(ctx, 31, 0x107B70u);
    ctx->pc = 0x107B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107B68u;
            // 0x107b6c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107B70u; }
        if (ctx->pc != 0x107B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107B70u; }
        if (ctx->pc != 0x107B70u) { return; }
    }
    ctx->pc = 0x107B70u;
    // 0x107b70: 0xc6200388  lwc1        $f0, 0x388($s1)
    ctx->pc = 0x107b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107b74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x107b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107b78: 0xc6220394  lwc1        $f2, 0x394($s1)
    ctx->pc = 0x107b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107b7c: 0xc621038c  lwc1        $f1, 0x38C($s1)
    ctx->pc = 0x107b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107b80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x107b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x107b84: 0xc6230398  lwc1        $f3, 0x398($s1)
    ctx->pc = 0x107b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107b88: 0x922b039c  lbu         $t3, 0x39C($s1)
    ctx->pc = 0x107b88u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 924)));
    // 0x107b8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x107b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107b90: 0x8e240374  lw          $a0, 0x374($s1)
    ctx->pc = 0x107b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x107b94: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x107b94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107b98: 0x8e250378  lw          $a1, 0x378($s1)
    ctx->pc = 0x107b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 888)));
    // 0x107b9c: 0x8e26037c  lw          $a2, 0x37C($s1)
    ctx->pc = 0x107b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
    // 0x107ba0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107ba0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x107ba4: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x107ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x107ba8: 0x8e270380  lw          $a3, 0x380($s1)
    ctx->pc = 0x107ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x107bac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107bacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107bb0: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x107bb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x107bb4: 0x8e280384  lw          $t0, 0x384($s1)
    ctx->pc = 0x107bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
    // 0x107bb8: 0xc041560  jal         func_105580
    ctx->pc = 0x107BB8u;
    SET_GPR_U32(ctx, 31, 0x107BC0u);
    ctx->pc = 0x107BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107BB8u;
            // 0x107bbc: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107BC0u; }
        if (ctx->pc != 0x107BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107BC0u; }
        if (ctx->pc != 0x107BC0u) { return; }
    }
    ctx->pc = 0x107BC0u;
    // 0x107bc0: 0xc6200234  lwc1        $f0, 0x234($s1)
    ctx->pc = 0x107bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107bc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x107bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107bc8: 0xc6220240  lwc1        $f2, 0x240($s1)
    ctx->pc = 0x107bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107bcc: 0xc6210238  lwc1        $f1, 0x238($s1)
    ctx->pc = 0x107bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107bd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x107bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x107bd4: 0xc6230244  lwc1        $f3, 0x244($s1)
    ctx->pc = 0x107bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107bd8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x107bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x107bdc: 0x922b0248  lbu         $t3, 0x248($s1)
    ctx->pc = 0x107bdcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x107be0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x107be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107be4: 0x8e280230  lw          $t0, 0x230($s1)
    ctx->pc = 0x107be4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x107be8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x107be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107bec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107becu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x107bf0: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x107bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x107bf4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107bf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x107bf8: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x107bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x107bfc: 0x8e250224  lw          $a1, 0x224($s1)
    ctx->pc = 0x107bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x107c00: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107c00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107c04: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x107c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x107c08: 0x8e260228  lw          $a2, 0x228($s1)
    ctx->pc = 0x107c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x107c0c: 0x8e27022c  lw          $a3, 0x22C($s1)
    ctx->pc = 0x107c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x107c10: 0xc041560  jal         func_105580
    ctx->pc = 0x107C10u;
    SET_GPR_U32(ctx, 31, 0x107C18u);
    ctx->pc = 0x107C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107C10u;
            // 0x107c14: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C18u; }
        if (ctx->pc != 0x107C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C18u; }
        if (ctx->pc != 0x107C18u) { return; }
    }
    ctx->pc = 0x107C18u;
    // 0x107c18: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x107C18u;
    {
        const bool branch_taken_0x107c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C18u;
            // 0x107c1c: 0x87838110  lh          $v1, -0x7EF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c18) {
            ctx->pc = 0x107C78u;
            goto label_107c78;
        }
    }
    ctx->pc = 0x107C20u;
label_107c20:
    // 0x107c20: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x107c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107c24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x107c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107c28: 0xc62105ac  lwc1        $f1, 0x5AC($s1)
    ctx->pc = 0x107c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107c2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x107c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x107c30: 0xc62305b8  lwc1        $f3, 0x5B8($s1)
    ctx->pc = 0x107c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107c34: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x107c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x107c38: 0x922b05bc  lbu         $t3, 0x5BC($s1)
    ctx->pc = 0x107c38u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1468)));
    // 0x107c3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x107c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107c40: 0x8e2805a4  lw          $t0, 0x5A4($s1)
    ctx->pc = 0x107c40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1444)));
    // 0x107c44: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x107c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107c48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107c48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x107c4c: 0x8e240594  lw          $a0, 0x594($s1)
    ctx->pc = 0x107c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1428)));
    // 0x107c50: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107c50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x107c54: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x107c54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x107c58: 0x8e250598  lw          $a1, 0x598($s1)
    ctx->pc = 0x107c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1432)));
    // 0x107c5c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107c5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107c60: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x107c60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x107c64: 0x8e26059c  lw          $a2, 0x59C($s1)
    ctx->pc = 0x107c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1436)));
    // 0x107c68: 0x8e2705a0  lw          $a3, 0x5A0($s1)
    ctx->pc = 0x107c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x107c6c: 0xc041560  jal         func_105580
    ctx->pc = 0x107C6Cu;
    SET_GPR_U32(ctx, 31, 0x107C74u);
    ctx->pc = 0x107C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107C6Cu;
            // 0x107c70: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C74u; }
        if (ctx->pc != 0x107C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107C74u; }
        if (ctx->pc != 0x107C74u) { return; }
    }
    ctx->pc = 0x107C74u;
    // 0x107c74: 0x87838110  lh          $v1, -0x7EF0($gp)
    ctx->pc = 0x107c74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934800)));
label_107c78:
    // 0x107c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107c7c: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x107C7Cu;
    {
        const bool branch_taken_0x107c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C7Cu;
            // 0x107c80: 0x26421698  addiu       $v0, $s2, 0x1698 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c7c) {
            ctx->pc = 0x107D90u;
            goto label_107d90;
        }
    }
    ctx->pc = 0x107C84u;
    // 0x107c84: 0x26501698  addiu       $s0, $s2, 0x1698
    ctx->pc = 0x107c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5784));
    // 0x107c88: 0x3c117f00  lui         $s1, 0x7F00
    ctx->pc = 0x107c88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32512 << 16));
    // 0x107c8c: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x107c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107c90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x107c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107c94: 0xc602030c  lwc1        $f2, 0x30C($s0)
    ctx->pc = 0x107c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107c98: 0xc6010304  lwc1        $f1, 0x304($s0)
    ctx->pc = 0x107c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107c9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x107c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x107ca0: 0xc6030310  lwc1        $f3, 0x310($s0)
    ctx->pc = 0x107ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107ca4: 0x920b0314  lbu         $t3, 0x314($s0)
    ctx->pc = 0x107ca4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x107ca8: 0x363180ff  ori         $s1, $s1, 0x80FF
    ctx->pc = 0x107ca8u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)33023u)));
    // 0x107cac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x107cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107cb0: 0x8e0402ec  lw          $a0, 0x2EC($s0)
    ctx->pc = 0x107cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
    // 0x107cb4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x107cb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107cb8: 0x8e0502f0  lw          $a1, 0x2F0($s0)
    ctx->pc = 0x107cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x107cbc: 0x8e0602f4  lw          $a2, 0x2F4($s0)
    ctx->pc = 0x107cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x107cc0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107cc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x107cc4: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x107cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x107cc8: 0x8e0702f8  lw          $a3, 0x2F8($s0)
    ctx->pc = 0x107cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x107ccc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107cccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107cd0: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x107cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x107cd4: 0x8e0802fc  lw          $t0, 0x2FC($s0)
    ctx->pc = 0x107cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x107cd8: 0xc041560  jal         func_105580
    ctx->pc = 0x107CD8u;
    SET_GPR_U32(ctx, 31, 0x107CE0u);
    ctx->pc = 0x107CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107CD8u;
            // 0x107cdc: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CE0u; }
        if (ctx->pc != 0x107CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107CE0u; }
        if (ctx->pc != 0x107CE0u) { return; }
    }
    ctx->pc = 0x107CE0u;
    // 0x107ce0: 0xc6000388  lwc1        $f0, 0x388($s0)
    ctx->pc = 0x107ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107ce4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x107ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107ce8: 0xc6020394  lwc1        $f2, 0x394($s0)
    ctx->pc = 0x107ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107cec: 0xc601038c  lwc1        $f1, 0x38C($s0)
    ctx->pc = 0x107cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107cf0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x107cf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x107cf4: 0xc6030398  lwc1        $f3, 0x398($s0)
    ctx->pc = 0x107cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107cf8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x107cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x107cfc: 0x920b039c  lbu         $t3, 0x39C($s0)
    ctx->pc = 0x107cfcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 924)));
    // 0x107d00: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x107d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107d04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107d04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x107d08: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x107d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107d0c: 0x8e040374  lw          $a0, 0x374($s0)
    ctx->pc = 0x107d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x107d10: 0x8e050378  lw          $a1, 0x378($s0)
    ctx->pc = 0x107d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x107d14: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107d14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x107d18: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x107d18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x107d1c: 0x8e06037c  lw          $a2, 0x37C($s0)
    ctx->pc = 0x107d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x107d20: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107d20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107d24: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x107d24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x107d28: 0x8e070380  lw          $a3, 0x380($s0)
    ctx->pc = 0x107d28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x107d2c: 0x8e080384  lw          $t0, 0x384($s0)
    ctx->pc = 0x107d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
    // 0x107d30: 0xc041560  jal         func_105580
    ctx->pc = 0x107D30u;
    SET_GPR_U32(ctx, 31, 0x107D38u);
    ctx->pc = 0x107D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107D30u;
            // 0x107d34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D38u; }
        if (ctx->pc != 0x107D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D38u; }
        if (ctx->pc != 0x107D38u) { return; }
    }
    ctx->pc = 0x107D38u;
    // 0x107d38: 0xc6000234  lwc1        $f0, 0x234($s0)
    ctx->pc = 0x107d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x107d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107d40: 0xc6020240  lwc1        $f2, 0x240($s0)
    ctx->pc = 0x107d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107d44: 0xc6010238  lwc1        $f1, 0x238($s0)
    ctx->pc = 0x107d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107d48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x107d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x107d4c: 0xc6030244  lwc1        $f3, 0x244($s0)
    ctx->pc = 0x107d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107d50: 0x920b0248  lbu         $t3, 0x248($s0)
    ctx->pc = 0x107d50u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x107d54: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x107d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107d58: 0x8e080230  lw          $t0, 0x230($s0)
    ctx->pc = 0x107d58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x107d5c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x107d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107d60: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x107d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x107d64: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x107d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x107d68: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107d68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x107d6c: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x107d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x107d70: 0x8e060228  lw          $a2, 0x228($s0)
    ctx->pc = 0x107d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x107d74: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107d74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107d78: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x107d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x107d7c: 0x8e07022c  lw          $a3, 0x22C($s0)
    ctx->pc = 0x107d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x107d80: 0xc041560  jal         func_105580
    ctx->pc = 0x107D80u;
    SET_GPR_U32(ctx, 31, 0x107D88u);
    ctx->pc = 0x107D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107D80u;
            // 0x107d84: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D88u; }
        if (ctx->pc != 0x107D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107D88u; }
        if (ctx->pc != 0x107D88u) { return; }
    }
    ctx->pc = 0x107D88u;
    // 0x107d88: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x107D88u;
    {
        const bool branch_taken_0x107d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D88u;
            // 0x107d8c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d88) {
            ctx->pc = 0x107DECu;
            goto label_107dec;
        }
    }
    ctx->pc = 0x107D90u;
label_107d90:
    // 0x107d90: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x107d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x107d94: 0xc4400300  lwc1        $f0, 0x300($v0)
    ctx->pc = 0x107d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107d98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x107d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107d9c: 0xc442030c  lwc1        $f2, 0x30C($v0)
    ctx->pc = 0x107d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107da0: 0xc4410304  lwc1        $f1, 0x304($v0)
    ctx->pc = 0x107da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107da4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x107da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x107da8: 0xc4430310  lwc1        $f3, 0x310($v0)
    ctx->pc = 0x107da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107dac: 0x904b0314  lbu         $t3, 0x314($v0)
    ctx->pc = 0x107dacu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 788)));
    // 0x107db0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x107db0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x107db4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x107db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107db8: 0x8c4802fc  lw          $t0, 0x2FC($v0)
    ctx->pc = 0x107db8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 764)));
    // 0x107dbc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x107dbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107dc0: 0x8c4402ec  lw          $a0, 0x2EC($v0)
    ctx->pc = 0x107dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 748)));
    // 0x107dc4: 0x8c4502f0  lw          $a1, 0x2F0($v0)
    ctx->pc = 0x107dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 752)));
    // 0x107dc8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107dc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x107dcc: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x107dccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x107dd0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107dd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107dd4: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x107dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x107dd8: 0x8c4602f4  lw          $a2, 0x2F4($v0)
    ctx->pc = 0x107dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 756)));
    // 0x107ddc: 0x8c4702f8  lw          $a3, 0x2F8($v0)
    ctx->pc = 0x107ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
    // 0x107de0: 0xc041560  jal         func_105580
    ctx->pc = 0x107DE0u;
    SET_GPR_U32(ctx, 31, 0x107DE8u);
    ctx->pc = 0x107DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107DE0u;
            // 0x107de4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107DE8u; }
        if (ctx->pc != 0x107DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107DE8u; }
        if (ctx->pc != 0x107DE8u) { return; }
    }
    ctx->pc = 0x107DE8u;
    // 0x107de8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x107de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_107dec:
    // 0x107dec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x107decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107df0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x107df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107df4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107df8: 0x3e00008  jr          $ra
    ctx->pc = 0x107DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107DF8u;
            // 0x107dfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107C20u: goto label_107c20;
            case 0x107C78u: goto label_107c78;
            case 0x107D90u: goto label_107d90;
            case 0x107DECu: goto label_107dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107E00u;
}
