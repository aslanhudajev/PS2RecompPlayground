#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: VertexAnim
// Address: 0x1ead00 - 0x1eb150
void VertexAnim_0x1ead00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("VertexAnim_0x1ead00");
#endif

    ctx->pc = 0x1ead00u;

    // 0x1ead00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ead00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ead04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ead04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ead08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ead0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ead0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ead10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ead10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead14: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1EAD14u;
    SET_GPR_U32(ctx, 31, 0x1EAD1Cu);
    ctx->pc = 0x1EAD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD14u;
            // 0x1ead18: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD1Cu; }
        if (ctx->pc != 0x1EAD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAD1Cu; }
        if (ctx->pc != 0x1EAD1Cu) { return; }
    }
    ctx->pc = 0x1EAD1Cu;
    // 0x1ead1c: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ead1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ead20: 0x8c232e38  lw          $v1, 0x2E38($at)
    ctx->pc = 0x1ead20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11832)));
    // 0x1ead24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ead24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ead28: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ead28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ead2c: 0xac232e38  sw          $v1, 0x2E38($at)
    ctx->pc = 0x1ead2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11832), GPR_U32(ctx, 3));
    // 0x1ead30: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ead30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ead34: 0x8c232e38  lw          $v1, 0x2E38($at)
    ctx->pc = 0x1ead34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11832)));
    // 0x1ead38: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x1ead38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1ead3c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAD3Cu;
    {
        const bool branch_taken_0x1ead3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD3Cu;
            // 0x1ead40: 0x3c010044  lui         $at, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead3c) {
            ctx->pc = 0x1EAD48u;
            goto label_1ead48;
        }
    }
    ctx->pc = 0x1EAD44u;
    // 0x1ead44: 0xac202e38  sw          $zero, 0x2E38($at)
    ctx->pc = 0x1ead44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11832), GPR_U32(ctx, 0));
label_1ead48:
    // 0x1ead48: 0x16000099  bnez        $s0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1EAD48u;
    {
        const bool branch_taken_0x1ead48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAD48u;
            // 0x1ead4c: 0x3c0c0044  lui         $t4, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead48) {
            ctx->pc = 0x1EAFB0u;
            goto label_1eafb0;
        }
    }
    ctx->pc = 0x1EAD50u;
    // 0x1ead50: 0x3c0a0044  lui         $t2, 0x44
    ctx->pc = 0x1ead50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)68 << 16));
    // 0x1ead54: 0x3c090044  lui         $t1, 0x44
    ctx->pc = 0x1ead54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)68 << 16));
    // 0x1ead58: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1ead58u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead5c: 0x258c3550  addiu       $t4, $t4, 0x3550
    ctx->pc = 0x1ead5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 13648));
    // 0x1ead60: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1ead60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ead64: 0x254a3350  addiu       $t2, $t2, 0x3350
    ctx->pc = 0x1ead64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 13136));
    // 0x1ead68: 0x25293310  addiu       $t1, $t1, 0x3310
    ctx->pc = 0x1ead68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 13072));
    // 0x1ead6c: 0x0  nop
    ctx->pc = 0x1ead6cu;
    // NOP
label_1ead70:
    // 0x1ead70: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ead70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ead74: 0x8c232e38  lw          $v1, 0x2E38($at)
    ctx->pc = 0x1ead74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11832)));
    // 0x1ead78: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x1ead78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1ead7c: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x1ead7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1ead80: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAD80u;
    {
        const bool branch_taken_0x1ead80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ead80) {
            ctx->pc = 0x1EAD90u;
            goto label_1ead90;
        }
    }
    ctx->pc = 0x1EAD88u;
    // 0x1ead88: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1ead88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1ead8c: 0x0  nop
    ctx->pc = 0x1ead8cu;
    // NOP
