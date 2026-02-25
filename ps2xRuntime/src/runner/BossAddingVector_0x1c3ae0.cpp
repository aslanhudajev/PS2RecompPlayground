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
// Address: 0x1c3ae0 - 0x1c3e14
void BossAddingVector_0x1c3ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossAddingVector_0x1c3ae0");
#endif

    ctx->pc = 0x1c3ae0u;

    // 0x1c3ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3ae4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1c3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1c3ae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c3aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c3af4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3af8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c3afc: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1c3afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3b00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c3b00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3b04: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1C3B04u;
    {
        const bool branch_taken_0x1c3b04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B04u;
            // 0x1c3b08: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b04) {
            ctx->pc = 0x1C3B68u;
            goto label_1c3b68;
        }
    }
    ctx->pc = 0x1C3B0Cu;
    // 0x1c3b0c: 0x3c033fb9  lui         $v1, 0x3FB9
    ctx->pc = 0x1c3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
    // 0x1c3b10: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1c3b10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3b14: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1c3b14u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3b18: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c3b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c3b1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3b20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c3b20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c3b24: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C3B24u;
    SET_GPR_U32(ctx, 31, 0x1C3B2Cu);
    ctx->pc = 0x1C3B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B24u;
            // 0x1c3b28: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B2Cu; }
        if (ctx->pc != 0x1C3B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B2Cu; }
        if (ctx->pc != 0x1C3B2Cu) { return; }
    }
    ctx->pc = 0x1C3B2Cu;
    // 0x1c3b2c: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C3B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B34u);
    ctx->pc = 0x1C3B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B2Cu;
            // 0x1c3b30: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B34u; }
        if (ctx->pc != 0x1C3B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B34u; }
        if (ctx->pc != 0x1C3B34u) { return; }
    }
    ctx->pc = 0x1C3B34u;
    // 0x1c3b34: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1c3b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1c3b38: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c3b38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3b3c: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c3b3cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3b40: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c3b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c3b44: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c3b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c3b48: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c3b48u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c3b4c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c3b4cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1c3b50: 0xc040880  jal         func_102200
    ctx->pc = 0x1C3B50u;
    SET_GPR_U32(ctx, 31, 0x1C3B58u);
    ctx->pc = 0x1C3B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B50u;
            // 0x1c3b54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B58u; }
        if (ctx->pc != 0x1C3B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B58u; }
        if (ctx->pc != 0x1C3B58u) { return; }
    }
    ctx->pc = 0x1C3B58u;
    // 0x1c3b58: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C3B58u;
    SET_GPR_U32(ctx, 31, 0x1C3B60u);
    ctx->pc = 0x1C3B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B58u;
            // 0x1c3b5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B60u; }
        if (ctx->pc != 0x1C3B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B60u; }
        if (ctx->pc != 0x1C3B60u) { return; }
    }
    ctx->pc = 0x1C3B60u;
    // 0x1c3b60: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1C3B60u;
    {
        const bool branch_taken_0x1c3b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B60u;
            // 0x1c3b64: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b60) {
            ctx->pc = 0x1C3CC0u;
            goto label_1c3cc0;
        }
    }
    ctx->pc = 0x1C3B68u;
