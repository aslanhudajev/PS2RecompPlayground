#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex1_04_Hontai
// Address: 0x1cddc0 - 0x1cdeb8
void CreateEnex1_04_Hontai_0x1cddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex1_04_Hontai_0x1cddc0");
#endif

    ctx->pc = 0x1cddc0u;

    // 0x1cddc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cddc4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1cddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1cddc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cddcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cddccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cddd0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1CDDD0u;
    SET_GPR_U32(ctx, 31, 0x1CDDD8u);
    ctx->pc = 0x1CDDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDD0u;
            // 0x1cddd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDD8u; }
        if (ctx->pc != 0x1CDDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDD8u; }
        if (ctx->pc != 0x1CDDD8u) { return; }
    }
    ctx->pc = 0x1CDDD8u;
    // 0x1cddd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cddd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdddc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1cdddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1cdde0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1cdde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1cdde4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1CDDE4u;
    SET_GPR_U32(ctx, 31, 0x1CDDECu);
    ctx->pc = 0x1CDDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDE4u;
            // 0x1cdde8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDECu; }
        if (ctx->pc != 0x1CDDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDECu; }
        if (ctx->pc != 0x1CDDECu) { return; }
    }
    ctx->pc = 0x1CDDECu;
    // 0x1cddec: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1CDDECu;
    SET_GPR_U32(ctx, 31, 0x1CDDF4u);
    ctx->pc = 0x1CDDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDECu;
            // 0x1cddf0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDF4u; }
        if (ctx->pc != 0x1CDDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDF4u; }
        if (ctx->pc != 0x1CDDF4u) { return; }
    }
    ctx->pc = 0x1CDDF4u;
    // 0x1cddf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cddf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cddf8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cddfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde00: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1CDE00u;
    SET_GPR_U32(ctx, 31, 0x1CDE08u);
    ctx->pc = 0x1CDE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE00u;
            // 0x1cde04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE08u; }
        if (ctx->pc != 0x1CDE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE08u; }
        if (ctx->pc != 0x1CDE08u) { return; }
    }
    ctx->pc = 0x1CDE08u;
    // 0x1cde08: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1CDE08u;
    SET_GPR_U32(ctx, 31, 0x1CDE10u);
    ctx->pc = 0x1CDE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE08u;
            // 0x1cde0c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE10u; }
        if (ctx->pc != 0x1CDE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE10u; }
        if (ctx->pc != 0x1CDE10u) { return; }
    }
    ctx->pc = 0x1CDE10u;
    // 0x1cde10: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cde10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cde14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cde14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cde18: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1CDE18u;
    SET_GPR_U32(ctx, 31, 0x1CDE20u);
    ctx->pc = 0x1CDE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE18u;
            // 0x1cde1c: 0xac221d20  sw          $v0, 0x1D20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE20u; }
        if (ctx->pc != 0x1CDE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE20u; }
        if (ctx->pc != 0x1CDE20u) { return; }
    }
    ctx->pc = 0x1CDE20u;
    // 0x1cde20: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cde20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cde24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cde24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde28: 0xac221d24  sw          $v0, 0x1D24($at)
    ctx->pc = 0x1cde28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7460), GPR_U32(ctx, 2));
    // 0x1cde2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cde2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde30: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cde30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cde34: 0x8c271d20  lw          $a3, 0x1D20($at)
    ctx->pc = 0x1cde34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7456)));
    // 0x1cde38: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cde38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cde3c: 0x8c281d24  lw          $t0, 0x1D24($at)
    ctx->pc = 0x1cde3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7460)));
    // 0x1cde40: 0xc060614  jal         func_181850
    ctx->pc = 0x1CDE40u;
    SET_GPR_U32(ctx, 31, 0x1CDE48u);
    ctx->pc = 0x1CDE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE40u;
            // 0x1cde44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE48u; }
        if (ctx->pc != 0x1CDE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE48u; }
        if (ctx->pc != 0x1CDE48u) { return; }
    }
    ctx->pc = 0x1CDE48u;
    // 0x1cde48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cde48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde4c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1CDE4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE54u);
    ctx->pc = 0x1CDE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE4Cu;
            // 0x1cde50: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE54u; }
        if (ctx->pc != 0x1CDE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE54u; }
        if (ctx->pc != 0x1CDE54u) { return; }
    }
    ctx->pc = 0x1CDE54u;
    // 0x1cde54: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1cde54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1cde58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cde58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cde5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cde60: 0xc060604  jal         func_181810
    ctx->pc = 0x1CDE60u;
    SET_GPR_U32(ctx, 31, 0x1CDE68u);
    ctx->pc = 0x1CDE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE60u;
            // 0x1cde64: 0x24c6aab0  addiu       $a2, $a2, -0x5550 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE68u; }
        if (ctx->pc != 0x1CDE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE68u; }
        if (ctx->pc != 0x1CDE68u) { return; }
    }
    ctx->pc = 0x1CDE68u;
    // 0x1cde68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cde68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cde6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde70: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1CDE70u;
    SET_GPR_U32(ctx, 31, 0x1CDE78u);
    ctx->pc = 0x1CDE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE70u;
            // 0x1cde74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE78u; }
        if (ctx->pc != 0x1CDE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE78u; }
        if (ctx->pc != 0x1CDE78u) { return; }
    }
    ctx->pc = 0x1CDE78u;
    // 0x1cde78: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1cde78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1cde7c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1CDE7Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE84u);
    ctx->pc = 0x1CDE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE7Cu;
            // 0x1cde80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE84u; }
        if (ctx->pc != 0x1CDE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE84u; }
        if (ctx->pc != 0x1CDE84u) { return; }
    }
    ctx->pc = 0x1CDE84u;
    // 0x1cde84: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1CDE84u;
    SET_GPR_U32(ctx, 31, 0x1CDE8Cu);
    ctx->pc = 0x1CDE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE84u;
            // 0x1cde88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE8Cu; }
        if (ctx->pc != 0x1CDE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE8Cu; }
        if (ctx->pc != 0x1CDE8Cu) { return; }
    }
    ctx->pc = 0x1CDE8Cu;
    // 0x1cde8c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1cde8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cde90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cde90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cde94: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1cde94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cde98: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1cde98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1cde9c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1CDE9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDEA4u);
    ctx->pc = 0x1CDEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE9Cu;
            // 0x1cdea0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEA4u; }
        if (ctx->pc != 0x1CDEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEA4u; }
        if (ctx->pc != 0x1CDEA4u) { return; }
    }
    ctx->pc = 0x1CDEA4u;
    // 0x1cdea4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cdea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cdea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdeac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cdeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEB0u;
            // 0x1cdeb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDEB8u;
}
