#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage5Boss_Hontai
// Address: 0x1bfde0 - 0x1c0008
void CreateStage5Boss_Hontai_0x1bfde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage5Boss_Hontai_0x1bfde0");
#endif

    ctx->pc = 0x1bfde0u;

    // 0x1bfde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bfde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bfde4: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1bfde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bfde8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bfde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bfdec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bfdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bfdf0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1BFDF0u;
    SET_GPR_U32(ctx, 31, 0x1BFDF8u);
    ctx->pc = 0x1BFDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDF0u;
            // 0x1bfdf4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDF8u; }
        if (ctx->pc != 0x1BFDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDF8u; }
        if (ctx->pc != 0x1BFDF8u) { return; }
    }
    ctx->pc = 0x1BFDF8u;
    // 0x1bfdf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bfdf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfdfc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1bfdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1bfe00: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1bfe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1bfe04: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1BFE04u;
    SET_GPR_U32(ctx, 31, 0x1BFE0Cu);
    ctx->pc = 0x1BFE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE04u;
            // 0x1bfe08: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE0Cu; }
        if (ctx->pc != 0x1BFE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE0Cu; }
        if (ctx->pc != 0x1BFE0Cu) { return; }
    }
    ctx->pc = 0x1BFE0Cu;
    // 0x1bfe0c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1BFE0Cu;
    SET_GPR_U32(ctx, 31, 0x1BFE14u);
    ctx->pc = 0x1BFE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE0Cu;
            // 0x1bfe10: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE14u; }
        if (ctx->pc != 0x1BFE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE14u; }
        if (ctx->pc != 0x1BFE14u) { return; }
    }
    ctx->pc = 0x1BFE14u;
    // 0x1bfe14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bfe14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe18: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1BFE18u;
    SET_GPR_U32(ctx, 31, 0x1BFE20u);
    ctx->pc = 0x1BFE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE18u;
            // 0x1bfe1c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE20u; }
        if (ctx->pc != 0x1BFE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE20u; }
        if (ctx->pc != 0x1BFE20u) { return; }
    }
    ctx->pc = 0x1BFE20u;
    // 0x1bfe20: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bfe20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bfe24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bfe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfe28: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1BFE28u;
    SET_GPR_U32(ctx, 31, 0x1BFE30u);
    ctx->pc = 0x1BFE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE28u;
            // 0x1bfe2c: 0xac221c28  sw          $v0, 0x1C28($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE30u; }
        if (ctx->pc != 0x1BFE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE30u; }
        if (ctx->pc != 0x1BFE30u) { return; }
    }
    ctx->pc = 0x1BFE30u;
    // 0x1bfe30: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bfe30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bfe34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bfe34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe38: 0xac221c2c  sw          $v0, 0x1C2C($at)
    ctx->pc = 0x1bfe38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7212), GPR_U32(ctx, 2));
    // 0x1bfe3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfe3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe40: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bfe40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bfe44: 0x8c271c28  lw          $a3, 0x1C28($at)
    ctx->pc = 0x1bfe44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7208)));
    // 0x1bfe48: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bfe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bfe4c: 0x8c281c2c  lw          $t0, 0x1C2C($at)
    ctx->pc = 0x1bfe4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7212)));
    // 0x1bfe50: 0xc060614  jal         func_181850
    ctx->pc = 0x1BFE50u;
    SET_GPR_U32(ctx, 31, 0x1BFE58u);
    ctx->pc = 0x1BFE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE50u;
            // 0x1bfe54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE58u; }
        if (ctx->pc != 0x1BFE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE58u; }
        if (ctx->pc != 0x1BFE58u) { return; }
    }
    ctx->pc = 0x1BFE58u;
    // 0x1bfe58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe5c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1BFE5Cu;
    SET_GPR_U32(ctx, 31, 0x1BFE64u);
    ctx->pc = 0x1BFE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE5Cu;
            // 0x1bfe60: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE64u; }
        if (ctx->pc != 0x1BFE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE64u; }
        if (ctx->pc != 0x1BFE64u) { return; }
    }
    ctx->pc = 0x1BFE64u;
    // 0x1bfe64: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1bfe64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1bfe68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfe68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bfe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfe70: 0xc060604  jal         func_181810
    ctx->pc = 0x1BFE70u;
    SET_GPR_U32(ctx, 31, 0x1BFE78u);
    ctx->pc = 0x1BFE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE70u;
            // 0x1bfe74: 0x24c6aa28  addiu       $a2, $a2, -0x55D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE78u; }
        if (ctx->pc != 0x1BFE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE78u; }
        if (ctx->pc != 0x1BFE78u) { return; }
    }
    ctx->pc = 0x1BFE78u;
    // 0x1bfe78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfe78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfe7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe80: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1BFE80u;
    SET_GPR_U32(ctx, 31, 0x1BFE88u);
    ctx->pc = 0x1BFE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE80u;
            // 0x1bfe84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE88u; }
        if (ctx->pc != 0x1BFE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE88u; }
        if (ctx->pc != 0x1BFE88u) { return; }
    }
    ctx->pc = 0x1BFE88u;
    // 0x1bfe88: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1bfe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1bfe8c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1BFE8Cu;
    SET_GPR_U32(ctx, 31, 0x1BFE94u);
    ctx->pc = 0x1BFE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE8Cu;
            // 0x1bfe90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE94u; }
        if (ctx->pc != 0x1BFE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE94u; }
        if (ctx->pc != 0x1BFE94u) { return; }
    }
    ctx->pc = 0x1BFE94u;
    // 0x1bfe94: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1BFE94u;
    SET_GPR_U32(ctx, 31, 0x1BFE9Cu);
    ctx->pc = 0x1BFE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE94u;
            // 0x1bfe98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE9Cu; }
        if (ctx->pc != 0x1BFE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE9Cu; }
        if (ctx->pc != 0x1BFE9Cu) { return; }
    }
    ctx->pc = 0x1BFE9Cu;
    // 0x1bfe9c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1BFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1BFEA4u);
    ctx->pc = 0x1BFEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE9Cu;
            // 0x1bfea0: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEA4u; }
        if (ctx->pc != 0x1BFEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEA4u; }
        if (ctx->pc != 0x1BFEA4u) { return; }
    }
    ctx->pc = 0x1BFEA4u;
    // 0x1bfea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bfea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfea8: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1bfea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1bfeac: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1bfeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1bfeb0: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1BFEB0u;
    SET_GPR_U32(ctx, 31, 0x1BFEB8u);
    ctx->pc = 0x1BFEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFEB0u;
            // 0x1bfeb4: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEB8u; }
        if (ctx->pc != 0x1BFEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEB8u; }
        if (ctx->pc != 0x1BFEB8u) { return; }
    }
    ctx->pc = 0x1BFEB8u;
    // 0x1bfeb8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1BFEB8u;
    SET_GPR_U32(ctx, 31, 0x1BFEC0u);
    ctx->pc = 0x1BFEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFEB8u;
            // 0x1bfebc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEC0u; }
        if (ctx->pc != 0x1BFEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEC0u; }
        if (ctx->pc != 0x1BFEC0u) { return; }
    }
    ctx->pc = 0x1BFEC0u;
    // 0x1bfec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bfec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfec4: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1BFEC4u;
    SET_GPR_U32(ctx, 31, 0x1BFECCu);
    ctx->pc = 0x1BFEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFEC4u;
            // 0x1bfec8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFECCu; }
        if (ctx->pc != 0x1BFECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFECCu; }
        if (ctx->pc != 0x1BFECCu) { return; }
    }
    ctx->pc = 0x1BFECCu;
    // 0x1bfecc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bfeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bfed0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bfed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfed4: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1BFED4u;
    SET_GPR_U32(ctx, 31, 0x1BFEDCu);
    ctx->pc = 0x1BFED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFED4u;
            // 0x1bfed8: 0xac221c28  sw          $v0, 0x1C28($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEDCu; }
        if (ctx->pc != 0x1BFEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFEDCu; }
        if (ctx->pc != 0x1BFEDCu) { return; }
    }
    ctx->pc = 0x1BFEDCu;
    // 0x1bfedc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bfedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bfee0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bfee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfee4: 0xac221c2c  sw          $v0, 0x1C2C($at)
    ctx->pc = 0x1bfee4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7212), GPR_U32(ctx, 2));
    // 0x1bfee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfeec: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bfeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bfef0: 0x8c271c28  lw          $a3, 0x1C28($at)
    ctx->pc = 0x1bfef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7208)));
    // 0x1bfef4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bfef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bfef8: 0x8c281c2c  lw          $t0, 0x1C2C($at)
    ctx->pc = 0x1bfef8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7212)));
    // 0x1bfefc: 0xc060614  jal         func_181850
    ctx->pc = 0x1BFEFCu;
    SET_GPR_U32(ctx, 31, 0x1BFF04u);
    ctx->pc = 0x1BFF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFEFCu;
            // 0x1bff00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF04u; }
        if (ctx->pc != 0x1BFF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF04u; }
        if (ctx->pc != 0x1BFF04u) { return; }
    }
    ctx->pc = 0x1BFF04u;
    // 0x1bff04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bff04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff08: 0xc06060c  jal         func_181830
    ctx->pc = 0x1BFF08u;
    SET_GPR_U32(ctx, 31, 0x1BFF10u);
    ctx->pc = 0x1BFF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF08u;
            // 0x1bff0c: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF10u; }
        if (ctx->pc != 0x1BFF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF10u; }
        if (ctx->pc != 0x1BFF10u) { return; }
    }
    ctx->pc = 0x1BFF10u;
    // 0x1bff10: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1bff10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1bff14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bff14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bff18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bff1c: 0xc060604  jal         func_181810
    ctx->pc = 0x1BFF1Cu;
    SET_GPR_U32(ctx, 31, 0x1BFF24u);
    ctx->pc = 0x1BFF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF1Cu;
            // 0x1bff20: 0x24c6aa28  addiu       $a2, $a2, -0x55D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF24u; }
        if (ctx->pc != 0x1BFF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF24u; }
        if (ctx->pc != 0x1BFF24u) { return; }
    }
    ctx->pc = 0x1BFF24u;
    // 0x1bff24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bff24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bff28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff2c: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1BFF2Cu;
    SET_GPR_U32(ctx, 31, 0x1BFF34u);
    ctx->pc = 0x1BFF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF2Cu;
            // 0x1bff30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF34u; }
        if (ctx->pc != 0x1BFF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF34u; }
        if (ctx->pc != 0x1BFF34u) { return; }
    }
    ctx->pc = 0x1BFF34u;
    // 0x1bff34: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1bff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1bff38: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1BFF38u;
    SET_GPR_U32(ctx, 31, 0x1BFF40u);
    ctx->pc = 0x1BFF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF38u;
            // 0x1bff3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF40u; }
        if (ctx->pc != 0x1BFF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF40u; }
        if (ctx->pc != 0x1BFF40u) { return; }
    }
    ctx->pc = 0x1BFF40u;
    // 0x1bff40: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1BFF40u;
    SET_GPR_U32(ctx, 31, 0x1BFF48u);
    ctx->pc = 0x1BFF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF40u;
            // 0x1bff44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF48u; }
        if (ctx->pc != 0x1BFF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF48u; }
        if (ctx->pc != 0x1BFF48u) { return; }
    }
    ctx->pc = 0x1BFF48u;
    // 0x1bff48: 0xc060694  jal         func_181A50
    ctx->pc = 0x1BFF48u;
    SET_GPR_U32(ctx, 31, 0x1BFF50u);
    ctx->pc = 0x1BFF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF48u;
            // 0x1bff4c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF50u; }
        if (ctx->pc != 0x1BFF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF50u; }
        if (ctx->pc != 0x1BFF50u) { return; }
    }
    ctx->pc = 0x1BFF50u;
    // 0x1bff50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bff50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff54: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1bff54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1bff58: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1bff58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1bff5c: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1BFF5Cu;
    SET_GPR_U32(ctx, 31, 0x1BFF64u);
    ctx->pc = 0x1BFF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF5Cu;
            // 0x1bff60: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF64u; }
        if (ctx->pc != 0x1BFF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF64u; }
        if (ctx->pc != 0x1BFF64u) { return; }
    }
    ctx->pc = 0x1BFF64u;
    // 0x1bff64: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1BFF64u;
    SET_GPR_U32(ctx, 31, 0x1BFF6Cu);
    ctx->pc = 0x1BFF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF64u;
            // 0x1bff68: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF6Cu; }
        if (ctx->pc != 0x1BFF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF6Cu; }
        if (ctx->pc != 0x1BFF6Cu) { return; }
    }
    ctx->pc = 0x1BFF6Cu;
    // 0x1bff6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bff6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff70: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1BFF70u;
    SET_GPR_U32(ctx, 31, 0x1BFF78u);
    ctx->pc = 0x1BFF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF70u;
            // 0x1bff74: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF78u; }
        if (ctx->pc != 0x1BFF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF78u; }
        if (ctx->pc != 0x1BFF78u) { return; }
    }
    ctx->pc = 0x1BFF78u;
    // 0x1bff78: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bff78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bff7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bff80: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1BFF80u;
    SET_GPR_U32(ctx, 31, 0x1BFF88u);
    ctx->pc = 0x1BFF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF80u;
            // 0x1bff84: 0xac221c28  sw          $v0, 0x1C28($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF88u; }
        if (ctx->pc != 0x1BFF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF88u; }
        if (ctx->pc != 0x1BFF88u) { return; }
    }
    ctx->pc = 0x1BFF88u;
    // 0x1bff88: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bff88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bff8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bff8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff90: 0xac221c2c  sw          $v0, 0x1C2C($at)
    ctx->pc = 0x1bff90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7212), GPR_U32(ctx, 2));
    // 0x1bff94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff98: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bff98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bff9c: 0x8c271c28  lw          $a3, 0x1C28($at)
    ctx->pc = 0x1bff9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7208)));
    // 0x1bffa0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bffa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bffa4: 0x8c281c2c  lw          $t0, 0x1C2C($at)
    ctx->pc = 0x1bffa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7212)));
    // 0x1bffa8: 0xc060614  jal         func_181850
    ctx->pc = 0x1BFFA8u;
    SET_GPR_U32(ctx, 31, 0x1BFFB0u);
    ctx->pc = 0x1BFFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFA8u;
            // 0x1bffac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFB0u; }
        if (ctx->pc != 0x1BFFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFB0u; }
        if (ctx->pc != 0x1BFFB0u) { return; }
    }
    ctx->pc = 0x1BFFB0u;
    // 0x1bffb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bffb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffb4: 0xc06060c  jal         func_181830
    ctx->pc = 0x1BFFB4u;
    SET_GPR_U32(ctx, 31, 0x1BFFBCu);
    ctx->pc = 0x1BFFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFB4u;
            // 0x1bffb8: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFBCu; }
        if (ctx->pc != 0x1BFFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFBCu; }
        if (ctx->pc != 0x1BFFBCu) { return; }
    }
    ctx->pc = 0x1BFFBCu;
    // 0x1bffbc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1bffbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1bffc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bffc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bffc8: 0xc060604  jal         func_181810
    ctx->pc = 0x1BFFC8u;
    SET_GPR_U32(ctx, 31, 0x1BFFD0u);
    ctx->pc = 0x1BFFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFC8u;
            // 0x1bffcc: 0x24c6aa28  addiu       $a2, $a2, -0x55D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFD0u; }
        if (ctx->pc != 0x1BFFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFD0u; }
        if (ctx->pc != 0x1BFFD0u) { return; }
    }
    ctx->pc = 0x1BFFD0u;
    // 0x1bffd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bffd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bffd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffd8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1BFFD8u;
    SET_GPR_U32(ctx, 31, 0x1BFFE0u);
    ctx->pc = 0x1BFFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFD8u;
            // 0x1bffdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFE0u; }
        if (ctx->pc != 0x1BFFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFE0u; }
        if (ctx->pc != 0x1BFFE0u) { return; }
    }
    ctx->pc = 0x1BFFE0u;
    // 0x1bffe0: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1bffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1bffe4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1BFFE4u;
    SET_GPR_U32(ctx, 31, 0x1BFFECu);
    ctx->pc = 0x1BFFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFE4u;
            // 0x1bffe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFECu; }
        if (ctx->pc != 0x1BFFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFECu; }
        if (ctx->pc != 0x1BFFECu) { return; }
    }
    ctx->pc = 0x1BFFECu;
    // 0x1bffec: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1BFFECu;
    SET_GPR_U32(ctx, 31, 0x1BFFF4u);
    ctx->pc = 0x1BFFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFECu;
            // 0x1bfff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFF4u; }
        if (ctx->pc != 0x1BFFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFFF4u; }
        if (ctx->pc != 0x1BFFF4u) { return; }
    }
    ctx->pc = 0x1BFFF4u;
    // 0x1bfff4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bfff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0000: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0000u;
            // 0x1c0004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0008u;
}