label_1c3b68:
    // 0x1c3b68: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1c3b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3b70: 0x0  nop
    ctx->pc = 0x1c3b70u;
    // NOP
    // 0x1c3b74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c3b74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3b78: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1C3B78u;
    {
        const bool branch_taken_0x1c3b78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B78u;
            // 0x1c3b7c: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b78) {
            ctx->pc = 0x1C3BE8u;
            goto label_1c3be8;
        }
    }
    ctx->pc = 0x1C3B80u;
    // 0x1c3b80: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1c3b80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3b84: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1c3b84u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3b88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c3b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c3b8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3b90: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c3b90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c3b94: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C3B94u;
    SET_GPR_U32(ctx, 31, 0x1C3B9Cu);
    ctx->pc = 0x1C3B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B94u;
            // 0x1c3b98: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B9Cu; }
        if (ctx->pc != 0x1C3B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B9Cu; }
        if (ctx->pc != 0x1C3B9Cu) { return; }
    }
    ctx->pc = 0x1C3B9Cu;
    // 0x1c3b9c: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C3B9Cu;
    SET_GPR_U32(ctx, 31, 0x1C3BA4u);
    ctx->pc = 0x1C3BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B9Cu;
            // 0x1c3ba0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3BA4u; }
        if (ctx->pc != 0x1C3BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3BA4u; }
        if (ctx->pc != 0x1C3BA4u) { return; }
    }
    ctx->pc = 0x1C3BA4u;
    // 0x1c3ba4: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1c3ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1c3ba8: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c3ba8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3bac: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c3bacu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3bb0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c3bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c3bb4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c3bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c3bb8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c3bb8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c3bbc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c3bbcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1c3bc0: 0xc040880  jal         func_102200
    ctx->pc = 0x1C3BC0u;
    SET_GPR_U32(ctx, 31, 0x1C3BC8u);
    ctx->pc = 0x1C3BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3BC0u;
            // 0x1c3bc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3BC8u; }
        if (ctx->pc != 0x1C3BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3BC8u; }
        if (ctx->pc != 0x1C3BC8u) { return; }
    }
    ctx->pc = 0x1C3BC8u;
    // 0x1c3bc8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c3bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c3bcc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3bd0: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1c3bd0u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c3bd4: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C3BD4u;
    SET_GPR_U32(ctx, 31, 0x1C3BDCu);
    ctx->pc = 0x1C3BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3BD4u;
            // 0x1c3bd8: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3BDCu; }
        if (ctx->pc != 0x1C3BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3BDCu; }
        if (ctx->pc != 0x1C3BDCu) { return; }
    }
    ctx->pc = 0x1C3BDCu;
    // 0x1c3bdc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1C3BDCu;
    {
        const bool branch_taken_0x1c3bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3BDCu;
            // 0x1c3be0: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bdc) {
            ctx->pc = 0x1C3CC0u;
            goto label_1c3cc0;
        }
    }
    ctx->pc = 0x1C3BE4u;
    // 0x1c3be4: 0x0  nop
    ctx->pc = 0x1c3be4u;
    // NOP
label_1c3be8:
    // 0x1c3be8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3BE8u;
    SET_GPR_U32(ctx, 31, 0x1C3BF0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3BF0u; }
        if (ctx->pc != 0x1C3BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3BF0u; }
        if (ctx->pc != 0x1C3BF0u) { return; }
    }
    ctx->pc = 0x1C3BF0u;
    // 0x1c3bf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3bf0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c3bf4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C3BF4u;
    {
        const bool branch_taken_0x1c3bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3BF4u;
            // 0x1c3bf8: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bf4) {
            ctx->pc = 0x1C3C58u;
            goto label_1c3c58;
        }
    }
    ctx->pc = 0x1C3BFCu;
    // 0x1c3bfc: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1c3bfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3c00: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1c3c00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3c04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c3c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c3c08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3c0c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c3c0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c3c10: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C3C10u;
    SET_GPR_U32(ctx, 31, 0x1C3C18u);
    ctx->pc = 0x1C3C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C10u;
            // 0x1c3c14: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C18u; }
        if (ctx->pc != 0x1C3C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C18u; }
        if (ctx->pc != 0x1C3C18u) { return; }
    }
    ctx->pc = 0x1C3C18u;
    // 0x1c3c18: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C3C18u;
    SET_GPR_U32(ctx, 31, 0x1C3C20u);
    ctx->pc = 0x1C3C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C18u;
            // 0x1c3c1c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C20u; }
        if (ctx->pc != 0x1C3C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C20u; }
        if (ctx->pc != 0x1C3C20u) { return; }
    }
    ctx->pc = 0x1C3C20u;
    // 0x1c3c20: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1c3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1c3c24: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c3c24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3c28: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c3c28u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3c2c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c3c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c3c30: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c3c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c3c34: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c3c34u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c3c38: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c3c38u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1c3c3c: 0xc040880  jal         func_102200
    ctx->pc = 0x1C3C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C3C44u);
    ctx->pc = 0x1C3C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C3Cu;
            // 0x1c3c40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C44u; }
        if (ctx->pc != 0x1C3C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C44u; }
        if (ctx->pc != 0x1C3C44u) { return; }
    }
    ctx->pc = 0x1C3C44u;
    // 0x1c3c44: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C3C44u;
    SET_GPR_U32(ctx, 31, 0x1C3C4Cu);
    ctx->pc = 0x1C3C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C44u;
            // 0x1c3c48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C4Cu; }
        if (ctx->pc != 0x1C3C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C4Cu; }
        if (ctx->pc != 0x1C3C4Cu) { return; }
    }
    ctx->pc = 0x1C3C4Cu;
    // 0x1c3c4c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C3C4Cu;
    {
        const bool branch_taken_0x1c3c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C4Cu;
            // 0x1c3c50: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c4c) {
            ctx->pc = 0x1C3CC0u;
            goto label_1c3cc0;
        }
    }
    ctx->pc = 0x1C3C54u;
    // 0x1c3c54: 0x0  nop
    ctx->pc = 0x1c3c54u;
    // NOP
