#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setRandomNumber
// Address: 0x109440 - 0x10958c
void setRandomNumber_0x109440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setRandomNumber_0x109440");
#endif

    ctx->pc = 0x109440u;

    // 0x109440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x109444: 0xaf808124  sw          $zero, -0x7EDC($gp)
    ctx->pc = 0x109444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934820), GPR_U32(ctx, 0));
    // 0x109448: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x109448u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x10944c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x10944cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x109450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109454: 0xaf808120  sw          $zero, -0x7EE0($gp)
    ctx->pc = 0x109454u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934816), GPR_U32(ctx, 0));
    // 0x109458: 0xaf80811c  sw          $zero, -0x7EE4($gp)
    ctx->pc = 0x109458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934812), GPR_U32(ctx, 0));
    // 0x10945c: 0xaf808118  sw          $zero, -0x7EE8($gp)
    ctx->pc = 0x10945cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934808), GPR_U32(ctx, 0));
    // 0x109460: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x109460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x109464: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x109464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x109468: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x109468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x10946c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10946cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_109470:
    // 0x109470: 0xc04acfc  jal         func_12B3F0
    ctx->pc = 0x109470u;
    SET_GPR_U32(ctx, 31, 0x109478u);
    ctx->pc = 0x12B3F0u;
    if (runtime->hasFunction(0x12B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109478u; }
        if (ctx->pc != 0x109478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x12b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109478u; }
        if (ctx->pc != 0x109478u) { return; }
    }
    ctx->pc = 0x109478u;
    // 0x109478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10947c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10947cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x109480: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x109480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x109484: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x109484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x109488: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x109488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10948c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10948cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x109490: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x109490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x109494: 0xaf858118  sw          $a1, -0x7EE8($gp)
    ctx->pc = 0x109494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934808), GPR_U32(ctx, 5));
label_109498:
    // 0x109498: 0xc04acfc  jal         func_12B3F0
    ctx->pc = 0x109498u;
    SET_GPR_U32(ctx, 31, 0x1094A0u);
    ctx->pc = 0x12B3F0u;
    if (runtime->hasFunction(0x12B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094A0u; }
        if (ctx->pc != 0x1094A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x12b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094A0u; }
        if (ctx->pc != 0x1094A0u) { return; }
    }
    ctx->pc = 0x1094A0u;
    // 0x1094a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1094a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1094a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1094a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1094a8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1094a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1094ac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1094acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1094b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1094b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1094b4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1094b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1094b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1094b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1094bc: 0xaf82811c  sw          $v0, -0x7EE4($gp)
    ctx->pc = 0x1094bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934812), GPR_U32(ctx, 2));
label_1094c0:
    // 0x1094c0: 0xc04acfc  jal         func_12B3F0
    ctx->pc = 0x1094C0u;
    SET_GPR_U32(ctx, 31, 0x1094C8u);
    ctx->pc = 0x12B3F0u;
    if (runtime->hasFunction(0x12B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094C8u; }
        if (ctx->pc != 0x1094C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x12b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094C8u; }
        if (ctx->pc != 0x1094C8u) { return; }
    }
    ctx->pc = 0x1094C8u;
    // 0x1094c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1094c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1094cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1094ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1094d0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1094d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1094d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1094d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1094d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1094d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1094dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1094dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1094e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1094e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1094e4: 0xaf828120  sw          $v0, -0x7EE0($gp)
    ctx->pc = 0x1094e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934816), GPR_U32(ctx, 2));
