#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: BossAddingVector2
// Address: 0x1cbe80 - 0x1cc074
void BossAddingVector2_0x1cbe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossAddingVector2_0x1cbe80");
#endif

    ctx->pc = 0x1cbe80u;

    // 0x1cbe80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cbe84: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1cbe84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1cbe88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cbe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cbe8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cbe8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbe90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cbe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cbe94: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cbe94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cbe98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cbe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbe9c: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1cbe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbea0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cbea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbea4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1CBEA4u;
    {
        const bool branch_taken_0x1cbea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CBEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEA4u;
            // 0x1cbea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbea4) {
            ctx->pc = 0x1CBEE0u;
            goto label_1cbee0;
        }
    }
    ctx->pc = 0x1CBEACu;
    // 0x1cbeac: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cbeb0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cbeb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cbeb4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1cbeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cbeb8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CBEB8u;
    SET_GPR_U32(ctx, 31, 0x1CBEC0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEC0u; }
        if (ctx->pc != 0x1CBEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEC0u; }
        if (ctx->pc != 0x1CBEC0u) { return; }
    }
    ctx->pc = 0x1CBEC0u;
    // 0x1cbec0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cbec4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cbec4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cbec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cbec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbecc: 0x0  nop
    ctx->pc = 0x1cbeccu;
    // NOP
    // 0x1cbed0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cbed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cbed4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1CBED4u;
    {
        const bool branch_taken_0x1cbed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBED4u;
            // 0x1cbed8: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbed4) {
            ctx->pc = 0x1CBFA0u;
            goto label_1cbfa0;
        }
    }
    ctx->pc = 0x1CBEDCu;
    // 0x1cbedc: 0x0  nop
    ctx->pc = 0x1cbedcu;
    // NOP
label_1cbee0:
    // 0x1cbee0: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1cbee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1cbee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cbee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbee8: 0x0  nop
    ctx->pc = 0x1cbee8u;
    // NOP
    // 0x1cbeec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cbeecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbef0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1CBEF0u;
    {
        const bool branch_taken_0x1cbef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CBEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEF0u;
            // 0x1cbef4: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbef0) {
            ctx->pc = 0x1CBF28u;
            goto label_1cbf28;
        }
    }
    ctx->pc = 0x1CBEF8u;
    // 0x1cbef8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cbef8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cbefc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1cbefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cbf00: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CBF00u;
    SET_GPR_U32(ctx, 31, 0x1CBF08u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF08u; }
        if (ctx->pc != 0x1CBF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF08u; }
        if (ctx->pc != 0x1CBF08u) { return; }
    }
    ctx->pc = 0x1CBF08u;
    // 0x1cbf08: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cbf0c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cbf0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cbf10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cbf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbf14: 0x0  nop
    ctx->pc = 0x1cbf14u;
    // NOP
    // 0x1cbf18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cbf18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cbf1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cbf1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cbf20: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CBF20u;
    {
        const bool branch_taken_0x1cbf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF20u;
            // 0x1cbf24: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf20) {
            ctx->pc = 0x1CBFA0u;
            goto label_1cbfa0;
        }
    }
    ctx->pc = 0x1CBF28u;
label_1cbf28:
    // 0x1cbf28: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1CBF28u;
    SET_GPR_U32(ctx, 31, 0x1CBF30u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF30u; }
        if (ctx->pc != 0x1CBF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF30u; }
        if (ctx->pc != 0x1CBF30u) { return; }
    }
    ctx->pc = 0x1CBF30u;
    // 0x1cbf30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cbf30u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1cbf34: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CBF34u;
    {
        const bool branch_taken_0x1cbf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf34) {
            ctx->pc = 0x1CBF70u;
            goto label_1cbf70;
        }
    }
    ctx->pc = 0x1CBF3Cu;
    // 0x1cbf3c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cbf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cbf40: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cbf40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cbf44: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1cbf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cbf48: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CBF48u;
    SET_GPR_U32(ctx, 31, 0x1CBF50u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF50u; }
        if (ctx->pc != 0x1CBF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF50u; }
        if (ctx->pc != 0x1CBF50u) { return; }
    }
    ctx->pc = 0x1CBF50u;
    // 0x1cbf50: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cbf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cbf54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cbf54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cbf58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cbf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbf5c: 0x0  nop
    ctx->pc = 0x1cbf5cu;
    // NOP
    // 0x1cbf60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cbf60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cbf64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CBF64u;
    {
        const bool branch_taken_0x1cbf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF64u;
            // 0x1cbf68: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf64) {
            ctx->pc = 0x1CBFA0u;
            goto label_1cbfa0;
        }
    }
    ctx->pc = 0x1CBF6Cu;
    // 0x1cbf6c: 0x0  nop
    ctx->pc = 0x1cbf6cu;
    // NOP
