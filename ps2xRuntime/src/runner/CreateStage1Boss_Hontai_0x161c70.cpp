#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage1Boss_Hontai
// Address: 0x161c70 - 0x161ff0
void CreateStage1Boss_Hontai_0x161c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage1Boss_Hontai_0x161c70");
#endif

    ctx->pc = 0x161c70u;

    // 0x161c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161c74: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x161c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x161c78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161c7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161c80: 0xc060694  jal         func_181A50
    ctx->pc = 0x161C80u;
    SET_GPR_U32(ctx, 31, 0x161C88u);
    ctx->pc = 0x161C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C80u;
            // 0x161c84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C88u; }
        if (ctx->pc != 0x161C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C88u; }
        if (ctx->pc != 0x161C88u) { return; }
    }
    ctx->pc = 0x161C88u;
    // 0x161c88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c8c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x161c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x161c90: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x161c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x161c94: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x161C94u;
    SET_GPR_U32(ctx, 31, 0x161C9Cu);
    ctx->pc = 0x161C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C94u;
            // 0x161c98: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C9Cu; }
        if (ctx->pc != 0x161C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C9Cu; }
        if (ctx->pc != 0x161C9Cu) { return; }
    }
    ctx->pc = 0x161C9Cu;
    // 0x161c9c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x161C9Cu;
    SET_GPR_U32(ctx, 31, 0x161CA4u);
    ctx->pc = 0x161CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C9Cu;
            // 0x161ca0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CA4u; }
        if (ctx->pc != 0x161CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CA4u; }
        if (ctx->pc != 0x161CA4u) { return; }
    }
    ctx->pc = 0x161CA4u;
    // 0x161ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ca8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x161CA8u;
    SET_GPR_U32(ctx, 31, 0x161CB0u);
    ctx->pc = 0x161CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CA8u;
            // 0x161cac: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CB0u; }
        if (ctx->pc != 0x161CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CB0u; }
        if (ctx->pc != 0x161CB0u) { return; }
    }
    ctx->pc = 0x161CB0u;
    // 0x161cb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161cb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x161cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161cb8: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x161CB8u;
    SET_GPR_U32(ctx, 31, 0x161CC0u);
    ctx->pc = 0x161CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CB8u;
            // 0x161cbc: 0xac224bd8  sw          $v0, 0x4BD8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CC0u; }
        if (ctx->pc != 0x161CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CC0u; }
        if (ctx->pc != 0x161CC0u) { return; }
    }
    ctx->pc = 0x161CC0u;
    // 0x161cc0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161cc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x161cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cc8: 0xac224bdc  sw          $v0, 0x4BDC($at)
    ctx->pc = 0x161cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19420), GPR_U32(ctx, 2));
    // 0x161ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cd0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161cd4: 0x8c274bd8  lw          $a3, 0x4BD8($at)
    ctx->pc = 0x161cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19416)));
    // 0x161cd8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161cdc: 0x8c284bdc  lw          $t0, 0x4BDC($at)
    ctx->pc = 0x161cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19420)));
    // 0x161ce0: 0xc060614  jal         func_181850
    ctx->pc = 0x161CE0u;
    SET_GPR_U32(ctx, 31, 0x161CE8u);
    ctx->pc = 0x161CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CE0u;
            // 0x161ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CE8u; }
        if (ctx->pc != 0x161CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CE8u; }
        if (ctx->pc != 0x161CE8u) { return; }
    }
    ctx->pc = 0x161CE8u;
    // 0x161ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cec: 0xc06060c  jal         func_181830
    ctx->pc = 0x161CECu;
    SET_GPR_U32(ctx, 31, 0x161CF4u);
    ctx->pc = 0x161CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CECu;
            // 0x161cf0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CF4u; }
        if (ctx->pc != 0x161CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CF4u; }
        if (ctx->pc != 0x161CF4u) { return; }
    }
    ctx->pc = 0x161CF4u;
    // 0x161cf4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x161cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x161cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161d00: 0xc060604  jal         func_181810
    ctx->pc = 0x161D00u;
    SET_GPR_U32(ctx, 31, 0x161D08u);
    ctx->pc = 0x161D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D00u;
            // 0x161d04: 0x24c69d40  addiu       $a2, $a2, -0x62C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D08u; }
        if (ctx->pc != 0x161D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D08u; }
        if (ctx->pc != 0x161D08u) { return; }
    }
    ctx->pc = 0x161D08u;
    // 0x161d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d10: 0xc0605dc  jal         func_181770
    ctx->pc = 0x161D10u;
    SET_GPR_U32(ctx, 31, 0x161D18u);
    ctx->pc = 0x161D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D10u;
            // 0x161d14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D18u; }
        if (ctx->pc != 0x161D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D18u; }
        if (ctx->pc != 0x161D18u) { return; }
    }
    ctx->pc = 0x161D18u;
    // 0x161d18: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x161d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x161d1c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x161D1Cu;
    SET_GPR_U32(ctx, 31, 0x161D24u);
    ctx->pc = 0x161D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D1Cu;
            // 0x161d20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D24u; }
        if (ctx->pc != 0x161D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D24u; }
        if (ctx->pc != 0x161D24u) { return; }
    }
    ctx->pc = 0x161D24u;
    // 0x161d24: 0xc0605cc  jal         func_181730
    ctx->pc = 0x161D24u;
    SET_GPR_U32(ctx, 31, 0x161D2Cu);
    ctx->pc = 0x161D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D24u;
            // 0x161d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D2Cu; }
        if (ctx->pc != 0x161D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D2Cu; }
        if (ctx->pc != 0x161D2Cu) { return; }
    }
    ctx->pc = 0x161D2Cu;
    // 0x161d2c: 0xc060694  jal         func_181A50
    ctx->pc = 0x161D2Cu;
    SET_GPR_U32(ctx, 31, 0x161D34u);
    ctx->pc = 0x161D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D2Cu;
            // 0x161d30: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D34u; }
        if (ctx->pc != 0x161D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D34u; }
        if (ctx->pc != 0x161D34u) { return; }
    }
    ctx->pc = 0x161D34u;
    // 0x161d34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d38: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x161d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x161d3c: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x161d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x161d40: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x161D40u;
    SET_GPR_U32(ctx, 31, 0x161D48u);
    ctx->pc = 0x161D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D40u;
            // 0x161d44: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D48u; }
        if (ctx->pc != 0x161D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D48u; }
        if (ctx->pc != 0x161D48u) { return; }
    }
    ctx->pc = 0x161D48u;
    // 0x161d48: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x161D48u;
    SET_GPR_U32(ctx, 31, 0x161D50u);
    ctx->pc = 0x161D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D48u;
            // 0x161d4c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D50u; }
        if (ctx->pc != 0x161D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D50u; }
        if (ctx->pc != 0x161D50u) { return; }
    }
    ctx->pc = 0x161D50u;
    // 0x161d50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d54: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x161D54u;
    SET_GPR_U32(ctx, 31, 0x161D5Cu);
    ctx->pc = 0x161D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D54u;
            // 0x161d58: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D5Cu; }
        if (ctx->pc != 0x161D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D5Cu; }
        if (ctx->pc != 0x161D5Cu) { return; }
    }
    ctx->pc = 0x161D5Cu;
    // 0x161d5c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161d60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x161d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161d64: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x161D64u;
    SET_GPR_U32(ctx, 31, 0x161D6Cu);
    ctx->pc = 0x161D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D64u;
            // 0x161d68: 0xac224bd8  sw          $v0, 0x4BD8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D6Cu; }
        if (ctx->pc != 0x161D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D6Cu; }
        if (ctx->pc != 0x161D6Cu) { return; }
    }
    ctx->pc = 0x161D6Cu;
    // 0x161d6c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161d70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x161d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d74: 0xac224bdc  sw          $v0, 0x4BDC($at)
    ctx->pc = 0x161d74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19420), GPR_U32(ctx, 2));
    // 0x161d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d7c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161d80: 0x8c274bd8  lw          $a3, 0x4BD8($at)
    ctx->pc = 0x161d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19416)));
    // 0x161d84: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161d88: 0x8c284bdc  lw          $t0, 0x4BDC($at)
    ctx->pc = 0x161d88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19420)));
    // 0x161d8c: 0xc060614  jal         func_181850
    ctx->pc = 0x161D8Cu;
    SET_GPR_U32(ctx, 31, 0x161D94u);
    ctx->pc = 0x161D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D8Cu;
            // 0x161d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D94u; }
        if (ctx->pc != 0x161D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D94u; }
        if (ctx->pc != 0x161D94u) { return; }
    }
    ctx->pc = 0x161D94u;
    // 0x161d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d98: 0xc06060c  jal         func_181830
    ctx->pc = 0x161D98u;
    SET_GPR_U32(ctx, 31, 0x161DA0u);
    ctx->pc = 0x161D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D98u;
            // 0x161d9c: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DA0u; }
        if (ctx->pc != 0x161DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DA0u; }
        if (ctx->pc != 0x161DA0u) { return; }
    }
    ctx->pc = 0x161DA0u;
    // 0x161da0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x161da0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x161da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161da8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161dac: 0xc060604  jal         func_181810
    ctx->pc = 0x161DACu;
    SET_GPR_U32(ctx, 31, 0x161DB4u);
    ctx->pc = 0x161DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161DACu;
            // 0x161db0: 0x24c69d40  addiu       $a2, $a2, -0x62C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DB4u; }
        if (ctx->pc != 0x161DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DB4u; }
        if (ctx->pc != 0x161DB4u) { return; }
    }
    ctx->pc = 0x161DB4u;
    // 0x161db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161dbc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x161DBCu;
    SET_GPR_U32(ctx, 31, 0x161DC4u);
    ctx->pc = 0x161DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161DBCu;
            // 0x161dc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DC4u; }
        if (ctx->pc != 0x161DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DC4u; }
        if (ctx->pc != 0x161DC4u) { return; }
    }
    ctx->pc = 0x161DC4u;
    // 0x161dc4: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x161dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x161dc8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x161DC8u;
    SET_GPR_U32(ctx, 31, 0x161DD0u);
    ctx->pc = 0x161DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161DC8u;
            // 0x161dcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DD0u; }
        if (ctx->pc != 0x161DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DD0u; }
        if (ctx->pc != 0x161DD0u) { return; }
    }
    ctx->pc = 0x161DD0u;
    // 0x161dd0: 0xc0605cc  jal         func_181730
    ctx->pc = 0x161DD0u;
    SET_GPR_U32(ctx, 31, 0x161DD8u);
    ctx->pc = 0x161DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161DD0u;
            // 0x161dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DD8u; }
        if (ctx->pc != 0x161DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DD8u; }
        if (ctx->pc != 0x161DD8u) { return; }
    }
    ctx->pc = 0x161DD8u;
    // 0x161dd8: 0xc060694  jal         func_181A50
    ctx->pc = 0x161DD8u;
    SET_GPR_U32(ctx, 31, 0x161DE0u);
    ctx->pc = 0x161DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161DD8u;
            // 0x161ddc: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DE0u; }
        if (ctx->pc != 0x161DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DE0u; }
        if (ctx->pc != 0x161DE0u) { return; }
    }
    ctx->pc = 0x161DE0u;
    // 0x161de0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161de4: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x161de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x161de8: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x161de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x161dec: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x161DECu;
    SET_GPR_U32(ctx, 31, 0x161DF4u);
    ctx->pc = 0x161DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161DECu;
            // 0x161df0: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DF4u; }
        if (ctx->pc != 0x161DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DF4u; }
        if (ctx->pc != 0x161DF4u) { return; }
    }
    ctx->pc = 0x161DF4u;
    // 0x161df4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x161DF4u;
    SET_GPR_U32(ctx, 31, 0x161DFCu);
    ctx->pc = 0x161DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161DF4u;
            // 0x161df8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DFCu; }
        if (ctx->pc != 0x161DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DFCu; }
        if (ctx->pc != 0x161DFCu) { return; }
    }
    ctx->pc = 0x161DFCu;
    // 0x161dfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e00: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x161E00u;
    SET_GPR_U32(ctx, 31, 0x161E08u);
    ctx->pc = 0x161E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E00u;
            // 0x161e04: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E08u; }
        if (ctx->pc != 0x161E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E08u; }
        if (ctx->pc != 0x161E08u) { return; }
    }
    ctx->pc = 0x161E08u;
    // 0x161e08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161e0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x161e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161e10: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x161E10u;
    SET_GPR_U32(ctx, 31, 0x161E18u);
    ctx->pc = 0x161E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E10u;
            // 0x161e14: 0xac224bd8  sw          $v0, 0x4BD8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E18u; }
        if (ctx->pc != 0x161E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E18u; }
        if (ctx->pc != 0x161E18u) { return; }
    }
    ctx->pc = 0x161E18u;
    // 0x161e18: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161e1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x161e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e20: 0xac224bdc  sw          $v0, 0x4BDC($at)
    ctx->pc = 0x161e20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19420), GPR_U32(ctx, 2));
    // 0x161e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161e2c: 0x8c274bd8  lw          $a3, 0x4BD8($at)
    ctx->pc = 0x161e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19416)));
    // 0x161e30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161e34: 0x8c284bdc  lw          $t0, 0x4BDC($at)
    ctx->pc = 0x161e34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19420)));
    // 0x161e38: 0xc060614  jal         func_181850
    ctx->pc = 0x161E38u;
    SET_GPR_U32(ctx, 31, 0x161E40u);
    ctx->pc = 0x161E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E38u;
            // 0x161e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E40u; }
        if (ctx->pc != 0x161E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E40u; }
        if (ctx->pc != 0x161E40u) { return; }
    }
    ctx->pc = 0x161E40u;
    // 0x161e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e44: 0xc06060c  jal         func_181830
    ctx->pc = 0x161E44u;
    SET_GPR_U32(ctx, 31, 0x161E4Cu);
    ctx->pc = 0x161E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E44u;
            // 0x161e48: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E4Cu; }
        if (ctx->pc != 0x161E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E4Cu; }
        if (ctx->pc != 0x161E4Cu) { return; }
    }
    ctx->pc = 0x161E4Cu;
    // 0x161e4c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x161e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x161e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161e58: 0xc060604  jal         func_181810
    ctx->pc = 0x161E58u;
    SET_GPR_U32(ctx, 31, 0x161E60u);
    ctx->pc = 0x161E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E58u;
            // 0x161e5c: 0x24c69d40  addiu       $a2, $a2, -0x62C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E60u; }
        if (ctx->pc != 0x161E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E60u; }
        if (ctx->pc != 0x161E60u) { return; }
    }
    ctx->pc = 0x161E60u;
    // 0x161e60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e68: 0xc0605dc  jal         func_181770
    ctx->pc = 0x161E68u;
    SET_GPR_U32(ctx, 31, 0x161E70u);
    ctx->pc = 0x161E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E68u;
            // 0x161e6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E70u; }
        if (ctx->pc != 0x161E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E70u; }
        if (ctx->pc != 0x161E70u) { return; }
    }
    ctx->pc = 0x161E70u;
    // 0x161e70: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x161e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x161e74: 0xc046376  jal         func_118DD8
    ctx->pc = 0x161E74u;
    SET_GPR_U32(ctx, 31, 0x161E7Cu);
    ctx->pc = 0x161E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E74u;
            // 0x161e78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E7Cu; }
        if (ctx->pc != 0x161E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E7Cu; }
        if (ctx->pc != 0x161E7Cu) { return; }
    }
    ctx->pc = 0x161E7Cu;
    // 0x161e7c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x161E7Cu;
    SET_GPR_U32(ctx, 31, 0x161E84u);
    ctx->pc = 0x161E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E7Cu;
            // 0x161e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E84u; }
        if (ctx->pc != 0x161E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E84u; }
        if (ctx->pc != 0x161E84u) { return; }
    }
    ctx->pc = 0x161E84u;
    // 0x161e84: 0xc060694  jal         func_181A50
    ctx->pc = 0x161E84u;
    SET_GPR_U32(ctx, 31, 0x161E8Cu);
    ctx->pc = 0x161E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E84u;
            // 0x161e88: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E8Cu; }
        if (ctx->pc != 0x161E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E8Cu; }
        if (ctx->pc != 0x161E8Cu) { return; }
    }
    ctx->pc = 0x161E8Cu;
    // 0x161e8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e90: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x161e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x161e94: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x161e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x161e98: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x161E98u;
    SET_GPR_U32(ctx, 31, 0x161EA0u);
    ctx->pc = 0x161E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161E98u;
            // 0x161e9c: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EA0u; }
        if (ctx->pc != 0x161EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EA0u; }
        if (ctx->pc != 0x161EA0u) { return; }
    }
    ctx->pc = 0x161EA0u;
    // 0x161ea0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x161EA0u;
    SET_GPR_U32(ctx, 31, 0x161EA8u);
    ctx->pc = 0x161EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161EA0u;
            // 0x161ea4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EA8u; }
        if (ctx->pc != 0x161EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EA8u; }
        if (ctx->pc != 0x161EA8u) { return; }
    }
    ctx->pc = 0x161EA8u;
    // 0x161ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161eac: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x161EACu;
    SET_GPR_U32(ctx, 31, 0x161EB4u);
    ctx->pc = 0x161EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161EACu;
            // 0x161eb0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EB4u; }
        if (ctx->pc != 0x161EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EB4u; }
        if (ctx->pc != 0x161EB4u) { return; }
    }
    ctx->pc = 0x161EB4u;
    // 0x161eb4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161eb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x161eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161ebc: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x161EBCu;
    SET_GPR_U32(ctx, 31, 0x161EC4u);
    ctx->pc = 0x161EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161EBCu;
            // 0x161ec0: 0xac224bd8  sw          $v0, 0x4BD8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EC4u; }
        if (ctx->pc != 0x161EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EC4u; }
        if (ctx->pc != 0x161EC4u) { return; }
    }
    ctx->pc = 0x161EC4u;
    // 0x161ec4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161ec8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x161ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ecc: 0xac224bdc  sw          $v0, 0x4BDC($at)
    ctx->pc = 0x161eccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19420), GPR_U32(ctx, 2));
    // 0x161ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ed4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161ed8: 0x8c274bd8  lw          $a3, 0x4BD8($at)
    ctx->pc = 0x161ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19416)));
    // 0x161edc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161ee0: 0x8c284bdc  lw          $t0, 0x4BDC($at)
    ctx->pc = 0x161ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19420)));
    // 0x161ee4: 0xc060614  jal         func_181850
    ctx->pc = 0x161EE4u;
    SET_GPR_U32(ctx, 31, 0x161EECu);
    ctx->pc = 0x161EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161EE4u;
            // 0x161ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EECu; }
        if (ctx->pc != 0x161EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EECu; }
        if (ctx->pc != 0x161EECu) { return; }
    }
    ctx->pc = 0x161EECu;
    // 0x161eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ef0: 0xc06060c  jal         func_181830
    ctx->pc = 0x161EF0u;
    SET_GPR_U32(ctx, 31, 0x161EF8u);
    ctx->pc = 0x161EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161EF0u;
            // 0x161ef4: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EF8u; }
        if (ctx->pc != 0x161EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161EF8u; }
        if (ctx->pc != 0x161EF8u) { return; }
    }
    ctx->pc = 0x161EF8u;
    // 0x161ef8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x161ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x161efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161f04: 0xc060604  jal         func_181810
    ctx->pc = 0x161F04u;
    SET_GPR_U32(ctx, 31, 0x161F0Cu);
    ctx->pc = 0x161F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F04u;
            // 0x161f08: 0x24c69d40  addiu       $a2, $a2, -0x62C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F0Cu; }
        if (ctx->pc != 0x161F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F0Cu; }
        if (ctx->pc != 0x161F0Cu) { return; }
    }
    ctx->pc = 0x161F0Cu;
    // 0x161f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f14: 0xc0605dc  jal         func_181770
    ctx->pc = 0x161F14u;
    SET_GPR_U32(ctx, 31, 0x161F1Cu);
    ctx->pc = 0x161F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F14u;
            // 0x161f18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F1Cu; }
        if (ctx->pc != 0x161F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F1Cu; }
        if (ctx->pc != 0x161F1Cu) { return; }
    }
    ctx->pc = 0x161F1Cu;
    // 0x161f1c: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x161f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x161f20: 0xc046376  jal         func_118DD8
    ctx->pc = 0x161F20u;
    SET_GPR_U32(ctx, 31, 0x161F28u);
    ctx->pc = 0x161F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F20u;
            // 0x161f24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F28u; }
        if (ctx->pc != 0x161F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F28u; }
        if (ctx->pc != 0x161F28u) { return; }
    }
    ctx->pc = 0x161F28u;
    // 0x161f28: 0xc0605cc  jal         func_181730
    ctx->pc = 0x161F28u;
    SET_GPR_U32(ctx, 31, 0x161F30u);
    ctx->pc = 0x161F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F28u;
            // 0x161f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F30u; }
        if (ctx->pc != 0x161F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F30u; }
        if (ctx->pc != 0x161F30u) { return; }
    }
    ctx->pc = 0x161F30u;
    // 0x161f30: 0xc060694  jal         func_181A50
    ctx->pc = 0x161F30u;
    SET_GPR_U32(ctx, 31, 0x161F38u);
    ctx->pc = 0x161F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F30u;
            // 0x161f34: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F38u; }
        if (ctx->pc != 0x161F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F38u; }
        if (ctx->pc != 0x161F38u) { return; }
    }
    ctx->pc = 0x161F38u;
    // 0x161f38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f3c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x161f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x161f40: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x161f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x161f44: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x161F44u;
    SET_GPR_U32(ctx, 31, 0x161F4Cu);
    ctx->pc = 0x161F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F44u;
            // 0x161f48: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F4Cu; }
        if (ctx->pc != 0x161F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F4Cu; }
        if (ctx->pc != 0x161F4Cu) { return; }
    }
    ctx->pc = 0x161F4Cu;
    // 0x161f4c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x161F4Cu;
    SET_GPR_U32(ctx, 31, 0x161F54u);
    ctx->pc = 0x161F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F4Cu;
            // 0x161f50: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F54u; }
        if (ctx->pc != 0x161F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F54u; }
        if (ctx->pc != 0x161F54u) { return; }
    }
    ctx->pc = 0x161F54u;
    // 0x161f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f58: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x161F58u;
    SET_GPR_U32(ctx, 31, 0x161F60u);
    ctx->pc = 0x161F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F58u;
            // 0x161f5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F60u; }
        if (ctx->pc != 0x161F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F60u; }
        if (ctx->pc != 0x161F60u) { return; }
    }
    ctx->pc = 0x161F60u;
    // 0x161f60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161f64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x161f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161f68: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x161F68u;
    SET_GPR_U32(ctx, 31, 0x161F70u);
    ctx->pc = 0x161F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F68u;
            // 0x161f6c: 0xac224bd8  sw          $v0, 0x4BD8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F70u; }
        if (ctx->pc != 0x161F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F70u; }
        if (ctx->pc != 0x161F70u) { return; }
    }
    ctx->pc = 0x161F70u;
    // 0x161f70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161f74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x161f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f78: 0xac224bdc  sw          $v0, 0x4BDC($at)
    ctx->pc = 0x161f78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19420), GPR_U32(ctx, 2));
    // 0x161f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161f84: 0x8c274bd8  lw          $a3, 0x4BD8($at)
    ctx->pc = 0x161f84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19416)));
    // 0x161f88: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161f8c: 0x8c284bdc  lw          $t0, 0x4BDC($at)
    ctx->pc = 0x161f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19420)));
    // 0x161f90: 0xc060614  jal         func_181850
    ctx->pc = 0x161F90u;
    SET_GPR_U32(ctx, 31, 0x161F98u);
    ctx->pc = 0x161F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F90u;
            // 0x161f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F98u; }
        if (ctx->pc != 0x161F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F98u; }
        if (ctx->pc != 0x161F98u) { return; }
    }
    ctx->pc = 0x161F98u;
    // 0x161f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f9c: 0xc06060c  jal         func_181830
    ctx->pc = 0x161F9Cu;
    SET_GPR_U32(ctx, 31, 0x161FA4u);
    ctx->pc = 0x161FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F9Cu;
            // 0x161fa0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FA4u; }
        if (ctx->pc != 0x161FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FA4u; }
        if (ctx->pc != 0x161FA4u) { return; }
    }
    ctx->pc = 0x161FA4u;
    // 0x161fa4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x161fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x161fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161fb0: 0xc060604  jal         func_181810
    ctx->pc = 0x161FB0u;
    SET_GPR_U32(ctx, 31, 0x161FB8u);
    ctx->pc = 0x161FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161FB0u;
            // 0x161fb4: 0x24c69d40  addiu       $a2, $a2, -0x62C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FB8u; }
        if (ctx->pc != 0x161FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FB8u; }
        if (ctx->pc != 0x161FB8u) { return; }
    }
    ctx->pc = 0x161FB8u;
    // 0x161fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fc0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x161FC0u;
    SET_GPR_U32(ctx, 31, 0x161FC8u);
    ctx->pc = 0x161FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161FC0u;
            // 0x161fc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FC8u; }
        if (ctx->pc != 0x161FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FC8u; }
        if (ctx->pc != 0x161FC8u) { return; }
    }
    ctx->pc = 0x161FC8u;
    // 0x161fc8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x161fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x161fcc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x161FCCu;
    SET_GPR_U32(ctx, 31, 0x161FD4u);
    ctx->pc = 0x161FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161FCCu;
            // 0x161fd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FD4u; }
        if (ctx->pc != 0x161FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FD4u; }
        if (ctx->pc != 0x161FD4u) { return; }
    }
    ctx->pc = 0x161FD4u;
    // 0x161fd4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x161FD4u;
    SET_GPR_U32(ctx, 31, 0x161FDCu);
    ctx->pc = 0x161FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161FD4u;
            // 0x161fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FDCu; }
        if (ctx->pc != 0x161FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FDCu; }
        if (ctx->pc != 0x161FDCu) { return; }
    }
    ctx->pc = 0x161FDCu;
    // 0x161fdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161fe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x161FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161FE8u;
            // 0x161fec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161FF0u;
}
