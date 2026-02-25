#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn2_04
// Address: 0x1996c0 - 0x199828
void CreateEn2_04_0x1996c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn2_04_0x1996c0");
#endif

    ctx->pc = 0x1996c0u;

    // 0x1996c0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1996c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1996c4: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1996c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1996c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1996c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1996cc: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1996ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1996d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1996d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1996d4: 0x24639860  addiu       $v1, $v1, -0x67A0
    ctx->pc = 0x1996d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940768));
    // 0x1996d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1996d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1996dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1996dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1996e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1996e4: 0x24429b30  addiu       $v0, $v0, -0x64D0
    ctx->pc = 0x1996e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941488));
    // 0x1996e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1996e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1996ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1996ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996f0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1996f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1996f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1996f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996f8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1996f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1996fc: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1996fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x199700: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x199700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x199704: 0x2463acd0  addiu       $v1, $v1, -0x5330
    ctx->pc = 0x199704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946000));
    // 0x199708: 0x24429830  addiu       $v0, $v0, -0x67D0
    ctx->pc = 0x199708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940720));
    // 0x19970c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x19970cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x199710: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x199710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x199714: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x199714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x199718: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x199718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x19971c: 0xc060694  jal         func_181A50
    ctx->pc = 0x19971Cu;
    SET_GPR_U32(ctx, 31, 0x199724u);
    ctx->pc = 0x199720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19971Cu;
            // 0x199720: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199724u; }
        if (ctx->pc != 0x199724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199724u; }
        if (ctx->pc != 0x199724u) { return; }
    }
    ctx->pc = 0x199724u;
    // 0x199724: 0xc060544  jal         func_181510
    ctx->pc = 0x199724u;
    SET_GPR_U32(ctx, 31, 0x19972Cu);
    ctx->pc = 0x199728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199724u;
            // 0x199728: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19972Cu; }
        if (ctx->pc != 0x19972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19972Cu; }
        if (ctx->pc != 0x19972Cu) { return; }
    }
    ctx->pc = 0x19972Cu;
    // 0x19972c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x19972cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x199730: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x199730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x199734: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x199734u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199738: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x199738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19973c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19973cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199740: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x199740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x199744: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x199744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x199748: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x199748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x19974c: 0xe4810120  swc1        $f1, 0x120($a0)
    ctx->pc = 0x19974cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x199750: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199754: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x199754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199758: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x199758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x19975c: 0xc4203520  lwc1        $f0, 0x3520($at)
    ctx->pc = 0x19975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199760: 0xafb30068  sw          $s3, 0x68($sp)
    ctx->pc = 0x199760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
    // 0x199764: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x199764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x199768: 0x0  nop
    ctx->pc = 0x199768u;
    // NOP
    // 0x19976c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19976cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x199770: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x199770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x199774: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x199774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x199778: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x199778u;
    {
        const bool branch_taken_0x199778 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x19977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199778u;
            // 0x19977c: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199778) {
            ctx->pc = 0x1997F0u;
            goto label_1997f0;
        }
    }
    ctx->pc = 0x199780u;
    // 0x199780: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199784: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x199784u;
    {
        const bool branch_taken_0x199784 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x199788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199784u;
            // 0x199788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199784) {
            ctx->pc = 0x1997D8u;
            goto label_1997d8;
        }
    }
    ctx->pc = 0x19978Cu;
    // 0x19978c: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19978Cu;
    {
        const bool branch_taken_0x19978c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x19978c) {
            ctx->pc = 0x1997C0u;
            goto label_1997c0;
        }
    }
    ctx->pc = 0x199794u;
    // 0x199794: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x199794u;
    {
        const bool branch_taken_0x199794 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x199794) {
            ctx->pc = 0x1997A8u;
            goto label_1997a8;
        }
    }
    ctx->pc = 0x19979Cu;
    // 0x19979c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19979Cu;
    {
        const bool branch_taken_0x19979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19979c) {
            ctx->pc = 0x1997F8u;
            goto label_1997f8;
        }
    }
    ctx->pc = 0x1997A4u;
    // 0x1997a4: 0x0  nop
    ctx->pc = 0x1997a4u;
    // NOP
label_1997a8:
    // 0x1997a8: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1997a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1997ac: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1997acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1997b0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1997b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1997b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1997B4u;
    {
        const bool branch_taken_0x1997b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997B4u;
            // 0x1997b8: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997b4) {
            ctx->pc = 0x1997F8u;
            goto label_1997f8;
        }
    }
    ctx->pc = 0x1997BCu;
    // 0x1997bc: 0x0  nop
    ctx->pc = 0x1997bcu;
    // NOP
label_1997c0:
    // 0x1997c0: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x1997c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x1997c4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1997c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1997c8: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1997c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1997cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1997CCu;
    {
        const bool branch_taken_0x1997cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997CCu;
            // 0x1997d0: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997cc) {
            ctx->pc = 0x1997F8u;
            goto label_1997f8;
        }
    }
    ctx->pc = 0x1997D4u;
    // 0x1997d4: 0x0  nop
    ctx->pc = 0x1997d4u;
    // NOP
label_1997d8:
    // 0x1997d8: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1997d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x1997dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1997dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1997e0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1997e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1997e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1997E4u;
    {
        const bool branch_taken_0x1997e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997E4u;
            // 0x1997e8: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997e4) {
            ctx->pc = 0x1997F8u;
            goto label_1997f8;
        }
    }
    ctx->pc = 0x1997ECu;
    // 0x1997ec: 0x0  nop
    ctx->pc = 0x1997ecu;
    // NOP
label_1997f0:
    // 0x1997f0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1997f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1997f4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1997f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_1997f8:
    // 0x1997f8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1997f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1997fc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1997fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x199800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199804: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x199804u;
    SET_GPR_U32(ctx, 31, 0x19980Cu);
    ctx->pc = 0x199808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199804u;
            // 0x199808: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19980Cu; }
        if (ctx->pc != 0x19980Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19980Cu; }
        if (ctx->pc != 0x19980Cu) { return; }
    }
    ctx->pc = 0x19980Cu;
    // 0x19980c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19980cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199810: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x199810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199814: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x199814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199818: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19981c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19981cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199820: 0x3e00008  jr          $ra
    ctx->pc = 0x199820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199820u;
            // 0x199824: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1997A8u: goto label_1997a8;
            case 0x1997C0u: goto label_1997c0;
            case 0x1997D8u: goto label_1997d8;
            case 0x1997F0u: goto label_1997f0;
            case 0x1997F8u: goto label_1997f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199828u;
}
