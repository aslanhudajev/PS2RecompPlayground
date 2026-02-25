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
// Address: 0x1beef0 - 0x1bf1f0
void BossAddingVector_0x1beef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossAddingVector_0x1beef0");
#endif

    ctx->pc = 0x1beef0u;

    // 0x1beef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1beef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1beef4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1beef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1beef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1beef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1beefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bef00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bef04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bef08: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1bef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bef0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bef0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bef10: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1BEF10u;
    {
        const bool branch_taken_0x1bef10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF10u;
            // 0x1bef14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef10) {
            ctx->pc = 0x1BEF60u;
            goto label_1bef60;
        }
    }
    ctx->pc = 0x1BEF18u;
    // 0x1bef18: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BEF18u;
    SET_GPR_U32(ctx, 31, 0x1BEF20u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF20u; }
        if (ctx->pc != 0x1BEF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF20u; }
        if (ctx->pc != 0x1BEF20u) { return; }
    }
    ctx->pc = 0x1BEF20u;
    // 0x1bef20: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1BEF20u;
    SET_GPR_U32(ctx, 31, 0x1BEF28u);
    ctx->pc = 0x1BEF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF20u;
            // 0x1bef24: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF28u; }
        if (ctx->pc != 0x1BEF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF28u; }
        if (ctx->pc != 0x1BEF28u) { return; }
    }
    ctx->pc = 0x1BEF28u;
    // 0x1bef28: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1bef28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1bef2c: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bef2cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bef30: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bef30u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bef34: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bef34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bef38: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bef38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1bef3c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bef3cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1bef40: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bef40u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1bef44: 0xc040880  jal         func_102200
    ctx->pc = 0x1BEF44u;
    SET_GPR_U32(ctx, 31, 0x1BEF4Cu);
    ctx->pc = 0x1BEF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF44u;
            // 0x1bef48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF4Cu; }
        if (ctx->pc != 0x1BEF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF4Cu; }
        if (ctx->pc != 0x1BEF4Cu) { return; }
    }
    ctx->pc = 0x1BEF4Cu;
    // 0x1bef4c: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1BEF4Cu;
    SET_GPR_U32(ctx, 31, 0x1BEF54u);
    ctx->pc = 0x1BEF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF4Cu;
            // 0x1bef50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF54u; }
        if (ctx->pc != 0x1BEF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF54u; }
        if (ctx->pc != 0x1BEF54u) { return; }
    }
    ctx->pc = 0x1BEF54u;
    // 0x1bef54: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1BEF54u;
    {
        const bool branch_taken_0x1bef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF54u;
            // 0x1bef58: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef54) {
            ctx->pc = 0x1BF070u;
            goto label_1bf070;
        }
    }
    ctx->pc = 0x1BEF5Cu;
    // 0x1bef5c: 0x0  nop
    ctx->pc = 0x1bef5cu;
    // NOP
