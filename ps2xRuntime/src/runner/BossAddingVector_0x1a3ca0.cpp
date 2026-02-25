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
// Address: 0x1a3ca0 - 0x1a3fa4
void BossAddingVector_0x1a3ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossAddingVector_0x1a3ca0");
#endif

    ctx->pc = 0x1a3ca0u;

    // 0x1a3ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3ca4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1a3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1a3ca8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a3cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3cb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3cb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3cb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3cbc: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1a3cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3cc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a3cc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3cc4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1A3CC4u;
    {
        const bool branch_taken_0x1a3cc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3CC4u;
            // 0x1a3cc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cc4) {
            ctx->pc = 0x1A3D28u;
            goto label_1a3d28;
        }
    }
    ctx->pc = 0x1A3CCCu;
    // 0x1a3ccc: 0x3c033fb9  lui         $v1, 0x3FB9
    ctx->pc = 0x1a3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
    // 0x1a3cd0: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1a3cd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3cd4: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1a3cd4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3cd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a3cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a3cdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a3cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a3ce0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a3ce0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1a3ce4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1A3CE4u;
    SET_GPR_U32(ctx, 31, 0x1A3CECu);
    ctx->pc = 0x1A3CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3CE4u;
            // 0x1a3ce8: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3CECu; }
        if (ctx->pc != 0x1A3CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3CECu; }
        if (ctx->pc != 0x1A3CECu) { return; }
    }
    ctx->pc = 0x1A3CECu;
    // 0x1a3cec: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1A3CECu;
    SET_GPR_U32(ctx, 31, 0x1A3CF4u);
    ctx->pc = 0x1A3CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3CECu;
            // 0x1a3cf0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3CF4u; }
        if (ctx->pc != 0x1A3CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3CF4u; }
        if (ctx->pc != 0x1A3CF4u) { return; }
    }
    ctx->pc = 0x1A3CF4u;
    // 0x1a3cf4: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1a3cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1a3cf8: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1a3cf8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3cfc: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1a3cfcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3d00: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a3d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a3d04: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a3d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1a3d08: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1a3d08u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1a3d0c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a3d0cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1a3d10: 0xc040880  jal         func_102200
    ctx->pc = 0x1A3D10u;
    SET_GPR_U32(ctx, 31, 0x1A3D18u);
    ctx->pc = 0x1A3D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D10u;
            // 0x1a3d14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D18u; }
        if (ctx->pc != 0x1A3D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D18u; }
        if (ctx->pc != 0x1A3D18u) { return; }
    }
    ctx->pc = 0x1A3D18u;
    // 0x1a3d18: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1A3D18u;
    SET_GPR_U32(ctx, 31, 0x1A3D20u);
    ctx->pc = 0x1A3D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D18u;
            // 0x1a3d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D20u; }
        if (ctx->pc != 0x1A3D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D20u; }
        if (ctx->pc != 0x1A3D20u) { return; }
    }
    ctx->pc = 0x1A3D20u;
    // 0x1a3d20: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1A3D20u;
    {
        const bool branch_taken_0x1a3d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D20u;
            // 0x1a3d24: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d20) {
            ctx->pc = 0x1A3E80u;
            goto label_1a3e80;
        }
    }
    ctx->pc = 0x1A3D28u;
