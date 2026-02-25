#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn3_03_Hontai
// Address: 0x19cae0 - 0x19cbd8
void CreateEn3_03_Hontai_0x19cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn3_03_Hontai_0x19cae0");
#endif

    ctx->pc = 0x19cae0u;

    // 0x19cae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19cae4: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x19cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x19cae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19caec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19caecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19caf0: 0xc060694  jal         func_181A50
    ctx->pc = 0x19CAF0u;
    SET_GPR_U32(ctx, 31, 0x19CAF8u);
    ctx->pc = 0x19CAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAF0u;
            // 0x19caf4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAF8u; }
        if (ctx->pc != 0x19CAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAF8u; }
        if (ctx->pc != 0x19CAF8u) { return; }
    }
    ctx->pc = 0x19CAF8u;
    // 0x19caf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19caf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cafc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x19cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x19cb00: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x19cb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x19cb04: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x19CB04u;
    SET_GPR_U32(ctx, 31, 0x19CB0Cu);
    ctx->pc = 0x19CB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB04u;
            // 0x19cb08: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB0Cu; }
        if (ctx->pc != 0x19CB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB0Cu; }
        if (ctx->pc != 0x19CB0Cu) { return; }
    }
    ctx->pc = 0x19CB0Cu;
    // 0x19cb0c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x19CB0Cu;
    SET_GPR_U32(ctx, 31, 0x19CB14u);
    ctx->pc = 0x19CB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB0Cu;
            // 0x19cb10: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB14u; }
        if (ctx->pc != 0x19CB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB14u; }
        if (ctx->pc != 0x19CB14u) { return; }
    }
    ctx->pc = 0x19CB14u;
    // 0x19cb14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19cb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19cb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19cb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb20: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x19CB20u;
    SET_GPR_U32(ctx, 31, 0x19CB28u);
    ctx->pc = 0x19CB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB20u;
            // 0x19cb24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB28u; }
        if (ctx->pc != 0x19CB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB28u; }
        if (ctx->pc != 0x19CB28u) { return; }
    }
    ctx->pc = 0x19CB28u;
    // 0x19cb28: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x19CB28u;
    SET_GPR_U32(ctx, 31, 0x19CB30u);
    ctx->pc = 0x19CB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB28u;
            // 0x19cb2c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB30u; }
        if (ctx->pc != 0x19CB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB30u; }
        if (ctx->pc != 0x19CB30u) { return; }
    }
    ctx->pc = 0x19CB30u;
    // 0x19cb30: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19cb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19cb34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19cb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19cb38: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x19CB38u;
    SET_GPR_U32(ctx, 31, 0x19CB40u);
    ctx->pc = 0x19CB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB38u;
            // 0x19cb3c: 0xac221a90  sw          $v0, 0x1A90($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB40u; }
        if (ctx->pc != 0x19CB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB40u; }
        if (ctx->pc != 0x19CB40u) { return; }
    }
    ctx->pc = 0x19CB40u;
    // 0x19cb40: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19cb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19cb44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19cb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb48: 0xac221a94  sw          $v0, 0x1A94($at)
    ctx->pc = 0x19cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6804), GPR_U32(ctx, 2));
    // 0x19cb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19cb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb50: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19cb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19cb54: 0x8c271a90  lw          $a3, 0x1A90($at)
    ctx->pc = 0x19cb54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6800)));
    // 0x19cb58: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19cb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19cb5c: 0x8c281a94  lw          $t0, 0x1A94($at)
    ctx->pc = 0x19cb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6804)));
    // 0x19cb60: 0xc060614  jal         func_181850
    ctx->pc = 0x19CB60u;
    SET_GPR_U32(ctx, 31, 0x19CB68u);
    ctx->pc = 0x19CB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB60u;
            // 0x19cb64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB68u; }
        if (ctx->pc != 0x19CB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB68u; }
        if (ctx->pc != 0x19CB68u) { return; }
    }
    ctx->pc = 0x19CB68u;
    // 0x19cb68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19cb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb6c: 0xc06060c  jal         func_181830
    ctx->pc = 0x19CB6Cu;
    SET_GPR_U32(ctx, 31, 0x19CB74u);
    ctx->pc = 0x19CB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB6Cu;
            // 0x19cb70: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB74u; }
        if (ctx->pc != 0x19CB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB74u; }
        if (ctx->pc != 0x19CB74u) { return; }
    }
    ctx->pc = 0x19CB74u;
    // 0x19cb74: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x19cb74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x19cb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19cb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cb80: 0xc060604  jal         func_181810
    ctx->pc = 0x19CB80u;
    SET_GPR_U32(ctx, 31, 0x19CB88u);
    ctx->pc = 0x19CB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB80u;
            // 0x19cb84: 0x24c6a920  addiu       $a2, $a2, -0x56E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB88u; }
        if (ctx->pc != 0x19CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB88u; }
        if (ctx->pc != 0x19CB88u) { return; }
    }
    ctx->pc = 0x19CB88u;
    // 0x19cb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19cb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19cb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb90: 0xc0605dc  jal         func_181770
    ctx->pc = 0x19CB90u;
    SET_GPR_U32(ctx, 31, 0x19CB98u);
    ctx->pc = 0x19CB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB90u;
            // 0x19cb94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB98u; }
        if (ctx->pc != 0x19CB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB98u; }
        if (ctx->pc != 0x19CB98u) { return; }
    }
    ctx->pc = 0x19CB98u;
    // 0x19cb98: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x19cb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x19cb9c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x19CB9Cu;
    SET_GPR_U32(ctx, 31, 0x19CBA4u);
    ctx->pc = 0x19CBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB9Cu;
            // 0x19cba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBA4u; }
        if (ctx->pc != 0x19CBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBA4u; }
        if (ctx->pc != 0x19CBA4u) { return; }
    }
    ctx->pc = 0x19CBA4u;
    // 0x19cba4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x19CBA4u;
    SET_GPR_U32(ctx, 31, 0x19CBACu);
    ctx->pc = 0x19CBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBA4u;
            // 0x19cba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBACu; }
        if (ctx->pc != 0x19CBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBACu; }
        if (ctx->pc != 0x19CBACu) { return; }
    }
    ctx->pc = 0x19CBACu;
    // 0x19cbac: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x19cbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19cbb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19cbb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19cbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbbc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x19CBBCu;
    SET_GPR_U32(ctx, 31, 0x19CBC4u);
    ctx->pc = 0x19CBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBBCu;
            // 0x19cbc0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBC4u; }
        if (ctx->pc != 0x19CBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBC4u; }
        if (ctx->pc != 0x19CBC4u) { return; }
    }
    ctx->pc = 0x19CBC4u;
    // 0x19cbc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19cbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cbc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cbc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cbcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cbccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBD0u;
            // 0x19cbd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CBD8u;
}
