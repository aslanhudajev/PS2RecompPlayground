#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage3Boss_Hontai
// Address: 0x1a0a90 - 0x1a0e10
void CreateStage3Boss_Hontai_0x1a0a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage3Boss_Hontai_0x1a0a90");
#endif

    ctx->pc = 0x1a0a90u;

    // 0x1a0a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0a94: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1a0a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1a0a98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0a9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0aa0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A0AA0u;
    SET_GPR_U32(ctx, 31, 0x1A0AA8u);
    ctx->pc = 0x1A0AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AA0u;
            // 0x1a0aa4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AA8u; }
        if (ctx->pc != 0x1A0AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AA8u; }
        if (ctx->pc != 0x1A0AA8u) { return; }
    }
    ctx->pc = 0x1A0AA8u;
    // 0x1a0aa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a0aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0aac: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1a0aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1a0ab0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1a0ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1a0ab4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1A0AB4u;
    SET_GPR_U32(ctx, 31, 0x1A0ABCu);
    ctx->pc = 0x1A0AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AB4u;
            // 0x1a0ab8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0ABCu; }
        if (ctx->pc != 0x1A0ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0ABCu; }
        if (ctx->pc != 0x1A0ABCu) { return; }
    }
    ctx->pc = 0x1A0ABCu;
    // 0x1a0abc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A0ABCu;
    SET_GPR_U32(ctx, 31, 0x1A0AC4u);
    ctx->pc = 0x1A0AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0ABCu;
            // 0x1a0ac0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AC4u; }
        if (ctx->pc != 0x1A0AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AC4u; }
        if (ctx->pc != 0x1A0AC4u) { return; }
    }
    ctx->pc = 0x1A0AC4u;
    // 0x1a0ac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ac8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1A0AC8u;
    SET_GPR_U32(ctx, 31, 0x1A0AD0u);
    ctx->pc = 0x1A0ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AC8u;
            // 0x1a0acc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AD0u; }
        if (ctx->pc != 0x1A0AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AD0u; }
        if (ctx->pc != 0x1A0AD0u) { return; }
    }
    ctx->pc = 0x1A0AD0u;
    // 0x1a0ad0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0ad4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a0ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0ad8: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1A0AD8u;
    SET_GPR_U32(ctx, 31, 0x1A0AE0u);
    ctx->pc = 0x1A0ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AD8u;
            // 0x1a0adc: 0xac221aa8  sw          $v0, 0x1AA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AE0u; }
        if (ctx->pc != 0x1A0AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AE0u; }
        if (ctx->pc != 0x1A0AE0u) { return; }
    }
    ctx->pc = 0x1A0AE0u;
    // 0x1a0ae0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0ae4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a0ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ae8: 0xac221aac  sw          $v0, 0x1AAC($at)
    ctx->pc = 0x1a0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6828), GPR_U32(ctx, 2));
    // 0x1a0aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0af0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0af4: 0x8c271aa8  lw          $a3, 0x1AA8($at)
    ctx->pc = 0x1a0af4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6824)));
    // 0x1a0af8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0afc: 0x8c281aac  lw          $t0, 0x1AAC($at)
    ctx->pc = 0x1a0afcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6828)));
    // 0x1a0b00: 0xc060614  jal         func_181850
    ctx->pc = 0x1A0B00u;
    SET_GPR_U32(ctx, 31, 0x1A0B08u);
    ctx->pc = 0x1A0B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B00u;
            // 0x1a0b04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B08u; }
        if (ctx->pc != 0x1A0B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B08u; }
        if (ctx->pc != 0x1A0B08u) { return; }
    }
    ctx->pc = 0x1A0B08u;
    // 0x1a0b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b0c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1A0B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A0B14u);
    ctx->pc = 0x1A0B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B0Cu;
            // 0x1a0b10: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B14u; }
        if (ctx->pc != 0x1A0B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B14u; }
        if (ctx->pc != 0x1A0B14u) { return; }
    }
    ctx->pc = 0x1A0B14u;
    // 0x1a0b14: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a0b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1a0b18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0b20: 0xc060604  jal         func_181810
    ctx->pc = 0x1A0B20u;
    SET_GPR_U32(ctx, 31, 0x1A0B28u);
    ctx->pc = 0x1A0B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B20u;
            // 0x1a0b24: 0x24c6a930  addiu       $a2, $a2, -0x56D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B28u; }
        if (ctx->pc != 0x1A0B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B28u; }
        if (ctx->pc != 0x1A0B28u) { return; }
    }
    ctx->pc = 0x1A0B28u;
    // 0x1a0b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b30: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1A0B30u;
    SET_GPR_U32(ctx, 31, 0x1A0B38u);
    ctx->pc = 0x1A0B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B30u;
            // 0x1a0b34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B38u; }
        if (ctx->pc != 0x1A0B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B38u; }
        if (ctx->pc != 0x1A0B38u) { return; }
    }
    ctx->pc = 0x1A0B38u;
    // 0x1a0b38: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1a0b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1a0b3c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1A0B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A0B44u);
    ctx->pc = 0x1A0B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B3Cu;
            // 0x1a0b40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B44u; }
        if (ctx->pc != 0x1A0B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B44u; }
        if (ctx->pc != 0x1A0B44u) { return; }
    }
    ctx->pc = 0x1A0B44u;
    // 0x1a0b44: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1A0B44u;
    SET_GPR_U32(ctx, 31, 0x1A0B4Cu);
    ctx->pc = 0x1A0B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B44u;
            // 0x1a0b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B4Cu; }
        if (ctx->pc != 0x1A0B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B4Cu; }
        if (ctx->pc != 0x1A0B4Cu) { return; }
    }
    ctx->pc = 0x1A0B4Cu;
    // 0x1a0b4c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A0B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A0B54u);
    ctx->pc = 0x1A0B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B4Cu;
            // 0x1a0b50: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B54u; }
        if (ctx->pc != 0x1A0B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B54u; }
        if (ctx->pc != 0x1A0B54u) { return; }
    }
    ctx->pc = 0x1A0B54u;
    // 0x1a0b54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a0b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b58: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1a0b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1a0b5c: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1a0b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1a0b60: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1A0B60u;
    SET_GPR_U32(ctx, 31, 0x1A0B68u);
    ctx->pc = 0x1A0B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B60u;
            // 0x1a0b64: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B68u; }
        if (ctx->pc != 0x1A0B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B68u; }
        if (ctx->pc != 0x1A0B68u) { return; }
    }
    ctx->pc = 0x1A0B68u;
    // 0x1a0b68: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A0B68u;
    SET_GPR_U32(ctx, 31, 0x1A0B70u);
    ctx->pc = 0x1A0B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B68u;
            // 0x1a0b6c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B70u; }
        if (ctx->pc != 0x1A0B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B70u; }
        if (ctx->pc != 0x1A0B70u) { return; }
    }
    ctx->pc = 0x1A0B70u;
    // 0x1a0b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b74: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1A0B74u;
    SET_GPR_U32(ctx, 31, 0x1A0B7Cu);
    ctx->pc = 0x1A0B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B74u;
            // 0x1a0b78: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B7Cu; }
        if (ctx->pc != 0x1A0B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B7Cu; }
        if (ctx->pc != 0x1A0B7Cu) { return; }
    }
    ctx->pc = 0x1A0B7Cu;
    // 0x1a0b7c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0b80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0b84: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1A0B84u;
    SET_GPR_U32(ctx, 31, 0x1A0B8Cu);
    ctx->pc = 0x1A0B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B84u;
            // 0x1a0b88: 0xac221aa8  sw          $v0, 0x1AA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B8Cu; }
        if (ctx->pc != 0x1A0B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B8Cu; }
        if (ctx->pc != 0x1A0B8Cu) { return; }
    }
    ctx->pc = 0x1A0B8Cu;
    // 0x1a0b8c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0b90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a0b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b94: 0xac221aac  sw          $v0, 0x1AAC($at)
    ctx->pc = 0x1a0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6828), GPR_U32(ctx, 2));
    // 0x1a0b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b9c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0ba0: 0x8c271aa8  lw          $a3, 0x1AA8($at)
    ctx->pc = 0x1a0ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6824)));
    // 0x1a0ba4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0ba8: 0x8c281aac  lw          $t0, 0x1AAC($at)
    ctx->pc = 0x1a0ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6828)));
    // 0x1a0bac: 0xc060614  jal         func_181850
    ctx->pc = 0x1A0BACu;
    SET_GPR_U32(ctx, 31, 0x1A0BB4u);
    ctx->pc = 0x1A0BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BACu;
            // 0x1a0bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BB4u; }
        if (ctx->pc != 0x1A0BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BB4u; }
        if (ctx->pc != 0x1A0BB4u) { return; }
    }
    ctx->pc = 0x1A0BB4u;
    // 0x1a0bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0bb8: 0xc06060c  jal         func_181830
    ctx->pc = 0x1A0BB8u;
    SET_GPR_U32(ctx, 31, 0x1A0BC0u);
    ctx->pc = 0x1A0BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BB8u;
            // 0x1a0bbc: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BC0u; }
        if (ctx->pc != 0x1A0BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BC0u; }
        if (ctx->pc != 0x1A0BC0u) { return; }
    }
    ctx->pc = 0x1A0BC0u;
    // 0x1a0bc0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a0bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1a0bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0bc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0bcc: 0xc060604  jal         func_181810
    ctx->pc = 0x1A0BCCu;
    SET_GPR_U32(ctx, 31, 0x1A0BD4u);
    ctx->pc = 0x1A0BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BCCu;
            // 0x1a0bd0: 0x24c6a930  addiu       $a2, $a2, -0x56D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BD4u; }
        if (ctx->pc != 0x1A0BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BD4u; }
        if (ctx->pc != 0x1A0BD4u) { return; }
    }
    ctx->pc = 0x1A0BD4u;
    // 0x1a0bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0bdc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1A0BDCu;
    SET_GPR_U32(ctx, 31, 0x1A0BE4u);
    ctx->pc = 0x1A0BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BDCu;
            // 0x1a0be0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BE4u; }
        if (ctx->pc != 0x1A0BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BE4u; }
        if (ctx->pc != 0x1A0BE4u) { return; }
    }
    ctx->pc = 0x1A0BE4u;
    // 0x1a0be4: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1a0be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1a0be8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1A0BE8u;
    SET_GPR_U32(ctx, 31, 0x1A0BF0u);
    ctx->pc = 0x1A0BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BE8u;
            // 0x1a0bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BF0u; }
        if (ctx->pc != 0x1A0BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BF0u; }
        if (ctx->pc != 0x1A0BF0u) { return; }
    }
    ctx->pc = 0x1A0BF0u;
    // 0x1a0bf0: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1A0BF0u;
    SET_GPR_U32(ctx, 31, 0x1A0BF8u);
    ctx->pc = 0x1A0BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BF0u;
            // 0x1a0bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BF8u; }
        if (ctx->pc != 0x1A0BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0BF8u; }
        if (ctx->pc != 0x1A0BF8u) { return; }
    }
    ctx->pc = 0x1A0BF8u;
    // 0x1a0bf8: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A0BF8u;
    SET_GPR_U32(ctx, 31, 0x1A0C00u);
    ctx->pc = 0x1A0BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BF8u;
            // 0x1a0bfc: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C00u; }
        if (ctx->pc != 0x1A0C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C00u; }
        if (ctx->pc != 0x1A0C00u) { return; }
    }
    ctx->pc = 0x1A0C00u;
    // 0x1a0c00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a0c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c04: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1a0c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1a0c08: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1a0c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1a0c0c: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1A0C0Cu;
    SET_GPR_U32(ctx, 31, 0x1A0C14u);
    ctx->pc = 0x1A0C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C0Cu;
            // 0x1a0c10: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C14u; }
        if (ctx->pc != 0x1A0C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C14u; }
        if (ctx->pc != 0x1A0C14u) { return; }
    }
    ctx->pc = 0x1A0C14u;
    // 0x1a0c14: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A0C14u;
    SET_GPR_U32(ctx, 31, 0x1A0C1Cu);
    ctx->pc = 0x1A0C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C14u;
            // 0x1a0c18: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C1Cu; }
        if (ctx->pc != 0x1A0C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C1Cu; }
        if (ctx->pc != 0x1A0C1Cu) { return; }
    }
    ctx->pc = 0x1A0C1Cu;
    // 0x1a0c1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c20: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1A0C20u;
    SET_GPR_U32(ctx, 31, 0x1A0C28u);
    ctx->pc = 0x1A0C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C20u;
            // 0x1a0c24: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C28u; }
        if (ctx->pc != 0x1A0C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C28u; }
        if (ctx->pc != 0x1A0C28u) { return; }
    }
    ctx->pc = 0x1A0C28u;
    // 0x1a0c28: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0c2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a0c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0c30: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1A0C30u;
    SET_GPR_U32(ctx, 31, 0x1A0C38u);
    ctx->pc = 0x1A0C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C30u;
            // 0x1a0c34: 0xac221aa8  sw          $v0, 0x1AA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C38u; }
        if (ctx->pc != 0x1A0C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C38u; }
        if (ctx->pc != 0x1A0C38u) { return; }
    }
    ctx->pc = 0x1A0C38u;
    // 0x1a0c38: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0c3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a0c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c40: 0xac221aac  sw          $v0, 0x1AAC($at)
    ctx->pc = 0x1a0c40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6828), GPR_U32(ctx, 2));
    // 0x1a0c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c48: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0c4c: 0x8c271aa8  lw          $a3, 0x1AA8($at)
    ctx->pc = 0x1a0c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6824)));
    // 0x1a0c50: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0c54: 0x8c281aac  lw          $t0, 0x1AAC($at)
    ctx->pc = 0x1a0c54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6828)));
    // 0x1a0c58: 0xc060614  jal         func_181850
    ctx->pc = 0x1A0C58u;
    SET_GPR_U32(ctx, 31, 0x1A0C60u);
    ctx->pc = 0x1A0C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C58u;
            // 0x1a0c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C60u; }
        if (ctx->pc != 0x1A0C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C60u; }
        if (ctx->pc != 0x1A0C60u) { return; }
    }
    ctx->pc = 0x1A0C60u;
    // 0x1a0c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c64: 0xc06060c  jal         func_181830
    ctx->pc = 0x1A0C64u;
    SET_GPR_U32(ctx, 31, 0x1A0C6Cu);
    ctx->pc = 0x1A0C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C64u;
            // 0x1a0c68: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C6Cu; }
        if (ctx->pc != 0x1A0C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C6Cu; }
        if (ctx->pc != 0x1A0C6Cu) { return; }
    }
    ctx->pc = 0x1A0C6Cu;
    // 0x1a0c6c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a0c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1a0c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0c78: 0xc060604  jal         func_181810
    ctx->pc = 0x1A0C78u;
    SET_GPR_U32(ctx, 31, 0x1A0C80u);
    ctx->pc = 0x1A0C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C78u;
            // 0x1a0c7c: 0x24c6a930  addiu       $a2, $a2, -0x56D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C80u; }
        if (ctx->pc != 0x1A0C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C80u; }
        if (ctx->pc != 0x1A0C80u) { return; }
    }
    ctx->pc = 0x1A0C80u;
    // 0x1a0c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c88: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1A0C88u;
    SET_GPR_U32(ctx, 31, 0x1A0C90u);
    ctx->pc = 0x1A0C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C88u;
            // 0x1a0c8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C90u; }
        if (ctx->pc != 0x1A0C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C90u; }
        if (ctx->pc != 0x1A0C90u) { return; }
    }
    ctx->pc = 0x1A0C90u;
    // 0x1a0c90: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1a0c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1a0c94: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1A0C94u;
    SET_GPR_U32(ctx, 31, 0x1A0C9Cu);
    ctx->pc = 0x1A0C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C94u;
            // 0x1a0c98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C9Cu; }
        if (ctx->pc != 0x1A0C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C9Cu; }
        if (ctx->pc != 0x1A0C9Cu) { return; }
    }
    ctx->pc = 0x1A0C9Cu;
    // 0x1a0c9c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1A0C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A0CA4u);
    ctx->pc = 0x1A0CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C9Cu;
            // 0x1a0ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CA4u; }
        if (ctx->pc != 0x1A0CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CA4u; }
        if (ctx->pc != 0x1A0CA4u) { return; }
    }
    ctx->pc = 0x1A0CA4u;
    // 0x1a0ca4: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A0CA4u;
    SET_GPR_U32(ctx, 31, 0x1A0CACu);
    ctx->pc = 0x1A0CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CA4u;
            // 0x1a0ca8: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CACu; }
        if (ctx->pc != 0x1A0CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CACu; }
        if (ctx->pc != 0x1A0CACu) { return; }
    }
    ctx->pc = 0x1A0CACu;
    // 0x1a0cac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a0cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cb0: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1a0cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1a0cb4: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1a0cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1a0cb8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1A0CB8u;
    SET_GPR_U32(ctx, 31, 0x1A0CC0u);
    ctx->pc = 0x1A0CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CB8u;
            // 0x1a0cbc: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CC0u; }
        if (ctx->pc != 0x1A0CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CC0u; }
        if (ctx->pc != 0x1A0CC0u) { return; }
    }
    ctx->pc = 0x1A0CC0u;
    // 0x1a0cc0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A0CC0u;
    SET_GPR_U32(ctx, 31, 0x1A0CC8u);
    ctx->pc = 0x1A0CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CC0u;
            // 0x1a0cc4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CC8u; }
        if (ctx->pc != 0x1A0CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CC8u; }
        if (ctx->pc != 0x1A0CC8u) { return; }
    }
    ctx->pc = 0x1A0CC8u;
    // 0x1a0cc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ccc: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1A0CCCu;
    SET_GPR_U32(ctx, 31, 0x1A0CD4u);
    ctx->pc = 0x1A0CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CCCu;
            // 0x1a0cd0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CD4u; }
        if (ctx->pc != 0x1A0CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CD4u; }
        if (ctx->pc != 0x1A0CD4u) { return; }
    }
    ctx->pc = 0x1A0CD4u;
    // 0x1a0cd4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0cd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0cdc: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1A0CDCu;
    SET_GPR_U32(ctx, 31, 0x1A0CE4u);
    ctx->pc = 0x1A0CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CDCu;
            // 0x1a0ce0: 0xac221aa8  sw          $v0, 0x1AA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CE4u; }
        if (ctx->pc != 0x1A0CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CE4u; }
        if (ctx->pc != 0x1A0CE4u) { return; }
    }
    ctx->pc = 0x1A0CE4u;
    // 0x1a0ce4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0ce8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a0ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cec: 0xac221aac  sw          $v0, 0x1AAC($at)
    ctx->pc = 0x1a0cecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6828), GPR_U32(ctx, 2));
    // 0x1a0cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cf4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0cf8: 0x8c271aa8  lw          $a3, 0x1AA8($at)
    ctx->pc = 0x1a0cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6824)));
    // 0x1a0cfc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0d00: 0x8c281aac  lw          $t0, 0x1AAC($at)
    ctx->pc = 0x1a0d00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6828)));
    // 0x1a0d04: 0xc060614  jal         func_181850
    ctx->pc = 0x1A0D04u;
    SET_GPR_U32(ctx, 31, 0x1A0D0Cu);
    ctx->pc = 0x1A0D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D04u;
            // 0x1a0d08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D0Cu; }
        if (ctx->pc != 0x1A0D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D0Cu; }
        if (ctx->pc != 0x1A0D0Cu) { return; }
    }
    ctx->pc = 0x1A0D0Cu;
    // 0x1a0d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d10: 0xc06060c  jal         func_181830
    ctx->pc = 0x1A0D10u;
    SET_GPR_U32(ctx, 31, 0x1A0D18u);
    ctx->pc = 0x1A0D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D10u;
            // 0x1a0d14: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D18u; }
        if (ctx->pc != 0x1A0D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D18u; }
        if (ctx->pc != 0x1A0D18u) { return; }
    }
    ctx->pc = 0x1A0D18u;
    // 0x1a0d18: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a0d18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1a0d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0d24: 0xc060604  jal         func_181810
    ctx->pc = 0x1A0D24u;
    SET_GPR_U32(ctx, 31, 0x1A0D2Cu);
    ctx->pc = 0x1A0D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D24u;
            // 0x1a0d28: 0x24c6a930  addiu       $a2, $a2, -0x56D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D2Cu; }
        if (ctx->pc != 0x1A0D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D2Cu; }
        if (ctx->pc != 0x1A0D2Cu) { return; }
    }
    ctx->pc = 0x1A0D2Cu;
    // 0x1a0d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d34: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1A0D34u;
    SET_GPR_U32(ctx, 31, 0x1A0D3Cu);
    ctx->pc = 0x1A0D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D34u;
            // 0x1a0d38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D3Cu; }
        if (ctx->pc != 0x1A0D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D3Cu; }
        if (ctx->pc != 0x1A0D3Cu) { return; }
    }
    ctx->pc = 0x1A0D3Cu;
    // 0x1a0d3c: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1a0d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1a0d40: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1A0D40u;
    SET_GPR_U32(ctx, 31, 0x1A0D48u);
    ctx->pc = 0x1A0D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D40u;
            // 0x1a0d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D48u; }
        if (ctx->pc != 0x1A0D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D48u; }
        if (ctx->pc != 0x1A0D48u) { return; }
    }
    ctx->pc = 0x1A0D48u;
    // 0x1a0d48: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1A0D48u;
    SET_GPR_U32(ctx, 31, 0x1A0D50u);
    ctx->pc = 0x1A0D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D48u;
            // 0x1a0d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D50u; }
        if (ctx->pc != 0x1A0D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D50u; }
        if (ctx->pc != 0x1A0D50u) { return; }
    }
    ctx->pc = 0x1A0D50u;
    // 0x1a0d50: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A0D50u;
    SET_GPR_U32(ctx, 31, 0x1A0D58u);
    ctx->pc = 0x1A0D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D50u;
            // 0x1a0d54: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D58u; }
        if (ctx->pc != 0x1A0D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D58u; }
        if (ctx->pc != 0x1A0D58u) { return; }
    }
    ctx->pc = 0x1A0D58u;
    // 0x1a0d58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a0d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d5c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1a0d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1a0d60: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1a0d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1a0d64: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1A0D64u;
    SET_GPR_U32(ctx, 31, 0x1A0D6Cu);
    ctx->pc = 0x1A0D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D64u;
            // 0x1a0d68: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D6Cu; }
        if (ctx->pc != 0x1A0D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D6Cu; }
        if (ctx->pc != 0x1A0D6Cu) { return; }
    }
    ctx->pc = 0x1A0D6Cu;
    // 0x1a0d6c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A0D6Cu;
    SET_GPR_U32(ctx, 31, 0x1A0D74u);
    ctx->pc = 0x1A0D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D6Cu;
            // 0x1a0d70: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D74u; }
        if (ctx->pc != 0x1A0D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D74u; }
        if (ctx->pc != 0x1A0D74u) { return; }
    }
    ctx->pc = 0x1A0D74u;
    // 0x1a0d74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d78: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1A0D78u;
    SET_GPR_U32(ctx, 31, 0x1A0D80u);
    ctx->pc = 0x1A0D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D78u;
            // 0x1a0d7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D80u; }
        if (ctx->pc != 0x1A0D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D80u; }
        if (ctx->pc != 0x1A0D80u) { return; }
    }
    ctx->pc = 0x1A0D80u;
    // 0x1a0d80: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0d84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a0d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0d88: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1A0D88u;
    SET_GPR_U32(ctx, 31, 0x1A0D90u);
    ctx->pc = 0x1A0D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D88u;
            // 0x1a0d8c: 0xac221aa8  sw          $v0, 0x1AA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D90u; }
        if (ctx->pc != 0x1A0D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D90u; }
        if (ctx->pc != 0x1A0D90u) { return; }
    }
    ctx->pc = 0x1A0D90u;
    // 0x1a0d90: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0d94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a0d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d98: 0xac221aac  sw          $v0, 0x1AAC($at)
    ctx->pc = 0x1a0d98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6828), GPR_U32(ctx, 2));
    // 0x1a0d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0da0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0da4: 0x8c271aa8  lw          $a3, 0x1AA8($at)
    ctx->pc = 0x1a0da4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6824)));
    // 0x1a0da8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a0da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a0dac: 0x8c281aac  lw          $t0, 0x1AAC($at)
    ctx->pc = 0x1a0dacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6828)));
    // 0x1a0db0: 0xc060614  jal         func_181850
    ctx->pc = 0x1A0DB0u;
    SET_GPR_U32(ctx, 31, 0x1A0DB8u);
    ctx->pc = 0x1A0DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DB0u;
            // 0x1a0db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DB8u; }
        if (ctx->pc != 0x1A0DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DB8u; }
        if (ctx->pc != 0x1A0DB8u) { return; }
    }
    ctx->pc = 0x1A0DB8u;
    // 0x1a0db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0dbc: 0xc06060c  jal         func_181830
    ctx->pc = 0x1A0DBCu;
    SET_GPR_U32(ctx, 31, 0x1A0DC4u);
    ctx->pc = 0x1A0DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DBCu;
            // 0x1a0dc0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DC4u; }
        if (ctx->pc != 0x1A0DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DC4u; }
        if (ctx->pc != 0x1A0DC4u) { return; }
    }
    ctx->pc = 0x1A0DC4u;
    // 0x1a0dc4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a0dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1a0dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0dcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0dd0: 0xc060604  jal         func_181810
    ctx->pc = 0x1A0DD0u;
    SET_GPR_U32(ctx, 31, 0x1A0DD8u);
    ctx->pc = 0x1A0DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DD0u;
            // 0x1a0dd4: 0x24c6a930  addiu       $a2, $a2, -0x56D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DD8u; }
        if (ctx->pc != 0x1A0DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DD8u; }
        if (ctx->pc != 0x1A0DD8u) { return; }
    }
    ctx->pc = 0x1A0DD8u;
    // 0x1a0dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0de0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1A0DE0u;
    SET_GPR_U32(ctx, 31, 0x1A0DE8u);
    ctx->pc = 0x1A0DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DE0u;
            // 0x1a0de4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DE8u; }
        if (ctx->pc != 0x1A0DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DE8u; }
        if (ctx->pc != 0x1A0DE8u) { return; }
    }
    ctx->pc = 0x1A0DE8u;
    // 0x1a0de8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1a0de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1a0dec: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1A0DECu;
    SET_GPR_U32(ctx, 31, 0x1A0DF4u);
    ctx->pc = 0x1A0DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DECu;
            // 0x1a0df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DF4u; }
        if (ctx->pc != 0x1A0DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DF4u; }
        if (ctx->pc != 0x1A0DF4u) { return; }
    }
    ctx->pc = 0x1A0DF4u;
    // 0x1a0df4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1A0DF4u;
    SET_GPR_U32(ctx, 31, 0x1A0DFCu);
    ctx->pc = 0x1A0DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0DF4u;
            // 0x1a0df8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DFCu; }
        if (ctx->pc != 0x1A0DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DFCu; }
        if (ctx->pc != 0x1A0DFCu) { return; }
    }
    ctx->pc = 0x1A0DFCu;
    // 0x1a0dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0e08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E08u;
            // 0x1a0e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0E10u;
}
