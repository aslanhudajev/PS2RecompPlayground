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
// Address: 0x1dada0 - 0x1db0d4
void BossAddingVector_0x1dada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossAddingVector_0x1dada0");
#endif

    ctx->pc = 0x1dada0u;

    // 0x1dada0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dada4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1dada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1dada8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dada8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dadac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dadacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dadb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dadb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dadb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dadb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dadb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dadb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dadbc: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1dadbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dadc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dadc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dadc4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1DADC4u;
    {
        const bool branch_taken_0x1dadc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADC4u;
            // 0x1dadc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dadc4) {
            ctx->pc = 0x1DAE28u;
            goto label_1dae28;
        }
    }
    ctx->pc = 0x1DADCCu;
    // 0x1dadcc: 0x3c033fb9  lui         $v1, 0x3FB9
    ctx->pc = 0x1dadccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
    // 0x1dadd0: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1dadd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1dadd4: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1dadd4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1dadd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1dadd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1daddc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1daddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dade0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1dade0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1dade4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DADE4u;
    SET_GPR_U32(ctx, 31, 0x1DADECu);
    ctx->pc = 0x1DADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADE4u;
            // 0x1dade8: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADECu; }
        if (ctx->pc != 0x1DADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADECu; }
        if (ctx->pc != 0x1DADECu) { return; }
    }
    ctx->pc = 0x1DADECu;
    // 0x1dadec: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DADECu;
    SET_GPR_U32(ctx, 31, 0x1DADF4u);
    ctx->pc = 0x1DADF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADECu;
            // 0x1dadf0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADF4u; }
        if (ctx->pc != 0x1DADF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DADF4u; }
        if (ctx->pc != 0x1DADF4u) { return; }
    }
    ctx->pc = 0x1DADF4u;
    // 0x1dadf4: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1dadf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1dadf8: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1dadf8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1dadfc: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1dadfcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1dae00: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1dae00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1dae04: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1dae04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1dae08: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1dae08u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1dae0c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dae0cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1dae10: 0xc040880  jal         func_102200
    ctx->pc = 0x1DAE10u;
    SET_GPR_U32(ctx, 31, 0x1DAE18u);
    ctx->pc = 0x1DAE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE10u;
            // 0x1dae14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE18u; }
        if (ctx->pc != 0x1DAE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE18u; }
        if (ctx->pc != 0x1DAE18u) { return; }
    }
    ctx->pc = 0x1DAE18u;
    // 0x1dae18: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DAE18u;
    SET_GPR_U32(ctx, 31, 0x1DAE20u);
    ctx->pc = 0x1DAE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE18u;
            // 0x1dae1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE20u; }
        if (ctx->pc != 0x1DAE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE20u; }
        if (ctx->pc != 0x1DAE20u) { return; }
    }
    ctx->pc = 0x1DAE20u;
    // 0x1dae20: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1DAE20u;
    {
        const bool branch_taken_0x1dae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE20u;
            // 0x1dae24: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae20) {
            ctx->pc = 0x1DAF80u;
            goto label_1daf80;
        }
    }
    ctx->pc = 0x1DAE28u;
