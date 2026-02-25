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
// Address: 0x17cbe0 - 0x17cee4
void BossAddingVector_0x17cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossAddingVector_0x17cbe0");
#endif

    ctx->pc = 0x17cbe0u;

    // 0x17cbe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17cbe4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x17cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x17cbe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17cbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17cbec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cbf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17cbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17cbf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17cbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17cbf8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cbfc: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x17cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cc00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17cc00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cc04: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x17CC04u;
    {
        const bool branch_taken_0x17cc04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC04u;
            // 0x17cc08: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc04) {
            ctx->pc = 0x17CC68u;
            goto label_17cc68;
        }
    }
    ctx->pc = 0x17CC0Cu;
    // 0x17cc0c: 0x3c033fb9  lui         $v1, 0x3FB9
    ctx->pc = 0x17cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
    // 0x17cc10: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x17cc10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cc14: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x17cc14u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cc18: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17cc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17cc1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17cc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17cc20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x17cc20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x17cc24: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x17CC24u;
    SET_GPR_U32(ctx, 31, 0x17CC2Cu);
    ctx->pc = 0x17CC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC24u;
            // 0x17cc28: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC2Cu; }
        if (ctx->pc != 0x17CC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC2Cu; }
        if (ctx->pc != 0x17CC2Cu) { return; }
    }
    ctx->pc = 0x17CC2Cu;
    // 0x17cc2c: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x17CC2Cu;
    SET_GPR_U32(ctx, 31, 0x17CC34u);
    ctx->pc = 0x17CC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC2Cu;
            // 0x17cc30: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC34u; }
        if (ctx->pc != 0x17CC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC34u; }
        if (ctx->pc != 0x17CC34u) { return; }
    }
    ctx->pc = 0x17CC34u;
    // 0x17cc34: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x17cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x17cc38: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x17cc38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cc3c: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x17cc3cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cc40: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17cc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17cc44: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17cc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17cc48: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x17cc48u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x17cc4c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17cc4cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x17cc50: 0xc040880  jal         func_102200
    ctx->pc = 0x17CC50u;
    SET_GPR_U32(ctx, 31, 0x17CC58u);
    ctx->pc = 0x17CC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC50u;
            // 0x17cc54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC58u; }
        if (ctx->pc != 0x17CC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC58u; }
        if (ctx->pc != 0x17CC58u) { return; }
    }
    ctx->pc = 0x17CC58u;
    // 0x17cc58: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17CC58u;
    SET_GPR_U32(ctx, 31, 0x17CC60u);
    ctx->pc = 0x17CC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC58u;
            // 0x17cc5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC60u; }
        if (ctx->pc != 0x17CC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC60u; }
        if (ctx->pc != 0x17CC60u) { return; }
    }
    ctx->pc = 0x17CC60u;
    // 0x17cc60: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x17CC60u;
    {
        const bool branch_taken_0x17cc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC60u;
            // 0x17cc64: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc60) {
            ctx->pc = 0x17CDC0u;
            goto label_17cdc0;
        }
    }
    ctx->pc = 0x17CC68u;