label_1094e8:
    // 0x1094e8: 0xc04acfc  jal         func_12B3F0
    ctx->pc = 0x1094E8u;
    SET_GPR_U32(ctx, 31, 0x1094F0u);
    ctx->pc = 0x12B3F0u;
    if (runtime->hasFunction(0x12B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094F0u; }
        if (ctx->pc != 0x1094F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x12b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094F0u; }
        if (ctx->pc != 0x1094F0u) { return; }
    }
    ctx->pc = 0x1094F0u;
    // 0x1094f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1094f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1094f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1094f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1094f8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1094f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1094fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1094fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x109500: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x109500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x109504: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x109504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x109508: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x109508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10950c: 0x1100fff6  beqz        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10950Cu;
    {
        const bool branch_taken_0x10950c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x109510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10950Cu;
            // 0x109510: 0xaf888124  sw          $t0, -0x7EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934820), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10950c) {
            ctx->pc = 0x1094E8u;
            goto label_1094e8;
        }
    }
    ctx->pc = 0x109514u;
    // 0x109514: 0x8f878120  lw          $a3, -0x7EE0($gp)
    ctx->pc = 0x109514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
    // 0x109518: 0x1107fff3  beq         $t0, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x109518u;
    {
        const bool branch_taken_0x109518 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x10951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109518u;
            // 0x10951c: 0x8f86811c  lw          $a2, -0x7EE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109518) {
            ctx->pc = 0x1094E8u;
            goto label_1094e8;
        }
    }
    ctx->pc = 0x109520u;
    // 0x109520: 0x1106fff1  beq         $t0, $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x109520u;
    {
        const bool branch_taken_0x109520 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x109524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109520u;
            // 0x109524: 0x8f858118  lw          $a1, -0x7EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109520) {
            ctx->pc = 0x1094E8u;
            goto label_1094e8;
        }
    }
    ctx->pc = 0x109528u;
    // 0x109528: 0x1105ffef  beq         $t0, $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x109528u;
    {
        const bool branch_taken_0x109528 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x109528) {
            ctx->pc = 0x1094E8u;
            goto label_1094e8;
        }
    }
    ctx->pc = 0x109530u;
    // 0x109530: 0x10e0ffe3  beqz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x109530u;
    {
        const bool branch_taken_0x109530 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x109530) {
            ctx->pc = 0x1094C0u;
            goto label_1094c0;
        }
    }
    ctx->pc = 0x109538u;
    // 0x109538: 0x10e6ffe1  beq         $a3, $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x109538u;
    {
        const bool branch_taken_0x109538 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x109538) {
            ctx->pc = 0x1094C0u;
            goto label_1094c0;
        }
    }
    ctx->pc = 0x109540u;
    // 0x109540: 0x10e5ffdf  beq         $a3, $a1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x109540u;
    {
        const bool branch_taken_0x109540 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x109540) {
            ctx->pc = 0x1094C0u;
            goto label_1094c0;
        }
    }
    ctx->pc = 0x109548u;
    // 0x109548: 0x10c0ffd3  beqz        $a2, . + 4 + (-0x2D << 2)
    ctx->pc = 0x109548u;
    {
        const bool branch_taken_0x109548 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x109548) {
            ctx->pc = 0x109498u;
            goto label_109498;
        }
    }
    ctx->pc = 0x109550u;
    // 0x109550: 0x10c5ffd1  beq         $a2, $a1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x109550u;
    {
        const bool branch_taken_0x109550 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x109550) {
            ctx->pc = 0x109498u;
            goto label_109498;
        }
    }
    ctx->pc = 0x109558u;
    // 0x109558: 0x10a0ffc5  beqz        $a1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x109558u;
    {
        const bool branch_taken_0x109558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10955Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109558u;
            // 0x10955c: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109558) {
            ctx->pc = 0x109470u;
            goto label_109470;
        }
    }
    ctx->pc = 0x109560u;
    // 0x109560: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x109560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x109564: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x109564u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x109568: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x109568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10956c: 0x1048ffc0  beq         $v0, $t0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x10956Cu;
    {
        const bool branch_taken_0x10956c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x109570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10956Cu;
            // 0x109570: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10956c) {
            ctx->pc = 0x109470u;
            goto label_109470;
        }
    }
    ctx->pc = 0x109574u;
    // 0x109574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109578: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x109578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10957c: 0x24843438  addiu       $a0, $a0, 0x3438
    ctx->pc = 0x10957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13368));
    // 0x109580: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x109580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x109584: 0x8043ef8  j           func_10FBE0
    ctx->pc = 0x109584u;
    ctx->pc = 0x109588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109584u;
            // 0x109588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FBE0u;
    if (runtime->hasFunction(0x10FBE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FBE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        scePrintf_0x10fbe0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10958Cu;
}
