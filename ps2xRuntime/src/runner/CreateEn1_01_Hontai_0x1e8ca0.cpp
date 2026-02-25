#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn1_01_Hontai
// Address: 0x1e8ca0 - 0x1e8d98
void CreateEn1_01_Hontai_0x1e8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn1_01_Hontai_0x1e8ca0");
#endif

    ctx->pc = 0x1e8ca0u;

    // 0x1e8ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8ca4: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1e8ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e8ca8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8cb0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E8CB0u;
    SET_GPR_U32(ctx, 31, 0x1E8CB8u);
    ctx->pc = 0x1E8CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CB0u;
            // 0x1e8cb4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CB8u; }
        if (ctx->pc != 0x1E8CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CB8u; }
        if (ctx->pc != 0x1E8CB8u) { return; }
    }
    ctx->pc = 0x1E8CB8u;
    // 0x1e8cb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e8cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8cbc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1e8cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1e8cc0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1e8cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1e8cc4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1E8CC4u;
    SET_GPR_U32(ctx, 31, 0x1E8CCCu);
    ctx->pc = 0x1E8CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CC4u;
            // 0x1e8cc8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CCCu; }
        if (ctx->pc != 0x1E8CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CCCu; }
        if (ctx->pc != 0x1E8CCCu) { return; }
    }
    ctx->pc = 0x1E8CCCu;
    // 0x1e8ccc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E8CCCu;
    SET_GPR_U32(ctx, 31, 0x1E8CD4u);
    ctx->pc = 0x1E8CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CCCu;
            // 0x1e8cd0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CD4u; }
        if (ctx->pc != 0x1E8CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CD4u; }
        if (ctx->pc != 0x1E8CD4u) { return; }
    }
    ctx->pc = 0x1E8CD4u;
    // 0x1e8cd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8cd8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e8cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e8cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ce0: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1E8CE0u;
    SET_GPR_U32(ctx, 31, 0x1E8CE8u);
    ctx->pc = 0x1E8CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CE0u;
            // 0x1e8ce4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CE8u; }
        if (ctx->pc != 0x1E8CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CE8u; }
        if (ctx->pc != 0x1E8CE8u) { return; }
    }
    ctx->pc = 0x1E8CE8u;
    // 0x1e8ce8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1E8CE8u;
    SET_GPR_U32(ctx, 31, 0x1E8CF0u);
    ctx->pc = 0x1E8CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CE8u;
            // 0x1e8cec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CF0u; }
        if (ctx->pc != 0x1E8CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CF0u; }
        if (ctx->pc != 0x1E8CF0u) { return; }
    }
    ctx->pc = 0x1E8CF0u;
    // 0x1e8cf0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e8cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e8cf4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e8cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e8cf8: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1E8CF8u;
    SET_GPR_U32(ctx, 31, 0x1E8D00u);
    ctx->pc = 0x1E8CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CF8u;
            // 0x1e8cfc: 0xac222e18  sw          $v0, 0x2E18($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D00u; }
        if (ctx->pc != 0x1E8D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D00u; }
        if (ctx->pc != 0x1E8D00u) { return; }
    }
    ctx->pc = 0x1E8D00u;
    // 0x1e8d00: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e8d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e8d04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d08: 0xac222e1c  sw          $v0, 0x2E1C($at)
    ctx->pc = 0x1e8d08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11804), GPR_U32(ctx, 2));
    // 0x1e8d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d10: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e8d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e8d14: 0x8c272e18  lw          $a3, 0x2E18($at)
    ctx->pc = 0x1e8d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11800)));
    // 0x1e8d18: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e8d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e8d1c: 0x8c282e1c  lw          $t0, 0x2E1C($at)
    ctx->pc = 0x1e8d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11804)));
    // 0x1e8d20: 0xc060614  jal         func_181850
    ctx->pc = 0x1E8D20u;
    SET_GPR_U32(ctx, 31, 0x1E8D28u);
    ctx->pc = 0x1E8D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D20u;
            // 0x1e8d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D28u; }
        if (ctx->pc != 0x1E8D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D28u; }
        if (ctx->pc != 0x1E8D28u) { return; }
    }
    ctx->pc = 0x1E8D28u;
    // 0x1e8d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d2c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1E8D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E8D34u);
    ctx->pc = 0x1E8D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D2Cu;
            // 0x1e8d30: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D34u; }
        if (ctx->pc != 0x1E8D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D34u; }
        if (ctx->pc != 0x1E8D34u) { return; }
    }
    ctx->pc = 0x1E8D34u;
    // 0x1e8d34: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1e8d34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1e8d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8d40: 0xc060604  jal         func_181810
    ctx->pc = 0x1E8D40u;
    SET_GPR_U32(ctx, 31, 0x1E8D48u);
    ctx->pc = 0x1E8D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D40u;
            // 0x1e8d44: 0x24c6ab90  addiu       $a2, $a2, -0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D48u; }
        if (ctx->pc != 0x1E8D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D48u; }
        if (ctx->pc != 0x1E8D48u) { return; }
    }
    ctx->pc = 0x1E8D48u;
    // 0x1e8d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d50: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1E8D50u;
    SET_GPR_U32(ctx, 31, 0x1E8D58u);
    ctx->pc = 0x1E8D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D50u;
            // 0x1e8d54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D58u; }
        if (ctx->pc != 0x1E8D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D58u; }
        if (ctx->pc != 0x1E8D58u) { return; }
    }
    ctx->pc = 0x1E8D58u;
    // 0x1e8d58: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1e8d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1e8d5c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1E8D5Cu;
    SET_GPR_U32(ctx, 31, 0x1E8D64u);
    ctx->pc = 0x1E8D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D5Cu;
            // 0x1e8d60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D64u; }
        if (ctx->pc != 0x1E8D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D64u; }
        if (ctx->pc != 0x1E8D64u) { return; }
    }
    ctx->pc = 0x1E8D64u;
    // 0x1e8d64: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1E8D64u;
    SET_GPR_U32(ctx, 31, 0x1E8D6Cu);
    ctx->pc = 0x1E8D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D64u;
            // 0x1e8d68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D6Cu; }
        if (ctx->pc != 0x1E8D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D6Cu; }
        if (ctx->pc != 0x1E8D6Cu) { return; }
    }
    ctx->pc = 0x1E8D6Cu;
    // 0x1e8d6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e8d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8d74: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e8d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e8d78: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1e8d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e8d7c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1E8D7Cu;
    SET_GPR_U32(ctx, 31, 0x1E8D84u);
    ctx->pc = 0x1E8D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D7Cu;
            // 0x1e8d80: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D84u; }
        if (ctx->pc != 0x1E8D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D84u; }
        if (ctx->pc != 0x1E8D84u) { return; }
    }
    ctx->pc = 0x1E8D84u;
    // 0x1e8d84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8d90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D90u;
            // 0x1e8d94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8D98u;
}