label_17cc68:
    // 0x17cc68: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x17cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x17cc6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cc6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc70: 0x0  nop
    ctx->pc = 0x17cc70u;
    // NOP
    // 0x17cc74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17cc74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cc78: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x17CC78u;
    {
        const bool branch_taken_0x17cc78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC78u;
            // 0x17cc7c: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc78) {
            ctx->pc = 0x17CCE8u;
            goto label_17cce8;
        }
    }
    ctx->pc = 0x17CC80u;
    // 0x17cc80: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x17cc80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cc84: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x17cc84u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cc88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17cc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17cc8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17cc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17cc90: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x17cc90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x17cc94: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x17CC94u;
    SET_GPR_U32(ctx, 31, 0x17CC9Cu);
    ctx->pc = 0x17CC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC94u;
            // 0x17cc98: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC9Cu; }
        if (ctx->pc != 0x17CC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC9Cu; }
        if (ctx->pc != 0x17CC9Cu) { return; }
    }
    ctx->pc = 0x17CC9Cu;
    // 0x17cc9c: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x17CC9Cu;
    SET_GPR_U32(ctx, 31, 0x17CCA4u);
    ctx->pc = 0x17CCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC9Cu;
            // 0x17cca0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCA4u; }
        if (ctx->pc != 0x17CCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCA4u; }
        if (ctx->pc != 0x17CCA4u) { return; }
    }
    ctx->pc = 0x17CCA4u;
    // 0x17cca4: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x17cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x17cca8: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x17cca8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17ccac: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x17ccacu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x17ccb0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17ccb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17ccb4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17ccb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17ccb8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x17ccb8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x17ccbc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17ccbcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x17ccc0: 0xc040880  jal         func_102200
    ctx->pc = 0x17CCC0u;
    SET_GPR_U32(ctx, 31, 0x17CCC8u);
    ctx->pc = 0x17CCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CCC0u;
            // 0x17ccc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCC8u; }
        if (ctx->pc != 0x17CCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCC8u; }
        if (ctx->pc != 0x17CCC8u) { return; }
    }
    ctx->pc = 0x17CCC8u;
    // 0x17ccc8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x17cccc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17ccccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17ccd0: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x17ccd0u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x17ccd4: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17CCD4u;
    SET_GPR_U32(ctx, 31, 0x17CCDCu);
    ctx->pc = 0x17CCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CCD4u;
            // 0x17ccd8: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCDCu; }
        if (ctx->pc != 0x17CCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCDCu; }
        if (ctx->pc != 0x17CCDCu) { return; }
    }
    ctx->pc = 0x17CCDCu;
    // 0x17ccdc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x17CCDCu;
    {
        const bool branch_taken_0x17ccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CCDCu;
            // 0x17cce0: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ccdc) {
            ctx->pc = 0x17CDC0u;
            goto label_17cdc0;
        }
    }
    ctx->pc = 0x17CCE4u;
    // 0x17cce4: 0x0  nop
    ctx->pc = 0x17cce4u;
    // NOP
label_17cce8:
    // 0x17cce8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x17CCE8u;
    SET_GPR_U32(ctx, 31, 0x17CCF0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCF0u; }
        if (ctx->pc != 0x17CCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCF0u; }
        if (ctx->pc != 0x17CCF0u) { return; }
    }
    ctx->pc = 0x17CCF0u;
    // 0x17ccf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ccf0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x17ccf4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17CCF4u;
    {
        const bool branch_taken_0x17ccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CCF4u;
            // 0x17ccf8: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ccf4) {
            ctx->pc = 0x17CD58u;
            goto label_17cd58;
        }
    }
    ctx->pc = 0x17CCFCu;
    // 0x17ccfc: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x17ccfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cd00: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x17cd00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cd04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17cd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17cd08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17cd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17cd0c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x17cd0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x17cd10: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x17CD10u;
    SET_GPR_U32(ctx, 31, 0x17CD18u);
    ctx->pc = 0x17CD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD10u;
            // 0x17cd14: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD18u; }
        if (ctx->pc != 0x17CD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD18u; }
        if (ctx->pc != 0x17CD18u) { return; }
    }
    ctx->pc = 0x17CD18u;
    // 0x17cd18: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x17CD18u;
    SET_GPR_U32(ctx, 31, 0x17CD20u);
    ctx->pc = 0x17CD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD18u;
            // 0x17cd1c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD20u; }
        if (ctx->pc != 0x17CD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD20u; }
        if (ctx->pc != 0x17CD20u) { return; }
    }
    ctx->pc = 0x17CD20u;
    // 0x17cd20: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x17cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x17cd24: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x17cd24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cd28: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x17cd28u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cd2c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17cd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17cd30: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17cd30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17cd34: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x17cd34u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x17cd38: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17cd38u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x17cd3c: 0xc040880  jal         func_102200
    ctx->pc = 0x17CD3Cu;
    SET_GPR_U32(ctx, 31, 0x17CD44u);
    ctx->pc = 0x17CD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD3Cu;
            // 0x17cd40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD44u; }
        if (ctx->pc != 0x17CD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD44u; }
        if (ctx->pc != 0x17CD44u) { return; }
    }
    ctx->pc = 0x17CD44u;
    // 0x17cd44: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17CD44u;
    SET_GPR_U32(ctx, 31, 0x17CD4Cu);
    ctx->pc = 0x17CD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD44u;
            // 0x17cd48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD4Cu; }
        if (ctx->pc != 0x17CD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD4Cu; }
        if (ctx->pc != 0x17CD4Cu) { return; }
    }
    ctx->pc = 0x17CD4Cu;
    // 0x17cd4c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17CD4Cu;
    {
        const bool branch_taken_0x17cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD4Cu;
            // 0x17cd50: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd4c) {
            ctx->pc = 0x17CDC0u;
            goto label_17cdc0;
        }
    }
    ctx->pc = 0x17CD54u;
    // 0x17cd54: 0x0  nop
    ctx->pc = 0x17cd54u;
    // NOP