label_1a3d28:
    // 0x1a3d28: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1a3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1a3d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3d30: 0x0  nop
    ctx->pc = 0x1a3d30u;
    // NOP
    // 0x1a3d34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3d38: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1A3D38u;
    {
        const bool branch_taken_0x1a3d38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D38u;
            // 0x1a3d3c: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d38) {
            ctx->pc = 0x1A3DA8u;
            goto label_1a3da8;
        }
    }
    ctx->pc = 0x1A3D40u;
    // 0x1a3d40: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1a3d40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3d44: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1a3d44u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3d48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a3d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a3d4c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a3d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a3d50: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a3d50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1a3d54: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1A3D54u;
    SET_GPR_U32(ctx, 31, 0x1A3D5Cu);
    ctx->pc = 0x1A3D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D54u;
            // 0x1a3d58: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D5Cu; }
        if (ctx->pc != 0x1A3D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D5Cu; }
        if (ctx->pc != 0x1A3D5Cu) { return; }
    }
    ctx->pc = 0x1A3D5Cu;
    // 0x1a3d5c: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1A3D5Cu;
    SET_GPR_U32(ctx, 31, 0x1A3D64u);
    ctx->pc = 0x1A3D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D5Cu;
            // 0x1a3d60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D64u; }
        if (ctx->pc != 0x1A3D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D64u; }
        if (ctx->pc != 0x1A3D64u) { return; }
    }
    ctx->pc = 0x1A3D64u;
    // 0x1a3d64: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1a3d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1a3d68: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1a3d68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3d6c: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1a3d6cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3d70: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a3d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a3d74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a3d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1a3d78: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1a3d78u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1a3d7c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a3d7cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1a3d80: 0xc040880  jal         func_102200
    ctx->pc = 0x1A3D80u;
    SET_GPR_U32(ctx, 31, 0x1A3D88u);
    ctx->pc = 0x1A3D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D80u;
            // 0x1a3d84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D88u; }
        if (ctx->pc != 0x1A3D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D88u; }
        if (ctx->pc != 0x1A3D88u) { return; }
    }
    ctx->pc = 0x1A3D88u;
    // 0x1a3d88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a3d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3d8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a3d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a3d90: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1a3d90u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1a3d94: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1A3D94u;
    SET_GPR_U32(ctx, 31, 0x1A3D9Cu);
    ctx->pc = 0x1A3D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D94u;
            // 0x1a3d98: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D9Cu; }
        if (ctx->pc != 0x1A3D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D9Cu; }
        if (ctx->pc != 0x1A3D9Cu) { return; }
    }
    ctx->pc = 0x1A3D9Cu;
    // 0x1a3d9c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1A3D9Cu;
    {
        const bool branch_taken_0x1a3d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3D9Cu;
            // 0x1a3da0: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d9c) {
            ctx->pc = 0x1A3E80u;
            goto label_1a3e80;
        }
    }
    ctx->pc = 0x1A3DA4u;
    // 0x1a3da4: 0x0  nop
    ctx->pc = 0x1a3da4u;
    // NOP
label_1a3da8:
    // 0x1a3da8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A3DA8u;
    SET_GPR_U32(ctx, 31, 0x1A3DB0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DB0u; }
        if (ctx->pc != 0x1A3DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DB0u; }
        if (ctx->pc != 0x1A3DB0u) { return; }
    }
    ctx->pc = 0x1A3DB0u;
    // 0x1a3db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3db0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1a3db4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A3DB4u;
    {
        const bool branch_taken_0x1a3db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DB4u;
            // 0x1a3db8: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3db4) {
            ctx->pc = 0x1A3E18u;
            goto label_1a3e18;
        }
    }
    ctx->pc = 0x1A3DBCu;
    // 0x1a3dbc: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1a3dbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3dc0: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1a3dc0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3dc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a3dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a3dc8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a3dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a3dcc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a3dccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1a3dd0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1A3DD0u;
    SET_GPR_U32(ctx, 31, 0x1A3DD8u);
    ctx->pc = 0x1A3DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DD0u;
            // 0x1a3dd4: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DD8u; }
        if (ctx->pc != 0x1A3DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DD8u; }
        if (ctx->pc != 0x1A3DD8u) { return; }
    }
    ctx->pc = 0x1A3DD8u;
    // 0x1a3dd8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1A3DD8u;
    SET_GPR_U32(ctx, 31, 0x1A3DE0u);
    ctx->pc = 0x1A3DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DD8u;
            // 0x1a3ddc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DE0u; }
        if (ctx->pc != 0x1A3DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DE0u; }
        if (ctx->pc != 0x1A3DE0u) { return; }
    }
    ctx->pc = 0x1A3DE0u;
    // 0x1a3de0: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1a3de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1a3de4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1a3de4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3de8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1a3de8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3dec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a3decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a3df0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a3df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1a3df4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1a3df4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1a3df8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a3df8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1a3dfc: 0xc040880  jal         func_102200
    ctx->pc = 0x1A3DFCu;
    SET_GPR_U32(ctx, 31, 0x1A3E04u);
    ctx->pc = 0x1A3E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DFCu;
            // 0x1a3e00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E04u; }
        if (ctx->pc != 0x1A3E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E04u; }
        if (ctx->pc != 0x1A3E04u) { return; }
    }
    ctx->pc = 0x1A3E04u;
    // 0x1a3e04: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1A3E04u;
    SET_GPR_U32(ctx, 31, 0x1A3E0Cu);
    ctx->pc = 0x1A3E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E04u;
            // 0x1a3e08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E0Cu; }
        if (ctx->pc != 0x1A3E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E0Cu; }
        if (ctx->pc != 0x1A3E0Cu) { return; }
    }
    ctx->pc = 0x1A3E0Cu;
    // 0x1a3e0c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A3E0Cu;
    {
        const bool branch_taken_0x1a3e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E0Cu;
            // 0x1a3e10: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e0c) {
            ctx->pc = 0x1A3E80u;
            goto label_1a3e80;
        }
    }
    ctx->pc = 0x1A3E14u;
    // 0x1a3e14: 0x0  nop
    ctx->pc = 0x1a3e14u;
    // NOP
