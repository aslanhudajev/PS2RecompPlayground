#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn4_04_Hontai
// Address: 0x1a6ae0 - 0x1a6bd8
void CreateEn4_04_Hontai_0x1a6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn4_04_Hontai_0x1a6ae0");
#endif

    ctx->pc = 0x1a6ae0u;

    // 0x1a6ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6ae4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1a6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1a6ae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6aec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a6af0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A6AF0u;
    SET_GPR_U32(ctx, 31, 0x1A6AF8u);
    ctx->pc = 0x1A6AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6AF0u;
            // 0x1a6af4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AF8u; }
        if (ctx->pc != 0x1A6AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AF8u; }
        if (ctx->pc != 0x1A6AF8u) { return; }
    }
    ctx->pc = 0x1A6AF8u;
    // 0x1a6af8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a6af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6afc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1a6afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1a6b00: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1a6b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1a6b04: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1A6B04u;
    SET_GPR_U32(ctx, 31, 0x1A6B0Cu);
    ctx->pc = 0x1A6B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B04u;
            // 0x1a6b08: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B0Cu; }
        if (ctx->pc != 0x1A6B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B0Cu; }
        if (ctx->pc != 0x1A6B0Cu) { return; }
    }
    ctx->pc = 0x1A6B0Cu;
    // 0x1a6b0c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A6B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B14u);
    ctx->pc = 0x1A6B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B0Cu;
            // 0x1a6b10: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B14u; }
        if (ctx->pc != 0x1A6B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B14u; }
        if (ctx->pc != 0x1A6B14u) { return; }
    }
    ctx->pc = 0x1A6B14u;
    // 0x1a6b14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a6b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b20: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1A6B20u;
    SET_GPR_U32(ctx, 31, 0x1A6B28u);
    ctx->pc = 0x1A6B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B20u;
            // 0x1a6b24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B28u; }
        if (ctx->pc != 0x1A6B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B28u; }
        if (ctx->pc != 0x1A6B28u) { return; }
    }
    ctx->pc = 0x1A6B28u;
    // 0x1a6b28: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1A6B28u;
    SET_GPR_U32(ctx, 31, 0x1A6B30u);
    ctx->pc = 0x1A6B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B28u;
            // 0x1a6b2c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B30u; }
        if (ctx->pc != 0x1A6B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B30u; }
        if (ctx->pc != 0x1A6B30u) { return; }
    }
    ctx->pc = 0x1A6B30u;
    // 0x1a6b30: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a6b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a6b34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a6b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6b38: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1A6B38u;
    SET_GPR_U32(ctx, 31, 0x1A6B40u);
    ctx->pc = 0x1A6B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B38u;
            // 0x1a6b3c: 0xac221ae0  sw          $v0, 0x1AE0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B40u; }
        if (ctx->pc != 0x1A6B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B40u; }
        if (ctx->pc != 0x1A6B40u) { return; }
    }
    ctx->pc = 0x1A6B40u;
    // 0x1a6b40: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a6b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a6b44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a6b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b48: 0xac221ae4  sw          $v0, 0x1AE4($at)
    ctx->pc = 0x1a6b48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6884), GPR_U32(ctx, 2));
    // 0x1a6b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b50: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a6b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a6b54: 0x8c271ae0  lw          $a3, 0x1AE0($at)
    ctx->pc = 0x1a6b54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6880)));
    // 0x1a6b58: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a6b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a6b5c: 0x8c281ae4  lw          $t0, 0x1AE4($at)
    ctx->pc = 0x1a6b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6884)));
    // 0x1a6b60: 0xc060614  jal         func_181850
    ctx->pc = 0x1A6B60u;
    SET_GPR_U32(ctx, 31, 0x1A6B68u);
    ctx->pc = 0x1A6B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B60u;
            // 0x1a6b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B68u; }
        if (ctx->pc != 0x1A6B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B68u; }
        if (ctx->pc != 0x1A6B68u) { return; }
    }
    ctx->pc = 0x1A6B68u;
    // 0x1a6b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b6c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1A6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B74u);
    ctx->pc = 0x1A6B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B6Cu;
            // 0x1a6b70: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B74u; }
        if (ctx->pc != 0x1A6B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B74u; }
        if (ctx->pc != 0x1A6B74u) { return; }
    }
    ctx->pc = 0x1A6B74u;
    // 0x1a6b74: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a6b74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1a6b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6b80: 0xc060604  jal         func_181810
    ctx->pc = 0x1A6B80u;
    SET_GPR_U32(ctx, 31, 0x1A6B88u);
    ctx->pc = 0x1A6B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B80u;
            // 0x1a6b84: 0x24c6a968  addiu       $a2, $a2, -0x5698 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B88u; }
        if (ctx->pc != 0x1A6B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B88u; }
        if (ctx->pc != 0x1A6B88u) { return; }
    }
    ctx->pc = 0x1A6B88u;
    // 0x1a6b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b90: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1A6B90u;
    SET_GPR_U32(ctx, 31, 0x1A6B98u);
    ctx->pc = 0x1A6B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B90u;
            // 0x1a6b94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B98u; }
        if (ctx->pc != 0x1A6B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B98u; }
        if (ctx->pc != 0x1A6B98u) { return; }
    }
    ctx->pc = 0x1A6B98u;
    // 0x1a6b98: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1a6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1a6b9c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1A6B9Cu;
    SET_GPR_U32(ctx, 31, 0x1A6BA4u);
    ctx->pc = 0x1A6BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B9Cu;
            // 0x1a6ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BA4u; }
        if (ctx->pc != 0x1A6BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BA4u; }
        if (ctx->pc != 0x1A6BA4u) { return; }
    }
    ctx->pc = 0x1A6BA4u;
    // 0x1a6ba4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1A6BA4u;
    SET_GPR_U32(ctx, 31, 0x1A6BACu);
    ctx->pc = 0x1A6BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BA4u;
            // 0x1a6ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BACu; }
        if (ctx->pc != 0x1A6BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BACu; }
        if (ctx->pc != 0x1A6BACu) { return; }
    }
    ctx->pc = 0x1A6BACu;
    // 0x1a6bac: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a6bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a6bb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a6bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a6bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bb8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1a6bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a6bbc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1A6BBCu;
    SET_GPR_U32(ctx, 31, 0x1A6BC4u);
    ctx->pc = 0x1A6BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BBCu;
            // 0x1a6bc0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BC4u; }
        if (ctx->pc != 0x1A6BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BC4u; }
        if (ctx->pc != 0x1A6BC4u) { return; }
    }
    ctx->pc = 0x1A6BC4u;
    // 0x1a6bc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6bc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6bcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BD0u;
            // 0x1a6bd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6BD8u;
}
