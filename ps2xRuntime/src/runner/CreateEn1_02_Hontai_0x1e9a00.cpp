#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn1_02_Hontai
// Address: 0x1e9a00 - 0x1e9ae8
void CreateEn1_02_Hontai_0x1e9a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn1_02_Hontai_0x1e9a00");
#endif

    ctx->pc = 0x1e9a00u;

    // 0x1e9a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9a04: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1e9a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1e9a08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e9a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9a10: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E9A10u;
    SET_GPR_U32(ctx, 31, 0x1E9A18u);
    ctx->pc = 0x1E9A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A10u;
            // 0x1e9a14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A18u; }
        if (ctx->pc != 0x1E9A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A18u; }
        if (ctx->pc != 0x1E9A18u) { return; }
    }
    ctx->pc = 0x1E9A18u;
    // 0x1e9a18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e9a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a1c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1e9a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1e9a20: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1e9a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1e9a24: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1E9A24u;
    SET_GPR_U32(ctx, 31, 0x1E9A2Cu);
    ctx->pc = 0x1E9A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A24u;
            // 0x1e9a28: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A2Cu; }
        if (ctx->pc != 0x1E9A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A2Cu; }
        if (ctx->pc != 0x1E9A2Cu) { return; }
    }
    ctx->pc = 0x1E9A2Cu;
    // 0x1e9a2c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E9A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A34u);
    ctx->pc = 0x1E9A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A2Cu;
            // 0x1e9a30: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A34u; }
        if (ctx->pc != 0x1E9A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A34u; }
        if (ctx->pc != 0x1E9A34u) { return; }
    }
    ctx->pc = 0x1E9A34u;
    // 0x1e9a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a38: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1E9A38u;
    SET_GPR_U32(ctx, 31, 0x1E9A40u);
    ctx->pc = 0x1E9A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A38u;
            // 0x1e9a3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A40u; }
        if (ctx->pc != 0x1E9A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A40u; }
        if (ctx->pc != 0x1E9A40u) { return; }
    }
    ctx->pc = 0x1E9A40u;
    // 0x1e9a40: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e9a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e9a44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e9a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e9a48: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1E9A48u;
    SET_GPR_U32(ctx, 31, 0x1E9A50u);
    ctx->pc = 0x1E9A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A48u;
            // 0x1e9a4c: 0xac222e20  sw          $v0, 0x2E20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A50u; }
        if (ctx->pc != 0x1E9A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A50u; }
        if (ctx->pc != 0x1E9A50u) { return; }
    }
    ctx->pc = 0x1E9A50u;
    // 0x1e9a50: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e9a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e9a54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a58: 0xac222e24  sw          $v0, 0x2E24($at)
    ctx->pc = 0x1e9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11812), GPR_U32(ctx, 2));
    // 0x1e9a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a60: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e9a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e9a64: 0x8c272e20  lw          $a3, 0x2E20($at)
    ctx->pc = 0x1e9a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11808)));
    // 0x1e9a68: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e9a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e9a6c: 0x8c282e24  lw          $t0, 0x2E24($at)
    ctx->pc = 0x1e9a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11812)));
    // 0x1e9a70: 0xc060614  jal         func_181850
    ctx->pc = 0x1E9A70u;
    SET_GPR_U32(ctx, 31, 0x1E9A78u);
    ctx->pc = 0x1E9A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A70u;
            // 0x1e9a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A78u; }
        if (ctx->pc != 0x1E9A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A78u; }
        if (ctx->pc != 0x1E9A78u) { return; }
    }
    ctx->pc = 0x1E9A78u;
    // 0x1e9a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a7c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1E9A7Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A84u);
    ctx->pc = 0x1E9A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A7Cu;
            // 0x1e9a80: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A84u; }
        if (ctx->pc != 0x1E9A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A84u; }
        if (ctx->pc != 0x1E9A84u) { return; }
    }
    ctx->pc = 0x1E9A84u;
    // 0x1e9a84: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1e9a84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1e9a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e9a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9a90: 0xc060604  jal         func_181810
    ctx->pc = 0x1E9A90u;
    SET_GPR_U32(ctx, 31, 0x1E9A98u);
    ctx->pc = 0x1E9A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A90u;
            // 0x1e9a94: 0x24c6ab98  addiu       $a2, $a2, -0x5468 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A98u; }
        if (ctx->pc != 0x1E9A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A98u; }
        if (ctx->pc != 0x1E9A98u) { return; }
    }
    ctx->pc = 0x1E9A98u;
    // 0x1e9a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9aa0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1E9AA0u;
    SET_GPR_U32(ctx, 31, 0x1E9AA8u);
    ctx->pc = 0x1E9AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AA0u;
            // 0x1e9aa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AA8u; }
        if (ctx->pc != 0x1E9AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AA8u; }
        if (ctx->pc != 0x1E9AA8u) { return; }
    }
    ctx->pc = 0x1E9AA8u;
    // 0x1e9aa8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1e9aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1e9aac: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1E9AACu;
    SET_GPR_U32(ctx, 31, 0x1E9AB4u);
    ctx->pc = 0x1E9AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AACu;
            // 0x1e9ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AB4u; }
        if (ctx->pc != 0x1E9AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AB4u; }
        if (ctx->pc != 0x1E9AB4u) { return; }
    }
    ctx->pc = 0x1E9AB4u;
    // 0x1e9ab4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1E9AB4u;
    SET_GPR_U32(ctx, 31, 0x1E9ABCu);
    ctx->pc = 0x1E9AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AB4u;
            // 0x1e9ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9ABCu; }
        if (ctx->pc != 0x1E9ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9ABCu; }
        if (ctx->pc != 0x1E9ABCu) { return; }
    }
    ctx->pc = 0x1E9ABCu;
    // 0x1e9abc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e9abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e9ac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e9ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9ac4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e9ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e9ac8: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1e9ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1e9acc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1E9ACCu;
    SET_GPR_U32(ctx, 31, 0x1E9AD4u);
    ctx->pc = 0x1E9AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9ACCu;
            // 0x1e9ad0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AD4u; }
        if (ctx->pc != 0x1E9AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AD4u; }
        if (ctx->pc != 0x1E9AD4u) { return; }
    }
    ctx->pc = 0x1E9AD4u;
    // 0x1e9ad4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9ad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AE0u;
            // 0x1e9ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9AE8u;
}
