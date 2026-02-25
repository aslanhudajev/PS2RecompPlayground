#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex2_04_Hontai
// Address: 0x1d40e0 - 0x1d41c8
void CreateEnex2_04_Hontai_0x1d40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex2_04_Hontai_0x1d40e0");
#endif

    ctx->pc = 0x1d40e0u;

    // 0x1d40e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d40e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d40e4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1d40e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1d40e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d40e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d40ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d40ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d40f0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D40F0u;
    SET_GPR_U32(ctx, 31, 0x1D40F8u);
    ctx->pc = 0x1D40F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D40F0u;
            // 0x1d40f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D40F8u; }
        if (ctx->pc != 0x1D40F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D40F8u; }
        if (ctx->pc != 0x1D40F8u) { return; }
    }
    ctx->pc = 0x1D40F8u;
    // 0x1d40f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d40f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d40fc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1d40fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1d4100: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1d4100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1d4104: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1D4104u;
    SET_GPR_U32(ctx, 31, 0x1D410Cu);
    ctx->pc = 0x1D4108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4104u;
            // 0x1d4108: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D410Cu; }
        if (ctx->pc != 0x1D410Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D410Cu; }
        if (ctx->pc != 0x1D410Cu) { return; }
    }
    ctx->pc = 0x1D410Cu;
    // 0x1d410c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1D410Cu;
    SET_GPR_U32(ctx, 31, 0x1D4114u);
    ctx->pc = 0x1D4110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D410Cu;
            // 0x1d4110: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4114u; }
        if (ctx->pc != 0x1D4114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4114u; }
        if (ctx->pc != 0x1D4114u) { return; }
    }
    ctx->pc = 0x1D4114u;
    // 0x1d4114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d4114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4118: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1D4118u;
    SET_GPR_U32(ctx, 31, 0x1D4120u);
    ctx->pc = 0x1D411Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4118u;
            // 0x1d411c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4120u; }
        if (ctx->pc != 0x1D4120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4120u; }
        if (ctx->pc != 0x1D4120u) { return; }
    }
    ctx->pc = 0x1D4120u;
    // 0x1d4120: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d4120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d4124: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d4124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d4128: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1D4128u;
    SET_GPR_U32(ctx, 31, 0x1D4130u);
    ctx->pc = 0x1D412Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4128u;
            // 0x1d412c: 0xac221d48  sw          $v0, 0x1D48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4130u; }
        if (ctx->pc != 0x1D4130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4130u; }
        if (ctx->pc != 0x1D4130u) { return; }
    }
    ctx->pc = 0x1D4130u;
    // 0x1d4130: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d4130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d4134: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d4134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4138: 0xac221d4c  sw          $v0, 0x1D4C($at)
    ctx->pc = 0x1d4138u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7500), GPR_U32(ctx, 2));
    // 0x1d413c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d413cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4140: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d4140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d4144: 0x8c271d48  lw          $a3, 0x1D48($at)
    ctx->pc = 0x1d4144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7496)));
    // 0x1d4148: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d4148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d414c: 0x8c281d4c  lw          $t0, 0x1D4C($at)
    ctx->pc = 0x1d414cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7500)));
    // 0x1d4150: 0xc060614  jal         func_181850
    ctx->pc = 0x1D4150u;
    SET_GPR_U32(ctx, 31, 0x1D4158u);
    ctx->pc = 0x1D4154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4150u;
            // 0x1d4154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4158u; }
        if (ctx->pc != 0x1D4158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4158u; }
        if (ctx->pc != 0x1D4158u) { return; }
    }
    ctx->pc = 0x1D4158u;
    // 0x1d4158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d415c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1D415Cu;
    SET_GPR_U32(ctx, 31, 0x1D4164u);
    ctx->pc = 0x1D4160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D415Cu;
            // 0x1d4160: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4164u; }
        if (ctx->pc != 0x1D4164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4164u; }
        if (ctx->pc != 0x1D4164u) { return; }
    }
    ctx->pc = 0x1D4164u;
    // 0x1d4164: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d4164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d4168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d416c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d416cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4170: 0xc060604  jal         func_181810
    ctx->pc = 0x1D4170u;
    SET_GPR_U32(ctx, 31, 0x1D4178u);
    ctx->pc = 0x1D4174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4170u;
            // 0x1d4174: 0x24c6aad8  addiu       $a2, $a2, -0x5528 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4178u; }
        if (ctx->pc != 0x1D4178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4178u; }
        if (ctx->pc != 0x1D4178u) { return; }
    }
    ctx->pc = 0x1D4178u;
    // 0x1d4178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d417c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d417cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4180: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1D4180u;
    SET_GPR_U32(ctx, 31, 0x1D4188u);
    ctx->pc = 0x1D4184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4180u;
            // 0x1d4184: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4188u; }
        if (ctx->pc != 0x1D4188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4188u; }
        if (ctx->pc != 0x1D4188u) { return; }
    }
    ctx->pc = 0x1D4188u;
    // 0x1d4188: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1d4188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1d418c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1D418Cu;
    SET_GPR_U32(ctx, 31, 0x1D4194u);
    ctx->pc = 0x1D4190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D418Cu;
            // 0x1d4190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4194u; }
        if (ctx->pc != 0x1D4194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4194u; }
        if (ctx->pc != 0x1D4194u) { return; }
    }
    ctx->pc = 0x1D4194u;
    // 0x1d4194: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1D4194u;
    SET_GPR_U32(ctx, 31, 0x1D419Cu);
    ctx->pc = 0x1D4198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4194u;
            // 0x1d4198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D419Cu; }
        if (ctx->pc != 0x1D419Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D419Cu; }
        if (ctx->pc != 0x1D419Cu) { return; }
    }
    ctx->pc = 0x1D419Cu;
    // 0x1d419c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1d419cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d41a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d41a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d41a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d41a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41ac: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1D41ACu;
    SET_GPR_U32(ctx, 31, 0x1D41B4u);
    ctx->pc = 0x1D41B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41ACu;
            // 0x1d41b0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41B4u; }
        if (ctx->pc != 0x1D41B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41B4u; }
        if (ctx->pc != 0x1D41B4u) { return; }
    }
    ctx->pc = 0x1D41B4u;
    // 0x1d41b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d41b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d41b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d41b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d41bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d41bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d41c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D41C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D41C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41C0u;
            // 0x1d41c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D41C8u;
}
