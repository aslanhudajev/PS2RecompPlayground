#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex2_02_Hontai
// Address: 0x1d2840 - 0x1d2928
void CreateEnex2_02_Hontai_0x1d2840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex2_02_Hontai_0x1d2840");
#endif

    ctx->pc = 0x1d2840u;

    // 0x1d2840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d2840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d2844: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1d2844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d2848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d2848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d284c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2850: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D2850u;
    SET_GPR_U32(ctx, 31, 0x1D2858u);
    ctx->pc = 0x1D2854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2850u;
            // 0x1d2854: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2858u; }
        if (ctx->pc != 0x1D2858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2858u; }
        if (ctx->pc != 0x1D2858u) { return; }
    }
    ctx->pc = 0x1D2858u;
    // 0x1d2858: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d2858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d285c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1d285cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1d2860: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1d2860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1d2864: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1D2864u;
    SET_GPR_U32(ctx, 31, 0x1D286Cu);
    ctx->pc = 0x1D2868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2864u;
            // 0x1d2868: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D286Cu; }
        if (ctx->pc != 0x1D286Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D286Cu; }
        if (ctx->pc != 0x1D286Cu) { return; }
    }
    ctx->pc = 0x1D286Cu;
    // 0x1d286c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1D286Cu;
    SET_GPR_U32(ctx, 31, 0x1D2874u);
    ctx->pc = 0x1D2870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D286Cu;
            // 0x1d2870: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2874u; }
        if (ctx->pc != 0x1D2874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2874u; }
        if (ctx->pc != 0x1D2874u) { return; }
    }
    ctx->pc = 0x1D2874u;
    // 0x1d2874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d2874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2878: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1D2878u;
    SET_GPR_U32(ctx, 31, 0x1D2880u);
    ctx->pc = 0x1D287Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2878u;
            // 0x1d287c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2880u; }
        if (ctx->pc != 0x1D2880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2880u; }
        if (ctx->pc != 0x1D2880u) { return; }
    }
    ctx->pc = 0x1D2880u;
    // 0x1d2880: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d2880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d2884: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d2884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2888: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1D2888u;
    SET_GPR_U32(ctx, 31, 0x1D2890u);
    ctx->pc = 0x1D288Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2888u;
            // 0x1d288c: 0xac221d40  sw          $v0, 0x1D40($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2890u; }
        if (ctx->pc != 0x1D2890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2890u; }
        if (ctx->pc != 0x1D2890u) { return; }
    }
    ctx->pc = 0x1D2890u;
    // 0x1d2890: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d2894: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d2894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2898: 0xac221d44  sw          $v0, 0x1D44($at)
    ctx->pc = 0x1d2898u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7492), GPR_U32(ctx, 2));
    // 0x1d289c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28a0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d28a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d28a4: 0x8c271d40  lw          $a3, 0x1D40($at)
    ctx->pc = 0x1d28a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7488)));
    // 0x1d28a8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d28a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d28ac: 0x8c281d44  lw          $t0, 0x1D44($at)
    ctx->pc = 0x1d28acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7492)));
    // 0x1d28b0: 0xc060614  jal         func_181850
    ctx->pc = 0x1D28B0u;
    SET_GPR_U32(ctx, 31, 0x1D28B8u);
    ctx->pc = 0x1D28B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28B0u;
            // 0x1d28b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28B8u; }
        if (ctx->pc != 0x1D28B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28B8u; }
        if (ctx->pc != 0x1D28B8u) { return; }
    }
    ctx->pc = 0x1D28B8u;
    // 0x1d28b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d28b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28bc: 0xc06060c  jal         func_181830
    ctx->pc = 0x1D28BCu;
    SET_GPR_U32(ctx, 31, 0x1D28C4u);
    ctx->pc = 0x1D28C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28BCu;
            // 0x1d28c0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28C4u; }
        if (ctx->pc != 0x1D28C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28C4u; }
        if (ctx->pc != 0x1D28C4u) { return; }
    }
    ctx->pc = 0x1D28C4u;
    // 0x1d28c4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d28c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d28c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d28c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d28ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28d0: 0xc060604  jal         func_181810
    ctx->pc = 0x1D28D0u;
    SET_GPR_U32(ctx, 31, 0x1D28D8u);
    ctx->pc = 0x1D28D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28D0u;
            // 0x1d28d4: 0x24c6aad0  addiu       $a2, $a2, -0x5530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28D8u; }
        if (ctx->pc != 0x1D28D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28D8u; }
        if (ctx->pc != 0x1D28D8u) { return; }
    }
    ctx->pc = 0x1D28D8u;
    // 0x1d28d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d28d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28e0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1D28E0u;
    SET_GPR_U32(ctx, 31, 0x1D28E8u);
    ctx->pc = 0x1D28E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28E0u;
            // 0x1d28e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28E8u; }
        if (ctx->pc != 0x1D28E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28E8u; }
        if (ctx->pc != 0x1D28E8u) { return; }
    }
    ctx->pc = 0x1D28E8u;
    // 0x1d28e8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1d28e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1d28ec: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1D28ECu;
    SET_GPR_U32(ctx, 31, 0x1D28F4u);
    ctx->pc = 0x1D28F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28ECu;
            // 0x1d28f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28F4u; }
        if (ctx->pc != 0x1D28F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28F4u; }
        if (ctx->pc != 0x1D28F4u) { return; }
    }
    ctx->pc = 0x1D28F4u;
    // 0x1d28f4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1D28F4u;
    SET_GPR_U32(ctx, 31, 0x1D28FCu);
    ctx->pc = 0x1D28F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28F4u;
            // 0x1d28f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28FCu; }
        if (ctx->pc != 0x1D28FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28FCu; }
        if (ctx->pc != 0x1D28FCu) { return; }
    }
    ctx->pc = 0x1D28FCu;
    // 0x1d28fc: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1d28fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d2900: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d2900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2904: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d2904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d2908: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1d2908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1d290c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1D290Cu;
    SET_GPR_U32(ctx, 31, 0x1D2914u);
    ctx->pc = 0x1D2910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D290Cu;
            // 0x1d2910: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2914u; }
        if (ctx->pc != 0x1D2914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2914u; }
        if (ctx->pc != 0x1D2914u) { return; }
    }
    ctx->pc = 0x1D2914u;
    // 0x1d2914: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d2914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d291c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d291cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2920: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2920u;
            // 0x1d2924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D2928u;
}
