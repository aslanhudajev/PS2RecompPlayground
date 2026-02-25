#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage6Boss
// Address: 0x1c4120 - 0x1c43ac
void CreateStage6Boss_0x1c4120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage6Boss_0x1c4120");
#endif

    ctx->pc = 0x1c4120u;

    // 0x1c4120: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x1c4120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
    // 0x1c4124: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c4124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c4128: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c4128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c412c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c4130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4134: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c4134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4138: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c4138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c413c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1C413Cu;
    SET_GPR_U32(ctx, 31, 0x1C4144u);
    ctx->pc = 0x1C4140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C413Cu;
            // 0x1c4140: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4144u; }
        if (ctx->pc != 0x1C4144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4144u; }
        if (ctx->pc != 0x1C4144u) { return; }
    }
    ctx->pc = 0x1C4144u;
    // 0x1c4144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4148: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c4148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c414c: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1C414Cu;
    SET_GPR_U32(ctx, 31, 0x1C4154u);
    ctx->pc = 0x1C4150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C414Cu;
            // 0x1c4150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4154u; }
        if (ctx->pc != 0x1C4154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4154u; }
        if (ctx->pc != 0x1C4154u) { return; }
    }
    ctx->pc = 0x1C4154u;
    // 0x1c4154: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c4154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c4158: 0x27b002a0  addiu       $s0, $sp, 0x2A0
    ctx->pc = 0x1c4158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1c415c: 0x244243e0  addiu       $v0, $v0, 0x43E0
    ctx->pc = 0x1c415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
    // 0x1c4160: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1c4160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c4164: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1c4164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1c4168: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c4168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c416c: 0x244248d0  addiu       $v0, $v0, 0x48D0
    ctx->pc = 0x1c416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18640));
    // 0x1c4170: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1c4170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x1c4174: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c4174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c4178: 0x24427ab0  addiu       $v0, $v0, 0x7AB0
    ctx->pc = 0x1c4178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31408));
    // 0x1c417c: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1c417cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x1c4180: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c4180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c4184: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x1c4184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
    // 0x1c4188: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x1c4188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x1c418c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C418Cu;
    SET_GPR_U32(ctx, 31, 0x1C4194u);
    ctx->pc = 0x1C4190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C418Cu;
            // 0x1c4190: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4194u; }
        if (ctx->pc != 0x1C4194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4194u; }
        if (ctx->pc != 0x1C4194u) { return; }
    }
    ctx->pc = 0x1C4194u;
    // 0x1c4194: 0xc060544  jal         func_181510
    ctx->pc = 0x1C4194u;
    SET_GPR_U32(ctx, 31, 0x1C419Cu);
    ctx->pc = 0x1C4198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4194u;
            // 0x1c4198: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C419Cu; }
        if (ctx->pc != 0x1C419Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C419Cu; }
        if (ctx->pc != 0x1C419Cu) { return; }
    }
    ctx->pc = 0x1C419Cu;
    // 0x1c419c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c419cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c41a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c41a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1c41a4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1c41a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c41a8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1c41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x1c41ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1c41acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x1c41b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c41b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41b4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c41b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c41b8: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1c41b8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c41bc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1c41bcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c41c0: 0x0  nop
    ctx->pc = 0x1c41c0u;
    // NOP
    // 0x1c41c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c41c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c41c8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c41c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c41cc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c41ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1c41d0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1c41d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c41d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c41d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c41d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c41dc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c41dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1c41e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c41e4: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1c41e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1c41e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c41ec: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1c41ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1c41f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c41f4: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1c41f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1c41f8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1c41f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1c41fc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1c41fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1c4200: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1c4200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1c4204: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c4204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c4208: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1c4208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1c420c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1C420Cu;
    SET_GPR_U32(ctx, 31, 0x1C4214u);
    ctx->pc = 0x1C4210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C420Cu;
            // 0x1c4210: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4214u; }
        if (ctx->pc != 0x1C4214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4214u; }
        if (ctx->pc != 0x1C4214u) { return; }
    }
    ctx->pc = 0x1C4214u;
    // 0x1c4214: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c4214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1c4218: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x1c4218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1c421c: 0x246343e0  addiu       $v1, $v1, 0x43E0
    ctx->pc = 0x1c421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17376));
    // 0x1c4220: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x1c4220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1c4224: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1c4224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1c4228: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c4228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1c422c: 0x246350c0  addiu       $v1, $v1, 0x50C0
    ctx->pc = 0x1c422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20672));
    // 0x1c4230: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1c4230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x1c4234: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c4234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1c4238: 0x24637ab0  addiu       $v1, $v1, 0x7AB0
    ctx->pc = 0x1c4238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31408));
    // 0x1c423c: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1c423cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1c4240: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c4240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1c4244: 0x246343b0  addiu       $v1, $v1, 0x43B0
    ctx->pc = 0x1c4244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17328));
    // 0x1c4248: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x1c4248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x1c424c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C424Cu;
    SET_GPR_U32(ctx, 31, 0x1C4254u);
    ctx->pc = 0x1C4250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C424Cu;
            // 0x1c4250: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4254u; }
        if (ctx->pc != 0x1C4254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4254u; }
        if (ctx->pc != 0x1C4254u) { return; }
    }
    ctx->pc = 0x1C4254u;
    // 0x1c4254: 0xc060544  jal         func_181510
    ctx->pc = 0x1C4254u;
    SET_GPR_U32(ctx, 31, 0x1C425Cu);
    ctx->pc = 0x1C4258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4254u;
            // 0x1c4258: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C425Cu; }
        if (ctx->pc != 0x1C425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C425Cu; }
        if (ctx->pc != 0x1C425Cu) { return; }
    }
    ctx->pc = 0x1C425Cu;
    // 0x1c425c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c425cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c4260: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c4260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1c4264: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1c4264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4268: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1c4268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x1c426c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1c426cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x1c4270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4274: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c4274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c4278: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1c4278u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c427c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1c427cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4280: 0x0  nop
    ctx->pc = 0x1c4280u;
    // NOP
    // 0x1c4284: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c4284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c4288: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c4288u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c428c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c428cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1c4290: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1c4290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c4294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c4294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c4298: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c4298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c429c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c429cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1c42a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c42a4: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1c42a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1c42a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c42ac: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1c42acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1c42b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c42b4: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1c42b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1c42b8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1c42b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1c42bc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1c42bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1c42c0: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1c42c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1c42c4: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c42c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c42c8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1c42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1c42cc: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1C42CCu;
    SET_GPR_U32(ctx, 31, 0x1C42D4u);
    ctx->pc = 0x1C42D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C42CCu;
            // 0x1c42d0: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C42D4u; }
        if (ctx->pc != 0x1C42D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C42D4u; }
        if (ctx->pc != 0x1C42D4u) { return; }
    }
    ctx->pc = 0x1C42D4u;
    // 0x1c42d4: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1c42d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1c42d8: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1c42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1c42dc: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c42e0: 0x244243e0  addiu       $v0, $v0, 0x43E0
    ctx->pc = 0x1c42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
    // 0x1c42e4: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1c42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1c42e8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c42ec: 0x244258b0  addiu       $v0, $v0, 0x58B0
    ctx->pc = 0x1c42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22704));
    // 0x1c42f0: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x1c42f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x1c42f4: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c42f8: 0x24427ac0  addiu       $v0, $v0, 0x7AC0
    ctx->pc = 0x1c42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31424));
    // 0x1c42fc: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x1c42fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x1c4300: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c4300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c4304: 0x244243b0  addiu       $v0, $v0, 0x43B0
    ctx->pc = 0x1c4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
    // 0x1c4308: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C4308u;
    SET_GPR_U32(ctx, 31, 0x1C4310u);
    ctx->pc = 0x1C430Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4308u;
            // 0x1c430c: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4310u; }
        if (ctx->pc != 0x1C4310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4310u; }
        if (ctx->pc != 0x1C4310u) { return; }
    }
    ctx->pc = 0x1C4310u;
    // 0x1c4310: 0xc060544  jal         func_181510
    ctx->pc = 0x1C4310u;
    SET_GPR_U32(ctx, 31, 0x1C4318u);
    ctx->pc = 0x1C4314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4310u;
            // 0x1c4314: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4318u; }
        if (ctx->pc != 0x1C4318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4318u; }
        if (ctx->pc != 0x1C4318u) { return; }
    }
    ctx->pc = 0x1C4318u;
    // 0x1c4318: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c4318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1c431c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1c431cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1c4320: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1c4320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4324: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1c4324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1c4328: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x1c4328u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x1c432c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4330: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1c4330u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c4334: 0x3c023f93  lui         $v0, 0x3F93
    ctx->pc = 0x1c4334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16275 << 16));
    // 0x1c4338: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1c4338u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c433c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1c433cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1c4340: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1c4340u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4344: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1c4344u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1c4348: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c4348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c434c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c4350: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c4350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c4354: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1c4358: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1c4358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c435c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c435cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c4360: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1c4360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1c4364: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1c4364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1c4368: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c4368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c436c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1c436cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1c4370: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c4370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4374: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x1c4374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x1c4378: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1c4378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x1c437c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1c437cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1c4380: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x1c4380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x1c4384: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x1c4384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x1c4388: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1c4388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x1c438c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1C438Cu;
    SET_GPR_U32(ctx, 31, 0x1C4394u);
    ctx->pc = 0x1C4390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C438Cu;
            // 0x1c4390: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4394u; }
        if (ctx->pc != 0x1C4394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4394u; }
        if (ctx->pc != 0x1C4394u) { return; }
    }
    ctx->pc = 0x1C4394u;
    // 0x1c4394: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c4394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c439c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c439cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c43a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c43a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c43a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C43A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C43A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C43A4u;
            // 0x1c43a8: 0x27bd03d0  addiu       $sp, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C43ACu;
}