label_1dae28:
    // 0x1dae28: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1dae28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1dae2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dae2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dae30: 0x0  nop
    ctx->pc = 0x1dae30u;
    // NOP
    // 0x1dae34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dae34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dae38: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1DAE38u;
    {
        const bool branch_taken_0x1dae38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE38u;
            // 0x1dae3c: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae38) {
            ctx->pc = 0x1DAEA8u;
            goto label_1daea8;
        }
    }
    ctx->pc = 0x1DAE40u;
    // 0x1dae40: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1dae40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1dae44: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1dae44u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1dae48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1dae48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1dae4c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1dae4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dae50: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1dae50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1dae54: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DAE54u;
    SET_GPR_U32(ctx, 31, 0x1DAE5Cu);
    ctx->pc = 0x1DAE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE54u;
            // 0x1dae58: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE5Cu; }
        if (ctx->pc != 0x1DAE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE5Cu; }
        if (ctx->pc != 0x1DAE5Cu) { return; }
    }
    ctx->pc = 0x1DAE5Cu;
    // 0x1dae5c: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DAE5Cu;
    SET_GPR_U32(ctx, 31, 0x1DAE64u);
    ctx->pc = 0x1DAE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE5Cu;
            // 0x1dae60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE64u; }
        if (ctx->pc != 0x1DAE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE64u; }
        if (ctx->pc != 0x1DAE64u) { return; }
    }
    ctx->pc = 0x1DAE64u;
    // 0x1dae64: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1dae64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1dae68: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1dae68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1dae6c: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1dae6cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1dae70: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1dae70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1dae74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1dae74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1dae78: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1dae78u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1dae7c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dae7cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1dae80: 0xc040880  jal         func_102200
    ctx->pc = 0x1DAE80u;
    SET_GPR_U32(ctx, 31, 0x1DAE88u);
    ctx->pc = 0x1DAE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE80u;
            // 0x1dae84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE88u; }
        if (ctx->pc != 0x1DAE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE88u; }
        if (ctx->pc != 0x1DAE88u) { return; }
    }
    ctx->pc = 0x1DAE88u;
    // 0x1dae88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1dae88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1dae8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1dae8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dae90: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1dae90u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1dae94: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DAE94u;
    SET_GPR_U32(ctx, 31, 0x1DAE9Cu);
    ctx->pc = 0x1DAE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE94u;
            // 0x1dae98: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE9Cu; }
        if (ctx->pc != 0x1DAE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAE9Cu; }
        if (ctx->pc != 0x1DAE9Cu) { return; }
    }
    ctx->pc = 0x1DAE9Cu;
    // 0x1dae9c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1DAE9Cu;
    {
        const bool branch_taken_0x1dae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE9Cu;
            // 0x1daea0: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae9c) {
            ctx->pc = 0x1DAF80u;
            goto label_1daf80;
        }
    }
    ctx->pc = 0x1DAEA4u;
    // 0x1daea4: 0x0  nop
    ctx->pc = 0x1daea4u;
    // NOP
label_1daea8:
    // 0x1daea8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DAEA8u;
    SET_GPR_U32(ctx, 31, 0x1DAEB0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEB0u; }
        if (ctx->pc != 0x1DAEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEB0u; }
        if (ctx->pc != 0x1DAEB0u) { return; }
    }
    ctx->pc = 0x1DAEB0u;
    // 0x1daeb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1daeb0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1daeb4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DAEB4u;
    {
        const bool branch_taken_0x1daeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAEB4u;
            // 0x1daeb8: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daeb4) {
            ctx->pc = 0x1DAF18u;
            goto label_1daf18;
        }
    }
    ctx->pc = 0x1DAEBCu;
    // 0x1daebc: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1daebcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1daec0: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1daec0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1daec4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1daec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1daec8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1daec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1daecc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1daeccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1daed0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DAED0u;
    SET_GPR_U32(ctx, 31, 0x1DAED8u);
    ctx->pc = 0x1DAED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAED0u;
            // 0x1daed4: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAED8u; }
        if (ctx->pc != 0x1DAED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAED8u; }
        if (ctx->pc != 0x1DAED8u) { return; }
    }
    ctx->pc = 0x1DAED8u;
    // 0x1daed8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DAED8u;
    SET_GPR_U32(ctx, 31, 0x1DAEE0u);
    ctx->pc = 0x1DAEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAED8u;
            // 0x1daedc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEE0u; }
        if (ctx->pc != 0x1DAEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAEE0u; }
        if (ctx->pc != 0x1DAEE0u) { return; }
    }
    ctx->pc = 0x1DAEE0u;
    // 0x1daee0: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1daee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1daee4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1daee4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1daee8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1daee8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1daeec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1daeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1daef0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1daef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1daef4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1daef4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1daef8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1daef8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1daefc: 0xc040880  jal         func_102200
    ctx->pc = 0x1DAEFCu;
    SET_GPR_U32(ctx, 31, 0x1DAF04u);
    ctx->pc = 0x1DAF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAEFCu;
            // 0x1daf00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF04u; }
        if (ctx->pc != 0x1DAF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF04u; }
        if (ctx->pc != 0x1DAF04u) { return; }
    }
    ctx->pc = 0x1DAF04u;
    // 0x1daf04: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DAF04u;
    SET_GPR_U32(ctx, 31, 0x1DAF0Cu);
    ctx->pc = 0x1DAF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF04u;
            // 0x1daf08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF0Cu; }
        if (ctx->pc != 0x1DAF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF0Cu; }
        if (ctx->pc != 0x1DAF0Cu) { return; }
    }
    ctx->pc = 0x1DAF0Cu;
    // 0x1daf0c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1DAF0Cu;
    {
        const bool branch_taken_0x1daf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF0Cu;
            // 0x1daf10: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf0c) {
            ctx->pc = 0x1DAF80u;
            goto label_1daf80;
        }
    }
    ctx->pc = 0x1DAF14u;
    // 0x1daf14: 0x0  nop
    ctx->pc = 0x1daf14u;
    // NOP
