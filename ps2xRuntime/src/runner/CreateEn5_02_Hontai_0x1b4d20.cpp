#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn5_02_Hontai
// Address: 0x1b4d20 - 0x1b4e18
void CreateEn5_02_Hontai_0x1b4d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn5_02_Hontai_0x1b4d20");
#endif

    ctx->pc = 0x1b4d20u;

    // 0x1b4d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4d24: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1b4d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1b4d28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b4d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b4d2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4d30: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B4D30u;
    SET_GPR_U32(ctx, 31, 0x1B4D38u);
    ctx->pc = 0x1B4D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D30u;
            // 0x1b4d34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D38u; }
        if (ctx->pc != 0x1B4D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D38u; }
        if (ctx->pc != 0x1B4D38u) { return; }
    }
    ctx->pc = 0x1B4D38u;
    // 0x1b4d38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d3c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b4d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b4d40: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b4d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b4d44: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B4D44u;
    SET_GPR_U32(ctx, 31, 0x1B4D4Cu);
    ctx->pc = 0x1B4D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D44u;
            // 0x1b4d48: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D4Cu; }
        if (ctx->pc != 0x1B4D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D4Cu; }
        if (ctx->pc != 0x1B4D4Cu) { return; }
    }
    ctx->pc = 0x1B4D4Cu;
    // 0x1b4d4c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D54u);
    ctx->pc = 0x1B4D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D4Cu;
            // 0x1b4d50: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D54u; }
        if (ctx->pc != 0x1B4D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D54u; }
        if (ctx->pc != 0x1B4D54u) { return; }
    }
    ctx->pc = 0x1B4D54u;
    // 0x1b4d54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d58: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b4d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d60: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1B4D60u;
    SET_GPR_U32(ctx, 31, 0x1B4D68u);
    ctx->pc = 0x1B4D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D60u;
            // 0x1b4d64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D68u; }
        if (ctx->pc != 0x1B4D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D68u; }
        if (ctx->pc != 0x1B4D68u) { return; }
    }
    ctx->pc = 0x1B4D68u;
    // 0x1b4d68: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1B4D68u;
    SET_GPR_U32(ctx, 31, 0x1B4D70u);
    ctx->pc = 0x1B4D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D68u;
            // 0x1b4d6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D70u; }
        if (ctx->pc != 0x1B4D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D70u; }
        if (ctx->pc != 0x1B4D70u) { return; }
    }
    ctx->pc = 0x1B4D70u;
    // 0x1b4d70: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b4d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b4d74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b4d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4d78: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1B4D78u;
    SET_GPR_U32(ctx, 31, 0x1B4D80u);
    ctx->pc = 0x1B4D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4D78u;
            // 0x1b4d7c: 0xac221b98  sw          $v0, 0x1B98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D80u; }
        if (ctx->pc != 0x1B4D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4D80u; }
        if (ctx->pc != 0x1B4D80u) { return; }
    }
    ctx->pc = 0x1B4D80u;
    // 0x1b4d80: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b4d84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b4d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d88: 0xac221b9c  sw          $v0, 0x1B9C($at)
    ctx->pc = 0x1b4d88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7068), GPR_U32(ctx, 2));
    // 0x1b4d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d90: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b4d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b4d94: 0x8c271b98  lw          $a3, 0x1B98($at)
    ctx->pc = 0x1b4d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7064)));
    // 0x1b4d98: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b4d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b4d9c: 0x8c281b9c  lw          $t0, 0x1B9C($at)
    ctx->pc = 0x1b4d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7068)));
    // 0x1b4da0: 0xc060614  jal         func_181850
    ctx->pc = 0x1B4DA0u;
    SET_GPR_U32(ctx, 31, 0x1B4DA8u);
    ctx->pc = 0x1B4DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DA0u;
            // 0x1b4da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DA8u; }
        if (ctx->pc != 0x1B4DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DA8u; }
        if (ctx->pc != 0x1B4DA8u) { return; }
    }
    ctx->pc = 0x1B4DA8u;
    // 0x1b4da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4dac: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B4DACu;
    SET_GPR_U32(ctx, 31, 0x1B4DB4u);
    ctx->pc = 0x1B4DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DACu;
            // 0x1b4db0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DB4u; }
        if (ctx->pc != 0x1B4DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DB4u; }
        if (ctx->pc != 0x1B4DB4u) { return; }
    }
    ctx->pc = 0x1B4DB4u;
    // 0x1b4db4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b4db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b4db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4dbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4dc0: 0xc060604  jal         func_181810
    ctx->pc = 0x1B4DC0u;
    SET_GPR_U32(ctx, 31, 0x1B4DC8u);
    ctx->pc = 0x1B4DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DC0u;
            // 0x1b4dc4: 0x24c6a9d8  addiu       $a2, $a2, -0x5628 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DC8u; }
        if (ctx->pc != 0x1B4DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DC8u; }
        if (ctx->pc != 0x1B4DC8u) { return; }
    }
    ctx->pc = 0x1B4DC8u;
    // 0x1b4dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4dd0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B4DD0u;
    SET_GPR_U32(ctx, 31, 0x1B4DD8u);
    ctx->pc = 0x1B4DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DD0u;
            // 0x1b4dd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DD8u; }
        if (ctx->pc != 0x1B4DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DD8u; }
        if (ctx->pc != 0x1B4DD8u) { return; }
    }
    ctx->pc = 0x1B4DD8u;
    // 0x1b4dd8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b4dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b4ddc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B4DDCu;
    SET_GPR_U32(ctx, 31, 0x1B4DE4u);
    ctx->pc = 0x1B4DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DDCu;
            // 0x1b4de0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DE4u; }
        if (ctx->pc != 0x1B4DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DE4u; }
        if (ctx->pc != 0x1B4DE4u) { return; }
    }
    ctx->pc = 0x1B4DE4u;
    // 0x1b4de4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B4DE4u;
    SET_GPR_U32(ctx, 31, 0x1B4DECu);
    ctx->pc = 0x1B4DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DE4u;
            // 0x1b4de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DECu; }
        if (ctx->pc != 0x1B4DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DECu; }
        if (ctx->pc != 0x1B4DECu) { return; }
    }
    ctx->pc = 0x1B4DECu;
    // 0x1b4dec: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b4decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b4df0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4df4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b4df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b4df8: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1b4df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b4dfc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1B4DFCu;
    SET_GPR_U32(ctx, 31, 0x1B4E04u);
    ctx->pc = 0x1B4E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DFCu;
            // 0x1b4e00: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E04u; }
        if (ctx->pc != 0x1B4E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4E04u; }
        if (ctx->pc != 0x1B4E04u) { return; }
    }
    ctx->pc = 0x1B4E04u;
    // 0x1b4e04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b4e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4e10: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E10u;
            // 0x1b4e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4E18u;
}
