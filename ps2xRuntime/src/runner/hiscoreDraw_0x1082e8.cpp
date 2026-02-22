#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: hiscoreDraw
// Address: 0x1082e8 - 0x1083c0
void hiscoreDraw_0x1082e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1082e8u;

    // 0x1082e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1082e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1082ec: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1082ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x1082f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1082f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1082f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1082f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1082f8: 0x24501698  addiu       $s0, $v0, 0x1698
    ctx->pc = 0x1082f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5784));
    // 0x1082fc: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x1082fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108300: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108304: 0xc6020064  lwc1        $f2, 0x64($s0)
    ctx->pc = 0x108304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x108308: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x108308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10830c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10830cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x108310: 0xc6030068  lwc1        $f3, 0x68($s0)
    ctx->pc = 0x108310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x108314: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x108314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x108318: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x108318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10831c: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x10831cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x108320: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x108320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x108324: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x108324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x108328: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x108328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x10832c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10832cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x108330: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x108330u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x108334: 0x8e080054  lw          $t0, 0x54($s0)
    ctx->pc = 0x108334u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x108338: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108338u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10833c: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x10833cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x108340: 0xc040f80  jal         func_103E00
    ctx->pc = 0x108340u;
    SET_GPR_U32(ctx, 31, 0x108348u);
    ctx->pc = 0x108344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108340u;
            // 0x108344: 0x920b006c  lbu         $t3, 0x6C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103E00u;
    if (runtime->hasFunction(0x103E00u)) {
        auto targetFn = runtime->lookupFunction(0x103E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108348u; }
        if (ctx->pc != 0x108348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw24bitImage_0x103e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108348u; }
        if (ctx->pc != 0x108348u) { return; }
    }
    ctx->pc = 0x108348u;
    // 0x108348: 0x8f8280ac  lw          $v0, -0x7F54($gp)
    ctx->pc = 0x108348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x10834c: 0x28420065  slti        $v0, $v0, 0x65
    ctx->pc = 0x10834cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x108350: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x108350u;
    {
        const bool branch_taken_0x108350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108350u;
            // 0x108354: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108350) {
            ctx->pc = 0x1083B4u;
            goto label_1083b4;
        }
    }
    ctx->pc = 0x108358u;
    // 0x108358: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x108358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10835c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10835cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108360: 0xc60200a8  lwc1        $f2, 0xA8($s0)
    ctx->pc = 0x108360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x108364: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x108364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108368: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x108368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10836c: 0xc60300ac  lwc1        $f3, 0xAC($s0)
    ctx->pc = 0x10836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x108370: 0x3c027f00  lui         $v0, 0x7F00
    ctx->pc = 0x108370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32512 << 16));
    // 0x108374: 0x920b00b0  lbu         $t3, 0xB0($s0)
    ctx->pc = 0x108374u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x108378: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x108378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10837c: 0x8e080098  lw          $t0, 0x98($s0)
    ctx->pc = 0x10837cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x108380: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x108380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x108384: 0x344280ff  ori         $v0, $v0, 0x80FF
    ctx->pc = 0x108384u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33023u)));
    // 0x108388: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x108388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x10838c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10838cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x108390: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x108390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x108394: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x108394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x108398: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10839c: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x10839cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x1083a0: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1083a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1083a4: 0x8e070094  lw          $a3, 0x94($s0)
    ctx->pc = 0x1083a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1083a8: 0xc041560  jal         func_105580
    ctx->pc = 0x1083A8u;
    SET_GPR_U32(ctx, 31, 0x1083B0u);
    ctx->pc = 0x1083ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1083A8u;
            // 0x1083ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105580u;
    if (runtime->hasFunction(0x105580u)) {
        auto targetFn = runtime->lookupFunction(0x105580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083B0u; }
        if (ctx->pc != 0x1083B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083B0u; }
        if (ctx->pc != 0x1083B0u) { return; }
    }
    ctx->pc = 0x1083B0u;
    // 0x1083b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1083b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1083b4:
    // 0x1083b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1083b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1083b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1083B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1083BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1083B8u;
            // 0x1083bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1083B4u: goto label_1083b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1083C0u;
}
