#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex2_01_Hontai
// Address: 0x1d10c0 - 0x1d11a8
void CreateEnex2_01_Hontai_0x1d10c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex2_01_Hontai_0x1d10c0");
#endif

    ctx->pc = 0x1d10c0u;

    // 0x1d10c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d10c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d10c4: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1d10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1d10c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d10c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d10cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d10ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d10d0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D10D0u;
    SET_GPR_U32(ctx, 31, 0x1D10D8u);
    ctx->pc = 0x1D10D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10D0u;
            // 0x1d10d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10D8u; }
        if (ctx->pc != 0x1D10D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10D8u; }
        if (ctx->pc != 0x1D10D8u) { return; }
    }
    ctx->pc = 0x1D10D8u;
    // 0x1d10d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d10d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10dc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1d10dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1d10e0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1d10e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1d10e4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1D10E4u;
    SET_GPR_U32(ctx, 31, 0x1D10ECu);
    ctx->pc = 0x1D10E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10E4u;
            // 0x1d10e8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10ECu; }
        if (ctx->pc != 0x1D10ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10ECu; }
        if (ctx->pc != 0x1D10ECu) { return; }
    }
    ctx->pc = 0x1D10ECu;
    // 0x1d10ec: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1D10ECu;
    SET_GPR_U32(ctx, 31, 0x1D10F4u);
    ctx->pc = 0x1D10F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10ECu;
            // 0x1d10f0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10F4u; }
        if (ctx->pc != 0x1D10F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D10F4u; }
        if (ctx->pc != 0x1D10F4u) { return; }
    }
    ctx->pc = 0x1D10F4u;
    // 0x1d10f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d10f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10f8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1D10F8u;
    SET_GPR_U32(ctx, 31, 0x1D1100u);
    ctx->pc = 0x1D10FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10F8u;
            // 0x1d10fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1100u; }
        if (ctx->pc != 0x1D1100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1100u; }
        if (ctx->pc != 0x1D1100u) { return; }
    }
    ctx->pc = 0x1D1100u;
    // 0x1d1100: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d1100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d1104: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d1104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d1108: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1D1108u;
    SET_GPR_U32(ctx, 31, 0x1D1110u);
    ctx->pc = 0x1D110Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1108u;
            // 0x1d110c: 0xac221d38  sw          $v0, 0x1D38($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1110u; }
        if (ctx->pc != 0x1D1110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1110u; }
        if (ctx->pc != 0x1D1110u) { return; }
    }
    ctx->pc = 0x1D1110u;
    // 0x1d1110: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d1110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d1114: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d1114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1118: 0xac221d3c  sw          $v0, 0x1D3C($at)
    ctx->pc = 0x1d1118u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7484), GPR_U32(ctx, 2));
    // 0x1d111c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1120: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d1120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d1124: 0x8c271d38  lw          $a3, 0x1D38($at)
    ctx->pc = 0x1d1124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7480)));
    // 0x1d1128: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d1128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d112c: 0x8c281d3c  lw          $t0, 0x1D3C($at)
    ctx->pc = 0x1d112cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7484)));
    // 0x1d1130: 0xc060614  jal         func_181850
    ctx->pc = 0x1D1130u;
    SET_GPR_U32(ctx, 31, 0x1D1138u);
    ctx->pc = 0x1D1134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1130u;
            // 0x1d1134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1138u; }
        if (ctx->pc != 0x1D1138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1138u; }
        if (ctx->pc != 0x1D1138u) { return; }
    }
    ctx->pc = 0x1D1138u;
    // 0x1d1138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d113c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1D113Cu;
    SET_GPR_U32(ctx, 31, 0x1D1144u);
    ctx->pc = 0x1D1140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D113Cu;
            // 0x1d1140: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1144u; }
        if (ctx->pc != 0x1D1144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1144u; }
        if (ctx->pc != 0x1D1144u) { return; }
    }
    ctx->pc = 0x1D1144u;
    // 0x1d1144: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d1144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d1148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d114c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d114cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1150: 0xc060604  jal         func_181810
    ctx->pc = 0x1D1150u;
    SET_GPR_U32(ctx, 31, 0x1D1158u);
    ctx->pc = 0x1D1154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1150u;
            // 0x1d1154: 0x24c6aac8  addiu       $a2, $a2, -0x5538 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1158u; }
        if (ctx->pc != 0x1D1158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1158u; }
        if (ctx->pc != 0x1D1158u) { return; }
    }
    ctx->pc = 0x1D1158u;
    // 0x1d1158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d115c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d115cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1160: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1D1160u;
    SET_GPR_U32(ctx, 31, 0x1D1168u);
    ctx->pc = 0x1D1164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1160u;
            // 0x1d1164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1168u; }
        if (ctx->pc != 0x1D1168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1168u; }
        if (ctx->pc != 0x1D1168u) { return; }
    }
    ctx->pc = 0x1D1168u;
    // 0x1d1168: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1d1168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1d116c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1D116Cu;
    SET_GPR_U32(ctx, 31, 0x1D1174u);
    ctx->pc = 0x1D1170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D116Cu;
            // 0x1d1170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1174u; }
        if (ctx->pc != 0x1D1174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1174u; }
        if (ctx->pc != 0x1D1174u) { return; }
    }
    ctx->pc = 0x1D1174u;
    // 0x1d1174: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1D1174u;
    SET_GPR_U32(ctx, 31, 0x1D117Cu);
    ctx->pc = 0x1D1178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1174u;
            // 0x1d1178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D117Cu; }
        if (ctx->pc != 0x1D117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D117Cu; }
        if (ctx->pc != 0x1D117Cu) { return; }
    }
    ctx->pc = 0x1D117Cu;
    // 0x1d117c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d117cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1180: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d1180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1184: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d1184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d1188: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1d1188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d118c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1D118Cu;
    SET_GPR_U32(ctx, 31, 0x1D1194u);
    ctx->pc = 0x1D1190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D118Cu;
            // 0x1d1190: 0x24080090  addiu       $t0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1194u; }
        if (ctx->pc != 0x1D1194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1194u; }
        if (ctx->pc != 0x1D1194u) { return; }
    }
    ctx->pc = 0x1D1194u;
    // 0x1d1194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d119c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d119cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d11a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D11A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D11A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11A0u;
            // 0x1d11a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D11A8u;
}
