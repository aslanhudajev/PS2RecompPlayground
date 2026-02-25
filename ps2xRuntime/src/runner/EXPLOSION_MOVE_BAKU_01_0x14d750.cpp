#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EXPLOSION_MOVE_BAKU_01
// Address: 0x14d750 - 0x14d898
void EXPLOSION_MOVE_BAKU_01_0x14d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EXPLOSION_MOVE_BAKU_01_0x14d750");
#endif

    ctx->pc = 0x14d750u;

    // 0x14d750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d754: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x14d754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x14d758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d75c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x14d75cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x14d760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d764: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14d764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d768: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x14d768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d76c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d770: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d774: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14d774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14d778: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x14d778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d77c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x14d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d780: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d784: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14d784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14d788: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x14d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d78c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d790: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14d790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14d794: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d798: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d79c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14d7a0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x14d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14d7a4: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x14d7a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14d7a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D7A8u;
    {
        const bool branch_taken_0x14d7a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D7A8u;
            // 0x14d7ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7a8) {
            ctx->pc = 0x14D7B8u;
            goto label_14d7b8;
        }
    }
    ctx->pc = 0x14D7B0u;
    // 0x14d7b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d7b4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x14d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_14d7b8:
    // 0x14d7b8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14d7bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d7c0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x14d7c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d7c8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14d7cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d7d0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x14d7d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14d7d4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14D7D4u;
    {
        const bool branch_taken_0x14d7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d7d4) {
            ctx->pc = 0x14D820u;
            goto label_14d820;
        }
    }
    ctx->pc = 0x14D7DCu;
    // 0x14d7dc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x14d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x14d7e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14D7E0u;
    {
        const bool branch_taken_0x14d7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d7e0) {
            ctx->pc = 0x14D810u;
            goto label_14d810;
        }
    }
    ctx->pc = 0x14D7E8u;
    // 0x14d7e8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x14d7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d7ec: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x14d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d7f0: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x14d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14d7f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d7f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14d7f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d7f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d7fc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14d7fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14d800: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x14d800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x14d804: 0xc053974  jal         func_14E5D0
    ctx->pc = 0x14D804u;
    SET_GPR_U32(ctx, 31, 0x14D80Cu);
    ctx->pc = 0x14D808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D804u;
            // 0x14d808: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E5D0u;
    if (runtime->hasFunction(0x14E5D0u)) {
        auto targetFn = runtime->lookupFunction(0x14E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D80Cu; }
        if (ctx->pc != 0x14D80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomKemuri_0x14e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D80Cu; }
        if (ctx->pc != 0x14D80Cu) { return; }
    }
    ctx->pc = 0x14D80Cu;
    // 0x14d80c: 0x0  nop
    ctx->pc = 0x14d80cu;
    // NOP
label_14d810:
    // 0x14d810: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D810u;
    SET_GPR_U32(ctx, 31, 0x14D818u);
    ctx->pc = 0x14D814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D810u;
            // 0x14d814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D818u; }
        if (ctx->pc != 0x14D818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D818u; }
        if (ctx->pc != 0x14D818u) { return; }
    }
    ctx->pc = 0x14D818u;
    // 0x14d818: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14D818u;
    {
        const bool branch_taken_0x14d818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d818) {
            ctx->pc = 0x14D888u;
            goto label_14d888;
        }
    }
    ctx->pc = 0x14D820u;
label_14d820:
    // 0x14d820: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x14d820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x14d824: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x14d824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d82c: 0x0  nop
    ctx->pc = 0x14d82cu;
    // NOP
    // 0x14d830: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d834: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14D834u;
    {
        const bool branch_taken_0x14d834 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D834u;
            // 0x14d838: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d834) {
            ctx->pc = 0x14D880u;
            goto label_14d880;
        }
    }
    ctx->pc = 0x14D83Cu;
    // 0x14d83c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d83cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d840: 0x0  nop
    ctx->pc = 0x14d840u;
    // NOP
    // 0x14d844: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d848: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14D848u;
    {
        const bool branch_taken_0x14d848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d848) {
            ctx->pc = 0x14D880u;
            goto label_14d880;
        }
    }
    ctx->pc = 0x14D850u;
    // 0x14d850: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x14d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d854: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x14d854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x14d858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d85c: 0x0  nop
    ctx->pc = 0x14d85cu;
    // NOP
    // 0x14d860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d864: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14D864u;
    {
        const bool branch_taken_0x14d864 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D864u;
            // 0x14d868: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d864) {
            ctx->pc = 0x14D880u;
            goto label_14d880;
        }
    }
    ctx->pc = 0x14D86Cu;
    // 0x14d86c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d870: 0x0  nop
    ctx->pc = 0x14d870u;
    // NOP
    // 0x14d874: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d878: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14D878u;
    {
        const bool branch_taken_0x14d878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d878) {
            ctx->pc = 0x14D888u;
            goto label_14d888;
        }
    }
    ctx->pc = 0x14D880u;
label_14d880:
    // 0x14d880: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D880u;
    SET_GPR_U32(ctx, 31, 0x14D888u);
    ctx->pc = 0x14D884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D880u;
            // 0x14d884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D888u; }
        if (ctx->pc != 0x14D888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D888u; }
        if (ctx->pc != 0x14D888u) { return; }
    }
    ctx->pc = 0x14D888u;
label_14d888:
    // 0x14d888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d88c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d890: 0x3e00008  jr          $ra
    ctx->pc = 0x14D890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D890u;
            // 0x14d894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D7B8u: goto label_14d7b8;
            case 0x14D810u: goto label_14d810;
            case 0x14D820u: goto label_14d820;
            case 0x14D880u: goto label_14d880;
            case 0x14D888u: goto label_14d888;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D898u;
}