label_1bef60:
    // 0x1bef60: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1bef60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1bef64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bef64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bef68: 0x0  nop
    ctx->pc = 0x1bef68u;
    // NOP
    // 0x1bef6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bef6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bef70: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1BEF70u;
    {
        const bool branch_taken_0x1bef70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bef70) {
            ctx->pc = 0x1BEFC8u;
            goto label_1befc8;
        }
    }
    ctx->pc = 0x1BEF78u;
    // 0x1bef78: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BEF78u;
    SET_GPR_U32(ctx, 31, 0x1BEF80u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF80u; }
        if (ctx->pc != 0x1BEF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF80u; }
        if (ctx->pc != 0x1BEF80u) { return; }
    }
    ctx->pc = 0x1BEF80u;
    // 0x1bef80: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1BEF80u;
    SET_GPR_U32(ctx, 31, 0x1BEF88u);
    ctx->pc = 0x1BEF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF80u;
            // 0x1bef84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF88u; }
        if (ctx->pc != 0x1BEF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF88u; }
        if (ctx->pc != 0x1BEF88u) { return; }
    }
    ctx->pc = 0x1BEF88u;
    // 0x1bef88: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1bef88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1bef8c: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bef8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bef90: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bef90u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bef94: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bef94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bef98: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bef98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1bef9c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bef9cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1befa0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1befa0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1befa4: 0xc040880  jal         func_102200
    ctx->pc = 0x1BEFA4u;
    SET_GPR_U32(ctx, 31, 0x1BEFACu);
    ctx->pc = 0x1BEFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFA4u;
            // 0x1befa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFACu; }
        if (ctx->pc != 0x1BEFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFACu; }
        if (ctx->pc != 0x1BEFACu) { return; }
    }
    ctx->pc = 0x1BEFACu;
    // 0x1befac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1befacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1befb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1befb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1befb4: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1befb4u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1befb8: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1BEFB8u;
    SET_GPR_U32(ctx, 31, 0x1BEFC0u);
    ctx->pc = 0x1BEFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFB8u;
            // 0x1befbc: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFC0u; }
        if (ctx->pc != 0x1BEFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFC0u; }
        if (ctx->pc != 0x1BEFC0u) { return; }
    }
    ctx->pc = 0x1BEFC0u;
    // 0x1befc0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1BEFC0u;
    {
        const bool branch_taken_0x1befc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFC0u;
            // 0x1befc4: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befc0) {
            ctx->pc = 0x1BF070u;
            goto label_1bf070;
        }
    }
    ctx->pc = 0x1BEFC8u;
label_1befc8:
    // 0x1befc8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BEFC8u;
    SET_GPR_U32(ctx, 31, 0x1BEFD0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFD0u; }
        if (ctx->pc != 0x1BEFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFD0u; }
        if (ctx->pc != 0x1BEFD0u) { return; }
    }
    ctx->pc = 0x1BEFD0u;
    // 0x1befd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1befd0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1befd4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BEFD4u;
    {
        const bool branch_taken_0x1befd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1befd4) {
            ctx->pc = 0x1BF020u;
            goto label_1bf020;
        }
    }
    ctx->pc = 0x1BEFDCu;
    // 0x1befdc: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BEFDCu;
    SET_GPR_U32(ctx, 31, 0x1BEFE4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFE4u; }
        if (ctx->pc != 0x1BEFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFE4u; }
        if (ctx->pc != 0x1BEFE4u) { return; }
    }
    ctx->pc = 0x1BEFE4u;
    // 0x1befe4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1BEFE4u;
    SET_GPR_U32(ctx, 31, 0x1BEFECu);
    ctx->pc = 0x1BEFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFE4u;
            // 0x1befe8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFECu; }
        if (ctx->pc != 0x1BEFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFECu; }
        if (ctx->pc != 0x1BEFECu) { return; }
    }
    ctx->pc = 0x1BEFECu;
    // 0x1befec: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1befecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1beff0: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1beff0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1beff4: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1beff4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1beff8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1beff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1beffc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1beffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1bf000: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf000u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1bf004: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf004u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1bf008: 0xc040880  jal         func_102200
    ctx->pc = 0x1BF008u;
    SET_GPR_U32(ctx, 31, 0x1BF010u);
    ctx->pc = 0x1BF00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF008u;
            // 0x1bf00c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF010u; }
        if (ctx->pc != 0x1BF010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF010u; }
        if (ctx->pc != 0x1BF010u) { return; }
    }
    ctx->pc = 0x1BF010u;
    // 0x1bf010: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1BF010u;
    SET_GPR_U32(ctx, 31, 0x1BF018u);
    ctx->pc = 0x1BF014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF010u;
            // 0x1bf014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF018u; }
        if (ctx->pc != 0x1BF018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF018u; }
        if (ctx->pc != 0x1BF018u) { return; }
    }
    ctx->pc = 0x1BF018u;
    // 0x1bf018: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1BF018u;
    {
        const bool branch_taken_0x1bf018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF018u;
            // 0x1bf01c: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf018) {
            ctx->pc = 0x1BF070u;
            goto label_1bf070;
        }
    }
    ctx->pc = 0x1BF020u;
