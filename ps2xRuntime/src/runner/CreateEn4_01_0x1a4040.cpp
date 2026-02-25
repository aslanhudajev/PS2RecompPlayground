#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn4_01
// Address: 0x1a4040 - 0x1a4294
void CreateEn4_01_0x1a4040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn4_01_0x1a4040");
#endif

    ctx->pc = 0x1a4040u;

    // 0x1a4040: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1a4040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1a4044: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a4044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a4048: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a4048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a404c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a404cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a4050: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a4050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a4054: 0x246342d0  addiu       $v1, $v1, 0x42D0
    ctx->pc = 0x1a4054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17104));
    // 0x1a4058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a405c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a405cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4064: 0x24424550  addiu       $v0, $v0, 0x4550
    ctx->pc = 0x1a4064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17744));
    // 0x1a4068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a406c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a406cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4070: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1a4070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1a4074: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a4074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4078: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1a4078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1a407c: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a407cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a4080: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a4080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a4084: 0x24635830  addiu       $v1, $v1, 0x5830
    ctx->pc = 0x1a4084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22576));
    // 0x1a4088: 0x244242a0  addiu       $v0, $v0, 0x42A0
    ctx->pc = 0x1a4088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17056));
    // 0x1a408c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1a408cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1a4090: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1a4090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1a4094: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1a4094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1a4098: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1a4098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1a409c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A409Cu;
    SET_GPR_U32(ctx, 31, 0x1A40A4u);
    ctx->pc = 0x1A40A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A409Cu;
            // 0x1a40a0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A40A4u; }
        if (ctx->pc != 0x1A40A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A40A4u; }
        if (ctx->pc != 0x1A40A4u) { return; }
    }
    ctx->pc = 0x1A40A4u;
    // 0x1a40a4: 0xc060544  jal         func_181510
    ctx->pc = 0x1A40A4u;
    SET_GPR_U32(ctx, 31, 0x1A40ACu);
    ctx->pc = 0x1A40A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A40A4u;
            // 0x1a40a8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A40ACu; }
        if (ctx->pc != 0x1A40ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A40ACu; }
        if (ctx->pc != 0x1A40ACu) { return; }
    }
    ctx->pc = 0x1A40ACu;
    // 0x1a40ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a40acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a40b0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1a40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1a40b4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1a40b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a40b8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1a40b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1a40bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a40bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a40c0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1a40c0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a40c4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1a40c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a40c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a40cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a40ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a40d0: 0x2e610007  sltiu       $at, $s3, 0x7
    ctx->pc = 0x1a40d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a40d4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a40d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a40d8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a40d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a40dc: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1a40dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a40e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a40e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a40e4: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1a40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1a40e8: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1a40e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1a40ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a40f0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1a40f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1a40f4: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x1A40F4u;
    {
        const bool branch_taken_0x1a40f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A40F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A40F4u;
            // 0x1a40f8: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40f4) {
            ctx->pc = 0x1A4258u;
            goto label_1a4258;
        }
    }
    ctx->pc = 0x1A40FCu;
    // 0x1a40fc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1a40fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1a4100: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1a4100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a4104: 0x24632920  addiu       $v1, $v1, 0x2920
    ctx->pc = 0x1a4104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10528));
    // 0x1a4108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a410c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a4110: 0x400008  jr          $v0
    ctx->pc = 0x1A4110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4118u: goto label_1a4118;
            case 0x1A4140u: goto label_1a4140;
            case 0x1A4170u: goto label_1a4170;
            case 0x1A4198u: goto label_1a4198;
            case 0x1A41C0u: goto label_1a41c0;
            case 0x1A41E8u: goto label_1a41e8;
            case 0x1A4220u: goto label_1a4220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4118u;
label_1a4118:
    // 0x1a4118: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1a4118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1a411c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a411cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a4120: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1a4120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1a4124: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a4124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a4128: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1a4128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1a412c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a412cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a4130: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a4130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a4134: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1A4134u;
    {
        const bool branch_taken_0x1a4134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4134u;
            // 0x1a4138: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4134) {
            ctx->pc = 0x1A4258u;
            goto label_1a4258;
        }
    }
    ctx->pc = 0x1A413Cu;
    // 0x1a413c: 0x0  nop
    ctx->pc = 0x1a413cu;
    // NOP
label_1a4140:
    // 0x1a4140: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1a4140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1a4144: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x1a4144u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a4148: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1a4148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x1a414c: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1a414cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1a4150: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a4150u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1a4154: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1a4154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1a4158: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1a4158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1a415c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a415cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a4160: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a4160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a4164: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1A4164u;
    {
        const bool branch_taken_0x1a4164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4164u;
            // 0x1a4168: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4164) {
            ctx->pc = 0x1A4258u;
            goto label_1a4258;
        }
    }
    ctx->pc = 0x1A416Cu;
    // 0x1a416c: 0x0  nop
    ctx->pc = 0x1a416cu;
    // NOP
