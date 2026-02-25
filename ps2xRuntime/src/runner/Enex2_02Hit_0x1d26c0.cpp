#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_02Hit
// Address: 0x1d26c0 - 0x1d2824
void Enex2_02Hit_0x1d26c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_02Hit_0x1d26c0");
#endif

    ctx->pc = 0x1d26c0u;

    // 0x1d26c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d26c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d26c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d26c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d26c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d26c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d26cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d26ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d26d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d26d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d26d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d26d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d26d8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1d26d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d26dc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1d26dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d26e0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1d26e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d26e4: 0x18800048  blez        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1D26E4u;
    {
        const bool branch_taken_0x1d26e4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D26E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26E4u;
            // 0x1d26e8: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26e4) {
            ctx->pc = 0x1D2808u;
            goto label_1d2808;
        }
    }
    ctx->pc = 0x1D26ECu;
    // 0x1d26ec: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1d26ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d26f0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d26f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d26f4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1d26f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1d26f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d26f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d26fc: 0x1c600042  bgtz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1D26FCu;
    {
        const bool branch_taken_0x1d26fc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d26fc) {
            ctx->pc = 0x1D2808u;
            goto label_1d2808;
        }
    }
    ctx->pc = 0x1D2704u;
    // 0x1d2704: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1d2704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d2708: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x1d2708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x1d270c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1d270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1d2710: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1d2710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d2714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2718: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1d2718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1d271c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1d271cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d2720: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1d2720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2724: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1d2724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d2728: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1D2728u;
    SET_GPR_U32(ctx, 31, 0x1D2730u);
    ctx->pc = 0x1D272Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2728u;
            // 0x1d272c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2730u; }
        if (ctx->pc != 0x1D2730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2730u; }
        if (ctx->pc != 0x1D2730u) { return; }
    }
    ctx->pc = 0x1D2730u;
    // 0x1d2730: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1d2730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d2734: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d2734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2738: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2738u;
    {
        const bool branch_taken_0x1d2738 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D273Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2738u;
            // 0x1d273c: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2738) {
            ctx->pc = 0x1D2748u;
            goto label_1d2748;
        }
    }
    ctx->pc = 0x1D2740u;
    // 0x1d2740: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1d2740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1d2744: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1d2744u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1d2748:
    // 0x1d2748: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1d2748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d274c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D274Cu;
    {
        const bool branch_taken_0x1d274c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d274c) {
            ctx->pc = 0x1D27E0u;
            goto label_1d27e0;
        }
    }
    ctx->pc = 0x1D2754u;
    // 0x1d2754: 0x0  nop
    ctx->pc = 0x1d2754u;
    // NOP
label_1d2758:
    // 0x1d2758: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D2758u;
    SET_GPR_U32(ctx, 31, 0x1D2760u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2760u; }
        if (ctx->pc != 0x1D2760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2760u; }
        if (ctx->pc != 0x1D2760u) { return; }
    }
    ctx->pc = 0x1D2760u;
    // 0x1d2760: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1d2760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1d2764: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1d2764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d2768: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d2768u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d276c: 0x0  nop
    ctx->pc = 0x1d276cu;
    // NOP
    // 0x1d2770: 0x0  nop
    ctx->pc = 0x1d2770u;
    // NOP
    // 0x1d2774: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2774u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d2778: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D2778u;
    SET_GPR_U32(ctx, 31, 0x1D2780u);
    ctx->pc = 0x1D277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2778u;
            // 0x1d277c: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2780u; }
        if (ctx->pc != 0x1D2780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2780u; }
        if (ctx->pc != 0x1D2780u) { return; }
    }
    ctx->pc = 0x1D2780u;
    // 0x1d2780: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1d2780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1d2784: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1d2784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d2788: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d2788u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d278c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d278cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2790: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d2790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d2794: 0x0  nop
    ctx->pc = 0x1d2794u;
    // NOP
    // 0x1d2798: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d2798u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d279c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1d279cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d27a0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1d27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d27a4: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1d27a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d27a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1d27a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1d27ac: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1d27acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d27b0: 0xc065944  jal         func_196510
    ctx->pc = 0x1D27B0u;
    SET_GPR_U32(ctx, 31, 0x1D27B8u);
    ctx->pc = 0x1D27B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27B0u;
            // 0x1d27b4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D27B8u; }
        if (ctx->pc != 0x1D27B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D27B8u; }
        if (ctx->pc != 0x1D27B8u) { return; }
    }
    ctx->pc = 0x1D27B8u;
    // 0x1d27b8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1d27b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d27bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d27bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d27c0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D27C0u;
    {
        const bool branch_taken_0x1d27c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D27C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27C0u;
            // 0x1d27c4: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27c0) {
            ctx->pc = 0x1D27D0u;
            goto label_1d27d0;
        }
    }
    ctx->pc = 0x1D27C8u;
    // 0x1d27c8: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1d27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1d27cc: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1d27ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1d27d0:
    // 0x1d27d0: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1d27d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d27d4: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D27D4u;
    {
        const bool branch_taken_0x1d27d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d27d4) {
            ctx->pc = 0x1D2758u;
            goto label_1d2758;
        }
    }
    ctx->pc = 0x1D27DCu;
    // 0x1d27dc: 0x0  nop
    ctx->pc = 0x1d27dcu;
    // NOP
label_1d27e0:
    // 0x1d27e0: 0x288300ff  slti        $v1, $a0, 0xFF
    ctx->pc = 0x1d27e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1d27e4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D27E4u;
    {
        const bool branch_taken_0x1d27e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d27e4) {
            ctx->pc = 0x1D2808u;
            goto label_1d2808;
        }
    }
    ctx->pc = 0x1D27ECu;
    // 0x1d27ec: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1d27ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d27f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d27f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d27f4: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1d27f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d27f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d27f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27fc: 0xc065944  jal         func_196510
    ctx->pc = 0x1D27FCu;
    SET_GPR_U32(ctx, 31, 0x1D2804u);
    ctx->pc = 0x1D2800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27FCu;
            // 0x1d2800: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2804u; }
        if (ctx->pc != 0x1D2804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2804u; }
        if (ctx->pc != 0x1D2804u) { return; }
    }
    ctx->pc = 0x1D2804u;
    // 0x1d2804: 0x0  nop
    ctx->pc = 0x1d2804u;
    // NOP
label_1d2808:
    // 0x1d2808: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d2808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d280c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d280cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d281c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D281Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D281Cu;
            // 0x1d2820: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2748u: goto label_1d2748;
            case 0x1D2758u: goto label_1d2758;
            case 0x1D27D0u: goto label_1d27d0;
            case 0x1D27E0u: goto label_1d27e0;
            case 0x1D2808u: goto label_1d2808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2824u;
}
