#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn7_01_Hontai
// Address: 0x1af3b0 - 0x1af4a8
void CreateEn7_01_Hontai_0x1af3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn7_01_Hontai_0x1af3b0");
#endif

    ctx->pc = 0x1af3b0u;

    // 0x1af3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af3b4: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1af3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1af3b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af3bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af3c0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AF3C0u;
    SET_GPR_U32(ctx, 31, 0x1AF3C8u);
    ctx->pc = 0x1AF3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3C0u;
            // 0x1af3c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3C8u; }
        if (ctx->pc != 0x1AF3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3C8u; }
        if (ctx->pc != 0x1AF3C8u) { return; }
    }
    ctx->pc = 0x1AF3C8u;
    // 0x1af3c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1af3c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3cc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1af3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1af3d0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1af3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1af3d4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1AF3D4u;
    SET_GPR_U32(ctx, 31, 0x1AF3DCu);
    ctx->pc = 0x1AF3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3D4u;
            // 0x1af3d8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3DCu; }
        if (ctx->pc != 0x1AF3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3DCu; }
        if (ctx->pc != 0x1AF3DCu) { return; }
    }
    ctx->pc = 0x1AF3DCu;
    // 0x1af3dc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1AF3DCu;
    SET_GPR_U32(ctx, 31, 0x1AF3E4u);
    ctx->pc = 0x1AF3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3DCu;
            // 0x1af3e0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3E4u; }
        if (ctx->pc != 0x1AF3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3E4u; }
        if (ctx->pc != 0x1AF3E4u) { return; }
    }
    ctx->pc = 0x1AF3E4u;
    // 0x1af3e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1af3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1af3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3f0: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1AF3F0u;
    SET_GPR_U32(ctx, 31, 0x1AF3F8u);
    ctx->pc = 0x1AF3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3F0u;
            // 0x1af3f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3F8u; }
        if (ctx->pc != 0x1AF3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3F8u; }
        if (ctx->pc != 0x1AF3F8u) { return; }
    }
    ctx->pc = 0x1AF3F8u;
    // 0x1af3f8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1AF3F8u;
    SET_GPR_U32(ctx, 31, 0x1AF400u);
    ctx->pc = 0x1AF3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3F8u;
            // 0x1af3fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF400u; }
        if (ctx->pc != 0x1AF400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF400u; }
        if (ctx->pc != 0x1AF400u) { return; }
    }
    ctx->pc = 0x1AF400u;
    // 0x1af400: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1af400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1af404: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1af404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af408: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1AF408u;
    SET_GPR_U32(ctx, 31, 0x1AF410u);
    ctx->pc = 0x1AF40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF408u;
            // 0x1af40c: 0xac221b28  sw          $v0, 0x1B28($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF410u; }
        if (ctx->pc != 0x1AF410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF410u; }
        if (ctx->pc != 0x1AF410u) { return; }
    }
    ctx->pc = 0x1AF410u;
    // 0x1af410: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1af410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1af414: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1af414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af418: 0xac221b2c  sw          $v0, 0x1B2C($at)
    ctx->pc = 0x1af418u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6956), GPR_U32(ctx, 2));
    // 0x1af41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af420: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1af420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1af424: 0x8c271b28  lw          $a3, 0x1B28($at)
    ctx->pc = 0x1af424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6952)));
    // 0x1af428: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1af428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1af42c: 0x8c281b2c  lw          $t0, 0x1B2C($at)
    ctx->pc = 0x1af42cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6956)));
    // 0x1af430: 0xc060614  jal         func_181850
    ctx->pc = 0x1AF430u;
    SET_GPR_U32(ctx, 31, 0x1AF438u);
    ctx->pc = 0x1AF434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF430u;
            // 0x1af434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF438u; }
        if (ctx->pc != 0x1AF438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF438u; }
        if (ctx->pc != 0x1AF438u) { return; }
    }
    ctx->pc = 0x1AF438u;
    // 0x1af438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af43c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1AF43Cu;
    SET_GPR_U32(ctx, 31, 0x1AF444u);
    ctx->pc = 0x1AF440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF43Cu;
            // 0x1af440: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF444u; }
        if (ctx->pc != 0x1AF444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF444u; }
        if (ctx->pc != 0x1AF444u) { return; }
    }
    ctx->pc = 0x1AF444u;
    // 0x1af444: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1af444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1af448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af44c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af450: 0xc060604  jal         func_181810
    ctx->pc = 0x1AF450u;
    SET_GPR_U32(ctx, 31, 0x1AF458u);
    ctx->pc = 0x1AF454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF450u;
            // 0x1af454: 0x24c6a9b0  addiu       $a2, $a2, -0x5650 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF458u; }
        if (ctx->pc != 0x1AF458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF458u; }
        if (ctx->pc != 0x1AF458u) { return; }
    }
    ctx->pc = 0x1AF458u;
    // 0x1af458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af45c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af460: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1AF460u;
    SET_GPR_U32(ctx, 31, 0x1AF468u);
    ctx->pc = 0x1AF464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF460u;
            // 0x1af464: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF468u; }
        if (ctx->pc != 0x1AF468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF468u; }
        if (ctx->pc != 0x1AF468u) { return; }
    }
    ctx->pc = 0x1AF468u;
    // 0x1af468: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1af468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1af46c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1AF46Cu;
    SET_GPR_U32(ctx, 31, 0x1AF474u);
    ctx->pc = 0x1AF470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF46Cu;
            // 0x1af470: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF474u; }
        if (ctx->pc != 0x1AF474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF474u; }
        if (ctx->pc != 0x1AF474u) { return; }
    }
    ctx->pc = 0x1AF474u;
    // 0x1af474: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1AF474u;
    SET_GPR_U32(ctx, 31, 0x1AF47Cu);
    ctx->pc = 0x1AF478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF474u;
            // 0x1af478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF47Cu; }
        if (ctx->pc != 0x1AF47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF47Cu; }
        if (ctx->pc != 0x1AF47Cu) { return; }
    }
    ctx->pc = 0x1AF47Cu;
    // 0x1af47c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1af47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af484: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1af484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1af488: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1af488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1af48c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1AF48Cu;
    SET_GPR_U32(ctx, 31, 0x1AF494u);
    ctx->pc = 0x1AF490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF48Cu;
            // 0x1af490: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF494u; }
        if (ctx->pc != 0x1AF494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF494u; }
        if (ctx->pc != 0x1AF494u) { return; }
    }
    ctx->pc = 0x1AF494u;
    // 0x1af494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af49c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF4A0u;
            // 0x1af4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF4A8u;
}
