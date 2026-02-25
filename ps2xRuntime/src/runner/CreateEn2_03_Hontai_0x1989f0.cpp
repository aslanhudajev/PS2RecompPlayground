#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn2_03_Hontai
// Address: 0x1989f0 - 0x198ae8
void CreateEn2_03_Hontai_0x1989f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn2_03_Hontai_0x1989f0");
#endif

    ctx->pc = 0x1989f0u;

    // 0x1989f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1989f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1989f4: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1989f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1989f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1989f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1989fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1989fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198a00: 0xc060694  jal         func_181A50
    ctx->pc = 0x198A00u;
    SET_GPR_U32(ctx, 31, 0x198A08u);
    ctx->pc = 0x198A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A00u;
            // 0x198a04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A08u; }
        if (ctx->pc != 0x198A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A08u; }
        if (ctx->pc != 0x198A08u) { return; }
    }
    ctx->pc = 0x198A08u;
    // 0x198a08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x198a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a0c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x198a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x198a10: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x198a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x198a14: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x198A14u;
    SET_GPR_U32(ctx, 31, 0x198A1Cu);
    ctx->pc = 0x198A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A14u;
            // 0x198a18: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A1Cu; }
        if (ctx->pc != 0x198A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A1Cu; }
        if (ctx->pc != 0x198A1Cu) { return; }
    }
    ctx->pc = 0x198A1Cu;
    // 0x198a1c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x198A1Cu;
    SET_GPR_U32(ctx, 31, 0x198A24u);
    ctx->pc = 0x198A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A1Cu;
            // 0x198a20: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A24u; }
        if (ctx->pc != 0x198A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A24u; }
        if (ctx->pc != 0x198A24u) { return; }
    }
    ctx->pc = 0x198A24u;
    // 0x198a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x198a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a30: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x198A30u;
    SET_GPR_U32(ctx, 31, 0x198A38u);
    ctx->pc = 0x198A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A30u;
            // 0x198a34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A38u; }
        if (ctx->pc != 0x198A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A38u; }
        if (ctx->pc != 0x198A38u) { return; }
    }
    ctx->pc = 0x198A38u;
    // 0x198a38: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x198A38u;
    SET_GPR_U32(ctx, 31, 0x198A40u);
    ctx->pc = 0x198A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A38u;
            // 0x198a3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A40u; }
        if (ctx->pc != 0x198A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A40u; }
        if (ctx->pc != 0x198A40u) { return; }
    }
    ctx->pc = 0x198A40u;
    // 0x198a40: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x198a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x198a44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x198a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198a48: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x198A48u;
    SET_GPR_U32(ctx, 31, 0x198A50u);
    ctx->pc = 0x198A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A48u;
            // 0x198a4c: 0xac221950  sw          $v0, 0x1950($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A50u; }
        if (ctx->pc != 0x198A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A50u; }
        if (ctx->pc != 0x198A50u) { return; }
    }
    ctx->pc = 0x198A50u;
    // 0x198a50: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x198a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x198a54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x198a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a58: 0xac221954  sw          $v0, 0x1954($at)
    ctx->pc = 0x198a58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6484), GPR_U32(ctx, 2));
    // 0x198a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a60: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x198a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x198a64: 0x8c271950  lw          $a3, 0x1950($at)
    ctx->pc = 0x198a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6480)));
    // 0x198a68: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x198a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x198a6c: 0x8c281954  lw          $t0, 0x1954($at)
    ctx->pc = 0x198a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6484)));
    // 0x198a70: 0xc060614  jal         func_181850
    ctx->pc = 0x198A70u;
    SET_GPR_U32(ctx, 31, 0x198A78u);
    ctx->pc = 0x198A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A70u;
            // 0x198a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A78u; }
        if (ctx->pc != 0x198A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A78u; }
        if (ctx->pc != 0x198A78u) { return; }
    }
    ctx->pc = 0x198A78u;
    // 0x198a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a7c: 0xc06060c  jal         func_181830
    ctx->pc = 0x198A7Cu;
    SET_GPR_U32(ctx, 31, 0x198A84u);
    ctx->pc = 0x198A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A7Cu;
            // 0x198a80: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A84u; }
        if (ctx->pc != 0x198A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A84u; }
        if (ctx->pc != 0x198A84u) { return; }
    }
    ctx->pc = 0x198A84u;
    // 0x198a84: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x198a84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x198a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198a90: 0xc060604  jal         func_181810
    ctx->pc = 0x198A90u;
    SET_GPR_U32(ctx, 31, 0x198A98u);
    ctx->pc = 0x198A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198A90u;
            // 0x198a94: 0x24c6a8d8  addiu       $a2, $a2, -0x5728 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A98u; }
        if (ctx->pc != 0x198A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198A98u; }
        if (ctx->pc != 0x198A98u) { return; }
    }
    ctx->pc = 0x198A98u;
    // 0x198a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198aa0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x198AA0u;
    SET_GPR_U32(ctx, 31, 0x198AA8u);
    ctx->pc = 0x198AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198AA0u;
            // 0x198aa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AA8u; }
        if (ctx->pc != 0x198AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AA8u; }
        if (ctx->pc != 0x198AA8u) { return; }
    }
    ctx->pc = 0x198AA8u;
    // 0x198aa8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x198aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x198aac: 0xc046376  jal         func_118DD8
    ctx->pc = 0x198AACu;
    SET_GPR_U32(ctx, 31, 0x198AB4u);
    ctx->pc = 0x198AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198AACu;
            // 0x198ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AB4u; }
        if (ctx->pc != 0x198AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AB4u; }
        if (ctx->pc != 0x198AB4u) { return; }
    }
    ctx->pc = 0x198AB4u;
    // 0x198ab4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x198AB4u;
    SET_GPR_U32(ctx, 31, 0x198ABCu);
    ctx->pc = 0x198AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198AB4u;
            // 0x198ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198ABCu; }
        if (ctx->pc != 0x198ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198ABCu; }
        if (ctx->pc != 0x198ABCu) { return; }
    }
    ctx->pc = 0x198ABCu;
    // 0x198abc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x198ac0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x198ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198ac4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x198ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x198ac8: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x198ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x198acc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x198ACCu;
    SET_GPR_U32(ctx, 31, 0x198AD4u);
    ctx->pc = 0x198AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198ACCu;
            // 0x198ad0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AD4u; }
        if (ctx->pc != 0x198AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198AD4u; }
        if (ctx->pc != 0x198AD4u) { return; }
    }
    ctx->pc = 0x198AD4u;
    // 0x198ad4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198ad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x198AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198AE0u;
            // 0x198ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198AE8u;
}
