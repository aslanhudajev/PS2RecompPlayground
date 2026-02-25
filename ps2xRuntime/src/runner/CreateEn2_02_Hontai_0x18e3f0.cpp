#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn2_02_Hontai
// Address: 0x18e3f0 - 0x18e4e8
void CreateEn2_02_Hontai_0x18e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn2_02_Hontai_0x18e3f0");
#endif

    ctx->pc = 0x18e3f0u;

    // 0x18e3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e3f4: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x18e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x18e3f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e3fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e400: 0xc060694  jal         func_181A50
    ctx->pc = 0x18E400u;
    SET_GPR_U32(ctx, 31, 0x18E408u);
    ctx->pc = 0x18E404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E400u;
            // 0x18e404: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E408u; }
        if (ctx->pc != 0x18E408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E408u; }
        if (ctx->pc != 0x18E408u) { return; }
    }
    ctx->pc = 0x18E408u;
    // 0x18e408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18e408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e40c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x18e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x18e410: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x18e410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x18e414: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x18E414u;
    SET_GPR_U32(ctx, 31, 0x18E41Cu);
    ctx->pc = 0x18E418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E414u;
            // 0x18e418: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E41Cu; }
        if (ctx->pc != 0x18E41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E41Cu; }
        if (ctx->pc != 0x18E41Cu) { return; }
    }
    ctx->pc = 0x18E41Cu;
    // 0x18e41c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18E41Cu;
    SET_GPR_U32(ctx, 31, 0x18E424u);
    ctx->pc = 0x18E420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E41Cu;
            // 0x18e420: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E424u; }
        if (ctx->pc != 0x18E424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E424u; }
        if (ctx->pc != 0x18E424u) { return; }
    }
    ctx->pc = 0x18E424u;
    // 0x18e424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e428: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18e428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18e42c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e430: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x18E430u;
    SET_GPR_U32(ctx, 31, 0x18E438u);
    ctx->pc = 0x18E434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E430u;
            // 0x18e434: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E438u; }
        if (ctx->pc != 0x18E438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E438u; }
        if (ctx->pc != 0x18E438u) { return; }
    }
    ctx->pc = 0x18E438u;
    // 0x18e438: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x18E438u;
    SET_GPR_U32(ctx, 31, 0x18E440u);
    ctx->pc = 0x18E43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E438u;
            // 0x18e43c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E440u; }
        if (ctx->pc != 0x18E440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E440u; }
        if (ctx->pc != 0x18E440u) { return; }
    }
    ctx->pc = 0x18E440u;
    // 0x18e440: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18e440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18e444: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18e444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18e448: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x18E448u;
    SET_GPR_U32(ctx, 31, 0x18E450u);
    ctx->pc = 0x18E44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E448u;
            // 0x18e44c: 0xac220230  sw          $v0, 0x230($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E450u; }
        if (ctx->pc != 0x18E450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E450u; }
        if (ctx->pc != 0x18E450u) { return; }
    }
    ctx->pc = 0x18E450u;
    // 0x18e450: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18e450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18e454: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18e454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e458: 0xac220234  sw          $v0, 0x234($at)
    ctx->pc = 0x18e458u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 564), GPR_U32(ctx, 2));
    // 0x18e45c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e460: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18e460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18e464: 0x8c270230  lw          $a3, 0x230($at)
    ctx->pc = 0x18e464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 560)));
    // 0x18e468: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18e468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18e46c: 0x8c280234  lw          $t0, 0x234($at)
    ctx->pc = 0x18e46cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 564)));
    // 0x18e470: 0xc060614  jal         func_181850
    ctx->pc = 0x18E470u;
    SET_GPR_U32(ctx, 31, 0x18E478u);
    ctx->pc = 0x18E474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E470u;
            // 0x18e474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E478u; }
        if (ctx->pc != 0x18E478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E478u; }
        if (ctx->pc != 0x18E478u) { return; }
    }
    ctx->pc = 0x18E478u;
    // 0x18e478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e47c: 0xc06060c  jal         func_181830
    ctx->pc = 0x18E47Cu;
    SET_GPR_U32(ctx, 31, 0x18E484u);
    ctx->pc = 0x18E480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E47Cu;
            // 0x18e480: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E484u; }
        if (ctx->pc != 0x18E484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E484u; }
        if (ctx->pc != 0x18E484u) { return; }
    }
    ctx->pc = 0x18E484u;
    // 0x18e484: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x18e484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x18e488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e48c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e490: 0xc060604  jal         func_181810
    ctx->pc = 0x18E490u;
    SET_GPR_U32(ctx, 31, 0x18E498u);
    ctx->pc = 0x18E494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E490u;
            // 0x18e494: 0x24c6a578  addiu       $a2, $a2, -0x5A88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E498u; }
        if (ctx->pc != 0x18E498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E498u; }
        if (ctx->pc != 0x18E498u) { return; }
    }
    ctx->pc = 0x18E498u;
    // 0x18e498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e49c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4a0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x18E4A0u;
    SET_GPR_U32(ctx, 31, 0x18E4A8u);
    ctx->pc = 0x18E4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4A0u;
            // 0x18e4a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4A8u; }
        if (ctx->pc != 0x18E4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4A8u; }
        if (ctx->pc != 0x18E4A8u) { return; }
    }
    ctx->pc = 0x18E4A8u;
    // 0x18e4a8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x18e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x18e4ac: 0xc046376  jal         func_118DD8
    ctx->pc = 0x18E4ACu;
    SET_GPR_U32(ctx, 31, 0x18E4B4u);
    ctx->pc = 0x18E4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4ACu;
            // 0x18e4b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4B4u; }
        if (ctx->pc != 0x18E4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4B4u; }
        if (ctx->pc != 0x18E4B4u) { return; }
    }
    ctx->pc = 0x18E4B4u;
    // 0x18e4b4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x18E4B4u;
    SET_GPR_U32(ctx, 31, 0x18E4BCu);
    ctx->pc = 0x18E4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4B4u;
            // 0x18e4b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4BCu; }
        if (ctx->pc != 0x18E4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4BCu; }
        if (ctx->pc != 0x18E4BCu) { return; }
    }
    ctx->pc = 0x18E4BCu;
    // 0x18e4bc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x18e4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18e4c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e4c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4cc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x18E4CCu;
    SET_GPR_U32(ctx, 31, 0x18E4D4u);
    ctx->pc = 0x18E4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4CCu;
            // 0x18e4d0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4D4u; }
        if (ctx->pc != 0x18E4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4D4u; }
        if (ctx->pc != 0x18E4D4u) { return; }
    }
    ctx->pc = 0x18E4D4u;
    // 0x18e4d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18e4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e4d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e4dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18E4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E4E0u;
            // 0x18e4e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E4E8u;
}