label_1c3c58:
    // 0x1c3c58: 0x3c023fb9  lui         $v0, 0x3FB9
    ctx->pc = 0x1c3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16313 << 16));
    // 0x1c3c5c: 0x34439999  ori         $v1, $v0, 0x9999
    ctx->pc = 0x1c3c5cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3c60: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1c3c60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3c64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3c68: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c3c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c3c6c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c3c6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c3c70: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C3C70u;
    SET_GPR_U32(ctx, 31, 0x1C3C78u);
    ctx->pc = 0x1C3C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C70u;
            // 0x1c3c74: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C78u; }
        if (ctx->pc != 0x1C3C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C78u; }
        if (ctx->pc != 0x1C3C78u) { return; }
    }
    ctx->pc = 0x1C3C78u;
    // 0x1c3c78: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C3C78u;
    SET_GPR_U32(ctx, 31, 0x1C3C80u);
    ctx->pc = 0x1C3C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C78u;
            // 0x1c3c7c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C80u; }
        if (ctx->pc != 0x1C3C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C80u; }
        if (ctx->pc != 0x1C3C80u) { return; }
    }
    ctx->pc = 0x1C3C80u;
    // 0x1c3c80: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1c3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1c3c84: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c3c84u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3c88: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c3c88u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3c8c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c3c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c3c90: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c3c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c3c94: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c3c94u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c3c98: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c3c98u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1c3c9c: 0xc040880  jal         func_102200
    ctx->pc = 0x1C3C9Cu;
    SET_GPR_U32(ctx, 31, 0x1C3CA4u);
    ctx->pc = 0x1C3CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C9Cu;
            // 0x1c3ca0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CA4u; }
        if (ctx->pc != 0x1C3CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CA4u; }
        if (ctx->pc != 0x1C3CA4u) { return; }
    }
    ctx->pc = 0x1C3CA4u;
    // 0x1c3ca4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c3ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c3ca8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3cac: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1c3cacu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c3cb0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C3CB0u;
    SET_GPR_U32(ctx, 31, 0x1C3CB8u);
    ctx->pc = 0x1C3CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3CB0u;
            // 0x1c3cb4: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CB8u; }
        if (ctx->pc != 0x1C3CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CB8u; }
        if (ctx->pc != 0x1C3CB8u) { return; }
    }
    ctx->pc = 0x1C3CB8u;
    // 0x1c3cb8: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1c3cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x1c3cbc: 0x0  nop
    ctx->pc = 0x1c3cbcu;
    // NOP
label_1c3cc0:
    // 0x1c3cc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c3cc4: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1c3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1c3cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3ccc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1c3cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3cd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c3cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3cd4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1C3CD4u;
    {
        const bool branch_taken_0x1c3cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3cd4) {
            ctx->pc = 0x1C3D20u;
            goto label_1c3d20;
        }
    }
    ctx->pc = 0x1C3CDCu;
    // 0x1c3cdc: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C3CDCu;
    SET_GPR_U32(ctx, 31, 0x1C3CE4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CE4u; }
        if (ctx->pc != 0x1C3CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CE4u; }
        if (ctx->pc != 0x1C3CE4u) { return; }
    }
    ctx->pc = 0x1C3CE4u;
    // 0x1c3ce4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C3CE4u;
    SET_GPR_U32(ctx, 31, 0x1C3CECu);
    ctx->pc = 0x1C3CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3CE4u;
            // 0x1c3ce8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CECu; }
        if (ctx->pc != 0x1C3CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3CECu; }
        if (ctx->pc != 0x1C3CECu) { return; }
    }
    ctx->pc = 0x1C3CECu;
    // 0x1c3cec: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1c3cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1c3cf0: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c3cf0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3cf4: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c3cf4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3cf8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c3cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c3cfc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c3cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c3d00: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c3d00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c3d04: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c3d04u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1c3d08: 0xc040880  jal         func_102200
    ctx->pc = 0x1C3D08u;
    SET_GPR_U32(ctx, 31, 0x1C3D10u);
    ctx->pc = 0x1C3D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D08u;
            // 0x1c3d0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D10u; }
        if (ctx->pc != 0x1C3D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D10u; }
        if (ctx->pc != 0x1C3D10u) { return; }
    }
    ctx->pc = 0x1C3D10u;
    // 0x1c3d10: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C3D10u;
    SET_GPR_U32(ctx, 31, 0x1C3D18u);
    ctx->pc = 0x1C3D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D10u;
            // 0x1c3d14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D18u; }
        if (ctx->pc != 0x1C3D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D18u; }
        if (ctx->pc != 0x1C3D18u) { return; }
    }
    ctx->pc = 0x1C3D18u;
    // 0x1c3d18: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C3D18u;
    {
        const bool branch_taken_0x1c3d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D18u;
            // 0x1c3d1c: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d18) {
            ctx->pc = 0x1C3E00u;
            goto label_1c3e00;
        }
    }
    ctx->pc = 0x1C3D20u;
