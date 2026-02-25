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
// Address: 0x1df480 - 0x1df780
void BossAddingVector_0x1df480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossAddingVector_0x1df480");
#endif

    ctx->pc = 0x1df480u;

    // 0x1df480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df484: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1df484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1df488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1df488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1df48c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df494: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df498: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1df498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df49c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1df49cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df4a0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1DF4A0u;
    {
        const bool branch_taken_0x1df4a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DF4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4A0u;
            // 0x1df4a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4a0) {
            ctx->pc = 0x1DF4F0u;
            goto label_1df4f0;
        }
    }
    ctx->pc = 0x1DF4A8u;
    // 0x1df4a8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DF4A8u;
    SET_GPR_U32(ctx, 31, 0x1DF4B0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4B0u; }
        if (ctx->pc != 0x1DF4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4B0u; }
        if (ctx->pc != 0x1DF4B0u) { return; }
    }
    ctx->pc = 0x1DF4B0u;
    // 0x1df4b0: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DF4B0u;
    SET_GPR_U32(ctx, 31, 0x1DF4B8u);
    ctx->pc = 0x1DF4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4B0u;
            // 0x1df4b4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4B8u; }
        if (ctx->pc != 0x1DF4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4B8u; }
        if (ctx->pc != 0x1DF4B8u) { return; }
    }
    ctx->pc = 0x1DF4B8u;
    // 0x1df4b8: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1df4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1df4bc: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1df4bcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df4c0: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1df4c0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df4c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1df4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1df4c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1df4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1df4cc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1df4ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1df4d0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1df4d0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1df4d4: 0xc040880  jal         func_102200
    ctx->pc = 0x1DF4D4u;
    SET_GPR_U32(ctx, 31, 0x1DF4DCu);
    ctx->pc = 0x1DF4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4D4u;
            // 0x1df4d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4DCu; }
        if (ctx->pc != 0x1DF4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4DCu; }
        if (ctx->pc != 0x1DF4DCu) { return; }
    }
    ctx->pc = 0x1DF4DCu;
    // 0x1df4dc: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DF4DCu;
    SET_GPR_U32(ctx, 31, 0x1DF4E4u);
    ctx->pc = 0x1DF4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4DCu;
            // 0x1df4e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4E4u; }
        if (ctx->pc != 0x1DF4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4E4u; }
        if (ctx->pc != 0x1DF4E4u) { return; }
    }
    ctx->pc = 0x1DF4E4u;
    // 0x1df4e4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1DF4E4u;
    {
        const bool branch_taken_0x1df4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4E4u;
            // 0x1df4e8: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4e4) {
            ctx->pc = 0x1DF600u;
            goto label_1df600;
        }
    }
    ctx->pc = 0x1DF4ECu;
    // 0x1df4ec: 0x0  nop
    ctx->pc = 0x1df4ecu;
    // NOP