label_17cd58:
    // 0x17cd58: 0x3c023fb9  lui         $v0, 0x3FB9
    ctx->pc = 0x17cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16313 << 16));
    // 0x17cd5c: 0x34439999  ori         $v1, $v0, 0x9999
    ctx->pc = 0x17cd5cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cd60: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x17cd60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cd64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17cd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17cd68: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17cd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17cd6c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x17cd6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x17cd70: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x17CD70u;
    SET_GPR_U32(ctx, 31, 0x17CD78u);
    ctx->pc = 0x17CD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD70u;
            // 0x17cd74: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD78u; }
        if (ctx->pc != 0x17CD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD78u; }
        if (ctx->pc != 0x17CD78u) { return; }
    }
    ctx->pc = 0x17CD78u;
    // 0x17cd78: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x17CD78u;
    SET_GPR_U32(ctx, 31, 0x17CD80u);
    ctx->pc = 0x17CD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD78u;
            // 0x17cd7c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD80u; }
        if (ctx->pc != 0x17CD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CD80u; }
        if (ctx->pc != 0x17CD80u) { return; }
    }
    ctx->pc = 0x17CD80u;
    // 0x17cd80: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x17cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x17cd84: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x17cd84u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cd88: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x17cd88u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x17cd8c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17cd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17cd90: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17cd90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17cd94: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x17cd94u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x17cd98: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17cd98u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x17cd9c: 0xc040880  jal         func_102200
    ctx->pc = 0x17CD9Cu;
    SET_GPR_U32(ctx, 31, 0x17CDA4u);
    ctx->pc = 0x17CDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD9Cu;
            // 0x17cda0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDA4u; }
        if (ctx->pc != 0x17CDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDA4u; }
        if (ctx->pc != 0x17CDA4u) { return; }
    }
    ctx->pc = 0x17CDA4u;
    // 0x17cda4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x17cda8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17cda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17cdac: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x17cdacu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x17cdb0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17CDB0u;
    SET_GPR_U32(ctx, 31, 0x17CDB8u);
    ctx->pc = 0x17CDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDB0u;
            // 0x17cdb4: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDB8u; }
        if (ctx->pc != 0x17CDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDB8u; }
        if (ctx->pc != 0x17CDB8u) { return; }
    }
    ctx->pc = 0x17CDB8u;
    // 0x17cdb8: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x17cdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x17cdbc: 0x0  nop
    ctx->pc = 0x17cdbcu;
    // NOP