label_1bf020:
    // 0x1bf020: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BF020u;
    SET_GPR_U32(ctx, 31, 0x1BF028u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF028u; }
        if (ctx->pc != 0x1BF028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF028u; }
        if (ctx->pc != 0x1BF028u) { return; }
    }
    ctx->pc = 0x1BF028u;
    // 0x1bf028: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1BF028u;
    SET_GPR_U32(ctx, 31, 0x1BF030u);
    ctx->pc = 0x1BF02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF028u;
            // 0x1bf02c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF030u; }
        if (ctx->pc != 0x1BF030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF030u; }
        if (ctx->pc != 0x1BF030u) { return; }
    }
    ctx->pc = 0x1BF030u;
    // 0x1bf030: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1bf030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1bf034: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bf034u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bf038: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bf038u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bf03c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bf040: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bf040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1bf044: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf044u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1bf048: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf048u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1bf04c: 0xc040880  jal         func_102200
    ctx->pc = 0x1BF04Cu;
    SET_GPR_U32(ctx, 31, 0x1BF054u);
    ctx->pc = 0x1BF050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF04Cu;
            // 0x1bf050: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF054u; }
        if (ctx->pc != 0x1BF054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF054u; }
        if (ctx->pc != 0x1BF054u) { return; }
    }
    ctx->pc = 0x1BF054u;
    // 0x1bf054: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1bf054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1bf058: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf05c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1bf05cu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1bf060: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1BF060u;
    SET_GPR_U32(ctx, 31, 0x1BF068u);
    ctx->pc = 0x1BF064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF060u;
            // 0x1bf064: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF068u; }
        if (ctx->pc != 0x1BF068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF068u; }
        if (ctx->pc != 0x1BF068u) { return; }
    }
    ctx->pc = 0x1BF068u;
    // 0x1bf068: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1bf068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1bf06c: 0x0  nop
    ctx->pc = 0x1bf06cu;
    // NOP
label_1bf070:
    // 0x1bf070: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bf070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf074: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1bf074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1bf078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bf078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf07c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1bf07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf080: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bf080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf084: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1BF084u;
    {
        const bool branch_taken_0x1bf084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bf084) {
            ctx->pc = 0x1BF0D0u;
            goto label_1bf0d0;
        }
    }
    ctx->pc = 0x1BF08Cu;
    // 0x1bf08c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BF08Cu;
    SET_GPR_U32(ctx, 31, 0x1BF094u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF094u; }
        if (ctx->pc != 0x1BF094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF094u; }
        if (ctx->pc != 0x1BF094u) { return; }
    }
    ctx->pc = 0x1BF094u;
    // 0x1bf094: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1BF094u;
    SET_GPR_U32(ctx, 31, 0x1BF09Cu);
    ctx->pc = 0x1BF098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF094u;
            // 0x1bf098: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF09Cu; }
        if (ctx->pc != 0x1BF09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF09Cu; }
        if (ctx->pc != 0x1BF09Cu) { return; }
    }
    ctx->pc = 0x1BF09Cu;
    // 0x1bf09c: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1bf09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1bf0a0: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bf0a0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bf0a4: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bf0a4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bf0a8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bf0ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bf0acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1bf0b0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf0b0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1bf0b4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf0b4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1bf0b8: 0xc040880  jal         func_102200
    ctx->pc = 0x1BF0B8u;
    SET_GPR_U32(ctx, 31, 0x1BF0C0u);
    ctx->pc = 0x1BF0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF0B8u;
            // 0x1bf0bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF0C0u; }
        if (ctx->pc != 0x1BF0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF0C0u; }
        if (ctx->pc != 0x1BF0C0u) { return; }
    }
    ctx->pc = 0x1BF0C0u;
    // 0x1bf0c0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1BF0C0u;
    SET_GPR_U32(ctx, 31, 0x1BF0C8u);
    ctx->pc = 0x1BF0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF0C0u;
            // 0x1bf0c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF0C8u; }
        if (ctx->pc != 0x1BF0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF0C8u; }
        if (ctx->pc != 0x1BF0C8u) { return; }
    }
    ctx->pc = 0x1BF0C8u;
    // 0x1bf0c8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1BF0C8u;
    {
        const bool branch_taken_0x1bf0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF0C8u;
            // 0x1bf0cc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0c8) {
            ctx->pc = 0x1BF1E0u;
            goto label_1bf1e0;
        }
    }
    ctx->pc = 0x1BF0D0u;
