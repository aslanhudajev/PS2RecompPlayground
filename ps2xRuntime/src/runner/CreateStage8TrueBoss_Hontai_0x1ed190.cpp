#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage8TrueBoss_Hontai
// Address: 0x1ed190 - 0x1ed270
void CreateStage8TrueBoss_Hontai_0x1ed190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage8TrueBoss_Hontai_0x1ed190");
#endif

    ctx->pc = 0x1ed190u;

    // 0x1ed190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ed190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed194: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x1ed194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1ed198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ed198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ed19c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed1a0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1ED1A0u;
    SET_GPR_U32(ctx, 31, 0x1ED1A8u);
    ctx->pc = 0x1ED1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1A0u;
            // 0x1ed1a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1A8u; }
        if (ctx->pc != 0x1ED1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1A8u; }
        if (ctx->pc != 0x1ED1A8u) { return; }
    }
    ctx->pc = 0x1ED1A8u;
    // 0x1ed1a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ed1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1ac: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1ed1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1ed1b0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1ed1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1ed1b4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1ED1B4u;
    SET_GPR_U32(ctx, 31, 0x1ED1BCu);
    ctx->pc = 0x1ED1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1B4u;
            // 0x1ed1b8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1BCu; }
        if (ctx->pc != 0x1ED1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1BCu; }
        if (ctx->pc != 0x1ED1BCu) { return; }
    }
    ctx->pc = 0x1ED1BCu;
    // 0x1ed1bc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1ED1BCu;
    SET_GPR_U32(ctx, 31, 0x1ED1C4u);
    ctx->pc = 0x1ED1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1BCu;
            // 0x1ed1c0: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1C4u; }
        if (ctx->pc != 0x1ED1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1C4u; }
        if (ctx->pc != 0x1ED1C4u) { return; }
    }
    ctx->pc = 0x1ED1C4u;
    // 0x1ed1c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1c8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1ED1C8u;
    SET_GPR_U32(ctx, 31, 0x1ED1D0u);
    ctx->pc = 0x1ED1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1C8u;
            // 0x1ed1cc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1D0u; }
        if (ctx->pc != 0x1ED1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1D0u; }
        if (ctx->pc != 0x1ED1D0u) { return; }
    }
    ctx->pc = 0x1ED1D0u;
    // 0x1ed1d0: 0x3c010045  lui         $at, 0x45
    ctx->pc = 0x1ed1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)69 << 16));
    // 0x1ed1d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ed1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ed1d8: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1ED1D8u;
    SET_GPR_U32(ctx, 31, 0x1ED1E0u);
    ctx->pc = 0x1ED1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1D8u;
            // 0x1ed1dc: 0xac22c140  sw          $v0, -0x3EC0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294951232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1E0u; }
        if (ctx->pc != 0x1ED1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1E0u; }
        if (ctx->pc != 0x1ED1E0u) { return; }
    }
    ctx->pc = 0x1ED1E0u;
    // 0x1ed1e0: 0x3c010045  lui         $at, 0x45
    ctx->pc = 0x1ed1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)69 << 16));
    // 0x1ed1e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ed1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1e8: 0xac22c144  sw          $v0, -0x3EBC($at)
    ctx->pc = 0x1ed1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294951236), GPR_U32(ctx, 2));
    // 0x1ed1ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1f0: 0x3c010045  lui         $at, 0x45
    ctx->pc = 0x1ed1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)69 << 16));
    // 0x1ed1f4: 0x8c27c140  lw          $a3, -0x3EC0($at)
    ctx->pc = 0x1ed1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294951232)));
    // 0x1ed1f8: 0x3c010045  lui         $at, 0x45
    ctx->pc = 0x1ed1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)69 << 16));
    // 0x1ed1fc: 0x8c28c144  lw          $t0, -0x3EBC($at)
    ctx->pc = 0x1ed1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294951236)));
    // 0x1ed200: 0xc060614  jal         func_181850
    ctx->pc = 0x1ED200u;
    SET_GPR_U32(ctx, 31, 0x1ED208u);
    ctx->pc = 0x1ED204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED200u;
            // 0x1ed204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED208u; }
        if (ctx->pc != 0x1ED208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED208u; }
        if (ctx->pc != 0x1ED208u) { return; }
    }
    ctx->pc = 0x1ED208u;
    // 0x1ed208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed20c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1ED20Cu;
    SET_GPR_U32(ctx, 31, 0x1ED214u);
    ctx->pc = 0x1ED210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED20Cu;
            // 0x1ed210: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED214u; }
        if (ctx->pc != 0x1ED214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED214u; }
        if (ctx->pc != 0x1ED214u) { return; }
    }
    ctx->pc = 0x1ED214u;
    // 0x1ed214: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1ed214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1ed218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed21c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ed21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed220: 0xc060604  jal         func_181810
    ctx->pc = 0x1ED220u;
    SET_GPR_U32(ctx, 31, 0x1ED228u);
    ctx->pc = 0x1ED224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED220u;
            // 0x1ed224: 0x24c6ad20  addiu       $a2, $a2, -0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED228u; }
        if (ctx->pc != 0x1ED228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED228u; }
        if (ctx->pc != 0x1ED228u) { return; }
    }
    ctx->pc = 0x1ED228u;
    // 0x1ed228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed22c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed230: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1ED230u;
    SET_GPR_U32(ctx, 31, 0x1ED238u);
    ctx->pc = 0x1ED234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED230u;
            // 0x1ed234: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED238u; }
        if (ctx->pc != 0x1ED238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED238u; }
        if (ctx->pc != 0x1ED238u) { return; }
    }
    ctx->pc = 0x1ED238u;
    // 0x1ed238: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1ed238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1ed23c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1ED23Cu;
    SET_GPR_U32(ctx, 31, 0x1ED244u);
    ctx->pc = 0x1ED240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED23Cu;
            // 0x1ed240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED244u; }
        if (ctx->pc != 0x1ED244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED244u; }
        if (ctx->pc != 0x1ED244u) { return; }
    }
    ctx->pc = 0x1ED244u;
    // 0x1ed244: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1ED244u;
    SET_GPR_U32(ctx, 31, 0x1ED24Cu);
    ctx->pc = 0x1ED248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED244u;
            // 0x1ed248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED24Cu; }
        if (ctx->pc != 0x1ED24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED24Cu; }
        if (ctx->pc != 0x1ED24Cu) { return; }
    }
    ctx->pc = 0x1ED24Cu;
    // 0x1ed24c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1ED24Cu;
    SET_GPR_U32(ctx, 31, 0x1ED254u);
    ctx->pc = 0x1ED250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED24Cu;
            // 0x1ed250: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED254u; }
        if (ctx->pc != 0x1ED254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED254u; }
        if (ctx->pc != 0x1ED254u) { return; }
    }
    ctx->pc = 0x1ED254u;
    // 0x1ed254: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1ED254u;
    SET_GPR_U32(ctx, 31, 0x1ED25Cu);
    ctx->pc = 0x1ED258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED254u;
            // 0x1ed258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED25Cu; }
        if (ctx->pc != 0x1ED25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED25Cu; }
        if (ctx->pc != 0x1ED25Cu) { return; }
    }
    ctx->pc = 0x1ED25Cu;
    // 0x1ed25c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ed25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed268: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED268u;
            // 0x1ed26c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED270u;
}
