#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage3mapGenerate
// Address: 0x145d10 - 0x14633c
void stage3mapGenerate_0x145d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage3mapGenerate_0x145d10");
#endif

    ctx->pc = 0x145d10u;

    // 0x145d10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x145d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x145d14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x145d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x145d18: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x145d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145d1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x145d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x145d20: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145d24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x145d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x145d28: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145d2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x145d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x145d30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145d34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145d38: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x145D38u;
    SET_GPR_U32(ctx, 31, 0x145D40u);
    ctx->pc = 0x145D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D38u;
            // 0x145d3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D40u; }
        if (ctx->pc != 0x145D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D40u; }
        if (ctx->pc != 0x145D40u) { return; }
    }
    ctx->pc = 0x145D40u;
    // 0x145d40: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x145D40u;
    SET_GPR_U32(ctx, 31, 0x145D48u);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D48u; }
        if (ctx->pc != 0x145D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D48u; }
        if (ctx->pc != 0x145D48u) { return; }
    }
    ctx->pc = 0x145D48u;
    // 0x145d48: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145d4c: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x145d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x145d50: 0xc4209c08  lwc1        $f0, -0x63F8($at)
    ctx->pc = 0x145d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145d54: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x145d54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x145d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145d5c: 0x0  nop
    ctx->pc = 0x145d5cu;
    // NOP
    // 0x145d60: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x145d60u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x145d64: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145d68: 0x8c249bf8  lw          $a0, -0x6408($at)
    ctx->pc = 0x145d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941688)));
    // 0x145d6c: 0x0  nop
    ctx->pc = 0x145d6cu;
    // NOP
    // 0x145d70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x145d70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x145d74: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x145d74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x145d78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145D78u;
    {
        const bool branch_taken_0x145d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x145D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145D78u;
            // 0x145d7c: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d78) {
            ctx->pc = 0x145D90u;
            goto label_145d90;
        }
    }
    ctx->pc = 0x145D80u;
    // 0x145d80: 0x8c239be8  lw          $v1, -0x6418($at)
    ctx->pc = 0x145d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941672)));
    // 0x145d84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x145d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x145d88: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145d8c: 0xac239be8  sw          $v1, -0x6418($at)
    ctx->pc = 0x145d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941672), GPR_U32(ctx, 3));
label_145d90:
    // 0x145d90: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145d94: 0xc4219cc0  lwc1        $f1, -0x6340($at)
    ctx->pc = 0x145d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145d98: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x145d98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x145d9c: 0x27b10088  addiu       $s1, $sp, 0x88
    ctx->pc = 0x145d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x145da0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145da4: 0xc4209cc4  lwc1        $f0, -0x633C($at)
    ctx->pc = 0x145da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145da8: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x145da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x145dac: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x145dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x145db0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145db4: 0xc4209cc8  lwc1        $f0, -0x6338($at)
    ctx->pc = 0x145db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145db8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x145DB8u;
    {
        const bool branch_taken_0x145db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145DB8u;
            // 0x145dbc: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145db8) {
            ctx->pc = 0x145DD8u;
            goto label_145dd8;
        }
    }
    ctx->pc = 0x145DC0u;
    // 0x145dc0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145dc4: 0x8c239c00  lw          $v1, -0x6400($at)
    ctx->pc = 0x145dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941696)));
    // 0x145dc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x145dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x145dcc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145dd0: 0xac239c00  sw          $v1, -0x6400($at)
    ctx->pc = 0x145dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941696), GPR_U32(ctx, 3));
    // 0x145dd4: 0x0  nop
    ctx->pc = 0x145dd4u;
    // NOP
