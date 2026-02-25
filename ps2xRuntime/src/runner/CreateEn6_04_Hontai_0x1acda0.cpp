#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_04_Hontai
// Address: 0x1acda0 - 0x1ace90
void CreateEn6_04_Hontai_0x1acda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_04_Hontai_0x1acda0");
#endif

    ctx->pc = 0x1acda0u;

    // 0x1acda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1acda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1acda4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1acda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1acda8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1acda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1acdac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1acdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1acdb0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1ACDB0u;
    SET_GPR_U32(ctx, 31, 0x1ACDB8u);
    ctx->pc = 0x1ACDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDB0u;
            // 0x1acdb4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDB8u; }
        if (ctx->pc != 0x1ACDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDB8u; }
        if (ctx->pc != 0x1ACDB8u) { return; }
    }
    ctx->pc = 0x1ACDB8u;
    // 0x1acdb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1acdb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acdbc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1acdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1acdc0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1acdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1acdc4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1ACDC4u;
    SET_GPR_U32(ctx, 31, 0x1ACDCCu);
    ctx->pc = 0x1ACDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDC4u;
            // 0x1acdc8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDCCu; }
        if (ctx->pc != 0x1ACDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDCCu; }
        if (ctx->pc != 0x1ACDCCu) { return; }
    }
    ctx->pc = 0x1ACDCCu;
    // 0x1acdcc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1ACDCCu;
    SET_GPR_U32(ctx, 31, 0x1ACDD4u);
    ctx->pc = 0x1ACDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDCCu;
            // 0x1acdd0: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDD4u; }
        if (ctx->pc != 0x1ACDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDD4u; }
        if (ctx->pc != 0x1ACDD4u) { return; }
    }
    ctx->pc = 0x1ACDD4u;
    // 0x1acdd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acdd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acdd8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1acdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1acddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acde0: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1ACDE0u;
    SET_GPR_U32(ctx, 31, 0x1ACDE8u);
    ctx->pc = 0x1ACDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDE0u;
            // 0x1acde4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDE8u; }
        if (ctx->pc != 0x1ACDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDE8u; }
        if (ctx->pc != 0x1ACDE8u) { return; }
    }
    ctx->pc = 0x1ACDE8u;
    // 0x1acde8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1ACDE8u;
    SET_GPR_U32(ctx, 31, 0x1ACDF0u);
    ctx->pc = 0x1ACDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDE8u;
            // 0x1acdec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDF0u; }
        if (ctx->pc != 0x1ACDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACDF0u; }
        if (ctx->pc != 0x1ACDF0u) { return; }
    }
    ctx->pc = 0x1ACDF0u;
    // 0x1acdf0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1acdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1acdf4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1acdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1acdf8: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1ACDF8u;
    SET_GPR_U32(ctx, 31, 0x1ACE00u);
    ctx->pc = 0x1ACDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDF8u;
            // 0x1acdfc: 0xac221b08  sw          $v0, 0x1B08($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE00u; }
        if (ctx->pc != 0x1ACE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE00u; }
        if (ctx->pc != 0x1ACE00u) { return; }
    }
    ctx->pc = 0x1ACE00u;
    // 0x1ace00: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ace00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ace04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ace04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace08: 0xac221b0c  sw          $v0, 0x1B0C($at)
    ctx->pc = 0x1ace08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6924), GPR_U32(ctx, 2));
    // 0x1ace0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ace0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace10: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ace10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ace14: 0x8c271b08  lw          $a3, 0x1B08($at)
    ctx->pc = 0x1ace14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6920)));
    // 0x1ace18: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ace18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ace1c: 0x8c281b0c  lw          $t0, 0x1B0C($at)
    ctx->pc = 0x1ace1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6924)));
    // 0x1ace20: 0xc060614  jal         func_181850
    ctx->pc = 0x1ACE20u;
    SET_GPR_U32(ctx, 31, 0x1ACE28u);
    ctx->pc = 0x1ACE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE20u;
            // 0x1ace24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE28u; }
        if (ctx->pc != 0x1ACE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE28u; }
        if (ctx->pc != 0x1ACE28u) { return; }
    }
    ctx->pc = 0x1ACE28u;
    // 0x1ace28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ace28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace2c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1ACE2Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE34u);
    ctx->pc = 0x1ACE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE2Cu;
            // 0x1ace30: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE34u; }
        if (ctx->pc != 0x1ACE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE34u; }
        if (ctx->pc != 0x1ACE34u) { return; }
    }
    ctx->pc = 0x1ACE34u;
    // 0x1ace34: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1ace34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1ace38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ace38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ace3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ace40: 0xc060604  jal         func_181810
    ctx->pc = 0x1ACE40u;
    SET_GPR_U32(ctx, 31, 0x1ACE48u);
    ctx->pc = 0x1ACE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE40u;
            // 0x1ace44: 0x24c6a990  addiu       $a2, $a2, -0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE48u; }
        if (ctx->pc != 0x1ACE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE48u; }
        if (ctx->pc != 0x1ACE48u) { return; }
    }
    ctx->pc = 0x1ACE48u;
    // 0x1ace48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ace48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ace4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace50: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1ACE50u;
    SET_GPR_U32(ctx, 31, 0x1ACE58u);
    ctx->pc = 0x1ACE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE50u;
            // 0x1ace54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE58u; }
        if (ctx->pc != 0x1ACE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE58u; }
        if (ctx->pc != 0x1ACE58u) { return; }
    }
    ctx->pc = 0x1ACE58u;
    // 0x1ace58: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1ace58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1ace5c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1ACE5Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE64u);
    ctx->pc = 0x1ACE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE5Cu;
            // 0x1ace60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE64u; }
        if (ctx->pc != 0x1ACE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE64u; }
        if (ctx->pc != 0x1ACE64u) { return; }
    }
    ctx->pc = 0x1ACE64u;
    // 0x1ace64: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1ACE64u;
    SET_GPR_U32(ctx, 31, 0x1ACE6Cu);
    ctx->pc = 0x1ACE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE64u;
            // 0x1ace68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE6Cu; }
        if (ctx->pc != 0x1ACE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE6Cu; }
        if (ctx->pc != 0x1ACE6Cu) { return; }
    }
    ctx->pc = 0x1ACE6Cu;
    // 0x1ace6c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1ACE6Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE74u);
    ctx->pc = 0x1ACE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE6Cu;
            // 0x1ace70: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE74u; }
        if (ctx->pc != 0x1ACE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE74u; }
        if (ctx->pc != 0x1ACE74u) { return; }
    }
    ctx->pc = 0x1ACE74u;
    // 0x1ace74: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1ACE74u;
    SET_GPR_U32(ctx, 31, 0x1ACE7Cu);
    ctx->pc = 0x1ACE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE74u;
            // 0x1ace78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE7Cu; }
        if (ctx->pc != 0x1ACE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE7Cu; }
        if (ctx->pc != 0x1ACE7Cu) { return; }
    }
    ctx->pc = 0x1ACE7Cu;
    // 0x1ace7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ace7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ace80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ace80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ace84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ace84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ace88: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE88u;
            // 0x1ace8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ACE90u;
}
