#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn1_02
// Address: 0x1e9790 - 0x1e98f0
void CreateEn1_02_0x1e9790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn1_02_0x1e9790");
#endif

    ctx->pc = 0x1e9790u;

    // 0x1e9790: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1e9790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1e9794: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1e9794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1e9798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e979c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e979cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1e97a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e97a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e97a4: 0x24639920  addiu       $v1, $v1, -0x66E0
    ctx->pc = 0x1e97a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940960));
    // 0x1e97a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e97a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e97ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e97acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e97b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e97b4: 0x24429b60  addiu       $v0, $v0, -0x64A0
    ctx->pc = 0x1e97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941536));
    // 0x1e97b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e97b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e97bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e97bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97c0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1e97c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1e97c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e97c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97c8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1e97c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1e97cc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1e97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1e97d0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1e97d4: 0x2463a120  addiu       $v1, $v1, -0x5EE0
    ctx->pc = 0x1e97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943008));
    // 0x1e97d8: 0x244298f0  addiu       $v0, $v0, -0x6710
    ctx->pc = 0x1e97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940912));
    // 0x1e97dc: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1e97dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1e97e0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1e97e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1e97e4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1e97e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1e97e8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1e97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1e97ec: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E97ECu;
    SET_GPR_U32(ctx, 31, 0x1E97F4u);
    ctx->pc = 0x1E97F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97ECu;
            // 0x1e97f0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E97F4u; }
        if (ctx->pc != 0x1E97F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E97F4u; }
        if (ctx->pc != 0x1E97F4u) { return; }
    }
    ctx->pc = 0x1E97F4u;
    // 0x1e97f4: 0xc060544  jal         func_181510
    ctx->pc = 0x1E97F4u;
    SET_GPR_U32(ctx, 31, 0x1E97FCu);
    ctx->pc = 0x1E97F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97F4u;
            // 0x1e97f8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E97FCu; }
        if (ctx->pc != 0x1E97FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E97FCu; }
        if (ctx->pc != 0x1E97FCu) { return; }
    }
    ctx->pc = 0x1E97FCu;
    // 0x1e97fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e97fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e9800: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1e9800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1e9804: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1e9804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e9808: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1e9808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1e980c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e980cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e9810: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e9810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9814: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1e9814u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9818: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e9818u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e981c: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x1e981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1e9820: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e9820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e9824: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1e9824u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e9828: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e9828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e982c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1e982cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e9830: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e9830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e9834: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1e9834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1e9838: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e9838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1e983c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9840: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1e9840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1e9844: 0x1262001c  beq         $s3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E9844u;
    {
        const bool branch_taken_0x1e9844 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9844u;
            // 0x1e9848: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9844) {
            ctx->pc = 0x1E98B8u;
            goto label_1e98b8;
        }
    }
    ctx->pc = 0x1E984Cu;
    // 0x1e984c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9850: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9850u;
    {
        const bool branch_taken_0x1e9850 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9850u;
            // 0x1e9854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9850) {
            ctx->pc = 0x1E98A0u;
            goto label_1e98a0;
        }
    }
    ctx->pc = 0x1E9858u;
    // 0x1e9858: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9858u;
    {
        const bool branch_taken_0x1e9858 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e9858) {
            ctx->pc = 0x1E9888u;
            goto label_1e9888;
        }
    }
    ctx->pc = 0x1E9860u;
    // 0x1e9860: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9860u;
    {
        const bool branch_taken_0x1e9860 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9860) {
            ctx->pc = 0x1E9870u;
            goto label_1e9870;
        }
    }
    ctx->pc = 0x1E9868u;
    // 0x1e9868: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E9868u;
    {
        const bool branch_taken_0x1e9868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9868) {
            ctx->pc = 0x1E98C0u;
            goto label_1e98c0;
        }
    }
    ctx->pc = 0x1E9870u;
label_1e9870:
    // 0x1e9870: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1e9870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1e9874: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e9874u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e9878: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e9878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e987c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E987Cu;
    {
        const bool branch_taken_0x1e987c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E987Cu;
            // 0x1e9880: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e987c) {
            ctx->pc = 0x1E98C0u;
            goto label_1e98c0;
        }
    }
    ctx->pc = 0x1E9884u;
    // 0x1e9884: 0x0  nop
    ctx->pc = 0x1e9884u;
    // NOP
label_1e9888:
    // 0x1e9888: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x1e9888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x1e988c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e988cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1e9890: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e9890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e9894: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E9894u;
    {
        const bool branch_taken_0x1e9894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9894u;
            // 0x1e9898: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9894) {
            ctx->pc = 0x1E98C0u;
            goto label_1e98c0;
        }
    }
    ctx->pc = 0x1E989Cu;
    // 0x1e989c: 0x0  nop
    ctx->pc = 0x1e989cu;
    // NOP
label_1e98a0:
    // 0x1e98a0: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1e98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x1e98a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e98a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e98a8: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e98a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e98ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E98ACu;
    {
        const bool branch_taken_0x1e98ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E98B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98ACu;
            // 0x1e98b0: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98ac) {
            ctx->pc = 0x1E98C0u;
            goto label_1e98c0;
        }
    }
    ctx->pc = 0x1E98B4u;
    // 0x1e98b4: 0x0  nop
    ctx->pc = 0x1e98b4u;
    // NOP
label_1e98b8:
    // 0x1e98b8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1e98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1e98bc: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1e98bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_1e98c0:
    // 0x1e98c0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e98c4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e98c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e98c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e98c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98cc: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1E98CCu;
    SET_GPR_U32(ctx, 31, 0x1E98D4u);
    ctx->pc = 0x1E98D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98CCu;
            // 0x1e98d0: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98D4u; }
        if (ctx->pc != 0x1E98D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98D4u; }
        if (ctx->pc != 0x1E98D4u) { return; }
    }
    ctx->pc = 0x1E98D4u;
    // 0x1e98d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e98d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e98d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e98d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e98dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e98dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e98e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e98e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e98e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e98e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e98e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E98E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E98ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98E8u;
            // 0x1e98ec: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9870u: goto label_1e9870;
            case 0x1E9888u: goto label_1e9888;
            case 0x1E98A0u: goto label_1e98a0;
            case 0x1E98B8u: goto label_1e98b8;
            case 0x1E98C0u: goto label_1e98c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E98F0u;
}
