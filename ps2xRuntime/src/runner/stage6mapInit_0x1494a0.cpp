#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage6mapInit
// Address: 0x1494a0 - 0x149700
void stage6mapInit_0x1494a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage6mapInit_0x1494a0");
#endif

    ctx->pc = 0x1494a0u;

    // 0x1494a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1494a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1494a4: 0x24040107  addiu       $a0, $zero, 0x107
    ctx->pc = 0x1494a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x1494a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1494a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1494ac: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1494acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1494b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1494b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1494b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1494b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1494b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1494bc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1494bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1494c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1494c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1494c4: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1494C4u;
    SET_GPR_U32(ctx, 31, 0x1494CCu);
    ctx->pc = 0x1494C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1494C4u;
            // 0x1494c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1494CCu; }
        if (ctx->pc != 0x1494CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1494CCu; }
        if (ctx->pc != 0x1494CCu) { return; }
    }
    ctx->pc = 0x1494CCu;
    // 0x1494cc: 0x24040108  addiu       $a0, $zero, 0x108
    ctx->pc = 0x1494ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x1494d0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1494d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1494d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1494d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494d8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1494D8u;
    SET_GPR_U32(ctx, 31, 0x1494E0u);
    ctx->pc = 0x1494DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1494D8u;
            // 0x1494dc: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1494E0u; }
        if (ctx->pc != 0x1494E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1494E0u; }
        if (ctx->pc != 0x1494E0u) { return; }
    }
    ctx->pc = 0x1494E0u;
    // 0x1494e0: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1494e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1494e4: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1494e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1494e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1494e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494ec: 0x263197c0  addiu       $s1, $s1, -0x6840
    ctx->pc = 0x1494ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940608));
    // 0x1494f0: 0x261097a0  addiu       $s0, $s0, -0x6860
    ctx->pc = 0x1494f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940576));
    // 0x1494f4: 0x0  nop
    ctx->pc = 0x1494f4u;
    // NOP
