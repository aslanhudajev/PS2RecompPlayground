#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStageex1Boss_Hontai
// Address: 0x1d5d80 - 0x1d6100
void CreateStageex1Boss_Hontai_0x1d5d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStageex1Boss_Hontai_0x1d5d80");
#endif

    ctx->pc = 0x1d5d80u;

    // 0x1d5d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5d84: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1d5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1d5d88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5d8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5d90: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D5D90u;
    SET_GPR_U32(ctx, 31, 0x1D5D98u);
    ctx->pc = 0x1D5D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D90u;
            // 0x1d5d94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D98u; }
        if (ctx->pc != 0x1D5D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D98u; }
        if (ctx->pc != 0x1D5D98u) { return; }
    }
    ctx->pc = 0x1D5D98u;
    // 0x1d5d98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d5d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d9c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1d5d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1d5da0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1d5da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1d5da4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1D5DA4u;
    SET_GPR_U32(ctx, 31, 0x1D5DACu);
    ctx->pc = 0x1D5DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DA4u;
            // 0x1d5da8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DACu; }
        if (ctx->pc != 0x1D5DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DACu; }
        if (ctx->pc != 0x1D5DACu) { return; }
    }
    ctx->pc = 0x1D5DACu;
    // 0x1d5dac: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1D5DACu;
    SET_GPR_U32(ctx, 31, 0x1D5DB4u);
    ctx->pc = 0x1D5DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DACu;
            // 0x1d5db0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DB4u; }
        if (ctx->pc != 0x1D5DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DB4u; }
        if (ctx->pc != 0x1D5DB4u) { return; }
    }
    ctx->pc = 0x1D5DB4u;
    // 0x1d5db4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1D5DB8u;
    SET_GPR_U32(ctx, 31, 0x1D5DC0u);
    ctx->pc = 0x1D5DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DB8u;
            // 0x1d5dbc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DC0u; }
        if (ctx->pc != 0x1D5DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DC0u; }
        if (ctx->pc != 0x1D5DC0u) { return; }
    }
    ctx->pc = 0x1D5DC0u;
    // 0x1d5dc0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5dc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5dc8: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1D5DC8u;
    SET_GPR_U32(ctx, 31, 0x1D5DD0u);
    ctx->pc = 0x1D5DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DC8u;
            // 0x1d5dcc: 0xac221d50  sw          $v0, 0x1D50($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DD0u; }
        if (ctx->pc != 0x1D5DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DD0u; }
        if (ctx->pc != 0x1D5DD0u) { return; }
    }
    ctx->pc = 0x1D5DD0u;
    // 0x1d5dd0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5dd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d5dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dd8: 0xac221d54  sw          $v0, 0x1D54($at)
    ctx->pc = 0x1d5dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7508), GPR_U32(ctx, 2));
    // 0x1d5ddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5de0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5de4: 0x8c271d50  lw          $a3, 0x1D50($at)
    ctx->pc = 0x1d5de4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7504)));
    // 0x1d5de8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5dec: 0x8c281d54  lw          $t0, 0x1D54($at)
    ctx->pc = 0x1d5decu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7508)));
    // 0x1d5df0: 0xc060614  jal         func_181850
    ctx->pc = 0x1D5DF0u;
    SET_GPR_U32(ctx, 31, 0x1D5DF8u);
    ctx->pc = 0x1D5DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DF0u;
            // 0x1d5df4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DF8u; }
        if (ctx->pc != 0x1D5DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DF8u; }
        if (ctx->pc != 0x1D5DF8u) { return; }
    }
    ctx->pc = 0x1D5DF8u;
    // 0x1d5df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dfc: 0xc06060c  jal         func_181830
    ctx->pc = 0x1D5DFCu;
    SET_GPR_U32(ctx, 31, 0x1D5E04u);
    ctx->pc = 0x1D5E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DFCu;
            // 0x1d5e00: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E04u; }
        if (ctx->pc != 0x1D5E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E04u; }
        if (ctx->pc != 0x1D5E04u) { return; }
    }
    ctx->pc = 0x1D5E04u;
    // 0x1d5e04: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d5e04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d5e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e10: 0xc060604  jal         func_181810
    ctx->pc = 0x1D5E10u;
    SET_GPR_U32(ctx, 31, 0x1D5E18u);
    ctx->pc = 0x1D5E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E10u;
            // 0x1d5e14: 0x24c6aae0  addiu       $a2, $a2, -0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E18u; }
        if (ctx->pc != 0x1D5E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E18u; }
        if (ctx->pc != 0x1D5E18u) { return; }
    }
    ctx->pc = 0x1D5E18u;
    // 0x1d5e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e20: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1D5E20u;
    SET_GPR_U32(ctx, 31, 0x1D5E28u);
    ctx->pc = 0x1D5E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E20u;
            // 0x1d5e24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E28u; }
        if (ctx->pc != 0x1D5E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E28u; }
        if (ctx->pc != 0x1D5E28u) { return; }
    }
    ctx->pc = 0x1D5E28u;
    // 0x1d5e28: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1d5e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1d5e2c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1D5E2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5E34u);
    ctx->pc = 0x1D5E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E2Cu;
            // 0x1d5e30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E34u; }
        if (ctx->pc != 0x1D5E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E34u; }
        if (ctx->pc != 0x1D5E34u) { return; }
    }
    ctx->pc = 0x1D5E34u;
    // 0x1d5e34: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1D5E34u;
    SET_GPR_U32(ctx, 31, 0x1D5E3Cu);
    ctx->pc = 0x1D5E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E34u;
            // 0x1d5e38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E3Cu; }
        if (ctx->pc != 0x1D5E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E3Cu; }
        if (ctx->pc != 0x1D5E3Cu) { return; }
    }
    ctx->pc = 0x1D5E3Cu;
    // 0x1d5e3c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D5E3Cu;
    SET_GPR_U32(ctx, 31, 0x1D5E44u);
    ctx->pc = 0x1D5E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E3Cu;
            // 0x1d5e40: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E44u; }
        if (ctx->pc != 0x1D5E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E44u; }
        if (ctx->pc != 0x1D5E44u) { return; }
    }
    ctx->pc = 0x1D5E44u;
    // 0x1d5e44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d5e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e48: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1d5e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1d5e4c: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1d5e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1d5e50: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1D5E50u;
    SET_GPR_U32(ctx, 31, 0x1D5E58u);
    ctx->pc = 0x1D5E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E50u;
            // 0x1d5e54: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E58u; }
        if (ctx->pc != 0x1D5E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E58u; }
        if (ctx->pc != 0x1D5E58u) { return; }
    }
    ctx->pc = 0x1D5E58u;
    // 0x1d5e58: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1D5E58u;
    SET_GPR_U32(ctx, 31, 0x1D5E60u);
    ctx->pc = 0x1D5E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E58u;
            // 0x1d5e5c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E60u; }
        if (ctx->pc != 0x1D5E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E60u; }
        if (ctx->pc != 0x1D5E60u) { return; }
    }
    ctx->pc = 0x1D5E60u;
    // 0x1d5e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e64: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1D5E64u;
    SET_GPR_U32(ctx, 31, 0x1D5E6Cu);
    ctx->pc = 0x1D5E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E64u;
            // 0x1d5e68: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E6Cu; }
        if (ctx->pc != 0x1D5E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E6Cu; }
        if (ctx->pc != 0x1D5E6Cu) { return; }
    }
    ctx->pc = 0x1D5E6Cu;
    // 0x1d5e6c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5e70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d5e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5e74: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1D5E74u;
    SET_GPR_U32(ctx, 31, 0x1D5E7Cu);
    ctx->pc = 0x1D5E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E74u;
            // 0x1d5e78: 0xac221d50  sw          $v0, 0x1D50($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E7Cu; }
        if (ctx->pc != 0x1D5E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E7Cu; }
        if (ctx->pc != 0x1D5E7Cu) { return; }
    }
    ctx->pc = 0x1D5E7Cu;
    // 0x1d5e7c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5e80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d5e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e84: 0xac221d54  sw          $v0, 0x1D54($at)
    ctx->pc = 0x1d5e84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7508), GPR_U32(ctx, 2));
    // 0x1d5e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e8c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5e90: 0x8c271d50  lw          $a3, 0x1D50($at)
    ctx->pc = 0x1d5e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7504)));
    // 0x1d5e94: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5e98: 0x8c281d54  lw          $t0, 0x1D54($at)
    ctx->pc = 0x1d5e98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7508)));
    // 0x1d5e9c: 0xc060614  jal         func_181850
    ctx->pc = 0x1D5E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D5EA4u);
    ctx->pc = 0x1D5EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E9Cu;
            // 0x1d5ea0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EA4u; }
        if (ctx->pc != 0x1D5EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EA4u; }
        if (ctx->pc != 0x1D5EA4u) { return; }
    }
    ctx->pc = 0x1D5EA4u;
    // 0x1d5ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ea8: 0xc06060c  jal         func_181830
    ctx->pc = 0x1D5EA8u;
    SET_GPR_U32(ctx, 31, 0x1D5EB0u);
    ctx->pc = 0x1D5EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5EA8u;
            // 0x1d5eac: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EB0u; }
        if (ctx->pc != 0x1D5EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EB0u; }
        if (ctx->pc != 0x1D5EB0u) { return; }
    }
    ctx->pc = 0x1D5EB0u;
    // 0x1d5eb0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d5eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d5eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ebc: 0xc060604  jal         func_181810
    ctx->pc = 0x1D5EBCu;
    SET_GPR_U32(ctx, 31, 0x1D5EC4u);
    ctx->pc = 0x1D5EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5EBCu;
            // 0x1d5ec0: 0x24c6aae0  addiu       $a2, $a2, -0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EC4u; }
        if (ctx->pc != 0x1D5EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EC4u; }
        if (ctx->pc != 0x1D5EC4u) { return; }
    }
    ctx->pc = 0x1D5EC4u;
    // 0x1d5ec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ecc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1D5ECCu;
    SET_GPR_U32(ctx, 31, 0x1D5ED4u);
    ctx->pc = 0x1D5ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5ECCu;
            // 0x1d5ed0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5ED4u; }
        if (ctx->pc != 0x1D5ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5ED4u; }
        if (ctx->pc != 0x1D5ED4u) { return; }
    }
    ctx->pc = 0x1D5ED4u;
    // 0x1d5ed4: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1d5ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1d5ed8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1D5ED8u;
    SET_GPR_U32(ctx, 31, 0x1D5EE0u);
    ctx->pc = 0x1D5EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5ED8u;
            // 0x1d5edc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EE0u; }
        if (ctx->pc != 0x1D5EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EE0u; }
        if (ctx->pc != 0x1D5EE0u) { return; }
    }
    ctx->pc = 0x1D5EE0u;
    // 0x1d5ee0: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1D5EE0u;
    SET_GPR_U32(ctx, 31, 0x1D5EE8u);
    ctx->pc = 0x1D5EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5EE0u;
            // 0x1d5ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EE8u; }
        if (ctx->pc != 0x1D5EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EE8u; }
        if (ctx->pc != 0x1D5EE8u) { return; }
    }
    ctx->pc = 0x1D5EE8u;
    // 0x1d5ee8: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D5EE8u;
    SET_GPR_U32(ctx, 31, 0x1D5EF0u);
    ctx->pc = 0x1D5EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5EE8u;
            // 0x1d5eec: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EF0u; }
        if (ctx->pc != 0x1D5EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EF0u; }
        if (ctx->pc != 0x1D5EF0u) { return; }
    }
    ctx->pc = 0x1D5EF0u;
    // 0x1d5ef0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d5ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ef4: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1d5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1d5ef8: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1d5ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1d5efc: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1D5EFCu;
    SET_GPR_U32(ctx, 31, 0x1D5F04u);
    ctx->pc = 0x1D5F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5EFCu;
            // 0x1d5f00: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F04u; }
        if (ctx->pc != 0x1D5F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F04u; }
        if (ctx->pc != 0x1D5F04u) { return; }
    }
    ctx->pc = 0x1D5F04u;
    // 0x1d5f04: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1D5F04u;
    SET_GPR_U32(ctx, 31, 0x1D5F0Cu);
    ctx->pc = 0x1D5F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F04u;
            // 0x1d5f08: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F0Cu; }
        if (ctx->pc != 0x1D5F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F0Cu; }
        if (ctx->pc != 0x1D5F0Cu) { return; }
    }
    ctx->pc = 0x1D5F0Cu;
    // 0x1d5f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f10: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1D5F10u;
    SET_GPR_U32(ctx, 31, 0x1D5F18u);
    ctx->pc = 0x1D5F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F10u;
            // 0x1d5f14: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F18u; }
        if (ctx->pc != 0x1D5F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F18u; }
        if (ctx->pc != 0x1D5F18u) { return; }
    }
    ctx->pc = 0x1D5F18u;
    // 0x1d5f18: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5f1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d5f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5f20: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1D5F20u;
    SET_GPR_U32(ctx, 31, 0x1D5F28u);
    ctx->pc = 0x1D5F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F20u;
            // 0x1d5f24: 0xac221d50  sw          $v0, 0x1D50($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F28u; }
        if (ctx->pc != 0x1D5F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F28u; }
        if (ctx->pc != 0x1D5F28u) { return; }
    }
    ctx->pc = 0x1D5F28u;
    // 0x1d5f28: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5f2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d5f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f30: 0xac221d54  sw          $v0, 0x1D54($at)
    ctx->pc = 0x1d5f30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7508), GPR_U32(ctx, 2));
    // 0x1d5f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f38: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5f3c: 0x8c271d50  lw          $a3, 0x1D50($at)
    ctx->pc = 0x1d5f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7504)));
    // 0x1d5f40: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5f44: 0x8c281d54  lw          $t0, 0x1D54($at)
    ctx->pc = 0x1d5f44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7508)));
    // 0x1d5f48: 0xc060614  jal         func_181850
    ctx->pc = 0x1D5F48u;
    SET_GPR_U32(ctx, 31, 0x1D5F50u);
    ctx->pc = 0x1D5F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F48u;
            // 0x1d5f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F50u; }
        if (ctx->pc != 0x1D5F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F50u; }
        if (ctx->pc != 0x1D5F50u) { return; }
    }
    ctx->pc = 0x1D5F50u;
    // 0x1d5f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f54: 0xc06060c  jal         func_181830
    ctx->pc = 0x1D5F54u;
    SET_GPR_U32(ctx, 31, 0x1D5F5Cu);
    ctx->pc = 0x1D5F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F54u;
            // 0x1d5f58: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F5Cu; }
        if (ctx->pc != 0x1D5F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F5Cu; }
        if (ctx->pc != 0x1D5F5Cu) { return; }
    }
    ctx->pc = 0x1D5F5Cu;
    // 0x1d5f5c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d5f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d5f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5f68: 0xc060604  jal         func_181810
    ctx->pc = 0x1D5F68u;
    SET_GPR_U32(ctx, 31, 0x1D5F70u);
    ctx->pc = 0x1D5F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F68u;
            // 0x1d5f6c: 0x24c6aae0  addiu       $a2, $a2, -0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F70u; }
        if (ctx->pc != 0x1D5F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F70u; }
        if (ctx->pc != 0x1D5F70u) { return; }
    }
    ctx->pc = 0x1D5F70u;
    // 0x1d5f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f78: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1D5F78u;
    SET_GPR_U32(ctx, 31, 0x1D5F80u);
    ctx->pc = 0x1D5F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F78u;
            // 0x1d5f7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F80u; }
        if (ctx->pc != 0x1D5F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F80u; }
        if (ctx->pc != 0x1D5F80u) { return; }
    }
    ctx->pc = 0x1D5F80u;
    // 0x1d5f80: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1d5f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1d5f84: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1D5F84u;
    SET_GPR_U32(ctx, 31, 0x1D5F8Cu);
    ctx->pc = 0x1D5F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F84u;
            // 0x1d5f88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F8Cu; }
        if (ctx->pc != 0x1D5F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F8Cu; }
        if (ctx->pc != 0x1D5F8Cu) { return; }
    }
    ctx->pc = 0x1D5F8Cu;
    // 0x1d5f8c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1D5F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F94u);
    ctx->pc = 0x1D5F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F8Cu;
            // 0x1d5f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F94u; }
        if (ctx->pc != 0x1D5F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F94u; }
        if (ctx->pc != 0x1D5F94u) { return; }
    }
    ctx->pc = 0x1D5F94u;
    // 0x1d5f94: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D5F94u;
    SET_GPR_U32(ctx, 31, 0x1D5F9Cu);
    ctx->pc = 0x1D5F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F94u;
            // 0x1d5f98: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F9Cu; }
        if (ctx->pc != 0x1D5F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F9Cu; }
        if (ctx->pc != 0x1D5F9Cu) { return; }
    }
    ctx->pc = 0x1D5F9Cu;
    // 0x1d5f9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d5f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fa0: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1d5fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1d5fa4: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1d5fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1d5fa8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1D5FA8u;
    SET_GPR_U32(ctx, 31, 0x1D5FB0u);
    ctx->pc = 0x1D5FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FA8u;
            // 0x1d5fac: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FB0u; }
        if (ctx->pc != 0x1D5FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FB0u; }
        if (ctx->pc != 0x1D5FB0u) { return; }
    }
    ctx->pc = 0x1D5FB0u;
    // 0x1d5fb0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1D5FB0u;
    SET_GPR_U32(ctx, 31, 0x1D5FB8u);
    ctx->pc = 0x1D5FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FB0u;
            // 0x1d5fb4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FB8u; }
        if (ctx->pc != 0x1D5FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FB8u; }
        if (ctx->pc != 0x1D5FB8u) { return; }
    }
    ctx->pc = 0x1D5FB8u;
    // 0x1d5fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fbc: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1D5FBCu;
    SET_GPR_U32(ctx, 31, 0x1D5FC4u);
    ctx->pc = 0x1D5FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FBCu;
            // 0x1d5fc0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FC4u; }
        if (ctx->pc != 0x1D5FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FC4u; }
        if (ctx->pc != 0x1D5FC4u) { return; }
    }
    ctx->pc = 0x1D5FC4u;
    // 0x1d5fc4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5fc8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5fcc: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1D5FCCu;
    SET_GPR_U32(ctx, 31, 0x1D5FD4u);
    ctx->pc = 0x1D5FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FCCu;
            // 0x1d5fd0: 0xac221d50  sw          $v0, 0x1D50($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FD4u; }
        if (ctx->pc != 0x1D5FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FD4u; }
        if (ctx->pc != 0x1D5FD4u) { return; }
    }
    ctx->pc = 0x1D5FD4u;
    // 0x1d5fd4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5fd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d5fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fdc: 0xac221d54  sw          $v0, 0x1D54($at)
    ctx->pc = 0x1d5fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7508), GPR_U32(ctx, 2));
    // 0x1d5fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fe4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5fe8: 0x8c271d50  lw          $a3, 0x1D50($at)
    ctx->pc = 0x1d5fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7504)));
    // 0x1d5fec: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d5fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d5ff0: 0x8c281d54  lw          $t0, 0x1D54($at)
    ctx->pc = 0x1d5ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7508)));
    // 0x1d5ff4: 0xc060614  jal         func_181850
    ctx->pc = 0x1D5FF4u;
    SET_GPR_U32(ctx, 31, 0x1D5FFCu);
    ctx->pc = 0x1D5FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FF4u;
            // 0x1d5ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FFCu; }
        if (ctx->pc != 0x1D5FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FFCu; }
        if (ctx->pc != 0x1D5FFCu) { return; }
    }
    ctx->pc = 0x1D5FFCu;
    // 0x1d5ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6000: 0xc06060c  jal         func_181830
    ctx->pc = 0x1D6000u;
    SET_GPR_U32(ctx, 31, 0x1D6008u);
    ctx->pc = 0x1D6004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6000u;
            // 0x1d6004: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6008u; }
        if (ctx->pc != 0x1D6008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6008u; }
        if (ctx->pc != 0x1D6008u) { return; }
    }
    ctx->pc = 0x1D6008u;
    // 0x1d6008: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d6008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d600c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d600cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6010: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d6010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6014: 0xc060604  jal         func_181810
    ctx->pc = 0x1D6014u;
    SET_GPR_U32(ctx, 31, 0x1D601Cu);
    ctx->pc = 0x1D6018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6014u;
            // 0x1d6018: 0x24c6aae0  addiu       $a2, $a2, -0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D601Cu; }
        if (ctx->pc != 0x1D601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D601Cu; }
        if (ctx->pc != 0x1D601Cu) { return; }
    }
    ctx->pc = 0x1D601Cu;
    // 0x1d601c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d601cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6024: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1D6024u;
    SET_GPR_U32(ctx, 31, 0x1D602Cu);
    ctx->pc = 0x1D6028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6024u;
            // 0x1d6028: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D602Cu; }
        if (ctx->pc != 0x1D602Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D602Cu; }
        if (ctx->pc != 0x1D602Cu) { return; }
    }
    ctx->pc = 0x1D602Cu;
    // 0x1d602c: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1d602cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1d6030: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1D6030u;
    SET_GPR_U32(ctx, 31, 0x1D6038u);
    ctx->pc = 0x1D6034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6030u;
            // 0x1d6034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6038u; }
        if (ctx->pc != 0x1D6038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6038u; }
        if (ctx->pc != 0x1D6038u) { return; }
    }
    ctx->pc = 0x1D6038u;
    // 0x1d6038: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1D6038u;
    SET_GPR_U32(ctx, 31, 0x1D6040u);
    ctx->pc = 0x1D603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6038u;
            // 0x1d603c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6040u; }
        if (ctx->pc != 0x1D6040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6040u; }
        if (ctx->pc != 0x1D6040u) { return; }
    }
    ctx->pc = 0x1D6040u;
    // 0x1d6040: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D6040u;
    SET_GPR_U32(ctx, 31, 0x1D6048u);
    ctx->pc = 0x1D6044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6040u;
            // 0x1d6044: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6048u; }
        if (ctx->pc != 0x1D6048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6048u; }
        if (ctx->pc != 0x1D6048u) { return; }
    }
    ctx->pc = 0x1D6048u;
    // 0x1d6048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d6048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d604c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1d604cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1d6050: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1d6050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1d6054: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1D6054u;
    SET_GPR_U32(ctx, 31, 0x1D605Cu);
    ctx->pc = 0x1D6058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6054u;
            // 0x1d6058: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D605Cu; }
        if (ctx->pc != 0x1D605Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D605Cu; }
        if (ctx->pc != 0x1D605Cu) { return; }
    }
    ctx->pc = 0x1D605Cu;
    // 0x1d605c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1D605Cu;
    SET_GPR_U32(ctx, 31, 0x1D6064u);
    ctx->pc = 0x1D6060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D605Cu;
            // 0x1d6060: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6064u; }
        if (ctx->pc != 0x1D6064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6064u; }
        if (ctx->pc != 0x1D6064u) { return; }
    }
    ctx->pc = 0x1D6064u;
    // 0x1d6064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6068: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1D6068u;
    SET_GPR_U32(ctx, 31, 0x1D6070u);
    ctx->pc = 0x1D606Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6068u;
            // 0x1d606c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6070u; }
        if (ctx->pc != 0x1D6070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6070u; }
        if (ctx->pc != 0x1D6070u) { return; }
    }
    ctx->pc = 0x1D6070u;
    // 0x1d6070: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d6070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d6074: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d6074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6078: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1D6078u;
    SET_GPR_U32(ctx, 31, 0x1D6080u);
    ctx->pc = 0x1D607Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6078u;
            // 0x1d607c: 0xac221d50  sw          $v0, 0x1D50($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6080u; }
        if (ctx->pc != 0x1D6080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6080u; }
        if (ctx->pc != 0x1D6080u) { return; }
    }
    ctx->pc = 0x1D6080u;
    // 0x1d6080: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d6080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d6084: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d6084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6088: 0xac221d54  sw          $v0, 0x1D54($at)
    ctx->pc = 0x1d6088u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7508), GPR_U32(ctx, 2));
    // 0x1d608c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d608cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6090: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d6090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d6094: 0x8c271d50  lw          $a3, 0x1D50($at)
    ctx->pc = 0x1d6094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7504)));
    // 0x1d6098: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d6098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d609c: 0x8c281d54  lw          $t0, 0x1D54($at)
    ctx->pc = 0x1d609cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7508)));
    // 0x1d60a0: 0xc060614  jal         func_181850
    ctx->pc = 0x1D60A0u;
    SET_GPR_U32(ctx, 31, 0x1D60A8u);
    ctx->pc = 0x1D60A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60A0u;
            // 0x1d60a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60A8u; }
        if (ctx->pc != 0x1D60A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60A8u; }
        if (ctx->pc != 0x1D60A8u) { return; }
    }
    ctx->pc = 0x1D60A8u;
    // 0x1d60a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d60a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60ac: 0xc06060c  jal         func_181830
    ctx->pc = 0x1D60ACu;
    SET_GPR_U32(ctx, 31, 0x1D60B4u);
    ctx->pc = 0x1D60B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60ACu;
            // 0x1d60b0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60B4u; }
        if (ctx->pc != 0x1D60B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60B4u; }
        if (ctx->pc != 0x1D60B4u) { return; }
    }
    ctx->pc = 0x1D60B4u;
    // 0x1d60b4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d60b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d60b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d60b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d60bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d60c0: 0xc060604  jal         func_181810
    ctx->pc = 0x1D60C0u;
    SET_GPR_U32(ctx, 31, 0x1D60C8u);
    ctx->pc = 0x1D60C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60C0u;
            // 0x1d60c4: 0x24c6aae0  addiu       $a2, $a2, -0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60C8u; }
        if (ctx->pc != 0x1D60C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60C8u; }
        if (ctx->pc != 0x1D60C8u) { return; }
    }
    ctx->pc = 0x1D60C8u;
    // 0x1d60c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d60c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d60ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60d0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1D60D0u;
    SET_GPR_U32(ctx, 31, 0x1D60D8u);
    ctx->pc = 0x1D60D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60D0u;
            // 0x1d60d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60D8u; }
        if (ctx->pc != 0x1D60D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60D8u; }
        if (ctx->pc != 0x1D60D8u) { return; }
    }
    ctx->pc = 0x1D60D8u;
    // 0x1d60d8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1d60d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1d60dc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1D60DCu;
    SET_GPR_U32(ctx, 31, 0x1D60E4u);
    ctx->pc = 0x1D60E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60DCu;
            // 0x1d60e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60E4u; }
        if (ctx->pc != 0x1D60E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60E4u; }
        if (ctx->pc != 0x1D60E4u) { return; }
    }
    ctx->pc = 0x1D60E4u;
    // 0x1d60e4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1D60E4u;
    SET_GPR_U32(ctx, 31, 0x1D60ECu);
    ctx->pc = 0x1D60E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60E4u;
            // 0x1d60e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60ECu; }
        if (ctx->pc != 0x1D60ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D60ECu; }
        if (ctx->pc != 0x1D60ECu) { return; }
    }
    ctx->pc = 0x1D60ECu;
    // 0x1d60ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d60ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d60f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d60f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d60f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d60f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d60f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D60F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D60FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60F8u;
            // 0x1d60fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6100u;
}