label_1a3e18:
    // 0x1a3e18: 0x3c023fb9  lui         $v0, 0x3FB9
    ctx->pc = 0x1a3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16313 << 16));
    // 0x1a3e1c: 0x34439999  ori         $v1, $v0, 0x9999
    ctx->pc = 0x1a3e1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3e20: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1a3e20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3e24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a3e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a3e28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a3e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a3e2c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a3e2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1a3e30: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1A3E30u;
    SET_GPR_U32(ctx, 31, 0x1A3E38u);
    ctx->pc = 0x1A3E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E30u;
            // 0x1a3e34: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E38u; }
        if (ctx->pc != 0x1A3E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E38u; }
        if (ctx->pc != 0x1A3E38u) { return; }
    }
    ctx->pc = 0x1A3E38u;
    // 0x1a3e38: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1A3E38u;
    SET_GPR_U32(ctx, 31, 0x1A3E40u);
    ctx->pc = 0x1A3E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E38u;
            // 0x1a3e3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E40u; }
        if (ctx->pc != 0x1A3E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E40u; }
        if (ctx->pc != 0x1A3E40u) { return; }
    }
    ctx->pc = 0x1A3E40u;
    // 0x1a3e40: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1a3e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1a3e44: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1a3e44u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3e48: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1a3e48u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1a3e4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a3e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a3e50: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a3e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1a3e54: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1a3e54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1a3e58: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a3e58u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1a3e5c: 0xc040880  jal         func_102200
    ctx->pc = 0x1A3E5Cu;
    SET_GPR_U32(ctx, 31, 0x1A3E64u);
    ctx->pc = 0x1A3E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E5Cu;
            // 0x1a3e60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E64u; }
        if (ctx->pc != 0x1A3E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E64u; }
        if (ctx->pc != 0x1A3E64u) { return; }
    }
    ctx->pc = 0x1A3E64u;
    // 0x1a3e64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a3e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3e68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a3e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a3e6c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1a3e6cu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1a3e70: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1A3E70u;
    SET_GPR_U32(ctx, 31, 0x1A3E78u);
    ctx->pc = 0x1A3E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E70u;
            // 0x1a3e74: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E78u; }
        if (ctx->pc != 0x1A3E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E78u; }
        if (ctx->pc != 0x1A3E78u) { return; }
    }
    ctx->pc = 0x1A3E78u;
    // 0x1a3e78: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1a3e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x1a3e7c: 0x0  nop
    ctx->pc = 0x1a3e7cu;
    // NOP