label_1daf18:
    // 0x1daf18: 0x3c023fb9  lui         $v0, 0x3FB9
    ctx->pc = 0x1daf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16313 << 16));
    // 0x1daf1c: 0x34439999  ori         $v1, $v0, 0x9999
    ctx->pc = 0x1daf1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39321u)));
    // 0x1daf20: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1daf20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1daf24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1daf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1daf28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1daf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1daf2c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1daf2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1daf30: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DAF30u;
    SET_GPR_U32(ctx, 31, 0x1DAF38u);
    ctx->pc = 0x1DAF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF30u;
            // 0x1daf34: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF38u; }
        if (ctx->pc != 0x1DAF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF38u; }
        if (ctx->pc != 0x1DAF38u) { return; }
    }
    ctx->pc = 0x1DAF38u;
    // 0x1daf38: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DAF38u;
    SET_GPR_U32(ctx, 31, 0x1DAF40u);
    ctx->pc = 0x1DAF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF38u;
            // 0x1daf3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF40u; }
        if (ctx->pc != 0x1DAF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF40u; }
        if (ctx->pc != 0x1DAF40u) { return; }
    }
    ctx->pc = 0x1DAF40u;
    // 0x1daf40: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1daf40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1daf44: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1daf44u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1daf48: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1daf48u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1daf4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1daf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1daf50: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1daf50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1daf54: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1daf54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1daf58: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1daf58u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1daf5c: 0xc040880  jal         func_102200
    ctx->pc = 0x1DAF5Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF64u);
    ctx->pc = 0x1DAF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF5Cu;
            // 0x1daf60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF64u; }
        if (ctx->pc != 0x1DAF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF64u; }
        if (ctx->pc != 0x1DAF64u) { return; }
    }
    ctx->pc = 0x1DAF64u;
    // 0x1daf64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1daf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1daf68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1daf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1daf6c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1daf6cu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1daf70: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DAF70u;
    SET_GPR_U32(ctx, 31, 0x1DAF78u);
    ctx->pc = 0x1DAF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAF70u;
            // 0x1daf74: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF78u; }
        if (ctx->pc != 0x1DAF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAF78u; }
        if (ctx->pc != 0x1DAF78u) { return; }
    }
    ctx->pc = 0x1DAF78u;
    // 0x1daf78: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1daf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x1daf7c: 0x0  nop
    ctx->pc = 0x1daf7cu;
    // NOP
