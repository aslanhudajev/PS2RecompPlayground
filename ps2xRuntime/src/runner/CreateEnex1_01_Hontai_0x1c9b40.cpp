#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex1_01_Hontai
// Address: 0x1c9b40 - 0x1c9c38
void CreateEnex1_01_Hontai_0x1c9b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex1_01_Hontai_0x1c9b40");
#endif

    ctx->pc = 0x1c9b40u;

    // 0x1c9b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c9b44: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1c9b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c9b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c9b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c9b4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9b50: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C9B50u;
    SET_GPR_U32(ctx, 31, 0x1C9B58u);
    ctx->pc = 0x1C9B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B50u;
            // 0x1c9b54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B58u; }
        if (ctx->pc != 0x1C9B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B58u; }
        if (ctx->pc != 0x1C9B58u) { return; }
    }
    ctx->pc = 0x1C9B58u;
    // 0x1c9b58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b5c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1c9b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1c9b60: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1c9b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1c9b64: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1C9B64u;
    SET_GPR_U32(ctx, 31, 0x1C9B6Cu);
    ctx->pc = 0x1C9B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B64u;
            // 0x1c9b68: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B6Cu; }
        if (ctx->pc != 0x1C9B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B6Cu; }
        if (ctx->pc != 0x1C9B6Cu) { return; }
    }
    ctx->pc = 0x1C9B6Cu;
    // 0x1c9b6c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1C9B6Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B74u);
    ctx->pc = 0x1C9B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B6Cu;
            // 0x1c9b70: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B74u; }
        if (ctx->pc != 0x1C9B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B74u; }
        if (ctx->pc != 0x1C9B74u) { return; }
    }
    ctx->pc = 0x1C9B74u;
    // 0x1c9b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c9b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c9b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b80: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1C9B80u;
    SET_GPR_U32(ctx, 31, 0x1C9B88u);
    ctx->pc = 0x1C9B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B80u;
            // 0x1c9b84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B88u; }
        if (ctx->pc != 0x1C9B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B88u; }
        if (ctx->pc != 0x1C9B88u) { return; }
    }
    ctx->pc = 0x1C9B88u;
    // 0x1c9b88: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1C9B88u;
    SET_GPR_U32(ctx, 31, 0x1C9B90u);
    ctx->pc = 0x1C9B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B88u;
            // 0x1c9b8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B90u; }
        if (ctx->pc != 0x1C9B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B90u; }
        if (ctx->pc != 0x1C9B90u) { return; }
    }
    ctx->pc = 0x1C9B90u;
    // 0x1c9b90: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c9b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c9b94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1c9b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c9b98: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1C9B98u;
    SET_GPR_U32(ctx, 31, 0x1C9BA0u);
    ctx->pc = 0x1C9B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B98u;
            // 0x1c9b9c: 0xac221d08  sw          $v0, 0x1D08($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BA0u; }
        if (ctx->pc != 0x1C9BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BA0u; }
        if (ctx->pc != 0x1C9BA0u) { return; }
    }
    ctx->pc = 0x1C9BA0u;
    // 0x1c9ba0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c9ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c9ba4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c9ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ba8: 0xac221d0c  sw          $v0, 0x1D0C($at)
    ctx->pc = 0x1c9ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7436), GPR_U32(ctx, 2));
    // 0x1c9bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bb0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c9bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c9bb4: 0x8c271d08  lw          $a3, 0x1D08($at)
    ctx->pc = 0x1c9bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7432)));
    // 0x1c9bb8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c9bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c9bbc: 0x8c281d0c  lw          $t0, 0x1D0C($at)
    ctx->pc = 0x1c9bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7436)));
    // 0x1c9bc0: 0xc060614  jal         func_181850
    ctx->pc = 0x1C9BC0u;
    SET_GPR_U32(ctx, 31, 0x1C9BC8u);
    ctx->pc = 0x1C9BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BC0u;
            // 0x1c9bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BC8u; }
        if (ctx->pc != 0x1C9BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BC8u; }
        if (ctx->pc != 0x1C9BC8u) { return; }
    }
    ctx->pc = 0x1C9BC8u;
    // 0x1c9bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bcc: 0xc06060c  jal         func_181830
    ctx->pc = 0x1C9BCCu;
    SET_GPR_U32(ctx, 31, 0x1C9BD4u);
    ctx->pc = 0x1C9BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BCCu;
            // 0x1c9bd0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BD4u; }
        if (ctx->pc != 0x1C9BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BD4u; }
        if (ctx->pc != 0x1C9BD4u) { return; }
    }
    ctx->pc = 0x1C9BD4u;
    // 0x1c9bd4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1c9bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1c9bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9be0: 0xc060604  jal         func_181810
    ctx->pc = 0x1C9BE0u;
    SET_GPR_U32(ctx, 31, 0x1C9BE8u);
    ctx->pc = 0x1C9BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BE0u;
            // 0x1c9be4: 0x24c6aaa0  addiu       $a2, $a2, -0x5560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BE8u; }
        if (ctx->pc != 0x1C9BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BE8u; }
        if (ctx->pc != 0x1C9BE8u) { return; }
    }
    ctx->pc = 0x1C9BE8u;
    // 0x1c9be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bf0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1C9BF0u;
    SET_GPR_U32(ctx, 31, 0x1C9BF8u);
    ctx->pc = 0x1C9BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BF0u;
            // 0x1c9bf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BF8u; }
        if (ctx->pc != 0x1C9BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BF8u; }
        if (ctx->pc != 0x1C9BF8u) { return; }
    }
    ctx->pc = 0x1C9BF8u;
    // 0x1c9bf8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1c9bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1c9bfc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1C9BFCu;
    SET_GPR_U32(ctx, 31, 0x1C9C04u);
    ctx->pc = 0x1C9C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BFCu;
            // 0x1c9c00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C04u; }
        if (ctx->pc != 0x1C9C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C04u; }
        if (ctx->pc != 0x1C9C04u) { return; }
    }
    ctx->pc = 0x1C9C04u;
    // 0x1c9c04: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1C9C04u;
    SET_GPR_U32(ctx, 31, 0x1C9C0Cu);
    ctx->pc = 0x1C9C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C04u;
            // 0x1c9c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C0Cu; }
        if (ctx->pc != 0x1C9C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C0Cu; }
        if (ctx->pc != 0x1C9C0Cu) { return; }
    }
    ctx->pc = 0x1C9C0Cu;
    // 0x1c9c0c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1c9c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c9c10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c9c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c1c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1C9C1Cu;
    SET_GPR_U32(ctx, 31, 0x1C9C24u);
    ctx->pc = 0x1C9C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C1Cu;
            // 0x1c9c20: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C24u; }
        if (ctx->pc != 0x1C9C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C24u; }
        if (ctx->pc != 0x1C9C24u) { return; }
    }
    ctx->pc = 0x1C9C24u;
    // 0x1c9c24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c9c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9c28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C30u;
            // 0x1c9c34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9C38u;
}