label_17cdc0:
    // 0x17cdc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17cdc4: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x17cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x17cdc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cdc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cdcc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x17cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cdd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17cdd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cdd4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x17CDD4u;
    {
        const bool branch_taken_0x17cdd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cdd4) {
            ctx->pc = 0x17CE08u;
            goto label_17ce08;
        }
    }
    ctx->pc = 0x17CDDCu;
    // 0x17cddc: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x17CDDCu;
    SET_GPR_U32(ctx, 31, 0x17CDE4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDE4u; }
        if (ctx->pc != 0x17CDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDE4u; }
        if (ctx->pc != 0x17CDE4u) { return; }
    }
    ctx->pc = 0x17CDE4u;
    // 0x17cde4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x17CDE4u;
    SET_GPR_U32(ctx, 31, 0x17CDECu);
    ctx->pc = 0x17CDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDE4u;
            // 0x17cde8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDECu; }
        if (ctx->pc != 0x17CDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDECu; }
        if (ctx->pc != 0x17CDECu) { return; }
    }
    ctx->pc = 0x17CDECu;
    // 0x17cdec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdf0: 0xc040880  jal         func_102200
    ctx->pc = 0x17CDF0u;
    SET_GPR_U32(ctx, 31, 0x17CDF8u);
    ctx->pc = 0x17CDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDF0u;
            // 0x17cdf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDF8u; }
        if (ctx->pc != 0x17CDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CDF8u; }
        if (ctx->pc != 0x17CDF8u) { return; }
    }
    ctx->pc = 0x17CDF8u;
    // 0x17cdf8: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17CDF8u;
    SET_GPR_U32(ctx, 31, 0x17CE00u);
    ctx->pc = 0x17CDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CDF8u;
            // 0x17cdfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE00u; }
        if (ctx->pc != 0x17CE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE00u; }
        if (ctx->pc != 0x17CE00u) { return; }
    }
    ctx->pc = 0x17CE00u;
    // 0x17ce00: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x17CE00u;
    {
        const bool branch_taken_0x17ce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE00u;
            // 0x17ce04: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce00) {
            ctx->pc = 0x17CED0u;
            goto label_17ced0;
        }
    }
    ctx->pc = 0x17CE08u;
label_17ce08:
    // 0x17ce08: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x17ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x17ce0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ce0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ce10: 0x0  nop
    ctx->pc = 0x17ce10u;
    // NOP
    // 0x17ce14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ce14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ce18: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x17CE18u;
    {
        const bool branch_taken_0x17ce18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ce18) {
            ctx->pc = 0x17CE58u;
            goto label_17ce58;
        }
    }
    ctx->pc = 0x17CE20u;
    // 0x17ce20: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x17CE20u;
    SET_GPR_U32(ctx, 31, 0x17CE28u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE28u; }
        if (ctx->pc != 0x17CE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE28u; }
        if (ctx->pc != 0x17CE28u) { return; }
    }
    ctx->pc = 0x17CE28u;
    // 0x17ce28: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x17CE28u;
    SET_GPR_U32(ctx, 31, 0x17CE30u);
    ctx->pc = 0x17CE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE28u;
            // 0x17ce2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE30u; }
        if (ctx->pc != 0x17CE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE30u; }
        if (ctx->pc != 0x17CE30u) { return; }
    }
    ctx->pc = 0x17CE30u;
    // 0x17ce30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ce30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce34: 0xc040880  jal         func_102200
    ctx->pc = 0x17CE34u;
    SET_GPR_U32(ctx, 31, 0x17CE3Cu);
    ctx->pc = 0x17CE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE34u;
            // 0x17ce38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE3Cu; }
        if (ctx->pc != 0x17CE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE3Cu; }
        if (ctx->pc != 0x17CE3Cu) { return; }
    }
    ctx->pc = 0x17CE3Cu;
    // 0x17ce3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x17ce40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17ce40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17ce44: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x17ce44u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x17ce48: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17CE48u;
    SET_GPR_U32(ctx, 31, 0x17CE50u);
    ctx->pc = 0x17CE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE48u;
            // 0x17ce4c: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE50u; }
        if (ctx->pc != 0x17CE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE50u; }
        if (ctx->pc != 0x17CE50u) { return; }
    }
    ctx->pc = 0x17CE50u;
    // 0x17ce50: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17CE50u;
    {
        const bool branch_taken_0x17ce50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE50u;
            // 0x17ce54: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce50) {
            ctx->pc = 0x17CED0u;
            goto label_17ced0;
        }
    }
    ctx->pc = 0x17CE58u;