label_1ead90:
    // 0x1ead90: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1ead90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ead94: 0x3c04477f  lui         $a0, 0x477F
    ctx->pc = 0x1ead94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18303 << 16));
    // 0x1ead98: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1ead98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ead9c: 0x3485ff00  ori         $a1, $a0, 0xFF00
    ctx->pc = 0x1ead9cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eada0: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1eada0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eada4: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1eada4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eada8: 0xe32823  subu        $a1, $a3, $v1
    ctx->pc = 0x1eada8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1eadac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1eadacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eadb0: 0x0  nop
    ctx->pc = 0x1eadb0u;
    // NOP
    // 0x1eadb4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1eadb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eadb8: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x1eadb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1eadbc: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1eadbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1eadc0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1eadc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eadc4: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EADC4u;
    SET_GPR_U32(ctx, 31, 0x1EADCCu);
    ctx->pc = 0x1EADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EADC4u;
            // 0x1eadc8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EADCCu; }
        if (ctx->pc != 0x1EADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EADCCu; }
        if (ctx->pc != 0x1EADCCu) { return; }
    }
    ctx->pc = 0x1EADCCu;
    // 0x1eadcc: 0x8c4f0014  lw          $t7, 0x14($v0)
    ctx->pc = 0x1eadccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1eadd0: 0x3c05477f  lui         $a1, 0x477F
    ctx->pc = 0x1eadd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18303 << 16));
    // 0x1eadd4: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x1eadd4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eadd8: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x1eadd8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eaddc: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x1eaddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eade0: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1eade0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eade4: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x1eade4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eade8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eade8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eadec: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x1eadecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1eadf0: 0x24843550  addiu       $a0, $a0, 0x3550
    ctx->pc = 0x1eadf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13648));
    // 0x1eadf4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1eadf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1eadf8: 0x1ee2821  addu        $a1, $t7, $t6
    ctx->pc = 0x1eadf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1eadfc: 0x657021  addu        $t6, $v1, $a1
    ctx->pc = 0x1eadfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1eae00: 0x25050008  addiu       $a1, $t0, 0x8
    ctx->pc = 0x1eae00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1eae04: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1eae04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1eae08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1eae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1eae0c: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x1eae0cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eae10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eae10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eae14: 0x0  nop
    ctx->pc = 0x1eae14u;
    // NOP
    // 0x1eae18: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1eae18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eae1c: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EAE1Cu;
    SET_GPR_U32(ctx, 31, 0x1EAE24u);
    ctx->pc = 0x1EAE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE1Cu;
            // 0x1eae20: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE24u; }
        if (ctx->pc != 0x1EAE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE24u; }
        if (ctx->pc != 0x1EAE24u) { return; }
    }
    ctx->pc = 0x1EAE24u;
    // 0x1eae24: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1eae24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eae28: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1eae28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eae2c: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1EAE34u);
    ctx->pc = 0x1EAE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE2Cu;
            // 0x1eae30: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE34u; }
        if (ctx->pc != 0x1EAE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE34u; }
        if (ctx->pc != 0x1EAE34u) { return; }
    }
    ctx->pc = 0x1EAE34u;
    // 0x1eae34: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1eae34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1eae38: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x1eae38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eae3c: 0x24633350  addiu       $v1, $v1, 0x3350
    ctx->pc = 0x1eae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13136));
    // 0x1eae40: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1eae40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1eae44: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1eae44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1eae48: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1eae48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eae4c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1eae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eae50: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1eae50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1eae54: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EAE54u;
    SET_GPR_U32(ctx, 31, 0x1EAE5Cu);
    ctx->pc = 0x1EAE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE54u;
            // 0x1eae58: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE5Cu; }
        if (ctx->pc != 0x1EAE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE5Cu; }
        if (ctx->pc != 0x1EAE5Cu) { return; }
    }
    ctx->pc = 0x1EAE5Cu;
    // 0x1eae5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eae60: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1eae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1eae64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae68: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1eae68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1eae6c: 0xc07ab28  jal         func_1EACA0
    ctx->pc = 0x1EAE6Cu;
    SET_GPR_U32(ctx, 31, 0x1EAE74u);
    ctx->pc = 0x1EAE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE6Cu;
            // 0x1eae70: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACA0u;
    if (runtime->hasFunction(0x1EACA0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE74u; }
        if (ctx->pc != 0x1EAE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1eaca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE74u; }
        if (ctx->pc != 0x1EAE74u) { return; }
    }
    ctx->pc = 0x1EAE74u;
    // 0x1eae74: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1eae74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1eae78: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x1eae78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x1eae7c: 0x29a3000f  slti        $v1, $t5, 0xF
    ctx->pc = 0x1eae7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1eae80: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x1eae80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x1eae84: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x1eae84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x1eae88: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1EAE88u;
    {
        const bool branch_taken_0x1eae88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE88u;
            // 0x1eae8c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae88) {
            ctx->pc = 0x1EAD70u;
            goto label_1ead70;
        }
    }
    ctx->pc = 0x1EAE90u;
    // 0x1eae90: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1eae90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1eae94: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1eae94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eae98: 0x8d2023  subu        $a0, $a0, $t5
    ctx->pc = 0x1eae98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1eae9c: 0x3c05477f  lui         $a1, 0x477F
    ctx->pc = 0x1eae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18303 << 16));
    // 0x1eaea0: 0x845818  mult        $t3, $a0, $a0
    ctx->pc = 0x1eaea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1eaea4: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x1eaea4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eaea8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1eaea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eaeac: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1eaeacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eaeb0: 0xd1940  sll         $v1, $t5, 5
    ctx->pc = 0x1eaeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
    // 0x1eaeb4: 0xeb2823  subu        $a1, $a3, $t3
    ctx->pc = 0x1eaeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x1eaeb8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eaeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eaebc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1eaebcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eaec0: 0x24843550  addiu       $a0, $a0, 0x3550
    ctx->pc = 0x1eaec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13648));
    // 0x1eaec4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1eaec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1eaec8: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x1eaec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1eaecc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1eaeccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaed0: 0x0  nop
    ctx->pc = 0x1eaed0u;
    // NOP
    // 0x1eaed4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1eaed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eaed8: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EAED8u;
    SET_GPR_U32(ctx, 31, 0x1EAEE0u);
    ctx->pc = 0x1EAEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAED8u;
            // 0x1eaedc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAEE0u; }
        if (ctx->pc != 0x1EAEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAEE0u; }
        if (ctx->pc != 0x1EAEE0u) { return; }
    }
    ctx->pc = 0x1EAEE0u;
    // 0x1eaee0: 0x8c490014  lw          $t1, 0x14($v0)
    ctx->pc = 0x1eaee0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1eaee4: 0x3c05477f  lui         $a1, 0x477F
    ctx->pc = 0x1eaee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18303 << 16));
    // 0x1eaee8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1eaee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eaeec: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x1eaeecu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eaef0: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1eaef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eaef4: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1eaef4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eaef8: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x1eaef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eaefc: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x1eaefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1eaf00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1eaf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1eaf04: 0x45100  sll         $t2, $a0, 4
    ctx->pc = 0x1eaf04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1eaf08: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eaf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eaf0c: 0x1282821  addu        $a1, $t1, $t0
    ctx->pc = 0x1eaf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1eaf10: 0x24843550  addiu       $a0, $a0, 0x3550
    ctx->pc = 0x1eaf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13648));
    // 0x1eaf14: 0xab4023  subu        $t0, $a1, $t3
    ctx->pc = 0x1eaf14u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1eaf18: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1eaf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1eaf1c: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x1eaf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1eaf20: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1eaf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1eaf24: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1eaf24u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eaf28: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1eaf28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaf2c: 0x0  nop
    ctx->pc = 0x1eaf2cu;
    // NOP
    // 0x1eaf30: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1eaf30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eaf34: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EAF34u;
    SET_GPR_U32(ctx, 31, 0x1EAF3Cu);
    ctx->pc = 0x1EAF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF34u;
            // 0x1eaf38: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF3Cu; }
        if (ctx->pc != 0x1EAF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF3Cu; }
        if (ctx->pc != 0x1EAF3Cu) { return; }
    }
    ctx->pc = 0x1EAF3Cu;
    // 0x1eaf3c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1eaf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eaf40: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eaf40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eaf44: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1eaf44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eaf48: 0x24843350  addiu       $a0, $a0, 0x3350
    ctx->pc = 0x1eaf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13136));
    // 0x1eaf4c: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EAF4Cu;
    SET_GPR_U32(ctx, 31, 0x1EAF54u);
    ctx->pc = 0x1EAF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF4Cu;
            // 0x1eaf50: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF54u; }
        if (ctx->pc != 0x1EAF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF54u; }
        if (ctx->pc != 0x1EAF54u) { return; }
    }
    ctx->pc = 0x1EAF54u;
    // 0x1eaf54: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1eaf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1eaf58: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x1eaf58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eaf5c: 0x24633350  addiu       $v1, $v1, 0x3350
    ctx->pc = 0x1eaf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13136));
    // 0x1eaf60: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1eaf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1eaf64: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x1eaf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1eaf68: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1eaf68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eaf6c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1eaf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eaf70: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1eaf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1eaf74: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EAF74u;
    SET_GPR_U32(ctx, 31, 0x1EAF7Cu);
    ctx->pc = 0x1EAF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF74u;
            // 0x1eaf78: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF7Cu; }
        if (ctx->pc != 0x1EAF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF7Cu; }
        if (ctx->pc != 0x1EAF7Cu) { return; }
    }
    ctx->pc = 0x1EAF7Cu;
    // 0x1eaf7c: 0xd18c0  sll         $v1, $t5, 3
    ctx->pc = 0x1eaf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x1eaf80: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1eaf80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eaf84: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1eaf84u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)255u)));
    // 0x1eaf88: 0xd2080  sll         $a0, $t5, 2
    ctx->pc = 0x1eaf88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1eaf8c: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1eaf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1eaf90: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1eaf90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaf94: 0x24633310  addiu       $v1, $v1, 0x3310
    ctx->pc = 0x1eaf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13072));
    // 0x1eaf98: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1eaf98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaf9c: 0xc07ab28  jal         func_1EACA0
    ctx->pc = 0x1EAF9Cu;
    SET_GPR_U32(ctx, 31, 0x1EAFA4u);
    ctx->pc = 0x1EAFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF9Cu;
            // 0x1eafa0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACA0u;
    if (runtime->hasFunction(0x1EACA0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFA4u; }
        if (ctx->pc != 0x1EAFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1eaca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFA4u; }
        if (ctx->pc != 0x1EAFA4u) { return; }
    }
    ctx->pc = 0x1EAFA4u;
    // 0x1eafa4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eafa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eafa8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1EAFA8u;
    {
        const bool branch_taken_0x1eafa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFA8u;
            // 0x1eafac: 0xac202e48  sw          $zero, 0x2E48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafa8) {
            ctx->pc = 0x1EB140u;
            goto label_1eb140;
        }
    }
    ctx->pc = 0x1EAFB0u;
