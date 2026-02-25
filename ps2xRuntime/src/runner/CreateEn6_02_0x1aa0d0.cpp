#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_02
// Address: 0x1aa0d0 - 0x1aa384
void CreateEn6_02_0x1aa0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_02_0x1aa0d0");
#endif

    ctx->pc = 0x1aa0d0u;

    // 0x1aa0d0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1aa0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1aa0d4: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1aa0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1aa0d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1aa0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1aa0dc: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1aa0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1aa0e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1aa0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aa0e4: 0x2463a3c0  addiu       $v1, $v1, -0x5C40
    ctx->pc = 0x1aa0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943680));
    // 0x1aa0e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1aa0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aa0ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1aa0ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa0f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa0f4: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x1aa0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x1aa0f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aa0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa0fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1aa0fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa100: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1aa100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1aa104: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1aa104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa108: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1aa108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1aa10c: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1aa10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1aa110: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1aa110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1aa114: 0x2463b650  addiu       $v1, $v1, -0x49B0
    ctx->pc = 0x1aa114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948432));
    // 0x1aa118: 0x2442a390  addiu       $v0, $v0, -0x5C70
    ctx->pc = 0x1aa118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x1aa11c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1aa11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1aa120: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1aa120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1aa124: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1aa124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1aa128: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1aa128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1aa12c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AA12Cu;
    SET_GPR_U32(ctx, 31, 0x1AA134u);
    ctx->pc = 0x1AA130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA12Cu;
            // 0x1aa130: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA134u; }
        if (ctx->pc != 0x1AA134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA134u; }
        if (ctx->pc != 0x1AA134u) { return; }
    }
    ctx->pc = 0x1AA134u;
    // 0x1aa134: 0xc060544  jal         func_181510
    ctx->pc = 0x1AA134u;
    SET_GPR_U32(ctx, 31, 0x1AA13Cu);
    ctx->pc = 0x1AA138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA134u;
            // 0x1aa138: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA13Cu; }
        if (ctx->pc != 0x1AA13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA13Cu; }
        if (ctx->pc != 0x1AA13Cu) { return; }
    }
    ctx->pc = 0x1AA13Cu;
    // 0x1aa13c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1aa13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1aa140: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1aa140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1aa144: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1aa144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aa148: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1aa148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1aa14c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1aa14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1aa150: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1aa150u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aa154: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1aa154u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa158: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1aa158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa15c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1aa15cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aa160: 0x2e61000a  sltiu       $at, $s3, 0xA
    ctx->pc = 0x1aa160u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1aa164: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1aa164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1aa168: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aa168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1aa16c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1aa16cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1aa170: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aa174: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1aa174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1aa178: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1aa178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1aa17c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1aa17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa180: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1aa180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1aa184: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1aa184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1aa188: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
    ctx->pc = 0x1AA188u;
    {
        const bool branch_taken_0x1aa188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA188u;
            // 0x1aa18c: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa188) {
            ctx->pc = 0x1AA360u;
            goto label_1aa360;
        }
    }
    ctx->pc = 0x1AA190u;
    // 0x1aa190: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1aa190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1aa194: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1aa194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1aa198: 0x246329a0  addiu       $v1, $v1, 0x29A0
    ctx->pc = 0x1aa198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10656));
    // 0x1aa19c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aa1a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aa1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aa1a4: 0x400008  jr          $v0
    ctx->pc = 0x1AA1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA1B0u: goto label_1aa1b0;
            case 0x1AA1D8u: goto label_1aa1d8;
            case 0x1AA200u: goto label_1aa200;
            case 0x1AA248u: goto label_1aa248;
            case 0x1AA290u: goto label_1aa290;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2F0u: goto label_1aa2f0;
            case 0x1AA310u: goto label_1aa310;
            case 0x1AA338u: goto label_1aa338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA1ACu;
    // 0x1aa1ac: 0x0  nop
    ctx->pc = 0x1aa1acu;
    // NOP
label_1aa1b0:
    // 0x1aa1b0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1aa1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1aa1b4: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x1aa1b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1aa1b8: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1aa1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x1aa1bc: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1aa1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1aa1c0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1aa1c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1aa1c4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1aa1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1aa1c8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1aa1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1aa1cc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1aa1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1aa1d0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1AA1D0u;
    {
        const bool branch_taken_0x1aa1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1D0u;
            // 0x1aa1d4: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1d0) {
            ctx->pc = 0x1AA360u;
            goto label_1aa360;
        }
    }
    ctx->pc = 0x1AA1D8u;
label_1aa1d8:
    // 0x1aa1d8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1aa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1aa1dc: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x1aa1dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1aa1e0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1aa1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1aa1e4: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1aa1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1aa1e8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1aa1e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1aa1ec: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1aa1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1aa1f0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1aa1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1aa1f4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1aa1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1aa1f8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1AA1F8u;
    {
        const bool branch_taken_0x1aa1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1F8u;
            // 0x1aa1fc: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1f8) {
            ctx->pc = 0x1AA360u;
            goto label_1aa360;
        }
    }
    ctx->pc = 0x1AA200u;
label_1aa200:
    // 0x1aa200: 0x3c02be99  lui         $v0, 0xBE99
    ctx->pc = 0x1aa200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48793 << 16));
    // 0x1aa204: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1aa204u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1aa208: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1aa208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1aa20c: 0x3c02bc75  lui         $v0, 0xBC75
    ctx->pc = 0x1aa20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
    // 0x1aa210: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1aa210u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1aa214: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1aa214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1aa218: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1aa218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1aa21c: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1aa21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x1aa220: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1aa220u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1aa224: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1aa224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1aa228: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x1aa228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x1aa22c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1aa22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1aa230: 0x3443f5c3  ori         $v1, $v0, 0xF5C3
    ctx->pc = 0x1aa230u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62915u)));
    // 0x1aa234: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa238: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x1aa238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    // 0x1aa23c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa240: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1AA240u;
    {
        const bool branch_taken_0x1aa240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA240u;
            // 0x1aa244: 0xac430114  sw          $v1, 0x114($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa240) {
            ctx->pc = 0x1AA360u;
            goto label_1aa360;
        }
    }
    ctx->pc = 0x1AA248u;
