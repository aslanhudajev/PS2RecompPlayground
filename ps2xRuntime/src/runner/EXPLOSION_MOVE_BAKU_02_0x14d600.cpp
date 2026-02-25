#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EXPLOSION_MOVE_BAKU_02
// Address: 0x14d600 - 0x14d748
void EXPLOSION_MOVE_BAKU_02_0x14d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EXPLOSION_MOVE_BAKU_02_0x14d600");
#endif

    ctx->pc = 0x14d600u;

    // 0x14d600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d604: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x14d604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x14d608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d60c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x14d60cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x14d610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d614: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14d614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d618: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x14d618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d61c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d620: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d624: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14d624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14d628: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x14d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d62c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x14d62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d630: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d634: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14d634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14d638: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x14d638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d63c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d640: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14d640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14d644: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d648: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d64c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14d650: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x14d650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14d654: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x14d654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14d658: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D658u;
    {
        const bool branch_taken_0x14d658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D658u;
            // 0x14d65c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d658) {
            ctx->pc = 0x14D668u;
            goto label_14d668;
        }
    }
    ctx->pc = 0x14D660u;
    // 0x14d660: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d664: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x14d664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_14d668:
    // 0x14d668: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14d668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14d66c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d670: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14d670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x14d674: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d678: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14d678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14d67c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d680: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x14d680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14d684: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14D684u;
    {
        const bool branch_taken_0x14d684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d684) {
            ctx->pc = 0x14D6D0u;
            goto label_14d6d0;
        }
    }
    ctx->pc = 0x14D68Cu;
    // 0x14d68c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x14d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x14d690: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14D690u;
    {
        const bool branch_taken_0x14d690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d690) {
            ctx->pc = 0x14D6C0u;
            goto label_14d6c0;
        }
    }
    ctx->pc = 0x14D698u;
    // 0x14d698: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x14d698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d69c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x14d69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d6a0: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x14d6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14d6a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d6a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14d6a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d6a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d6ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14d6acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14d6b0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x14d6b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x14d6b4: 0xc053974  jal         func_14E5D0
    ctx->pc = 0x14D6B4u;
    SET_GPR_U32(ctx, 31, 0x14D6BCu);
    ctx->pc = 0x14D6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6B4u;
            // 0x14d6b8: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E5D0u;
    if (runtime->hasFunction(0x14E5D0u)) {
        auto targetFn = runtime->lookupFunction(0x14E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D6BCu; }
        if (ctx->pc != 0x14D6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomKemuri_0x14e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D6BCu; }
        if (ctx->pc != 0x14D6BCu) { return; }
    }
    ctx->pc = 0x14D6BCu;
    // 0x14d6bc: 0x0  nop
    ctx->pc = 0x14d6bcu;
    // NOP
label_14d6c0:
    // 0x14d6c0: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D6C0u;
    SET_GPR_U32(ctx, 31, 0x14D6C8u);
    ctx->pc = 0x14D6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6C0u;
            // 0x14d6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D6C8u; }
        if (ctx->pc != 0x14D6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D6C8u; }
        if (ctx->pc != 0x14D6C8u) { return; }
    }
    ctx->pc = 0x14D6C8u;
    // 0x14d6c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14D6C8u;
    {
        const bool branch_taken_0x14d6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d6c8) {
            ctx->pc = 0x14D738u;
            goto label_14d738;
        }
    }
    ctx->pc = 0x14D6D0u;
label_14d6d0:
    // 0x14d6d0: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x14d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x14d6d4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x14d6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d6dc: 0x0  nop
    ctx->pc = 0x14d6dcu;
    // NOP
    // 0x14d6e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d6e4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14D6E4u;
    {
        const bool branch_taken_0x14d6e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6E4u;
            // 0x14d6e8: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6e4) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D6ECu;
    // 0x14d6ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d6ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d6f0: 0x0  nop
    ctx->pc = 0x14d6f0u;
    // NOP
    // 0x14d6f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d6f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d6f8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14D6F8u;
    {
        const bool branch_taken_0x14d6f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d6f8) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D700u;
    // 0x14d700: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x14d700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d704: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x14d704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x14d708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d70c: 0x0  nop
    ctx->pc = 0x14d70cu;
    // NOP
    // 0x14d710: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d714: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14D714u;
    {
        const bool branch_taken_0x14d714 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D714u;
            // 0x14d718: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d714) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D71Cu;
    // 0x14d71c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d71cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d720: 0x0  nop
    ctx->pc = 0x14d720u;
    // NOP
    // 0x14d724: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d728: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14D728u;
    {
        const bool branch_taken_0x14d728 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d728) {
            ctx->pc = 0x14D738u;
            goto label_14d738;
        }
    }
    ctx->pc = 0x14D730u;
label_14d730:
    // 0x14d730: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D730u;
    SET_GPR_U32(ctx, 31, 0x14D738u);
    ctx->pc = 0x14D734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D730u;
            // 0x14d734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D738u; }
        if (ctx->pc != 0x14D738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D738u; }
        if (ctx->pc != 0x14D738u) { return; }
    }
    ctx->pc = 0x14D738u;
label_14d738:
    // 0x14d738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d73c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d740: 0x3e00008  jr          $ra
    ctx->pc = 0x14D740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D740u;
            // 0x14d744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D668u: goto label_14d668;
            case 0x14D6C0u: goto label_14d6c0;
            case 0x14D6D0u: goto label_14d6d0;
            case 0x14D730u: goto label_14d730;
            case 0x14D738u: goto label_14d738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D748u;
}
