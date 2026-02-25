#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn2_01_Hontai
// Address: 0x166e00 - 0x166ef8
void CreateEn2_01_Hontai_0x166e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn2_01_Hontai_0x166e00");
#endif

    ctx->pc = 0x166e00u;

    // 0x166e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166e04: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x166e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x166e08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x166e0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166e10: 0xc060694  jal         func_181A50
    ctx->pc = 0x166E10u;
    SET_GPR_U32(ctx, 31, 0x166E18u);
    ctx->pc = 0x166E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E10u;
            // 0x166e14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E18u; }
        if (ctx->pc != 0x166E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E18u; }
        if (ctx->pc != 0x166E18u) { return; }
    }
    ctx->pc = 0x166E18u;
    // 0x166e18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x166e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e1c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x166e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x166e20: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x166e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x166e24: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x166E24u;
    SET_GPR_U32(ctx, 31, 0x166E2Cu);
    ctx->pc = 0x166E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E24u;
            // 0x166e28: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E2Cu; }
        if (ctx->pc != 0x166E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E2Cu; }
        if (ctx->pc != 0x166E2Cu) { return; }
    }
    ctx->pc = 0x166E2Cu;
    // 0x166e2c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x166E2Cu;
    SET_GPR_U32(ctx, 31, 0x166E34u);
    ctx->pc = 0x166E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E2Cu;
            // 0x166e30: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E34u; }
        if (ctx->pc != 0x166E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E34u; }
        if (ctx->pc != 0x166E34u) { return; }
    }
    ctx->pc = 0x166E34u;
    // 0x166e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e38: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x166e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x166e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e40: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x166E40u;
    SET_GPR_U32(ctx, 31, 0x166E48u);
    ctx->pc = 0x166E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E40u;
            // 0x166e44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E48u; }
        if (ctx->pc != 0x166E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E48u; }
        if (ctx->pc != 0x166E48u) { return; }
    }
    ctx->pc = 0x166E48u;
    // 0x166e48: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x166E48u;
    SET_GPR_U32(ctx, 31, 0x166E50u);
    ctx->pc = 0x166E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E48u;
            // 0x166e4c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E50u; }
        if (ctx->pc != 0x166E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E50u; }
        if (ctx->pc != 0x166E50u) { return; }
    }
    ctx->pc = 0x166E50u;
    // 0x166e50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x166e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x166e54: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x166e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x166e58: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x166E58u;
    SET_GPR_U32(ctx, 31, 0x166E60u);
    ctx->pc = 0x166E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E58u;
            // 0x166e5c: 0xac224c00  sw          $v0, 0x4C00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E60u; }
        if (ctx->pc != 0x166E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E60u; }
        if (ctx->pc != 0x166E60u) { return; }
    }
    ctx->pc = 0x166E60u;
    // 0x166e60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x166e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x166e64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e68: 0xac224c04  sw          $v0, 0x4C04($at)
    ctx->pc = 0x166e68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19460), GPR_U32(ctx, 2));
    // 0x166e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x166e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x166e74: 0x8c274c00  lw          $a3, 0x4C00($at)
    ctx->pc = 0x166e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19456)));
    // 0x166e78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x166e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x166e7c: 0x8c284c04  lw          $t0, 0x4C04($at)
    ctx->pc = 0x166e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19460)));
    // 0x166e80: 0xc060614  jal         func_181850
    ctx->pc = 0x166E80u;
    SET_GPR_U32(ctx, 31, 0x166E88u);
    ctx->pc = 0x166E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E80u;
            // 0x166e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E88u; }
        if (ctx->pc != 0x166E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E88u; }
        if (ctx->pc != 0x166E88u) { return; }
    }
    ctx->pc = 0x166E88u;
    // 0x166e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e8c: 0xc06060c  jal         func_181830
    ctx->pc = 0x166E8Cu;
    SET_GPR_U32(ctx, 31, 0x166E94u);
    ctx->pc = 0x166E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166E8Cu;
            // 0x166e90: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E94u; }
        if (ctx->pc != 0x166E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E94u; }
        if (ctx->pc != 0x166E94u) { return; }
    }
    ctx->pc = 0x166E94u;
    // 0x166e94: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x166e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x166e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166ea0: 0xc060604  jal         func_181810
    ctx->pc = 0x166EA0u;
    SET_GPR_U32(ctx, 31, 0x166EA8u);
    ctx->pc = 0x166EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166EA0u;
            // 0x166ea4: 0x24c69d68  addiu       $a2, $a2, -0x6298 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166EA8u; }
        if (ctx->pc != 0x166EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166EA8u; }
        if (ctx->pc != 0x166EA8u) { return; }
    }
    ctx->pc = 0x166EA8u;
    // 0x166ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166eb0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x166EB0u;
    SET_GPR_U32(ctx, 31, 0x166EB8u);
    ctx->pc = 0x166EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166EB0u;
            // 0x166eb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166EB8u; }
        if (ctx->pc != 0x166EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166EB8u; }
        if (ctx->pc != 0x166EB8u) { return; }
    }
    ctx->pc = 0x166EB8u;
    // 0x166eb8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x166eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x166ebc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x166EBCu;
    SET_GPR_U32(ctx, 31, 0x166EC4u);
    ctx->pc = 0x166EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166EBCu;
            // 0x166ec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166EC4u; }
        if (ctx->pc != 0x166EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166EC4u; }
        if (ctx->pc != 0x166EC4u) { return; }
    }
    ctx->pc = 0x166EC4u;
    // 0x166ec4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x166EC4u;
    SET_GPR_U32(ctx, 31, 0x166ECCu);
    ctx->pc = 0x166EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166EC4u;
            // 0x166ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166ECCu; }
        if (ctx->pc != 0x166ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166ECCu; }
        if (ctx->pc != 0x166ECCu) { return; }
    }
    ctx->pc = 0x166ECCu;
    // 0x166ecc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ed4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166ed8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x166ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x166edc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x166EDCu;
    SET_GPR_U32(ctx, 31, 0x166EE4u);
    ctx->pc = 0x166EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166EDCu;
            // 0x166ee0: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166EE4u; }
        if (ctx->pc != 0x166EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166EE4u; }
        if (ctx->pc != 0x166EE4u) { return; }
    }
    ctx->pc = 0x166EE4u;
    // 0x166ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x166ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x166EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166EF0u;
            // 0x166ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166EF8u;
}
