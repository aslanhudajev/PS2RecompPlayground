#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn7_03_Hontai
// Address: 0x1b16b0 - 0x1b17a8
void CreateEn7_03_Hontai_0x1b16b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn7_03_Hontai_0x1b16b0");
#endif

    ctx->pc = 0x1b16b0u;

    // 0x1b16b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b16b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b16b4: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1b16b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1b16b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b16b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b16bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b16bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b16c0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B16C0u;
    SET_GPR_U32(ctx, 31, 0x1B16C8u);
    ctx->pc = 0x1B16C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16C0u;
            // 0x1b16c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16C8u; }
        if (ctx->pc != 0x1B16C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16C8u; }
        if (ctx->pc != 0x1B16C8u) { return; }
    }
    ctx->pc = 0x1B16C8u;
    // 0x1b16c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b16c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16cc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b16ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b16d0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b16d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b16d4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B16D4u;
    SET_GPR_U32(ctx, 31, 0x1B16DCu);
    ctx->pc = 0x1B16D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16D4u;
            // 0x1b16d8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16DCu; }
        if (ctx->pc != 0x1B16DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16DCu; }
        if (ctx->pc != 0x1B16DCu) { return; }
    }
    ctx->pc = 0x1B16DCu;
    // 0x1b16dc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B16DCu;
    SET_GPR_U32(ctx, 31, 0x1B16E4u);
    ctx->pc = 0x1B16E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16DCu;
            // 0x1b16e0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16E4u; }
        if (ctx->pc != 0x1B16E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16E4u; }
        if (ctx->pc != 0x1B16E4u) { return; }
    }
    ctx->pc = 0x1B16E4u;
    // 0x1b16e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b16e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b16e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b16ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b16ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16f0: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1B16F0u;
    SET_GPR_U32(ctx, 31, 0x1B16F8u);
    ctx->pc = 0x1B16F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16F0u;
            // 0x1b16f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16F8u; }
        if (ctx->pc != 0x1B16F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16F8u; }
        if (ctx->pc != 0x1B16F8u) { return; }
    }
    ctx->pc = 0x1B16F8u;
    // 0x1b16f8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1B16F8u;
    SET_GPR_U32(ctx, 31, 0x1B1700u);
    ctx->pc = 0x1B16FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16F8u;
            // 0x1b16fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1700u; }
        if (ctx->pc != 0x1B1700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1700u; }
        if (ctx->pc != 0x1B1700u) { return; }
    }
    ctx->pc = 0x1B1700u;
    // 0x1b1700: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b1700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b1704: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b1704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1708: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1B1708u;
    SET_GPR_U32(ctx, 31, 0x1B1710u);
    ctx->pc = 0x1B170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1708u;
            // 0x1b170c: 0xac221b38  sw          $v0, 0x1B38($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1710u; }
        if (ctx->pc != 0x1B1710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1710u; }
        if (ctx->pc != 0x1B1710u) { return; }
    }
    ctx->pc = 0x1B1710u;
    // 0x1b1710: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b1710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b1714: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b1714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1718: 0xac221b3c  sw          $v0, 0x1B3C($at)
    ctx->pc = 0x1b1718u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6972), GPR_U32(ctx, 2));
    // 0x1b171c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b171cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1720: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b1720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b1724: 0x8c271b38  lw          $a3, 0x1B38($at)
    ctx->pc = 0x1b1724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6968)));
    // 0x1b1728: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b1728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b172c: 0x8c281b3c  lw          $t0, 0x1B3C($at)
    ctx->pc = 0x1b172cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6972)));
    // 0x1b1730: 0xc060614  jal         func_181850
    ctx->pc = 0x1B1730u;
    SET_GPR_U32(ctx, 31, 0x1B1738u);
    ctx->pc = 0x1B1734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1730u;
            // 0x1b1734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1738u; }
        if (ctx->pc != 0x1B1738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1738u; }
        if (ctx->pc != 0x1B1738u) { return; }
    }
    ctx->pc = 0x1B1738u;
    // 0x1b1738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b173c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B173Cu;
    SET_GPR_U32(ctx, 31, 0x1B1744u);
    ctx->pc = 0x1B1740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B173Cu;
            // 0x1b1740: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1744u; }
        if (ctx->pc != 0x1B1744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1744u; }
        if (ctx->pc != 0x1B1744u) { return; }
    }
    ctx->pc = 0x1B1744u;
    // 0x1b1744: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b1744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b1748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b174c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1750: 0xc060604  jal         func_181810
    ctx->pc = 0x1B1750u;
    SET_GPR_U32(ctx, 31, 0x1B1758u);
    ctx->pc = 0x1B1754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1750u;
            // 0x1b1754: 0x24c6a9c0  addiu       $a2, $a2, -0x5640 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1758u; }
        if (ctx->pc != 0x1B1758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1758u; }
        if (ctx->pc != 0x1B1758u) { return; }
    }
    ctx->pc = 0x1B1758u;
    // 0x1b1758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b175c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b175cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1760: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B1760u;
    SET_GPR_U32(ctx, 31, 0x1B1768u);
    ctx->pc = 0x1B1764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1760u;
            // 0x1b1764: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1768u; }
        if (ctx->pc != 0x1B1768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1768u; }
        if (ctx->pc != 0x1B1768u) { return; }
    }
    ctx->pc = 0x1B1768u;
    // 0x1b1768: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b1768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b176c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B176Cu;
    SET_GPR_U32(ctx, 31, 0x1B1774u);
    ctx->pc = 0x1B1770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B176Cu;
            // 0x1b1770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1774u; }
        if (ctx->pc != 0x1B1774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1774u; }
        if (ctx->pc != 0x1B1774u) { return; }
    }
    ctx->pc = 0x1B1774u;
    // 0x1b1774: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B1774u;
    SET_GPR_U32(ctx, 31, 0x1B177Cu);
    ctx->pc = 0x1B1778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1774u;
            // 0x1b1778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B177Cu; }
        if (ctx->pc != 0x1B177Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B177Cu; }
        if (ctx->pc != 0x1B177Cu) { return; }
    }
    ctx->pc = 0x1B177Cu;
    // 0x1b177c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1b177cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b1780: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b1780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b178c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1B178Cu;
    SET_GPR_U32(ctx, 31, 0x1B1794u);
    ctx->pc = 0x1B1790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B178Cu;
            // 0x1b1790: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1794u; }
        if (ctx->pc != 0x1B1794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1794u; }
        if (ctx->pc != 0x1B1794u) { return; }
    }
    ctx->pc = 0x1B1794u;
    // 0x1b1794: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b1794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b179c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b179cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b17a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B17A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B17A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17A0u;
            // 0x1b17a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B17A8u;
}
