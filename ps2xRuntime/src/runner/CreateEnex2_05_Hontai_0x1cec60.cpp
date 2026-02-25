#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex2_05_Hontai
// Address: 0x1cec60 - 0x1ced58
void CreateEnex2_05_Hontai_0x1cec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex2_05_Hontai_0x1cec60");
#endif

    ctx->pc = 0x1cec60u;

    // 0x1cec60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cec64: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1cec64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1cec68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cec6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cec70: 0xc060694  jal         func_181A50
    ctx->pc = 0x1CEC70u;
    SET_GPR_U32(ctx, 31, 0x1CEC78u);
    ctx->pc = 0x1CEC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC70u;
            // 0x1cec74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC78u; }
        if (ctx->pc != 0x1CEC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC78u; }
        if (ctx->pc != 0x1CEC78u) { return; }
    }
    ctx->pc = 0x1CEC78u;
    // 0x1cec78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cec78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec7c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1cec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1cec80: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1cec80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1cec84: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1CEC84u;
    SET_GPR_U32(ctx, 31, 0x1CEC8Cu);
    ctx->pc = 0x1CEC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC84u;
            // 0x1cec88: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC8Cu; }
        if (ctx->pc != 0x1CEC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC8Cu; }
        if (ctx->pc != 0x1CEC8Cu) { return; }
    }
    ctx->pc = 0x1CEC8Cu;
    // 0x1cec8c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1CEC8Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC94u);
    ctx->pc = 0x1CEC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEC8Cu;
            // 0x1cec90: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC94u; }
        if (ctx->pc != 0x1CEC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC94u; }
        if (ctx->pc != 0x1CEC94u) { return; }
    }
    ctx->pc = 0x1CEC94u;
    // 0x1cec94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cec94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cec98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cec9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cec9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceca0: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1CECA0u;
    SET_GPR_U32(ctx, 31, 0x1CECA8u);
    ctx->pc = 0x1CECA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECA0u;
            // 0x1ceca4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECA8u; }
        if (ctx->pc != 0x1CECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECA8u; }
        if (ctx->pc != 0x1CECA8u) { return; }
    }
    ctx->pc = 0x1CECA8u;
    // 0x1ceca8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1CECA8u;
    SET_GPR_U32(ctx, 31, 0x1CECB0u);
    ctx->pc = 0x1CECACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECA8u;
            // 0x1cecac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECB0u; }
        if (ctx->pc != 0x1CECB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECB0u; }
        if (ctx->pc != 0x1CECB0u) { return; }
    }
    ctx->pc = 0x1CECB0u;
    // 0x1cecb0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cecb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cecb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cecb8: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1CECB8u;
    SET_GPR_U32(ctx, 31, 0x1CECC0u);
    ctx->pc = 0x1CECBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECB8u;
            // 0x1cecbc: 0xac221d28  sw          $v0, 0x1D28($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECC0u; }
        if (ctx->pc != 0x1CECC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECC0u; }
        if (ctx->pc != 0x1CECC0u) { return; }
    }
    ctx->pc = 0x1CECC0u;
    // 0x1cecc0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cecc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cecc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecc8: 0xac221d2c  sw          $v0, 0x1D2C($at)
    ctx->pc = 0x1cecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7468), GPR_U32(ctx, 2));
    // 0x1ceccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cecccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecd0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cecd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cecd4: 0x8c271d28  lw          $a3, 0x1D28($at)
    ctx->pc = 0x1cecd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7464)));
    // 0x1cecd8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cecd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cecdc: 0x8c281d2c  lw          $t0, 0x1D2C($at)
    ctx->pc = 0x1cecdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7468)));
    // 0x1cece0: 0xc060614  jal         func_181850
    ctx->pc = 0x1CECE0u;
    SET_GPR_U32(ctx, 31, 0x1CECE8u);
    ctx->pc = 0x1CECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECE0u;
            // 0x1cece4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECE8u; }
        if (ctx->pc != 0x1CECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECE8u; }
        if (ctx->pc != 0x1CECE8u) { return; }
    }
    ctx->pc = 0x1CECE8u;
    // 0x1cece8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cece8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecec: 0xc06060c  jal         func_181830
    ctx->pc = 0x1CECECu;
    SET_GPR_U32(ctx, 31, 0x1CECF4u);
    ctx->pc = 0x1CECF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CECECu;
            // 0x1cecf0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECF4u; }
        if (ctx->pc != 0x1CECF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CECF4u; }
        if (ctx->pc != 0x1CECF4u) { return; }
    }
    ctx->pc = 0x1CECF4u;
    // 0x1cecf4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1cecf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1cecf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cecf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ced00: 0xc060604  jal         func_181810
    ctx->pc = 0x1CED00u;
    SET_GPR_U32(ctx, 31, 0x1CED08u);
    ctx->pc = 0x1CED04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED00u;
            // 0x1ced04: 0x24c6aab8  addiu       $a2, $a2, -0x5548 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED08u; }
        if (ctx->pc != 0x1CED08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED08u; }
        if (ctx->pc != 0x1CED08u) { return; }
    }
    ctx->pc = 0x1CED08u;
    // 0x1ced08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ced08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ced0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced10: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1CED10u;
    SET_GPR_U32(ctx, 31, 0x1CED18u);
    ctx->pc = 0x1CED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED10u;
            // 0x1ced14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED18u; }
        if (ctx->pc != 0x1CED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED18u; }
        if (ctx->pc != 0x1CED18u) { return; }
    }
    ctx->pc = 0x1CED18u;
    // 0x1ced18: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1ced18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1ced1c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1CED1Cu;
    SET_GPR_U32(ctx, 31, 0x1CED24u);
    ctx->pc = 0x1CED20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED1Cu;
            // 0x1ced20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED24u; }
        if (ctx->pc != 0x1CED24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED24u; }
        if (ctx->pc != 0x1CED24u) { return; }
    }
    ctx->pc = 0x1CED24u;
    // 0x1ced24: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1CED24u;
    SET_GPR_U32(ctx, 31, 0x1CED2Cu);
    ctx->pc = 0x1CED28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED24u;
            // 0x1ced28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED2Cu; }
        if (ctx->pc != 0x1CED2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED2Cu; }
        if (ctx->pc != 0x1CED2Cu) { return; }
    }
    ctx->pc = 0x1CED2Cu;
    // 0x1ced2c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ced2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ced30: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ced30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ced34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ced34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced38: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x1ced38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ced3c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1CED3Cu;
    SET_GPR_U32(ctx, 31, 0x1CED44u);
    ctx->pc = 0x1CED40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED3Cu;
            // 0x1ced40: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED44u; }
        if (ctx->pc != 0x1CED44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CED44u; }
        if (ctx->pc != 0x1CED44u) { return; }
    }
    ctx->pc = 0x1CED44u;
    // 0x1ced44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ced44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ced48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ced48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ced4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ced4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ced50: 0x3e00008  jr          $ra
    ctx->pc = 0x1CED50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CED50u;
            // 0x1ced54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CED58u;
}
