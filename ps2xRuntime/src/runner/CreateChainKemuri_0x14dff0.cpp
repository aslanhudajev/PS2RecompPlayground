#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateChainKemuri
// Address: 0x14dff0 - 0x14e1e0
void CreateChainKemuri_0x14dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateChainKemuri_0x14dff0");
#endif

    ctx->pc = 0x14dff0u;

    // 0x14dff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14dff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14dff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14dff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14dff8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14dffc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14dffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14e000: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14e000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e004: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e008: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14e008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e00c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14e00cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14e010: 0x2a23ff10  slti        $v1, $s1, -0xF0
    ctx->pc = 0x14e010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x14e014: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14e014u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14e018: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14e018u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x14e01c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E01Cu;
    {
        const bool branch_taken_0x14e01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E01Cu;
            // 0x14e020: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e01c) {
            ctx->pc = 0x14E030u;
            goto label_14e030;
        }
    }
    ctx->pc = 0x14E024u;
    // 0x14e024: 0x2a2100f1  slti        $at, $s1, 0xF1
    ctx->pc = 0x14e024u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x14e028: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E028u;
    {
        const bool branch_taken_0x14e028 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e028) {
            ctx->pc = 0x14E038u;
            goto label_14e038;
        }
    }
    ctx->pc = 0x14E030u;
label_14e030:
    // 0x14e030: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x14E030u;
    {
        const bool branch_taken_0x14e030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e030) {
            ctx->pc = 0x14E1C0u;
            goto label_14e1c0;
        }
    }
    ctx->pc = 0x14E038u;