label_145dd8:
    // 0x145dd8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145ddc: 0x8c249c00  lw          $a0, -0x6400($at)
    ctx->pc = 0x145ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941696)));
    // 0x145de0: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x145de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x145de4: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x145DE4u;
    {
        const bool branch_taken_0x145de4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x145de4) {
            ctx->pc = 0x145E30u;
            goto label_145e30;
        }
    }
    ctx->pc = 0x145DECu;
    // 0x145dec: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x145decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x145df0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145df0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145df4: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x145df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x145df8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x145df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x145dfc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145e00: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145e04: 0x24e76720  addiu       $a3, $a3, 0x6720
    ctx->pc = 0x145e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26400));
    // 0x145e08: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x145e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x145e0c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145E0Cu;
    SET_GPR_U32(ctx, 31, 0x145E14u);
    ctx->pc = 0x145E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E0Cu;
            // 0x145e10: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E14u; }
        if (ctx->pc != 0x145E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E14u; }
        if (ctx->pc != 0x145E14u) { return; }
    }
    ctx->pc = 0x145E14u;
    // 0x145e14: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145e14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145e18: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x145e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x145e1c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145e20: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145e24: 0xc0520a0  jal         func_148280
    ctx->pc = 0x145E24u;
    SET_GPR_U32(ctx, 31, 0x145E2Cu);
    ctx->pc = 0x145E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E24u;
            // 0x145e28: 0x24e76720  addiu       $a3, $a3, 0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E2Cu; }
        if (ctx->pc != 0x145E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E2Cu; }
        if (ctx->pc != 0x145E2Cu) { return; }
    }
    ctx->pc = 0x145E2Cu;
    // 0x145e2c: 0x0  nop
    ctx->pc = 0x145e2cu;
    // NOP
label_145e30:
    // 0x145e30: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145e34: 0x8c249c00  lw          $a0, -0x6400($at)
    ctx->pc = 0x145e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941696)));
    // 0x145e38: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x145e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x145e3c: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x145E3Cu;
    {
        const bool branch_taken_0x145e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x145e3c) {
            ctx->pc = 0x145EA0u;
            goto label_145ea0;
        }
    }
    ctx->pc = 0x145E44u;
    // 0x145e44: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x145e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x145e48: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145e48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145e4c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x145e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x145e50: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x145e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x145e54: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145e58: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145e5c: 0x24e76680  addiu       $a3, $a3, 0x6680
    ctx->pc = 0x145e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26240));
    // 0x145e60: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x145e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x145e64: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145E64u;
    SET_GPR_U32(ctx, 31, 0x145E6Cu);
    ctx->pc = 0x145E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E64u;
            // 0x145e68: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E6Cu; }
        if (ctx->pc != 0x145E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E6Cu; }
        if (ctx->pc != 0x145E6Cu) { return; }
    }
    ctx->pc = 0x145E6Cu;
    // 0x145e6c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145e70: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x145e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x145e74: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145e78: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145e7c: 0xc0520a0  jal         func_148280
    ctx->pc = 0x145E7Cu;
    SET_GPR_U32(ctx, 31, 0x145E84u);
    ctx->pc = 0x145E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E7Cu;
            // 0x145e80: 0x24e76680  addiu       $a3, $a3, 0x6680 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E84u; }
        if (ctx->pc != 0x145E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E84u; }
        if (ctx->pc != 0x145E84u) { return; }
    }
    ctx->pc = 0x145E84u;
    // 0x145e84: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145e88: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x145e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x145e8c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145e90: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145e94: 0xc0520a0  jal         func_148280
    ctx->pc = 0x145E94u;
    SET_GPR_U32(ctx, 31, 0x145E9Cu);
    ctx->pc = 0x145E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E94u;
            // 0x145e98: 0x24e76680  addiu       $a3, $a3, 0x6680 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E9Cu; }
        if (ctx->pc != 0x145E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E9Cu; }
        if (ctx->pc != 0x145E9Cu) { return; }
    }
    ctx->pc = 0x145E9Cu;
    // 0x145e9c: 0x0  nop
    ctx->pc = 0x145e9cu;
    // NOP