label_17ce58:
    // 0x17ce58: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x17CE58u;
    SET_GPR_U32(ctx, 31, 0x17CE60u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE60u; }
        if (ctx->pc != 0x17CE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE60u; }
        if (ctx->pc != 0x17CE60u) { return; }
    }
    ctx->pc = 0x17CE60u;
    // 0x17ce60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ce60u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x17ce64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17CE64u;
    {
        const bool branch_taken_0x17ce64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ce64) {
            ctx->pc = 0x17CE98u;
            goto label_17ce98;
        }
    }
    ctx->pc = 0x17CE6Cu;
    // 0x17ce6c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x17CE6Cu;
    SET_GPR_U32(ctx, 31, 0x17CE74u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE74u; }
        if (ctx->pc != 0x17CE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE74u; }
        if (ctx->pc != 0x17CE74u) { return; }
    }
    ctx->pc = 0x17CE74u;
    // 0x17ce74: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x17CE74u;
    SET_GPR_U32(ctx, 31, 0x17CE7Cu);
    ctx->pc = 0x17CE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE74u;
            // 0x17ce78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE7Cu; }
        if (ctx->pc != 0x17CE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE7Cu; }
        if (ctx->pc != 0x17CE7Cu) { return; }
    }
    ctx->pc = 0x17CE7Cu;
    // 0x17ce7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce80: 0xc040880  jal         func_102200
    ctx->pc = 0x17CE80u;
    SET_GPR_U32(ctx, 31, 0x17CE88u);
    ctx->pc = 0x17CE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE80u;
            // 0x17ce84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE88u; }
        if (ctx->pc != 0x17CE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE88u; }
        if (ctx->pc != 0x17CE88u) { return; }
    }
    ctx->pc = 0x17CE88u;
    // 0x17ce88: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17CE88u;
    SET_GPR_U32(ctx, 31, 0x17CE90u);
    ctx->pc = 0x17CE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE88u;
            // 0x17ce8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE90u; }
        if (ctx->pc != 0x17CE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE90u; }
        if (ctx->pc != 0x17CE90u) { return; }
    }
    ctx->pc = 0x17CE90u;
    // 0x17ce90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17CE90u;
    {
        const bool branch_taken_0x17ce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE90u;
            // 0x17ce94: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce90) {
            ctx->pc = 0x17CED0u;
            goto label_17ced0;
        }
    }
    ctx->pc = 0x17CE98u;
label_17ce98:
    // 0x17ce98: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x17CE98u;
    SET_GPR_U32(ctx, 31, 0x17CEA0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEA0u; }
        if (ctx->pc != 0x17CEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEA0u; }
        if (ctx->pc != 0x17CEA0u) { return; }
    }
    ctx->pc = 0x17CEA0u;
    // 0x17cea0: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x17CEA0u;
    SET_GPR_U32(ctx, 31, 0x17CEA8u);
    ctx->pc = 0x17CEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CEA0u;
            // 0x17cea4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEA8u; }
        if (ctx->pc != 0x17CEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEA8u; }
        if (ctx->pc != 0x17CEA8u) { return; }
    }
    ctx->pc = 0x17CEA8u;
    // 0x17cea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ceac: 0xc040880  jal         func_102200
    ctx->pc = 0x17CEACu;
    SET_GPR_U32(ctx, 31, 0x17CEB4u);
    ctx->pc = 0x17CEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CEACu;
            // 0x17ceb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEB4u; }
        if (ctx->pc != 0x17CEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEB4u; }
        if (ctx->pc != 0x17CEB4u) { return; }
    }
    ctx->pc = 0x17CEB4u;
    // 0x17ceb4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x17ceb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17ceb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17cebc: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x17cebcu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x17cec0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x17CEC0u;
    SET_GPR_U32(ctx, 31, 0x17CEC8u);
    ctx->pc = 0x17CEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CEC0u;
            // 0x17cec4: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEC8u; }
        if (ctx->pc != 0x17CEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEC8u; }
        if (ctx->pc != 0x17CEC8u) { return; }
    }
    ctx->pc = 0x17CEC8u;
    // 0x17cec8: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x17cec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x17cecc: 0x0  nop
    ctx->pc = 0x17ceccu;
    // NOP
label_17ced0:
    // 0x17ced0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17ced0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ced4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ced4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ced8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ced8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cedc: 0x3e00008  jr          $ra
    ctx->pc = 0x17CEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CEDCu;
            // 0x17cee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CC68u: goto label_17cc68;
            case 0x17CCE8u: goto label_17cce8;
            case 0x17CD58u: goto label_17cd58;
            case 0x17CDC0u: goto label_17cdc0;
            case 0x17CE08u: goto label_17ce08;
            case 0x17CE58u: goto label_17ce58;
            case 0x17CE98u: goto label_17ce98;
            case 0x17CED0u: goto label_17ced0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17CEE4u;
}