label_1df4f0:
    // 0x1df4f0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1df4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1df4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df4f8: 0x0  nop
    ctx->pc = 0x1df4f8u;
    // NOP
    // 0x1df4fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1df4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df500: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF500u;
    {
        const bool branch_taken_0x1df500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df500) {
            ctx->pc = 0x1DF558u;
            goto label_1df558;
        }
    }
    ctx->pc = 0x1DF508u;
    // 0x1df508: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DF508u;
    SET_GPR_U32(ctx, 31, 0x1DF510u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF510u; }
        if (ctx->pc != 0x1DF510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF510u; }
        if (ctx->pc != 0x1DF510u) { return; }
    }
    ctx->pc = 0x1DF510u;
    // 0x1df510: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DF510u;
    SET_GPR_U32(ctx, 31, 0x1DF518u);
    ctx->pc = 0x1DF514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF510u;
            // 0x1df514: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF518u; }
        if (ctx->pc != 0x1DF518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF518u; }
        if (ctx->pc != 0x1DF518u) { return; }
    }
    ctx->pc = 0x1DF518u;
    // 0x1df518: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1df518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1df51c: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1df51cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df520: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1df520u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df524: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1df524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1df528: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1df528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1df52c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1df52cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1df530: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1df530u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1df534: 0xc040880  jal         func_102200
    ctx->pc = 0x1DF534u;
    SET_GPR_U32(ctx, 31, 0x1DF53Cu);
    ctx->pc = 0x1DF538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF534u;
            // 0x1df538: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF53Cu; }
        if (ctx->pc != 0x1DF53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF53Cu; }
        if (ctx->pc != 0x1DF53Cu) { return; }
    }
    ctx->pc = 0x1DF53Cu;
    // 0x1df53c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1df53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1df540: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1df540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1df544: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1df544u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1df548: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DF548u;
    SET_GPR_U32(ctx, 31, 0x1DF550u);
    ctx->pc = 0x1DF54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF548u;
            // 0x1df54c: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF550u; }
        if (ctx->pc != 0x1DF550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF550u; }
        if (ctx->pc != 0x1DF550u) { return; }
    }
    ctx->pc = 0x1DF550u;
    // 0x1df550: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1DF550u;
    {
        const bool branch_taken_0x1df550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF550u;
            // 0x1df554: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df550) {
            ctx->pc = 0x1DF600u;
            goto label_1df600;
        }
    }
    ctx->pc = 0x1DF558u;
label_1df558:
    // 0x1df558: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DF558u;
    SET_GPR_U32(ctx, 31, 0x1DF560u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF560u; }
        if (ctx->pc != 0x1DF560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF560u; }
        if (ctx->pc != 0x1DF560u) { return; }
    }
    ctx->pc = 0x1DF560u;
    // 0x1df560: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1df560u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1df564: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DF564u;
    {
        const bool branch_taken_0x1df564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df564) {
            ctx->pc = 0x1DF5B0u;
            goto label_1df5b0;
        }
    }
    ctx->pc = 0x1DF56Cu;
    // 0x1df56c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DF56Cu;
    SET_GPR_U32(ctx, 31, 0x1DF574u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF574u; }
        if (ctx->pc != 0x1DF574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF574u; }
        if (ctx->pc != 0x1DF574u) { return; }
    }
    ctx->pc = 0x1DF574u;
    // 0x1df574: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DF574u;
    SET_GPR_U32(ctx, 31, 0x1DF57Cu);
    ctx->pc = 0x1DF578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF574u;
            // 0x1df578: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF57Cu; }
        if (ctx->pc != 0x1DF57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF57Cu; }
        if (ctx->pc != 0x1DF57Cu) { return; }
    }
    ctx->pc = 0x1DF57Cu;
    // 0x1df57c: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1df57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1df580: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1df580u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df584: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1df584u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df588: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1df588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1df58c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1df58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1df590: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1df590u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1df594: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1df594u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1df598: 0xc040880  jal         func_102200
    ctx->pc = 0x1DF598u;
    SET_GPR_U32(ctx, 31, 0x1DF5A0u);
    ctx->pc = 0x1DF59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF598u;
            // 0x1df59c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5A0u; }
        if (ctx->pc != 0x1DF5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5A0u; }
        if (ctx->pc != 0x1DF5A0u) { return; }
    }
    ctx->pc = 0x1DF5A0u;
    // 0x1df5a0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DF5A0u;
    SET_GPR_U32(ctx, 31, 0x1DF5A8u);
    ctx->pc = 0x1DF5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5A0u;
            // 0x1df5a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5A8u; }
        if (ctx->pc != 0x1DF5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5A8u; }
        if (ctx->pc != 0x1DF5A8u) { return; }
    }
    ctx->pc = 0x1DF5A8u;
    // 0x1df5a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF5A8u;
    {
        const bool branch_taken_0x1df5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5A8u;
            // 0x1df5ac: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5a8) {
            ctx->pc = 0x1DF600u;
            goto label_1df600;
        }
    }
    ctx->pc = 0x1DF5B0u;
