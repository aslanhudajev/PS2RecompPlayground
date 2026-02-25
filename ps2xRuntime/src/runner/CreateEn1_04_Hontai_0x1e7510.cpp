#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn1_04_Hontai
// Address: 0x1e7510 - 0x1e75f8
void CreateEn1_04_Hontai_0x1e7510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn1_04_Hontai_0x1e7510");
#endif

    ctx->pc = 0x1e7510u;

    // 0x1e7510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7514: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1e7514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1e7518: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e751c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7520: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E7520u;
    SET_GPR_U32(ctx, 31, 0x1E7528u);
    ctx->pc = 0x1E7524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7520u;
            // 0x1e7524: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7528u; }
        if (ctx->pc != 0x1E7528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7528u; }
        if (ctx->pc != 0x1E7528u) { return; }
    }
    ctx->pc = 0x1E7528u;
    // 0x1e7528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e7528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e752c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1e752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1e7530: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1e7530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1e7534: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1E7534u;
    SET_GPR_U32(ctx, 31, 0x1E753Cu);
    ctx->pc = 0x1E7538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7534u;
            // 0x1e7538: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E753Cu; }
        if (ctx->pc != 0x1E753Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E753Cu; }
        if (ctx->pc != 0x1E753Cu) { return; }
    }
    ctx->pc = 0x1E753Cu;
    // 0x1e753c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E753Cu;
    SET_GPR_U32(ctx, 31, 0x1E7544u);
    ctx->pc = 0x1E7540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E753Cu;
            // 0x1e7540: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7544u; }
        if (ctx->pc != 0x1E7544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7544u; }
        if (ctx->pc != 0x1E7544u) { return; }
    }
    ctx->pc = 0x1E7544u;
    // 0x1e7544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e7544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7548: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1E7548u;
    SET_GPR_U32(ctx, 31, 0x1E7550u);
    ctx->pc = 0x1E754Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7548u;
            // 0x1e754c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7550u; }
        if (ctx->pc != 0x1E7550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7550u; }
        if (ctx->pc != 0x1E7550u) { return; }
    }
    ctx->pc = 0x1E7550u;
    // 0x1e7550: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e7550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e7554: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e7554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e7558: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1E7558u;
    SET_GPR_U32(ctx, 31, 0x1E7560u);
    ctx->pc = 0x1E755Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7558u;
            // 0x1e755c: 0xac222e10  sw          $v0, 0x2E10($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7560u; }
        if (ctx->pc != 0x1E7560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7560u; }
        if (ctx->pc != 0x1E7560u) { return; }
    }
    ctx->pc = 0x1E7560u;
    // 0x1e7560: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e7560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e7564: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7568: 0xac222e14  sw          $v0, 0x2E14($at)
    ctx->pc = 0x1e7568u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11796), GPR_U32(ctx, 2));
    // 0x1e756c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e756cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7570: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e7570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e7574: 0x8c272e10  lw          $a3, 0x2E10($at)
    ctx->pc = 0x1e7574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11792)));
    // 0x1e7578: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e7578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e757c: 0x8c282e14  lw          $t0, 0x2E14($at)
    ctx->pc = 0x1e757cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11796)));
    // 0x1e7580: 0xc060614  jal         func_181850
    ctx->pc = 0x1E7580u;
    SET_GPR_U32(ctx, 31, 0x1E7588u);
    ctx->pc = 0x1E7584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7580u;
            // 0x1e7584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7588u; }
        if (ctx->pc != 0x1E7588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7588u; }
        if (ctx->pc != 0x1E7588u) { return; }
    }
    ctx->pc = 0x1E7588u;
    // 0x1e7588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e758c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1E758Cu;
    SET_GPR_U32(ctx, 31, 0x1E7594u);
    ctx->pc = 0x1E7590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E758Cu;
            // 0x1e7590: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7594u; }
        if (ctx->pc != 0x1E7594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7594u; }
        if (ctx->pc != 0x1E7594u) { return; }
    }
    ctx->pc = 0x1E7594u;
    // 0x1e7594: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1e7594u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1e7598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e759c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e75a0: 0xc060604  jal         func_181810
    ctx->pc = 0x1E75A0u;
    SET_GPR_U32(ctx, 31, 0x1E75A8u);
    ctx->pc = 0x1E75A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E75A0u;
            // 0x1e75a4: 0x24c6ab88  addiu       $a2, $a2, -0x5478 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75A8u; }
        if (ctx->pc != 0x1E75A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75A8u; }
        if (ctx->pc != 0x1E75A8u) { return; }
    }
    ctx->pc = 0x1E75A8u;
    // 0x1e75a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e75a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e75acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75b0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1E75B0u;
    SET_GPR_U32(ctx, 31, 0x1E75B8u);
    ctx->pc = 0x1E75B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E75B0u;
            // 0x1e75b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75B8u; }
        if (ctx->pc != 0x1E75B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75B8u; }
        if (ctx->pc != 0x1E75B8u) { return; }
    }
    ctx->pc = 0x1E75B8u;
    // 0x1e75b8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1e75b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1e75bc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1E75BCu;
    SET_GPR_U32(ctx, 31, 0x1E75C4u);
    ctx->pc = 0x1E75C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E75BCu;
            // 0x1e75c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75C4u; }
        if (ctx->pc != 0x1E75C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75C4u; }
        if (ctx->pc != 0x1E75C4u) { return; }
    }
    ctx->pc = 0x1E75C4u;
    // 0x1e75c4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1E75C4u;
    SET_GPR_U32(ctx, 31, 0x1E75CCu);
    ctx->pc = 0x1E75C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E75C4u;
            // 0x1e75c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75CCu; }
        if (ctx->pc != 0x1E75CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75CCu; }
        if (ctx->pc != 0x1E75CCu) { return; }
    }
    ctx->pc = 0x1E75CCu;
    // 0x1e75cc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1e75ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e75d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e75d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e75d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e75d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75d8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1e75d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1e75dc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1E75DCu;
    SET_GPR_U32(ctx, 31, 0x1E75E4u);
    ctx->pc = 0x1E75E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E75DCu;
            // 0x1e75e0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75E4u; }
        if (ctx->pc != 0x1E75E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75E4u; }
        if (ctx->pc != 0x1E75E4u) { return; }
    }
    ctx->pc = 0x1E75E4u;
    // 0x1e75e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e75e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e75e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e75e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e75ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e75ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e75f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E75F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E75F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E75F0u;
            // 0x1e75f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E75F8u;
}
