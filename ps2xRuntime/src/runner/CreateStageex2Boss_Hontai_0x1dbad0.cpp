#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStageex2Boss_Hontai
// Address: 0x1dbad0 - 0x1dbba0
void CreateStageex2Boss_Hontai_0x1dbad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStageex2Boss_Hontai_0x1dbad0");
#endif

    ctx->pc = 0x1dbad0u;

    // 0x1dbad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbad4: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1dbad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1dbad8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dbad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dbadc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dbadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dbae0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1DBAE0u;
    SET_GPR_U32(ctx, 31, 0x1DBAE8u);
    ctx->pc = 0x1DBAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAE0u;
            // 0x1dbae4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAE8u; }
        if (ctx->pc != 0x1DBAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAE8u; }
        if (ctx->pc != 0x1DBAE8u) { return; }
    }
    ctx->pc = 0x1DBAE8u;
    // 0x1dbae8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbaec: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1dbaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1dbaf0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1dbaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1dbaf4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1DBAF4u;
    SET_GPR_U32(ctx, 31, 0x1DBAFCu);
    ctx->pc = 0x1DBAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAF4u;
            // 0x1dbaf8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAFCu; }
        if (ctx->pc != 0x1DBAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBAFCu; }
        if (ctx->pc != 0x1DBAFCu) { return; }
    }
    ctx->pc = 0x1DBAFCu;
    // 0x1dbafc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1DBAFCu;
    SET_GPR_U32(ctx, 31, 0x1DBB04u);
    ctx->pc = 0x1DBB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBAFCu;
            // 0x1dbb00: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB04u; }
        if (ctx->pc != 0x1DBB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB04u; }
        if (ctx->pc != 0x1DBB04u) { return; }
    }
    ctx->pc = 0x1DBB04u;
    // 0x1dbb04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb08: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1DBB08u;
    SET_GPR_U32(ctx, 31, 0x1DBB10u);
    ctx->pc = 0x1DBB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB08u;
            // 0x1dbb0c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB10u; }
        if (ctx->pc != 0x1DBB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB10u; }
        if (ctx->pc != 0x1DBB10u) { return; }
    }
    ctx->pc = 0x1DBB10u;
    // 0x1dbb10: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1dbb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1dbb14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1dbb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbb18: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1DBB18u;
    SET_GPR_U32(ctx, 31, 0x1DBB20u);
    ctx->pc = 0x1DBB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB18u;
            // 0x1dbb1c: 0xac222d90  sw          $v0, 0x2D90($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB20u; }
        if (ctx->pc != 0x1DBB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB20u; }
        if (ctx->pc != 0x1DBB20u) { return; }
    }
    ctx->pc = 0x1DBB20u;
    // 0x1dbb20: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1dbb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1dbb24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dbb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb28: 0xac222d94  sw          $v0, 0x2D94($at)
    ctx->pc = 0x1dbb28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11668), GPR_U32(ctx, 2));
    // 0x1dbb2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb30: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1dbb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1dbb34: 0x8c272d90  lw          $a3, 0x2D90($at)
    ctx->pc = 0x1dbb34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11664)));
    // 0x1dbb38: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1dbb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1dbb3c: 0x8c282d94  lw          $t0, 0x2D94($at)
    ctx->pc = 0x1dbb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11668)));
    // 0x1dbb40: 0xc060614  jal         func_181850
    ctx->pc = 0x1DBB40u;
    SET_GPR_U32(ctx, 31, 0x1DBB48u);
    ctx->pc = 0x1DBB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB40u;
            // 0x1dbb44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB48u; }
        if (ctx->pc != 0x1DBB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB48u; }
        if (ctx->pc != 0x1DBB48u) { return; }
    }
    ctx->pc = 0x1DBB48u;
    // 0x1dbb48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb4c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1DBB4Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB54u);
    ctx->pc = 0x1DBB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB4Cu;
            // 0x1dbb50: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB54u; }
        if (ctx->pc != 0x1DBB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB54u; }
        if (ctx->pc != 0x1DBB54u) { return; }
    }
    ctx->pc = 0x1DBB54u;
    // 0x1dbb54: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1dbb54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1dbb58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dbb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbb60: 0xc060604  jal         func_181810
    ctx->pc = 0x1DBB60u;
    SET_GPR_U32(ctx, 31, 0x1DBB68u);
    ctx->pc = 0x1DBB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB60u;
            // 0x1dbb64: 0x24c6ab08  addiu       $a2, $a2, -0x54F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB68u; }
        if (ctx->pc != 0x1DBB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB68u; }
        if (ctx->pc != 0x1DBB68u) { return; }
    }
    ctx->pc = 0x1DBB68u;
    // 0x1dbb68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dbb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb70: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1DBB70u;
    SET_GPR_U32(ctx, 31, 0x1DBB78u);
    ctx->pc = 0x1DBB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB70u;
            // 0x1dbb74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB78u; }
        if (ctx->pc != 0x1DBB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB78u; }
        if (ctx->pc != 0x1DBB78u) { return; }
    }
    ctx->pc = 0x1DBB78u;
    // 0x1dbb78: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1dbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1dbb7c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1DBB7Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB84u);
    ctx->pc = 0x1DBB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB7Cu;
            // 0x1dbb80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB84u; }
        if (ctx->pc != 0x1DBB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB84u; }
        if (ctx->pc != 0x1DBB84u) { return; }
    }
    ctx->pc = 0x1DBB84u;
    // 0x1dbb84: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1DBB84u;
    SET_GPR_U32(ctx, 31, 0x1DBB8Cu);
    ctx->pc = 0x1DBB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB84u;
            // 0x1dbb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB8Cu; }
        if (ctx->pc != 0x1DBB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBB8Cu; }
        if (ctx->pc != 0x1DBB8Cu) { return; }
    }
    ctx->pc = 0x1DBB8Cu;
    // 0x1dbb8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dbb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbb90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dbb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbb94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dbb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbb98: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBB98u;
            // 0x1dbb9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DBBA0u;
}
