#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn3_01
// Address: 0x19b260 - 0x19b464
void CreateEn3_01_0x19b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn3_01_0x19b260");
#endif

    ctx->pc = 0x19b260u;

    // 0x19b260: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x19b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x19b264: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x19b264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x19b268: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19b268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19b26c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19b270: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19b274: 0x2463b4a0  addiu       $v1, $v1, -0x4B60
    ctx->pc = 0x19b274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948000));
    // 0x19b278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b27c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19b27cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b284: 0x2442b720  addiu       $v0, $v0, -0x48E0
    ctx->pc = 0x19b284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948640));
    // 0x19b288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b28c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19b28cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b290: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x19b290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x19b294: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19b294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b298: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x19b298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x19b29c: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x19b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x19b2a0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19b2a4: 0x2463bd80  addiu       $v1, $v1, -0x4280
    ctx->pc = 0x19b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950272));
    // 0x19b2a8: 0x2442b470  addiu       $v0, $v0, -0x4B90
    ctx->pc = 0x19b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947952));
    // 0x19b2ac: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x19b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x19b2b0: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x19b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x19b2b4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x19b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x19b2b8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x19b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x19b2bc: 0xc060694  jal         func_181A50
    ctx->pc = 0x19B2BCu;
    SET_GPR_U32(ctx, 31, 0x19B2C4u);
    ctx->pc = 0x19B2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2BCu;
            // 0x19b2c0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2C4u; }
        if (ctx->pc != 0x19B2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2C4u; }
        if (ctx->pc != 0x19B2C4u) { return; }
    }
    ctx->pc = 0x19B2C4u;
    // 0x19b2c4: 0xc060544  jal         func_181510
    ctx->pc = 0x19B2C4u;
    SET_GPR_U32(ctx, 31, 0x19B2CCu);
    ctx->pc = 0x19B2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2C4u;
            // 0x19b2c8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2CCu; }
        if (ctx->pc != 0x19B2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2CCu; }
        if (ctx->pc != 0x19B2CCu) { return; }
    }
    ctx->pc = 0x19B2CCu;
    // 0x19b2cc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19b2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19b2d0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x19b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x19b2d4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x19b2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19b2d8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x19b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x19b2dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19b2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19b2e0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x19b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19b2e4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x19b2e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b2e8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x19b2e8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b2ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19b2f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b2f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19b2f4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x19b2f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x19b2f8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b2f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19b2fc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x19b2fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19b300: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19b304: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x19b304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x19b308: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x19b308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x19b30c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x19b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19b310: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x19b310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x19b314: 0x12620036  beq         $s3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x19B314u;
    {
        const bool branch_taken_0x19b314 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B314u;
            // 0x19b318: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b314) {
            ctx->pc = 0x19B3F0u;
            goto label_19b3f0;
        }
    }
    ctx->pc = 0x19B31Cu;
    // 0x19b31c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b320: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x19B320u;
    {
        const bool branch_taken_0x19b320 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B320u;
            // 0x19b324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b320) {
            ctx->pc = 0x19B398u;
            goto label_19b398;
        }
    }
    ctx->pc = 0x19B328u;
    // 0x19b328: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19B328u;
    {
        const bool branch_taken_0x19b328 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b328) {
            ctx->pc = 0x19B370u;
            goto label_19b370;
        }
    }
    ctx->pc = 0x19B330u;
    // 0x19b330: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B330u;
    {
        const bool branch_taken_0x19b330 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b330) {
            ctx->pc = 0x19B340u;
            goto label_19b340;
        }
    }
    ctx->pc = 0x19B338u;
    // 0x19b338: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x19B338u;
    {
        const bool branch_taken_0x19b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b338) {
            ctx->pc = 0x19B440u;
            goto label_19b440;
        }
    }
    ctx->pc = 0x19B340u;
label_19b340:
    // 0x19b340: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x19b340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x19b344: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x19b344u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x19b348: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x19b348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x19b34c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x19b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x19b350: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x19b350u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x19b354: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x19b354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x19b358: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x19b358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x19b35c: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x19b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x19b360: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19b360u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x19b364: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x19b364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x19b368: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x19B368u;
    {
        const bool branch_taken_0x19b368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B368u;
            // 0x19b36c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b368) {
            ctx->pc = 0x19B440u;
            goto label_19b440;
        }
    }
    ctx->pc = 0x19B370u;