label_1a3e80:
    // 0x1a3e80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a3e84: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1a3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1a3e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3e8c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1a3e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3e90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a3e90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3e94: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1A3E94u;
    {
        const bool branch_taken_0x1a3e94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3e94) {
            ctx->pc = 0x1A3EC8u;
            goto label_1a3ec8;
        }
    }
    ctx->pc = 0x1A3E9Cu;
    // 0x1a3e9c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1A3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A3EA4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EA4u; }
        if (ctx->pc != 0x1A3EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EA4u; }
        if (ctx->pc != 0x1A3EA4u) { return; }
    }
    ctx->pc = 0x1A3EA4u;
    // 0x1a3ea4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1A3EA4u;
    SET_GPR_U32(ctx, 31, 0x1A3EACu);
    ctx->pc = 0x1A3EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EA4u;
            // 0x1a3ea8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EACu; }
        if (ctx->pc != 0x1A3EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EACu; }
        if (ctx->pc != 0x1A3EACu) { return; }
    }
    ctx->pc = 0x1A3EACu;
    // 0x1a3eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3eb0: 0xc040880  jal         func_102200
    ctx->pc = 0x1A3EB0u;
    SET_GPR_U32(ctx, 31, 0x1A3EB8u);
    ctx->pc = 0x1A3EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EB0u;
            // 0x1a3eb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EB8u; }
        if (ctx->pc != 0x1A3EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EB8u; }
        if (ctx->pc != 0x1A3EB8u) { return; }
    }
    ctx->pc = 0x1A3EB8u;
    // 0x1a3eb8: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1A3EB8u;
    SET_GPR_U32(ctx, 31, 0x1A3EC0u);
    ctx->pc = 0x1A3EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EB8u;
            // 0x1a3ebc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EC0u; }
        if (ctx->pc != 0x1A3EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EC0u; }
        if (ctx->pc != 0x1A3EC0u) { return; }
    }
    ctx->pc = 0x1A3EC0u;
    // 0x1a3ec0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1A3EC0u;
    {
        const bool branch_taken_0x1a3ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EC0u;
            // 0x1a3ec4: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3ec0) {
            ctx->pc = 0x1A3F90u;
            goto label_1a3f90;
        }
    }
    ctx->pc = 0x1A3EC8u;
label_1a3ec8:
    // 0x1a3ec8: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1a3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1a3ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3ed0: 0x0  nop
    ctx->pc = 0x1a3ed0u;
    // NOP
    // 0x1a3ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3ed8: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1A3ED8u;
    {
        const bool branch_taken_0x1a3ed8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3ed8) {
            ctx->pc = 0x1A3F18u;
            goto label_1a3f18;
        }
    }
    ctx->pc = 0x1A3EE0u;
    // 0x1a3ee0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1A3EE0u;
    SET_GPR_U32(ctx, 31, 0x1A3EE8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EE8u; }
        if (ctx->pc != 0x1A3EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EE8u; }
        if (ctx->pc != 0x1A3EE8u) { return; }
    }
    ctx->pc = 0x1A3EE8u;
    // 0x1a3ee8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1A3EE8u;
    SET_GPR_U32(ctx, 31, 0x1A3EF0u);
    ctx->pc = 0x1A3EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EE8u;
            // 0x1a3eec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EF0u; }
        if (ctx->pc != 0x1A3EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EF0u; }
        if (ctx->pc != 0x1A3EF0u) { return; }
    }
    ctx->pc = 0x1A3EF0u;
    // 0x1a3ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ef4: 0xc040880  jal         func_102200
    ctx->pc = 0x1A3EF4u;
    SET_GPR_U32(ctx, 31, 0x1A3EFCu);
    ctx->pc = 0x1A3EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3EF4u;
            // 0x1a3ef8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EFCu; }
        if (ctx->pc != 0x1A3EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EFCu; }
        if (ctx->pc != 0x1A3EFCu) { return; }
    }
    ctx->pc = 0x1A3EFCu;
    // 0x1a3efc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3f00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a3f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a3f04: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1a3f04u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1a3f08: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1A3F08u;
    SET_GPR_U32(ctx, 31, 0x1A3F10u);
    ctx->pc = 0x1A3F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F08u;
            // 0x1a3f0c: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F10u; }
        if (ctx->pc != 0x1A3F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F10u; }
        if (ctx->pc != 0x1A3F10u) { return; }
    }
    ctx->pc = 0x1A3F10u;
    // 0x1a3f10: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A3F10u;
    {
        const bool branch_taken_0x1a3f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F10u;
            // 0x1a3f14: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f10) {
            ctx->pc = 0x1A3F90u;
            goto label_1a3f90;
        }
    }
    ctx->pc = 0x1A3F18u;
