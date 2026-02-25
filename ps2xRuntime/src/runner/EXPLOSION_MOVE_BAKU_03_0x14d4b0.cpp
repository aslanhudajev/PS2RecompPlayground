#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EXPLOSION_MOVE_BAKU_03
// Address: 0x14d4b0 - 0x14d5f8
void EXPLOSION_MOVE_BAKU_03_0x14d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EXPLOSION_MOVE_BAKU_03_0x14d4b0");
#endif

    ctx->pc = 0x14d4b0u;

    // 0x14d4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d4b4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x14d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x14d4b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d4bc: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x14d4bcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x14d4c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d4c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14d4c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d4c8: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x14d4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d4cc: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14d4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d4d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d4d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d4d4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14d4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14d4d8: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x14d4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d4dc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x14d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d4e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d4e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d4e4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14d4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14d4e8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x14d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d4ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d4ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d4f0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14d4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14d4f4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d4f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d4f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d4fc: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14d500: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x14d500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14d504: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x14d504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14d508: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D508u;
    {
        const bool branch_taken_0x14d508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D508u;
            // 0x14d50c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d508) {
            ctx->pc = 0x14D518u;
            goto label_14d518;
        }
    }
    ctx->pc = 0x14D510u;
    // 0x14d510: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d514: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x14d514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_14d518:
    // 0x14d518: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14d51c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d520: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14d520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x14d524: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14d524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d528: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14d528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14d52c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d530: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x14d530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14d534: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14D534u;
    {
        const bool branch_taken_0x14d534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d534) {
            ctx->pc = 0x14D580u;
            goto label_14d580;
        }
    }
    ctx->pc = 0x14D53Cu;
    // 0x14d53c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x14d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x14d540: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14D540u;
    {
        const bool branch_taken_0x14d540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d540) {
            ctx->pc = 0x14D570u;
            goto label_14d570;
        }
    }
    ctx->pc = 0x14D548u;
    // 0x14d548: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x14d548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d54c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x14d54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d550: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x14d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14d554: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d554u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14d558: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d558u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d55c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14d55cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14d560: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x14d560u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x14d564: 0xc053974  jal         func_14E5D0
    ctx->pc = 0x14D564u;
    SET_GPR_U32(ctx, 31, 0x14D56Cu);
    ctx->pc = 0x14D568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D564u;
            // 0x14d568: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E5D0u;
    if (runtime->hasFunction(0x14E5D0u)) {
        auto targetFn = runtime->lookupFunction(0x14E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D56Cu; }
        if (ctx->pc != 0x14D56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomKemuri_0x14e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D56Cu; }
        if (ctx->pc != 0x14D56Cu) { return; }
    }
    ctx->pc = 0x14D56Cu;
    // 0x14d56c: 0x0  nop
    ctx->pc = 0x14d56cu;
    // NOP
label_14d570:
    // 0x14d570: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D570u;
    SET_GPR_U32(ctx, 31, 0x14D578u);
    ctx->pc = 0x14D574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D570u;
            // 0x14d574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D578u; }
        if (ctx->pc != 0x14D578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D578u; }
        if (ctx->pc != 0x14D578u) { return; }
    }
    ctx->pc = 0x14D578u;
    // 0x14d578: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14D578u;
    {
        const bool branch_taken_0x14d578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d578) {
            ctx->pc = 0x14D5E8u;
            goto label_14d5e8;
        }
    }
    ctx->pc = 0x14D580u;
label_14d580:
    // 0x14d580: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x14d580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x14d584: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x14d584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d58c: 0x0  nop
    ctx->pc = 0x14d58cu;
    // NOP
    // 0x14d590: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d594: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14D594u;
    {
        const bool branch_taken_0x14d594 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D594u;
            // 0x14d598: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d594) {
            ctx->pc = 0x14D5E0u;
            goto label_14d5e0;
        }
    }
    ctx->pc = 0x14D59Cu;
    // 0x14d59c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d5a0: 0x0  nop
    ctx->pc = 0x14d5a0u;
    // NOP
    // 0x14d5a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d5a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d5a8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14D5A8u;
    {
        const bool branch_taken_0x14d5a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d5a8) {
            ctx->pc = 0x14D5E0u;
            goto label_14d5e0;
        }
    }
    ctx->pc = 0x14D5B0u;
    // 0x14d5b0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x14d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d5b4: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x14d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x14d5b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d5bc: 0x0  nop
    ctx->pc = 0x14d5bcu;
    // NOP
    // 0x14d5c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d5c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d5c4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14D5C4u;
    {
        const bool branch_taken_0x14d5c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D5C4u;
            // 0x14d5c8: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5c4) {
            ctx->pc = 0x14D5E0u;
            goto label_14d5e0;
        }
    }
    ctx->pc = 0x14D5CCu;
    // 0x14d5cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d5d0: 0x0  nop
    ctx->pc = 0x14d5d0u;
    // NOP
    // 0x14d5d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d5d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d5d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14D5D8u;
    {
        const bool branch_taken_0x14d5d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d5d8) {
            ctx->pc = 0x14D5E8u;
            goto label_14d5e8;
        }
    }
    ctx->pc = 0x14D5E0u;
label_14d5e0:
    // 0x14d5e0: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D5E0u;
    SET_GPR_U32(ctx, 31, 0x14D5E8u);
    ctx->pc = 0x14D5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D5E0u;
            // 0x14d5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D5E8u; }
        if (ctx->pc != 0x14D5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D5E8u; }
        if (ctx->pc != 0x14D5E8u) { return; }
    }
    ctx->pc = 0x14D5E8u;
label_14d5e8:
    // 0x14d5e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d5ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D5F0u;
            // 0x14d5f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D518u: goto label_14d518;
            case 0x14D570u: goto label_14d570;
            case 0x14D580u: goto label_14d580;
            case 0x14D5E0u: goto label_14d5e0;
            case 0x14D5E8u: goto label_14d5e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D5F8u;
}
