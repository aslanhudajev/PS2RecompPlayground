#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn8_bitB
// Address: 0x1e3080 - 0x1e324c
void CreateEn8_bitB_0x1e3080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn8_bitB_0x1e3080");
#endif

    ctx->pc = 0x1e3080u;

    // 0x1e3080: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1e3080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1e3084: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e3084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e3088: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e3088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e308c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e308cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e3090: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e3090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e3094: 0x24633280  addiu       $v1, $v1, 0x3280
    ctx->pc = 0x1e3094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12928));
    // 0x1e3098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e309c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e309cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e30a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e30a4: 0x24424270  addiu       $v0, $v0, 0x4270
    ctx->pc = 0x1e30a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17008));
    // 0x1e30a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e30a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e30ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e30acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30b0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1e30b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1e30b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e30b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30b8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1e30b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1e30bc: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e30bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e30c0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e30c4: 0x24634fa0  addiu       $v1, $v1, 0x4FA0
    ctx->pc = 0x1e30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20384));
    // 0x1e30c8: 0x24423250  addiu       $v0, $v0, 0x3250
    ctx->pc = 0x1e30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12880));
    // 0x1e30cc: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1e30ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1e30d0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1e30d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1e30d4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1e30d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1e30d8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1e30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1e30dc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E30DCu;
    SET_GPR_U32(ctx, 31, 0x1E30E4u);
    ctx->pc = 0x1E30E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30DCu;
            // 0x1e30e0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E30E4u; }
        if (ctx->pc != 0x1E30E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E30E4u; }
        if (ctx->pc != 0x1E30E4u) { return; }
    }
    ctx->pc = 0x1E30E4u;
    // 0x1e30e4: 0xc060544  jal         func_181510
    ctx->pc = 0x1E30E4u;
    SET_GPR_U32(ctx, 31, 0x1E30ECu);
    ctx->pc = 0x1E30E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E30E4u;
            // 0x1e30e8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E30ECu; }
        if (ctx->pc != 0x1E30ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E30ECu; }
        if (ctx->pc != 0x1E30ECu) { return; }
    }
    ctx->pc = 0x1E30ECu;
    // 0x1e30ec: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1e30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1e30f0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1e30f0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e30f4: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x1e30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x1e30f8: 0x2e610008  sltiu       $at, $s3, 0x8
    ctx->pc = 0x1e30f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e30fc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1e30fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1e3100: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e3100u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3104: 0x0  nop
    ctx->pc = 0x1e3104u;
    // NOP
    // 0x1e3108: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e3108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e310c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3110: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1e3110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1e3114: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e3118: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e3118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e311c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1e311cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1e3120: 0xafb30068  sw          $s3, 0x68($sp)
    ctx->pc = 0x1e3120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
    // 0x1e3124: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E3124u;
    {
        const bool branch_taken_0x1e3124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3124u;
            // 0x1e3128: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3124) {
            ctx->pc = 0x1E3220u;
            goto label_1e3220;
        }
    }
    ctx->pc = 0x1E312Cu;
    // 0x1e312c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e312cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e3130: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1e3130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e3134: 0x24632e40  addiu       $v1, $v1, 0x2E40
    ctx->pc = 0x1e3134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11840));
    // 0x1e3138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e313c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3140: 0x400008  jr          $v0
    ctx->pc = 0x1E3140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3148u: goto label_1e3148;
            case 0x1E3180u: goto label_1e3180;
            case 0x1E31B8u: goto label_1e31b8;
            case 0x1E31F0u: goto label_1e31f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3148u;
label_1e3148:
    // 0x1e3148: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1e3148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1e314c: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1e314cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1e3150: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1e3150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1e3154: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e3154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e3158: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e3158u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e315c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e315cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e3160: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1e3160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1e3164: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1e3164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1e3168: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e3168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e316c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e316cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e3170: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e3170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e3174: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1E3174u;
    {
        const bool branch_taken_0x1e3174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3174u;
            // 0x1e3178: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3174) {
            ctx->pc = 0x1E3220u;
            goto label_1e3220;
        }
    }
    ctx->pc = 0x1E317Cu;
    // 0x1e317c: 0x0  nop
    ctx->pc = 0x1e317cu;
    // NOP
label_1e3180:
    // 0x1e3180: 0x3c02bf66  lui         $v0, 0xBF66
    ctx->pc = 0x1e3180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48998 << 16));
    // 0x1e3184: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1e3184u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1e3188: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1e3188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1e318c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e318cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e3190: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e3190u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e3194: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e3194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e3198: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1e3198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1e319c: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1e319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1e31a0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e31a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e31a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e31a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e31a8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e31a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e31ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E31ACu;
    {
        const bool branch_taken_0x1e31ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E31B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31ACu;
            // 0x1e31b0: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31ac) {
            ctx->pc = 0x1E3220u;
            goto label_1e3220;
        }
    }
    ctx->pc = 0x1E31B4u;
    // 0x1e31b4: 0x0  nop
    ctx->pc = 0x1e31b4u;
    // NOP
label_1e31b8:
    // 0x1e31b8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1e31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1e31bc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1e31bcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e31c0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1e31c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1e31c4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e31c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e31c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e31c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e31cc: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e31ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e31d0: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1e31d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1e31d4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1e31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1e31d8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e31d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e31dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e31dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e31e0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e31e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e31e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E31E4u;
    {
        const bool branch_taken_0x1e31e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E31E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31E4u;
            // 0x1e31e8: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31e4) {
            ctx->pc = 0x1E3220u;
            goto label_1e3220;
        }
    }
    ctx->pc = 0x1E31ECu;
    // 0x1e31ec: 0x0  nop
    ctx->pc = 0x1e31ecu;
    // NOP
label_1e31f0:
    // 0x1e31f0: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x1e31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x1e31f4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1e31f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e31f8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1e31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1e31fc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e31fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e3200: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e3200u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e3204: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e3204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e3208: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1e3208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1e320c: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1e320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1e3210: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e3210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e3214: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e3214u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e3218: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e3218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e321c: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1e321cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1e3220:
    // 0x1e3220: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1E3220u;
    SET_GPR_U32(ctx, 31, 0x1E3228u);
    ctx->pc = 0x1E3224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3220u;
            // 0x1e3224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3228u; }
        if (ctx->pc != 0x1E3228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3228u; }
        if (ctx->pc != 0x1E3228u) { return; }
    }
    ctx->pc = 0x1E3228u;
    // 0x1e3228: 0xc07909c  jal         func_1E4270
    ctx->pc = 0x1E3228u;
    SET_GPR_U32(ctx, 31, 0x1E3230u);
    ctx->pc = 0x1E322Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3228u;
            // 0x1e322c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4270u;
    if (runtime->hasFunction(0x1E4270u)) {
        auto targetFn = runtime->lookupFunction(0x1E4270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3230u; }
        if (ctx->pc != 0x1E3230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En8_bitMoveB_0x1e4270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3230u; }
        if (ctx->pc != 0x1E3230u) { return; }
    }
    ctx->pc = 0x1E3230u;
    // 0x1e3230: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e3230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3234: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e3234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3238: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e323c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e323cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3244: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3244u;
            // 0x1e3248: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3148u: goto label_1e3148;
            case 0x1E3180u: goto label_1e3180;
            case 0x1E31B8u: goto label_1e31b8;
            case 0x1E31F0u: goto label_1e31f0;
            case 0x1E3220u: goto label_1e3220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E324Cu;
}
