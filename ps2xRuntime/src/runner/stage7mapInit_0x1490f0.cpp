#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage7mapInit
// Address: 0x1490f0 - 0x149418
void stage7mapInit_0x1490f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage7mapInit_0x1490f0");
#endif

    ctx->pc = 0x1490f0u;

    // 0x1490f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1490f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1490f4: 0x24040119  addiu       $a0, $zero, 0x119
    ctx->pc = 0x1490f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
    // 0x1490f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1490f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1490fc: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1490fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x149100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149104: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x149104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x149108: 0xc05c20c  jal         func_170830
    ctx->pc = 0x149108u;
    SET_GPR_U32(ctx, 31, 0x149110u);
    ctx->pc = 0x14910Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149108u;
            // 0x14910c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149110u; }
        if (ctx->pc != 0x149110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149110u; }
        if (ctx->pc != 0x149110u) { return; }
    }
    ctx->pc = 0x149110u;
    // 0x149110: 0x2404011a  addiu       $a0, $zero, 0x11A
    ctx->pc = 0x149110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
    // 0x149114: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x149114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x149118: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x149118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14911c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14911Cu;
    SET_GPR_U32(ctx, 31, 0x149124u);
    ctx->pc = 0x149120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14911Cu;
            // 0x149120: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149124u; }
        if (ctx->pc != 0x149124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149124u; }
        if (ctx->pc != 0x149124u) { return; }
    }
    ctx->pc = 0x149124u;
    // 0x149124: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x149124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x149128: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x149128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14912c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14912cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149130: 0xc05c20c  jal         func_170830
    ctx->pc = 0x149130u;
    SET_GPR_U32(ctx, 31, 0x149138u);
    ctx->pc = 0x149134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149130u;
            // 0x149134: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149138u; }
        if (ctx->pc != 0x149138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149138u; }
        if (ctx->pc != 0x149138u) { return; }
    }
    ctx->pc = 0x149138u;
    // 0x149138: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14913c: 0x8c2497e0  lw          $a0, -0x6820($at)
    ctx->pc = 0x14913cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940640)));
    // 0x149140: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149144: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x149144u;
    SET_GPR_U32(ctx, 31, 0x14914Cu);
    ctx->pc = 0x149148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149144u;
            // 0x149148: 0x8c2597f0  lw          $a1, -0x6810($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14914Cu; }
        if (ctx->pc != 0x14914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14914Cu; }
        if (ctx->pc != 0x14914Cu) { return; }
    }
    ctx->pc = 0x14914Cu;
    // 0x14914c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14914cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149154: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149154u;
    SET_GPR_U32(ctx, 31, 0x14915Cu);
    ctx->pc = 0x149158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149154u;
            // 0x149158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14915Cu; }
        if (ctx->pc != 0x14915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14915Cu; }
        if (ctx->pc != 0x14915Cu) { return; }
    }
    ctx->pc = 0x14915Cu;
    // 0x14915c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14915cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149160: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149160u;
    SET_GPR_U32(ctx, 31, 0x149168u);
    ctx->pc = 0x149164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149160u;
            // 0x149164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149168u; }
        if (ctx->pc != 0x149168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149168u; }
        if (ctx->pc != 0x149168u) { return; }
    }
    ctx->pc = 0x149168u;
    // 0x149168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14916c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14916Cu;
    SET_GPR_U32(ctx, 31, 0x149174u);
    ctx->pc = 0x149170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14916Cu;
            // 0x149170: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149174u; }
        if (ctx->pc != 0x149174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149174u; }
        if (ctx->pc != 0x149174u) { return; }
    }
    ctx->pc = 0x149174u;
    // 0x149174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149178: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149178u;
    SET_GPR_U32(ctx, 31, 0x149180u);
    ctx->pc = 0x14917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149178u;
            // 0x14917c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149180u; }
        if (ctx->pc != 0x149180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149180u; }
        if (ctx->pc != 0x149180u) { return; }
    }
    ctx->pc = 0x149180u;
    // 0x149180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149184: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149184u;
    SET_GPR_U32(ctx, 31, 0x14918Cu);
    ctx->pc = 0x149188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149184u;
            // 0x149188: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14918Cu; }
        if (ctx->pc != 0x14918Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14918Cu; }
        if (ctx->pc != 0x14918Cu) { return; }
    }
    ctx->pc = 0x14918Cu;
    // 0x14918c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14918cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x149190: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x149190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x149194: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x149194u;
    SET_GPR_U32(ctx, 31, 0x14919Cu);
    ctx->pc = 0x149198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149194u;
            // 0x149198: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14919Cu; }
        if (ctx->pc != 0x14919Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14919Cu; }
        if (ctx->pc != 0x14919Cu) { return; }
    }
    ctx->pc = 0x14919Cu;
    // 0x14919c: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14919Cu;
    SET_GPR_U32(ctx, 31, 0x1491A4u);
    ctx->pc = 0x1491A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14919Cu;
            // 0x1491a0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491A4u; }
        if (ctx->pc != 0x1491A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491A4u; }
        if (ctx->pc != 0x1491A4u) { return; }
    }
    ctx->pc = 0x1491A4u;
    // 0x1491a4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1491a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1491a8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1491a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1491ac: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1491ACu;
    SET_GPR_U32(ctx, 31, 0x1491B4u);
    ctx->pc = 0x1491B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1491ACu;
            // 0x1491b0: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491B4u; }
        if (ctx->pc != 0x1491B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491B4u; }
        if (ctx->pc != 0x1491B4u) { return; }
    }
    ctx->pc = 0x1491B4u;
    // 0x1491b4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1491b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1491b8: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1491b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1491bc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1491BCu;
    SET_GPR_U32(ctx, 31, 0x1491C4u);
    ctx->pc = 0x1491C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1491BCu;
            // 0x1491c0: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491C4u; }
        if (ctx->pc != 0x1491C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491C4u; }
        if (ctx->pc != 0x1491C4u) { return; }
    }
    ctx->pc = 0x1491C4u;
    // 0x1491c4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1491c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1491c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1491c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1491cc: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x1491ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x1491d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1491d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1491d4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1491d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1491d8: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x1491d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x1491dc: 0xc060614  jal         func_181850
    ctx->pc = 0x1491DCu;
    SET_GPR_U32(ctx, 31, 0x1491E4u);
    ctx->pc = 0x1491E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1491DCu;
            // 0x1491e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491E4u; }
        if (ctx->pc != 0x1491E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491E4u; }
        if (ctx->pc != 0x1491E4u) { return; }
    }
    ctx->pc = 0x1491E4u;
    // 0x1491e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1491e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1491e8: 0xc06060c  jal         func_181830
    ctx->pc = 0x1491E8u;
    SET_GPR_U32(ctx, 31, 0x1491F0u);
    ctx->pc = 0x1491ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1491E8u;
            // 0x1491ec: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491F0u; }
        if (ctx->pc != 0x1491F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491F0u; }
        if (ctx->pc != 0x1491F0u) { return; }
    }
    ctx->pc = 0x1491F0u;
    // 0x1491f0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1491f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1491f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1491f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1491f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1491f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1491fc: 0xc060604  jal         func_181810
    ctx->pc = 0x1491FCu;
    SET_GPR_U32(ctx, 31, 0x149204u);
    ctx->pc = 0x149200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1491FCu;
            // 0x149200: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149204u; }
        if (ctx->pc != 0x149204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149204u; }
        if (ctx->pc != 0x149204u) { return; }
    }
    ctx->pc = 0x149204u;
    // 0x149204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14920c: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14920Cu;
    SET_GPR_U32(ctx, 31, 0x149214u);
    ctx->pc = 0x149210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14920Cu;
            // 0x149210: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149214u; }
        if (ctx->pc != 0x149214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149214u; }
        if (ctx->pc != 0x149214u) { return; }
    }
    ctx->pc = 0x149214u;
    // 0x149214: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x149214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x149218: 0xc046376  jal         func_118DD8
    ctx->pc = 0x149218u;
    SET_GPR_U32(ctx, 31, 0x149220u);
    ctx->pc = 0x14921Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149218u;
            // 0x14921c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149220u; }
        if (ctx->pc != 0x149220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149220u; }
        if (ctx->pc != 0x149220u) { return; }
    }
    ctx->pc = 0x149220u;
    // 0x149220: 0xc0605cc  jal         func_181730
    ctx->pc = 0x149220u;
    SET_GPR_U32(ctx, 31, 0x149228u);
    ctx->pc = 0x149224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149220u;
            // 0x149224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149228u; }
        if (ctx->pc != 0x149228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149228u; }
        if (ctx->pc != 0x149228u) { return; }
    }
    ctx->pc = 0x149228u;
    // 0x149228: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14922c: 0x8c2497e8  lw          $a0, -0x6818($at)
    ctx->pc = 0x14922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940648)));
    // 0x149230: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149234: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x149234u;
    SET_GPR_U32(ctx, 31, 0x14923Cu);
    ctx->pc = 0x149238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149234u;
            // 0x149238: 0x8c2597f8  lw          $a1, -0x6808($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940664)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14923Cu; }
        if (ctx->pc != 0x14923Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14923Cu; }
        if (ctx->pc != 0x14923Cu) { return; }
    }
    ctx->pc = 0x14923Cu;
    // 0x14923c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14923cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149244: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149244u;
    SET_GPR_U32(ctx, 31, 0x14924Cu);
    ctx->pc = 0x149248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149244u;
            // 0x149248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14924Cu; }
        if (ctx->pc != 0x14924Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14924Cu; }
        if (ctx->pc != 0x14924Cu) { return; }
    }
    ctx->pc = 0x14924Cu;
    // 0x14924c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14924cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149250: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149250u;
    SET_GPR_U32(ctx, 31, 0x149258u);
    ctx->pc = 0x149254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149250u;
            // 0x149254: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149258u; }
        if (ctx->pc != 0x149258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149258u; }
        if (ctx->pc != 0x149258u) { return; }
    }
    ctx->pc = 0x149258u;
    // 0x149258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14925c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14925Cu;
    SET_GPR_U32(ctx, 31, 0x149264u);
    ctx->pc = 0x149260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14925Cu;
            // 0x149260: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149264u; }
        if (ctx->pc != 0x149264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149264u; }
        if (ctx->pc != 0x149264u) { return; }
    }
    ctx->pc = 0x149264u;
    // 0x149264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149268: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149268u;
    SET_GPR_U32(ctx, 31, 0x149270u);
    ctx->pc = 0x14926Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149268u;
            // 0x14926c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149270u; }
        if (ctx->pc != 0x149270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149270u; }
        if (ctx->pc != 0x149270u) { return; }
    }
    ctx->pc = 0x149270u;
    // 0x149270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149274: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149274u;
    SET_GPR_U32(ctx, 31, 0x14927Cu);
    ctx->pc = 0x149278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149274u;
            // 0x149278: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14927Cu; }
        if (ctx->pc != 0x14927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14927Cu; }
        if (ctx->pc != 0x14927Cu) { return; }
    }
    ctx->pc = 0x14927Cu;
    // 0x14927c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x149280: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x149280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x149284: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x149284u;
    SET_GPR_U32(ctx, 31, 0x14928Cu);
    ctx->pc = 0x149288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149284u;
            // 0x149288: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14928Cu; }
        if (ctx->pc != 0x14928Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14928Cu; }
        if (ctx->pc != 0x14928Cu) { return; }
    }
    ctx->pc = 0x14928Cu;
    // 0x14928c: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14928Cu;
    SET_GPR_U32(ctx, 31, 0x149294u);
    ctx->pc = 0x149290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14928Cu;
            // 0x149290: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149294u; }
        if (ctx->pc != 0x149294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149294u; }
        if (ctx->pc != 0x149294u) { return; }
    }
    ctx->pc = 0x149294u;
    // 0x149294: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149298: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x149298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14929c: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14929Cu;
    SET_GPR_U32(ctx, 31, 0x1492A4u);
    ctx->pc = 0x1492A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14929Cu;
            // 0x1492a0: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492A4u; }
        if (ctx->pc != 0x1492A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492A4u; }
        if (ctx->pc != 0x1492A4u) { return; }
    }
    ctx->pc = 0x1492A4u;
    // 0x1492a4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1492a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1492a8: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x1492a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1492ac: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1492ACu;
    SET_GPR_U32(ctx, 31, 0x1492B4u);
    ctx->pc = 0x1492B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1492ACu;
            // 0x1492b0: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492B4u; }
        if (ctx->pc != 0x1492B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492B4u; }
        if (ctx->pc != 0x1492B4u) { return; }
    }
    ctx->pc = 0x1492B4u;
    // 0x1492b4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1492b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1492b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1492b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492bc: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x1492bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x1492c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1492c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492c4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1492c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1492c8: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x1492c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x1492cc: 0xc060614  jal         func_181850
    ctx->pc = 0x1492CCu;
    SET_GPR_U32(ctx, 31, 0x1492D4u);
    ctx->pc = 0x1492D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1492CCu;
            // 0x1492d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492D4u; }
        if (ctx->pc != 0x1492D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492D4u; }
        if (ctx->pc != 0x1492D4u) { return; }
    }
    ctx->pc = 0x1492D4u;
    // 0x1492d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1492d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492d8: 0xc06060c  jal         func_181830
    ctx->pc = 0x1492D8u;
    SET_GPR_U32(ctx, 31, 0x1492E0u);
    ctx->pc = 0x1492DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1492D8u;
            // 0x1492dc: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492E0u; }
        if (ctx->pc != 0x1492E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492E0u; }
        if (ctx->pc != 0x1492E0u) { return; }
    }
    ctx->pc = 0x1492E0u;
    // 0x1492e0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1492e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1492e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1492e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1492e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1492ec: 0xc060604  jal         func_181810
    ctx->pc = 0x1492ECu;
    SET_GPR_U32(ctx, 31, 0x1492F4u);
    ctx->pc = 0x1492F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1492ECu;
            // 0x1492f0: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492F4u; }
        if (ctx->pc != 0x1492F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492F4u; }
        if (ctx->pc != 0x1492F4u) { return; }
    }
    ctx->pc = 0x1492F4u;
    // 0x1492f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1492f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1492f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492fc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1492FCu;
    SET_GPR_U32(ctx, 31, 0x149304u);
    ctx->pc = 0x149300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1492FCu;
            // 0x149300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149304u; }
        if (ctx->pc != 0x149304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149304u; }
        if (ctx->pc != 0x149304u) { return; }
    }
    ctx->pc = 0x149304u;
    // 0x149304: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x149304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x149308: 0xc046376  jal         func_118DD8
    ctx->pc = 0x149308u;
    SET_GPR_U32(ctx, 31, 0x149310u);
    ctx->pc = 0x14930Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149308u;
            // 0x14930c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149310u; }
        if (ctx->pc != 0x149310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149310u; }
        if (ctx->pc != 0x149310u) { return; }
    }
    ctx->pc = 0x149310u;
    // 0x149310: 0xc0605cc  jal         func_181730
    ctx->pc = 0x149310u;
    SET_GPR_U32(ctx, 31, 0x149318u);
    ctx->pc = 0x149314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149310u;
            // 0x149314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149318u; }
        if (ctx->pc != 0x149318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149318u; }
        if (ctx->pc != 0x149318u) { return; }
    }
    ctx->pc = 0x149318u;
    // 0x149318: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14931c: 0x8c2497ec  lw          $a0, -0x6814($at)
    ctx->pc = 0x14931cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940652)));
    // 0x149320: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149324: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x149324u;
    SET_GPR_U32(ctx, 31, 0x14932Cu);
    ctx->pc = 0x149328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149324u;
            // 0x149328: 0x8c2597fc  lw          $a1, -0x6804($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940668)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14932Cu; }
        if (ctx->pc != 0x14932Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14932Cu; }
        if (ctx->pc != 0x14932Cu) { return; }
    }
    ctx->pc = 0x14932Cu;
    // 0x14932c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14932cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149334: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149334u;
    SET_GPR_U32(ctx, 31, 0x14933Cu);
    ctx->pc = 0x149338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149334u;
            // 0x149338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14933Cu; }
        if (ctx->pc != 0x14933Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14933Cu; }
        if (ctx->pc != 0x14933Cu) { return; }
    }
    ctx->pc = 0x14933Cu;
    // 0x14933c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149340: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149340u;
    SET_GPR_U32(ctx, 31, 0x149348u);
    ctx->pc = 0x149344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149340u;
            // 0x149344: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149348u; }
        if (ctx->pc != 0x149348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149348u; }
        if (ctx->pc != 0x149348u) { return; }
    }
    ctx->pc = 0x149348u;
    // 0x149348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14934c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14934Cu;
    SET_GPR_U32(ctx, 31, 0x149354u);
    ctx->pc = 0x149350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14934Cu;
            // 0x149350: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149354u; }
        if (ctx->pc != 0x149354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149354u; }
        if (ctx->pc != 0x149354u) { return; }
    }
    ctx->pc = 0x149354u;
    // 0x149354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149358: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149358u;
    SET_GPR_U32(ctx, 31, 0x149360u);
    ctx->pc = 0x14935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149358u;
            // 0x14935c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149360u; }
        if (ctx->pc != 0x149360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149360u; }
        if (ctx->pc != 0x149360u) { return; }
    }
    ctx->pc = 0x149360u;
    // 0x149360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149364: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149364u;
    SET_GPR_U32(ctx, 31, 0x14936Cu);
    ctx->pc = 0x149368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149364u;
            // 0x149368: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14936Cu; }
        if (ctx->pc != 0x14936Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14936Cu; }
        if (ctx->pc != 0x14936Cu) { return; }
    }
    ctx->pc = 0x14936Cu;
    // 0x14936c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x149370: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x149370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x149374: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x149374u;
    SET_GPR_U32(ctx, 31, 0x14937Cu);
    ctx->pc = 0x149378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149374u;
            // 0x149378: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14937Cu; }
        if (ctx->pc != 0x14937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14937Cu; }
        if (ctx->pc != 0x14937Cu) { return; }
    }
    ctx->pc = 0x14937Cu;
    // 0x14937c: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14937Cu;
    SET_GPR_U32(ctx, 31, 0x149384u);
    ctx->pc = 0x149380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14937Cu;
            // 0x149380: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149384u; }
        if (ctx->pc != 0x149384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149384u; }
        if (ctx->pc != 0x149384u) { return; }
    }
    ctx->pc = 0x149384u;
    // 0x149384: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149388: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x149388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14938c: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14938Cu;
    SET_GPR_U32(ctx, 31, 0x149394u);
    ctx->pc = 0x149390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14938Cu;
            // 0x149390: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149394u; }
        if (ctx->pc != 0x149394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149394u; }
        if (ctx->pc != 0x149394u) { return; }
    }
    ctx->pc = 0x149394u;
    // 0x149394: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149398: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x149398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14939c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14939Cu;
    SET_GPR_U32(ctx, 31, 0x1493A4u);
    ctx->pc = 0x1493A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14939Cu;
            // 0x1493a0: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493A4u; }
        if (ctx->pc != 0x1493A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493A4u; }
        if (ctx->pc != 0x1493A4u) { return; }
    }
    ctx->pc = 0x1493A4u;
    // 0x1493a4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1493a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1493a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1493a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493ac: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x1493acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x1493b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1493b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493b4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1493b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1493b8: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x1493b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x1493bc: 0xc060614  jal         func_181850
    ctx->pc = 0x1493BCu;
    SET_GPR_U32(ctx, 31, 0x1493C4u);
    ctx->pc = 0x1493C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1493BCu;
            // 0x1493c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493C4u; }
        if (ctx->pc != 0x1493C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493C4u; }
        if (ctx->pc != 0x1493C4u) { return; }
    }
    ctx->pc = 0x1493C4u;
    // 0x1493c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1493c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493c8: 0xc06060c  jal         func_181830
    ctx->pc = 0x1493C8u;
    SET_GPR_U32(ctx, 31, 0x1493D0u);
    ctx->pc = 0x1493CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1493C8u;
            // 0x1493cc: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493D0u; }
        if (ctx->pc != 0x1493D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493D0u; }
        if (ctx->pc != 0x1493D0u) { return; }
    }
    ctx->pc = 0x1493D0u;
    // 0x1493d0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1493d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1493d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1493d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1493d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1493dc: 0xc060604  jal         func_181810
    ctx->pc = 0x1493DCu;
    SET_GPR_U32(ctx, 31, 0x1493E4u);
    ctx->pc = 0x1493E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1493DCu;
            // 0x1493e0: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493E4u; }
        if (ctx->pc != 0x1493E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493E4u; }
        if (ctx->pc != 0x1493E4u) { return; }
    }
    ctx->pc = 0x1493E4u;
    // 0x1493e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1493e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1493e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493ec: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1493ECu;
    SET_GPR_U32(ctx, 31, 0x1493F4u);
    ctx->pc = 0x1493F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1493ECu;
            // 0x1493f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493F4u; }
        if (ctx->pc != 0x1493F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1493F4u; }
        if (ctx->pc != 0x1493F4u) { return; }
    }
    ctx->pc = 0x1493F4u;
    // 0x1493f4: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x1493f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1493f8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1493F8u;
    SET_GPR_U32(ctx, 31, 0x149400u);
    ctx->pc = 0x1493FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1493F8u;
            // 0x1493fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149400u; }
        if (ctx->pc != 0x149400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149400u; }
        if (ctx->pc != 0x149400u) { return; }
    }
    ctx->pc = 0x149400u;
    // 0x149400: 0xc0605cc  jal         func_181730
    ctx->pc = 0x149400u;
    SET_GPR_U32(ctx, 31, 0x149408u);
    ctx->pc = 0x149404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149400u;
            // 0x149404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149408u; }
        if (ctx->pc != 0x149408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149408u; }
        if (ctx->pc != 0x149408u) { return; }
    }
    ctx->pc = 0x149408u;
    // 0x149408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14940c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14940cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149410: 0x3e00008  jr          $ra
    ctx->pc = 0x149410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149410u;
            // 0x149414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149418u;
}
