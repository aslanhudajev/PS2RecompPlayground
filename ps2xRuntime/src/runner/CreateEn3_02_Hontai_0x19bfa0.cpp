#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn3_02_Hontai
// Address: 0x19bfa0 - 0x19c098
void CreateEn3_02_Hontai_0x19bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn3_02_Hontai_0x19bfa0");
#endif

    ctx->pc = 0x19bfa0u;

    // 0x19bfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19bfa4: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x19bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x19bfa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19bfac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bfb0: 0xc060694  jal         func_181A50
    ctx->pc = 0x19BFB0u;
    SET_GPR_U32(ctx, 31, 0x19BFB8u);
    ctx->pc = 0x19BFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFB0u;
            // 0x19bfb4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFB8u; }
        if (ctx->pc != 0x19BFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFB8u; }
        if (ctx->pc != 0x19BFB8u) { return; }
    }
    ctx->pc = 0x19BFB8u;
    // 0x19bfb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19bfb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfbc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x19bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x19bfc0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x19bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x19bfc4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x19BFC4u;
    SET_GPR_U32(ctx, 31, 0x19BFCCu);
    ctx->pc = 0x19BFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFC4u;
            // 0x19bfc8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFCCu; }
        if (ctx->pc != 0x19BFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFCCu; }
        if (ctx->pc != 0x19BFCCu) { return; }
    }
    ctx->pc = 0x19BFCCu;
    // 0x19bfcc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x19BFCCu;
    SET_GPR_U32(ctx, 31, 0x19BFD4u);
    ctx->pc = 0x19BFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFCCu;
            // 0x19bfd0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFD4u; }
        if (ctx->pc != 0x19BFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFD4u; }
        if (ctx->pc != 0x19BFD4u) { return; }
    }
    ctx->pc = 0x19BFD4u;
    // 0x19bfd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19bfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfd8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19bfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19bfdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfe0: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x19BFE0u;
    SET_GPR_U32(ctx, 31, 0x19BFE8u);
    ctx->pc = 0x19BFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFE0u;
            // 0x19bfe4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFE8u; }
        if (ctx->pc != 0x19BFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFE8u; }
        if (ctx->pc != 0x19BFE8u) { return; }
    }
    ctx->pc = 0x19BFE8u;
    // 0x19bfe8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x19BFE8u;
    SET_GPR_U32(ctx, 31, 0x19BFF0u);
    ctx->pc = 0x19BFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFE8u;
            // 0x19bfec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFF0u; }
        if (ctx->pc != 0x19BFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFF0u; }
        if (ctx->pc != 0x19BFF0u) { return; }
    }
    ctx->pc = 0x19BFF0u;
    // 0x19bff0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19bff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19bff4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19bff8: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x19BFF8u;
    SET_GPR_U32(ctx, 31, 0x19C000u);
    ctx->pc = 0x19BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFF8u;
            // 0x19bffc: 0xac221a88  sw          $v0, 0x1A88($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C000u; }
        if (ctx->pc != 0x19C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C000u; }
        if (ctx->pc != 0x19C000u) { return; }
    }
    ctx->pc = 0x19C000u;
    // 0x19c000: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19c000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19c004: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19c004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c008: 0xac221a8c  sw          $v0, 0x1A8C($at)
    ctx->pc = 0x19c008u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6796), GPR_U32(ctx, 2));
    // 0x19c00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c010: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19c010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19c014: 0x8c271a88  lw          $a3, 0x1A88($at)
    ctx->pc = 0x19c014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6792)));
    // 0x19c018: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19c018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19c01c: 0x8c281a8c  lw          $t0, 0x1A8C($at)
    ctx->pc = 0x19c01cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6796)));
    // 0x19c020: 0xc060614  jal         func_181850
    ctx->pc = 0x19C020u;
    SET_GPR_U32(ctx, 31, 0x19C028u);
    ctx->pc = 0x19C024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C020u;
            // 0x19c024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C028u; }
        if (ctx->pc != 0x19C028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C028u; }
        if (ctx->pc != 0x19C028u) { return; }
    }
    ctx->pc = 0x19C028u;
    // 0x19c028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c02c: 0xc06060c  jal         func_181830
    ctx->pc = 0x19C02Cu;
    SET_GPR_U32(ctx, 31, 0x19C034u);
    ctx->pc = 0x19C030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C02Cu;
            // 0x19c030: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C034u; }
        if (ctx->pc != 0x19C034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C034u; }
        if (ctx->pc != 0x19C034u) { return; }
    }
    ctx->pc = 0x19C034u;
    // 0x19c034: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x19c034u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x19c038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c03c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19c03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c040: 0xc060604  jal         func_181810
    ctx->pc = 0x19C040u;
    SET_GPR_U32(ctx, 31, 0x19C048u);
    ctx->pc = 0x19C044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C040u;
            // 0x19c044: 0x24c6a918  addiu       $a2, $a2, -0x56E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C048u; }
        if (ctx->pc != 0x19C048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C048u; }
        if (ctx->pc != 0x19C048u) { return; }
    }
    ctx->pc = 0x19C048u;
    // 0x19c048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c050: 0xc0605dc  jal         func_181770
    ctx->pc = 0x19C050u;
    SET_GPR_U32(ctx, 31, 0x19C058u);
    ctx->pc = 0x19C054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C050u;
            // 0x19c054: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C058u; }
        if (ctx->pc != 0x19C058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C058u; }
        if (ctx->pc != 0x19C058u) { return; }
    }
    ctx->pc = 0x19C058u;
    // 0x19c058: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x19c058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x19c05c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x19C05Cu;
    SET_GPR_U32(ctx, 31, 0x19C064u);
    ctx->pc = 0x19C060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C05Cu;
            // 0x19c060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C064u; }
        if (ctx->pc != 0x19C064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C064u; }
        if (ctx->pc != 0x19C064u) { return; }
    }
    ctx->pc = 0x19C064u;
    // 0x19c064: 0xc0605cc  jal         func_181730
    ctx->pc = 0x19C064u;
    SET_GPR_U32(ctx, 31, 0x19C06Cu);
    ctx->pc = 0x19C068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C064u;
            // 0x19c068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C06Cu; }
        if (ctx->pc != 0x19C06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C06Cu; }
        if (ctx->pc != 0x19C06Cu) { return; }
    }
    ctx->pc = 0x19C06Cu;
    // 0x19c06c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x19c06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19c070: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19c070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c074: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x19c074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19c078: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x19c078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x19c07c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x19C07Cu;
    SET_GPR_U32(ctx, 31, 0x19C084u);
    ctx->pc = 0x19C080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C07Cu;
            // 0x19c080: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C084u; }
        if (ctx->pc != 0x19C084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C084u; }
        if (ctx->pc != 0x19C084u) { return; }
    }
    ctx->pc = 0x19C084u;
    // 0x19c084: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c090: 0x3e00008  jr          $ra
    ctx->pc = 0x19C090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C090u;
            // 0x19c094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C098u;
}