label_1c3d20:
    // 0x1c3d20: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1c3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1c3d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3d28: 0x0  nop
    ctx->pc = 0x1c3d28u;
    // NOP
    // 0x1c3d2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c3d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3d30: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3D30u;
    {
        const bool branch_taken_0x1c3d30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3d30) {
            ctx->pc = 0x1C3D88u;
            goto label_1c3d88;
        }
    }
    ctx->pc = 0x1C3D38u;
    // 0x1c3d38: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C3D38u;
    SET_GPR_U32(ctx, 31, 0x1C3D40u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D40u; }
        if (ctx->pc != 0x1C3D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D40u; }
        if (ctx->pc != 0x1C3D40u) { return; }
    }
    ctx->pc = 0x1C3D40u;
    // 0x1c3d40: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C3D40u;
    SET_GPR_U32(ctx, 31, 0x1C3D48u);
    ctx->pc = 0x1C3D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D40u;
            // 0x1c3d44: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D48u; }
        if (ctx->pc != 0x1C3D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D48u; }
        if (ctx->pc != 0x1C3D48u) { return; }
    }
    ctx->pc = 0x1C3D48u;
    // 0x1c3d48: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1c3d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1c3d4c: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c3d4cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3d50: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c3d50u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c3d54: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c3d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c3d58: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c3d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c3d5c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c3d5cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c3d60: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c3d60u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1c3d64: 0xc040880  jal         func_102200
    ctx->pc = 0x1C3D64u;
    SET_GPR_U32(ctx, 31, 0x1C3D6Cu);
    ctx->pc = 0x1C3D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D64u;
            // 0x1c3d68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D6Cu; }
        if (ctx->pc != 0x1C3D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D6Cu; }
        if (ctx->pc != 0x1C3D6Cu) { return; }
    }
    ctx->pc = 0x1C3D6Cu;
    // 0x1c3d6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c3d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c3d70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3d74: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1c3d74u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c3d78: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C3D78u;
    SET_GPR_U32(ctx, 31, 0x1C3D80u);
    ctx->pc = 0x1C3D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D78u;
            // 0x1c3d7c: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D80u; }
        if (ctx->pc != 0x1C3D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D80u; }
        if (ctx->pc != 0x1C3D80u) { return; }
    }
    ctx->pc = 0x1C3D80u;
    // 0x1c3d80: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C3D80u;
    {
        const bool branch_taken_0x1c3d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D80u;
            // 0x1c3d84: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d80) {
            ctx->pc = 0x1C3E00u;
            goto label_1c3e00;
        }
    }
    ctx->pc = 0x1C3D88u;