label_1df5b0:
    // 0x1df5b0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DF5B0u;
    SET_GPR_U32(ctx, 31, 0x1DF5B8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5B8u; }
        if (ctx->pc != 0x1DF5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5B8u; }
        if (ctx->pc != 0x1DF5B8u) { return; }
    }
    ctx->pc = 0x1DF5B8u;
    // 0x1df5b8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DF5B8u;
    SET_GPR_U32(ctx, 31, 0x1DF5C0u);
    ctx->pc = 0x1DF5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5B8u;
            // 0x1df5bc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5C0u; }
        if (ctx->pc != 0x1DF5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5C0u; }
        if (ctx->pc != 0x1DF5C0u) { return; }
    }
    ctx->pc = 0x1DF5C0u;
    // 0x1df5c0: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1df5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1df5c4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1df5c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df5c8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1df5c8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df5cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1df5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1df5d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1df5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1df5d4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1df5d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1df5d8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1df5d8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1df5dc: 0xc040880  jal         func_102200
    ctx->pc = 0x1DF5DCu;
    SET_GPR_U32(ctx, 31, 0x1DF5E4u);
    ctx->pc = 0x1DF5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5DCu;
            // 0x1df5e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5E4u; }
        if (ctx->pc != 0x1DF5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5E4u; }
        if (ctx->pc != 0x1DF5E4u) { return; }
    }
    ctx->pc = 0x1DF5E4u;
    // 0x1df5e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1df5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1df5e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1df5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1df5ec: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1df5ecu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1df5f0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DF5F0u;
    SET_GPR_U32(ctx, 31, 0x1DF5F8u);
    ctx->pc = 0x1DF5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5F0u;
            // 0x1df5f4: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5F8u; }
        if (ctx->pc != 0x1DF5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5F8u; }
        if (ctx->pc != 0x1DF5F8u) { return; }
    }
    ctx->pc = 0x1DF5F8u;
    // 0x1df5f8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1df5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1df5fc: 0x0  nop
    ctx->pc = 0x1df5fcu;
    // NOP
label_1df600:
    // 0x1df600: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1df600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df604: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1df604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1df608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df60c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1df60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df610: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1df610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df614: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1DF614u;
    {
        const bool branch_taken_0x1df614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df614) {
            ctx->pc = 0x1DF660u;
            goto label_1df660;
        }
    }
    ctx->pc = 0x1DF61Cu;
    // 0x1df61c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DF61Cu;
    SET_GPR_U32(ctx, 31, 0x1DF624u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF624u; }
        if (ctx->pc != 0x1DF624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF624u; }
        if (ctx->pc != 0x1DF624u) { return; }
    }
    ctx->pc = 0x1DF624u;
    // 0x1df624: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DF624u;
    SET_GPR_U32(ctx, 31, 0x1DF62Cu);
    ctx->pc = 0x1DF628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF624u;
            // 0x1df628: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF62Cu; }
        if (ctx->pc != 0x1DF62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF62Cu; }
        if (ctx->pc != 0x1DF62Cu) { return; }
    }
    ctx->pc = 0x1DF62Cu;
    // 0x1df62c: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1df62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1df630: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1df630u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df634: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1df634u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df638: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1df638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1df63c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1df63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1df640: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1df640u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1df644: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1df644u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1df648: 0xc040880  jal         func_102200
    ctx->pc = 0x1DF648u;
    SET_GPR_U32(ctx, 31, 0x1DF650u);
    ctx->pc = 0x1DF64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF648u;
            // 0x1df64c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF650u; }
        if (ctx->pc != 0x1DF650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF650u; }
        if (ctx->pc != 0x1DF650u) { return; }
    }
    ctx->pc = 0x1DF650u;
    // 0x1df650: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DF650u;
    SET_GPR_U32(ctx, 31, 0x1DF658u);
    ctx->pc = 0x1DF654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF650u;
            // 0x1df654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF658u; }
        if (ctx->pc != 0x1DF658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF658u; }
        if (ctx->pc != 0x1DF658u) { return; }
    }
    ctx->pc = 0x1DF658u;
    // 0x1df658: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1DF658u;
    {
        const bool branch_taken_0x1df658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF658u;
            // 0x1df65c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df658) {
            ctx->pc = 0x1DF770u;
            goto label_1df770;
        }
    }
    ctx->pc = 0x1DF660u;
