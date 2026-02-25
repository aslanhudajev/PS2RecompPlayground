#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn1_01
// Address: 0x1e8810 - 0x1e8b6c
void CreateEn1_01_0x1e8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn1_01_0x1e8810");
#endif

    ctx->pc = 0x1e8810u;

    // 0x1e8810: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1e8810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1e8814: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1e8814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1e8818: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e8818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e881c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e881cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1e8820: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e8824: 0x24638ba0  addiu       $v1, $v1, -0x7460
    ctx->pc = 0x1e8824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937504));
    // 0x1e8828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e882c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e882cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8834: 0x24428e20  addiu       $v0, $v0, -0x71E0
    ctx->pc = 0x1e8834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938144));
    // 0x1e8838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e883c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e883cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8840: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1e8840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1e8844: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e8844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8848: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1e8848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1e884c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1e884cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1e8850: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e8850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1e8854: 0x24639780  addiu       $v1, $v1, -0x6880
    ctx->pc = 0x1e8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940544));
    // 0x1e8858: 0x24428b70  addiu       $v0, $v0, -0x7490
    ctx->pc = 0x1e8858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937456));
    // 0x1e885c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1e885cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1e8860: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1e8860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e8864: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1e8864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1e8868: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1e8868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1e886c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E886Cu;
    SET_GPR_U32(ctx, 31, 0x1E8874u);
    ctx->pc = 0x1E8870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E886Cu;
            // 0x1e8870: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8874u; }
        if (ctx->pc != 0x1E8874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8874u; }
        if (ctx->pc != 0x1E8874u) { return; }
    }
    ctx->pc = 0x1E8874u;
    // 0x1e8874: 0xc060544  jal         func_181510
    ctx->pc = 0x1E8874u;
    SET_GPR_U32(ctx, 31, 0x1E887Cu);
    ctx->pc = 0x1E8878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8874u;
            // 0x1e8878: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E887Cu; }
        if (ctx->pc != 0x1E887Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E887Cu; }
        if (ctx->pc != 0x1E887Cu) { return; }
    }
    ctx->pc = 0x1E887Cu;
    // 0x1e887c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e887cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e8880: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1e8880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1e8884: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1e8884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8888: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e8888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e888c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e888cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e8890: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1e8890u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8894: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e8894u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8898: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e8898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e889c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e889cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e88a0: 0x2e610006  sltiu       $at, $s3, 0x6
    ctx->pc = 0x1e88a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e88a4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1e88a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e88a8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e88a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e88ac: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1e88acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e88b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e88b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e88b4: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1e88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1e88b8: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1e88b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1e88bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e88c0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1e88c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1e88c4: 0x102000a0  beqz        $at, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1E88C4u;
    {
        const bool branch_taken_0x1e88c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88C4u;
            // 0x1e88c8: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88c4) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E88CCu;
    // 0x1e88cc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e88d0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1e88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e88d4: 0x24632f20  addiu       $v1, $v1, 0x2F20
    ctx->pc = 0x1e88d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12064));
    // 0x1e88d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e88dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e88e0: 0x400008  jr          $v0
    ctx->pc = 0x1E88E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E88E8u: goto label_1e88e8;
            case 0x1E8920u: goto label_1e8920;
            case 0x1E8950u: goto label_1e8950;
            case 0x1E89A8u: goto label_1e89a8;
            case 0x1E8A00u: goto label_1e8a00;
            case 0x1E8AA8u: goto label_1e8aa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E88E8u;
