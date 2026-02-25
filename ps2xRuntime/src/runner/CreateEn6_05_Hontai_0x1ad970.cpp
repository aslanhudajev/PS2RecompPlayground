#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_05_Hontai
// Address: 0x1ad970 - 0x1ada60
void CreateEn6_05_Hontai_0x1ad970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_05_Hontai_0x1ad970");
#endif

    ctx->pc = 0x1ad970u;

    // 0x1ad970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ad974: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1ad974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1ad978: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ad978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ad97c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ad97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ad980: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AD980u;
    SET_GPR_U32(ctx, 31, 0x1AD988u);
    ctx->pc = 0x1AD984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD980u;
            // 0x1ad984: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD988u; }
        if (ctx->pc != 0x1AD988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD988u; }
        if (ctx->pc != 0x1AD988u) { return; }
    }
    ctx->pc = 0x1AD988u;
    // 0x1ad988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ad988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad98c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1ad98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1ad990: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1ad990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1ad994: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1AD994u;
    SET_GPR_U32(ctx, 31, 0x1AD99Cu);
    ctx->pc = 0x1AD998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD994u;
            // 0x1ad998: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD99Cu; }
        if (ctx->pc != 0x1AD99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD99Cu; }
        if (ctx->pc != 0x1AD99Cu) { return; }
    }
    ctx->pc = 0x1AD99Cu;
    // 0x1ad99c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1AD99Cu;
    SET_GPR_U32(ctx, 31, 0x1AD9A4u);
    ctx->pc = 0x1AD9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD99Cu;
            // 0x1ad9a0: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9A4u; }
        if (ctx->pc != 0x1AD9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9A4u; }
        if (ctx->pc != 0x1AD9A4u) { return; }
    }
    ctx->pc = 0x1AD9A4u;
    // 0x1ad9a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ad9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ad9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ad9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9b0: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1AD9B0u;
    SET_GPR_U32(ctx, 31, 0x1AD9B8u);
    ctx->pc = 0x1AD9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9B0u;
            // 0x1ad9b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9B8u; }
        if (ctx->pc != 0x1AD9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9B8u; }
        if (ctx->pc != 0x1AD9B8u) { return; }
    }
    ctx->pc = 0x1AD9B8u;
    // 0x1ad9b8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1AD9B8u;
    SET_GPR_U32(ctx, 31, 0x1AD9C0u);
    ctx->pc = 0x1AD9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9B8u;
            // 0x1ad9bc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9C0u; }
        if (ctx->pc != 0x1AD9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9C0u; }
        if (ctx->pc != 0x1AD9C0u) { return; }
    }
    ctx->pc = 0x1AD9C0u;
    // 0x1ad9c0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ad9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ad9c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ad9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ad9c8: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1AD9C8u;
    SET_GPR_U32(ctx, 31, 0x1AD9D0u);
    ctx->pc = 0x1AD9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9C8u;
            // 0x1ad9cc: 0xac221b10  sw          $v0, 0x1B10($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9D0u; }
        if (ctx->pc != 0x1AD9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9D0u; }
        if (ctx->pc != 0x1AD9D0u) { return; }
    }
    ctx->pc = 0x1AD9D0u;
    // 0x1ad9d0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ad9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ad9d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ad9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9d8: 0xac221b14  sw          $v0, 0x1B14($at)
    ctx->pc = 0x1ad9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6932), GPR_U32(ctx, 2));
    // 0x1ad9dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9e0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ad9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ad9e4: 0x8c271b10  lw          $a3, 0x1B10($at)
    ctx->pc = 0x1ad9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6928)));
    // 0x1ad9e8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ad9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ad9ec: 0x8c281b14  lw          $t0, 0x1B14($at)
    ctx->pc = 0x1ad9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6932)));
    // 0x1ad9f0: 0xc060614  jal         func_181850
    ctx->pc = 0x1AD9F0u;
    SET_GPR_U32(ctx, 31, 0x1AD9F8u);
    ctx->pc = 0x1AD9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9F0u;
            // 0x1ad9f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9F8u; }
        if (ctx->pc != 0x1AD9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9F8u; }
        if (ctx->pc != 0x1AD9F8u) { return; }
    }
    ctx->pc = 0x1AD9F8u;
    // 0x1ad9f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad9fc: 0xc06060c  jal         func_181830
    ctx->pc = 0x1AD9FCu;
    SET_GPR_U32(ctx, 31, 0x1ADA04u);
    ctx->pc = 0x1ADA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9FCu;
            // 0x1ada00: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA04u; }
        if (ctx->pc != 0x1ADA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA04u; }
        if (ctx->pc != 0x1ADA04u) { return; }
    }
    ctx->pc = 0x1ADA04u;
    // 0x1ada04: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1ada04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1ada08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ada08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ada0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ada10: 0xc060604  jal         func_181810
    ctx->pc = 0x1ADA10u;
    SET_GPR_U32(ctx, 31, 0x1ADA18u);
    ctx->pc = 0x1ADA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA10u;
            // 0x1ada14: 0x24c6a998  addiu       $a2, $a2, -0x5668 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA18u; }
        if (ctx->pc != 0x1ADA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA18u; }
        if (ctx->pc != 0x1ADA18u) { return; }
    }
    ctx->pc = 0x1ADA18u;
    // 0x1ada18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ada18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ada1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada20: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1ADA20u;
    SET_GPR_U32(ctx, 31, 0x1ADA28u);
    ctx->pc = 0x1ADA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA20u;
            // 0x1ada24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA28u; }
        if (ctx->pc != 0x1ADA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA28u; }
        if (ctx->pc != 0x1ADA28u) { return; }
    }
    ctx->pc = 0x1ADA28u;
    // 0x1ada28: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1ada28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1ada2c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1ADA2Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA34u);
    ctx->pc = 0x1ADA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA2Cu;
            // 0x1ada30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA34u; }
        if (ctx->pc != 0x1ADA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA34u; }
        if (ctx->pc != 0x1ADA34u) { return; }
    }
    ctx->pc = 0x1ADA34u;
    // 0x1ada34: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1ADA34u;
    SET_GPR_U32(ctx, 31, 0x1ADA3Cu);
    ctx->pc = 0x1ADA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA34u;
            // 0x1ada38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA3Cu; }
        if (ctx->pc != 0x1ADA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA3Cu; }
        if (ctx->pc != 0x1ADA3Cu) { return; }
    }
    ctx->pc = 0x1ADA3Cu;
    // 0x1ada3c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1ADA3Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA44u);
    ctx->pc = 0x1ADA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA3Cu;
            // 0x1ada40: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA44u; }
        if (ctx->pc != 0x1ADA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA44u; }
        if (ctx->pc != 0x1ADA44u) { return; }
    }
    ctx->pc = 0x1ADA44u;
    // 0x1ada44: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1ADA44u;
    SET_GPR_U32(ctx, 31, 0x1ADA4Cu);
    ctx->pc = 0x1ADA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA44u;
            // 0x1ada48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA4Cu; }
        if (ctx->pc != 0x1ADA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA4Cu; }
        if (ctx->pc != 0x1ADA4Cu) { return; }
    }
    ctx->pc = 0x1ADA4Cu;
    // 0x1ada4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ada4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ada50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ada50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ada54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ada54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ada58: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA58u;
            // 0x1ada5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADA60u;
}