label_1df660:
    // 0x1df660: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1df660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1df664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df668: 0x0  nop
    ctx->pc = 0x1df668u;
    // NOP
    // 0x1df66c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1df66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df670: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF670u;
    {
        const bool branch_taken_0x1df670 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df670) {
            ctx->pc = 0x1DF6C8u;
            goto label_1df6c8;
        }
    }
    ctx->pc = 0x1DF678u;
    // 0x1df678: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DF678u;
    SET_GPR_U32(ctx, 31, 0x1DF680u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF680u; }
        if (ctx->pc != 0x1DF680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF680u; }
        if (ctx->pc != 0x1DF680u) { return; }
    }
    ctx->pc = 0x1DF680u;
    // 0x1df680: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DF680u;
    SET_GPR_U32(ctx, 31, 0x1DF688u);
    ctx->pc = 0x1DF684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF680u;
            // 0x1df684: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF688u; }
        if (ctx->pc != 0x1DF688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF688u; }
        if (ctx->pc != 0x1DF688u) { return; }
    }
    ctx->pc = 0x1DF688u;
    // 0x1df688: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1df688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1df68c: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1df68cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df690: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1df690u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df694: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1df694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1df698: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1df698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1df69c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1df69cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1df6a0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1df6a0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1df6a4: 0xc040880  jal         func_102200
    ctx->pc = 0x1DF6A4u;
    SET_GPR_U32(ctx, 31, 0x1DF6ACu);
    ctx->pc = 0x1DF6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6A4u;
            // 0x1df6a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6ACu; }
        if (ctx->pc != 0x1DF6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6ACu; }
        if (ctx->pc != 0x1DF6ACu) { return; }
    }
    ctx->pc = 0x1DF6ACu;
    // 0x1df6ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1df6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1df6b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1df6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1df6b4: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1df6b4u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1df6b8: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DF6B8u;
    SET_GPR_U32(ctx, 31, 0x1DF6C0u);
    ctx->pc = 0x1DF6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6B8u;
            // 0x1df6bc: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6C0u; }
        if (ctx->pc != 0x1DF6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6C0u; }
        if (ctx->pc != 0x1DF6C0u) { return; }
    }
    ctx->pc = 0x1DF6C0u;
    // 0x1df6c0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1DF6C0u;
    {
        const bool branch_taken_0x1df6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6C0u;
            // 0x1df6c4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6c0) {
            ctx->pc = 0x1DF770u;
            goto label_1df770;
        }
    }
    ctx->pc = 0x1DF6C8u;
