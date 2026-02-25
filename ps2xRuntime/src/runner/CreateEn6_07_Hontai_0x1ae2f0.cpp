#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_07_Hontai
// Address: 0x1ae2f0 - 0x1ae3e0
void CreateEn6_07_Hontai_0x1ae2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_07_Hontai_0x1ae2f0");
#endif

    ctx->pc = 0x1ae2f0u;

    // 0x1ae2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae2f4: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x1ae2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1ae2f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ae2fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae300: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AE300u;
    SET_GPR_U32(ctx, 31, 0x1AE308u);
    ctx->pc = 0x1AE304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE300u;
            // 0x1ae304: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE308u; }
        if (ctx->pc != 0x1AE308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE308u; }
        if (ctx->pc != 0x1AE308u) { return; }
    }
    ctx->pc = 0x1AE308u;
    // 0x1ae308: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ae308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae30c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1ae30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1ae310: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1ae310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1ae314: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1AE314u;
    SET_GPR_U32(ctx, 31, 0x1AE31Cu);
    ctx->pc = 0x1AE318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE314u;
            // 0x1ae318: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE31Cu; }
        if (ctx->pc != 0x1AE31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE31Cu; }
        if (ctx->pc != 0x1AE31Cu) { return; }
    }
    ctx->pc = 0x1AE31Cu;
    // 0x1ae31c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1AE31Cu;
    SET_GPR_U32(ctx, 31, 0x1AE324u);
    ctx->pc = 0x1AE320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE31Cu;
            // 0x1ae320: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE324u; }
        if (ctx->pc != 0x1AE324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE324u; }
        if (ctx->pc != 0x1AE324u) { return; }
    }
    ctx->pc = 0x1AE324u;
    // 0x1ae324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae328: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ae328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ae32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae330: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1AE330u;
    SET_GPR_U32(ctx, 31, 0x1AE338u);
    ctx->pc = 0x1AE334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE330u;
            // 0x1ae334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE338u; }
        if (ctx->pc != 0x1AE338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE338u; }
        if (ctx->pc != 0x1AE338u) { return; }
    }
    ctx->pc = 0x1AE338u;
    // 0x1ae338: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1AE338u;
    SET_GPR_U32(ctx, 31, 0x1AE340u);
    ctx->pc = 0x1AE33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE338u;
            // 0x1ae33c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE340u; }
        if (ctx->pc != 0x1AE340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE340u; }
        if (ctx->pc != 0x1AE340u) { return; }
    }
    ctx->pc = 0x1AE340u;
    // 0x1ae340: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ae340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ae344: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ae344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ae348: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1AE348u;
    SET_GPR_U32(ctx, 31, 0x1AE350u);
    ctx->pc = 0x1AE34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE348u;
            // 0x1ae34c: 0xac221b18  sw          $v0, 0x1B18($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE350u; }
        if (ctx->pc != 0x1AE350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE350u; }
        if (ctx->pc != 0x1AE350u) { return; }
    }
    ctx->pc = 0x1AE350u;
    // 0x1ae350: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ae350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ae354: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ae354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae358: 0xac221b1c  sw          $v0, 0x1B1C($at)
    ctx->pc = 0x1ae358u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6940), GPR_U32(ctx, 2));
    // 0x1ae35c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae360: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ae360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ae364: 0x8c271b18  lw          $a3, 0x1B18($at)
    ctx->pc = 0x1ae364u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6936)));
    // 0x1ae368: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ae368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ae36c: 0x8c281b1c  lw          $t0, 0x1B1C($at)
    ctx->pc = 0x1ae36cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6940)));
    // 0x1ae370: 0xc060614  jal         func_181850
    ctx->pc = 0x1AE370u;
    SET_GPR_U32(ctx, 31, 0x1AE378u);
    ctx->pc = 0x1AE374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE370u;
            // 0x1ae374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE378u; }
        if (ctx->pc != 0x1AE378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE378u; }
        if (ctx->pc != 0x1AE378u) { return; }
    }
    ctx->pc = 0x1AE378u;
    // 0x1ae378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae37c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1AE37Cu;
    SET_GPR_U32(ctx, 31, 0x1AE384u);
    ctx->pc = 0x1AE380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE37Cu;
            // 0x1ae380: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE384u; }
        if (ctx->pc != 0x1AE384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE384u; }
        if (ctx->pc != 0x1AE384u) { return; }
    }
    ctx->pc = 0x1AE384u;
    // 0x1ae384: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1ae384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1ae388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae390: 0xc060604  jal         func_181810
    ctx->pc = 0x1AE390u;
    SET_GPR_U32(ctx, 31, 0x1AE398u);
    ctx->pc = 0x1AE394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE390u;
            // 0x1ae394: 0x24c6a9a0  addiu       $a2, $a2, -0x5660 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE398u; }
        if (ctx->pc != 0x1AE398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE398u; }
        if (ctx->pc != 0x1AE398u) { return; }
    }
    ctx->pc = 0x1AE398u;
    // 0x1ae398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae39c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3a0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1AE3A0u;
    SET_GPR_U32(ctx, 31, 0x1AE3A8u);
    ctx->pc = 0x1AE3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3A0u;
            // 0x1ae3a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3A8u; }
        if (ctx->pc != 0x1AE3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3A8u; }
        if (ctx->pc != 0x1AE3A8u) { return; }
    }
    ctx->pc = 0x1AE3A8u;
    // 0x1ae3a8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1ae3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1ae3ac: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1AE3ACu;
    SET_GPR_U32(ctx, 31, 0x1AE3B4u);
    ctx->pc = 0x1AE3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3ACu;
            // 0x1ae3b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3B4u; }
        if (ctx->pc != 0x1AE3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3B4u; }
        if (ctx->pc != 0x1AE3B4u) { return; }
    }
    ctx->pc = 0x1AE3B4u;
    // 0x1ae3b4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1AE3B4u;
    SET_GPR_U32(ctx, 31, 0x1AE3BCu);
    ctx->pc = 0x1AE3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3B4u;
            // 0x1ae3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3BCu; }
        if (ctx->pc != 0x1AE3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3BCu; }
        if (ctx->pc != 0x1AE3BCu) { return; }
    }
    ctx->pc = 0x1AE3BCu;
    // 0x1ae3bc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1AE3BCu;
    SET_GPR_U32(ctx, 31, 0x1AE3C4u);
    ctx->pc = 0x1AE3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3BCu;
            // 0x1ae3c0: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3C4u; }
        if (ctx->pc != 0x1AE3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3C4u; }
        if (ctx->pc != 0x1AE3C4u) { return; }
    }
    ctx->pc = 0x1AE3C4u;
    // 0x1ae3c4: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1AE3C4u;
    SET_GPR_U32(ctx, 31, 0x1AE3CCu);
    ctx->pc = 0x1AE3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3C4u;
            // 0x1ae3c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3CCu; }
        if (ctx->pc != 0x1AE3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE3CCu; }
        if (ctx->pc != 0x1AE3CCu) { return; }
    }
    ctx->pc = 0x1AE3CCu;
    // 0x1ae3cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae3d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae3d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3D8u;
            // 0x1ae3dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE3E0u;
}
