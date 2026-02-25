#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex1_05_Hontai
// Address: 0x1c7e10 - 0x1c7ef0
void CreateEnex1_05_Hontai_0x1c7e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex1_05_Hontai_0x1c7e10");
#endif

    ctx->pc = 0x1c7e10u;

    // 0x1c7e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7e14: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1c7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1c7e18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c7e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7e20: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C7E20u;
    SET_GPR_U32(ctx, 31, 0x1C7E28u);
    ctx->pc = 0x1C7E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E20u;
            // 0x1c7e24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E28u; }
        if (ctx->pc != 0x1C7E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E28u; }
        if (ctx->pc != 0x1C7E28u) { return; }
    }
    ctx->pc = 0x1C7E28u;
    // 0x1c7e28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c7e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e2c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1c7e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1c7e30: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1c7e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1c7e34: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1C7E34u;
    SET_GPR_U32(ctx, 31, 0x1C7E3Cu);
    ctx->pc = 0x1C7E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E34u;
            // 0x1c7e38: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E3Cu; }
        if (ctx->pc != 0x1C7E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E3Cu; }
        if (ctx->pc != 0x1C7E3Cu) { return; }
    }
    ctx->pc = 0x1C7E3Cu;
    // 0x1c7e3c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1C7E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7E44u);
    ctx->pc = 0x1C7E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E3Cu;
            // 0x1c7e40: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E44u; }
        if (ctx->pc != 0x1C7E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E44u; }
        if (ctx->pc != 0x1C7E44u) { return; }
    }
    ctx->pc = 0x1C7E44u;
    // 0x1c7e44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c7e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e50: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1C7E50u;
    SET_GPR_U32(ctx, 31, 0x1C7E58u);
    ctx->pc = 0x1C7E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E50u;
            // 0x1c7e54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E58u; }
        if (ctx->pc != 0x1C7E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E58u; }
        if (ctx->pc != 0x1C7E58u) { return; }
    }
    ctx->pc = 0x1C7E58u;
    // 0x1c7e58: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1C7E58u;
    SET_GPR_U32(ctx, 31, 0x1C7E60u);
    ctx->pc = 0x1C7E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E58u;
            // 0x1c7e5c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E60u; }
        if (ctx->pc != 0x1C7E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E60u; }
        if (ctx->pc != 0x1C7E60u) { return; }
    }
    ctx->pc = 0x1C7E60u;
    // 0x1c7e60: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c7e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c7e64: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1c7e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7e68: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1C7E68u;
    SET_GPR_U32(ctx, 31, 0x1C7E70u);
    ctx->pc = 0x1C7E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E68u;
            // 0x1c7e6c: 0xac221cf8  sw          $v0, 0x1CF8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E70u; }
        if (ctx->pc != 0x1C7E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E70u; }
        if (ctx->pc != 0x1C7E70u) { return; }
    }
    ctx->pc = 0x1C7E70u;
    // 0x1c7e70: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c7e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c7e74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c7e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e78: 0xac221cfc  sw          $v0, 0x1CFC($at)
    ctx->pc = 0x1c7e78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7420), GPR_U32(ctx, 2));
    // 0x1c7e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e80: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c7e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c7e84: 0x8c271cf8  lw          $a3, 0x1CF8($at)
    ctx->pc = 0x1c7e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7416)));
    // 0x1c7e88: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c7e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c7e8c: 0x8c281cfc  lw          $t0, 0x1CFC($at)
    ctx->pc = 0x1c7e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7420)));
    // 0x1c7e90: 0xc060614  jal         func_181850
    ctx->pc = 0x1C7E90u;
    SET_GPR_U32(ctx, 31, 0x1C7E98u);
    ctx->pc = 0x1C7E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E90u;
            // 0x1c7e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E98u; }
        if (ctx->pc != 0x1C7E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E98u; }
        if (ctx->pc != 0x1C7E98u) { return; }
    }
    ctx->pc = 0x1C7E98u;
    // 0x1c7e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e9c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1C7E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C7EA4u);
    ctx->pc = 0x1C7EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E9Cu;
            // 0x1c7ea0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EA4u; }
        if (ctx->pc != 0x1C7EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EA4u; }
        if (ctx->pc != 0x1C7EA4u) { return; }
    }
    ctx->pc = 0x1C7EA4u;
    // 0x1c7ea4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1c7ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1c7ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7eac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7eb0: 0xc060604  jal         func_181810
    ctx->pc = 0x1C7EB0u;
    SET_GPR_U32(ctx, 31, 0x1C7EB8u);
    ctx->pc = 0x1C7EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EB0u;
            // 0x1c7eb4: 0x24c6aa90  addiu       $a2, $a2, -0x5570 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EB8u; }
        if (ctx->pc != 0x1C7EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EB8u; }
        if (ctx->pc != 0x1C7EB8u) { return; }
    }
    ctx->pc = 0x1C7EB8u;
    // 0x1c7eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ec0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1C7EC0u;
    SET_GPR_U32(ctx, 31, 0x1C7EC8u);
    ctx->pc = 0x1C7EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EC0u;
            // 0x1c7ec4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EC8u; }
        if (ctx->pc != 0x1C7EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EC8u; }
        if (ctx->pc != 0x1C7EC8u) { return; }
    }
    ctx->pc = 0x1C7EC8u;
    // 0x1c7ec8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1c7ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1c7ecc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1C7ECCu;
    SET_GPR_U32(ctx, 31, 0x1C7ED4u);
    ctx->pc = 0x1C7ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7ECCu;
            // 0x1c7ed0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7ED4u; }
        if (ctx->pc != 0x1C7ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7ED4u; }
        if (ctx->pc != 0x1C7ED4u) { return; }
    }
    ctx->pc = 0x1C7ED4u;
    // 0x1c7ed4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1C7ED4u;
    SET_GPR_U32(ctx, 31, 0x1C7EDCu);
    ctx->pc = 0x1C7ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7ED4u;
            // 0x1c7ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EDCu; }
        if (ctx->pc != 0x1C7EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EDCu; }
        if (ctx->pc != 0x1C7EDCu) { return; }
    }
    ctx->pc = 0x1C7EDCu;
    // 0x1c7edc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7ee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EE8u;
            // 0x1c7eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7EF0u;
}