label_1e88e8:
    // 0x1e88e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e88ec: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e88f0: 0x3c02be99  lui         $v0, 0xBE99
    ctx->pc = 0x1e88f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48793 << 16));
    // 0x1e88f4: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1e88f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e88f8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1e88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1e88fc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e88fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e8900: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e8900u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e8904: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1e8904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1e8908: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x1e8908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x1e890c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e890cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e8910: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1e8910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1e8914: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1E8914u;
    {
        const bool branch_taken_0x1e8914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8914u;
            // 0x1e8918: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8914) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E891Cu;
    // 0x1e891c: 0x0  nop
    ctx->pc = 0x1e891cu;
    // NOP
label_1e8920:
    // 0x1e8920: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e8920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e8924: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e8924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e8928: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1e8928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1e892c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1e892cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e8930: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x1e8930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x1e8934: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e8934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e8938: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e8938u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e893c: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1e893cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1e8940: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1e8940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1e8944: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1E8944u;
    {
        const bool branch_taken_0x1e8944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8944u;
            // 0x1e8948: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8944) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E894Cu;
    // 0x1e894c: 0x0  nop
    ctx->pc = 0x1e894cu;
    // NOP
label_1e8950:
    // 0x1e8950: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1e8950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1e8954: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1e8954u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e8958: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1e8958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1e895c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e895cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e8960: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1e8960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1e8964: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e8964u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e8968: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e8968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e896c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e896cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8970: 0x3c02bfd5  lui         $v0, 0xBFD5
    ctx->pc = 0x1e8970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49109 << 16));
    // 0x1e8974: 0x3446c28f  ori         $a2, $v0, 0xC28F
    ctx->pc = 0x1e8974u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1e8978: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1e8978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1e897c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1e897cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e8980: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1e8980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1e8984: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e8984u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e8988: 0xac860118  sw          $a2, 0x118($a0)
    ctx->pc = 0x1e8988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
    // 0x1e898c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e898cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8990: 0xac850114  sw          $a1, 0x114($a0)
    ctx->pc = 0x1e8990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
    // 0x1e8994: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e8994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e8998: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e8998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e899c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1E899Cu;
    {
        const bool branch_taken_0x1e899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E899Cu;
            // 0x1e89a0: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e899c) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E89A4u;
    // 0x1e89a4: 0x0  nop
    ctx->pc = 0x1e89a4u;
    // NOP
label_1e89a8:
    // 0x1e89a8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1e89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1e89ac: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1e89acu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e89b0: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x1e89b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x1e89b4: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1e89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x1e89b8: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1e89b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1e89bc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e89bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e89c0: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e89c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e89c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e89c8: 0x3c023fd5  lui         $v0, 0x3FD5
    ctx->pc = 0x1e89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16341 << 16));
    // 0x1e89cc: 0x3446c28f  ori         $a2, $v0, 0xC28F
    ctx->pc = 0x1e89ccu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1e89d0: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1e89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1e89d4: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1e89d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e89d8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1e89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1e89dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e89dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e89e0: 0xac860118  sw          $a2, 0x118($a0)
    ctx->pc = 0x1e89e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
    // 0x1e89e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e89e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e89e8: 0xac850114  sw          $a1, 0x114($a0)
    ctx->pc = 0x1e89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
    // 0x1e89ec: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e89ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e89f0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e89f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e89f4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1E89F4u;
    {
        const bool branch_taken_0x1e89f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89F4u;
            // 0x1e89f8: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89f4) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E89FCu;
    // 0x1e89fc: 0x0  nop
    ctx->pc = 0x1e89fcu;
    // NOP
label_1e8a00:
    // 0x1e8a00: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1E8A00u;
    SET_GPR_U32(ctx, 31, 0x1E8A08u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A08u; }
        if (ctx->pc != 0x1E8A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A08u; }
        if (ctx->pc != 0x1E8A08u) { return; }
    }
    ctx->pc = 0x1E8A08u;
    // 0x1e8a08: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1E8A08u;
    SET_GPR_U32(ctx, 31, 0x1E8A10u);
    ctx->pc = 0x1E8A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A08u;
            // 0x1e8a0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A10u; }
        if (ctx->pc != 0x1E8A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A10u; }
        if (ctx->pc != 0x1E8A10u) { return; }
    }
    ctx->pc = 0x1E8A10u;
    // 0x1e8a10: 0x3c043fd3  lui         $a0, 0x3FD3
    ctx->pc = 0x1e8a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16339 << 16));
    // 0x1e8a14: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x1e8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x1e8a18: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x1e8a18u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e8a1c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1e8a1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e8a20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e8a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e8a24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a28: 0xc040880  jal         func_102200
    ctx->pc = 0x1E8A28u;
    SET_GPR_U32(ctx, 31, 0x1E8A30u);
    ctx->pc = 0x1E8A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A28u;
            // 0x1e8a2c: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A30u; }
        if (ctx->pc != 0x1E8A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A30u; }
        if (ctx->pc != 0x1E8A30u) { return; }
    }
    ctx->pc = 0x1E8A30u;
    // 0x1e8a30: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1E8A30u;
    SET_GPR_U32(ctx, 31, 0x1E8A38u);
    ctx->pc = 0x1E8A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A30u;
            // 0x1e8a34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A38u; }
        if (ctx->pc != 0x1E8A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A38u; }
        if (ctx->pc != 0x1E8A38u) { return; }
    }
    ctx->pc = 0x1E8A38u;
    // 0x1e8a38: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1E8A38u;
    SET_GPR_U32(ctx, 31, 0x1E8A40u);
    ctx->pc = 0x1E8A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A38u;
            // 0x1e8a3c: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A40u; }
        if (ctx->pc != 0x1E8A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A40u; }
        if (ctx->pc != 0x1E8A40u) { return; }
    }
    ctx->pc = 0x1E8A40u;
    // 0x1e8a40: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1E8A40u;
    SET_GPR_U32(ctx, 31, 0x1E8A48u);
    ctx->pc = 0x1E8A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A40u;
            // 0x1e8a44: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A48u; }
        if (ctx->pc != 0x1E8A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A48u; }
        if (ctx->pc != 0x1E8A48u) { return; }
    }
    ctx->pc = 0x1E8A48u;
    // 0x1e8a48: 0x3c043fd3  lui         $a0, 0x3FD3
    ctx->pc = 0x1e8a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16339 << 16));
    // 0x1e8a4c: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x1e8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x1e8a50: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x1e8a50u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e8a54: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1e8a54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e8a58: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e8a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e8a5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a60: 0xc040880  jal         func_102200
    ctx->pc = 0x1E8A60u;
    SET_GPR_U32(ctx, 31, 0x1E8A68u);
    ctx->pc = 0x1E8A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A60u;
            // 0x1e8a64: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A68u; }
        if (ctx->pc != 0x1E8A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A68u; }
        if (ctx->pc != 0x1E8A68u) { return; }
    }
    ctx->pc = 0x1E8A68u;
    // 0x1e8a68: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1e8a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1e8a6c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1e8a6cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)40960u)));
    // 0x1e8a70: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1e8a70u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1e8a74: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e8a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1e8a78: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e8a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e8a7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a80: 0xc040850  jal         func_102140
    ctx->pc = 0x1E8A80u;
    SET_GPR_U32(ctx, 31, 0x1E8A88u);
    ctx->pc = 0x1E8A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A80u;
            // 0x1e8a84: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A88u; }
        if (ctx->pc != 0x1E8A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A88u; }
        if (ctx->pc != 0x1E8A88u) { return; }
    }
    ctx->pc = 0x1E8A88u;
    // 0x1e8a88: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1E8A88u;
    SET_GPR_U32(ctx, 31, 0x1E8A90u);
    ctx->pc = 0x1E8A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A88u;
            // 0x1e8a8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A90u; }
        if (ctx->pc != 0x1E8A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A90u; }
        if (ctx->pc != 0x1E8A90u) { return; }
    }
    ctx->pc = 0x1E8A90u;
    // 0x1e8a90: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e8a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1e8a94: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e8a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e8a98: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e8a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e8a9c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1E8A9Cu;
    {
        const bool branch_taken_0x1e8a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A9Cu;
            // 0x1e8aa0: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a9c) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E8AA4u;
    // 0x1e8aa4: 0x0  nop
    ctx->pc = 0x1e8aa4u;
    // NOP
label_1e8aa8:
    // 0x1e8aa8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1E8AA8u;
    SET_GPR_U32(ctx, 31, 0x1E8AB0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AB0u; }
        if (ctx->pc != 0x1E8AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AB0u; }
        if (ctx->pc != 0x1E8AB0u) { return; }
    }
    ctx->pc = 0x1E8AB0u;
    // 0x1e8ab0: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1E8AB0u;
    SET_GPR_U32(ctx, 31, 0x1E8AB8u);
    ctx->pc = 0x1E8AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AB0u;
            // 0x1e8ab4: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AB8u; }
        if (ctx->pc != 0x1E8AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AB8u; }
        if (ctx->pc != 0x1E8AB8u) { return; }
    }
    ctx->pc = 0x1E8AB8u;
    // 0x1e8ab8: 0x3c043fd3  lui         $a0, 0x3FD3
    ctx->pc = 0x1e8ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16339 << 16));
    // 0x1e8abc: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x1e8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x1e8ac0: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x1e8ac0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e8ac4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1e8ac4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e8ac8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e8ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e8acc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ad0: 0xc040880  jal         func_102200
    ctx->pc = 0x1E8AD0u;
    SET_GPR_U32(ctx, 31, 0x1E8AD8u);
    ctx->pc = 0x1E8AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AD0u;
            // 0x1e8ad4: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AD8u; }
        if (ctx->pc != 0x1E8AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AD8u; }
        if (ctx->pc != 0x1E8AD8u) { return; }
    }
    ctx->pc = 0x1E8AD8u;
    // 0x1e8ad8: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1E8AD8u;
    SET_GPR_U32(ctx, 31, 0x1E8AE0u);
    ctx->pc = 0x1E8ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AD8u;
            // 0x1e8adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AE0u; }
        if (ctx->pc != 0x1E8AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AE0u; }
        if (ctx->pc != 0x1E8AE0u) { return; }
    }
    ctx->pc = 0x1E8AE0u;
    // 0x1e8ae0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1E8AE0u;
    SET_GPR_U32(ctx, 31, 0x1E8AE8u);
    ctx->pc = 0x1E8AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AE0u;
            // 0x1e8ae4: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AE8u; }
        if (ctx->pc != 0x1E8AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AE8u; }
        if (ctx->pc != 0x1E8AE8u) { return; }
    }
    ctx->pc = 0x1E8AE8u;
    // 0x1e8ae8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1E8AE8u;
    SET_GPR_U32(ctx, 31, 0x1E8AF0u);
    ctx->pc = 0x1E8AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AE8u;
            // 0x1e8aec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AF0u; }
        if (ctx->pc != 0x1E8AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AF0u; }
        if (ctx->pc != 0x1E8AF0u) { return; }
    }
    ctx->pc = 0x1E8AF0u;
    // 0x1e8af0: 0x3c043fd3  lui         $a0, 0x3FD3
    ctx->pc = 0x1e8af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16339 << 16));
    // 0x1e8af4: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x1e8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x1e8af8: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x1e8af8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e8afc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1e8afcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e8b00: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e8b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e8b04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b08: 0xc040880  jal         func_102200
    ctx->pc = 0x1E8B08u;
    SET_GPR_U32(ctx, 31, 0x1E8B10u);
    ctx->pc = 0x1E8B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B08u;
            // 0x1e8b0c: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B10u; }
        if (ctx->pc != 0x1E8B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B10u; }
        if (ctx->pc != 0x1E8B10u) { return; }
    }
    ctx->pc = 0x1E8B10u;
    // 0x1e8b10: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1e8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1e8b14: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1e8b14u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)40960u)));
    // 0x1e8b18: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1e8b18u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1e8b1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e8b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1e8b20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e8b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e8b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b28: 0xc040850  jal         func_102140
    ctx->pc = 0x1E8B28u;
    SET_GPR_U32(ctx, 31, 0x1E8B30u);
    ctx->pc = 0x1E8B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B28u;
            // 0x1e8b2c: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B30u; }
        if (ctx->pc != 0x1E8B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B30u; }
        if (ctx->pc != 0x1E8B30u) { return; }
    }
    ctx->pc = 0x1E8B30u;
    // 0x1e8b30: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1E8B30u;
    SET_GPR_U32(ctx, 31, 0x1E8B38u);
    ctx->pc = 0x1E8B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B30u;
            // 0x1e8b34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B38u; }
        if (ctx->pc != 0x1E8B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B38u; }
        if (ctx->pc != 0x1E8B38u) { return; }
    }
    ctx->pc = 0x1E8B38u;
    // 0x1e8b38: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e8b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1e8b3c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e8b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e8b40: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e8b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e8b44: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1e8b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_1e8b48:
    // 0x1e8b48: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1E8B48u;
    SET_GPR_U32(ctx, 31, 0x1E8B50u);
    ctx->pc = 0x1E8B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B48u;
            // 0x1e8b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B50u; }
        if (ctx->pc != 0x1E8B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B50u; }
        if (ctx->pc != 0x1E8B50u) { return; }
    }
    ctx->pc = 0x1E8B50u;
    // 0x1e8b50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e8b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8b54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e8b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B64u;
            // 0x1e8b68: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E88E8u: goto label_1e88e8;
            case 0x1E8920u: goto label_1e8920;
            case 0x1E8950u: goto label_1e8950;
            case 0x1E89A8u: goto label_1e89a8;
            case 0x1E8A00u: goto label_1e8a00;
            case 0x1E8AA8u: goto label_1e8aa8;
            case 0x1E8B48u: goto label_1e8b48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8B6Cu;
}