label_145ea0:
    // 0x145ea0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145ea4: 0x8c249c00  lw          $a0, -0x6400($at)
    ctx->pc = 0x145ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941696)));
    // 0x145ea8: 0x240302bc  addiu       $v1, $zero, 0x2BC
    ctx->pc = 0x145ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x145eac: 0x1483003e  bne         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x145EACu;
    {
        const bool branch_taken_0x145eac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x145EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145EACu;
            // 0x145eb0: 0x3c070014  lui         $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145eac) {
            ctx->pc = 0x145FA8u;
            goto label_145fa8;
        }
    }
    ctx->pc = 0x145EB4u;
    // 0x145eb4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x145eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x145eb8: 0x27b40074  addiu       $s4, $sp, 0x74
    ctx->pc = 0x145eb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x145ebc: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x145ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x145ec0: 0x27b30078  addiu       $s3, $sp, 0x78
    ctx->pc = 0x145ec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x145ec4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x145ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x145ec8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x145ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x145ecc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145ed0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145ed4: 0x24e765e0  addiu       $a3, $a3, 0x65E0
    ctx->pc = 0x145ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26080));
    // 0x145ed8: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145ED8u;
    SET_GPR_U32(ctx, 31, 0x145EE0u);
    ctx->pc = 0x145EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145ED8u;
            // 0x145edc: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EE0u; }
        if (ctx->pc != 0x145EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EE0u; }
        if (ctx->pc != 0x145EE0u) { return; }
    }
    ctx->pc = 0x145EE0u;
    // 0x145ee0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145ee4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x145ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x145ee8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145eec: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145ef0: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145EF0u;
    SET_GPR_U32(ctx, 31, 0x145EF8u);
    ctx->pc = 0x145EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145EF0u;
            // 0x145ef4: 0x24e765e0  addiu       $a3, $a3, 0x65E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EF8u; }
        if (ctx->pc != 0x145EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EF8u; }
        if (ctx->pc != 0x145EF8u) { return; }
    }
    ctx->pc = 0x145EF8u;
    // 0x145ef8: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145efc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x145efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x145f00: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x145f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x145f04: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x145f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x145f08: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x145f08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x145f0c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145f10: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145f14: 0x24e765e0  addiu       $a3, $a3, 0x65E0
    ctx->pc = 0x145f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26080));
    // 0x145f18: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145F18u;
    SET_GPR_U32(ctx, 31, 0x145F20u);
    ctx->pc = 0x145F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145F18u;
            // 0x145f1c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F20u; }
        if (ctx->pc != 0x145F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F20u; }
        if (ctx->pc != 0x145F20u) { return; }
    }
    ctx->pc = 0x145F20u;
    // 0x145f20: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x145f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x145f24: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x145f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x145f28: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x145f28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x145f2c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145f30: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x145f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x145f34: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x145f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x145f38: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x145f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x145f3c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145f40: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145f44: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145F44u;
    SET_GPR_U32(ctx, 31, 0x145F4Cu);
    ctx->pc = 0x145F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145F44u;
            // 0x145f48: 0x24e765e0  addiu       $a3, $a3, 0x65E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F4Cu; }
        if (ctx->pc != 0x145F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F4Cu; }
        if (ctx->pc != 0x145F4Cu) { return; }
    }
    ctx->pc = 0x145F4Cu;
    // 0x145f4c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x145f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x145f50: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x145f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x145f54: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x145f54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x145f58: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145f58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145f5c: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x145f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x145f60: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x145f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x145f64: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x145f64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x145f68: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145f6c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145f70: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145F70u;
    SET_GPR_U32(ctx, 31, 0x145F78u);
    ctx->pc = 0x145F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145F70u;
            // 0x145f74: 0x24e765e0  addiu       $a3, $a3, 0x65E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F78u; }
        if (ctx->pc != 0x145F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F78u; }
        if (ctx->pc != 0x145F78u) { return; }
    }
    ctx->pc = 0x145F78u;
    // 0x145f78: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x145f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x145f7c: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x145f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x145f80: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x145f80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x145f84: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145f84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145f88: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x145f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x145f8c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x145f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x145f90: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x145f90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x145f94: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145f98: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145f9c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145F9Cu;
    SET_GPR_U32(ctx, 31, 0x145FA4u);
    ctx->pc = 0x145FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145F9Cu;
            // 0x145fa0: 0x24e765e0  addiu       $a3, $a3, 0x65E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145FA4u; }
        if (ctx->pc != 0x145FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145FA4u; }
        if (ctx->pc != 0x145FA4u) { return; }
    }
    ctx->pc = 0x145FA4u;
    // 0x145fa4: 0x0  nop
    ctx->pc = 0x145fa4u;
    // NOP