label_1a4170:
    // 0x1a4170: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1a4170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1a4174: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1a4174u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a4178: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a4178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1a417c: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1a417cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1a4180: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1a4180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1a4184: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1a4184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1a4188: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a4188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a418c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a418cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a4190: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1A4190u;
    {
        const bool branch_taken_0x1a4190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4190u;
            // 0x1a4194: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4190) {
            ctx->pc = 0x1A4258u;
            goto label_1a4258;
        }
    }
    ctx->pc = 0x1A4198u;
label_1a4198:
    // 0x1a4198: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1a4198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1a419c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1a419cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a41a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a41a4: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1a41a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1a41a8: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1a41a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1a41ac: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1a41acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1a41b0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a41b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a41b4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a41b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a41b8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1A41B8u;
    {
        const bool branch_taken_0x1a41b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A41BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41B8u;
            // 0x1a41bc: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a41b8) {
            ctx->pc = 0x1A4258u;
            goto label_1a4258;
        }
    }
    ctx->pc = 0x1A41C0u;
label_1a41c0:
    // 0x1a41c0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1a41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1a41c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a41c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a41c8: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1a41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1a41cc: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a41ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a41d0: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1a41d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1a41d4: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a41d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a41d8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a41dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A41DCu;
    {
        const bool branch_taken_0x1a41dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A41E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41DCu;
            // 0x1a41e0: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a41dc) {
            ctx->pc = 0x1A4258u;
            goto label_1a4258;
        }
    }
    ctx->pc = 0x1A41E4u;
    // 0x1a41e4: 0x0  nop
    ctx->pc = 0x1a41e4u;
    // NOP
label_1a41e8:
    // 0x1a41e8: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1a41ec: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1a41ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1a41f0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1a41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1a41f4: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1a41f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1a41f8: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1a41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1a41fc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1a41fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1a4200: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a4200u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a4204: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x1a4204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x1a4208: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a4208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a420c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a420cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a4210: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1a4210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1a4214: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4218: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A4218u;
    {
        const bool branch_taken_0x1a4218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4218u;
            // 0x1a421c: 0xac400118  sw          $zero, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4218) {
            ctx->pc = 0x1A4258u;
            goto label_1a4258;
        }
    }
    ctx->pc = 0x1A4220u;
label_1a4220:
    // 0x1a4220: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a4220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1a4224: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1a4224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1a4228: 0x3c02be99  lui         $v0, 0xBE99
    ctx->pc = 0x1a4228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48793 << 16));
    // 0x1a422c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1a422cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1a4230: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1a4230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1a4234: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1a4234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1a4238: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a4238u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a423c: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x1a423cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x1a4240: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a4240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a4244: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a4244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a4248: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1a4248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1a424c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4250: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x1a4250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x1a4254: 0x0  nop
    ctx->pc = 0x1a4254u;
    // NOP
label_1a4258:
    // 0x1a4258: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1A4258u;
    SET_GPR_U32(ctx, 31, 0x1A4260u);
    ctx->pc = 0x1A425Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4258u;
            // 0x1a425c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4260u; }
        if (ctx->pc != 0x1A4260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4260u; }
        if (ctx->pc != 0x1A4260u) { return; }
    }
    ctx->pc = 0x1A4260u;
    // 0x1a4260: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1a4260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1a4264: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x1a4264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a4268: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4268u;
    {
        const bool branch_taken_0x1a4268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A426Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4268u;
            // 0x1a426c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4268) {
            ctx->pc = 0x1A4278u;
            goto label_1a4278;
        }
    }
    ctx->pc = 0x1A4270u;
    // 0x1a4270: 0xc069154  jal         func_1A4550
    ctx->pc = 0x1A4270u;
    SET_GPR_U32(ctx, 31, 0x1A4278u);
    ctx->pc = 0x1A4550u;
    if (runtime->hasFunction(0x1A4550u)) {
        auto targetFn = runtime->lookupFunction(0x1A4550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4278u; }
        if (ctx->pc != 0x1A4278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En4_01Move_0x1a4550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4278u; }
        if (ctx->pc != 0x1A4278u) { return; }
    }
    ctx->pc = 0x1A4278u;
label_1a4278:
    // 0x1a4278: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a4278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a427c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a427cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4280: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a428c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A428Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A428Cu;
            // 0x1a4290: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4118u: goto label_1a4118;
            case 0x1A4140u: goto label_1a4140;
            case 0x1A4170u: goto label_1a4170;
            case 0x1A4198u: goto label_1a4198;
            case 0x1A41C0u: goto label_1a41c0;
            case 0x1A41E8u: goto label_1a41e8;
            case 0x1A4220u: goto label_1a4220;
            case 0x1A4258u: goto label_1a4258;
            case 0x1A4278u: goto label_1a4278;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4294u;
}