label_1df6c8:
    // 0x1df6c8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DF6C8u;
    SET_GPR_U32(ctx, 31, 0x1DF6D0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6D0u; }
        if (ctx->pc != 0x1DF6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6D0u; }
        if (ctx->pc != 0x1DF6D0u) { return; }
    }
    ctx->pc = 0x1DF6D0u;
    // 0x1df6d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1df6d0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1df6d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DF6D4u;
    {
        const bool branch_taken_0x1df6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df6d4) {
            ctx->pc = 0x1DF720u;
            goto label_1df720;
        }
    }
    ctx->pc = 0x1DF6DCu;
    // 0x1df6dc: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DF6DCu;
    SET_GPR_U32(ctx, 31, 0x1DF6E4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6E4u; }
        if (ctx->pc != 0x1DF6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6E4u; }
        if (ctx->pc != 0x1DF6E4u) { return; }
    }
    ctx->pc = 0x1DF6E4u;
    // 0x1df6e4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DF6E4u;
    SET_GPR_U32(ctx, 31, 0x1DF6ECu);
    ctx->pc = 0x1DF6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6E4u;
            // 0x1df6e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6ECu; }
        if (ctx->pc != 0x1DF6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6ECu; }
        if (ctx->pc != 0x1DF6ECu) { return; }
    }
    ctx->pc = 0x1DF6ECu;
    // 0x1df6ec: 0x3c043fa9  lui         $a0, 0x3FA9
    ctx->pc = 0x1df6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16297 << 16));
    // 0x1df6f0: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1df6f0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df6f4: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1df6f4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df6f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1df6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1df6fc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1df6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1df700: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1df700u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1df704: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1df704u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1df708: 0xc040880  jal         func_102200
    ctx->pc = 0x1DF708u;
    SET_GPR_U32(ctx, 31, 0x1DF710u);
    ctx->pc = 0x1DF70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF708u;
            // 0x1df70c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF710u; }
        if (ctx->pc != 0x1DF710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF710u; }
        if (ctx->pc != 0x1DF710u) { return; }
    }
    ctx->pc = 0x1DF710u;
    // 0x1df710: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DF710u;
    SET_GPR_U32(ctx, 31, 0x1DF718u);
    ctx->pc = 0x1DF714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF710u;
            // 0x1df714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF718u; }
        if (ctx->pc != 0x1DF718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF718u; }
        if (ctx->pc != 0x1DF718u) { return; }
    }
    ctx->pc = 0x1DF718u;
    // 0x1df718: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF718u;
    {
        const bool branch_taken_0x1df718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF718u;
            // 0x1df71c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df718) {
            ctx->pc = 0x1DF770u;
            goto label_1df770;
        }
    }
    ctx->pc = 0x1DF720u;
label_1df720:
    // 0x1df720: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DF720u;
    SET_GPR_U32(ctx, 31, 0x1DF728u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF728u; }
        if (ctx->pc != 0x1DF728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF728u; }
        if (ctx->pc != 0x1DF728u) { return; }
    }
    ctx->pc = 0x1DF728u;
    // 0x1df728: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1DF728u;
    SET_GPR_U32(ctx, 31, 0x1DF730u);
    ctx->pc = 0x1DF72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF728u;
            // 0x1df72c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF730u; }
        if (ctx->pc != 0x1DF730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF730u; }
        if (ctx->pc != 0x1DF730u) { return; }
    }
    ctx->pc = 0x1DF730u;
    // 0x1df730: 0x3c043fa9  lui         $a0, 0x3FA9
    ctx->pc = 0x1df730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16297 << 16));
    // 0x1df734: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1df734u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df738: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1df738u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1df73c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1df73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1df740: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1df740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1df744: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1df744u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1df748: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1df748u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1df74c: 0xc040880  jal         func_102200
    ctx->pc = 0x1DF74Cu;
    SET_GPR_U32(ctx, 31, 0x1DF754u);
    ctx->pc = 0x1DF750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF74Cu;
            // 0x1df750: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF754u; }
        if (ctx->pc != 0x1DF754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF754u; }
        if (ctx->pc != 0x1DF754u) { return; }
    }
    ctx->pc = 0x1DF754u;
    // 0x1df754: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1df754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1df758: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1df758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1df75c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1df75cu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1df760: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DF760u;
    SET_GPR_U32(ctx, 31, 0x1DF768u);
    ctx->pc = 0x1DF764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF760u;
            // 0x1df764: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF768u; }
        if (ctx->pc != 0x1DF768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF768u; }
        if (ctx->pc != 0x1DF768u) { return; }
    }
    ctx->pc = 0x1DF768u;
    // 0x1df768: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1df768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1df76c: 0x0  nop
    ctx->pc = 0x1df76cu;
    // NOP
label_1df770:
    // 0x1df770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df778: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF778u;
            // 0x1df77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF4F0u: goto label_1df4f0;
            case 0x1DF558u: goto label_1df558;
            case 0x1DF5B0u: goto label_1df5b0;
            case 0x1DF600u: goto label_1df600;
            case 0x1DF660u: goto label_1df660;
            case 0x1DF6C8u: goto label_1df6c8;
            case 0x1DF720u: goto label_1df720;
            case 0x1DF770u: goto label_1df770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF780u;
}
