#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage5Boss
// Address: 0x1bf980 - 0x1bfc04
void CreateStage5Boss_0x1bf980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage5Boss_0x1bf980");
#endif

    ctx->pc = 0x1bf980u;

    // 0x1bf980: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x1bf980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
    // 0x1bf984: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1bf984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bf988: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bf988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bf98c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bf990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf994: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bf994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf998: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1bf998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf99c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1BF99Cu;
    SET_GPR_U32(ctx, 31, 0x1BF9A4u);
    ctx->pc = 0x1BF9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF99Cu;
            // 0x1bf9a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9A4u; }
        if (ctx->pc != 0x1BF9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9A4u; }
        if (ctx->pc != 0x1BF9A4u) { return; }
    }
    ctx->pc = 0x1BF9A4u;
    // 0x1bf9a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bf9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf9ac: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1BF9ACu;
    SET_GPR_U32(ctx, 31, 0x1BF9B4u);
    ctx->pc = 0x1BF9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF9ACu;
            // 0x1bf9b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9B4u; }
        if (ctx->pc != 0x1BF9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9B4u; }
        if (ctx->pc != 0x1BF9B4u) { return; }
    }
    ctx->pc = 0x1BF9B4u;
    // 0x1bf9b4: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bf9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1bf9b8: 0x27b002a0  addiu       $s0, $sp, 0x2A0
    ctx->pc = 0x1bf9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1bf9bc: 0x2442fc40  addiu       $v0, $v0, -0x3C0
    ctx->pc = 0x1bf9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966336));
    // 0x1bf9c0: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1bf9c4: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1bf9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1bf9c8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bf9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1bf9cc: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x1bf9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x1bf9d0: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1bf9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x1bf9d4: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bf9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1bf9d8: 0x244240d0  addiu       $v0, $v0, 0x40D0
    ctx->pc = 0x1bf9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16592));
    // 0x1bf9dc: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1bf9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x1bf9e0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1bf9e4: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x1bf9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x1bf9e8: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x1bf9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x1bf9ec: 0xc060694  jal         func_181A50
    ctx->pc = 0x1BF9ECu;
    SET_GPR_U32(ctx, 31, 0x1BF9F4u);
    ctx->pc = 0x1BF9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF9ECu;
            // 0x1bf9f0: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9F4u; }
        if (ctx->pc != 0x1BF9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9F4u; }
        if (ctx->pc != 0x1BF9F4u) { return; }
    }
    ctx->pc = 0x1BF9F4u;
    // 0x1bf9f4: 0xc060544  jal         func_181510
    ctx->pc = 0x1BF9F4u;
    SET_GPR_U32(ctx, 31, 0x1BF9FCu);
    ctx->pc = 0x1BF9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF9F4u;
            // 0x1bf9f8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9FCu; }
        if (ctx->pc != 0x1BF9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9FCu; }
        if (ctx->pc != 0x1BF9FCu) { return; }
    }
    ctx->pc = 0x1BF9FCu;
    // 0x1bf9fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bf9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1bfa00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1bfa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1bfa04: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1bfa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bfa08: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x1bfa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x1bfa0c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1bfa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bfa10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa14: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1bfa14u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfa18: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1bfa18u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bfa1c: 0x0  nop
    ctx->pc = 0x1bfa1cu;
    // NOP
    // 0x1bfa20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bfa20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bfa24: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1bfa24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1bfa28: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bfa28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1bfa2c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1bfa2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1bfa30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bfa30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bfa34: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1bfa34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1bfa38: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1bfa38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1bfa3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bfa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bfa40: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1bfa40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1bfa44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bfa48: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bfa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1bfa4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bfa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bfa50: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1bfa50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1bfa54: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1bfa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1bfa58: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1bfa58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1bfa5c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1bfa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1bfa60: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1bfa60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1bfa64: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1bfa64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1bfa68: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1BFA68u;
    SET_GPR_U32(ctx, 31, 0x1BFA70u);
    ctx->pc = 0x1BFA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA68u;
            // 0x1bfa6c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA70u; }
        if (ctx->pc != 0x1BFA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFA70u; }
        if (ctx->pc != 0x1BFA70u) { return; }
    }
    ctx->pc = 0x1BFA70u;
    // 0x1bfa70: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1bfa70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1bfa74: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x1bfa74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1bfa78: 0x2463fc40  addiu       $v1, $v1, -0x3C0
    ctx->pc = 0x1bfa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966336));
    // 0x1bfa7c: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x1bfa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1bfa80: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1bfa80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1bfa84: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1bfa84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1bfa88: 0x24630ca0  addiu       $v1, $v1, 0xCA0
    ctx->pc = 0x1bfa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3232));
    // 0x1bfa8c: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1bfa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x1bfa90: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1bfa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1bfa94: 0x246340d0  addiu       $v1, $v1, 0x40D0
    ctx->pc = 0x1bfa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16592));
    // 0x1bfa98: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1bfa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1bfa9c: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1bfa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1bfaa0: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x1bfaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x1bfaa4: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x1bfaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x1bfaa8: 0xc060694  jal         func_181A50
    ctx->pc = 0x1BFAA8u;
    SET_GPR_U32(ctx, 31, 0x1BFAB0u);
    ctx->pc = 0x1BFAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAA8u;
            // 0x1bfaac: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAB0u; }
        if (ctx->pc != 0x1BFAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAB0u; }
        if (ctx->pc != 0x1BFAB0u) { return; }
    }
    ctx->pc = 0x1BFAB0u;
    // 0x1bfab0: 0xc060544  jal         func_181510
    ctx->pc = 0x1BFAB0u;
    SET_GPR_U32(ctx, 31, 0x1BFAB8u);
    ctx->pc = 0x1BFAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFAB0u;
            // 0x1bfab4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAB8u; }
        if (ctx->pc != 0x1BFAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFAB8u; }
        if (ctx->pc != 0x1BFAB8u) { return; }
    }
    ctx->pc = 0x1BFAB8u;
    // 0x1bfab8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bfab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1bfabc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1bfabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1bfac0: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1bfac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bfac4: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x1bfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x1bfac8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1bfac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bfacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfad0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1bfad0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfad4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1bfad4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bfad8: 0x0  nop
    ctx->pc = 0x1bfad8u;
    // NOP
    // 0x1bfadc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bfadcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bfae0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1bfae0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1bfae4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bfae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1bfae8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1bfae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1bfaec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bfaecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bfaf0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1bfaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1bfaf4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1bfaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1bfaf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bfaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bfafc: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1bfafcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1bfb00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bfb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bfb04: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bfb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1bfb08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bfb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bfb0c: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1bfb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1bfb10: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1bfb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1bfb14: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1bfb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1bfb18: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1bfb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1bfb1c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1bfb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1bfb20: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1bfb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1bfb24: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1BFB24u;
    SET_GPR_U32(ctx, 31, 0x1BFB2Cu);
    ctx->pc = 0x1BFB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB24u;
            // 0x1bfb28: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB2Cu; }
        if (ctx->pc != 0x1BFB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB2Cu; }
        if (ctx->pc != 0x1BFB2Cu) { return; }
    }
    ctx->pc = 0x1BFB2Cu;
    // 0x1bfb2c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1bfb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1bfb30: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1bfb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bfb34: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bfb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1bfb38: 0x2442fc40  addiu       $v0, $v0, -0x3C0
    ctx->pc = 0x1bfb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966336));
    // 0x1bfb3c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1bfb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1bfb40: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bfb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1bfb44: 0x24421800  addiu       $v0, $v0, 0x1800
    ctx->pc = 0x1bfb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6144));
    // 0x1bfb48: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x1bfb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x1bfb4c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bfb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1bfb50: 0x244240e0  addiu       $v0, $v0, 0x40E0
    ctx->pc = 0x1bfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16608));
    // 0x1bfb54: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x1bfb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x1bfb58: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1bfb5c: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x1bfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x1bfb60: 0xc060694  jal         func_181A50
    ctx->pc = 0x1BFB60u;
    SET_GPR_U32(ctx, 31, 0x1BFB68u);
    ctx->pc = 0x1BFB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB60u;
            // 0x1bfb64: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB68u; }
        if (ctx->pc != 0x1BFB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB68u; }
        if (ctx->pc != 0x1BFB68u) { return; }
    }
    ctx->pc = 0x1BFB68u;
    // 0x1bfb68: 0xc060544  jal         func_181510
    ctx->pc = 0x1BFB68u;
    SET_GPR_U32(ctx, 31, 0x1BFB70u);
    ctx->pc = 0x1BFB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB68u;
            // 0x1bfb6c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB70u; }
        if (ctx->pc != 0x1BFB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFB70u; }
        if (ctx->pc != 0x1BFB70u) { return; }
    }
    ctx->pc = 0x1BFB70u;
    // 0x1bfb70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1bfb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1bfb74: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1bfb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1bfb78: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1bfb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bfb7c: 0x3c0245bb  lui         $v0, 0x45BB
    ctx->pc = 0x1bfb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17851 << 16));
    // 0x1bfb80: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x1bfb80u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x1bfb84: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bfb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfb88: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1bfb88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bfb8c: 0x3c023f93  lui         $v0, 0x3F93
    ctx->pc = 0x1bfb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16275 << 16));
    // 0x1bfb90: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1bfb90u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfb94: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1bfb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1bfb98: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1bfb98u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bfb9c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1bfb9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1bfba0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bfba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bfba4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1bfba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bfba8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1bfba8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1bfbac: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bfbacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1bfbb0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1bfbb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1bfbb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bfbb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bfbb8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1bfbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1bfbbc: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1bfbbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1bfbc0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bfbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfbc4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1bfbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1bfbc8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bfbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfbcc: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x1bfbccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x1bfbd0: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1bfbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x1bfbd4: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1bfbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1bfbd8: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x1bfbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x1bfbdc: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x1bfbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x1bfbe0: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1bfbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x1bfbe4: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1BFBE4u;
    SET_GPR_U32(ctx, 31, 0x1BFBECu);
    ctx->pc = 0x1BFBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBE4u;
            // 0x1bfbe8: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBECu; }
        if (ctx->pc != 0x1BFBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBECu; }
        if (ctx->pc != 0x1BFBECu) { return; }
    }
    ctx->pc = 0x1BFBECu;
    // 0x1bfbec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bfbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfbf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bfbf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfbf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfbf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfbf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFBFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBFCu;
            // 0x1bfc00: 0x27bd03d0  addiu       $sp, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFC04u;
}