label_1eafb0:
    // 0x1eafb0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eafb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eafb4: 0x8c232e48  lw          $v1, 0x2E48($at)
    ctx->pc = 0x1eafb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11848)));
    // 0x1eafb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eafb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eafbc: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eafbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eafc0: 0xac232e48  sw          $v1, 0x2E48($at)
    ctx->pc = 0x1eafc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11848), GPR_U32(ctx, 3));
    // 0x1eafc4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eafc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eafc8: 0x8c232e48  lw          $v1, 0x2E48($at)
    ctx->pc = 0x1eafc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11848)));
    // 0x1eafcc: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x1eafccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1eafd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAFD0u;
    {
        const bool branch_taken_0x1eafd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFD0u;
            // 0x1eafd4: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafd0) {
            ctx->pc = 0x1EAFE0u;
            goto label_1eafe0;
        }
    }
    ctx->pc = 0x1EAFD8u;
    // 0x1eafd8: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eafd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eafdc: 0xac232e48  sw          $v1, 0x2E48($at)
    ctx->pc = 0x1eafdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11848), GPR_U32(ctx, 3));
label_1eafe0:
    // 0x1eafe0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eafe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eafe4: 0x8c232e48  lw          $v1, 0x2E48($at)
    ctx->pc = 0x1eafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11848)));
    // 0x1eafe8: 0x3c0e0044  lui         $t6, 0x44
    ctx->pc = 0x1eafe8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)68 << 16));
    // 0x1eafec: 0x3c0c0044  lui         $t4, 0x44
    ctx->pc = 0x1eafecu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)68 << 16));
    // 0x1eaff0: 0x3c0b0044  lui         $t3, 0x44
    ctx->pc = 0x1eaff0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)68 << 16));
    // 0x1eaff4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eaff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaff8: 0x25ce3550  addiu       $t6, $t6, 0x3550
    ctx->pc = 0x1eaff8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13648));
    // 0x1eaffc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1eaffcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb000: 0x258c3350  addiu       $t4, $t4, 0x3350
    ctx->pc = 0x1eb000u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 13136));
    // 0x1eb004: 0x256b3310  addiu       $t3, $t3, 0x3310
    ctx->pc = 0x1eb004u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 13072));
    // 0x1eb008: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB008u;
    {
        const bool branch_taken_0x1eb008 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EB00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB008u;
            // 0x1eb00c: 0x35043  sra         $t2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb008) {
            ctx->pc = 0x1EB018u;
            goto label_1eb018;
        }
    }
    ctx->pc = 0x1EB010u;
    // 0x1eb010: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eb010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eb014: 0x35043  sra         $t2, $v1, 1
    ctx->pc = 0x1eb014u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 1));
