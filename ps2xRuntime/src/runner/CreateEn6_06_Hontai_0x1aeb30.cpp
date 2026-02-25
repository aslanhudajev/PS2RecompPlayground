#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_06_Hontai
// Address: 0x1aeb30 - 0x1aec20
void CreateEn6_06_Hontai_0x1aeb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_06_Hontai_0x1aeb30");
#endif

    ctx->pc = 0x1aeb30u;

    // 0x1aeb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aeb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aeb34: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x1aeb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1aeb38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aeb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aeb3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aeb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aeb40: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AEB40u;
    SET_GPR_U32(ctx, 31, 0x1AEB48u);
    ctx->pc = 0x1AEB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB40u;
            // 0x1aeb44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB48u; }
        if (ctx->pc != 0x1AEB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB48u; }
        if (ctx->pc != 0x1AEB48u) { return; }
    }
    ctx->pc = 0x1AEB48u;
    // 0x1aeb48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aeb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb4c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1aeb50: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1aeb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1aeb54: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1AEB54u;
    SET_GPR_U32(ctx, 31, 0x1AEB5Cu);
    ctx->pc = 0x1AEB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB54u;
            // 0x1aeb58: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB5Cu; }
        if (ctx->pc != 0x1AEB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB5Cu; }
        if (ctx->pc != 0x1AEB5Cu) { return; }
    }
    ctx->pc = 0x1AEB5Cu;
    // 0x1aeb5c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1AEB5Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB64u);
    ctx->pc = 0x1AEB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB5Cu;
            // 0x1aeb60: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB64u; }
        if (ctx->pc != 0x1AEB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB64u; }
        if (ctx->pc != 0x1AEB64u) { return; }
    }
    ctx->pc = 0x1AEB64u;
    // 0x1aeb64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aeb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb68: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1aeb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aeb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aeb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb70: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1AEB70u;
    SET_GPR_U32(ctx, 31, 0x1AEB78u);
    ctx->pc = 0x1AEB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB70u;
            // 0x1aeb74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB78u; }
        if (ctx->pc != 0x1AEB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB78u; }
        if (ctx->pc != 0x1AEB78u) { return; }
    }
    ctx->pc = 0x1AEB78u;
    // 0x1aeb78: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1AEB78u;
    SET_GPR_U32(ctx, 31, 0x1AEB80u);
    ctx->pc = 0x1AEB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB78u;
            // 0x1aeb7c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB80u; }
        if (ctx->pc != 0x1AEB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB80u; }
        if (ctx->pc != 0x1AEB80u) { return; }
    }
    ctx->pc = 0x1AEB80u;
    // 0x1aeb80: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1aeb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1aeb84: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1aeb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aeb88: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1AEB88u;
    SET_GPR_U32(ctx, 31, 0x1AEB90u);
    ctx->pc = 0x1AEB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB88u;
            // 0x1aeb8c: 0xac221b20  sw          $v0, 0x1B20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB90u; }
        if (ctx->pc != 0x1AEB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB90u; }
        if (ctx->pc != 0x1AEB90u) { return; }
    }
    ctx->pc = 0x1AEB90u;
    // 0x1aeb90: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1aeb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1aeb94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aeb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb98: 0xac221b24  sw          $v0, 0x1B24($at)
    ctx->pc = 0x1aeb98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6948), GPR_U32(ctx, 2));
    // 0x1aeb9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aeb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeba0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1aeba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1aeba4: 0x8c271b20  lw          $a3, 0x1B20($at)
    ctx->pc = 0x1aeba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6944)));
    // 0x1aeba8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1aeba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1aebac: 0x8c281b24  lw          $t0, 0x1B24($at)
    ctx->pc = 0x1aebacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6948)));
    // 0x1aebb0: 0xc060614  jal         func_181850
    ctx->pc = 0x1AEBB0u;
    SET_GPR_U32(ctx, 31, 0x1AEBB8u);
    ctx->pc = 0x1AEBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBB0u;
            // 0x1aebb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBB8u; }
        if (ctx->pc != 0x1AEBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBB8u; }
        if (ctx->pc != 0x1AEBB8u) { return; }
    }
    ctx->pc = 0x1AEBB8u;
    // 0x1aebb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aebb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebbc: 0xc06060c  jal         func_181830
    ctx->pc = 0x1AEBBCu;
    SET_GPR_U32(ctx, 31, 0x1AEBC4u);
    ctx->pc = 0x1AEBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBBCu;
            // 0x1aebc0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBC4u; }
        if (ctx->pc != 0x1AEBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBC4u; }
        if (ctx->pc != 0x1AEBC4u) { return; }
    }
    ctx->pc = 0x1AEBC4u;
    // 0x1aebc4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1aebc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1aebc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aebc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aebccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aebd0: 0xc060604  jal         func_181810
    ctx->pc = 0x1AEBD0u;
    SET_GPR_U32(ctx, 31, 0x1AEBD8u);
    ctx->pc = 0x1AEBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBD0u;
            // 0x1aebd4: 0x24c6a9a8  addiu       $a2, $a2, -0x5658 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBD8u; }
        if (ctx->pc != 0x1AEBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBD8u; }
        if (ctx->pc != 0x1AEBD8u) { return; }
    }
    ctx->pc = 0x1AEBD8u;
    // 0x1aebd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aebd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aebdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebe0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1AEBE0u;
    SET_GPR_U32(ctx, 31, 0x1AEBE8u);
    ctx->pc = 0x1AEBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBE0u;
            // 0x1aebe4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBE8u; }
        if (ctx->pc != 0x1AEBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBE8u; }
        if (ctx->pc != 0x1AEBE8u) { return; }
    }
    ctx->pc = 0x1AEBE8u;
    // 0x1aebe8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1aebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1aebec: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1AEBECu;
    SET_GPR_U32(ctx, 31, 0x1AEBF4u);
    ctx->pc = 0x1AEBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBECu;
            // 0x1aebf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBF4u; }
        if (ctx->pc != 0x1AEBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBF4u; }
        if (ctx->pc != 0x1AEBF4u) { return; }
    }
    ctx->pc = 0x1AEBF4u;
    // 0x1aebf4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1AEBF4u;
    SET_GPR_U32(ctx, 31, 0x1AEBFCu);
    ctx->pc = 0x1AEBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBF4u;
            // 0x1aebf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBFCu; }
        if (ctx->pc != 0x1AEBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBFCu; }
        if (ctx->pc != 0x1AEBFCu) { return; }
    }
    ctx->pc = 0x1AEBFCu;
    // 0x1aebfc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1AEBFCu;
    SET_GPR_U32(ctx, 31, 0x1AEC04u);
    ctx->pc = 0x1AEC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBFCu;
            // 0x1aec00: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC04u; }
        if (ctx->pc != 0x1AEC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC04u; }
        if (ctx->pc != 0x1AEC04u) { return; }
    }
    ctx->pc = 0x1AEC04u;
    // 0x1aec04: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1AEC04u;
    SET_GPR_U32(ctx, 31, 0x1AEC0Cu);
    ctx->pc = 0x1AEC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC04u;
            // 0x1aec08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC0Cu; }
        if (ctx->pc != 0x1AEC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC0Cu; }
        if (ctx->pc != 0x1AEC0Cu) { return; }
    }
    ctx->pc = 0x1AEC0Cu;
    // 0x1aec0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aec0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aec10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aec10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aec14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aec14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aec18: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC18u;
            // 0x1aec1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEC20u;
}
