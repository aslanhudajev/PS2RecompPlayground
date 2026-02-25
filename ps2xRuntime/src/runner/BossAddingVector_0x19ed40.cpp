#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: BossAddingVector
// Address: 0x19ed40 - 0x19ef34
void BossAddingVector_0x19ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossAddingVector_0x19ed40");
#endif

    ctx->pc = 0x19ed40u;

    // 0x19ed40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ed44: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x19ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x19ed48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19ed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ed4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ed4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ed50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19ed54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19ed54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19ed58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ed5c: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x19ed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ed60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19ed60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ed64: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x19ED64u;
    {
        const bool branch_taken_0x19ed64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19ED68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED64u;
            // 0x19ed68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed64) {
            ctx->pc = 0x19EDA0u;
            goto label_19eda0;
        }
    }
    ctx->pc = 0x19ED6Cu;
    // 0x19ed6c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x19ed70: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19ed70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x19ed74: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x19ed74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19ed78: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x19ED78u;
    SET_GPR_U32(ctx, 31, 0x19ED80u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ED80u; }
        if (ctx->pc != 0x19ED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ED80u; }
        if (ctx->pc != 0x19ED80u) { return; }
    }
    ctx->pc = 0x19ED80u;
    // 0x19ed80: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x19ed84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19ed84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x19ed88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ed88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ed8c: 0x0  nop
    ctx->pc = 0x19ed8cu;
    // NOP
    // 0x19ed90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ed90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ed94: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x19ED94u;
    {
        const bool branch_taken_0x19ed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED94u;
            // 0x19ed98: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed94) {
            ctx->pc = 0x19EE60u;
            goto label_19ee60;
        }
    }
    ctx->pc = 0x19ED9Cu;
    // 0x19ed9c: 0x0  nop
    ctx->pc = 0x19ed9cu;
    // NOP
label_19eda0:
    // 0x19eda0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x19eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x19eda4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19eda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eda8: 0x0  nop
    ctx->pc = 0x19eda8u;
    // NOP
    // 0x19edac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19edacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19edb0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x19EDB0u;
    {
        const bool branch_taken_0x19edb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19EDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EDB0u;
            // 0x19edb4: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19edb0) {
            ctx->pc = 0x19EDE8u;
            goto label_19ede8;
        }
    }
    ctx->pc = 0x19EDB8u;
    // 0x19edb8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19edb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x19edbc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x19edbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19edc0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x19EDC0u;
    SET_GPR_U32(ctx, 31, 0x19EDC8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EDC8u; }
        if (ctx->pc != 0x19EDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EDC8u; }
        if (ctx->pc != 0x19EDC8u) { return; }
    }
    ctx->pc = 0x19EDC8u;
    // 0x19edc8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x19edcc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19edccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x19edd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19edd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19edd4: 0x0  nop
    ctx->pc = 0x19edd4u;
    // NOP
    // 0x19edd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19edd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19eddc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19eddcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19ede0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19EDE0u;
    {
        const bool branch_taken_0x19ede0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EDE0u;
            // 0x19ede4: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ede0) {
            ctx->pc = 0x19EE60u;
            goto label_19ee60;
        }
    }
    ctx->pc = 0x19EDE8u;
label_19ede8:
    // 0x19ede8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x19EDE8u;
    SET_GPR_U32(ctx, 31, 0x19EDF0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EDF0u; }
        if (ctx->pc != 0x19EDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EDF0u; }
        if (ctx->pc != 0x19EDF0u) { return; }
    }
    ctx->pc = 0x19EDF0u;
    // 0x19edf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19edf0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x19edf4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19EDF4u;
    {
        const bool branch_taken_0x19edf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19edf4) {
            ctx->pc = 0x19EE30u;
            goto label_19ee30;
        }
    }
    ctx->pc = 0x19EDFCu;
    // 0x19edfc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x19ee00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19ee00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x19ee04: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x19ee04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19ee08: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x19EE08u;
    SET_GPR_U32(ctx, 31, 0x19EE10u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE10u; }
        if (ctx->pc != 0x19EE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE10u; }
        if (ctx->pc != 0x19EE10u) { return; }
    }
    ctx->pc = 0x19EE10u;
    // 0x19ee10: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x19ee14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19ee14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x19ee18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ee18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ee1c: 0x0  nop
    ctx->pc = 0x19ee1cu;
    // NOP
    // 0x19ee20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ee20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ee24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19EE24u;
    {
        const bool branch_taken_0x19ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE24u;
            // 0x19ee28: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee24) {
            ctx->pc = 0x19EE60u;
            goto label_19ee60;
        }
    }
    ctx->pc = 0x19EE2Cu;
    // 0x19ee2c: 0x0  nop
    ctx->pc = 0x19ee2cu;
    // NOP