label_1eb018:
    // 0x1eb018: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1eb018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb01c: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1eb01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb020: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1eb020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eb024: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1eb024u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb028: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x1eb028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb02c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1eb02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb030: 0x1461821  addu        $v1, $t2, $a2
    ctx->pc = 0x1eb030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1eb034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb038: 0x0  nop
    ctx->pc = 0x1eb038u;
    // NOP
    // 0x1eb03c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1eb03cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eb040: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x1eb040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1eb044: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1eb044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1eb048: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb04c: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB04Cu;
    SET_GPR_U32(ctx, 31, 0x1EB054u);
    ctx->pc = 0x1EB050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB04Cu;
            // 0x1eb050: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB054u; }
        if (ctx->pc != 0x1EB054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB054u; }
        if (ctx->pc != 0x1EB054u) { return; }
    }
    ctx->pc = 0x1EB054u;
    // 0x1eb054: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1eb054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1eb058: 0xd3900  sll         $a3, $t5, 4
    ctx->pc = 0x1eb058u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x1eb05c: 0x24633550  addiu       $v1, $v1, 0x3550
    ctx->pc = 0x1eb05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13648));
    // 0x1eb060: 0x8c4f0014  lw          $t7, 0x14($v0)
    ctx->pc = 0x1eb060u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1eb064: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1eb064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1eb068: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1eb068u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb06c: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1eb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb070: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1eb070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eb074: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1eb074u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb078: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x1eb078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eb07c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1eb07cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb080: 0x1e81821  addu        $v1, $t7, $t0
    ctx->pc = 0x1eb080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1eb084: 0x6a4023  subu        $t0, $v1, $t2
    ctx->pc = 0x1eb084u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1eb088: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x1eb088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1eb08c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1eb08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1eb090: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x1eb090u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1eb094: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1eb094u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb09c: 0x0  nop
    ctx->pc = 0x1eb09cu;
    // NOP
    // 0x1eb0a0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1eb0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eb0a4: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB0A4u;
    SET_GPR_U32(ctx, 31, 0x1EB0ACu);
    ctx->pc = 0x1EB0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0A4u;
            // 0x1eb0a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0ACu; }
        if (ctx->pc != 0x1EB0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0ACu; }
        if (ctx->pc != 0x1EB0ACu) { return; }
    }
    ctx->pc = 0x1EB0ACu;
    // 0x1eb0ac: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1eb0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eb0b0: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1eb0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eb0b4: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB0B4u;
    SET_GPR_U32(ctx, 31, 0x1EB0BCu);
    ctx->pc = 0x1EB0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0B4u;
            // 0x1eb0b8: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0BCu; }
        if (ctx->pc != 0x1EB0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0BCu; }
        if (ctx->pc != 0x1EB0BCu) { return; }
    }
    ctx->pc = 0x1EB0BCu;
    // 0x1eb0bc: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1eb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1eb0c0: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x1eb0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eb0c4: 0x24633350  addiu       $v1, $v1, 0x3350
    ctx->pc = 0x1eb0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13136));
    // 0x1eb0c8: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1eb0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1eb0cc: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1eb0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1eb0d0: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1eb0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eb0d4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1eb0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eb0d8: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1eb0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1eb0dc: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB0DCu;
    SET_GPR_U32(ctx, 31, 0x1EB0E4u);
    ctx->pc = 0x1EB0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB0DCu;
            // 0x1eb0e0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0E4u; }
        if (ctx->pc != 0x1EB0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB0E4u; }
        if (ctx->pc != 0x1EB0E4u) { return; }
    }
    ctx->pc = 0x1EB0E4u;
    // 0x1eb0e4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb0e8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1eb0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb0ec: 0x8c272e48  lw          $a3, 0x2E48($at)
    ctx->pc = 0x1eb0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11848)));
    // 0x1eb0f0: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x1eb0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0f4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1eb0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1eb0f8: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x1eb0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1eb0fc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1eb0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1eb100: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x1eb100u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1eb104: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1eb104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1eb108: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1eb108u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)255u)));
    // 0x1eb10c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1eb10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1eb110: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1eb110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb114: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1eb114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb118: 0xc07ab28  jal         func_1EACA0
    ctx->pc = 0x1EB118u;
    SET_GPR_U32(ctx, 31, 0x1EB120u);
    ctx->pc = 0x1EB11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB118u;
            // 0x1eb11c: 0x306800ff  andi        $t0, $v1, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACA0u;
    if (runtime->hasFunction(0x1EACA0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB120u; }
        if (ctx->pc != 0x1EB120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1eaca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB120u; }
        if (ctx->pc != 0x1EB120u) { return; }
    }
    ctx->pc = 0x1EB120u;
    // 0x1eb120: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1eb120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1eb124: 0x25ce0020  addiu       $t6, $t6, 0x20
    ctx->pc = 0x1eb124u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x1eb128: 0x29230010  slti        $v1, $t1, 0x10
    ctx->pc = 0x1eb128u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eb12c: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x1eb12cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x1eb130: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x1eb130u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x1eb134: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1EB134u;
    {
        const bool branch_taken_0x1eb134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB134u;
            // 0x1eb138: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb134) {
            ctx->pc = 0x1EB018u;
            goto label_1eb018;
        }
    }
    ctx->pc = 0x1EB13Cu;
    // 0x1eb13c: 0x0  nop
    ctx->pc = 0x1eb13cu;
    // NOP
label_1eb140:
    // 0x1eb140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eb140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb148: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB148u;
            // 0x1eb14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EAD48u: goto label_1ead48;
            case 0x1EAD70u: goto label_1ead70;
            case 0x1EAD90u: goto label_1ead90;
            case 0x1EAFB0u: goto label_1eafb0;
            case 0x1EAFE0u: goto label_1eafe0;
            case 0x1EB018u: goto label_1eb018;
            case 0x1EB140u: goto label_1eb140;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB150u;
}
