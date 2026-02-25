#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn8_bit_Hontai
// Address: 0x1e3380 - 0x1e35a8
void CreateEn8_bit_Hontai_0x1e3380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn8_bit_Hontai_0x1e3380");
#endif

    ctx->pc = 0x1e3380u;

    // 0x1e3380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e3384: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1e3384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e3388: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e3388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e338c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e3390: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E3390u;
    SET_GPR_U32(ctx, 31, 0x1E3398u);
    ctx->pc = 0x1E3394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3390u;
            // 0x1e3394: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3398u; }
        if (ctx->pc != 0x1E3398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3398u; }
        if (ctx->pc != 0x1E3398u) { return; }
    }
    ctx->pc = 0x1E3398u;
    // 0x1e3398: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e3398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e339c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1e339cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1e33a0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1e33a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1e33a4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1E33A4u;
    SET_GPR_U32(ctx, 31, 0x1E33ACu);
    ctx->pc = 0x1E33A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33A4u;
            // 0x1e33a8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33ACu; }
        if (ctx->pc != 0x1E33ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33ACu; }
        if (ctx->pc != 0x1E33ACu) { return; }
    }
    ctx->pc = 0x1E33ACu;
    // 0x1e33ac: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E33ACu;
    SET_GPR_U32(ctx, 31, 0x1E33B4u);
    ctx->pc = 0x1E33B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33ACu;
            // 0x1e33b0: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33B4u; }
        if (ctx->pc != 0x1E33B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33B4u; }
        if (ctx->pc != 0x1E33B4u) { return; }
    }
    ctx->pc = 0x1E33B4u;
    // 0x1e33b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e33b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33b8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1E33B8u;
    SET_GPR_U32(ctx, 31, 0x1E33C0u);
    ctx->pc = 0x1E33BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33B8u;
            // 0x1e33bc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33C0u; }
        if (ctx->pc != 0x1E33C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33C0u; }
        if (ctx->pc != 0x1E33C0u) { return; }
    }
    ctx->pc = 0x1E33C0u;
    // 0x1e33c0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e33c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e33c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e33c8: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1E33C8u;
    SET_GPR_U32(ctx, 31, 0x1E33D0u);
    ctx->pc = 0x1E33CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33C8u;
            // 0x1e33cc: 0xac222db8  sw          $v0, 0x2DB8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33D0u; }
        if (ctx->pc != 0x1E33D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33D0u; }
        if (ctx->pc != 0x1E33D0u) { return; }
    }
    ctx->pc = 0x1E33D0u;
    // 0x1e33d0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e33d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e33d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e33d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33d8: 0xac222dbc  sw          $v0, 0x2DBC($at)
    ctx->pc = 0x1e33d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11708), GPR_U32(ctx, 2));
    // 0x1e33dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e33dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33e0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e33e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e33e4: 0x8c272db8  lw          $a3, 0x2DB8($at)
    ctx->pc = 0x1e33e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11704)));
    // 0x1e33e8: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e33e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e33ec: 0x8c282dbc  lw          $t0, 0x2DBC($at)
    ctx->pc = 0x1e33ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11708)));
    // 0x1e33f0: 0xc060614  jal         func_181850
    ctx->pc = 0x1E33F0u;
    SET_GPR_U32(ctx, 31, 0x1E33F8u);
    ctx->pc = 0x1E33F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33F0u;
            // 0x1e33f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33F8u; }
        if (ctx->pc != 0x1E33F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33F8u; }
        if (ctx->pc != 0x1E33F8u) { return; }
    }
    ctx->pc = 0x1E33F8u;
    // 0x1e33f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e33f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33fc: 0xc06060c  jal         func_181830
    ctx->pc = 0x1E33FCu;
    SET_GPR_U32(ctx, 31, 0x1E3404u);
    ctx->pc = 0x1E3400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33FCu;
            // 0x1e3400: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3404u; }
        if (ctx->pc != 0x1E3404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3404u; }
        if (ctx->pc != 0x1E3404u) { return; }
    }
    ctx->pc = 0x1E3404u;
    // 0x1e3404: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1e3404u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1e3408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e340c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e340cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3410: 0xc060604  jal         func_181810
    ctx->pc = 0x1E3410u;
    SET_GPR_U32(ctx, 31, 0x1E3418u);
    ctx->pc = 0x1E3414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3410u;
            // 0x1e3414: 0x24c6ab28  addiu       $a2, $a2, -0x54D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3418u; }
        if (ctx->pc != 0x1E3418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3418u; }
        if (ctx->pc != 0x1E3418u) { return; }
    }
    ctx->pc = 0x1E3418u;
    // 0x1e3418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e341c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e341cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3420: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1E3420u;
    SET_GPR_U32(ctx, 31, 0x1E3428u);
    ctx->pc = 0x1E3424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3420u;
            // 0x1e3424: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3428u; }
        if (ctx->pc != 0x1E3428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3428u; }
        if (ctx->pc != 0x1E3428u) { return; }
    }
    ctx->pc = 0x1E3428u;
    // 0x1e3428: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1e3428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1e342c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1E342Cu;
    SET_GPR_U32(ctx, 31, 0x1E3434u);
    ctx->pc = 0x1E3430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E342Cu;
            // 0x1e3430: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3434u; }
        if (ctx->pc != 0x1E3434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3434u; }
        if (ctx->pc != 0x1E3434u) { return; }
    }
    ctx->pc = 0x1E3434u;
    // 0x1e3434: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1E3434u;
    SET_GPR_U32(ctx, 31, 0x1E343Cu);
    ctx->pc = 0x1E3438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3434u;
            // 0x1e3438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E343Cu; }
        if (ctx->pc != 0x1E343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E343Cu; }
        if (ctx->pc != 0x1E343Cu) { return; }
    }
    ctx->pc = 0x1E343Cu;
    // 0x1e343c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E343Cu;
    SET_GPR_U32(ctx, 31, 0x1E3444u);
    ctx->pc = 0x1E3440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E343Cu;
            // 0x1e3440: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3444u; }
        if (ctx->pc != 0x1E3444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3444u; }
        if (ctx->pc != 0x1E3444u) { return; }
    }
    ctx->pc = 0x1E3444u;
    // 0x1e3444: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e3444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3448: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1e3448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1e344c: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1e344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1e3450: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1E3450u;
    SET_GPR_U32(ctx, 31, 0x1E3458u);
    ctx->pc = 0x1E3454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3450u;
            // 0x1e3454: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3458u; }
        if (ctx->pc != 0x1E3458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3458u; }
        if (ctx->pc != 0x1E3458u) { return; }
    }
    ctx->pc = 0x1E3458u;
    // 0x1e3458: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E3458u;
    SET_GPR_U32(ctx, 31, 0x1E3460u);
    ctx->pc = 0x1E345Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3458u;
            // 0x1e345c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3460u; }
        if (ctx->pc != 0x1E3460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3460u; }
        if (ctx->pc != 0x1E3460u) { return; }
    }
    ctx->pc = 0x1E3460u;
    // 0x1e3460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e3460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3464: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1E3464u;
    SET_GPR_U32(ctx, 31, 0x1E346Cu);
    ctx->pc = 0x1E3468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3464u;
            // 0x1e3468: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E346Cu; }
        if (ctx->pc != 0x1E346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E346Cu; }
        if (ctx->pc != 0x1E346Cu) { return; }
    }
    ctx->pc = 0x1E346Cu;
    // 0x1e346c: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e346cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e3470: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e3470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e3474: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1E3474u;
    SET_GPR_U32(ctx, 31, 0x1E347Cu);
    ctx->pc = 0x1E3478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3474u;
            // 0x1e3478: 0xac222db8  sw          $v0, 0x2DB8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E347Cu; }
        if (ctx->pc != 0x1E347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E347Cu; }
        if (ctx->pc != 0x1E347Cu) { return; }
    }
    ctx->pc = 0x1E347Cu;
    // 0x1e347c: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e347cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e3480: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e3480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3484: 0xac222dbc  sw          $v0, 0x2DBC($at)
    ctx->pc = 0x1e3484u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11708), GPR_U32(ctx, 2));
    // 0x1e3488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e348c: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e348cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e3490: 0x8c272db8  lw          $a3, 0x2DB8($at)
    ctx->pc = 0x1e3490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11704)));
    // 0x1e3494: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e3494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e3498: 0x8c282dbc  lw          $t0, 0x2DBC($at)
    ctx->pc = 0x1e3498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11708)));
    // 0x1e349c: 0xc060614  jal         func_181850
    ctx->pc = 0x1E349Cu;
    SET_GPR_U32(ctx, 31, 0x1E34A4u);
    ctx->pc = 0x1E34A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E349Cu;
            // 0x1e34a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34A4u; }
        if (ctx->pc != 0x1E34A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34A4u; }
        if (ctx->pc != 0x1E34A4u) { return; }
    }
    ctx->pc = 0x1E34A4u;
    // 0x1e34a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e34a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34a8: 0xc06060c  jal         func_181830
    ctx->pc = 0x1E34A8u;
    SET_GPR_U32(ctx, 31, 0x1E34B0u);
    ctx->pc = 0x1E34ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34A8u;
            // 0x1e34ac: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34B0u; }
        if (ctx->pc != 0x1E34B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34B0u; }
        if (ctx->pc != 0x1E34B0u) { return; }
    }
    ctx->pc = 0x1E34B0u;
    // 0x1e34b0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1e34b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1e34b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e34b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e34b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e34bc: 0xc060604  jal         func_181810
    ctx->pc = 0x1E34BCu;
    SET_GPR_U32(ctx, 31, 0x1E34C4u);
    ctx->pc = 0x1E34C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34BCu;
            // 0x1e34c0: 0x24c6ab28  addiu       $a2, $a2, -0x54D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34C4u; }
        if (ctx->pc != 0x1E34C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34C4u; }
        if (ctx->pc != 0x1E34C4u) { return; }
    }
    ctx->pc = 0x1E34C4u;
    // 0x1e34c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e34c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e34c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34cc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1E34CCu;
    SET_GPR_U32(ctx, 31, 0x1E34D4u);
    ctx->pc = 0x1E34D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34CCu;
            // 0x1e34d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34D4u; }
        if (ctx->pc != 0x1E34D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34D4u; }
        if (ctx->pc != 0x1E34D4u) { return; }
    }
    ctx->pc = 0x1E34D4u;
    // 0x1e34d4: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1e34d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1e34d8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1E34D8u;
    SET_GPR_U32(ctx, 31, 0x1E34E0u);
    ctx->pc = 0x1E34DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34D8u;
            // 0x1e34dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34E0u; }
        if (ctx->pc != 0x1E34E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34E0u; }
        if (ctx->pc != 0x1E34E0u) { return; }
    }
    ctx->pc = 0x1E34E0u;
    // 0x1e34e0: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1E34E0u;
    SET_GPR_U32(ctx, 31, 0x1E34E8u);
    ctx->pc = 0x1E34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34E0u;
            // 0x1e34e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34E8u; }
        if (ctx->pc != 0x1E34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34E8u; }
        if (ctx->pc != 0x1E34E8u) { return; }
    }
    ctx->pc = 0x1E34E8u;
    // 0x1e34e8: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E34E8u;
    SET_GPR_U32(ctx, 31, 0x1E34F0u);
    ctx->pc = 0x1E34ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34E8u;
            // 0x1e34ec: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34F0u; }
        if (ctx->pc != 0x1E34F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34F0u; }
        if (ctx->pc != 0x1E34F0u) { return; }
    }
    ctx->pc = 0x1E34F0u;
    // 0x1e34f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e34f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34f4: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1e34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1e34f8: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1e34f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1e34fc: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1E34FCu;
    SET_GPR_U32(ctx, 31, 0x1E3504u);
    ctx->pc = 0x1E3500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34FCu;
            // 0x1e3500: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3504u; }
        if (ctx->pc != 0x1E3504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3504u; }
        if (ctx->pc != 0x1E3504u) { return; }
    }
    ctx->pc = 0x1E3504u;
    // 0x1e3504: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E3504u;
    SET_GPR_U32(ctx, 31, 0x1E350Cu);
    ctx->pc = 0x1E3508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3504u;
            // 0x1e3508: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E350Cu; }
        if (ctx->pc != 0x1E350Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E350Cu; }
        if (ctx->pc != 0x1E350Cu) { return; }
    }
    ctx->pc = 0x1E350Cu;
    // 0x1e350c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e350cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3510: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1E3510u;
    SET_GPR_U32(ctx, 31, 0x1E3518u);
    ctx->pc = 0x1E3514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3510u;
            // 0x1e3514: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3518u; }
        if (ctx->pc != 0x1E3518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3518u; }
        if (ctx->pc != 0x1E3518u) { return; }
    }
    ctx->pc = 0x1E3518u;
    // 0x1e3518: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e3518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e351c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e351cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e3520: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1E3520u;
    SET_GPR_U32(ctx, 31, 0x1E3528u);
    ctx->pc = 0x1E3524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3520u;
            // 0x1e3524: 0xac222db8  sw          $v0, 0x2DB8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3528u; }
        if (ctx->pc != 0x1E3528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3528u; }
        if (ctx->pc != 0x1E3528u) { return; }
    }
    ctx->pc = 0x1E3528u;
    // 0x1e3528: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e3528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e352c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e352cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3530: 0xac222dbc  sw          $v0, 0x2DBC($at)
    ctx->pc = 0x1e3530u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11708), GPR_U32(ctx, 2));
    // 0x1e3534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3538: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e3538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e353c: 0x8c272db8  lw          $a3, 0x2DB8($at)
    ctx->pc = 0x1e353cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11704)));
    // 0x1e3540: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e3540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e3544: 0x8c282dbc  lw          $t0, 0x2DBC($at)
    ctx->pc = 0x1e3544u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11708)));
    // 0x1e3548: 0xc060614  jal         func_181850
    ctx->pc = 0x1E3548u;
    SET_GPR_U32(ctx, 31, 0x1E3550u);
    ctx->pc = 0x1E354Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3548u;
            // 0x1e354c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3550u; }
        if (ctx->pc != 0x1E3550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3550u; }
        if (ctx->pc != 0x1E3550u) { return; }
    }
    ctx->pc = 0x1E3550u;
    // 0x1e3550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3554: 0xc06060c  jal         func_181830
    ctx->pc = 0x1E3554u;
    SET_GPR_U32(ctx, 31, 0x1E355Cu);
    ctx->pc = 0x1E3558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3554u;
            // 0x1e3558: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E355Cu; }
        if (ctx->pc != 0x1E355Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E355Cu; }
        if (ctx->pc != 0x1E355Cu) { return; }
    }
    ctx->pc = 0x1E355Cu;
    // 0x1e355c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1e355cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1e3560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e3564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3568: 0xc060604  jal         func_181810
    ctx->pc = 0x1E3568u;
    SET_GPR_U32(ctx, 31, 0x1E3570u);
    ctx->pc = 0x1E356Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3568u;
            // 0x1e356c: 0x24c6ab28  addiu       $a2, $a2, -0x54D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3570u; }
        if (ctx->pc != 0x1E3570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3570u; }
        if (ctx->pc != 0x1E3570u) { return; }
    }
    ctx->pc = 0x1E3570u;
    // 0x1e3570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3578: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1E3578u;
    SET_GPR_U32(ctx, 31, 0x1E3580u);
    ctx->pc = 0x1E357Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3578u;
            // 0x1e357c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3580u; }
        if (ctx->pc != 0x1E3580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3580u; }
        if (ctx->pc != 0x1E3580u) { return; }
    }
    ctx->pc = 0x1E3580u;
    // 0x1e3580: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1e3580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1e3584: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1E3584u;
    SET_GPR_U32(ctx, 31, 0x1E358Cu);
    ctx->pc = 0x1E3588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3584u;
            // 0x1e3588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E358Cu; }
        if (ctx->pc != 0x1E358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E358Cu; }
        if (ctx->pc != 0x1E358Cu) { return; }
    }
    ctx->pc = 0x1E358Cu;
    // 0x1e358c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1E358Cu;
    SET_GPR_U32(ctx, 31, 0x1E3594u);
    ctx->pc = 0x1E3590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E358Cu;
            // 0x1e3590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3594u; }
        if (ctx->pc != 0x1E3594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3594u; }
        if (ctx->pc != 0x1E3594u) { return; }
    }
    ctx->pc = 0x1E3594u;
    // 0x1e3594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e359c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e359cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e35a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E35A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E35A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35A0u;
            // 0x1e35a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E35A8u;
}
