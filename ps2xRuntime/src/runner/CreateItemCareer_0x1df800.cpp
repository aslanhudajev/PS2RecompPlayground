#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateItemCareer
// Address: 0x1df800 - 0x1df930
void CreateItemCareer_0x1df800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateItemCareer_0x1df800");
#endif

    ctx->pc = 0x1df800u;

    // 0x1df800: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1df800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1df804: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1df804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1df808: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1df808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1df80c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1df80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1df810: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1df810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1df814: 0x2463f960  addiu       $v1, $v1, -0x6A0
    ctx->pc = 0x1df814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965600));
    // 0x1df818: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1df818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df81c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1df81cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df824: 0x2442fc50  addiu       $v0, $v0, -0x3B0
    ctx->pc = 0x1df824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966352));
    // 0x1df828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df82c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1df82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df830: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1df830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1df834: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1df834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df838: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1df838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1df83c: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1df83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1df840: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1df840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1df844: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x1df844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x1df848: 0x2442f930  addiu       $v0, $v0, -0x6D0
    ctx->pc = 0x1df848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965552));
    // 0x1df84c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1df84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1df850: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1df850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1df854: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1df854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1df858: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1df858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1df85c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1DF85Cu;
    SET_GPR_U32(ctx, 31, 0x1DF864u);
    ctx->pc = 0x1DF860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF85Cu;
            // 0x1df860: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF864u; }
        if (ctx->pc != 0x1DF864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF864u; }
        if (ctx->pc != 0x1DF864u) { return; }
    }
    ctx->pc = 0x1DF864u;
    // 0x1df864: 0xc060544  jal         func_181510
    ctx->pc = 0x1DF864u;
    SET_GPR_U32(ctx, 31, 0x1DF86Cu);
    ctx->pc = 0x1DF868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF864u;
            // 0x1df868: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF86Cu; }
        if (ctx->pc != 0x1DF86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF86Cu; }
        if (ctx->pc != 0x1DF86Cu) { return; }
    }
    ctx->pc = 0x1DF86Cu;
    // 0x1df86c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1df86cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df870: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1df870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1df874: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1df874u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df878: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1df878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df87c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1df87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1df880: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1df880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1df884: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x1df884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x1df888: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x1df888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1df88c: 0xe4810120  swc1        $f1, 0x120($a0)
    ctx->pc = 0x1df88cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x1df890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df894: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1df894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df898: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1df898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1df89c: 0xc4203520  lwc1        $f0, 0x3520($at)
    ctx->pc = 0x1df89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df8a0: 0xafb30068  sw          $s3, 0x68($sp)
    ctx->pc = 0x1df8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
    // 0x1df8a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1df8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df8a8: 0x0  nop
    ctx->pc = 0x1df8a8u;
    // NOP
    // 0x1df8ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1df8acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df8b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1df8b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1df8b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1df8b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1df8b8: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF8B8u;
    {
        const bool branch_taken_0x1df8b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF8B8u;
            // 0x1df8bc: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8b8) {
            ctx->pc = 0x1DF8F8u;
            goto label_1df8f8;
        }
    }
    ctx->pc = 0x1DF8C0u;
    // 0x1df8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df8c4: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF8C4u;
    {
        const bool branch_taken_0x1df8c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1df8c4) {
            ctx->pc = 0x1DF8E0u;
            goto label_1df8e0;
        }
    }
    ctx->pc = 0x1DF8CCu;
    // 0x1df8cc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF8CCu;
    {
        const bool branch_taken_0x1df8cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df8cc) {
            ctx->pc = 0x1DF8E0u;
            goto label_1df8e0;
        }
    }
    ctx->pc = 0x1DF8D4u;
    // 0x1df8d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DF8D4u;
    {
        const bool branch_taken_0x1df8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df8d4) {
            ctx->pc = 0x1DF900u;
            goto label_1df900;
        }
    }
    ctx->pc = 0x1DF8DCu;
    // 0x1df8dc: 0x0  nop
    ctx->pc = 0x1df8dcu;
    // NOP
label_1df8e0:
    // 0x1df8e0: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1df8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x1df8e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1df8e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1df8e8: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1df8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1df8ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF8ECu;
    {
        const bool branch_taken_0x1df8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF8ECu;
            // 0x1df8f0: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8ec) {
            ctx->pc = 0x1DF900u;
            goto label_1df900;
        }
    }
    ctx->pc = 0x1DF8F4u;
    // 0x1df8f4: 0x0  nop
    ctx->pc = 0x1df8f4u;
    // NOP
label_1df8f8:
    // 0x1df8f8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1df8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1df8fc: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1df8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_1df900:
    // 0x1df900: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1df900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1df904: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1df904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1df908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df90c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1DF90Cu;
    SET_GPR_U32(ctx, 31, 0x1DF914u);
    ctx->pc = 0x1DF910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF90Cu;
            // 0x1df910: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF914u; }
        if (ctx->pc != 0x1DF914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF914u; }
        if (ctx->pc != 0x1DF914u) { return; }
    }
    ctx->pc = 0x1DF914u;
    // 0x1df914: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1df914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df918: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df91c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df91cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df928: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF928u;
            // 0x1df92c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF8E0u: goto label_1df8e0;
            case 0x1DF8F8u: goto label_1df8f8;
            case 0x1DF900u: goto label_1df900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF930u;
}
