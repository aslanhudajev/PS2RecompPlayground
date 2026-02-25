#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn4_03_Hontai
// Address: 0x1a5bd0 - 0x1a5cc8
void CreateEn4_03_Hontai_0x1a5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn4_03_Hontai_0x1a5bd0");
#endif

    ctx->pc = 0x1a5bd0u;

    // 0x1a5bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5bd4: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1a5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1a5bd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5bdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5be0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A5BE0u;
    SET_GPR_U32(ctx, 31, 0x1A5BE8u);
    ctx->pc = 0x1A5BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BE0u;
            // 0x1a5be4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BE8u; }
        if (ctx->pc != 0x1A5BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BE8u; }
        if (ctx->pc != 0x1A5BE8u) { return; }
    }
    ctx->pc = 0x1A5BE8u;
    // 0x1a5be8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5bec: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1a5becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1a5bf0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1a5bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1a5bf4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1A5BF4u;
    SET_GPR_U32(ctx, 31, 0x1A5BFCu);
    ctx->pc = 0x1A5BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BF4u;
            // 0x1a5bf8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BFCu; }
        if (ctx->pc != 0x1A5BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BFCu; }
        if (ctx->pc != 0x1A5BFCu) { return; }
    }
    ctx->pc = 0x1A5BFCu;
    // 0x1a5bfc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A5BFCu;
    SET_GPR_U32(ctx, 31, 0x1A5C04u);
    ctx->pc = 0x1A5C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BFCu;
            // 0x1a5c00: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C04u; }
        if (ctx->pc != 0x1A5C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C04u; }
        if (ctx->pc != 0x1A5C04u) { return; }
    }
    ctx->pc = 0x1A5C04u;
    // 0x1a5c04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a5c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a5c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a5c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c10: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1A5C10u;
    SET_GPR_U32(ctx, 31, 0x1A5C18u);
    ctx->pc = 0x1A5C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C10u;
            // 0x1a5c14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C18u; }
        if (ctx->pc != 0x1A5C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C18u; }
        if (ctx->pc != 0x1A5C18u) { return; }
    }
    ctx->pc = 0x1A5C18u;
    // 0x1a5c18: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1A5C18u;
    SET_GPR_U32(ctx, 31, 0x1A5C20u);
    ctx->pc = 0x1A5C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C18u;
            // 0x1a5c1c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C20u; }
        if (ctx->pc != 0x1A5C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C20u; }
        if (ctx->pc != 0x1A5C20u) { return; }
    }
    ctx->pc = 0x1A5C20u;
    // 0x1a5c20: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a5c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a5c24: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a5c28: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1A5C28u;
    SET_GPR_U32(ctx, 31, 0x1A5C30u);
    ctx->pc = 0x1A5C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C28u;
            // 0x1a5c2c: 0xac221ad8  sw          $v0, 0x1AD8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C30u; }
        if (ctx->pc != 0x1A5C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C30u; }
        if (ctx->pc != 0x1A5C30u) { return; }
    }
    ctx->pc = 0x1A5C30u;
    // 0x1a5c30: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a5c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a5c34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a5c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c38: 0xac221adc  sw          $v0, 0x1ADC($at)
    ctx->pc = 0x1a5c38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6876), GPR_U32(ctx, 2));
    // 0x1a5c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c40: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a5c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a5c44: 0x8c271ad8  lw          $a3, 0x1AD8($at)
    ctx->pc = 0x1a5c44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6872)));
    // 0x1a5c48: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a5c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a5c4c: 0x8c281adc  lw          $t0, 0x1ADC($at)
    ctx->pc = 0x1a5c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6876)));
    // 0x1a5c50: 0xc060614  jal         func_181850
    ctx->pc = 0x1A5C50u;
    SET_GPR_U32(ctx, 31, 0x1A5C58u);
    ctx->pc = 0x1A5C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C50u;
            // 0x1a5c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C58u; }
        if (ctx->pc != 0x1A5C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C58u; }
        if (ctx->pc != 0x1A5C58u) { return; }
    }
    ctx->pc = 0x1A5C58u;
    // 0x1a5c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c5c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1A5C5Cu;
    SET_GPR_U32(ctx, 31, 0x1A5C64u);
    ctx->pc = 0x1A5C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C5Cu;
            // 0x1a5c60: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C64u; }
        if (ctx->pc != 0x1A5C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C64u; }
        if (ctx->pc != 0x1A5C64u) { return; }
    }
    ctx->pc = 0x1A5C64u;
    // 0x1a5c64: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a5c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1a5c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5c70: 0xc060604  jal         func_181810
    ctx->pc = 0x1A5C70u;
    SET_GPR_U32(ctx, 31, 0x1A5C78u);
    ctx->pc = 0x1A5C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C70u;
            // 0x1a5c74: 0x24c6a960  addiu       $a2, $a2, -0x56A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C78u; }
        if (ctx->pc != 0x1A5C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C78u; }
        if (ctx->pc != 0x1A5C78u) { return; }
    }
    ctx->pc = 0x1A5C78u;
    // 0x1a5c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c80: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1A5C80u;
    SET_GPR_U32(ctx, 31, 0x1A5C88u);
    ctx->pc = 0x1A5C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C80u;
            // 0x1a5c84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C88u; }
        if (ctx->pc != 0x1A5C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C88u; }
        if (ctx->pc != 0x1A5C88u) { return; }
    }
    ctx->pc = 0x1A5C88u;
    // 0x1a5c88: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1a5c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1a5c8c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1A5C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A5C94u);
    ctx->pc = 0x1A5C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C8Cu;
            // 0x1a5c90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C94u; }
        if (ctx->pc != 0x1A5C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C94u; }
        if (ctx->pc != 0x1A5C94u) { return; }
    }
    ctx->pc = 0x1A5C94u;
    // 0x1a5c94: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1A5C94u;
    SET_GPR_U32(ctx, 31, 0x1A5C9Cu);
    ctx->pc = 0x1A5C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C94u;
            // 0x1a5c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C9Cu; }
        if (ctx->pc != 0x1A5C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5C9Cu; }
        if (ctx->pc != 0x1A5C9Cu) { return; }
    }
    ctx->pc = 0x1A5C9Cu;
    // 0x1a5c9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a5c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ca4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1a5ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a5ca8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1a5ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a5cac: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1A5CACu;
    SET_GPR_U32(ctx, 31, 0x1A5CB4u);
    ctx->pc = 0x1A5CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CACu;
            // 0x1a5cb0: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5CB4u; }
        if (ctx->pc != 0x1A5CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5CB4u; }
        if (ctx->pc != 0x1A5CB4u) { return; }
    }
    ctx->pc = 0x1A5CB4u;
    // 0x1a5cb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5cb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CC0u;
            // 0x1a5cc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5CC8u;
}
