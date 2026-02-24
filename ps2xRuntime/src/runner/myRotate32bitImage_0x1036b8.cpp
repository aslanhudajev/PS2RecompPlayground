#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: myRotate32bitImage
// Address: 0x1036b8 - 0x103b5c
void myRotate32bitImage_0x1036b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("myRotate32bitImage_0x1036b8");
#endif

    ctx->pc = 0x1036b8u;

    // 0x1036b8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1036b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1036bc: 0x8f8282b4  lw          $v0, -0x7D4C($gp)
    ctx->pc = 0x1036bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1036c0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1036c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1036c4: 0x8fbe00d8  lw          $fp, 0xD8($sp)
    ctx->pc = 0x1036c4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1036c8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1036c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1036cc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1036ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1036d0: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1036d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036d4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1036d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1036d8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1036d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1036dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1036e0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1036e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036e4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1036e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1036e8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1036e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1036ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1036f0: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1036f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1036f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1036f8: 0x1ef100  sll         $fp, $fp, 4
    ctx->pc = 0x1036f8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1036fc: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1036fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x103700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x103700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103704: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x103704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x103708: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x103708u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x10370c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x103710: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x103710u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x103714: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x103714u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x103718: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x103718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x10371c: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x10371cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x103720: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103720u;
    {
        const bool branch_taken_0x103720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x103724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103720u;
            // 0x103724: 0x8fb200d0  lw          $s2, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103720) {
            ctx->pc = 0x103738u;
            goto label_103738;
        }
    }
    ctx->pc = 0x103728u;
    // 0x103728: 0x24052b00  addiu       $a1, $zero, 0x2B00
    ctx->pc = 0x103728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11008));
    // 0x10372c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x10372cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103730: 0xc040c8c  jal         func_103230
    ctx->pc = 0x103730u;
    SET_GPR_U32(ctx, 31, 0x103738u);
    ctx->pc = 0x103734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103730u;
            // 0x103734: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103230u;
    if (runtime->hasFunction(0x103230u)) {
        auto targetFn = runtime->lookupFunction(0x103230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103738u; }
        if (ctx->pc != 0x103738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        load32bitImage_0x103230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103738u; }
        if (ctx->pc != 0x103738u) { return; }
    }
    ctx->pc = 0x103738u;
