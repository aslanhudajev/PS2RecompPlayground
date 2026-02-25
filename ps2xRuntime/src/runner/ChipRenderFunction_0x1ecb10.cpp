#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ChipRenderFunction
// Address: 0x1ecb10 - 0x1ecd20
void ChipRenderFunction_0x1ecb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ChipRenderFunction_0x1ecb10");
#endif

    ctx->pc = 0x1ecb10u;

    // 0x1ecb10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ecb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ecb14: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecb18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ecb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ecb1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ecb20: 0xac203830  sw          $zero, 0x3830($at)
    ctx->pc = 0x1ecb20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14384), GPR_U32(ctx, 0));
    // 0x1ecb24: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecb28: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1ECB28u;
    {
        const bool branch_taken_0x1ecb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECB28u;
            // 0x1ecb2c: 0x8c303838  lw          $s0, 0x3838($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb28) {
            ctx->pc = 0x1ECC70u;
            goto label_1ecc70;
        }
    }
    ctx->pc = 0x1ECB30u;
label_1ecb30:
    // 0x1ecb30: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x1ecb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x1ecb34: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1ecb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ecb38: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ecb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1ecb3c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1ecb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ecb40: 0x24428140  addiu       $v0, $v0, -0x7EC0
    ctx->pc = 0x1ecb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934848));
    // 0x1ecb44: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1ecb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecb48: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ecb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ecb4c: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1ecb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecb50: 0x3c02486d  lui         $v0, 0x486D
    ctx->pc = 0x1ecb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18541 << 16));
    // 0x1ecb54: 0x3442e900  ori         $v0, $v0, 0xE900
    ctx->pc = 0x1ecb54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)59648u)));
    // 0x1ecb58: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ecb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ecb5c: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x1ecb5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ecb60: 0xc07b364  jal         func_1ECD90
    ctx->pc = 0x1ECB60u;
    SET_GPR_U32(ctx, 31, 0x1ECB68u);
    ctx->pc = 0x1ECB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECB60u;
            // 0x1ecb64: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECD90u;
    if (runtime->hasFunction(0x1ECD90u)) {
        auto targetFn = runtime->lookupFunction(0x1ECD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECB68u; }
        if (ctx->pc != 0x1ECB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1ecd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECB68u; }
        if (ctx->pc != 0x1ECB68u) { return; }
    }
    ctx->pc = 0x1ECB68u;
    // 0x1ecb68: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecb6c: 0x3c02486d  lui         $v0, 0x486D
    ctx->pc = 0x1ecb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18541 << 16));
    // 0x1ecb70: 0x8c243830  lw          $a0, 0x3830($at)
    ctx->pc = 0x1ecb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1ecb74: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1ecb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ecb78: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1ecb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ecb7c: 0x3442e900  ori         $v0, $v0, 0xE900
    ctx->pc = 0x1ecb7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)59648u)));
    // 0x1ecb80: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1ecb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecb84: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1ecb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1ecb88: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1ecb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecb8c: 0x24638140  addiu       $v1, $v1, -0x7EC0
    ctx->pc = 0x1ecb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934848));
    // 0x1ecb90: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ecb90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ecb94: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1ecb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ecb98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ecb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ecb9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ecb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ecba0: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x1ecba0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1ecba4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1ecba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ecba8: 0xc07b364  jal         func_1ECD90
    ctx->pc = 0x1ECBA8u;
    SET_GPR_U32(ctx, 31, 0x1ECBB0u);
    ctx->pc = 0x1ECBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBA8u;
            // 0x1ecbac: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECD90u;
    if (runtime->hasFunction(0x1ECD90u)) {
        auto targetFn = runtime->lookupFunction(0x1ECD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBB0u; }
        if (ctx->pc != 0x1ECBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1ecd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBB0u; }
        if (ctx->pc != 0x1ECBB0u) { return; }
    }
    ctx->pc = 0x1ECBB0u;
    // 0x1ecbb0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1ecbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecbb4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecbb8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1ecbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecbbc: 0x8c233830  lw          $v1, 0x3830($at)
    ctx->pc = 0x1ecbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1ecbc0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ecbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ecbc4: 0x24424140  addiu       $v0, $v0, 0x4140
    ctx->pc = 0x1ecbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16704));
    // 0x1ecbc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ecbc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ecbcc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ecbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1ecbd0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ecbd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ecbd4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ecbd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ecbd8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ecbd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1ecbdc: 0xc07b358  jal         func_1ECD60
    ctx->pc = 0x1ECBDCu;
    SET_GPR_U32(ctx, 31, 0x1ECBE4u);
    ctx->pc = 0x1ECBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBDCu;
            // 0x1ecbe0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECD60u;
    if (runtime->hasFunction(0x1ECD60u)) {
        auto targetFn = runtime->lookupFunction(0x1ECD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBE4u; }
        if (ctx->pc != 0x1ECBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1ecd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBE4u; }
        if (ctx->pc != 0x1ECBE4u) { return; }
    }
    ctx->pc = 0x1ECBE4u;
    // 0x1ecbe4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ecbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecbe8: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecbec: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ecbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecbf0: 0x8c233830  lw          $v1, 0x3830($at)
    ctx->pc = 0x1ecbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1ecbf4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ecbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ecbf8: 0x24424140  addiu       $v0, $v0, 0x4140
    ctx->pc = 0x1ecbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16704));
    // 0x1ecbfc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ecbfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ecc00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ecc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ecc04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ecc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ecc08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ecc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ecc0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ecc0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ecc10: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1ecc10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ecc14: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ecc14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1ecc18: 0xc07b358  jal         func_1ECD60
    ctx->pc = 0x1ECC18u;
    SET_GPR_U32(ctx, 31, 0x1ECC20u);
    ctx->pc = 0x1ECC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC18u;
            // 0x1ecc1c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECD60u;
    if (runtime->hasFunction(0x1ECD60u)) {
        auto targetFn = runtime->lookupFunction(0x1ECD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC20u; }
        if (ctx->pc != 0x1ECC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1ecd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC20u; }
        if (ctx->pc != 0x1ECC20u) { return; }
    }
    ctx->pc = 0x1ECC20u;
    // 0x1ecc20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ecc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ecc24: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecc28: 0x8c233830  lw          $v1, 0x3830($at)
    ctx->pc = 0x1ecc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1ecc2c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ecc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ecc30: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ecc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ecc34: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x1ecc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x1ecc38: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1ecc38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc3c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1ecc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1ecc40: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x1ecc40u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)255u)));
    // 0x1ecc44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ecc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ecc48: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ecc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ecc4c: 0xc07b350  jal         func_1ECD40
    ctx->pc = 0x1ECC4Cu;
    SET_GPR_U32(ctx, 31, 0x1ECC54u);
    ctx->pc = 0x1ECC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC4Cu;
            // 0x1ecc50: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECD40u;
    if (runtime->hasFunction(0x1ECD40u)) {
        auto targetFn = runtime->lookupFunction(0x1ECD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC54u; }
        if (ctx->pc != 0x1ECC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1ecd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC54u; }
        if (ctx->pc != 0x1ECC54u) { return; }
    }
    ctx->pc = 0x1ECC54u;
    // 0x1ecc54: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecc58: 0x8c223830  lw          $v0, 0x3830($at)
    ctx->pc = 0x1ecc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1ecc5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ecc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ecc60: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecc64: 0xac223830  sw          $v0, 0x3830($at)
    ctx->pc = 0x1ecc64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14384), GPR_U32(ctx, 2));
    // 0x1ecc68: 0x8e10003c  lw          $s0, 0x3C($s0)
    ctx->pc = 0x1ecc68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1ecc6c: 0x0  nop
    ctx->pc = 0x1ecc6cu;
    // NOP