label_14e038:
    // 0x14e038: 0xc053bf8  jal         func_14EFE0
    ctx->pc = 0x14E038u;
    SET_GPR_U32(ctx, 31, 0x14E040u);
    ctx->pc = 0x14EFE0u;
    if (runtime->hasFunction(0x14EFE0u)) {
        auto targetFn = runtime->lookupFunction(0x14EFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E040u; }
        if (ctx->pc != 0x14E040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionAlloc_0x14efe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E040u; }
        if (ctx->pc != 0x14E040u) { return; }
    }
    ctx->pc = 0x14E040u;
    // 0x14e040: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E040u;
    SET_GPR_U32(ctx, 31, 0x14E048u);
    ctx->pc = 0x14E044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E040u;
            // 0x14e044: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E048u; }
        if (ctx->pc != 0x14E048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E048u; }
        if (ctx->pc != 0x14E048u) { return; }
    }
    ctx->pc = 0x14E048u;
    // 0x14e048: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14e048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e04c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14e04cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14e050: 0x0  nop
    ctx->pc = 0x14e050u;
    // NOP
    // 0x14e054: 0x0  nop
    ctx->pc = 0x14e054u;
    // NOP
    // 0x14e058: 0x1010  mfhi        $v0
    ctx->pc = 0x14e058u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14e05c: 0xc05c018  jal         func_170060
    ctx->pc = 0x14E05Cu;
    SET_GPR_U32(ctx, 31, 0x14E064u);
    ctx->pc = 0x14E060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E05Cu;
            // 0x14e060: 0x2444000f  addiu       $a0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170060u;
    if (runtime->hasFunction(0x170060u)) {
        auto targetFn = runtime->lookupFunction(0x170060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E064u; }
        if (ctx->pc != 0x14E064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVData_0x170060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E064u; }
        if (ctx->pc != 0x14E064u) { return; }
    }
    ctx->pc = 0x14E064u;
    // 0x14e064: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x14e064u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e068: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14e068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14e06c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x14e06cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e070: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x14e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14e074: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14e074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14e078: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14e078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x14e07c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14e07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14e080: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x14e080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x14e084: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x14E084u;
    SET_GPR_U32(ctx, 31, 0x14E08Cu);
    ctx->pc = 0x14E088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E084u;
            // 0x14e088: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E08Cu; }
        if (ctx->pc != 0x14E08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E08Cu; }
        if (ctx->pc != 0x14E08Cu) { return; }
    }
    ctx->pc = 0x14E08Cu;
    // 0x14e08c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14e090: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14e090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14e094: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14e094u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14e098: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e09c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e0a0: 0x0  nop
    ctx->pc = 0x14e0a0u;
    // NOP
    // 0x14e0a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e0a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e0a8: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x14e0a8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x14e0ac: 0x0  nop
    ctx->pc = 0x14e0acu;
    // NOP
    // 0x14e0b0: 0x0  nop
    ctx->pc = 0x14e0b0u;
    // NOP
    // 0x14e0b4: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14E0B4u;
    SET_GPR_U32(ctx, 31, 0x14E0BCu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0BCu; }
        if (ctx->pc != 0x14E0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E0BCu; }
        if (ctx->pc != 0x14E0BCu) { return; }
    }
    ctx->pc = 0x14E0BCu;
    // 0x14e0bc: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14e0c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14e0c4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e0c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e0c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e0cc: 0x0  nop
    ctx->pc = 0x14e0ccu;
    // NOP
    // 0x14e0d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e0d4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x14e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x14e0d8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14e0dc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14e0dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14e0e0: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14e0e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14e0e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e0e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e0ec: 0x0  nop
    ctx->pc = 0x14e0ecu;
    // NOP
    // 0x14e0f0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14e0f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14e0f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x14e0f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x14e0f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e0fc: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x14E0FCu;
    SET_GPR_U32(ctx, 31, 0x14E104u);
    ctx->pc = 0x14E100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E0FCu;
            // 0x14e100: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E104u; }
        if (ctx->pc != 0x14E104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E104u; }
        if (ctx->pc != 0x14E104u) { return; }
    }
    ctx->pc = 0x14E104u;
    // 0x14e104: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14e104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14e108: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14e108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14e10c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14e10cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14e110: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e114: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e118: 0x0  nop
    ctx->pc = 0x14e118u;
    // NOP
    // 0x14e11c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e11cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e120: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x14e120u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x14e124: 0x0  nop
    ctx->pc = 0x14e124u;
    // NOP
    // 0x14e128: 0x0  nop
    ctx->pc = 0x14e128u;
    // NOP
    // 0x14e12c: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14E12Cu;
    SET_GPR_U32(ctx, 31, 0x14E134u);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E134u; }
        if (ctx->pc != 0x14E134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E134u; }
        if (ctx->pc != 0x14E134u) { return; }
    }
    ctx->pc = 0x14E134u;
    // 0x14e134: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14e134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14e138: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14e138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14e13c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e144: 0x0  nop
    ctx->pc = 0x14e144u;
    // NOP
    // 0x14e148: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e14c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x14e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x14e150: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14e150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14e154: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14e154u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14e158: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14e158u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14e15c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e15cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e164: 0x0  nop
    ctx->pc = 0x14e164u;
    // NOP
    // 0x14e168: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14e168u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14e16c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14e16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14e170: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e174: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E174u;
    SET_GPR_U32(ctx, 31, 0x14E17Cu);
    ctx->pc = 0x14E178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E174u;
            // 0x14e178: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E17Cu; }
        if (ctx->pc != 0x14E17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E17Cu; }
        if (ctx->pc != 0x14E17Cu) { return; }
    }
    ctx->pc = 0x14E17Cu;
    // 0x14e17c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14e180: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14e180u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x14e184: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x14e184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x14e188: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E188u;
    SET_GPR_U32(ctx, 31, 0x14E190u);
    ctx->pc = 0x14E18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E188u;
            // 0x14e18c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E190u; }
        if (ctx->pc != 0x14E190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E190u; }
        if (ctx->pc != 0x14E190u) { return; }
    }
    ctx->pc = 0x14E190u;
    // 0x14e190: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14e190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14e194: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x14e194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x14e198: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14e198u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14e19c: 0x24849884  addiu       $a0, $a0, -0x677C
    ctx->pc = 0x14e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940804));
    // 0x14e1a0: 0x0  nop
    ctx->pc = 0x14e1a0u;
    // NOP
    // 0x14e1a4: 0x2810  mfhi        $a1
    ctx->pc = 0x14e1a4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x14e1a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e1ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14e1acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14e1b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14e1b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e1b8: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x14e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x14e1bc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x14e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_14e1c0:
    // 0x14e1c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14e1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e1c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14e1c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e1c8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14e1cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14e1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e1d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14e1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14e1d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e1d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x14E1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E1D8u;
            // 0x14e1dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E030u: goto label_14e030;
            case 0x14E038u: goto label_14e038;
            case 0x14E1C0u: goto label_14e1c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E1E0u;
}