label_1bf0d0:
    // 0x1bf0d0: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1bf0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1bf0d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bf0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf0d8: 0x0  nop
    ctx->pc = 0x1bf0d8u;
    // NOP
    // 0x1bf0dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bf0dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf0e0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1BF0E0u;
    {
        const bool branch_taken_0x1bf0e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bf0e0) {
            ctx->pc = 0x1BF138u;
            goto label_1bf138;
        }
    }
    ctx->pc = 0x1BF0E8u;
    // 0x1bf0e8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BF0E8u;
    SET_GPR_U32(ctx, 31, 0x1BF0F0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF0F0u; }
        if (ctx->pc != 0x1BF0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF0F0u; }
        if (ctx->pc != 0x1BF0F0u) { return; }
    }
    ctx->pc = 0x1BF0F0u;
    // 0x1bf0f0: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1BF0F0u;
    SET_GPR_U32(ctx, 31, 0x1BF0F8u);
    ctx->pc = 0x1BF0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF0F0u;
            // 0x1bf0f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF0F8u; }
        if (ctx->pc != 0x1BF0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF0F8u; }
        if (ctx->pc != 0x1BF0F8u) { return; }
    }
    ctx->pc = 0x1BF0F8u;
    // 0x1bf0f8: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1bf0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1bf0fc: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bf0fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bf100: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bf100u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bf104: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bf108: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bf108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1bf10c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf10cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1bf110: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf110u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1bf114: 0xc040880  jal         func_102200
    ctx->pc = 0x1BF114u;
    SET_GPR_U32(ctx, 31, 0x1BF11Cu);
    ctx->pc = 0x1BF118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF114u;
            // 0x1bf118: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF11Cu; }
        if (ctx->pc != 0x1BF11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF11Cu; }
        if (ctx->pc != 0x1BF11Cu) { return; }
    }
    ctx->pc = 0x1BF11Cu;
    // 0x1bf11c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1bf11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1bf120: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf124: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1bf124u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1bf128: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1BF128u;
    SET_GPR_U32(ctx, 31, 0x1BF130u);
    ctx->pc = 0x1BF12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF128u;
            // 0x1bf12c: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF130u; }
        if (ctx->pc != 0x1BF130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF130u; }
        if (ctx->pc != 0x1BF130u) { return; }
    }
    ctx->pc = 0x1BF130u;
    // 0x1bf130: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1BF130u;
    {
        const bool branch_taken_0x1bf130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF130u;
            // 0x1bf134: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf130) {
            ctx->pc = 0x1BF1E0u;
            goto label_1bf1e0;
        }
    }
    ctx->pc = 0x1BF138u;