label_1ecc70:
    // 0x1ecc70: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECC70u;
    {
        const bool branch_taken_0x1ecc70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC70u;
            // 0x1ecc74: 0x3c010044  lui         $at, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc70) {
            ctx->pc = 0x1ECC88u;
            goto label_1ecc88;
        }
    }
    ctx->pc = 0x1ECC78u;
    // 0x1ecc78: 0x8c233830  lw          $v1, 0x3830($at)
    ctx->pc = 0x1ecc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1ecc7c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1ecc7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1ecc80: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x1ECC80u;
    {
        const bool branch_taken_0x1ecc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc80) {
            ctx->pc = 0x1ECB30u;
            goto label_1ecb30;
        }
    }
    ctx->pc = 0x1ECC88u;
label_1ecc88:
    // 0x1ecc88: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecc8c: 0x8c273830  lw          $a3, 0x3830($at)
    ctx->pc = 0x1ecc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1ecc90: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1ecc90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1ecc94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecc98: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1ecc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1ecc9c: 0xc059e60  jal         func_167980
    ctx->pc = 0x1ECC9Cu;
    SET_GPR_U32(ctx, 31, 0x1ECCA4u);
    ctx->pc = 0x1ECCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC9Cu;
            // 0x1ecca0: 0x24c62f58  addiu       $a2, $a2, 0x2F58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (runtime->hasFunction(0x167980u)) {
        auto targetFn = runtime->lookupFunction(0x167980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCA4u; }
        if (ctx->pc != 0x1ECCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_0x167980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCA4u; }
        if (ctx->pc != 0x1ECCA4u) { return; }
    }
    ctx->pc = 0x1ECCA4u;
    // 0x1ecca4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecca8: 0x8c233830  lw          $v1, 0x3830($at)
    ctx->pc = 0x1ecca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1eccac: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1ECCACu;
    {
        const bool branch_taken_0x1eccac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eccac) {
            ctx->pc = 0x1ECD10u;
            goto label_1ecd10;
        }
    }
    ctx->pc = 0x1ECCB4u;
    // 0x1eccb4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x1eccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x1eccb8: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1eccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1eccbc: 0x24428140  addiu       $v0, $v0, -0x7EC0
    ctx->pc = 0x1eccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934848));
    // 0x1eccc0: 0x24633940  addiu       $v1, $v1, 0x3940
    ctx->pc = 0x1eccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14656));
    // 0x1eccc4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1eccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1eccc8: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x1eccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1ecccc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1eccccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1eccd0: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1eccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1eccd4: 0x24424140  addiu       $v0, $v0, 0x4140
    ctx->pc = 0x1eccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16704));
    // 0x1eccd8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1ECCD8u;
    SET_GPR_U32(ctx, 31, 0x1ECCE0u);
    ctx->pc = 0x1ECCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCD8u;
            // 0x1eccdc: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCE0u; }
        if (ctx->pc != 0x1ECCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCE0u; }
        if (ctx->pc != 0x1ECCE0u) { return; }
    }
    ctx->pc = 0x1ECCE0u;
    // 0x1ecce0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1ecce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1ecce4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ecce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ecce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ecce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eccec: 0xc07b34c  jal         func_1ECD30
    ctx->pc = 0x1ECCECu;
    SET_GPR_U32(ctx, 31, 0x1ECCF4u);
    ctx->pc = 0x1ECCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCECu;
            // 0x1eccf0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECD30u;
    if (runtime->hasFunction(0x1ECD30u)) {
        auto targetFn = runtime->lookupFunction(0x1ECD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCF4u; }
        if (ctx->pc != 0x1ECCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1ecd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCF4u; }
        if (ctx->pc != 0x1ECCF4u) { return; }
    }
    ctx->pc = 0x1ECCF4u;
    // 0x1eccf4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eccf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eccf8: 0x8c253830  lw          $a1, 0x3830($at)
    ctx->pc = 0x1eccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1eccfc: 0xc07b348  jal         func_1ECD20
    ctx->pc = 0x1ECCFCu;
    SET_GPR_U32(ctx, 31, 0x1ECD04u);
    ctx->pc = 0x1ECD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCFCu;
            // 0x1ecd00: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECD20u;
    if (runtime->hasFunction(0x1ECD20u)) {
        auto targetFn = runtime->lookupFunction(0x1ECD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD04u; }
        if (ctx->pc != 0x1ECD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1ecd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD04u; }
        if (ctx->pc != 0x1ECD04u) { return; }
    }
    ctx->pc = 0x1ECD04u;
    // 0x1ecd04: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x1ECD04u;
    SET_GPR_U32(ctx, 31, 0x1ECD0Cu);
    ctx->pc = 0x1ECD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD04u;
            // 0x1ecd08: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD0Cu; }
        if (ctx->pc != 0x1ECD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD0Cu; }
        if (ctx->pc != 0x1ECD0Cu) { return; }
    }
    ctx->pc = 0x1ECD0Cu;
    // 0x1ecd0c: 0x0  nop
    ctx->pc = 0x1ecd0cu;
    // NOP
label_1ecd10:
    // 0x1ecd10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ecd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecd14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecd18: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD18u;
            // 0x1ecd1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ECB30u: goto label_1ecb30;
            case 0x1ECC70u: goto label_1ecc70;
            case 0x1ECC88u: goto label_1ecc88;
            case 0x1ECD10u: goto label_1ecd10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ECD20u;
}