label_1daf80:
    // 0x1daf80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1daf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1daf84: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1daf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x1daf88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1daf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1daf8c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1daf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1daf90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1daf90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1daf94: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1DAF94u;
    {
        const bool branch_taken_0x1daf94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1daf94) {
            ctx->pc = 0x1DAFE0u;
            goto label_1dafe0;
        }
    }
    ctx->pc = 0x1DAF9Cu;
    // 0x1daf9c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DAF9Cu;
    SET_GPR_U32(ctx, 31, 0x1DAFA4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFA4u; }
        if (ctx->pc != 0x1DAFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFA4u; }
        if (ctx->pc != 0x1DAFA4u) { return; }
    }
    ctx->pc = 0x1DAFA4u;
    // 0x1dafa4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DAFA4u;
    SET_GPR_U32(ctx, 31, 0x1DAFACu);
    ctx->pc = 0x1DAFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFA4u;
            // 0x1dafa8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFACu; }
        if (ctx->pc != 0x1DAFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFACu; }
        if (ctx->pc != 0x1DAFACu) { return; }
    }
    ctx->pc = 0x1DAFACu;
    // 0x1dafac: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1dafacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1dafb0: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1dafb0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1dafb4: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1dafb4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1dafb8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1dafb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1dafbc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1dafbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1dafc0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1dafc0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1dafc4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dafc4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1dafc8: 0xc040880  jal         func_102200
    ctx->pc = 0x1DAFC8u;
    SET_GPR_U32(ctx, 31, 0x1DAFD0u);
    ctx->pc = 0x1DAFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFC8u;
            // 0x1dafcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFD0u; }
        if (ctx->pc != 0x1DAFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFD0u; }
        if (ctx->pc != 0x1DAFD0u) { return; }
    }
    ctx->pc = 0x1DAFD0u;
    // 0x1dafd0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DAFD0u;
    SET_GPR_U32(ctx, 31, 0x1DAFD8u);
    ctx->pc = 0x1DAFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFD0u;
            // 0x1dafd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFD8u; }
        if (ctx->pc != 0x1DAFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAFD8u; }
        if (ctx->pc != 0x1DAFD8u) { return; }
    }
    ctx->pc = 0x1DAFD8u;
    // 0x1dafd8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1DAFD8u;
    {
        const bool branch_taken_0x1dafd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAFD8u;
            // 0x1dafdc: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafd8) {
            ctx->pc = 0x1DB0C0u;
            goto label_1db0c0;
        }
    }
    ctx->pc = 0x1DAFE0u;
label_1dafe0:
    // 0x1dafe0: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1dafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1dafe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dafe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dafe8: 0x0  nop
    ctx->pc = 0x1dafe8u;
    // NOP
    // 0x1dafec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dafecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1daff0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1DAFF0u;
    {
        const bool branch_taken_0x1daff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1daff0) {
            ctx->pc = 0x1DB048u;
            goto label_1db048;
        }
    }
    ctx->pc = 0x1DAFF8u;
    // 0x1daff8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DAFF8u;
    SET_GPR_U32(ctx, 31, 0x1DB000u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB000u; }
        if (ctx->pc != 0x1DB000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB000u; }
        if (ctx->pc != 0x1DB000u) { return; }
    }
    ctx->pc = 0x1DB000u;
    // 0x1db000: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DB000u;
    SET_GPR_U32(ctx, 31, 0x1DB008u);
    ctx->pc = 0x1DB004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB000u;
            // 0x1db004: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB008u; }
        if (ctx->pc != 0x1DB008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB008u; }
        if (ctx->pc != 0x1DB008u) { return; }
    }
    ctx->pc = 0x1DB008u;
    // 0x1db008: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1db008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1db00c: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1db00cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1db010: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1db010u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1db014: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1db014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1db018: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1db018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1db01c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1db01cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1db020: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1db020u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1db024: 0xc040880  jal         func_102200
    ctx->pc = 0x1DB024u;
    SET_GPR_U32(ctx, 31, 0x1DB02Cu);
    ctx->pc = 0x1DB028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB024u;
            // 0x1db028: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB02Cu; }
        if (ctx->pc != 0x1DB02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB02Cu; }
        if (ctx->pc != 0x1DB02Cu) { return; }
    }
    ctx->pc = 0x1DB02Cu;
    // 0x1db02c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1db02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1db030: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1db030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db034: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1db034u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1db038: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DB038u;
    SET_GPR_U32(ctx, 31, 0x1DB040u);
    ctx->pc = 0x1DB03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB038u;
            // 0x1db03c: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB040u; }
        if (ctx->pc != 0x1DB040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB040u; }
        if (ctx->pc != 0x1DB040u) { return; }
    }
    ctx->pc = 0x1DB040u;
    // 0x1db040: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1DB040u;
    {
        const bool branch_taken_0x1db040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB040u;
            // 0x1db044: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db040) {
            ctx->pc = 0x1DB0C0u;
            goto label_1db0c0;
        }
    }
    ctx->pc = 0x1DB048u;