label_1bf138:
    // 0x1bf138: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BF138u;
    SET_GPR_U32(ctx, 31, 0x1BF140u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF140u; }
        if (ctx->pc != 0x1BF140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF140u; }
        if (ctx->pc != 0x1BF140u) { return; }
    }
    ctx->pc = 0x1BF140u;
    // 0x1bf140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bf140u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1bf144: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BF144u;
    {
        const bool branch_taken_0x1bf144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf144) {
            ctx->pc = 0x1BF190u;
            goto label_1bf190;
        }
    }
    ctx->pc = 0x1BF14Cu;
    // 0x1bf14c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BF14Cu;
    SET_GPR_U32(ctx, 31, 0x1BF154u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF154u; }
        if (ctx->pc != 0x1BF154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF154u; }
        if (ctx->pc != 0x1BF154u) { return; }
    }
    ctx->pc = 0x1BF154u;
    // 0x1bf154: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1BF154u;
    SET_GPR_U32(ctx, 31, 0x1BF15Cu);
    ctx->pc = 0x1BF158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF154u;
            // 0x1bf158: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF15Cu; }
        if (ctx->pc != 0x1BF15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF15Cu; }
        if (ctx->pc != 0x1BF15Cu) { return; }
    }
    ctx->pc = 0x1BF15Cu;
    // 0x1bf15c: 0x3c043fa9  lui         $a0, 0x3FA9
    ctx->pc = 0x1bf15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16297 << 16));
    // 0x1bf160: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bf160u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bf164: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bf164u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bf168: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bf16c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bf16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1bf170: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf170u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1bf174: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf174u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1bf178: 0xc040880  jal         func_102200
    ctx->pc = 0x1BF178u;
    SET_GPR_U32(ctx, 31, 0x1BF180u);
    ctx->pc = 0x1BF17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF178u;
            // 0x1bf17c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF180u; }
        if (ctx->pc != 0x1BF180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF180u; }
        if (ctx->pc != 0x1BF180u) { return; }
    }
    ctx->pc = 0x1BF180u;
    // 0x1bf180: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1BF180u;
    SET_GPR_U32(ctx, 31, 0x1BF188u);
    ctx->pc = 0x1BF184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF180u;
            // 0x1bf184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF188u; }
        if (ctx->pc != 0x1BF188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF188u; }
        if (ctx->pc != 0x1BF188u) { return; }
    }
    ctx->pc = 0x1BF188u;
    // 0x1bf188: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1BF188u;
    {
        const bool branch_taken_0x1bf188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF188u;
            // 0x1bf18c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf188) {
            ctx->pc = 0x1BF1E0u;
            goto label_1bf1e0;
        }
    }
    ctx->pc = 0x1BF190u;
label_1bf190:
    // 0x1bf190: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1BF190u;
    SET_GPR_U32(ctx, 31, 0x1BF198u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF198u; }
        if (ctx->pc != 0x1BF198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF198u; }
        if (ctx->pc != 0x1BF198u) { return; }
    }
    ctx->pc = 0x1BF198u;
    // 0x1bf198: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1BF198u;
    SET_GPR_U32(ctx, 31, 0x1BF1A0u);
    ctx->pc = 0x1BF19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF198u;
            // 0x1bf19c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1A0u; }
        if (ctx->pc != 0x1BF1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1A0u; }
        if (ctx->pc != 0x1BF1A0u) { return; }
    }
    ctx->pc = 0x1BF1A0u;
    // 0x1bf1a0: 0x3c043fa9  lui         $a0, 0x3FA9
    ctx->pc = 0x1bf1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16297 << 16));
    // 0x1bf1a4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1bf1a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bf1a8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1bf1a8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1bf1ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bf1b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bf1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1bf1b4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bf1b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1bf1b8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1bf1b8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1bf1bc: 0xc040880  jal         func_102200
    ctx->pc = 0x1BF1BCu;
    SET_GPR_U32(ctx, 31, 0x1BF1C4u);
    ctx->pc = 0x1BF1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1BCu;
            // 0x1bf1c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1C4u; }
        if (ctx->pc != 0x1BF1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1C4u; }
        if (ctx->pc != 0x1BF1C4u) { return; }
    }
    ctx->pc = 0x1BF1C4u;
    // 0x1bf1c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1bf1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1bf1c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf1cc: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1bf1ccu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1bf1d0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1BF1D0u;
    SET_GPR_U32(ctx, 31, 0x1BF1D8u);
    ctx->pc = 0x1BF1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1D0u;
            // 0x1bf1d4: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1D8u; }
        if (ctx->pc != 0x1BF1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF1D8u; }
        if (ctx->pc != 0x1BF1D8u) { return; }
    }
    ctx->pc = 0x1BF1D8u;
    // 0x1bf1d8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1bf1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1bf1dc: 0x0  nop
    ctx->pc = 0x1bf1dcu;
    // NOP
label_1bf1e0:
    // 0x1bf1e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf1e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF1E8u;
            // 0x1bf1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BEF60u: goto label_1bef60;
            case 0x1BEFC8u: goto label_1befc8;
            case 0x1BF020u: goto label_1bf020;
            case 0x1BF070u: goto label_1bf070;
            case 0x1BF0D0u: goto label_1bf0d0;
            case 0x1BF138u: goto label_1bf138;
            case 0x1BF190u: goto label_1bf190;
            case 0x1BF1E0u: goto label_1bf1e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BF1F0u;
}
