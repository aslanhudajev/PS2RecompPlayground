#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn2_04_Hontai
// Address: 0x1999c0 - 0x199ab8
void CreateEn2_04_Hontai_0x1999c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn2_04_Hontai_0x1999c0");
#endif

    ctx->pc = 0x1999c0u;

    // 0x1999c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1999c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1999c4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1999c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1999c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1999c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1999cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1999ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1999d0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1999D0u;
    SET_GPR_U32(ctx, 31, 0x1999D8u);
    ctx->pc = 0x1999D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1999D0u;
            // 0x1999d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999D8u; }
        if (ctx->pc != 0x1999D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999D8u; }
        if (ctx->pc != 0x1999D8u) { return; }
    }
    ctx->pc = 0x1999D8u;
    // 0x1999d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1999d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999dc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1999dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1999e0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1999e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1999e4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1999E4u;
    SET_GPR_U32(ctx, 31, 0x1999ECu);
    ctx->pc = 0x1999E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1999E4u;
            // 0x1999e8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999ECu; }
        if (ctx->pc != 0x1999ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999ECu; }
        if (ctx->pc != 0x1999ECu) { return; }
    }
    ctx->pc = 0x1999ECu;
    // 0x1999ec: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1999ECu;
    SET_GPR_U32(ctx, 31, 0x1999F4u);
    ctx->pc = 0x1999F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1999ECu;
            // 0x1999f0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999F4u; }
        if (ctx->pc != 0x1999F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999F4u; }
        if (ctx->pc != 0x1999F4u) { return; }
    }
    ctx->pc = 0x1999F4u;
    // 0x1999f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1999f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1999f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1999fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1999fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a00: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x199A00u;
    SET_GPR_U32(ctx, 31, 0x199A08u);
    ctx->pc = 0x199A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A00u;
            // 0x199a04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A08u; }
        if (ctx->pc != 0x199A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A08u; }
        if (ctx->pc != 0x199A08u) { return; }
    }
    ctx->pc = 0x199A08u;
    // 0x199a08: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x199A08u;
    SET_GPR_U32(ctx, 31, 0x199A10u);
    ctx->pc = 0x199A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A08u;
            // 0x199a0c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A10u; }
        if (ctx->pc != 0x199A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A10u; }
        if (ctx->pc != 0x199A10u) { return; }
    }
    ctx->pc = 0x199A10u;
    // 0x199a10: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x199a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x199a14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x199a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199a18: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x199A18u;
    SET_GPR_U32(ctx, 31, 0x199A20u);
    ctx->pc = 0x199A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A18u;
            // 0x199a1c: 0xac221958  sw          $v0, 0x1958($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A20u; }
        if (ctx->pc != 0x199A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A20u; }
        if (ctx->pc != 0x199A20u) { return; }
    }
    ctx->pc = 0x199A20u;
    // 0x199a20: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x199a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x199a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x199a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a28: 0xac22195c  sw          $v0, 0x195C($at)
    ctx->pc = 0x199a28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6492), GPR_U32(ctx, 2));
    // 0x199a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a30: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x199a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x199a34: 0x8c271958  lw          $a3, 0x1958($at)
    ctx->pc = 0x199a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6488)));
    // 0x199a38: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x199a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x199a3c: 0x8c28195c  lw          $t0, 0x195C($at)
    ctx->pc = 0x199a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6492)));
    // 0x199a40: 0xc060614  jal         func_181850
    ctx->pc = 0x199A40u;
    SET_GPR_U32(ctx, 31, 0x199A48u);
    ctx->pc = 0x199A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A40u;
            // 0x199a44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A48u; }
        if (ctx->pc != 0x199A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A48u; }
        if (ctx->pc != 0x199A48u) { return; }
    }
    ctx->pc = 0x199A48u;
    // 0x199a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a4c: 0xc06060c  jal         func_181830
    ctx->pc = 0x199A4Cu;
    SET_GPR_U32(ctx, 31, 0x199A54u);
    ctx->pc = 0x199A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A4Cu;
            // 0x199a50: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A54u; }
        if (ctx->pc != 0x199A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A54u; }
        if (ctx->pc != 0x199A54u) { return; }
    }
    ctx->pc = 0x199A54u;
    // 0x199a54: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x199a54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x199a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199a60: 0xc060604  jal         func_181810
    ctx->pc = 0x199A60u;
    SET_GPR_U32(ctx, 31, 0x199A68u);
    ctx->pc = 0x199A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A60u;
            // 0x199a64: 0x24c6a8e0  addiu       $a2, $a2, -0x5720 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A68u; }
        if (ctx->pc != 0x199A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A68u; }
        if (ctx->pc != 0x199A68u) { return; }
    }
    ctx->pc = 0x199A68u;
    // 0x199a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a70: 0xc0605dc  jal         func_181770
    ctx->pc = 0x199A70u;
    SET_GPR_U32(ctx, 31, 0x199A78u);
    ctx->pc = 0x199A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A70u;
            // 0x199a74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A78u; }
        if (ctx->pc != 0x199A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A78u; }
        if (ctx->pc != 0x199A78u) { return; }
    }
    ctx->pc = 0x199A78u;
    // 0x199a78: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x199a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x199a7c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x199A7Cu;
    SET_GPR_U32(ctx, 31, 0x199A84u);
    ctx->pc = 0x199A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A7Cu;
            // 0x199a80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A84u; }
        if (ctx->pc != 0x199A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A84u; }
        if (ctx->pc != 0x199A84u) { return; }
    }
    ctx->pc = 0x199A84u;
    // 0x199a84: 0xc0605cc  jal         func_181730
    ctx->pc = 0x199A84u;
    SET_GPR_U32(ctx, 31, 0x199A8Cu);
    ctx->pc = 0x199A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A84u;
            // 0x199a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A8Cu; }
        if (ctx->pc != 0x199A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A8Cu; }
        if (ctx->pc != 0x199A8Cu) { return; }
    }
    ctx->pc = 0x199A8Cu;
    // 0x199a8c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x199a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x199a90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x199a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x199a94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a98: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x199a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x199a9c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x199A9Cu;
    SET_GPR_U32(ctx, 31, 0x199AA4u);
    ctx->pc = 0x199AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A9Cu;
            // 0x199aa0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AA4u; }
        if (ctx->pc != 0x199AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AA4u; }
        if (ctx->pc != 0x199AA4u) { return; }
    }
    ctx->pc = 0x199AA4u;
    // 0x199aa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x199AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199AB0u;
            // 0x199ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199AB8u;
}
