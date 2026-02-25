#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex2_03_Hontai
// Address: 0x1cf910 - 0x1cf9f8
void CreateEnex2_03_Hontai_0x1cf910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex2_03_Hontai_0x1cf910");
#endif

    ctx->pc = 0x1cf910u;

    // 0x1cf910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf914: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1cf914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1cf918: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cf918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cf91c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf920: 0xc060694  jal         func_181A50
    ctx->pc = 0x1CF920u;
    SET_GPR_U32(ctx, 31, 0x1CF928u);
    ctx->pc = 0x1CF924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF920u;
            // 0x1cf924: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF928u; }
        if (ctx->pc != 0x1CF928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF928u; }
        if (ctx->pc != 0x1CF928u) { return; }
    }
    ctx->pc = 0x1CF928u;
    // 0x1cf928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cf928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf92c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1cf92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1cf930: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1cf930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1cf934: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1CF934u;
    SET_GPR_U32(ctx, 31, 0x1CF93Cu);
    ctx->pc = 0x1CF938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF934u;
            // 0x1cf938: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF93Cu; }
        if (ctx->pc != 0x1CF93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF93Cu; }
        if (ctx->pc != 0x1CF93Cu) { return; }
    }
    ctx->pc = 0x1CF93Cu;
    // 0x1cf93c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1CF93Cu;
    SET_GPR_U32(ctx, 31, 0x1CF944u);
    ctx->pc = 0x1CF940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF93Cu;
            // 0x1cf940: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF944u; }
        if (ctx->pc != 0x1CF944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF944u; }
        if (ctx->pc != 0x1CF944u) { return; }
    }
    ctx->pc = 0x1CF944u;
    // 0x1cf944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cf944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf948: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1CF948u;
    SET_GPR_U32(ctx, 31, 0x1CF950u);
    ctx->pc = 0x1CF94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF948u;
            // 0x1cf94c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF950u; }
        if (ctx->pc != 0x1CF950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF950u; }
        if (ctx->pc != 0x1CF950u) { return; }
    }
    ctx->pc = 0x1CF950u;
    // 0x1cf950: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cf950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cf954: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cf954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf958: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1CF958u;
    SET_GPR_U32(ctx, 31, 0x1CF960u);
    ctx->pc = 0x1CF95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF958u;
            // 0x1cf95c: 0xac221d30  sw          $v0, 0x1D30($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF960u; }
        if (ctx->pc != 0x1CF960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF960u; }
        if (ctx->pc != 0x1CF960u) { return; }
    }
    ctx->pc = 0x1CF960u;
    // 0x1cf960: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cf960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cf964: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cf964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf968: 0xac221d34  sw          $v0, 0x1D34($at)
    ctx->pc = 0x1cf968u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7476), GPR_U32(ctx, 2));
    // 0x1cf96c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf970: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cf970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cf974: 0x8c271d30  lw          $a3, 0x1D30($at)
    ctx->pc = 0x1cf974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7472)));
    // 0x1cf978: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cf978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cf97c: 0x8c281d34  lw          $t0, 0x1D34($at)
    ctx->pc = 0x1cf97cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7476)));
    // 0x1cf980: 0xc060614  jal         func_181850
    ctx->pc = 0x1CF980u;
    SET_GPR_U32(ctx, 31, 0x1CF988u);
    ctx->pc = 0x1CF984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF980u;
            // 0x1cf984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF988u; }
        if (ctx->pc != 0x1CF988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF988u; }
        if (ctx->pc != 0x1CF988u) { return; }
    }
    ctx->pc = 0x1CF988u;
    // 0x1cf988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf98c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1CF98Cu;
    SET_GPR_U32(ctx, 31, 0x1CF994u);
    ctx->pc = 0x1CF990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF98Cu;
            // 0x1cf990: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF994u; }
        if (ctx->pc != 0x1CF994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF994u; }
        if (ctx->pc != 0x1CF994u) { return; }
    }
    ctx->pc = 0x1CF994u;
    // 0x1cf994: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1cf994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1cf998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf99c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf9a0: 0xc060604  jal         func_181810
    ctx->pc = 0x1CF9A0u;
    SET_GPR_U32(ctx, 31, 0x1CF9A8u);
    ctx->pc = 0x1CF9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9A0u;
            // 0x1cf9a4: 0x24c6aac0  addiu       $a2, $a2, -0x5540 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9A8u; }
        if (ctx->pc != 0x1CF9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9A8u; }
        if (ctx->pc != 0x1CF9A8u) { return; }
    }
    ctx->pc = 0x1CF9A8u;
    // 0x1cf9a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9b0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1CF9B0u;
    SET_GPR_U32(ctx, 31, 0x1CF9B8u);
    ctx->pc = 0x1CF9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9B0u;
            // 0x1cf9b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9B8u; }
        if (ctx->pc != 0x1CF9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9B8u; }
        if (ctx->pc != 0x1CF9B8u) { return; }
    }
    ctx->pc = 0x1CF9B8u;
    // 0x1cf9b8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1cf9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1cf9bc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1CF9BCu;
    SET_GPR_U32(ctx, 31, 0x1CF9C4u);
    ctx->pc = 0x1CF9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9BCu;
            // 0x1cf9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9C4u; }
        if (ctx->pc != 0x1CF9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9C4u; }
        if (ctx->pc != 0x1CF9C4u) { return; }
    }
    ctx->pc = 0x1CF9C4u;
    // 0x1cf9c4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1CF9C4u;
    SET_GPR_U32(ctx, 31, 0x1CF9CCu);
    ctx->pc = 0x1CF9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9C4u;
            // 0x1cf9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9CCu; }
        if (ctx->pc != 0x1CF9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9CCu; }
        if (ctx->pc != 0x1CF9CCu) { return; }
    }
    ctx->pc = 0x1CF9CCu;
    // 0x1cf9cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cf9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf9d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9d4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1cf9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cf9d8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1cf9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cf9dc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1CF9DCu;
    SET_GPR_U32(ctx, 31, 0x1CF9E4u);
    ctx->pc = 0x1CF9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9DCu;
            // 0x1cf9e0: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9E4u; }
        if (ctx->pc != 0x1CF9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9E4u; }
        if (ctx->pc != 0x1CF9E4u) { return; }
    }
    ctx->pc = 0x1CF9E4u;
    // 0x1cf9e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cf9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf9e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9F0u;
            // 0x1cf9f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF9F8u;
}
