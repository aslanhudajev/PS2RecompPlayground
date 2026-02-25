#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stageEX2mapInit
// Address: 0x148820 - 0x148b30
void stageEX2mapInit_0x148820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stageEX2mapInit_0x148820");
#endif

    ctx->pc = 0x148820u;

    // 0x148820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148824: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x148824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x148828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14882c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x14882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x148830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148834: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x148834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148838: 0xc05c20c  jal         func_170830
    ctx->pc = 0x148838u;
    SET_GPR_U32(ctx, 31, 0x148840u);
    ctx->pc = 0x14883Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148838u;
            // 0x14883c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148840u; }
        if (ctx->pc != 0x148840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148840u; }
        if (ctx->pc != 0x148840u) { return; }
    }
    ctx->pc = 0x148840u;
    // 0x148840: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x148840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x148844: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x148844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x148848: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x148848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14884c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14884Cu;
    SET_GPR_U32(ctx, 31, 0x148854u);
    ctx->pc = 0x148850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14884Cu;
            // 0x148850: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148854u; }
        if (ctx->pc != 0x148854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148854u; }
        if (ctx->pc != 0x148854u) { return; }
    }
    ctx->pc = 0x148854u;
    // 0x148854: 0x24040062  addiu       $a0, $zero, 0x62
    ctx->pc = 0x148854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x148858: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x148858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14885c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14885cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148860: 0xc05c20c  jal         func_170830
    ctx->pc = 0x148860u;
    SET_GPR_U32(ctx, 31, 0x148868u);
    ctx->pc = 0x148864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148860u;
            // 0x148864: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148868u; }
        if (ctx->pc != 0x148868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148868u; }
        if (ctx->pc != 0x148868u) { return; }
    }
    ctx->pc = 0x148868u;
    // 0x148868: 0x2404005d  addiu       $a0, $zero, 0x5D
    ctx->pc = 0x148868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x14886c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14886Cu;
    SET_GPR_U32(ctx, 31, 0x148874u);
    ctx->pc = 0x148870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14886Cu;
            // 0x148870: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148874u; }
        if (ctx->pc != 0x148874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148874u; }
        if (ctx->pc != 0x148874u) { return; }
    }
    ctx->pc = 0x148874u;
    // 0x148874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14887c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14887Cu;
    SET_GPR_U32(ctx, 31, 0x148884u);
    ctx->pc = 0x148880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14887Cu;
            // 0x148880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148884u; }
        if (ctx->pc != 0x148884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148884u; }
        if (ctx->pc != 0x148884u) { return; }
    }
    ctx->pc = 0x148884u;
    // 0x148884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148888: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148888u;
    SET_GPR_U32(ctx, 31, 0x148890u);
    ctx->pc = 0x14888Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148888u;
            // 0x14888c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148890u; }
        if (ctx->pc != 0x148890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148890u; }
        if (ctx->pc != 0x148890u) { return; }
    }
    ctx->pc = 0x148890u;
    // 0x148890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148894: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148894u;
    SET_GPR_U32(ctx, 31, 0x14889Cu);
    ctx->pc = 0x148898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148894u;
            // 0x148898: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14889Cu; }
        if (ctx->pc != 0x14889Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14889Cu; }
        if (ctx->pc != 0x14889Cu) { return; }
    }
    ctx->pc = 0x14889Cu;
    // 0x14889c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488a0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1488A0u;
    SET_GPR_U32(ctx, 31, 0x1488A8u);
    ctx->pc = 0x1488A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1488A0u;
            // 0x1488a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488A8u; }
        if (ctx->pc != 0x1488A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488A8u; }
        if (ctx->pc != 0x1488A8u) { return; }
    }
    ctx->pc = 0x1488A8u;
    // 0x1488a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1488a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488ac: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1488ACu;
    SET_GPR_U32(ctx, 31, 0x1488B4u);
    ctx->pc = 0x1488B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1488ACu;
            // 0x1488b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488B4u; }
        if (ctx->pc != 0x1488B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488B4u; }
        if (ctx->pc != 0x1488B4u) { return; }
    }
    ctx->pc = 0x1488B4u;
    // 0x1488b4: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1488b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1488b8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1488b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1488bc: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1488BCu;
    SET_GPR_U32(ctx, 31, 0x1488C4u);
    ctx->pc = 0x1488C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1488BCu;
            // 0x1488c0: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488C4u; }
        if (ctx->pc != 0x1488C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488C4u; }
        if (ctx->pc != 0x1488C4u) { return; }
    }
    ctx->pc = 0x1488C4u;
    // 0x1488c4: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1488C4u;
    SET_GPR_U32(ctx, 31, 0x1488CCu);
    ctx->pc = 0x1488C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1488C4u;
            // 0x1488c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488CCu; }
        if (ctx->pc != 0x1488CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488CCu; }
        if (ctx->pc != 0x1488CCu) { return; }
    }
    ctx->pc = 0x1488CCu;
    // 0x1488cc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1488ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1488d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1488d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1488d4: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1488D4u;
    SET_GPR_U32(ctx, 31, 0x1488DCu);
    ctx->pc = 0x1488D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1488D4u;
            // 0x1488d8: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488DCu; }
        if (ctx->pc != 0x1488DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488DCu; }
        if (ctx->pc != 0x1488DCu) { return; }
    }
    ctx->pc = 0x1488DCu;
    // 0x1488dc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1488dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1488e0: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x1488e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1488e4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1488E4u;
    SET_GPR_U32(ctx, 31, 0x1488ECu);
    ctx->pc = 0x1488E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1488E4u;
            // 0x1488e8: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488ECu; }
        if (ctx->pc != 0x1488ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488ECu; }
        if (ctx->pc != 0x1488ECu) { return; }
    }
    ctx->pc = 0x1488ECu;
    // 0x1488ec: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1488ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1488f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1488f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488f4: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x1488f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x1488f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1488f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488fc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1488fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148900: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x148900u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x148904: 0xc060614  jal         func_181850
    ctx->pc = 0x148904u;
    SET_GPR_U32(ctx, 31, 0x14890Cu);
    ctx->pc = 0x148908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148904u;
            // 0x148908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14890Cu; }
        if (ctx->pc != 0x14890Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14890Cu; }
        if (ctx->pc != 0x14890Cu) { return; }
    }
    ctx->pc = 0x14890Cu;
    // 0x14890c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148910: 0xc06060c  jal         func_181830
    ctx->pc = 0x148910u;
    SET_GPR_U32(ctx, 31, 0x148918u);
    ctx->pc = 0x148914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148910u;
            // 0x148914: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148918u; }
        if (ctx->pc != 0x148918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148918u; }
        if (ctx->pc != 0x148918u) { return; }
    }
    ctx->pc = 0x148918u;
    // 0x148918: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x148918u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14891c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14891cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148920: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148924: 0xc060604  jal         func_181810
    ctx->pc = 0x148924u;
    SET_GPR_U32(ctx, 31, 0x14892Cu);
    ctx->pc = 0x148928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148924u;
            // 0x148928: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14892Cu; }
        if (ctx->pc != 0x14892Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14892Cu; }
        if (ctx->pc != 0x14892Cu) { return; }
    }
    ctx->pc = 0x14892Cu;
    // 0x14892c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148934: 0xc0605dc  jal         func_181770
    ctx->pc = 0x148934u;
    SET_GPR_U32(ctx, 31, 0x14893Cu);
    ctx->pc = 0x148938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148934u;
            // 0x148938: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14893Cu; }
        if (ctx->pc != 0x14893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14893Cu; }
        if (ctx->pc != 0x14893Cu) { return; }
    }
    ctx->pc = 0x14893Cu;
    // 0x14893c: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14893cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x148940: 0xc046376  jal         func_118DD8
    ctx->pc = 0x148940u;
    SET_GPR_U32(ctx, 31, 0x148948u);
    ctx->pc = 0x148944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148940u;
            // 0x148944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148948u; }
        if (ctx->pc != 0x148948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148948u; }
        if (ctx->pc != 0x148948u) { return; }
    }
    ctx->pc = 0x148948u;
    // 0x148948: 0xc0605cc  jal         func_181730
    ctx->pc = 0x148948u;
    SET_GPR_U32(ctx, 31, 0x148950u);
    ctx->pc = 0x14894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148948u;
            // 0x14894c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148950u; }
        if (ctx->pc != 0x148950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148950u; }
        if (ctx->pc != 0x148950u) { return; }
    }
    ctx->pc = 0x148950u;
    // 0x148950: 0x2404005e  addiu       $a0, $zero, 0x5E
    ctx->pc = 0x148950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x148954: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x148954u;
    SET_GPR_U32(ctx, 31, 0x14895Cu);
    ctx->pc = 0x148958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148954u;
            // 0x148958: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14895Cu; }
        if (ctx->pc != 0x14895Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14895Cu; }
        if (ctx->pc != 0x14895Cu) { return; }
    }
    ctx->pc = 0x14895Cu;
    // 0x14895c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14895cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148964: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148964u;
    SET_GPR_U32(ctx, 31, 0x14896Cu);
    ctx->pc = 0x148968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148964u;
            // 0x148968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14896Cu; }
        if (ctx->pc != 0x14896Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14896Cu; }
        if (ctx->pc != 0x14896Cu) { return; }
    }
    ctx->pc = 0x14896Cu;
    // 0x14896c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148970: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148970u;
    SET_GPR_U32(ctx, 31, 0x148978u);
    ctx->pc = 0x148974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148970u;
            // 0x148974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148978u; }
        if (ctx->pc != 0x148978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148978u; }
        if (ctx->pc != 0x148978u) { return; }
    }
    ctx->pc = 0x148978u;
    // 0x148978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14897c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14897Cu;
    SET_GPR_U32(ctx, 31, 0x148984u);
    ctx->pc = 0x148980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14897Cu;
            // 0x148980: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148984u; }
        if (ctx->pc != 0x148984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148984u; }
        if (ctx->pc != 0x148984u) { return; }
    }
    ctx->pc = 0x148984u;
    // 0x148984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148988: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148988u;
    SET_GPR_U32(ctx, 31, 0x148990u);
    ctx->pc = 0x14898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148988u;
            // 0x14898c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148990u; }
        if (ctx->pc != 0x148990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148990u; }
        if (ctx->pc != 0x148990u) { return; }
    }
    ctx->pc = 0x148990u;
    // 0x148990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148994: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148994u;
    SET_GPR_U32(ctx, 31, 0x14899Cu);
    ctx->pc = 0x148998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148994u;
            // 0x148998: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14899Cu; }
        if (ctx->pc != 0x14899Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14899Cu; }
        if (ctx->pc != 0x14899Cu) { return; }
    }
    ctx->pc = 0x14899Cu;
    // 0x14899c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1489a0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1489a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1489a4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1489A4u;
    SET_GPR_U32(ctx, 31, 0x1489ACu);
    ctx->pc = 0x1489A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1489A4u;
            // 0x1489a8: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489ACu; }
        if (ctx->pc != 0x1489ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489ACu; }
        if (ctx->pc != 0x1489ACu) { return; }
    }
    ctx->pc = 0x1489ACu;
    // 0x1489ac: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1489ACu;
    SET_GPR_U32(ctx, 31, 0x1489B4u);
    ctx->pc = 0x1489B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1489ACu;
            // 0x1489b0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489B4u; }
        if (ctx->pc != 0x1489B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489B4u; }
        if (ctx->pc != 0x1489B4u) { return; }
    }
    ctx->pc = 0x1489B4u;
    // 0x1489b4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1489b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1489b8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1489b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1489bc: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1489BCu;
    SET_GPR_U32(ctx, 31, 0x1489C4u);
    ctx->pc = 0x1489C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1489BCu;
            // 0x1489c0: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489C4u; }
        if (ctx->pc != 0x1489C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489C4u; }
        if (ctx->pc != 0x1489C4u) { return; }
    }
    ctx->pc = 0x1489C4u;
    // 0x1489c4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1489c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1489c8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1489c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1489cc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1489CCu;
    SET_GPR_U32(ctx, 31, 0x1489D4u);
    ctx->pc = 0x1489D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1489CCu;
            // 0x1489d0: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489D4u; }
        if (ctx->pc != 0x1489D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489D4u; }
        if (ctx->pc != 0x1489D4u) { return; }
    }
    ctx->pc = 0x1489D4u;
    // 0x1489d4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1489d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1489d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1489d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1489dc: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x1489dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x1489e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1489e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1489e4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1489e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1489e8: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x1489e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x1489ec: 0xc060614  jal         func_181850
    ctx->pc = 0x1489ECu;
    SET_GPR_U32(ctx, 31, 0x1489F4u);
    ctx->pc = 0x1489F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1489ECu;
            // 0x1489f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489F4u; }
        if (ctx->pc != 0x1489F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1489F4u; }
        if (ctx->pc != 0x1489F4u) { return; }
    }
    ctx->pc = 0x1489F4u;
    // 0x1489f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1489f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1489f8: 0xc06060c  jal         func_181830
    ctx->pc = 0x1489F8u;
    SET_GPR_U32(ctx, 31, 0x148A00u);
    ctx->pc = 0x1489FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1489F8u;
            // 0x1489fc: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A00u; }
        if (ctx->pc != 0x148A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A00u; }
        if (ctx->pc != 0x148A00u) { return; }
    }
    ctx->pc = 0x148A00u;
    // 0x148a00: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x148a00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x148a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148a0c: 0xc060604  jal         func_181810
    ctx->pc = 0x148A0Cu;
    SET_GPR_U32(ctx, 31, 0x148A14u);
    ctx->pc = 0x148A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A0Cu;
            // 0x148a10: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A14u; }
        if (ctx->pc != 0x148A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A14u; }
        if (ctx->pc != 0x148A14u) { return; }
    }
    ctx->pc = 0x148A14u;
    // 0x148a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a1c: 0xc0605dc  jal         func_181770
    ctx->pc = 0x148A1Cu;
    SET_GPR_U32(ctx, 31, 0x148A24u);
    ctx->pc = 0x148A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A1Cu;
            // 0x148a20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A24u; }
        if (ctx->pc != 0x148A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A24u; }
        if (ctx->pc != 0x148A24u) { return; }
    }
    ctx->pc = 0x148A24u;
    // 0x148a24: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x148a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x148a28: 0xc046376  jal         func_118DD8
    ctx->pc = 0x148A28u;
    SET_GPR_U32(ctx, 31, 0x148A30u);
    ctx->pc = 0x148A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A28u;
            // 0x148a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A30u; }
        if (ctx->pc != 0x148A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A30u; }
        if (ctx->pc != 0x148A30u) { return; }
    }
    ctx->pc = 0x148A30u;
    // 0x148a30: 0xc0605cc  jal         func_181730
    ctx->pc = 0x148A30u;
    SET_GPR_U32(ctx, 31, 0x148A38u);
    ctx->pc = 0x148A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A30u;
            // 0x148a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A38u; }
        if (ctx->pc != 0x148A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A38u; }
        if (ctx->pc != 0x148A38u) { return; }
    }
    ctx->pc = 0x148A38u;
    // 0x148a38: 0x2404005f  addiu       $a0, $zero, 0x5F
    ctx->pc = 0x148a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x148a3c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x148A3Cu;
    SET_GPR_U32(ctx, 31, 0x148A44u);
    ctx->pc = 0x148A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A3Cu;
            // 0x148a40: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A44u; }
        if (ctx->pc != 0x148A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A44u; }
        if (ctx->pc != 0x148A44u) { return; }
    }
    ctx->pc = 0x148A44u;
    // 0x148a44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a4c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148A4Cu;
    SET_GPR_U32(ctx, 31, 0x148A54u);
    ctx->pc = 0x148A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A4Cu;
            // 0x148a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A54u; }
        if (ctx->pc != 0x148A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A54u; }
        if (ctx->pc != 0x148A54u) { return; }
    }
    ctx->pc = 0x148A54u;
    // 0x148a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a58: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148A58u;
    SET_GPR_U32(ctx, 31, 0x148A60u);
    ctx->pc = 0x148A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A58u;
            // 0x148a5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A60u; }
        if (ctx->pc != 0x148A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A60u; }
        if (ctx->pc != 0x148A60u) { return; }
    }
    ctx->pc = 0x148A60u;
    // 0x148a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a64: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148A64u;
    SET_GPR_U32(ctx, 31, 0x148A6Cu);
    ctx->pc = 0x148A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A64u;
            // 0x148a68: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A6Cu; }
        if (ctx->pc != 0x148A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A6Cu; }
        if (ctx->pc != 0x148A6Cu) { return; }
    }
    ctx->pc = 0x148A6Cu;
    // 0x148a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a70: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148A70u;
    SET_GPR_U32(ctx, 31, 0x148A78u);
    ctx->pc = 0x148A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A70u;
            // 0x148a74: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A78u; }
        if (ctx->pc != 0x148A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A78u; }
        if (ctx->pc != 0x148A78u) { return; }
    }
    ctx->pc = 0x148A78u;
    // 0x148a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a7c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148A7Cu;
    SET_GPR_U32(ctx, 31, 0x148A84u);
    ctx->pc = 0x148A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A7Cu;
            // 0x148a80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A84u; }
        if (ctx->pc != 0x148A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A84u; }
        if (ctx->pc != 0x148A84u) { return; }
    }
    ctx->pc = 0x148A84u;
    // 0x148a84: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x148a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x148a88: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x148a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x148a8c: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x148A8Cu;
    SET_GPR_U32(ctx, 31, 0x148A94u);
    ctx->pc = 0x148A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A8Cu;
            // 0x148a90: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A94u; }
        if (ctx->pc != 0x148A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A94u; }
        if (ctx->pc != 0x148A94u) { return; }
    }
    ctx->pc = 0x148A94u;
    // 0x148a94: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x148A94u;
    SET_GPR_U32(ctx, 31, 0x148A9Cu);
    ctx->pc = 0x148A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148A94u;
            // 0x148a98: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A9Cu; }
        if (ctx->pc != 0x148A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148A9Cu; }
        if (ctx->pc != 0x148A9Cu) { return; }
    }
    ctx->pc = 0x148A9Cu;
    // 0x148a9c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148aa0: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x148aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x148aa4: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x148AA4u;
    SET_GPR_U32(ctx, 31, 0x148AACu);
    ctx->pc = 0x148AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148AA4u;
            // 0x148aa8: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AACu; }
        if (ctx->pc != 0x148AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AACu; }
        if (ctx->pc != 0x148AACu) { return; }
    }
    ctx->pc = 0x148AACu;
    // 0x148aac: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148ab0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x148ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x148ab4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x148AB4u;
    SET_GPR_U32(ctx, 31, 0x148ABCu);
    ctx->pc = 0x148AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148AB4u;
            // 0x148ab8: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148ABCu; }
        if (ctx->pc != 0x148ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148ABCu; }
        if (ctx->pc != 0x148ABCu) { return; }
    }
    ctx->pc = 0x148ABCu;
    // 0x148abc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148ac0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x148ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ac4: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x148ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x148ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148acc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148ad0: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x148ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x148ad4: 0xc060614  jal         func_181850
    ctx->pc = 0x148AD4u;
    SET_GPR_U32(ctx, 31, 0x148ADCu);
    ctx->pc = 0x148AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148AD4u;
            // 0x148ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148ADCu; }
        if (ctx->pc != 0x148ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148ADCu; }
        if (ctx->pc != 0x148ADCu) { return; }
    }
    ctx->pc = 0x148ADCu;
    // 0x148adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ae0: 0xc06060c  jal         func_181830
    ctx->pc = 0x148AE0u;
    SET_GPR_U32(ctx, 31, 0x148AE8u);
    ctx->pc = 0x148AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148AE0u;
            // 0x148ae4: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AE8u; }
        if (ctx->pc != 0x148AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AE8u; }
        if (ctx->pc != 0x148AE8u) { return; }
    }
    ctx->pc = 0x148AE8u;
    // 0x148ae8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x148ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x148aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148af0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148af4: 0xc060604  jal         func_181810
    ctx->pc = 0x148AF4u;
    SET_GPR_U32(ctx, 31, 0x148AFCu);
    ctx->pc = 0x148AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148AF4u;
            // 0x148af8: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AFCu; }
        if (ctx->pc != 0x148AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148AFCu; }
        if (ctx->pc != 0x148AFCu) { return; }
    }
    ctx->pc = 0x148AFCu;
    // 0x148afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b04: 0xc0605dc  jal         func_181770
    ctx->pc = 0x148B04u;
    SET_GPR_U32(ctx, 31, 0x148B0Cu);
    ctx->pc = 0x148B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B04u;
            // 0x148b08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B0Cu; }
        if (ctx->pc != 0x148B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B0Cu; }
        if (ctx->pc != 0x148B0Cu) { return; }
    }
    ctx->pc = 0x148B0Cu;
    // 0x148b0c: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x148b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x148b10: 0xc046376  jal         func_118DD8
    ctx->pc = 0x148B10u;
    SET_GPR_U32(ctx, 31, 0x148B18u);
    ctx->pc = 0x148B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B10u;
            // 0x148b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B18u; }
        if (ctx->pc != 0x148B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B18u; }
        if (ctx->pc != 0x148B18u) { return; }
    }
    ctx->pc = 0x148B18u;
    // 0x148b18: 0xc0605cc  jal         func_181730
    ctx->pc = 0x148B18u;
    SET_GPR_U32(ctx, 31, 0x148B20u);
    ctx->pc = 0x148B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B18u;
            // 0x148b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B20u; }
        if (ctx->pc != 0x148B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B20u; }
        if (ctx->pc != 0x148B20u) { return; }
    }
    ctx->pc = 0x148B20u;
    // 0x148b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148b28: 0x3e00008  jr          $ra
    ctx->pc = 0x148B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148B28u;
            // 0x148b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148B30u;
}