label_19b370:
    // 0x19b370: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x19b370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x19b374: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x19b374u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x19b378: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x19b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x19b37c: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x19b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x19b380: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19b380u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x19b384: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x19b384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x19b388: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x19b388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x19b38c: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x19b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x19b390: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x19B390u;
    {
        const bool branch_taken_0x19b390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B390u;
            // 0x19b394: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b390) {
            ctx->pc = 0x19B440u;
            goto label_19b440;
        }
    }
    ctx->pc = 0x19B398u;
label_19b398:
    // 0x19b398: 0x3c03bf4c  lui         $v1, 0xBF4C
    ctx->pc = 0x19b398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48972 << 16));
    // 0x19b39c: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x19b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
    // 0x19b3a0: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x19b3a0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x19b3a4: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x19b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x19b3a8: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x19b3a8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x19b3ac: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x19b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
    // 0x19b3b0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x19b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x19b3b4: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x19b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x19b3b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19b3b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x19b3bc: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x19b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x19b3c0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x19b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x19b3c4: 0x3c023fd5  lui         $v0, 0x3FD5
    ctx->pc = 0x19b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16341 << 16));
    // 0x19b3c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b3cc: 0x3445c28f  ori         $a1, $v0, 0xC28F
    ctx->pc = 0x19b3ccu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x19b3d0: 0x3c02bfd5  lui         $v0, 0xBFD5
    ctx->pc = 0x19b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49109 << 16));
    // 0x19b3d4: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x19b3d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x19b3d8: 0xac850114  sw          $a1, 0x114($a0)
    ctx->pc = 0x19b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
    // 0x19b3dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b3e0: 0xac430110  sw          $v1, 0x110($v0)
    ctx->pc = 0x19b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 3));
    // 0x19b3e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b3e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19B3E8u;
    {
        const bool branch_taken_0x19b3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B3E8u;
            // 0x19b3ec: 0xac400118  sw          $zero, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3e8) {
            ctx->pc = 0x19B440u;
            goto label_19b440;
        }
    }
    ctx->pc = 0x19B3F0u;
label_19b3f0:
    // 0x19b3f0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x19b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x19b3f4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x19b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x19b3f8: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x19b3f8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x19b3fc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x19b3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x19b400: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x19b400u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x19b404: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x19b404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
    // 0x19b408: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x19b408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x19b40c: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x19b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x19b410: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19b410u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x19b414: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x19b414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x19b418: 0x3c02bfd5  lui         $v0, 0xBFD5
    ctx->pc = 0x19b418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49109 << 16));
    // 0x19b41c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x19b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x19b420: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x19b420u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x19b424: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19b424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b428: 0xac430114  sw          $v1, 0x114($v0)
    ctx->pc = 0x19b428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
    // 0x19b42c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b430: 0xac430110  sw          $v1, 0x110($v0)
    ctx->pc = 0x19b430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 3));
    // 0x19b434: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b438: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x19b438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x19b43c: 0x0  nop
    ctx->pc = 0x19b43cu;
    // NOP
label_19b440:
    // 0x19b440: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x19B440u;
    SET_GPR_U32(ctx, 31, 0x19B448u);
    ctx->pc = 0x19B444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B440u;
            // 0x19b444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B448u; }
        if (ctx->pc != 0x19B448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B448u; }
        if (ctx->pc != 0x19B448u) { return; }
    }
    ctx->pc = 0x19B448u;
    // 0x19b448: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19b448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b44c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19b44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b450: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b45c: 0x3e00008  jr          $ra
    ctx->pc = 0x19B45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B45Cu;
            // 0x19b460: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B340u: goto label_19b340;
            case 0x19B370u: goto label_19b370;
            case 0x19B398u: goto label_19b398;
            case 0x19B3F0u: goto label_19b3f0;
            case 0x19B440u: goto label_19b440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B464u;
}