label_1c3d88:
    // 0x1c3d88: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3D88u;
    SET_GPR_U32(ctx, 31, 0x1C3D90u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D90u; }
        if (ctx->pc != 0x1C3D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D90u; }
        if (ctx->pc != 0x1C3D90u) { return; }
    }
    ctx->pc = 0x1C3D90u;
    // 0x1c3d90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3d90u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c3d94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3D94u;
    {
        const bool branch_taken_0x1c3d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d94) {
            ctx->pc = 0x1C3DC8u;
            goto label_1c3dc8;
        }
    }
    ctx->pc = 0x1C3D9Cu;
    // 0x1c3d9c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C3D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C3DA4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DA4u; }
        if (ctx->pc != 0x1C3DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DA4u; }
        if (ctx->pc != 0x1C3DA4u) { return; }
    }
    ctx->pc = 0x1C3DA4u;
    // 0x1c3da4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C3DA4u;
    SET_GPR_U32(ctx, 31, 0x1C3DACu);
    ctx->pc = 0x1C3DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DA4u;
            // 0x1c3da8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DACu; }
        if (ctx->pc != 0x1C3DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DACu; }
        if (ctx->pc != 0x1C3DACu) { return; }
    }
    ctx->pc = 0x1C3DACu;
    // 0x1c3dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3db0: 0xc040880  jal         func_102200
    ctx->pc = 0x1C3DB0u;
    SET_GPR_U32(ctx, 31, 0x1C3DB8u);
    ctx->pc = 0x1C3DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DB0u;
            // 0x1c3db4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DB8u; }
        if (ctx->pc != 0x1C3DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DB8u; }
        if (ctx->pc != 0x1C3DB8u) { return; }
    }
    ctx->pc = 0x1C3DB8u;
    // 0x1c3db8: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C3DB8u;
    SET_GPR_U32(ctx, 31, 0x1C3DC0u);
    ctx->pc = 0x1C3DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DB8u;
            // 0x1c3dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DC0u; }
        if (ctx->pc != 0x1C3DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DC0u; }
        if (ctx->pc != 0x1C3DC0u) { return; }
    }
    ctx->pc = 0x1C3DC0u;
    // 0x1c3dc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C3DC0u;
    {
        const bool branch_taken_0x1c3dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DC0u;
            // 0x1c3dc4: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dc0) {
            ctx->pc = 0x1C3E00u;
            goto label_1c3e00;
        }
    }
    ctx->pc = 0x1C3DC8u;
label_1c3dc8:
    // 0x1c3dc8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C3DC8u;
    SET_GPR_U32(ctx, 31, 0x1C3DD0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DD0u; }
        if (ctx->pc != 0x1C3DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DD0u; }
        if (ctx->pc != 0x1C3DD0u) { return; }
    }
    ctx->pc = 0x1C3DD0u;
    // 0x1c3dd0: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C3DD0u;
    SET_GPR_U32(ctx, 31, 0x1C3DD8u);
    ctx->pc = 0x1C3DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DD0u;
            // 0x1c3dd4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DD8u; }
        if (ctx->pc != 0x1C3DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DD8u; }
        if (ctx->pc != 0x1C3DD8u) { return; }
    }
    ctx->pc = 0x1C3DD8u;
    // 0x1c3dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ddc: 0xc040880  jal         func_102200
    ctx->pc = 0x1C3DDCu;
    SET_GPR_U32(ctx, 31, 0x1C3DE4u);
    ctx->pc = 0x1C3DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DDCu;
            // 0x1c3de0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DE4u; }
        if (ctx->pc != 0x1C3DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DE4u; }
        if (ctx->pc != 0x1C3DE4u) { return; }
    }
    ctx->pc = 0x1C3DE4u;
    // 0x1c3de4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c3de8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3dec: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1c3decu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c3df0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C3DF0u;
    SET_GPR_U32(ctx, 31, 0x1C3DF8u);
    ctx->pc = 0x1C3DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DF0u;
            // 0x1c3df4: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DF8u; }
        if (ctx->pc != 0x1C3DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DF8u; }
        if (ctx->pc != 0x1C3DF8u) { return; }
    }
    ctx->pc = 0x1C3DF8u;
    // 0x1c3df8: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1c3df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x1c3dfc: 0x0  nop
    ctx->pc = 0x1c3dfcu;
    // NOP
label_1c3e00:
    // 0x1c3e00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c3e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3e04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E0Cu;
            // 0x1c3e10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3B68u: goto label_1c3b68;
            case 0x1C3BE8u: goto label_1c3be8;
            case 0x1C3C58u: goto label_1c3c58;
            case 0x1C3CC0u: goto label_1c3cc0;
            case 0x1C3D20u: goto label_1c3d20;
            case 0x1C3D88u: goto label_1c3d88;
            case 0x1C3DC8u: goto label_1c3dc8;
            case 0x1C3E00u: goto label_1c3e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C3E14u;
}