label_1494f8:
    // 0x1494f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1494f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1494fc: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1494FCu;
    SET_GPR_U32(ctx, 31, 0x149504u);
    ctx->pc = 0x149500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1494FCu;
            // 0x149500: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149504u; }
        if (ctx->pc != 0x149504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149504u; }
        if (ctx->pc != 0x149504u) { return; }
    }
    ctx->pc = 0x149504u;
    // 0x149504: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x149504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14950c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14950Cu;
    SET_GPR_U32(ctx, 31, 0x149514u);
    ctx->pc = 0x149510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14950Cu;
            // 0x149510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149514u; }
        if (ctx->pc != 0x149514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149514u; }
        if (ctx->pc != 0x149514u) { return; }
    }
    ctx->pc = 0x149514u;
    // 0x149514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149518: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149518u;
    SET_GPR_U32(ctx, 31, 0x149520u);
    ctx->pc = 0x14951Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149518u;
            // 0x14951c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149520u; }
        if (ctx->pc != 0x149520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149520u; }
        if (ctx->pc != 0x149520u) { return; }
    }
    ctx->pc = 0x149520u;
    // 0x149520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149524: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149524u;
    SET_GPR_U32(ctx, 31, 0x14952Cu);
    ctx->pc = 0x149528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149524u;
            // 0x149528: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14952Cu; }
        if (ctx->pc != 0x14952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14952Cu; }
        if (ctx->pc != 0x14952Cu) { return; }
    }
    ctx->pc = 0x14952Cu;
    // 0x14952c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149530: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149530u;
    SET_GPR_U32(ctx, 31, 0x149538u);
    ctx->pc = 0x149534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149530u;
            // 0x149534: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149538u; }
        if (ctx->pc != 0x149538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149538u; }
        if (ctx->pc != 0x149538u) { return; }
    }
    ctx->pc = 0x149538u;
    // 0x149538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14953c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14953Cu;
    SET_GPR_U32(ctx, 31, 0x149544u);
    ctx->pc = 0x149540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14953Cu;
            // 0x149540: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149544u; }
        if (ctx->pc != 0x149544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149544u; }
        if (ctx->pc != 0x149544u) { return; }
    }
    ctx->pc = 0x149544u;
    // 0x149544: 0x26440110  addiu       $a0, $s2, 0x110
    ctx->pc = 0x149544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x149548: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x149548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x14954c: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14954Cu;
    SET_GPR_U32(ctx, 31, 0x149554u);
    ctx->pc = 0x149550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14954Cu;
            // 0x149550: 0x26460160  addiu       $a2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149554u; }
        if (ctx->pc != 0x149554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149554u; }
        if (ctx->pc != 0x149554u) { return; }
    }
    ctx->pc = 0x149554u;
    // 0x149554: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x149554u;
    SET_GPR_U32(ctx, 31, 0x14955Cu);
    ctx->pc = 0x149558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149554u;
            // 0x149558: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14955Cu; }
        if (ctx->pc != 0x14955Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14955Cu; }
        if (ctx->pc != 0x14955Cu) { return; }
    }
    ctx->pc = 0x14955Cu;
    // 0x14955c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14955cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149560: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x149560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x149564: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x149564u;
    SET_GPR_U32(ctx, 31, 0x14956Cu);
    ctx->pc = 0x149568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149564u;
            // 0x149568: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14956Cu; }
        if (ctx->pc != 0x14956Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14956Cu; }
        if (ctx->pc != 0x14956Cu) { return; }
    }
    ctx->pc = 0x14956Cu;
    // 0x14956c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14956cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149570: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x149570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x149574: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149574u;
    SET_GPR_U32(ctx, 31, 0x14957Cu);
    ctx->pc = 0x149578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149574u;
            // 0x149578: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14957Cu; }
        if (ctx->pc != 0x14957Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14957Cu; }
        if (ctx->pc != 0x14957Cu) { return; }
    }
    ctx->pc = 0x14957Cu;
    // 0x14957c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14957cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149580: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x149580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149584: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x149584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x149588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14958c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14958cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149590: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x149590u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x149594: 0xc060614  jal         func_181850
    ctx->pc = 0x149594u;
    SET_GPR_U32(ctx, 31, 0x14959Cu);
    ctx->pc = 0x149598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149594u;
            // 0x149598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14959Cu; }
        if (ctx->pc != 0x14959Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14959Cu; }
        if (ctx->pc != 0x14959Cu) { return; }
    }
    ctx->pc = 0x14959Cu;
    // 0x14959c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14959cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495a0: 0xc06060c  jal         func_181830
    ctx->pc = 0x1495A0u;
    SET_GPR_U32(ctx, 31, 0x1495A8u);
    ctx->pc = 0x1495A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1495A0u;
            // 0x1495a4: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495A8u; }
        if (ctx->pc != 0x1495A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495A8u; }
        if (ctx->pc != 0x1495A8u) { return; }
    }
    ctx->pc = 0x1495A8u;
    // 0x1495a8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1495a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1495ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1495acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1495b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1495b4: 0xc060604  jal         func_181810
    ctx->pc = 0x1495B4u;
    SET_GPR_U32(ctx, 31, 0x1495BCu);
    ctx->pc = 0x1495B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1495B4u;
            // 0x1495b8: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495BCu; }
        if (ctx->pc != 0x1495BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495BCu; }
        if (ctx->pc != 0x1495BCu) { return; }
    }
    ctx->pc = 0x1495BCu;
    // 0x1495bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1495bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1495c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495c4: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1495C4u;
    SET_GPR_U32(ctx, 31, 0x1495CCu);
    ctx->pc = 0x1495C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1495C4u;
            // 0x1495c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495CCu; }
        if (ctx->pc != 0x1495CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495CCu; }
        if (ctx->pc != 0x1495CCu) { return; }
    }
    ctx->pc = 0x1495CCu;
    // 0x1495cc: 0x8e440180  lw          $a0, 0x180($s2)
    ctx->pc = 0x1495ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x1495d0: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1495D0u;
    SET_GPR_U32(ctx, 31, 0x1495D8u);
    ctx->pc = 0x1495D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1495D0u;
            // 0x1495d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495D8u; }
        if (ctx->pc != 0x1495D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495D8u; }
        if (ctx->pc != 0x1495D8u) { return; }
    }
    ctx->pc = 0x1495D8u;
    // 0x1495d8: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1495D8u;
    SET_GPR_U32(ctx, 31, 0x1495E0u);
    ctx->pc = 0x1495DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1495D8u;
            // 0x1495dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495E0u; }
        if (ctx->pc != 0x1495E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495E0u; }
        if (ctx->pc != 0x1495E0u) { return; }
    }
    ctx->pc = 0x1495E0u;
    // 0x1495e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1495e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1495e4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1495e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1495e8: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x1495e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1495ec: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1495ECu;
    {
        const bool branch_taken_0x1495ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1495F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495ECu;
            // 0x1495f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495ec) {
            ctx->pc = 0x1494F8u;
            goto label_1494f8;
        }
    }
    ctx->pc = 0x1495F4u;
    // 0x1495f4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1495f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1495f8: 0x8c2497bc  lw          $a0, -0x6844($at)
    ctx->pc = 0x1495f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940604)));
    // 0x1495fc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1495fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149600: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x149600u;
    SET_GPR_U32(ctx, 31, 0x149608u);
    ctx->pc = 0x149604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149600u;
            // 0x149604: 0x8c2597dc  lw          $a1, -0x6824($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149608u; }
        if (ctx->pc != 0x149608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149608u; }
        if (ctx->pc != 0x149608u) { return; }
    }
    ctx->pc = 0x149608u;
    // 0x149608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14960c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14960cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149610: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149610u;
    SET_GPR_U32(ctx, 31, 0x149618u);
    ctx->pc = 0x149614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149610u;
            // 0x149614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149618u; }
        if (ctx->pc != 0x149618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149618u; }
        if (ctx->pc != 0x149618u) { return; }
    }
    ctx->pc = 0x149618u;
    // 0x149618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14961c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14961Cu;
    SET_GPR_U32(ctx, 31, 0x149624u);
    ctx->pc = 0x149620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14961Cu;
            // 0x149620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149624u; }
        if (ctx->pc != 0x149624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149624u; }
        if (ctx->pc != 0x149624u) { return; }
    }
    ctx->pc = 0x149624u;
    // 0x149624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149628: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149628u;
    SET_GPR_U32(ctx, 31, 0x149630u);
    ctx->pc = 0x14962Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149628u;
            // 0x14962c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149630u; }
        if (ctx->pc != 0x149630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149630u; }
        if (ctx->pc != 0x149630u) { return; }
    }
    ctx->pc = 0x149630u;
    // 0x149630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149634: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149634u;
    SET_GPR_U32(ctx, 31, 0x14963Cu);
    ctx->pc = 0x149638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149634u;
            // 0x149638: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14963Cu; }
        if (ctx->pc != 0x14963Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14963Cu; }
        if (ctx->pc != 0x14963Cu) { return; }
    }
    ctx->pc = 0x14963Cu;
    // 0x14963c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149640: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149640u;
    SET_GPR_U32(ctx, 31, 0x149648u);
    ctx->pc = 0x149644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149640u;
            // 0x149644: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149648u; }
        if (ctx->pc != 0x149648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149648u; }
        if (ctx->pc != 0x149648u) { return; }
    }
    ctx->pc = 0x149648u;
    // 0x149648: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x149648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14964c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x149650: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x149650u;
    SET_GPR_U32(ctx, 31, 0x149658u);
    ctx->pc = 0x149654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149650u;
            // 0x149654: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149658u; }
        if (ctx->pc != 0x149658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149658u; }
        if (ctx->pc != 0x149658u) { return; }
    }
    ctx->pc = 0x149658u;
    // 0x149658: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x149658u;
    SET_GPR_U32(ctx, 31, 0x149660u);
    ctx->pc = 0x14965Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149658u;
            // 0x14965c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149660u; }
        if (ctx->pc != 0x149660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149660u; }
        if (ctx->pc != 0x149660u) { return; }
    }
    ctx->pc = 0x149660u;
    // 0x149660: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149664: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x149664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x149668: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x149668u;
    SET_GPR_U32(ctx, 31, 0x149670u);
    ctx->pc = 0x14966Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149668u;
            // 0x14966c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149670u; }
        if (ctx->pc != 0x149670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149670u; }
        if (ctx->pc != 0x149670u) { return; }
    }
    ctx->pc = 0x149670u;
    // 0x149670: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149674: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x149674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x149678: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149678u;
    SET_GPR_U32(ctx, 31, 0x149680u);
    ctx->pc = 0x14967Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149678u;
            // 0x14967c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149680u; }
        if (ctx->pc != 0x149680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149680u; }
        if (ctx->pc != 0x149680u) { return; }
    }
    ctx->pc = 0x149680u;
    // 0x149680: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149684: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x149684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149688: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x149688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14968c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149690: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149694: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x149694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x149698: 0xc060614  jal         func_181850
    ctx->pc = 0x149698u;
    SET_GPR_U32(ctx, 31, 0x1496A0u);
    ctx->pc = 0x14969Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149698u;
            // 0x14969c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496A0u; }
        if (ctx->pc != 0x1496A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496A0u; }
        if (ctx->pc != 0x1496A0u) { return; }
    }
    ctx->pc = 0x1496A0u;
    // 0x1496a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1496a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496a4: 0xc06060c  jal         func_181830
    ctx->pc = 0x1496A4u;
    SET_GPR_U32(ctx, 31, 0x1496ACu);
    ctx->pc = 0x1496A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1496A4u;
            // 0x1496a8: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496ACu; }
        if (ctx->pc != 0x1496ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496ACu; }
        if (ctx->pc != 0x1496ACu) { return; }
    }
    ctx->pc = 0x1496ACu;
    // 0x1496ac: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1496acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1496b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1496b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1496b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1496b8: 0xc060604  jal         func_181810
    ctx->pc = 0x1496B8u;
    SET_GPR_U32(ctx, 31, 0x1496C0u);
    ctx->pc = 0x1496BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1496B8u;
            // 0x1496bc: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496C0u; }
        if (ctx->pc != 0x1496C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496C0u; }
        if (ctx->pc != 0x1496C0u) { return; }
    }
    ctx->pc = 0x1496C0u;
    // 0x1496c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1496c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1496c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496c8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1496C8u;
    SET_GPR_U32(ctx, 31, 0x1496D0u);
    ctx->pc = 0x1496CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1496C8u;
            // 0x1496cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496D0u; }
        if (ctx->pc != 0x1496D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496D0u; }
        if (ctx->pc != 0x1496D0u) { return; }
    }
    ctx->pc = 0x1496D0u;
    // 0x1496d0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x1496d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1496d4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1496D4u;
    SET_GPR_U32(ctx, 31, 0x1496DCu);
    ctx->pc = 0x1496D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1496D4u;
            // 0x1496d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496DCu; }
        if (ctx->pc != 0x1496DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496DCu; }
        if (ctx->pc != 0x1496DCu) { return; }
    }
    ctx->pc = 0x1496DCu;
    // 0x1496dc: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1496DCu;
    SET_GPR_U32(ctx, 31, 0x1496E4u);
    ctx->pc = 0x1496E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1496DCu;
            // 0x1496e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496E4u; }
        if (ctx->pc != 0x1496E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1496E4u; }
        if (ctx->pc != 0x1496E4u) { return; }
    }
    ctx->pc = 0x1496E4u;
    // 0x1496e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1496e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1496e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1496e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1496ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1496ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1496f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1496f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1496f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1496f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1496f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1496F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1496FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1496F8u;
            // 0x1496fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1494F8u: goto label_1494f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x149700u;
}
