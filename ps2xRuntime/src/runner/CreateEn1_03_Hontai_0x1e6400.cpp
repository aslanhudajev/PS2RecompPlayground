#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn1_03_Hontai
// Address: 0x1e6400 - 0x1e64e8
void CreateEn1_03_Hontai_0x1e6400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn1_03_Hontai_0x1e6400");
#endif

    ctx->pc = 0x1e6400u;

    // 0x1e6400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6404: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1e6404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1e6408: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e640c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6410: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E6410u;
    SET_GPR_U32(ctx, 31, 0x1E6418u);
    ctx->pc = 0x1E6414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6410u;
            // 0x1e6414: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6418u; }
        if (ctx->pc != 0x1E6418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6418u; }
        if (ctx->pc != 0x1E6418u) { return; }
    }
    ctx->pc = 0x1E6418u;
    // 0x1e6418: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e6418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e641c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1e641cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1e6420: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1e6420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1e6424: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1E6424u;
    SET_GPR_U32(ctx, 31, 0x1E642Cu);
    ctx->pc = 0x1E6428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6424u;
            // 0x1e6428: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E642Cu; }
        if (ctx->pc != 0x1E642Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E642Cu; }
        if (ctx->pc != 0x1E642Cu) { return; }
    }
    ctx->pc = 0x1E642Cu;
    // 0x1e642c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E642Cu;
    SET_GPR_U32(ctx, 31, 0x1E6434u);
    ctx->pc = 0x1E6430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E642Cu;
            // 0x1e6430: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6434u; }
        if (ctx->pc != 0x1E6434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6434u; }
        if (ctx->pc != 0x1E6434u) { return; }
    }
    ctx->pc = 0x1E6434u;
    // 0x1e6434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e6434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6438: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1E6438u;
    SET_GPR_U32(ctx, 31, 0x1E6440u);
    ctx->pc = 0x1E643Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6438u;
            // 0x1e643c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6440u; }
        if (ctx->pc != 0x1E6440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6440u; }
        if (ctx->pc != 0x1E6440u) { return; }
    }
    ctx->pc = 0x1E6440u;
    // 0x1e6440: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e6440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e6444: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e6444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e6448: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1E6448u;
    SET_GPR_U32(ctx, 31, 0x1E6450u);
    ctx->pc = 0x1E644Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6448u;
            // 0x1e644c: 0xac222e08  sw          $v0, 0x2E08($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6450u; }
        if (ctx->pc != 0x1E6450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6450u; }
        if (ctx->pc != 0x1E6450u) { return; }
    }
    ctx->pc = 0x1E6450u;
    // 0x1e6450: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e6450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e6454: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e6454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6458: 0xac222e0c  sw          $v0, 0x2E0C($at)
    ctx->pc = 0x1e6458u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11788), GPR_U32(ctx, 2));
    // 0x1e645c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e645cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6460: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e6460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e6464: 0x8c272e08  lw          $a3, 0x2E08($at)
    ctx->pc = 0x1e6464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11784)));
    // 0x1e6468: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e6468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e646c: 0x8c282e0c  lw          $t0, 0x2E0C($at)
    ctx->pc = 0x1e646cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11788)));
    // 0x1e6470: 0xc060614  jal         func_181850
    ctx->pc = 0x1E6470u;
    SET_GPR_U32(ctx, 31, 0x1E6478u);
    ctx->pc = 0x1E6474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6470u;
            // 0x1e6474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6478u; }
        if (ctx->pc != 0x1E6478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6478u; }
        if (ctx->pc != 0x1E6478u) { return; }
    }
    ctx->pc = 0x1E6478u;
    // 0x1e6478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e647c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1E647Cu;
    SET_GPR_U32(ctx, 31, 0x1E6484u);
    ctx->pc = 0x1E6480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E647Cu;
            // 0x1e6480: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6484u; }
        if (ctx->pc != 0x1E6484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6484u; }
        if (ctx->pc != 0x1E6484u) { return; }
    }
    ctx->pc = 0x1E6484u;
    // 0x1e6484: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1e6484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1e6488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e648c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e648cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6490: 0xc060604  jal         func_181810
    ctx->pc = 0x1E6490u;
    SET_GPR_U32(ctx, 31, 0x1E6498u);
    ctx->pc = 0x1E6494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6490u;
            // 0x1e6494: 0x24c6ab80  addiu       $a2, $a2, -0x5480 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6498u; }
        if (ctx->pc != 0x1E6498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6498u; }
        if (ctx->pc != 0x1E6498u) { return; }
    }
    ctx->pc = 0x1E6498u;
    // 0x1e6498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e649c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e649cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e64a0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1E64A0u;
    SET_GPR_U32(ctx, 31, 0x1E64A8u);
    ctx->pc = 0x1E64A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E64A0u;
            // 0x1e64a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64A8u; }
        if (ctx->pc != 0x1E64A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64A8u; }
        if (ctx->pc != 0x1E64A8u) { return; }
    }
    ctx->pc = 0x1E64A8u;
    // 0x1e64a8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1e64a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1e64ac: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1E64ACu;
    SET_GPR_U32(ctx, 31, 0x1E64B4u);
    ctx->pc = 0x1E64B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E64ACu;
            // 0x1e64b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64B4u; }
        if (ctx->pc != 0x1E64B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64B4u; }
        if (ctx->pc != 0x1E64B4u) { return; }
    }
    ctx->pc = 0x1E64B4u;
    // 0x1e64b4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1E64B4u;
    SET_GPR_U32(ctx, 31, 0x1E64BCu);
    ctx->pc = 0x1E64B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E64B4u;
            // 0x1e64b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64BCu; }
        if (ctx->pc != 0x1E64BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64BCu; }
        if (ctx->pc != 0x1E64BCu) { return; }
    }
    ctx->pc = 0x1E64BCu;
    // 0x1e64bc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1e64bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e64c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e64c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e64c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e64c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e64c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e64c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e64cc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1E64CCu;
    SET_GPR_U32(ctx, 31, 0x1E64D4u);
    ctx->pc = 0x1E64D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E64CCu;
            // 0x1e64d0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64D4u; }
        if (ctx->pc != 0x1E64D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64D4u; }
        if (ctx->pc != 0x1E64D4u) { return; }
    }
    ctx->pc = 0x1E64D4u;
    // 0x1e64d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e64d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e64d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e64d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e64dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e64dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e64e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E64E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E64E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E64E0u;
            // 0x1e64e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E64E8u;
}