label_145fa8:
    // 0x145fa8: 0x26a4ffff  addiu       $a0, $s5, -0x1
    ctx->pc = 0x145fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x145fac: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x145facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x145fb0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x145fb0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x145fb4: 0x0  nop
    ctx->pc = 0x145fb4u;
    // NOP
    // 0x145fb8: 0x0  nop
    ctx->pc = 0x145fb8u;
    // NOP
    // 0x145fbc: 0x1810  mfhi        $v1
    ctx->pc = 0x145fbcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x145fc0: 0x146000b9  bnez        $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x145FC0u;
    {
        const bool branch_taken_0x145fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x145FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145FC0u;
            // 0x145fc4: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fc0) {
            ctx->pc = 0x1462A8u;
            goto label_1462a8;
        }
    }
    ctx->pc = 0x145FC8u;
    // 0x145fc8: 0xc4219cc0  lwc1        $f1, -0x6340($at)
    ctx->pc = 0x145fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145fcc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145fd0: 0xc4209cc4  lwc1        $f0, -0x633C($at)
    ctx->pc = 0x145fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145fd4: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x145fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x145fd8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x145fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x145fdc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145fe0: 0xc4209cc8  lwc1        $f0, -0x6338($at)
    ctx->pc = 0x145fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145fe4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x145fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x145fe8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145fec: 0x8c239bf0  lw          $v1, -0x6410($at)
    ctx->pc = 0x145fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941680)));
    // 0x145ff0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x145FF0u;
    {
        const bool branch_taken_0x145ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ff0) {
            ctx->pc = 0x146060u;
            goto label_146060;
        }
    }
    ctx->pc = 0x145FF8u;
    // 0x145ff8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145ffc: 0x8c239bf8  lw          $v1, -0x6408($at)
    ctx->pc = 0x145ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941688)));
    // 0x146000: 0x146000a9  bnez        $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x146000u;
    {
        const bool branch_taken_0x146000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146000) {
            ctx->pc = 0x1462A8u;
            goto label_1462a8;
        }
    }
    ctx->pc = 0x146008u;
    // 0x146008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14600c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14600cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146010: 0xac229bf8  sw          $v0, -0x6408($at)
    ctx->pc = 0x146010u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941688), GPR_U32(ctx, 2));
    // 0x146014: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146018: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x146018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x14601c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x14601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x146020: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x146020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x146024: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x146024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x146028: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x146028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x14602c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x14602cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x146030: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x146030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x146034: 0x24e76720  addiu       $a3, $a3, 0x6720
    ctx->pc = 0x146034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26400));
    // 0x146038: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146038u;
    SET_GPR_U32(ctx, 31, 0x146040u);
    ctx->pc = 0x14603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146038u;
            // 0x14603c: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146040u; }
        if (ctx->pc != 0x146040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146040u; }
        if (ctx->pc != 0x146040u) { return; }
    }
    ctx->pc = 0x146040u;
    // 0x146040: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146044: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x146044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x146048: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x146048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14604c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x14604cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x146050: 0xc0520a0  jal         func_148280
    ctx->pc = 0x146050u;
    SET_GPR_U32(ctx, 31, 0x146058u);
    ctx->pc = 0x146054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146050u;
            // 0x146054: 0x24e76720  addiu       $a3, $a3, 0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146058u; }
        if (ctx->pc != 0x146058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146058u; }
        if (ctx->pc != 0x146058u) { return; }
    }
    ctx->pc = 0x146058u;
    // 0x146058: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x146058u;
    {
        const bool branch_taken_0x146058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146058) {
            ctx->pc = 0x1462A8u;
            goto label_1462a8;
        }
    }
    ctx->pc = 0x146060u;
