#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn3_04_Hontai
// Address: 0x19f2b0 - 0x19f3a8
void CreateEn3_04_Hontai_0x19f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn3_04_Hontai_0x19f2b0");
#endif

    ctx->pc = 0x19f2b0u;

    // 0x19f2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f2b4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x19f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x19f2b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f2bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f2c0: 0xc060694  jal         func_181A50
    ctx->pc = 0x19F2C0u;
    SET_GPR_U32(ctx, 31, 0x19F2C8u);
    ctx->pc = 0x19F2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2C0u;
            // 0x19f2c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2C8u; }
        if (ctx->pc != 0x19F2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2C8u; }
        if (ctx->pc != 0x19F2C8u) { return; }
    }
    ctx->pc = 0x19F2C8u;
    // 0x19f2c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19f2c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2cc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x19f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x19f2d0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x19f2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x19f2d4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x19F2D4u;
    SET_GPR_U32(ctx, 31, 0x19F2DCu);
    ctx->pc = 0x19F2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2D4u;
            // 0x19f2d8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2DCu; }
        if (ctx->pc != 0x19F2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2DCu; }
        if (ctx->pc != 0x19F2DCu) { return; }
    }
    ctx->pc = 0x19F2DCu;
    // 0x19f2dc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x19F2DCu;
    SET_GPR_U32(ctx, 31, 0x19F2E4u);
    ctx->pc = 0x19F2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2DCu;
            // 0x19f2e0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2E4u; }
        if (ctx->pc != 0x19F2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2E4u; }
        if (ctx->pc != 0x19F2E4u) { return; }
    }
    ctx->pc = 0x19F2E4u;
    // 0x19f2e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2f0: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x19F2F0u;
    SET_GPR_U32(ctx, 31, 0x19F2F8u);
    ctx->pc = 0x19F2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2F0u;
            // 0x19f2f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2F8u; }
        if (ctx->pc != 0x19F2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F2F8u; }
        if (ctx->pc != 0x19F2F8u) { return; }
    }
    ctx->pc = 0x19F2F8u;
    // 0x19f2f8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x19F2F8u;
    SET_GPR_U32(ctx, 31, 0x19F300u);
    ctx->pc = 0x19F2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F2F8u;
            // 0x19f2fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F300u; }
        if (ctx->pc != 0x19F300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F300u; }
        if (ctx->pc != 0x19F300u) { return; }
    }
    ctx->pc = 0x19F300u;
    // 0x19f300: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19f300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19f304: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19f304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f308: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x19F308u;
    SET_GPR_U32(ctx, 31, 0x19F310u);
    ctx->pc = 0x19F30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F308u;
            // 0x19f30c: 0xac221aa0  sw          $v0, 0x1AA0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6816), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F310u; }
        if (ctx->pc != 0x19F310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F310u; }
        if (ctx->pc != 0x19F310u) { return; }
    }
    ctx->pc = 0x19F310u;
    // 0x19f310: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19f310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19f314: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19f314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f318: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x19f318u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6820), GPR_U32(ctx, 2));
    // 0x19f31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f320: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19f320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19f324: 0x8c271aa0  lw          $a3, 0x1AA0($at)
    ctx->pc = 0x19f324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6816)));
    // 0x19f328: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19f328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19f32c: 0x8c281aa4  lw          $t0, 0x1AA4($at)
    ctx->pc = 0x19f32cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6820)));
    // 0x19f330: 0xc060614  jal         func_181850
    ctx->pc = 0x19F330u;
    SET_GPR_U32(ctx, 31, 0x19F338u);
    ctx->pc = 0x19F334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F330u;
            // 0x19f334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F338u; }
        if (ctx->pc != 0x19F338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F338u; }
        if (ctx->pc != 0x19F338u) { return; }
    }
    ctx->pc = 0x19F338u;
    // 0x19f338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f33c: 0xc06060c  jal         func_181830
    ctx->pc = 0x19F33Cu;
    SET_GPR_U32(ctx, 31, 0x19F344u);
    ctx->pc = 0x19F340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F33Cu;
            // 0x19f340: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F344u; }
        if (ctx->pc != 0x19F344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F344u; }
        if (ctx->pc != 0x19F344u) { return; }
    }
    ctx->pc = 0x19F344u;
    // 0x19f344: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x19f344u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x19f348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f34c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f350: 0xc060604  jal         func_181810
    ctx->pc = 0x19F350u;
    SET_GPR_U32(ctx, 31, 0x19F358u);
    ctx->pc = 0x19F354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F350u;
            // 0x19f354: 0x24c6a928  addiu       $a2, $a2, -0x56D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F358u; }
        if (ctx->pc != 0x19F358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F358u; }
        if (ctx->pc != 0x19F358u) { return; }
    }
    ctx->pc = 0x19F358u;
    // 0x19f358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f360: 0xc0605dc  jal         func_181770
    ctx->pc = 0x19F360u;
    SET_GPR_U32(ctx, 31, 0x19F368u);
    ctx->pc = 0x19F364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F360u;
            // 0x19f364: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F368u; }
        if (ctx->pc != 0x19F368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F368u; }
        if (ctx->pc != 0x19F368u) { return; }
    }
    ctx->pc = 0x19F368u;
    // 0x19f368: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x19f368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x19f36c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x19F36Cu;
    SET_GPR_U32(ctx, 31, 0x19F374u);
    ctx->pc = 0x19F370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F36Cu;
            // 0x19f370: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F374u; }
        if (ctx->pc != 0x19F374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F374u; }
        if (ctx->pc != 0x19F374u) { return; }
    }
    ctx->pc = 0x19F374u;
    // 0x19f374: 0xc0605cc  jal         func_181730
    ctx->pc = 0x19F374u;
    SET_GPR_U32(ctx, 31, 0x19F37Cu);
    ctx->pc = 0x19F378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F374u;
            // 0x19f378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F37Cu; }
        if (ctx->pc != 0x19F37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F37Cu; }
        if (ctx->pc != 0x19F37Cu) { return; }
    }
    ctx->pc = 0x19F37Cu;
    // 0x19f37c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x19f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19f380: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19f380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f388: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x19f388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19f38c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x19F38Cu;
    SET_GPR_U32(ctx, 31, 0x19F394u);
    ctx->pc = 0x19F390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F38Cu;
            // 0x19f390: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F394u; }
        if (ctx->pc != 0x19F394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F394u; }
        if (ctx->pc != 0x19F394u) { return; }
    }
    ctx->pc = 0x19F394u;
    // 0x19f394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3A0u;
            // 0x19f3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F3A8u;
}
