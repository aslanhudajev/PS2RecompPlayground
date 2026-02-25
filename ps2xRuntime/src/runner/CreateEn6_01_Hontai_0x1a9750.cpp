#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_01_Hontai
// Address: 0x1a9750 - 0x1a9848
void CreateEn6_01_Hontai_0x1a9750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_01_Hontai_0x1a9750");
#endif

    ctx->pc = 0x1a9750u;

    // 0x1a9750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9754: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1a9754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1a9758: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a975c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9760: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A9760u;
    SET_GPR_U32(ctx, 31, 0x1A9768u);
    ctx->pc = 0x1A9764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9760u;
            // 0x1a9764: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9768u; }
        if (ctx->pc != 0x1A9768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9768u; }
        if (ctx->pc != 0x1A9768u) { return; }
    }
    ctx->pc = 0x1A9768u;
    // 0x1a9768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a9768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a976c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1a976cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1a9770: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1a9770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1a9774: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1A9774u;
    SET_GPR_U32(ctx, 31, 0x1A977Cu);
    ctx->pc = 0x1A9778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9774u;
            // 0x1a9778: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A977Cu; }
        if (ctx->pc != 0x1A977Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A977Cu; }
        if (ctx->pc != 0x1A977Cu) { return; }
    }
    ctx->pc = 0x1A977Cu;
    // 0x1a977c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A977Cu;
    SET_GPR_U32(ctx, 31, 0x1A9784u);
    ctx->pc = 0x1A9780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A977Cu;
            // 0x1a9780: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9784u; }
        if (ctx->pc != 0x1A9784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9784u; }
        if (ctx->pc != 0x1A9784u) { return; }
    }
    ctx->pc = 0x1A9784u;
    // 0x1a9784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a9784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9788: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a9788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a978c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a978cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9790: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1A9790u;
    SET_GPR_U32(ctx, 31, 0x1A9798u);
    ctx->pc = 0x1A9794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9790u;
            // 0x1a9794: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9798u; }
        if (ctx->pc != 0x1A9798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9798u; }
        if (ctx->pc != 0x1A9798u) { return; }
    }
    ctx->pc = 0x1A9798u;
    // 0x1a9798: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1A9798u;
    SET_GPR_U32(ctx, 31, 0x1A97A0u);
    ctx->pc = 0x1A979Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9798u;
            // 0x1a979c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97A0u; }
        if (ctx->pc != 0x1A97A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97A0u; }
        if (ctx->pc != 0x1A97A0u) { return; }
    }
    ctx->pc = 0x1A97A0u;
    // 0x1a97a0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a97a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a97a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a97a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a97a8: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1A97A8u;
    SET_GPR_U32(ctx, 31, 0x1A97B0u);
    ctx->pc = 0x1A97ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97A8u;
            // 0x1a97ac: 0xac221af0  sw          $v0, 0x1AF0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97B0u; }
        if (ctx->pc != 0x1A97B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97B0u; }
        if (ctx->pc != 0x1A97B0u) { return; }
    }
    ctx->pc = 0x1A97B0u;
    // 0x1a97b0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a97b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a97b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a97b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97b8: 0xac221af4  sw          $v0, 0x1AF4($at)
    ctx->pc = 0x1a97b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6900), GPR_U32(ctx, 2));
    // 0x1a97bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a97bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97c0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a97c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a97c4: 0x8c271af0  lw          $a3, 0x1AF0($at)
    ctx->pc = 0x1a97c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6896)));
    // 0x1a97c8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a97c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a97cc: 0x8c281af4  lw          $t0, 0x1AF4($at)
    ctx->pc = 0x1a97ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6900)));
    // 0x1a97d0: 0xc060614  jal         func_181850
    ctx->pc = 0x1A97D0u;
    SET_GPR_U32(ctx, 31, 0x1A97D8u);
    ctx->pc = 0x1A97D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97D0u;
            // 0x1a97d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97D8u; }
        if (ctx->pc != 0x1A97D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97D8u; }
        if (ctx->pc != 0x1A97D8u) { return; }
    }
    ctx->pc = 0x1A97D8u;
    // 0x1a97d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a97d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97dc: 0xc06060c  jal         func_181830
    ctx->pc = 0x1A97DCu;
    SET_GPR_U32(ctx, 31, 0x1A97E4u);
    ctx->pc = 0x1A97E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97DCu;
            // 0x1a97e0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97E4u; }
        if (ctx->pc != 0x1A97E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97E4u; }
        if (ctx->pc != 0x1A97E4u) { return; }
    }
    ctx->pc = 0x1A97E4u;
    // 0x1a97e4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a97e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1a97e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a97e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a97ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a97f0: 0xc060604  jal         func_181810
    ctx->pc = 0x1A97F0u;
    SET_GPR_U32(ctx, 31, 0x1A97F8u);
    ctx->pc = 0x1A97F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A97F0u;
            // 0x1a97f4: 0x24c6a978  addiu       $a2, $a2, -0x5688 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97F8u; }
        if (ctx->pc != 0x1A97F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97F8u; }
        if (ctx->pc != 0x1A97F8u) { return; }
    }
    ctx->pc = 0x1A97F8u;
    // 0x1a97f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a97f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a97fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9800: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1A9800u;
    SET_GPR_U32(ctx, 31, 0x1A9808u);
    ctx->pc = 0x1A9804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9800u;
            // 0x1a9804: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9808u; }
        if (ctx->pc != 0x1A9808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9808u; }
        if (ctx->pc != 0x1A9808u) { return; }
    }
    ctx->pc = 0x1A9808u;
    // 0x1a9808: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1a9808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1a980c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1A980Cu;
    SET_GPR_U32(ctx, 31, 0x1A9814u);
    ctx->pc = 0x1A9810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A980Cu;
            // 0x1a9810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9814u; }
        if (ctx->pc != 0x1A9814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9814u; }
        if (ctx->pc != 0x1A9814u) { return; }
    }
    ctx->pc = 0x1A9814u;
    // 0x1a9814: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1A9814u;
    SET_GPR_U32(ctx, 31, 0x1A981Cu);
    ctx->pc = 0x1A9818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9814u;
            // 0x1a9818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A981Cu; }
        if (ctx->pc != 0x1A981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A981Cu; }
        if (ctx->pc != 0x1A981Cu) { return; }
    }
    ctx->pc = 0x1A981Cu;
    // 0x1a981c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1a981cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a9820: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a9820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9824: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a9824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a9828: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1a9828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a982c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1A982Cu;
    SET_GPR_U32(ctx, 31, 0x1A9834u);
    ctx->pc = 0x1A9830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A982Cu;
            // 0x1a9830: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9834u; }
        if (ctx->pc != 0x1A9834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9834u; }
        if (ctx->pc != 0x1A9834u) { return; }
    }
    ctx->pc = 0x1A9834u;
    // 0x1a9834: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a983c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a983cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9840: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9840u;
            // 0x1a9844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9848u;
}
