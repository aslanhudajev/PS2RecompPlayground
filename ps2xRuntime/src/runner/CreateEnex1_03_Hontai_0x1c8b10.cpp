#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex1_03_Hontai
// Address: 0x1c8b10 - 0x1c8c08
void CreateEnex1_03_Hontai_0x1c8b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex1_03_Hontai_0x1c8b10");
#endif

    ctx->pc = 0x1c8b10u;

    // 0x1c8b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c8b14: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1c8b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1c8b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c8b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c8b20: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C8B20u;
    SET_GPR_U32(ctx, 31, 0x1C8B28u);
    ctx->pc = 0x1C8B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B20u;
            // 0x1c8b24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B28u; }
        if (ctx->pc != 0x1C8B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B28u; }
        if (ctx->pc != 0x1C8B28u) { return; }
    }
    ctx->pc = 0x1C8B28u;
    // 0x1c8b28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c8b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b2c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1c8b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1c8b30: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1c8b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1c8b34: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1C8B34u;
    SET_GPR_U32(ctx, 31, 0x1C8B3Cu);
    ctx->pc = 0x1C8B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B34u;
            // 0x1c8b38: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B3Cu; }
        if (ctx->pc != 0x1C8B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B3Cu; }
        if (ctx->pc != 0x1C8B3Cu) { return; }
    }
    ctx->pc = 0x1C8B3Cu;
    // 0x1c8b3c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1C8B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C8B44u);
    ctx->pc = 0x1C8B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B3Cu;
            // 0x1c8b40: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B44u; }
        if (ctx->pc != 0x1C8B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B44u; }
        if (ctx->pc != 0x1C8B44u) { return; }
    }
    ctx->pc = 0x1C8B44u;
    // 0x1c8b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c8b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c8b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c8b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b50: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1C8B50u;
    SET_GPR_U32(ctx, 31, 0x1C8B58u);
    ctx->pc = 0x1C8B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B50u;
            // 0x1c8b54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B58u; }
        if (ctx->pc != 0x1C8B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B58u; }
        if (ctx->pc != 0x1C8B58u) { return; }
    }
    ctx->pc = 0x1C8B58u;
    // 0x1c8b58: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1C8B58u;
    SET_GPR_U32(ctx, 31, 0x1C8B60u);
    ctx->pc = 0x1C8B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B58u;
            // 0x1c8b5c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B60u; }
        if (ctx->pc != 0x1C8B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B60u; }
        if (ctx->pc != 0x1C8B60u) { return; }
    }
    ctx->pc = 0x1C8B60u;
    // 0x1c8b60: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c8b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c8b64: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1c8b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c8b68: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1C8B68u;
    SET_GPR_U32(ctx, 31, 0x1C8B70u);
    ctx->pc = 0x1C8B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B68u;
            // 0x1c8b6c: 0xac221d00  sw          $v0, 0x1D00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B70u; }
        if (ctx->pc != 0x1C8B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B70u; }
        if (ctx->pc != 0x1C8B70u) { return; }
    }
    ctx->pc = 0x1C8B70u;
    // 0x1c8b70: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c8b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c8b74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c8b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b78: 0xac221d04  sw          $v0, 0x1D04($at)
    ctx->pc = 0x1c8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7428), GPR_U32(ctx, 2));
    // 0x1c8b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b80: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c8b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c8b84: 0x8c271d00  lw          $a3, 0x1D00($at)
    ctx->pc = 0x1c8b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7424)));
    // 0x1c8b88: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c8b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c8b8c: 0x8c281d04  lw          $t0, 0x1D04($at)
    ctx->pc = 0x1c8b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7428)));
    // 0x1c8b90: 0xc060614  jal         func_181850
    ctx->pc = 0x1C8B90u;
    SET_GPR_U32(ctx, 31, 0x1C8B98u);
    ctx->pc = 0x1C8B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B90u;
            // 0x1c8b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B98u; }
        if (ctx->pc != 0x1C8B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8B98u; }
        if (ctx->pc != 0x1C8B98u) { return; }
    }
    ctx->pc = 0x1C8B98u;
    // 0x1c8b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b9c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1C8B9Cu;
    SET_GPR_U32(ctx, 31, 0x1C8BA4u);
    ctx->pc = 0x1C8BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B9Cu;
            // 0x1c8ba0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BA4u; }
        if (ctx->pc != 0x1C8BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BA4u; }
        if (ctx->pc != 0x1C8BA4u) { return; }
    }
    ctx->pc = 0x1C8BA4u;
    // 0x1c8ba4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1c8ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1c8ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8bac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c8bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8bb0: 0xc060604  jal         func_181810
    ctx->pc = 0x1C8BB0u;
    SET_GPR_U32(ctx, 31, 0x1C8BB8u);
    ctx->pc = 0x1C8BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BB0u;
            // 0x1c8bb4: 0x24c6aa98  addiu       $a2, $a2, -0x5568 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BB8u; }
        if (ctx->pc != 0x1C8BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BB8u; }
        if (ctx->pc != 0x1C8BB8u) { return; }
    }
    ctx->pc = 0x1C8BB8u;
    // 0x1c8bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8bc0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1C8BC0u;
    SET_GPR_U32(ctx, 31, 0x1C8BC8u);
    ctx->pc = 0x1C8BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BC0u;
            // 0x1c8bc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BC8u; }
        if (ctx->pc != 0x1C8BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BC8u; }
        if (ctx->pc != 0x1C8BC8u) { return; }
    }
    ctx->pc = 0x1C8BC8u;
    // 0x1c8bc8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1c8bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1c8bcc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1C8BCCu;
    SET_GPR_U32(ctx, 31, 0x1C8BD4u);
    ctx->pc = 0x1C8BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BCCu;
            // 0x1c8bd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BD4u; }
        if (ctx->pc != 0x1C8BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BD4u; }
        if (ctx->pc != 0x1C8BD4u) { return; }
    }
    ctx->pc = 0x1C8BD4u;
    // 0x1c8bd4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1C8BD4u;
    SET_GPR_U32(ctx, 31, 0x1C8BDCu);
    ctx->pc = 0x1C8BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BD4u;
            // 0x1c8bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BDCu; }
        if (ctx->pc != 0x1C8BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BDCu; }
        if (ctx->pc != 0x1C8BDCu) { return; }
    }
    ctx->pc = 0x1C8BDCu;
    // 0x1c8bdc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8be4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c8be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c8be8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1c8be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c8bec: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1C8BECu;
    SET_GPR_U32(ctx, 31, 0x1C8BF4u);
    ctx->pc = 0x1C8BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8BECu;
            // 0x1c8bf0: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BF4u; }
        if (ctx->pc != 0x1C8BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BF4u; }
        if (ctx->pc != 0x1C8BF4u) { return; }
    }
    ctx->pc = 0x1C8BF4u;
    // 0x1c8bf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c8bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8c00: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8C00u;
            // 0x1c8c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8C08u;
}