label_146060:
    // 0x146060: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x146060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x146064: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x146064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146068: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14606c: 0xc4209c08  lwc1        $f0, -0x63F8($at)
    ctx->pc = 0x14606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146070: 0x27b30074  addiu       $s3, $sp, 0x74
    ctx->pc = 0x146070u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x146074: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x146074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x146078: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x146078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x14607c: 0x27b20078  addiu       $s2, $sp, 0x78
    ctx->pc = 0x14607cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x146080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x146080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146084: 0x0  nop
    ctx->pc = 0x146084u;
    // NOP
    // 0x146088: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x146088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14608c: 0x3c02c4e1  lui         $v0, 0xC4E1
    ctx->pc = 0x14608cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50401 << 16));
    // 0x146090: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146094: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x146094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x146098: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x146098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x14609c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14609Cu;
    SET_GPR_U32(ctx, 31, 0x1460A4u);
    ctx->pc = 0x1460A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14609Cu;
            // 0x1460a0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460A4u; }
        if (ctx->pc != 0x1460A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460A4u; }
        if (ctx->pc != 0x1460A4u) { return; }
    }
    ctx->pc = 0x1460A4u;
    // 0x1460a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1460a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1460a8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1460a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1460ac: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1460acu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1460b0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1460b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1460b4: 0x24639520  addiu       $v1, $v1, -0x6AE0
    ctx->pc = 0x1460b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939936));
    // 0x1460b8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1460b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1460bc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1460bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1460c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1460c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1460c4: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1460c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1460c8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1460c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1460cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1460ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1460d0: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1460D0u;
    SET_GPR_U32(ctx, 31, 0x1460D8u);
    ctx->pc = 0x1460D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1460D0u;
            // 0x1460d4: 0x24e76830  addiu       $a3, $a3, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460D8u; }
        if (ctx->pc != 0x1460D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460D8u; }
        if (ctx->pc != 0x1460D8u) { return; }
    }
    ctx->pc = 0x1460D8u;
    // 0x1460d8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1460d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1460dc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1460dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1460e0: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x1460e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x1460e4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1460e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1460e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1460e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1460ec: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1460ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1460f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1460f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1460f4: 0xc0520a0  jal         func_148280
    ctx->pc = 0x1460F4u;
    SET_GPR_U32(ctx, 31, 0x1460FCu);
    ctx->pc = 0x1460F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1460F4u;
            // 0x1460f8: 0x24e76790  addiu       $a3, $a3, 0x6790 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460FCu; }
        if (ctx->pc != 0x1460FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460FCu; }
        if (ctx->pc != 0x1460FCu) { return; }
    }
    ctx->pc = 0x1460FCu;
    // 0x1460fc: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1460fcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146100: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x146100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x146104: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146108: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x146108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14610c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14610cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146110: 0xc4209c08  lwc1        $f0, -0x63F8($at)
    ctx->pc = 0x146110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146114: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x146114u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x146118: 0x3c02c4e1  lui         $v0, 0xC4E1
    ctx->pc = 0x146118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50401 << 16));
    // 0x14611c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14611cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146120: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x146120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x146124: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x146124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x146128: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x146128u;
    SET_GPR_U32(ctx, 31, 0x146130u);
    ctx->pc = 0x14612Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146128u;
            // 0x14612c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146130u; }
        if (ctx->pc != 0x146130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146130u; }
        if (ctx->pc != 0x146130u) { return; }
    }
    ctx->pc = 0x146130u;
    // 0x146130: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x146130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x146134: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x146134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x146138: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x146138u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14613c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14613cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146140: 0x24639520  addiu       $v1, $v1, -0x6AE0
    ctx->pc = 0x146140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939936));
    // 0x146144: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x146144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x146148: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x146148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14614c: 0x1010  mfhi        $v0
    ctx->pc = 0x14614cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x146150: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x146150u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146154: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x146154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x146158: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x146158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14615c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14615Cu;
    SET_GPR_U32(ctx, 31, 0x146164u);
    ctx->pc = 0x146160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14615Cu;
            // 0x146160: 0x24e76830  addiu       $a3, $a3, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146164u; }
        if (ctx->pc != 0x146164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146164u; }
        if (ctx->pc != 0x146164u) { return; }
    }
    ctx->pc = 0x146164u;
    // 0x146164: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x146164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x146168: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146168u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14616c: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x14616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x146170: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x146170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x146174: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x146174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x146178: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x146178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14617c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14617cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146180: 0xc0520a0  jal         func_148280
    ctx->pc = 0x146180u;
    SET_GPR_U32(ctx, 31, 0x146188u);
    ctx->pc = 0x146184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146180u;
            // 0x146184: 0x24e76790  addiu       $a3, $a3, 0x6790 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146188u; }
        if (ctx->pc != 0x146188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146188u; }
        if (ctx->pc != 0x146188u) { return; }
    }
    ctx->pc = 0x146188u;
    // 0x146188: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x146188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14618c: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x14618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x146190: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x146190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146194: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146198: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x146198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14619c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14619cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1461a0: 0x3c02c4e1  lui         $v0, 0xC4E1
    ctx->pc = 0x1461a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50401 << 16));
    // 0x1461a4: 0xc4209c08  lwc1        $f0, -0x63F8($at)
    ctx->pc = 0x1461a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1461a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1461a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1461ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1461acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1461b0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1461b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1461b4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1461b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1461b8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1461B8u;
    SET_GPR_U32(ctx, 31, 0x1461C0u);
    ctx->pc = 0x1461BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1461B8u;
            // 0x1461bc: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461C0u; }
        if (ctx->pc != 0x1461C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461C0u; }
        if (ctx->pc != 0x1461C0u) { return; }
    }
    ctx->pc = 0x1461C0u;
    // 0x1461c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1461c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1461c4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1461c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1461c8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1461c8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1461cc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1461ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1461d0: 0x24639520  addiu       $v1, $v1, -0x6AE0
    ctx->pc = 0x1461d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939936));
    // 0x1461d4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1461d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1461d8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1461d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1461dc: 0x1010  mfhi        $v0
    ctx->pc = 0x1461dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1461e0: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1461e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1461e4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1461e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1461e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1461e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1461ec: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1461ECu;
    SET_GPR_U32(ctx, 31, 0x1461F4u);
    ctx->pc = 0x1461F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1461ECu;
            // 0x1461f0: 0x24e76830  addiu       $a3, $a3, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461F4u; }
        if (ctx->pc != 0x1461F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461F4u; }
        if (ctx->pc != 0x1461F4u) { return; }
    }
    ctx->pc = 0x1461F4u;
    // 0x1461f4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1461f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1461f8: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1461f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1461fc: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x1461fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x146200: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x146200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x146204: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x146204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x146208: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x146208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14620c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146210: 0xc0520a0  jal         func_148280
    ctx->pc = 0x146210u;
    SET_GPR_U32(ctx, 31, 0x146218u);
    ctx->pc = 0x146214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146210u;
            // 0x146214: 0x24e76790  addiu       $a3, $a3, 0x6790 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146218u; }
        if (ctx->pc != 0x146218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146218u; }
        if (ctx->pc != 0x146218u) { return; }
    }
    ctx->pc = 0x146218u;
    // 0x146218: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x146218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x14621c: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x14621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x146220: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x146220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146224: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146228: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x146228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14622c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14622cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x146230: 0x3c02c4e1  lui         $v0, 0xC4E1
    ctx->pc = 0x146230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50401 << 16));
    // 0x146234: 0xc4209c08  lwc1        $f0, -0x63F8($at)
    ctx->pc = 0x146234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146238: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x146238u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14623c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14623cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146240: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x146240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x146244: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x146244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x146248: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x146248u;
    SET_GPR_U32(ctx, 31, 0x146250u);
    ctx->pc = 0x14624Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146248u;
            // 0x14624c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146250u; }
        if (ctx->pc != 0x146250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146250u; }
        if (ctx->pc != 0x146250u) { return; }
    }
    ctx->pc = 0x146250u;
    // 0x146250: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x146250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x146254: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x146254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x146258: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x146258u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14625c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14625cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146260: 0x24639520  addiu       $v1, $v1, -0x6AE0
    ctx->pc = 0x146260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939936));
    // 0x146264: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x146264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x146268: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x146268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14626c: 0x1010  mfhi        $v0
    ctx->pc = 0x14626cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x146270: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x146270u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146274: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x146274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x146278: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x146278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14627c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14627Cu;
    SET_GPR_U32(ctx, 31, 0x146284u);
    ctx->pc = 0x146280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14627Cu;
            // 0x146280: 0x24e76830  addiu       $a3, $a3, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146284u; }
        if (ctx->pc != 0x146284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146284u; }
        if (ctx->pc != 0x146284u) { return; }
    }
    ctx->pc = 0x146284u;
    // 0x146284: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x146284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x146288: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146288u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14628c: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x14628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x146290: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x146290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x146294: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x146294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x146298: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x146298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14629c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14629cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1462a0: 0xc0520a0  jal         func_148280
    ctx->pc = 0x1462A0u;
    SET_GPR_U32(ctx, 31, 0x1462A8u);
    ctx->pc = 0x1462A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1462A0u;
            // 0x1462a4: 0x24e76790  addiu       $a3, $a3, 0x6790 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1462A8u; }
        if (ctx->pc != 0x1462A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1462A8u; }
        if (ctx->pc != 0x1462A8u) { return; }
    }
    ctx->pc = 0x1462A8u;
