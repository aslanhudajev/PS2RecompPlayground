#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn5_03_Hontai
// Address: 0x1b59f0 - 0x1b5ae8
void CreateEn5_03_Hontai_0x1b59f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn5_03_Hontai_0x1b59f0");
#endif

    ctx->pc = 0x1b59f0u;

    // 0x1b59f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b59f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b59f4: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1b59f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1b59f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b59f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b59fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b59fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5a00: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B5A00u;
    SET_GPR_U32(ctx, 31, 0x1B5A08u);
    ctx->pc = 0x1B5A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A00u;
            // 0x1b5a04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A08u; }
        if (ctx->pc != 0x1B5A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A08u; }
        if (ctx->pc != 0x1B5A08u) { return; }
    }
    ctx->pc = 0x1B5A08u;
    // 0x1b5a08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a0c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b5a10: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b5a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b5a14: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B5A14u;
    SET_GPR_U32(ctx, 31, 0x1B5A1Cu);
    ctx->pc = 0x1B5A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A14u;
            // 0x1b5a18: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A1Cu; }
        if (ctx->pc != 0x1B5A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A1Cu; }
        if (ctx->pc != 0x1B5A1Cu) { return; }
    }
    ctx->pc = 0x1B5A1Cu;
    // 0x1b5a1c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B5A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A24u);
    ctx->pc = 0x1B5A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A1Cu;
            // 0x1b5a20: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A24u; }
        if (ctx->pc != 0x1B5A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A24u; }
        if (ctx->pc != 0x1B5A24u) { return; }
    }
    ctx->pc = 0x1B5A24u;
    // 0x1b5a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b5a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b5a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a30: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1B5A30u;
    SET_GPR_U32(ctx, 31, 0x1B5A38u);
    ctx->pc = 0x1B5A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A30u;
            // 0x1b5a34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A38u; }
        if (ctx->pc != 0x1B5A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A38u; }
        if (ctx->pc != 0x1B5A38u) { return; }
    }
    ctx->pc = 0x1B5A38u;
    // 0x1b5a38: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1B5A38u;
    SET_GPR_U32(ctx, 31, 0x1B5A40u);
    ctx->pc = 0x1B5A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A38u;
            // 0x1b5a3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A40u; }
        if (ctx->pc != 0x1B5A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A40u; }
        if (ctx->pc != 0x1B5A40u) { return; }
    }
    ctx->pc = 0x1B5A40u;
    // 0x1b5a40: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b5a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b5a44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b5a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5a48: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1B5A48u;
    SET_GPR_U32(ctx, 31, 0x1B5A50u);
    ctx->pc = 0x1B5A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A48u;
            // 0x1b5a4c: 0xac221ba0  sw          $v0, 0x1BA0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A50u; }
        if (ctx->pc != 0x1B5A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A50u; }
        if (ctx->pc != 0x1B5A50u) { return; }
    }
    ctx->pc = 0x1B5A50u;
    // 0x1b5a50: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b5a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b5a54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b5a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a58: 0xac221ba4  sw          $v0, 0x1BA4($at)
    ctx->pc = 0x1b5a58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7076), GPR_U32(ctx, 2));
    // 0x1b5a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a60: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b5a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b5a64: 0x8c271ba0  lw          $a3, 0x1BA0($at)
    ctx->pc = 0x1b5a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7072)));
    // 0x1b5a68: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b5a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b5a6c: 0x8c281ba4  lw          $t0, 0x1BA4($at)
    ctx->pc = 0x1b5a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7076)));
    // 0x1b5a70: 0xc060614  jal         func_181850
    ctx->pc = 0x1B5A70u;
    SET_GPR_U32(ctx, 31, 0x1B5A78u);
    ctx->pc = 0x1B5A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A70u;
            // 0x1b5a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A78u; }
        if (ctx->pc != 0x1B5A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A78u; }
        if (ctx->pc != 0x1B5A78u) { return; }
    }
    ctx->pc = 0x1B5A78u;
    // 0x1b5a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a7c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B5A7Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A84u);
    ctx->pc = 0x1B5A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A7Cu;
            // 0x1b5a80: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A84u; }
        if (ctx->pc != 0x1B5A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A84u; }
        if (ctx->pc != 0x1B5A84u) { return; }
    }
    ctx->pc = 0x1B5A84u;
    // 0x1b5a84: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b5a84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b5a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5a90: 0xc060604  jal         func_181810
    ctx->pc = 0x1B5A90u;
    SET_GPR_U32(ctx, 31, 0x1B5A98u);
    ctx->pc = 0x1B5A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A90u;
            // 0x1b5a94: 0x24c6a9e0  addiu       $a2, $a2, -0x5620 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A98u; }
        if (ctx->pc != 0x1B5A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5A98u; }
        if (ctx->pc != 0x1B5A98u) { return; }
    }
    ctx->pc = 0x1B5A98u;
    // 0x1b5a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5aa0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B5AA0u;
    SET_GPR_U32(ctx, 31, 0x1B5AA8u);
    ctx->pc = 0x1B5AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AA0u;
            // 0x1b5aa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AA8u; }
        if (ctx->pc != 0x1B5AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AA8u; }
        if (ctx->pc != 0x1B5AA8u) { return; }
    }
    ctx->pc = 0x1B5AA8u;
    // 0x1b5aa8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b5aac: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B5AACu;
    SET_GPR_U32(ctx, 31, 0x1B5AB4u);
    ctx->pc = 0x1B5AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AACu;
            // 0x1b5ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AB4u; }
        if (ctx->pc != 0x1B5AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AB4u; }
        if (ctx->pc != 0x1B5AB4u) { return; }
    }
    ctx->pc = 0x1B5AB4u;
    // 0x1b5ab4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B5AB4u;
    SET_GPR_U32(ctx, 31, 0x1B5ABCu);
    ctx->pc = 0x1B5AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AB4u;
            // 0x1b5ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5ABCu; }
        if (ctx->pc != 0x1B5ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5ABCu; }
        if (ctx->pc != 0x1B5ABCu) { return; }
    }
    ctx->pc = 0x1B5ABCu;
    // 0x1b5abc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b5abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ac8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1b5ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b5acc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1B5ACCu;
    SET_GPR_U32(ctx, 31, 0x1B5AD4u);
    ctx->pc = 0x1B5AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5ACCu;
            // 0x1b5ad0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AD4u; }
        if (ctx->pc != 0x1B5AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AD4u; }
        if (ctx->pc != 0x1B5AD4u) { return; }
    }
    ctx->pc = 0x1B5AD4u;
    // 0x1b5ad4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5ad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AE0u;
            // 0x1b5ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5AE8u;
}
