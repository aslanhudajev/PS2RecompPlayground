#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn5_01_Hontai
// Address: 0x1b3fe0 - 0x1b40d8
void CreateEn5_01_Hontai_0x1b3fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn5_01_Hontai_0x1b3fe0");
#endif

    ctx->pc = 0x1b3fe0u;

    // 0x1b3fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b3fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b3fe4: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1b3fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1b3fe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b3fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b3fec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3ff0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B3FF0u;
    SET_GPR_U32(ctx, 31, 0x1B3FF8u);
    ctx->pc = 0x1B3FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3FF0u;
            // 0x1b3ff4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FF8u; }
        if (ctx->pc != 0x1B3FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3FF8u; }
        if (ctx->pc != 0x1B3FF8u) { return; }
    }
    ctx->pc = 0x1B3FF8u;
    // 0x1b3ff8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ffc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b4000: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b4000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b4004: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B4004u;
    SET_GPR_U32(ctx, 31, 0x1B400Cu);
    ctx->pc = 0x1B4008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4004u;
            // 0x1b4008: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B400Cu; }
        if (ctx->pc != 0x1B400Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B400Cu; }
        if (ctx->pc != 0x1B400Cu) { return; }
    }
    ctx->pc = 0x1B400Cu;
    // 0x1b400c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B400Cu;
    SET_GPR_U32(ctx, 31, 0x1B4014u);
    ctx->pc = 0x1B4010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B400Cu;
            // 0x1b4010: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4014u; }
        if (ctx->pc != 0x1B4014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4014u; }
        if (ctx->pc != 0x1B4014u) { return; }
    }
    ctx->pc = 0x1B4014u;
    // 0x1b4014: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4018: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b4018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b401c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b401cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4020: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1B4020u;
    SET_GPR_U32(ctx, 31, 0x1B4028u);
    ctx->pc = 0x1B4024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4020u;
            // 0x1b4024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4028u; }
        if (ctx->pc != 0x1B4028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4028u; }
        if (ctx->pc != 0x1B4028u) { return; }
    }
    ctx->pc = 0x1B4028u;
    // 0x1b4028: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1B4028u;
    SET_GPR_U32(ctx, 31, 0x1B4030u);
    ctx->pc = 0x1B402Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4028u;
            // 0x1b402c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4030u; }
        if (ctx->pc != 0x1B4030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4030u; }
        if (ctx->pc != 0x1B4030u) { return; }
    }
    ctx->pc = 0x1B4030u;
    // 0x1b4030: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b4030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b4034: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b4034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4038: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1B4038u;
    SET_GPR_U32(ctx, 31, 0x1B4040u);
    ctx->pc = 0x1B403Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4038u;
            // 0x1b403c: 0xac221b90  sw          $v0, 0x1B90($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4040u; }
        if (ctx->pc != 0x1B4040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4040u; }
        if (ctx->pc != 0x1B4040u) { return; }
    }
    ctx->pc = 0x1B4040u;
    // 0x1b4040: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b4040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b4044: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b4044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4048: 0xac221b94  sw          $v0, 0x1B94($at)
    ctx->pc = 0x1b4048u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7060), GPR_U32(ctx, 2));
    // 0x1b404c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4050: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b4050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b4054: 0x8c271b90  lw          $a3, 0x1B90($at)
    ctx->pc = 0x1b4054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7056)));
    // 0x1b4058: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b4058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b405c: 0x8c281b94  lw          $t0, 0x1B94($at)
    ctx->pc = 0x1b405cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7060)));
    // 0x1b4060: 0xc060614  jal         func_181850
    ctx->pc = 0x1B4060u;
    SET_GPR_U32(ctx, 31, 0x1B4068u);
    ctx->pc = 0x1B4064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4060u;
            // 0x1b4064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4068u; }
        if (ctx->pc != 0x1B4068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4068u; }
        if (ctx->pc != 0x1B4068u) { return; }
    }
    ctx->pc = 0x1B4068u;
    // 0x1b4068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b406c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B406Cu;
    SET_GPR_U32(ctx, 31, 0x1B4074u);
    ctx->pc = 0x1B4070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B406Cu;
            // 0x1b4070: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4074u; }
        if (ctx->pc != 0x1B4074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4074u; }
        if (ctx->pc != 0x1B4074u) { return; }
    }
    ctx->pc = 0x1B4074u;
    // 0x1b4074: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b4074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b4078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b407c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b407cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4080: 0xc060604  jal         func_181810
    ctx->pc = 0x1B4080u;
    SET_GPR_U32(ctx, 31, 0x1B4088u);
    ctx->pc = 0x1B4084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4080u;
            // 0x1b4084: 0x24c6a9d0  addiu       $a2, $a2, -0x5630 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4088u; }
        if (ctx->pc != 0x1B4088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4088u; }
        if (ctx->pc != 0x1B4088u) { return; }
    }
    ctx->pc = 0x1B4088u;
    // 0x1b4088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b408c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4090: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B4090u;
    SET_GPR_U32(ctx, 31, 0x1B4098u);
    ctx->pc = 0x1B4094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4090u;
            // 0x1b4094: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4098u; }
        if (ctx->pc != 0x1B4098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4098u; }
        if (ctx->pc != 0x1B4098u) { return; }
    }
    ctx->pc = 0x1B4098u;
    // 0x1b4098: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b4098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b409c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B409Cu;
    SET_GPR_U32(ctx, 31, 0x1B40A4u);
    ctx->pc = 0x1B40A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B409Cu;
            // 0x1b40a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40A4u; }
        if (ctx->pc != 0x1B40A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40A4u; }
        if (ctx->pc != 0x1B40A4u) { return; }
    }
    ctx->pc = 0x1B40A4u;
    // 0x1b40a4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B40A4u;
    SET_GPR_U32(ctx, 31, 0x1B40ACu);
    ctx->pc = 0x1B40A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40A4u;
            // 0x1b40a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40ACu; }
        if (ctx->pc != 0x1B40ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40ACu; }
        if (ctx->pc != 0x1B40ACu) { return; }
    }
    ctx->pc = 0x1B40ACu;
    // 0x1b40ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b40acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b40b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40b4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b40b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b40b8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1b40b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b40bc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1B40BCu;
    SET_GPR_U32(ctx, 31, 0x1B40C4u);
    ctx->pc = 0x1B40C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40BCu;
            // 0x1b40c0: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40C4u; }
        if (ctx->pc != 0x1B40C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40C4u; }
        if (ctx->pc != 0x1B40C4u) { return; }
    }
    ctx->pc = 0x1B40C4u;
    // 0x1b40c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b40c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b40c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b40c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b40cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b40ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b40d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B40D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B40D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40D0u;
            // 0x1b40d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B40D8u;
}
