#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateItemCareer_Hontai
// Address: 0x1dfaf0 - 0x1dfbd0
void CreateItemCareer_Hontai_0x1dfaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateItemCareer_Hontai_0x1dfaf0");
#endif

    ctx->pc = 0x1dfaf0u;

    // 0x1dfaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dfaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dfaf4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1dfaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1dfaf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dfaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dfafc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dfb00: 0xc060694  jal         func_181A50
    ctx->pc = 0x1DFB00u;
    SET_GPR_U32(ctx, 31, 0x1DFB08u);
    ctx->pc = 0x1DFB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB00u;
            // 0x1dfb04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB08u; }
        if (ctx->pc != 0x1DFB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB08u; }
        if (ctx->pc != 0x1DFB08u) { return; }
    }
    ctx->pc = 0x1DFB08u;
    // 0x1dfb08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dfb08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb0c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1dfb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1dfb10: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1dfb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1dfb14: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1DFB14u;
    SET_GPR_U32(ctx, 31, 0x1DFB1Cu);
    ctx->pc = 0x1DFB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB14u;
            // 0x1dfb18: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB1Cu; }
        if (ctx->pc != 0x1DFB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB1Cu; }
        if (ctx->pc != 0x1DFB1Cu) { return; }
    }
    ctx->pc = 0x1DFB1Cu;
    // 0x1dfb1c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1DFB1Cu;
    SET_GPR_U32(ctx, 31, 0x1DFB24u);
    ctx->pc = 0x1DFB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB1Cu;
            // 0x1dfb20: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB24u; }
        if (ctx->pc != 0x1DFB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB24u; }
        if (ctx->pc != 0x1DFB24u) { return; }
    }
    ctx->pc = 0x1DFB24u;
    // 0x1dfb24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dfb24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb28: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1DFB28u;
    SET_GPR_U32(ctx, 31, 0x1DFB30u);
    ctx->pc = 0x1DFB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB28u;
            // 0x1dfb2c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB30u; }
        if (ctx->pc != 0x1DFB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB30u; }
        if (ctx->pc != 0x1DFB30u) { return; }
    }
    ctx->pc = 0x1DFB30u;
    // 0x1dfb30: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1dfb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1dfb34: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1dfb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dfb38: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1DFB38u;
    SET_GPR_U32(ctx, 31, 0x1DFB40u);
    ctx->pc = 0x1DFB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB38u;
            // 0x1dfb3c: 0xac222d98  sw          $v0, 0x2D98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB40u; }
        if (ctx->pc != 0x1DFB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB40u; }
        if (ctx->pc != 0x1DFB40u) { return; }
    }
    ctx->pc = 0x1DFB40u;
    // 0x1dfb40: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1dfb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1dfb44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dfb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb48: 0xac222d9c  sw          $v0, 0x2D9C($at)
    ctx->pc = 0x1dfb48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11676), GPR_U32(ctx, 2));
    // 0x1dfb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb50: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1dfb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1dfb54: 0x8c272d98  lw          $a3, 0x2D98($at)
    ctx->pc = 0x1dfb54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11672)));
    // 0x1dfb58: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1dfb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1dfb5c: 0x8c282d9c  lw          $t0, 0x2D9C($at)
    ctx->pc = 0x1dfb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11676)));
    // 0x1dfb60: 0xc060614  jal         func_181850
    ctx->pc = 0x1DFB60u;
    SET_GPR_U32(ctx, 31, 0x1DFB68u);
    ctx->pc = 0x1DFB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB60u;
            // 0x1dfb64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB68u; }
        if (ctx->pc != 0x1DFB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB68u; }
        if (ctx->pc != 0x1DFB68u) { return; }
    }
    ctx->pc = 0x1DFB68u;
    // 0x1dfb68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb6c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1DFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1DFB74u);
    ctx->pc = 0x1DFB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB6Cu;
            // 0x1dfb70: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB74u; }
        if (ctx->pc != 0x1DFB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB74u; }
        if (ctx->pc != 0x1DFB74u) { return; }
    }
    ctx->pc = 0x1DFB74u;
    // 0x1dfb74: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1dfb74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1dfb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dfb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfb80: 0xc060604  jal         func_181810
    ctx->pc = 0x1DFB80u;
    SET_GPR_U32(ctx, 31, 0x1DFB88u);
    ctx->pc = 0x1DFB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB80u;
            // 0x1dfb84: 0x24c6ab18  addiu       $a2, $a2, -0x54E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB88u; }
        if (ctx->pc != 0x1DFB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB88u; }
        if (ctx->pc != 0x1DFB88u) { return; }
    }
    ctx->pc = 0x1DFB88u;
    // 0x1dfb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb90: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1DFB90u;
    SET_GPR_U32(ctx, 31, 0x1DFB98u);
    ctx->pc = 0x1DFB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB90u;
            // 0x1dfb94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB98u; }
        if (ctx->pc != 0x1DFB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB98u; }
        if (ctx->pc != 0x1DFB98u) { return; }
    }
    ctx->pc = 0x1DFB98u;
    // 0x1dfb98: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1dfb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1dfb9c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1DFB9Cu;
    SET_GPR_U32(ctx, 31, 0x1DFBA4u);
    ctx->pc = 0x1DFBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB9Cu;
            // 0x1dfba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBA4u; }
        if (ctx->pc != 0x1DFBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBA4u; }
        if (ctx->pc != 0x1DFBA4u) { return; }
    }
    ctx->pc = 0x1DFBA4u;
    // 0x1dfba4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1DFBA4u;
    SET_GPR_U32(ctx, 31, 0x1DFBACu);
    ctx->pc = 0x1DFBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBA4u;
            // 0x1dfba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBACu; }
        if (ctx->pc != 0x1DFBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBACu; }
        if (ctx->pc != 0x1DFBACu) { return; }
    }
    ctx->pc = 0x1DFBACu;
    // 0x1dfbac: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1DFBACu;
    SET_GPR_U32(ctx, 31, 0x1DFBB4u);
    ctx->pc = 0x1DFBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBACu;
            // 0x1dfbb0: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBB4u; }
        if (ctx->pc != 0x1DFBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBB4u; }
        if (ctx->pc != 0x1DFBB4u) { return; }
    }
    ctx->pc = 0x1DFBB4u;
    // 0x1dfbb4: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1DFBB4u;
    SET_GPR_U32(ctx, 31, 0x1DFBBCu);
    ctx->pc = 0x1DFBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBB4u;
            // 0x1dfbb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBBCu; }
        if (ctx->pc != 0x1DFBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBBCu; }
        if (ctx->pc != 0x1DFBBCu) { return; }
    }
    ctx->pc = 0x1DFBBCu;
    // 0x1dfbbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dfbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfbc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfbc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfbc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBC8u;
            // 0x1dfbcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFBD0u;
}
