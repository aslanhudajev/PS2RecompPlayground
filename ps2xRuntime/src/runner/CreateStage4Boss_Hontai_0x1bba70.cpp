#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage4Boss_Hontai
// Address: 0x1bba70 - 0x1bbb40
void CreateStage4Boss_Hontai_0x1bba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage4Boss_Hontai_0x1bba70");
#endif

    ctx->pc = 0x1bba70u;

    // 0x1bba70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bba74: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1bba74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bba78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bba7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bba80: 0xc060694  jal         func_181A50
    ctx->pc = 0x1BBA80u;
    SET_GPR_U32(ctx, 31, 0x1BBA88u);
    ctx->pc = 0x1BBA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA80u;
            // 0x1bba84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA88u; }
        if (ctx->pc != 0x1BBA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA88u; }
        if (ctx->pc != 0x1BBA88u) { return; }
    }
    ctx->pc = 0x1BBA88u;
    // 0x1bba88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bba88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bba8c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1bba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1bba90: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1bba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1bba94: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1BBA94u;
    SET_GPR_U32(ctx, 31, 0x1BBA9Cu);
    ctx->pc = 0x1BBA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA94u;
            // 0x1bba98: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA9Cu; }
        if (ctx->pc != 0x1BBA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA9Cu; }
        if (ctx->pc != 0x1BBA9Cu) { return; }
    }
    ctx->pc = 0x1BBA9Cu;
    // 0x1bba9c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1BBA9Cu;
    SET_GPR_U32(ctx, 31, 0x1BBAA4u);
    ctx->pc = 0x1BBAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA9Cu;
            // 0x1bbaa0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAA4u; }
        if (ctx->pc != 0x1BBAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAA4u; }
        if (ctx->pc != 0x1BBAA4u) { return; }
    }
    ctx->pc = 0x1BBAA4u;
    // 0x1bbaa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bbaa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbaa8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1BBAA8u;
    SET_GPR_U32(ctx, 31, 0x1BBAB0u);
    ctx->pc = 0x1BBAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAA8u;
            // 0x1bbaac: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAB0u; }
        if (ctx->pc != 0x1BBAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAB0u; }
        if (ctx->pc != 0x1BBAB0u) { return; }
    }
    ctx->pc = 0x1BBAB0u;
    // 0x1bbab0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bbab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bbab4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bbab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bbab8: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1BBAB8u;
    SET_GPR_U32(ctx, 31, 0x1BBAC0u);
    ctx->pc = 0x1BBABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAB8u;
            // 0x1bbabc: 0xac221c18  sw          $v0, 0x1C18($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAC0u; }
        if (ctx->pc != 0x1BBAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAC0u; }
        if (ctx->pc != 0x1BBAC0u) { return; }
    }
    ctx->pc = 0x1BBAC0u;
    // 0x1bbac0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bbac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bbac4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bbac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbac8: 0xac221c1c  sw          $v0, 0x1C1C($at)
    ctx->pc = 0x1bbac8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7196), GPR_U32(ctx, 2));
    // 0x1bbacc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbad0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bbad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bbad4: 0x8c271c18  lw          $a3, 0x1C18($at)
    ctx->pc = 0x1bbad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7192)));
    // 0x1bbad8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bbad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bbadc: 0x8c281c1c  lw          $t0, 0x1C1C($at)
    ctx->pc = 0x1bbadcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7196)));
    // 0x1bbae0: 0xc060614  jal         func_181850
    ctx->pc = 0x1BBAE0u;
    SET_GPR_U32(ctx, 31, 0x1BBAE8u);
    ctx->pc = 0x1BBAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAE0u;
            // 0x1bbae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAE8u; }
        if (ctx->pc != 0x1BBAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAE8u; }
        if (ctx->pc != 0x1BBAE8u) { return; }
    }
    ctx->pc = 0x1BBAE8u;
    // 0x1bbae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbaec: 0xc06060c  jal         func_181830
    ctx->pc = 0x1BBAECu;
    SET_GPR_U32(ctx, 31, 0x1BBAF4u);
    ctx->pc = 0x1BBAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAECu;
            // 0x1bbaf0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAF4u; }
        if (ctx->pc != 0x1BBAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBAF4u; }
        if (ctx->pc != 0x1BBAF4u) { return; }
    }
    ctx->pc = 0x1BBAF4u;
    // 0x1bbaf4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1bbaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1bbaf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbafc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbb00: 0xc060604  jal         func_181810
    ctx->pc = 0x1BBB00u;
    SET_GPR_U32(ctx, 31, 0x1BBB08u);
    ctx->pc = 0x1BBB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB00u;
            // 0x1bbb04: 0x24c6aa10  addiu       $a2, $a2, -0x55F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB08u; }
        if (ctx->pc != 0x1BBB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB08u; }
        if (ctx->pc != 0x1BBB08u) { return; }
    }
    ctx->pc = 0x1BBB08u;
    // 0x1bbb08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb10: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1BBB10u;
    SET_GPR_U32(ctx, 31, 0x1BBB18u);
    ctx->pc = 0x1BBB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB10u;
            // 0x1bbb14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB18u; }
        if (ctx->pc != 0x1BBB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB18u; }
        if (ctx->pc != 0x1BBB18u) { return; }
    }
    ctx->pc = 0x1BBB18u;
    // 0x1bbb18: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1bbb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1bbb1c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1BBB1Cu;
    SET_GPR_U32(ctx, 31, 0x1BBB24u);
    ctx->pc = 0x1BBB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB1Cu;
            // 0x1bbb20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB24u; }
        if (ctx->pc != 0x1BBB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB24u; }
        if (ctx->pc != 0x1BBB24u) { return; }
    }
    ctx->pc = 0x1BBB24u;
    // 0x1bbb24: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1BBB24u;
    SET_GPR_U32(ctx, 31, 0x1BBB2Cu);
    ctx->pc = 0x1BBB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB24u;
            // 0x1bbb28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB2Cu; }
        if (ctx->pc != 0x1BBB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB2Cu; }
        if (ctx->pc != 0x1BBB2Cu) { return; }
    }
    ctx->pc = 0x1BBB2Cu;
    // 0x1bbb2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bbb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbb30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbb30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbb34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbb34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbb38: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB38u;
            // 0x1bbb3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBB40u;
}