label_103738:
    // 0x103738: 0x8f8282b8  lw          $v0, -0x7D48($gp)
    ctx->pc = 0x103738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x10373c: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x10373cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103740: 0xaf9082b4  sw          $s0, -0x7D4C($gp)
    ctx->pc = 0x103740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 16));
    // 0x103744: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x103744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x103748: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x103748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10374c: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x10374cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)5u)));
    // 0x103750: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x103750u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x103754: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x103754u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x103758: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x103758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10375c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x10375cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x103760: 0xfc450020  sd          $a1, 0x20($v0)
    ctx->pc = 0x103760u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 5));
    // 0x103764: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x103764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103768: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x103768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x10376c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10376cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103770: 0xfc430038  sd          $v1, 0x38($v0)
    ctx->pc = 0x103770u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x103774: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x103774u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x103778: 0xfc460028  sd          $a2, 0x28($v0)
    ctx->pc = 0x103778u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 6));
    // 0x10377c: 0x17b843  sra         $s7, $s7, 1
    ctx->pc = 0x10377cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 23), 1));
    // 0x103780: 0xc040a92  jal         func_102A48
    ctx->pc = 0x103780u;
    SET_GPR_U32(ctx, 31, 0x103788u);
    ctx->pc = 0x103784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103780u;
            // 0x103784: 0xfc400030  sd          $zero, 0x30($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A48u;
    if (runtime->hasFunction(0x102A48u)) {
        auto targetFn = runtime->lookupFunction(0x102A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103788u; }
        if (ctx->pc != 0x103788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103788u; }
        if (ctx->pc != 0x103788u) { return; }
    }
    ctx->pc = 0x103788u;
    // 0x103788: 0x3d32023  subu        $a0, $fp, $s3
    ctx->pc = 0x103788u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x10378c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10378cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103790: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x103790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x103794: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x103794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103798: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x103798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10379c: 0xc7b70004  lwc1        $f23, 0x4($sp)
    ctx->pc = 0x10379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1037a0: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x1037a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x1037a4: 0xc040a92  jal         func_102A48
    ctx->pc = 0x1037A4u;
    SET_GPR_U32(ctx, 31, 0x1037ACu);
    ctx->pc = 0x1037A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1037A4u;
            // 0x1037a8: 0x3d39821  addu        $s3, $fp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A48u;
    if (runtime->hasFunction(0x102A48u)) {
        auto targetFn = runtime->lookupFunction(0x102A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1037ACu; }
        if (ctx->pc != 0x1037ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1037ACu; }
        if (ctx->pc != 0x1037ACu) { return; }
    }
    ctx->pc = 0x1037ACu;
    // 0x1037ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1037acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1037b0: 0x26c3003f  addiu       $v1, $s6, 0x3F
    ctx->pc = 0x1037b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 63));
    // 0x1037b4: 0x96202a  slt         $a0, $a0, $s6
    ctx->pc = 0x1037b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1037b8: 0x2c4180b  movn        $v1, $s6, $a0
    ctx->pc = 0x1037b8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 22));
    // 0x1037bc: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x1037bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x1037c0: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1037c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1037c4: 0x1087b8  dsll        $s0, $s0, 30
    ctx->pc = 0x1037c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 30);
    // 0x1037c8: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1037c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1037cc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1037ccu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x1037d0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1037d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1037d4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1037d4u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x1037d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1037d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1037dc: 0x8f9182b8  lw          $s1, -0x7D48($gp)
    ctx->pc = 0x1037dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1037e0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x1037e0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 16)));
    // 0x1037e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1037e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1037e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1037e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1037ec: 0x34422b00  ori         $v0, $v0, 0x2B00
    ctx->pc = 0x1037ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)11008u)));
    // 0x1037f0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1037f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1037f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1037f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1037f8: 0x24050154  addiu       $a1, $zero, 0x154
    ctx->pc = 0x1037f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x1037fc: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1037fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x103800: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x103800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x103804: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x103804u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x103808: 0x171023  negu        $v0, $s7
    ctx->pc = 0x103808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x10380c: 0xfe240048  sd          $a0, 0x48($s1)
    ctx->pc = 0x10380cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 4));
    // 0x103810: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x103810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x103814: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x103814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x103818: 0xfe250050  sd          $a1, 0x50($s1)
    ctx->pc = 0x103818u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 5));
    // 0x10381c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10381cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103820: 0xfe260060  sd          $a2, 0x60($s1)
    ctx->pc = 0x103820u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 6));
    // 0x103824: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x103824u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x103828: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x103828u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x10382c: 0x35298001  ori         $t1, $t1, 0x8001
    ctx->pc = 0x10382cu;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)32769u)));
    // 0x103830: 0xfe270068  sd          $a3, 0x68($s1)
    ctx->pc = 0x103830u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 7));
    // 0x103834: 0x3c0a4343  lui         $t2, 0x4343
    ctx->pc = 0x103834u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17219 << 16));
    // 0x103838: 0x354a4343  ori         $t2, $t2, 0x4343
    ctx->pc = 0x103838u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)17219u)));
    // 0x10383c: 0xfe200058  sd          $zero, 0x58($s1)
    ctx->pc = 0x10383cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 0));
    // 0x103840: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x103840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x103844: 0x16b100  sll         $s6, $s6, 4
    ctx->pc = 0x103844u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x103848: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x103848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x10384c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x103850: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x103850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x103854: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x103854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x103858: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x103858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10385c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x10385cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x103860: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x103860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x103864: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x103864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x103868: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x103868u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x10386c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10386cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x103870: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x103870u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x103874: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x103874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x103878: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x103878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10387c: 0xfe280078  sd          $t0, 0x78($s1)
    ctx->pc = 0x10387cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 8));
    // 0x103880: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x103880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x103884: 0xfe290080  sd          $t1, 0x80($s1)
    ctx->pc = 0x103884u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 9));
    // 0x103888: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x103888u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x10388c: 0xc047420  jal         func_11D080
    ctx->pc = 0x10388Cu;
    SET_GPR_U32(ctx, 31, 0x103894u);
    ctx->pc = 0x103890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10388Cu;
            // 0x103890: 0xfe2a0088  sd          $t2, 0x88($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D080u;
    if (runtime->hasFunction(0x11D080u)) {
        auto targetFn = runtime->lookupFunction(0x11D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103894u; }
        if (ctx->pc != 0x103894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103894u; }
        if (ctx->pc != 0x103894u) { return; }
    }
    ctx->pc = 0x103894u;
    // 0x103894: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x103894u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x103898: 0xc04745a  jal         func_11D168
    ctx->pc = 0x103898u;
    SET_GPR_U32(ctx, 31, 0x1038A0u);
    ctx->pc = 0x10389Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103898u;
            // 0x10389c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D168u;
    if (runtime->hasFunction(0x11D168u)) {
        auto targetFn = runtime->lookupFunction(0x11D168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038A0u; }
        if (ctx->pc != 0x1038A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038A0u; }
        if (ctx->pc != 0x1038A0u) { return; }
    }
    ctx->pc = 0x1038A0u;
    // 0x1038a0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1038a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1038a4: 0x8f9282b8  lw          $s2, -0x7D48($gp)
    ctx->pc = 0x1038a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1038a8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1038a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1038ac: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x1038acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x1038b0: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1038b0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1038b4: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1038b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1038b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1038b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1038bc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1038bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1038c0: 0xc04745a  jal         func_11D168
    ctx->pc = 0x1038C0u;
    SET_GPR_U32(ctx, 31, 0x1038C8u);
    ctx->pc = 0x1038C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1038C0u;
            // 0x1038c4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D168u;
    if (runtime->hasFunction(0x11D168u)) {
        auto targetFn = runtime->lookupFunction(0x11D168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038C8u; }
        if (ctx->pc != 0x1038C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038C8u; }
        if (ctx->pc != 0x1038C8u) { return; }
    }
    ctx->pc = 0x1038C8u;
    // 0x1038c8: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x1038c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1038cc: 0xc047420  jal         func_11D080
    ctx->pc = 0x1038CCu;
    SET_GPR_U32(ctx, 31, 0x1038D4u);
    ctx->pc = 0x1038D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1038CCu;
            // 0x1038d0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D080u;
    if (runtime->hasFunction(0x11D080u)) {
        auto targetFn = runtime->lookupFunction(0x11D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038D4u; }
        if (ctx->pc != 0x1038D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038D4u; }
        if (ctx->pc != 0x1038D4u) { return; }
    }
    ctx->pc = 0x1038D4u;
    // 0x1038d4: 0x4493b800  mtc1        $s3, $f23
    ctx->pc = 0x1038d4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1038d8: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x1038d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x1038dc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1038dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1038e0: 0x8f9082b8  lw          $s0, -0x7D48($gp)
    ctx->pc = 0x1038e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1038e4: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x1038e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x1038e8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1038e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1038ec: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x1038ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1038f0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1038f0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1038f4: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1038f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1038f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1038f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1038fc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1038fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103900: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x103900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x103904: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x103904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x103908: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x103908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x10390c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x10390cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x103910: 0xae1600b0  sw          $s6, 0xB0($s0)
    ctx->pc = 0x103910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 22));
    // 0x103914: 0xc047420  jal         func_11D080
    ctx->pc = 0x103914u;
    SET_GPR_U32(ctx, 31, 0x10391Cu);
    ctx->pc = 0x103918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103914u;
            // 0x103918: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D080u;
    if (runtime->hasFunction(0x11D080u)) {
        auto targetFn = runtime->lookupFunction(0x11D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10391Cu; }
        if (ctx->pc != 0x10391Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10391Cu; }
        if (ctx->pc != 0x10391Cu) { return; }
    }
    ctx->pc = 0x10391Cu;
    // 0x10391c: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x10391cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x103920: 0xc04745a  jal         func_11D168
    ctx->pc = 0x103920u;
    SET_GPR_U32(ctx, 31, 0x103928u);
    ctx->pc = 0x103924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103920u;
            // 0x103924: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D168u;
    if (runtime->hasFunction(0x11D168u)) {
        auto targetFn = runtime->lookupFunction(0x11D168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103928u; }
        if (ctx->pc != 0x103928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103928u; }
        if (ctx->pc != 0x103928u) { return; }
    }
    ctx->pc = 0x103928u;
    // 0x103928: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x103928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x10392c: 0x8f9182b8  lw          $s1, -0x7D48($gp)
    ctx->pc = 0x10392cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103930: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x103930u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x103934: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x103934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x103938: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x103938u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x10393c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10393cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x103940: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x103940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x103944: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x103944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x103948: 0xc04745a  jal         func_11D168
    ctx->pc = 0x103948u;
    SET_GPR_U32(ctx, 31, 0x103950u);
    ctx->pc = 0x10394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103948u;
            // 0x10394c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D168u;
    if (runtime->hasFunction(0x11D168u)) {
        auto targetFn = runtime->lookupFunction(0x11D168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103950u; }
        if (ctx->pc != 0x103950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103950u; }
        if (ctx->pc != 0x103950u) { return; }
    }
    ctx->pc = 0x103950u;
    // 0x103950: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x103950u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x103954: 0xc047420  jal         func_11D080
    ctx->pc = 0x103954u;
    SET_GPR_U32(ctx, 31, 0x10395Cu);
    ctx->pc = 0x103958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103954u;
            // 0x103958: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D080u;
    if (runtime->hasFunction(0x11D080u)) {
        auto targetFn = runtime->lookupFunction(0x11D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10395Cu; }
        if (ctx->pc != 0x10395Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10395Cu; }
        if (ctx->pc != 0x10395Cu) { return; }
    }
    ctx->pc = 0x10395Cu;
    // 0x10395c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x10395cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x103960: 0x8f9082b8  lw          $s0, -0x7D48($gp)
    ctx->pc = 0x103960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103964: 0xc7b70004  lwc1        $f23, 0x4($sp)
    ctx->pc = 0x103964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x103968: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x103968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x10396c: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x10396cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x103970: 0x260300c0  addiu       $v1, $s0, 0xC0
    ctx->pc = 0x103970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x103974: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x103974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x103978: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x103978u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x10397c: 0x4497b000  mtc1        $s7, $f22
    ctx->pc = 0x10397cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x103980: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x103980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x103984: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x103984u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x103988: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x103988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10398c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x10398cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103990: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x103990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103994: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x103994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x103998: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x103998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x10399c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x10399cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1039a0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1039a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1039a4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1039a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1039a8: 0xc047420  jal         func_11D080
    ctx->pc = 0x1039A8u;
    SET_GPR_U32(ctx, 31, 0x1039B0u);
    ctx->pc = 0x1039ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1039A8u;
            // 0x1039ac: 0xae0400d4  sw          $a0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D080u;
    if (runtime->hasFunction(0x11D080u)) {
        auto targetFn = runtime->lookupFunction(0x11D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039B0u; }
        if (ctx->pc != 0x1039B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039B0u; }
        if (ctx->pc != 0x1039B0u) { return; }
    }
    ctx->pc = 0x1039B0u;
    // 0x1039b0: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x1039b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1039b4: 0xc04745a  jal         func_11D168
    ctx->pc = 0x1039B4u;
    SET_GPR_U32(ctx, 31, 0x1039BCu);
    ctx->pc = 0x1039B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1039B4u;
            // 0x1039b8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D168u;
    if (runtime->hasFunction(0x11D168u)) {
        auto targetFn = runtime->lookupFunction(0x11D168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039BCu; }
        if (ctx->pc != 0x1039BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039BCu; }
        if (ctx->pc != 0x1039BCu) { return; }
    }
    ctx->pc = 0x1039BCu;
    // 0x1039bc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1039bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1039c0: 0x8f9182b8  lw          $s1, -0x7D48($gp)
    ctx->pc = 0x1039c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1039c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1039c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1039c8: 0x263100e0  addiu       $s1, $s1, 0xE0
    ctx->pc = 0x1039c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x1039cc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1039ccu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1039d0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1039d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1039d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1039d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1039d8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1039d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1039dc: 0xc04745a  jal         func_11D168
    ctx->pc = 0x1039DCu;
    SET_GPR_U32(ctx, 31, 0x1039E4u);
    ctx->pc = 0x1039E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1039DCu;
            // 0x1039e0: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D168u;
    if (runtime->hasFunction(0x11D168u)) {
        auto targetFn = runtime->lookupFunction(0x11D168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039E4u; }
        if (ctx->pc != 0x1039E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039E4u; }
        if (ctx->pc != 0x1039E4u) { return; }
    }
    ctx->pc = 0x1039E4u;
    // 0x1039e4: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x1039e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1039e8: 0xc047420  jal         func_11D080
    ctx->pc = 0x1039E8u;
    SET_GPR_U32(ctx, 31, 0x1039F0u);
    ctx->pc = 0x1039ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1039E8u;
            // 0x1039ec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D080u;
    if (runtime->hasFunction(0x11D080u)) {
        auto targetFn = runtime->lookupFunction(0x11D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039F0u; }
        if (ctx->pc != 0x1039F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1039F0u; }
        if (ctx->pc != 0x1039F0u) { return; }
    }
    ctx->pc = 0x1039F0u;
    // 0x1039f0: 0x4493b800  mtc1        $s3, $f23
    ctx->pc = 0x1039f0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1039f4: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x1039f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x1039f8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1039f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1039fc: 0x8f9082b8  lw          $s0, -0x7D48($gp)
    ctx->pc = 0x1039fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103a00: 0x152103  sra         $a0, $s5, 4
    ctx->pc = 0x103a00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 21), 4));
    // 0x103a04: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x103a04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x103a08: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x103a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x103a0c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x103a0cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x103a10: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x103a10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x103a14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x103a14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x103a18: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x103a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103a1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x103a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103a20: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x103a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x103a24: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x103a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x103a28: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x103a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x103a2c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x103a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x103a30: 0xae1600f0  sw          $s6, 0xF0($s0)
    ctx->pc = 0x103a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 22));
    // 0x103a34: 0xc047420  jal         func_11D080
    ctx->pc = 0x103A34u;
    SET_GPR_U32(ctx, 31, 0x103A3Cu);
    ctx->pc = 0x103A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103A34u;
            // 0x103a38: 0xae0400f4  sw          $a0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D080u;
    if (runtime->hasFunction(0x11D080u)) {
        auto targetFn = runtime->lookupFunction(0x11D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A3Cu; }
        if (ctx->pc != 0x103A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A3Cu; }
        if (ctx->pc != 0x103A3Cu) { return; }
    }
    ctx->pc = 0x103A3Cu;
    // 0x103a3c: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x103a3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x103a40: 0xc04745a  jal         func_11D168
    ctx->pc = 0x103A40u;
    SET_GPR_U32(ctx, 31, 0x103A48u);
    ctx->pc = 0x103A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103A40u;
            // 0x103a44: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D168u;
    if (runtime->hasFunction(0x11D168u)) {
        auto targetFn = runtime->lookupFunction(0x11D168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A48u; }
        if (ctx->pc != 0x103A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A48u; }
        if (ctx->pc != 0x103A48u) { return; }
    }
    ctx->pc = 0x103A48u;
    // 0x103a48: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x103a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x103a4c: 0x8f9182b8  lw          $s1, -0x7D48($gp)
    ctx->pc = 0x103a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103a50: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x103a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x103a54: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x103a54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x103a58: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x103a58u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x103a5c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x103a5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x103a60: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x103a60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x103a64: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x103a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x103a68: 0xc04745a  jal         func_11D168
    ctx->pc = 0x103A68u;
    SET_GPR_U32(ctx, 31, 0x103A70u);
    ctx->pc = 0x103A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103A68u;
            // 0x103a6c: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D168u;
    if (runtime->hasFunction(0x11D168u)) {
        auto targetFn = runtime->lookupFunction(0x11D168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A70u; }
        if (ctx->pc != 0x103A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A70u; }
        if (ctx->pc != 0x103A70u) { return; }
    }
    ctx->pc = 0x103A70u;
    // 0x103a70: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x103a70u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x103a74: 0xc047420  jal         func_11D080
    ctx->pc = 0x103A74u;
    SET_GPR_U32(ctx, 31, 0x103A7Cu);
    ctx->pc = 0x103A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103A74u;
            // 0x103a78: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D080u;
    if (runtime->hasFunction(0x11D080u)) {
        auto targetFn = runtime->lookupFunction(0x11D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A7Cu; }
        if (ctx->pc != 0x103A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A7Cu; }
        if (ctx->pc != 0x103A7Cu) { return; }
    }
    ctx->pc = 0x103A7Cu;
    // 0x103a7c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x103a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x103a80: 0x8f8882b8  lw          $t0, -0x7D48($gp)
    ctx->pc = 0x103a80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103a84: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x103a84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x103a88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a8c: 0x25050100  addiu       $a1, $t0, 0x100
    ctx->pc = 0x103a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x103a90: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x103a90u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x103a94: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x103a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x103a98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x103a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x103a9c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x103a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103aa0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x103aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103aa4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x103aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x103aa8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x103aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x103aac: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x103aacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x103ab0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x103ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x103ab4: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x103ab4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103ab8: 0x7d020110  sq          $v0, 0x110($t0)
    ctx->pc = 0x103ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 272), GPR_VEC(ctx, 2));
    // 0x103abc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x103abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x103ac0: 0xad060110  sw          $a2, 0x110($t0)
    ctx->pc = 0x103ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 272), GPR_U32(ctx, 6));
    // 0x103ac4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x103ac4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16u)));
    // 0x103ac8: 0xc043948  jal         func_10E520
    ctx->pc = 0x103AC8u;
    SET_GPR_U32(ctx, 31, 0x103AD0u);
    ctx->pc = 0x103ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103AC8u;
            // 0x103acc: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AD0u; }
        if (ctx->pc != 0x103AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AD0u; }
        if (ctx->pc != 0x103AD0u) { return; }
    }
    ctx->pc = 0x103AD0u;
    // 0x103ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ad4: 0xc043322  jal         func_10CC88
    ctx->pc = 0x103AD4u;
    SET_GPR_U32(ctx, 31, 0x103ADCu);
    ctx->pc = 0x103AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103AD4u;
            // 0x103ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103ADCu; }
        if (ctx->pc != 0x103ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103ADCu; }
        if (ctx->pc != 0x103ADCu) { return; }
    }
    ctx->pc = 0x103ADCu;
    // 0x103adc: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x103adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ae4: 0xc04372a  jal         func_10DCA8
    ctx->pc = 0x103AE4u;
    SET_GPR_U32(ctx, 31, 0x103AECu);
    ctx->pc = 0x103AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103AE4u;
            // 0x103ae8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AECu; }
        if (ctx->pc != 0x103AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AECu; }
        if (ctx->pc != 0x103AECu) { return; }
    }
    ctx->pc = 0x103AECu;
    // 0x103aec: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x103aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103af0: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x103af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x103af4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x103af4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x103af8: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x103af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103afc: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x103AFCu;
    SET_GPR_U32(ctx, 31, 0x103B04u);
    ctx->pc = 0x103B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103AFCu;
            // 0x103b00: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (runtime->hasFunction(0x10D758u)) {
        auto targetFn = runtime->lookupFunction(0x10D758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B04u; }
        if (ctx->pc != 0x103B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B04u; }
        if (ctx->pc != 0x103B04u) { return; }
    }
    ctx->pc = 0x103B04u;
    // 0x103b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b08: 0xc043322  jal         func_10CC88
    ctx->pc = 0x103B08u;
    SET_GPR_U32(ctx, 31, 0x103B10u);
    ctx->pc = 0x103B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103B08u;
            // 0x103b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B10u; }
        if (ctx->pc != 0x103B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B10u; }
        if (ctx->pc != 0x103B10u) { return; }
    }
    ctx->pc = 0x103B10u;
    // 0x103b10: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x103b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b18: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x103b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x103b1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x103b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b20: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x103b20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x103b24: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x103b24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x103b28: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x103b28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103b2c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x103b2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103b30: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x103b30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103b34: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x103b34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103b38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x103b38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103b3c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x103b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103b40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x103b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103b44: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x103b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x103b48: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x103b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x103b4c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x103b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x103b50: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x103b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103b54: 0x804372a  j           func_10DCA8
    ctx->pc = 0x103B54u;
    ctx->pc = 0x103B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103B54u;
            // 0x103b58: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x103B5Cu;
}