label_1db048:
    // 0x1db048: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DB048u;
    SET_GPR_U32(ctx, 31, 0x1DB050u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB050u; }
        if (ctx->pc != 0x1DB050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB050u; }
        if (ctx->pc != 0x1DB050u) { return; }
    }
    ctx->pc = 0x1DB050u;
    // 0x1db050: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1db050u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1db054: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DB054u;
    {
        const bool branch_taken_0x1db054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db054) {
            ctx->pc = 0x1DB088u;
            goto label_1db088;
        }
    }
    ctx->pc = 0x1DB05Cu;
    // 0x1db05c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DB05Cu;
    SET_GPR_U32(ctx, 31, 0x1DB064u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB064u; }
        if (ctx->pc != 0x1DB064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB064u; }
        if (ctx->pc != 0x1DB064u) { return; }
    }
    ctx->pc = 0x1DB064u;
    // 0x1db064: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DB064u;
    SET_GPR_U32(ctx, 31, 0x1DB06Cu);
    ctx->pc = 0x1DB068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB064u;
            // 0x1db068: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB06Cu; }
        if (ctx->pc != 0x1DB06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB06Cu; }
        if (ctx->pc != 0x1DB06Cu) { return; }
    }
    ctx->pc = 0x1DB06Cu;
    // 0x1db06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db070: 0xc040880  jal         func_102200
    ctx->pc = 0x1DB070u;
    SET_GPR_U32(ctx, 31, 0x1DB078u);
    ctx->pc = 0x1DB074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB070u;
            // 0x1db074: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB078u; }
        if (ctx->pc != 0x1DB078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB078u; }
        if (ctx->pc != 0x1DB078u) { return; }
    }
    ctx->pc = 0x1DB078u;
    // 0x1db078: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DB078u;
    SET_GPR_U32(ctx, 31, 0x1DB080u);
    ctx->pc = 0x1DB07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB078u;
            // 0x1db07c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB080u; }
        if (ctx->pc != 0x1DB080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB080u; }
        if (ctx->pc != 0x1DB080u) { return; }
    }
    ctx->pc = 0x1DB080u;
    // 0x1db080: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DB080u;
    {
        const bool branch_taken_0x1db080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB080u;
            // 0x1db084: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db080) {
            ctx->pc = 0x1DB0C0u;
            goto label_1db0c0;
        }
    }
    ctx->pc = 0x1DB088u;
label_1db088:
    // 0x1db088: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DB088u;
    SET_GPR_U32(ctx, 31, 0x1DB090u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB090u; }
        if (ctx->pc != 0x1DB090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB090u; }
        if (ctx->pc != 0x1DB090u) { return; }
    }
    ctx->pc = 0x1DB090u;
    // 0x1db090: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DB090u;
    SET_GPR_U32(ctx, 31, 0x1DB098u);
    ctx->pc = 0x1DB094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB090u;
            // 0x1db094: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB098u; }
        if (ctx->pc != 0x1DB098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB098u; }
        if (ctx->pc != 0x1DB098u) { return; }
    }
    ctx->pc = 0x1DB098u;
    // 0x1db098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db09c: 0xc040880  jal         func_102200
    ctx->pc = 0x1DB09Cu;
    SET_GPR_U32(ctx, 31, 0x1DB0A4u);
    ctx->pc = 0x1DB0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB09Cu;
            // 0x1db0a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0A4u; }
        if (ctx->pc != 0x1DB0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0A4u; }
        if (ctx->pc != 0x1DB0A4u) { return; }
    }
    ctx->pc = 0x1DB0A4u;
    // 0x1db0a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1db0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1db0a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1db0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db0ac: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1db0acu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1db0b0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DB0B0u;
    SET_GPR_U32(ctx, 31, 0x1DB0B8u);
    ctx->pc = 0x1DB0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB0B0u;
            // 0x1db0b4: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0B8u; }
        if (ctx->pc != 0x1DB0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB0B8u; }
        if (ctx->pc != 0x1DB0B8u) { return; }
    }
    ctx->pc = 0x1DB0B8u;
    // 0x1db0b8: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1db0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x1db0bc: 0x0  nop
    ctx->pc = 0x1db0bcu;
    // NOP
label_1db0c0:
    // 0x1db0c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1db0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db0c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db0c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB0CCu;
            // 0x1db0d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAE28u: goto label_1dae28;
            case 0x1DAEA8u: goto label_1daea8;
            case 0x1DAF18u: goto label_1daf18;
            case 0x1DAF80u: goto label_1daf80;
            case 0x1DAFE0u: goto label_1dafe0;
            case 0x1DB048u: goto label_1db048;
            case 0x1DB088u: goto label_1db088;
            case 0x1DB0C0u: goto label_1db0c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB0D4u;
}