label_1cbf70:
    // 0x1cbf70: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cbf74: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cbf74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cbf78: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1cbf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cbf7c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CBF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CBF84u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF84u; }
        if (ctx->pc != 0x1CBF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF84u; }
        if (ctx->pc != 0x1CBF84u) { return; }
    }
    ctx->pc = 0x1CBF84u;
    // 0x1cbf84: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cbf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cbf88: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cbf88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cbf8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cbf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbf90: 0x0  nop
    ctx->pc = 0x1cbf90u;
    // NOP
    // 0x1cbf94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cbf94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cbf98: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cbf98u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cbf9c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1cbf9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1cbfa0:
    // 0x1cbfa0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cbfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbfa4: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1cbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1cbfa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cbfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbfac: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1cbfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbfb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cbfb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbfb4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1CBFB4u;
    {
        const bool branch_taken_0x1cbfb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cbfb4) {
            ctx->pc = 0x1CBFE0u;
            goto label_1cbfe0;
        }
    }
    ctx->pc = 0x1CBFBCu;
    // 0x1cbfbc: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CBFBCu;
    SET_GPR_U32(ctx, 31, 0x1CBFC4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFC4u; }
        if (ctx->pc != 0x1CBFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFC4u; }
        if (ctx->pc != 0x1CBFC4u) { return; }
    }
    ctx->pc = 0x1CBFC4u;
    // 0x1cbfc4: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1cbfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1cbfc8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1cbfc8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cbfcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cbfccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbfd0: 0x0  nop
    ctx->pc = 0x1cbfd0u;
    // NOP
    // 0x1cbfd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cbfd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cbfd8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1CBFD8u;
    {
        const bool branch_taken_0x1cbfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFD8u;
            // 0x1cbfdc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfd8) {
            ctx->pc = 0x1CC060u;
            goto label_1cc060;
        }
    }
    ctx->pc = 0x1CBFE0u;
label_1cbfe0:
    // 0x1cbfe0: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1cbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1cbfe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cbfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbfe8: 0x0  nop
    ctx->pc = 0x1cbfe8u;
    // NOP
    // 0x1cbfec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cbfecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbff0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1CBFF0u;
    {
        const bool branch_taken_0x1cbff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cbff0) {
            ctx->pc = 0x1CC020u;
            goto label_1cc020;
        }
    }
    ctx->pc = 0x1CBFF8u;
    // 0x1cbff8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CBFF8u;
    SET_GPR_U32(ctx, 31, 0x1CC000u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC000u; }
        if (ctx->pc != 0x1CC000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC000u; }
        if (ctx->pc != 0x1CC000u) { return; }
    }
    ctx->pc = 0x1CC000u;
    // 0x1cc000: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1cc000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1cc004: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1cc004u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc008: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cc008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc00c: 0x0  nop
    ctx->pc = 0x1cc00cu;
    // NOP
    // 0x1cc010: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cc010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cc014: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cc014u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cc018: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC018u;
    {
        const bool branch_taken_0x1cc018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC018u;
            // 0x1cc01c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc018) {
            ctx->pc = 0x1CC060u;
            goto label_1cc060;
        }
    }
    ctx->pc = 0x1CC020u;
label_1cc020:
    // 0x1cc020: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1CC020u;
    SET_GPR_U32(ctx, 31, 0x1CC028u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC028u; }
        if (ctx->pc != 0x1CC028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC028u; }
        if (ctx->pc != 0x1CC028u) { return; }
    }
    ctx->pc = 0x1CC028u;
    // 0x1cc028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc028u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1cc02c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC02Cu;
    {
        const bool branch_taken_0x1cc02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc02c) {
            ctx->pc = 0x1CC048u;
            goto label_1cc048;
        }
    }
    ctx->pc = 0x1CC034u;
    // 0x1cc034: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CC034u;
    SET_GPR_U32(ctx, 31, 0x1CC03Cu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC03Cu; }
        if (ctx->pc != 0x1CC03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC03Cu; }
        if (ctx->pc != 0x1CC03Cu) { return; }
    }
    ctx->pc = 0x1CC03Cu;
    // 0x1cc03c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cc03cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cc040: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC040u;
    {
        const bool branch_taken_0x1cc040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC040u;
            // 0x1cc044: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc040) {
            ctx->pc = 0x1CC060u;
            goto label_1cc060;
        }
    }
    ctx->pc = 0x1CC048u;
label_1cc048:
    // 0x1cc048: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CC048u;
    SET_GPR_U32(ctx, 31, 0x1CC050u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC050u; }
        if (ctx->pc != 0x1CC050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC050u; }
        if (ctx->pc != 0x1CC050u) { return; }
    }
    ctx->pc = 0x1CC050u;
    // 0x1cc050: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cc050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cc054: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cc054u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cc058: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1cc058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1cc05c: 0x0  nop
    ctx->pc = 0x1cc05cu;
    // NOP
label_1cc060:
    // 0x1cc060: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc064: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cc064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc068: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cc068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cc06c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC06Cu;
            // 0x1cc070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBEE0u: goto label_1cbee0;
            case 0x1CBF28u: goto label_1cbf28;
            case 0x1CBF70u: goto label_1cbf70;
            case 0x1CBFA0u: goto label_1cbfa0;
            case 0x1CBFE0u: goto label_1cbfe0;
            case 0x1CC020u: goto label_1cc020;
            case 0x1CC048u: goto label_1cc048;
            case 0x1CC060u: goto label_1cc060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC074u;
}
