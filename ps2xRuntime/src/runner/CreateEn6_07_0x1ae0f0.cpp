#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_07
// Address: 0x1ae0f0 - 0x1ae21c
void CreateEn6_07_0x1ae0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_07_0x1ae0f0");
#endif

    ctx->pc = 0x1ae0f0u;

    // 0x1ae0f0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1ae0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1ae0f4: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1ae0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1ae0f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ae0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ae0fc: 0x2442e250  addiu       $v0, $v0, -0x1DB0
    ctx->pc = 0x1ae0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
    // 0x1ae100: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ae100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ae104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae108: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ae108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae10c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae110: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ae110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae114: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1ae114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1ae118: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ae118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae11c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1ae11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1ae120: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x1ae120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1ae124: 0x2442e460  addiu       $v0, $v0, -0x1BA0
    ctx->pc = 0x1ae124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960224));
    // 0x1ae128: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x1ae128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x1ae12c: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x1ae12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x1ae130: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1ae130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1ae134: 0x2442e870  addiu       $v0, $v0, -0x1790
    ctx->pc = 0x1ae134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961264));
    // 0x1ae138: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x1ae138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x1ae13c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1ae13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1ae140: 0x2442e220  addiu       $v0, $v0, -0x1DE0
    ctx->pc = 0x1ae140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959648));
    // 0x1ae144: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AE144u;
    SET_GPR_U32(ctx, 31, 0x1AE14Cu);
    ctx->pc = 0x1AE148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE144u;
            // 0x1ae148: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE14Cu; }
        if (ctx->pc != 0x1AE14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE14Cu; }
        if (ctx->pc != 0x1AE14Cu) { return; }
    }
    ctx->pc = 0x1AE14Cu;
    // 0x1ae14c: 0xc060544  jal         func_181510
    ctx->pc = 0x1AE14Cu;
    SET_GPR_U32(ctx, 31, 0x1AE154u);
    ctx->pc = 0x1AE150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE14Cu;
            // 0x1ae150: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE154u; }
        if (ctx->pc != 0x1AE154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE154u; }
        if (ctx->pc != 0x1AE154u) { return; }
    }
    ctx->pc = 0x1AE154u;
    // 0x1ae154: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ae154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ae158: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1ae158u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae15c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ae15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ae160: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1ae160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1ae164: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ae164u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae168: 0x0  nop
    ctx->pc = 0x1ae168u;
    // NOP
    // 0x1ae16c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ae16cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae170: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae174: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1ae174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1ae178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae17c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ae17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae180: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1ae180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1ae184: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AE184u;
    SET_GPR_U32(ctx, 31, 0x1AE18Cu);
    ctx->pc = 0x1AE188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE184u;
            // 0x1ae188: 0xafb20058  sw          $s2, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE18Cu; }
        if (ctx->pc != 0x1AE18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE18Cu; }
        if (ctx->pc != 0x1AE18Cu) { return; }
    }
    ctx->pc = 0x1AE18Cu;
    // 0x1ae18c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ae18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ae190: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae194: 0x0  nop
    ctx->pc = 0x1ae194u;
    // NOP
    // 0x1ae198: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae19c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AE19Cu;
    SET_GPR_U32(ctx, 31, 0x1AE1A4u);
    ctx->pc = 0x1AE1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE19Cu;
            // 0x1ae1a0: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1A4u; }
        if (ctx->pc != 0x1AE1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1A4u; }
        if (ctx->pc != 0x1AE1A4u) { return; }
    }
    ctx->pc = 0x1AE1A4u;
    // 0x1ae1a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ae1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ae1a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae1ac: 0x0  nop
    ctx->pc = 0x1ae1acu;
    // NOP
    // 0x1ae1b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae1b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae1b4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AE1B4u;
    SET_GPR_U32(ctx, 31, 0x1AE1BCu);
    ctx->pc = 0x1AE1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1B4u;
            // 0x1ae1b8: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1BCu; }
        if (ctx->pc != 0x1AE1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1BCu; }
        if (ctx->pc != 0x1AE1BCu) { return; }
    }
    ctx->pc = 0x1AE1BCu;
    // 0x1ae1bc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ae1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ae1c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ae1c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ae1c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae1c8: 0x0  nop
    ctx->pc = 0x1ae1c8u;
    // NOP
    // 0x1ae1cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ae1ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae1d0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AE1D0u;
    SET_GPR_U32(ctx, 31, 0x1AE1D8u);
    ctx->pc = 0x1AE1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1D0u;
            // 0x1ae1d4: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1D8u; }
        if (ctx->pc != 0x1AE1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1D8u; }
        if (ctx->pc != 0x1AE1D8u) { return; }
    }
    ctx->pc = 0x1AE1D8u;
    // 0x1ae1d8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ae1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ae1dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ae1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ae1e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ae1e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ae1e4: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x1ae1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x1ae1e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae1ec: 0x0  nop
    ctx->pc = 0x1ae1ecu;
    // NOP
    // 0x1ae1f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ae1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae1f4: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1AE1F4u;
    SET_GPR_U32(ctx, 31, 0x1AE1FCu);
    ctx->pc = 0x1AE1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1F4u;
            // 0x1ae1f8: 0xe7a00120  swc1        $f0, 0x120($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1FCu; }
        if (ctx->pc != 0x1AE1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1FCu; }
        if (ctx->pc != 0x1AE1FCu) { return; }
    }
    ctx->pc = 0x1AE1FCu;
    // 0x1ae1fc: 0xc06b918  jal         func_1AE460
    ctx->pc = 0x1AE1FCu;
    SET_GPR_U32(ctx, 31, 0x1AE204u);
    ctx->pc = 0x1AE200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1FCu;
            // 0x1ae200: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE460u;
    if (runtime->hasFunction(0x1AE460u)) {
        auto targetFn = runtime->lookupFunction(0x1AE460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE204u; }
        if (ctx->pc != 0x1AE204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En6_07Move_0x1ae460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE204u; }
        if (ctx->pc != 0x1AE204u) { return; }
    }
    ctx->pc = 0x1AE204u;
    // 0x1ae204: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ae204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae208: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ae208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae20c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae214: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE214u;
            // 0x1ae218: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE21Cu;
}