label_1aa248:
    // 0x1aa248: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1aa248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1aa24c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1aa24cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1aa250: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1aa250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1aa254: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1aa254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x1aa258: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1aa258u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1aa25c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1aa25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1aa260: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1aa260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1aa264: 0x3c02bc75  lui         $v0, 0xBC75
    ctx->pc = 0x1aa264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
    // 0x1aa268: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1aa268u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1aa26c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1aa26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1aa270: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x1aa270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x1aa274: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1aa274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1aa278: 0x3443f5c3  ori         $v1, $v0, 0xF5C3
    ctx->pc = 0x1aa278u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62915u)));
    // 0x1aa27c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa280: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x1aa280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    // 0x1aa284: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa288: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1AA288u;
    {
        const bool branch_taken_0x1aa288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA288u;
            // 0x1aa28c: 0xac430114  sw          $v1, 0x114($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa288) {
            ctx->pc = 0x1AA360u;
            goto label_1aa360;
        }
    }
    ctx->pc = 0x1AA290u;
label_1aa290:
    // 0x1aa290: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1aa290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1aa294: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1aa294u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1aa298: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1aa298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1aa29c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1aa29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1aa2a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1aa2a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1aa2a4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1aa2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1aa2a8: 0x3c023be5  lui         $v0, 0x3BE5
    ctx->pc = 0x1aa2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15333 << 16));
    // 0x1aa2ac: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1aa2acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
    // 0x1aa2b0: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1aa2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1aa2b4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1aa2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1aa2b8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1AA2B8u;
    {
        const bool branch_taken_0x1aa2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2B8u;
            // 0x1aa2bc: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2b8) {
            ctx->pc = 0x1AA360u;
            goto label_1aa360;
        }
    }
    ctx->pc = 0x1AA2C0u;
label_1aa2c0:
    // 0x1aa2c0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1aa2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1aa2c4: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1aa2c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1aa2c8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1aa2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1aa2cc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1aa2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1aa2d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1aa2d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1aa2d4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1aa2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1aa2d8: 0x3c02bbe5  lui         $v0, 0xBBE5
    ctx->pc = 0x1aa2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48101 << 16));
    // 0x1aa2dc: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1aa2dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
    // 0x1aa2e0: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1aa2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1aa2e4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1aa2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1aa2e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1AA2E8u;
    {
        const bool branch_taken_0x1aa2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2E8u;
            // 0x1aa2ec: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2e8) {
            ctx->pc = 0x1AA360u;
            goto label_1aa360;
        }
    }
    ctx->pc = 0x1AA2F0u;
label_1aa2f0:
    // 0x1aa2f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aa2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa2f4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1aa2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1aa2f8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1aa2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1aa2fc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1aa2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1aa300: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1aa300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1aa304: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1AA304u;
    {
        const bool branch_taken_0x1aa304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA304u;
            // 0x1aa308: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa304) {
            ctx->pc = 0x1AA360u;
            goto label_1aa360;
        }
    }
    ctx->pc = 0x1AA30Cu;
    // 0x1aa30c: 0x0  nop
    ctx->pc = 0x1aa30cu;
    // NOP
label_1aa310:
    // 0x1aa310: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1aa310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1aa314: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1aa314u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1aa318: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1aa318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1aa31c: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1aa31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1aa320: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1aa320u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1aa324: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1aa324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1aa328: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1aa328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1aa32c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1aa32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1aa330: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AA330u;
    {
        const bool branch_taken_0x1aa330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA330u;
            // 0x1aa334: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa330) {
            ctx->pc = 0x1AA360u;
            goto label_1aa360;
        }
    }
    ctx->pc = 0x1AA338u;
label_1aa338:
    // 0x1aa338: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1aa338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1aa33c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1aa33cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1aa340: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1aa340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1aa344: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1aa344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1aa348: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1aa348u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1aa34c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1aa34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1aa350: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1aa350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1aa354: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1aa354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1aa358: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1aa358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1aa35c: 0x0  nop
    ctx->pc = 0x1aa35cu;
    // NOP
label_1aa360:
    // 0x1aa360: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1AA360u;
    SET_GPR_U32(ctx, 31, 0x1AA368u);
    ctx->pc = 0x1AA364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA360u;
            // 0x1aa364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA368u; }
        if (ctx->pc != 0x1AA368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA368u; }
        if (ctx->pc != 0x1AA368u) { return; }
    }
    ctx->pc = 0x1AA368u;
    // 0x1aa368: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1aa368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa36c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1aa36cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aa370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa37c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA37Cu;
            // 0x1aa380: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA1B0u: goto label_1aa1b0;
            case 0x1AA1D8u: goto label_1aa1d8;
            case 0x1AA200u: goto label_1aa200;
            case 0x1AA248u: goto label_1aa248;
            case 0x1AA290u: goto label_1aa290;
            case 0x1AA2C0u: goto label_1aa2c0;
            case 0x1AA2F0u: goto label_1aa2f0;
            case 0x1AA310u: goto label_1aa310;
            case 0x1AA338u: goto label_1aa338;
            case 0x1AA360u: goto label_1aa360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA384u;
}