label_1a3f18:
    // 0x1a3f18: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A3F18u;
    SET_GPR_U32(ctx, 31, 0x1A3F20u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F20u; }
        if (ctx->pc != 0x1A3F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F20u; }
        if (ctx->pc != 0x1A3F20u) { return; }
    }
    ctx->pc = 0x1A3F20u;
    // 0x1a3f20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3f20u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1a3f24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A3F24u;
    {
        const bool branch_taken_0x1a3f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f24) {
            ctx->pc = 0x1A3F58u;
            goto label_1a3f58;
        }
    }
    ctx->pc = 0x1A3F2Cu;
    // 0x1a3f2c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1A3F2Cu;
    SET_GPR_U32(ctx, 31, 0x1A3F34u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F34u; }
        if (ctx->pc != 0x1A3F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F34u; }
        if (ctx->pc != 0x1A3F34u) { return; }
    }
    ctx->pc = 0x1A3F34u;
    // 0x1a3f34: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1A3F34u;
    SET_GPR_U32(ctx, 31, 0x1A3F3Cu);
    ctx->pc = 0x1A3F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F34u;
            // 0x1a3f38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F3Cu; }
        if (ctx->pc != 0x1A3F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F3Cu; }
        if (ctx->pc != 0x1A3F3Cu) { return; }
    }
    ctx->pc = 0x1A3F3Cu;
    // 0x1a3f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f40: 0xc040880  jal         func_102200
    ctx->pc = 0x1A3F40u;
    SET_GPR_U32(ctx, 31, 0x1A3F48u);
    ctx->pc = 0x1A3F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F40u;
            // 0x1a3f44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F48u; }
        if (ctx->pc != 0x1A3F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F48u; }
        if (ctx->pc != 0x1A3F48u) { return; }
    }
    ctx->pc = 0x1A3F48u;
    // 0x1a3f48: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1A3F48u;
    SET_GPR_U32(ctx, 31, 0x1A3F50u);
    ctx->pc = 0x1A3F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F48u;
            // 0x1a3f4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F50u; }
        if (ctx->pc != 0x1A3F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F50u; }
        if (ctx->pc != 0x1A3F50u) { return; }
    }
    ctx->pc = 0x1A3F50u;
    // 0x1a3f50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A3F50u;
    {
        const bool branch_taken_0x1a3f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F50u;
            // 0x1a3f54: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f50) {
            ctx->pc = 0x1A3F90u;
            goto label_1a3f90;
        }
    }
    ctx->pc = 0x1A3F58u;
label_1a3f58:
    // 0x1a3f58: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1A3F58u;
    SET_GPR_U32(ctx, 31, 0x1A3F60u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F60u; }
        if (ctx->pc != 0x1A3F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F60u; }
        if (ctx->pc != 0x1A3F60u) { return; }
    }
    ctx->pc = 0x1A3F60u;
    // 0x1a3f60: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1A3F60u;
    SET_GPR_U32(ctx, 31, 0x1A3F68u);
    ctx->pc = 0x1A3F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F60u;
            // 0x1a3f64: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F68u; }
        if (ctx->pc != 0x1A3F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F68u; }
        if (ctx->pc != 0x1A3F68u) { return; }
    }
    ctx->pc = 0x1A3F68u;
    // 0x1a3f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f6c: 0xc040880  jal         func_102200
    ctx->pc = 0x1A3F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A3F74u);
    ctx->pc = 0x1A3F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F6Cu;
            // 0x1a3f70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F74u; }
        if (ctx->pc != 0x1A3F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F74u; }
        if (ctx->pc != 0x1A3F74u) { return; }
    }
    ctx->pc = 0x1A3F74u;
    // 0x1a3f74: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a3f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3f78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a3f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a3f7c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1a3f7cu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1a3f80: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1A3F80u;
    SET_GPR_U32(ctx, 31, 0x1A3F88u);
    ctx->pc = 0x1A3F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F80u;
            // 0x1a3f84: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F88u; }
        if (ctx->pc != 0x1A3F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F88u; }
        if (ctx->pc != 0x1A3F88u) { return; }
    }
    ctx->pc = 0x1A3F88u;
    // 0x1a3f88: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1a3f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x1a3f8c: 0x0  nop
    ctx->pc = 0x1a3f8cu;
    // NOP
label_1a3f90:
    // 0x1a3f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F9Cu;
            // 0x1a3fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3D28u: goto label_1a3d28;
            case 0x1A3DA8u: goto label_1a3da8;
            case 0x1A3E18u: goto label_1a3e18;
            case 0x1A3E80u: goto label_1a3e80;
            case 0x1A3EC8u: goto label_1a3ec8;
            case 0x1A3F18u: goto label_1a3f18;
            case 0x1A3F58u: goto label_1a3f58;
            case 0x1A3F90u: goto label_1a3f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3FA4u;
}