label_1462a8:
    // 0x1462a8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1462a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1462ac: 0xc4229cb8  lwc1        $f2, -0x6348($at)
    ctx->pc = 0x1462acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1462b0: 0x3c033ada  lui         $v1, 0x3ADA
    ctx->pc = 0x1462b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15066 << 16));
    // 0x1462b4: 0x34635daf  ori         $v1, $v1, 0x5DAF
    ctx->pc = 0x1462b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)23983u)));
    // 0x1462b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1462b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1462bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1462bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1462c0: 0x0  nop
    ctx->pc = 0x1462c0u;
    // NOP
    // 0x1462c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1462c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1462c8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1462c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1462cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1462ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1462d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1462D0u;
    {
        const bool branch_taken_0x1462d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1462D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1462D0u;
            // 0x1462d4: 0xe4219cb8  swc1        $f1, -0x6348($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462d0) {
            ctx->pc = 0x1462E0u;
            goto label_1462e0;
        }
    }
    ctx->pc = 0x1462D8u;
    // 0x1462d8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1462d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1462dc: 0xe4209cb8  swc1        $f0, -0x6348($at)
    ctx->pc = 0x1462dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941880), bits); }
label_1462e0:
    // 0x1462e0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1462e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1462e4: 0xc4239c08  lwc1        $f3, -0x63F8($at)
    ctx->pc = 0x1462e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1462e8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1462e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1462ec: 0xc4229cb8  lwc1        $f2, -0x6348($at)
    ctx->pc = 0x1462ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1462f0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1462f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1462f4: 0xc4219c10  lwc1        $f1, -0x63F0($at)
    ctx->pc = 0x1462f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1462f8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1462f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1462fc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1462fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146300: 0xc4209cb0  lwc1        $f0, -0x6350($at)
    ctx->pc = 0x146300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146304: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x146304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146308: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14630c: 0xe4229c08  swc1        $f2, -0x63F8($at)
    ctx->pc = 0x14630cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941704), bits); }
    // 0x146310: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146314: 0xe4209c10  swc1        $f0, -0x63F0($at)
    ctx->pc = 0x146314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941712), bits); }
    // 0x146318: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x146318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14631c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14631cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146320: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x146320u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146324: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x146324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14632c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14632cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146334: 0x3e00008  jr          $ra
    ctx->pc = 0x146334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146334u;
            // 0x146338: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145D90u: goto label_145d90;
            case 0x145DD8u: goto label_145dd8;
            case 0x145E30u: goto label_145e30;
            case 0x145EA0u: goto label_145ea0;
            case 0x145FA8u: goto label_145fa8;
            case 0x146060u: goto label_146060;
            case 0x1462A8u: goto label_1462a8;
            case 0x1462E0u: goto label_1462e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14633Cu;
}
