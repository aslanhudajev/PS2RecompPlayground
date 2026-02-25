#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex2_02
// Address: 0x1d2570 - 0x1d267c
void CreateEnex2_02_0x1d2570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex2_02_0x1d2570");
#endif

    ctx->pc = 0x1d2570u;

    // 0x1d2570: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1d2570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1d2574: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d2574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d2578: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d2578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d257c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d257cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d2580: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d2580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d2584: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x1d2584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
    // 0x1d2588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d258c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d258cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2590: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2594: 0x244229a0  addiu       $v0, $v0, 0x29A0
    ctx->pc = 0x1d2594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10656));
    // 0x1d2598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d259c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d259cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25a0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1d25a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1d25a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d25a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25a8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1d25a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1d25ac: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d25acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d25b0: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d25b4: 0x24633c00  addiu       $v1, $v1, 0x3C00
    ctx->pc = 0x1d25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15360));
    // 0x1d25b8: 0x24422680  addiu       $v0, $v0, 0x2680
    ctx->pc = 0x1d25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9856));
    // 0x1d25bc: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1d25bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1d25c0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1d25c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d25c4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1d25c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1d25c8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1d25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1d25cc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D25CCu;
    SET_GPR_U32(ctx, 31, 0x1D25D4u);
    ctx->pc = 0x1D25D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25CCu;
            // 0x1d25d0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D25D4u; }
        if (ctx->pc != 0x1D25D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D25D4u; }
        if (ctx->pc != 0x1D25D4u) { return; }
    }
    ctx->pc = 0x1D25D4u;
    // 0x1d25d4: 0xc060544  jal         func_181510
    ctx->pc = 0x1D25D4u;
    SET_GPR_U32(ctx, 31, 0x1D25DCu);
    ctx->pc = 0x1D25D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25D4u;
            // 0x1d25d8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D25DCu; }
        if (ctx->pc != 0x1D25DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D25DCu; }
        if (ctx->pc != 0x1D25DCu) { return; }
    }
    ctx->pc = 0x1D25DCu;
    // 0x1d25dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d25dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1d25e0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1d25e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1d25e4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1d25e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d25e8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1d25e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1d25ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d25ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d25f0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1d25f0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d25f4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1d25f4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d25f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d25fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d25fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d2600: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d2600u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1d2604: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d2604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1d2608: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1d2608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d260c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d260cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d2610: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1d2610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1d2614: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1d2614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1d2618: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d261c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d261cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d2620: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1d2620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1d2624: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2624u;
    {
        const bool branch_taken_0x1d2624 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2624u;
            // 0x1d2628: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2624) {
            ctx->pc = 0x1D2638u;
            goto label_1d2638;
        }
    }
    ctx->pc = 0x1D262Cu;
    // 0x1d262c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D262Cu;
    {
        const bool branch_taken_0x1d262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d262c) {
            ctx->pc = 0x1D2658u;
            goto label_1d2658;
        }
    }
    ctx->pc = 0x1D2634u;
    // 0x1d2634: 0x0  nop
    ctx->pc = 0x1d2634u;
    // NOP
label_1d2638:
    // 0x1d2638: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1d2638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1d263c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1d263cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1d2640: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1d2640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1d2644: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1d2644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1d2648: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1d2648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1d264c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d264cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d2650: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d2650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d2654: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1d2654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_1d2658:
    // 0x1d2658: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1D2658u;
    SET_GPR_U32(ctx, 31, 0x1D2660u);
    ctx->pc = 0x1D265Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2658u;
            // 0x1d265c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2660u; }
        if (ctx->pc != 0x1D2660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2660u; }
        if (ctx->pc != 0x1D2660u) { return; }
    }
    ctx->pc = 0x1D2660u;
    // 0x1d2660: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d2660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d2664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d266c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d266cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2674: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2674u;
            // 0x1d2678: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2638u: goto label_1d2638;
            case 0x1D2658u: goto label_1d2658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D267Cu;
}