label_19ee30:
    // 0x19ee30: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x19ee34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19ee34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x19ee38: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x19ee38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19ee3c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x19EE3Cu;
    SET_GPR_U32(ctx, 31, 0x19EE44u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE44u; }
        if (ctx->pc != 0x19EE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE44u; }
        if (ctx->pc != 0x19EE44u) { return; }
    }
    ctx->pc = 0x19EE44u;
    // 0x19ee44: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x19ee48: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19ee48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x19ee4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ee4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ee50: 0x0  nop
    ctx->pc = 0x19ee50u;
    // NOP
    // 0x19ee54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ee54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ee58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19ee58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19ee5c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x19ee5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19ee60:
    // 0x19ee60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ee64: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x19ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x19ee68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ee68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ee6c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x19ee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ee70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19ee70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ee74: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x19EE74u;
    {
        const bool branch_taken_0x19ee74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ee74) {
            ctx->pc = 0x19EEA0u;
            goto label_19eea0;
        }
    }
    ctx->pc = 0x19EE7Cu;
    // 0x19ee7c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x19EE7Cu;
    SET_GPR_U32(ctx, 31, 0x19EE84u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE84u; }
        if (ctx->pc != 0x19EE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE84u; }
        if (ctx->pc != 0x19EE84u) { return; }
    }
    ctx->pc = 0x19EE84u;
    // 0x19ee84: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x19ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x19ee88: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x19ee88u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x19ee8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19ee8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ee90: 0x0  nop
    ctx->pc = 0x19ee90u;
    // NOP
    // 0x19ee94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ee94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ee98: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19EE98u;
    {
        const bool branch_taken_0x19ee98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EE98u;
            // 0x19ee9c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee98) {
            ctx->pc = 0x19EF20u;
            goto label_19ef20;
        }
    }
    ctx->pc = 0x19EEA0u;
label_19eea0:
    // 0x19eea0: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x19eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x19eea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19eea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eea8: 0x0  nop
    ctx->pc = 0x19eea8u;
    // NOP
    // 0x19eeac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19eeacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eeb0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x19EEB0u;
    {
        const bool branch_taken_0x19eeb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19eeb0) {
            ctx->pc = 0x19EEE0u;
            goto label_19eee0;
        }
    }
    ctx->pc = 0x19EEB8u;
    // 0x19eeb8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x19EEB8u;
    SET_GPR_U32(ctx, 31, 0x19EEC0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEC0u; }
        if (ctx->pc != 0x19EEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEC0u; }
        if (ctx->pc != 0x19EEC0u) { return; }
    }
    ctx->pc = 0x19EEC0u;
    // 0x19eec0: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x19eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x19eec4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x19eec4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x19eec8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19eec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19eecc: 0x0  nop
    ctx->pc = 0x19eeccu;
    // NOP
    // 0x19eed0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19eed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19eed4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19eed4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19eed8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19EED8u;
    {
        const bool branch_taken_0x19eed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EED8u;
            // 0x19eedc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eed8) {
            ctx->pc = 0x19EF20u;
            goto label_19ef20;
        }
    }
    ctx->pc = 0x19EEE0u;
label_19eee0:
    // 0x19eee0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x19EEE0u;
    SET_GPR_U32(ctx, 31, 0x19EEE8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEE8u; }
        if (ctx->pc != 0x19EEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEE8u; }
        if (ctx->pc != 0x19EEE8u) { return; }
    }
    ctx->pc = 0x19EEE8u;
    // 0x19eee8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19eee8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x19eeec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19EEECu;
    {
        const bool branch_taken_0x19eeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eeec) {
            ctx->pc = 0x19EF08u;
            goto label_19ef08;
        }
    }
    ctx->pc = 0x19EEF4u;
    // 0x19eef4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x19EEF4u;
    SET_GPR_U32(ctx, 31, 0x19EEFCu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEFCu; }
        if (ctx->pc != 0x19EEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEFCu; }
        if (ctx->pc != 0x19EEFCu) { return; }
    }
    ctx->pc = 0x19EEFCu;
    // 0x19eefc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x19eefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x19ef00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19EF00u;
    {
        const bool branch_taken_0x19ef00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF00u;
            // 0x19ef04: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef00) {
            ctx->pc = 0x19EF20u;
            goto label_19ef20;
        }
    }
    ctx->pc = 0x19EF08u;
label_19ef08:
    // 0x19ef08: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x19EF08u;
    SET_GPR_U32(ctx, 31, 0x19EF10u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF10u; }
        if (ctx->pc != 0x19EF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF10u; }
        if (ctx->pc != 0x19EF10u) { return; }
    }
    ctx->pc = 0x19EF10u;
    // 0x19ef10: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x19ef10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x19ef14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19ef14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19ef18: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x19ef18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x19ef1c: 0x0  nop
    ctx->pc = 0x19ef1cu;
    // NOP
label_19ef20:
    // 0x19ef20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ef20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ef24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19ef24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ef28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19ef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19ef2c: 0x3e00008  jr          $ra
    ctx->pc = 0x19EF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF2Cu;
            // 0x19ef30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EDA0u: goto label_19eda0;
            case 0x19EDE8u: goto label_19ede8;
            case 0x19EE30u: goto label_19ee30;
            case 0x19EE60u: goto label_19ee60;
            case 0x19EEA0u: goto label_19eea0;
            case 0x19EEE0u: goto label_19eee0;
            case 0x19EF08u: goto label_19ef08;
            case 0x19EF20u: goto label_19ef20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EF34u;
}
