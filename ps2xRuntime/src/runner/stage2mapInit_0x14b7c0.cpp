#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage2mapInit
// Address: 0x14b7c0 - 0x14c054
void stage2mapInit_0x14b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage2mapInit_0x14b7c0");
#endif

    ctx->pc = 0x14b7c0u;

    // 0x14b7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b7c4: 0x24040098  addiu       $a0, $zero, 0x98
    ctx->pc = 0x14b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x14b7c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b7cc: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x14b7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14b7d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b7d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x14b7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b7d8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14B7D8u;
    SET_GPR_U32(ctx, 31, 0x14B7E0u);
    ctx->pc = 0x14B7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7D8u;
            // 0x14b7dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7E0u; }
        if (ctx->pc != 0x14B7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7E0u; }
        if (ctx->pc != 0x14B7E0u) { return; }
    }
    ctx->pc = 0x14B7E0u;
    // 0x14b7e0: 0x24040099  addiu       $a0, $zero, 0x99
    ctx->pc = 0x14b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x14b7e4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x14b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14b7e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14b7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b7ec: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14B7ECu;
    SET_GPR_U32(ctx, 31, 0x14B7F4u);
    ctx->pc = 0x14B7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7ECu;
            // 0x14b7f0: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7F4u; }
        if (ctx->pc != 0x14B7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7F4u; }
        if (ctx->pc != 0x14B7F4u) { return; }
    }
    ctx->pc = 0x14B7F4u;
    // 0x14b7f4: 0x2404009a  addiu       $a0, $zero, 0x9A
    ctx->pc = 0x14b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x14b7f8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x14b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14b7fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14b7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b800: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14B800u;
    SET_GPR_U32(ctx, 31, 0x14B808u);
    ctx->pc = 0x14B804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B800u;
            // 0x14b804: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B808u; }
        if (ctx->pc != 0x14B808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B808u; }
        if (ctx->pc != 0x14B808u) { return; }
    }
    ctx->pc = 0x14B808u;
    // 0x14b808: 0x2404009b  addiu       $a0, $zero, 0x9B
    ctx->pc = 0x14b808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x14b80c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x14b80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14b810: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14b810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b814: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14B814u;
    SET_GPR_U32(ctx, 31, 0x14B81Cu);
    ctx->pc = 0x14B818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B814u;
            // 0x14b818: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B81Cu; }
        if (ctx->pc != 0x14B81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B81Cu; }
        if (ctx->pc != 0x14B81Cu) { return; }
    }
    ctx->pc = 0x14B81Cu;
    // 0x14b81c: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x14b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x14b820: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14B820u;
    SET_GPR_U32(ctx, 31, 0x14B828u);
    ctx->pc = 0x14B824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B820u;
            // 0x14b824: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B828u; }
        if (ctx->pc != 0x14B828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B828u; }
        if (ctx->pc != 0x14B828u) { return; }
    }
    ctx->pc = 0x14B828u;
    // 0x14b828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b82c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b830: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B830u;
    SET_GPR_U32(ctx, 31, 0x14B838u);
    ctx->pc = 0x14B834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B830u;
            // 0x14b834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B838u; }
        if (ctx->pc != 0x14B838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B838u; }
        if (ctx->pc != 0x14B838u) { return; }
    }
    ctx->pc = 0x14B838u;
    // 0x14b838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b83c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B83Cu;
    SET_GPR_U32(ctx, 31, 0x14B844u);
    ctx->pc = 0x14B840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B83Cu;
            // 0x14b840: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B844u; }
        if (ctx->pc != 0x14B844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B844u; }
        if (ctx->pc != 0x14B844u) { return; }
    }
    ctx->pc = 0x14B844u;
    // 0x14b844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b848: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B848u;
    SET_GPR_U32(ctx, 31, 0x14B850u);
    ctx->pc = 0x14B84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B848u;
            // 0x14b84c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B850u; }
        if (ctx->pc != 0x14B850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B850u; }
        if (ctx->pc != 0x14B850u) { return; }
    }
    ctx->pc = 0x14B850u;
    // 0x14b850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b854: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B854u;
    SET_GPR_U32(ctx, 31, 0x14B85Cu);
    ctx->pc = 0x14B858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B854u;
            // 0x14b858: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B85Cu; }
        if (ctx->pc != 0x14B85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B85Cu; }
        if (ctx->pc != 0x14B85Cu) { return; }
    }
    ctx->pc = 0x14B85Cu;
    // 0x14b85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b860: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B860u;
    SET_GPR_U32(ctx, 31, 0x14B868u);
    ctx->pc = 0x14B864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B860u;
            // 0x14b864: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B868u; }
        if (ctx->pc != 0x14B868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B868u; }
        if (ctx->pc != 0x14B868u) { return; }
    }
    ctx->pc = 0x14B868u;
    // 0x14b868: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14b868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14b86c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14b86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14b870: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14B870u;
    SET_GPR_U32(ctx, 31, 0x14B878u);
    ctx->pc = 0x14B874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B870u;
            // 0x14b874: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B878u; }
        if (ctx->pc != 0x14B878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B878u; }
        if (ctx->pc != 0x14B878u) { return; }
    }
    ctx->pc = 0x14B878u;
    // 0x14b878: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14B878u;
    SET_GPR_U32(ctx, 31, 0x14B880u);
    ctx->pc = 0x14B87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B878u;
            // 0x14b87c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B880u; }
        if (ctx->pc != 0x14B880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B880u; }
        if (ctx->pc != 0x14B880u) { return; }
    }
    ctx->pc = 0x14B880u;
    // 0x14b880: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b884: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14b884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b888: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14B888u;
    SET_GPR_U32(ctx, 31, 0x14B890u);
    ctx->pc = 0x14B88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B888u;
            // 0x14b88c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B890u; }
        if (ctx->pc != 0x14B890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B890u; }
        if (ctx->pc != 0x14B890u) { return; }
    }
    ctx->pc = 0x14B890u;
    // 0x14b890: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b894: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14b894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14b898: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B898u;
    SET_GPR_U32(ctx, 31, 0x14B8A0u);
    ctx->pc = 0x14B89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B898u;
            // 0x14b89c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8A0u; }
        if (ctx->pc != 0x14B8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8A0u; }
        if (ctx->pc != 0x14B8A0u) { return; }
    }
    ctx->pc = 0x14B8A0u;
    // 0x14b8a0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b8a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8a8: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8b0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b8b4: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b8b8: 0xc060614  jal         func_181850
    ctx->pc = 0x14B8B8u;
    SET_GPR_U32(ctx, 31, 0x14B8C0u);
    ctx->pc = 0x14B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8B8u;
            // 0x14b8bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8C0u; }
        if (ctx->pc != 0x14B8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8C0u; }
        if (ctx->pc != 0x14B8C0u) { return; }
    }
    ctx->pc = 0x14B8C0u;
    // 0x14b8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8c4: 0xc06060c  jal         func_181830
    ctx->pc = 0x14B8C4u;
    SET_GPR_U32(ctx, 31, 0x14B8CCu);
    ctx->pc = 0x14B8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8C4u;
            // 0x14b8c8: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8CCu; }
        if (ctx->pc != 0x14B8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8CCu; }
        if (ctx->pc != 0x14B8CCu) { return; }
    }
    ctx->pc = 0x14B8CCu;
    // 0x14b8cc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14b8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14b8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b8d8: 0xc060604  jal         func_181810
    ctx->pc = 0x14B8D8u;
    SET_GPR_U32(ctx, 31, 0x14B8E0u);
    ctx->pc = 0x14B8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8D8u;
            // 0x14b8dc: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8E0u; }
        if (ctx->pc != 0x14B8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8E0u; }
        if (ctx->pc != 0x14B8E0u) { return; }
    }
    ctx->pc = 0x14B8E0u;
    // 0x14b8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8e8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14B8E8u;
    SET_GPR_U32(ctx, 31, 0x14B8F0u);
    ctx->pc = 0x14B8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8E8u;
            // 0x14b8ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8F0u; }
        if (ctx->pc != 0x14B8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8F0u; }
        if (ctx->pc != 0x14B8F0u) { return; }
    }
    ctx->pc = 0x14B8F0u;
    // 0x14b8f0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14b8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14b8f4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14B8F4u;
    SET_GPR_U32(ctx, 31, 0x14B8FCu);
    ctx->pc = 0x14B8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8F4u;
            // 0x14b8f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8FCu; }
        if (ctx->pc != 0x14B8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8FCu; }
        if (ctx->pc != 0x14B8FCu) { return; }
    }
    ctx->pc = 0x14B8FCu;
    // 0x14b8fc: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14B8FCu;
    SET_GPR_U32(ctx, 31, 0x14B904u);
    ctx->pc = 0x14B900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8FCu;
            // 0x14b900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B904u; }
        if (ctx->pc != 0x14B904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B904u; }
        if (ctx->pc != 0x14B904u) { return; }
    }
    ctx->pc = 0x14B904u;
    // 0x14b904: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x14b904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x14b908: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14B908u;
    SET_GPR_U32(ctx, 31, 0x14B910u);
    ctx->pc = 0x14B90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B908u;
            // 0x14b90c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B910u; }
        if (ctx->pc != 0x14B910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B910u; }
        if (ctx->pc != 0x14B910u) { return; }
    }
    ctx->pc = 0x14B910u;
    // 0x14b910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b918: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B918u;
    SET_GPR_U32(ctx, 31, 0x14B920u);
    ctx->pc = 0x14B91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B918u;
            // 0x14b91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B920u; }
        if (ctx->pc != 0x14B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B920u; }
        if (ctx->pc != 0x14B920u) { return; }
    }
    ctx->pc = 0x14B920u;
    // 0x14b920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b924: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B924u;
    SET_GPR_U32(ctx, 31, 0x14B92Cu);
    ctx->pc = 0x14B928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B924u;
            // 0x14b928: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B92Cu; }
        if (ctx->pc != 0x14B92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B92Cu; }
        if (ctx->pc != 0x14B92Cu) { return; }
    }
    ctx->pc = 0x14B92Cu;
    // 0x14b92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b930: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B930u;
    SET_GPR_U32(ctx, 31, 0x14B938u);
    ctx->pc = 0x14B934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B930u;
            // 0x14b934: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B938u; }
        if (ctx->pc != 0x14B938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B938u; }
        if (ctx->pc != 0x14B938u) { return; }
    }
    ctx->pc = 0x14B938u;
    // 0x14b938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b93c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B93Cu;
    SET_GPR_U32(ctx, 31, 0x14B944u);
    ctx->pc = 0x14B940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B93Cu;
            // 0x14b940: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B944u; }
        if (ctx->pc != 0x14B944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B944u; }
        if (ctx->pc != 0x14B944u) { return; }
    }
    ctx->pc = 0x14B944u;
    // 0x14b944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b948: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B948u;
    SET_GPR_U32(ctx, 31, 0x14B950u);
    ctx->pc = 0x14B94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B948u;
            // 0x14b94c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B950u; }
        if (ctx->pc != 0x14B950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B950u; }
        if (ctx->pc != 0x14B950u) { return; }
    }
    ctx->pc = 0x14B950u;
    // 0x14b950: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14b954: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14b954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14b958: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14B958u;
    SET_GPR_U32(ctx, 31, 0x14B960u);
    ctx->pc = 0x14B95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B958u;
            // 0x14b95c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B960u; }
        if (ctx->pc != 0x14B960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B960u; }
        if (ctx->pc != 0x14B960u) { return; }
    }
    ctx->pc = 0x14B960u;
    // 0x14b960: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14B960u;
    SET_GPR_U32(ctx, 31, 0x14B968u);
    ctx->pc = 0x14B964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B960u;
            // 0x14b964: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B968u; }
        if (ctx->pc != 0x14B968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B968u; }
        if (ctx->pc != 0x14B968u) { return; }
    }
    ctx->pc = 0x14B968u;
    // 0x14b968: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b96c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b970: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14B970u;
    SET_GPR_U32(ctx, 31, 0x14B978u);
    ctx->pc = 0x14B974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B970u;
            // 0x14b974: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B978u; }
        if (ctx->pc != 0x14B978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B978u; }
        if (ctx->pc != 0x14B978u) { return; }
    }
    ctx->pc = 0x14B978u;
    // 0x14b978: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b97c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14b980: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B980u;
    SET_GPR_U32(ctx, 31, 0x14B988u);
    ctx->pc = 0x14B984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B980u;
            // 0x14b984: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B988u; }
        if (ctx->pc != 0x14B988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B988u; }
        if (ctx->pc != 0x14B988u) { return; }
    }
    ctx->pc = 0x14B988u;
    // 0x14b988: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b98c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b990: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b998: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b99c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b99cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b9a0: 0xc060614  jal         func_181850
    ctx->pc = 0x14B9A0u;
    SET_GPR_U32(ctx, 31, 0x14B9A8u);
    ctx->pc = 0x14B9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9A0u;
            // 0x14b9a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9A8u; }
        if (ctx->pc != 0x14B9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9A8u; }
        if (ctx->pc != 0x14B9A8u) { return; }
    }
    ctx->pc = 0x14B9A8u;
    // 0x14b9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9ac: 0xc06060c  jal         func_181830
    ctx->pc = 0x14B9ACu;
    SET_GPR_U32(ctx, 31, 0x14B9B4u);
    ctx->pc = 0x14B9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9ACu;
            // 0x14b9b0: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9B4u; }
        if (ctx->pc != 0x14B9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9B4u; }
        if (ctx->pc != 0x14B9B4u) { return; }
    }
    ctx->pc = 0x14B9B4u;
    // 0x14b9b4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14b9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14b9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b9c0: 0xc060604  jal         func_181810
    ctx->pc = 0x14B9C0u;
    SET_GPR_U32(ctx, 31, 0x14B9C8u);
    ctx->pc = 0x14B9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9C0u;
            // 0x14b9c4: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9C8u; }
        if (ctx->pc != 0x14B9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9C8u; }
        if (ctx->pc != 0x14B9C8u) { return; }
    }
    ctx->pc = 0x14B9C8u;
    // 0x14b9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9d0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14B9D0u;
    SET_GPR_U32(ctx, 31, 0x14B9D8u);
    ctx->pc = 0x14B9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9D0u;
            // 0x14b9d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9D8u; }
        if (ctx->pc != 0x14B9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9D8u; }
        if (ctx->pc != 0x14B9D8u) { return; }
    }
    ctx->pc = 0x14B9D8u;
    // 0x14b9d8: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14b9dc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14B9DCu;
    SET_GPR_U32(ctx, 31, 0x14B9E4u);
    ctx->pc = 0x14B9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9DCu;
            // 0x14b9e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9E4u; }
        if (ctx->pc != 0x14B9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9E4u; }
        if (ctx->pc != 0x14B9E4u) { return; }
    }
    ctx->pc = 0x14B9E4u;
    // 0x14b9e4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14B9E4u;
    SET_GPR_U32(ctx, 31, 0x14B9ECu);
    ctx->pc = 0x14B9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9E4u;
            // 0x14b9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9ECu; }
        if (ctx->pc != 0x14B9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9ECu; }
        if (ctx->pc != 0x14B9ECu) { return; }
    }
    ctx->pc = 0x14B9ECu;
    // 0x14b9ec: 0x24040091  addiu       $a0, $zero, 0x91
    ctx->pc = 0x14b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x14b9f0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14B9F0u;
    SET_GPR_U32(ctx, 31, 0x14B9F8u);
    ctx->pc = 0x14B9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9F0u;
            // 0x14b9f4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9F8u; }
        if (ctx->pc != 0x14B9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9F8u; }
        if (ctx->pc != 0x14B9F8u) { return; }
    }
    ctx->pc = 0x14B9F8u;
    // 0x14b9f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba00: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BA00u;
    SET_GPR_U32(ctx, 31, 0x14BA08u);
    ctx->pc = 0x14BA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA00u;
            // 0x14ba04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA08u; }
        if (ctx->pc != 0x14BA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA08u; }
        if (ctx->pc != 0x14BA08u) { return; }
    }
    ctx->pc = 0x14BA08u;
    // 0x14ba08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba0c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BA0Cu;
    SET_GPR_U32(ctx, 31, 0x14BA14u);
    ctx->pc = 0x14BA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA0Cu;
            // 0x14ba10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA14u; }
        if (ctx->pc != 0x14BA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA14u; }
        if (ctx->pc != 0x14BA14u) { return; }
    }
    ctx->pc = 0x14BA14u;
    // 0x14ba14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ba14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba18: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BA18u;
    SET_GPR_U32(ctx, 31, 0x14BA20u);
    ctx->pc = 0x14BA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA18u;
            // 0x14ba1c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA20u; }
        if (ctx->pc != 0x14BA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA20u; }
        if (ctx->pc != 0x14BA20u) { return; }
    }
    ctx->pc = 0x14BA20u;
    // 0x14ba20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ba20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba24: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BA24u;
    SET_GPR_U32(ctx, 31, 0x14BA2Cu);
    ctx->pc = 0x14BA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA24u;
            // 0x14ba28: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA2Cu; }
        if (ctx->pc != 0x14BA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA2Cu; }
        if (ctx->pc != 0x14BA2Cu) { return; }
    }
    ctx->pc = 0x14BA2Cu;
    // 0x14ba2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ba2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba30: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BA30u;
    SET_GPR_U32(ctx, 31, 0x14BA38u);
    ctx->pc = 0x14BA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA30u;
            // 0x14ba34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA38u; }
        if (ctx->pc != 0x14BA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA38u; }
        if (ctx->pc != 0x14BA38u) { return; }
    }
    ctx->pc = 0x14BA38u;
    // 0x14ba38: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14ba3c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14ba40: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14BA40u;
    SET_GPR_U32(ctx, 31, 0x14BA48u);
    ctx->pc = 0x14BA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA40u;
            // 0x14ba44: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA48u; }
        if (ctx->pc != 0x14BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA48u; }
        if (ctx->pc != 0x14BA48u) { return; }
    }
    ctx->pc = 0x14BA48u;
    // 0x14ba48: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14BA48u;
    SET_GPR_U32(ctx, 31, 0x14BA50u);
    ctx->pc = 0x14BA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA48u;
            // 0x14ba4c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA50u; }
        if (ctx->pc != 0x14BA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA50u; }
        if (ctx->pc != 0x14BA50u) { return; }
    }
    ctx->pc = 0x14BA50u;
    // 0x14ba50: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ba50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ba54: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14ba54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14ba58: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14BA58u;
    SET_GPR_U32(ctx, 31, 0x14BA60u);
    ctx->pc = 0x14BA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA58u;
            // 0x14ba5c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA60u; }
        if (ctx->pc != 0x14BA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA60u; }
        if (ctx->pc != 0x14BA60u) { return; }
    }
    ctx->pc = 0x14BA60u;
    // 0x14ba60: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ba60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ba64: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14ba68: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14BA68u;
    SET_GPR_U32(ctx, 31, 0x14BA70u);
    ctx->pc = 0x14BA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA68u;
            // 0x14ba6c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA70u; }
        if (ctx->pc != 0x14BA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA70u; }
        if (ctx->pc != 0x14BA70u) { return; }
    }
    ctx->pc = 0x14BA70u;
    // 0x14ba70: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ba70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ba74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14ba74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba78: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14ba78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14ba7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ba7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba80: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ba80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ba84: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14ba84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14ba88: 0xc060614  jal         func_181850
    ctx->pc = 0x14BA88u;
    SET_GPR_U32(ctx, 31, 0x14BA90u);
    ctx->pc = 0x14BA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA88u;
            // 0x14ba8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA90u; }
        if (ctx->pc != 0x14BA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA90u; }
        if (ctx->pc != 0x14BA90u) { return; }
    }
    ctx->pc = 0x14BA90u;
    // 0x14ba90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ba90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba94: 0xc06060c  jal         func_181830
    ctx->pc = 0x14BA94u;
    SET_GPR_U32(ctx, 31, 0x14BA9Cu);
    ctx->pc = 0x14BA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA94u;
            // 0x14ba98: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA9Cu; }
        if (ctx->pc != 0x14BA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA9Cu; }
        if (ctx->pc != 0x14BA9Cu) { return; }
    }
    ctx->pc = 0x14BA9Cu;
    // 0x14ba9c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14ba9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14baa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14baa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14baa8: 0xc060604  jal         func_181810
    ctx->pc = 0x14BAA8u;
    SET_GPR_U32(ctx, 31, 0x14BAB0u);
    ctx->pc = 0x14BAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAA8u;
            // 0x14baac: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAB0u; }
        if (ctx->pc != 0x14BAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAB0u; }
        if (ctx->pc != 0x14BAB0u) { return; }
    }
    ctx->pc = 0x14BAB0u;
    // 0x14bab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bab8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14BAB8u;
    SET_GPR_U32(ctx, 31, 0x14BAC0u);
    ctx->pc = 0x14BABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAB8u;
            // 0x14babc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAC0u; }
        if (ctx->pc != 0x14BAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAC0u; }
        if (ctx->pc != 0x14BAC0u) { return; }
    }
    ctx->pc = 0x14BAC0u;
    // 0x14bac0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14bac4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14BAC4u;
    SET_GPR_U32(ctx, 31, 0x14BACCu);
    ctx->pc = 0x14BAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAC4u;
            // 0x14bac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BACCu; }
        if (ctx->pc != 0x14BACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BACCu; }
        if (ctx->pc != 0x14BACCu) { return; }
    }
    ctx->pc = 0x14BACCu;
    // 0x14bacc: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14BACCu;
    SET_GPR_U32(ctx, 31, 0x14BAD4u);
    ctx->pc = 0x14BAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BACCu;
            // 0x14bad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAD4u; }
        if (ctx->pc != 0x14BAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAD4u; }
        if (ctx->pc != 0x14BAD4u) { return; }
    }
    ctx->pc = 0x14BAD4u;
    // 0x14bad4: 0x24040092  addiu       $a0, $zero, 0x92
    ctx->pc = 0x14bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x14bad8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14BAD8u;
    SET_GPR_U32(ctx, 31, 0x14BAE0u);
    ctx->pc = 0x14BADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAD8u;
            // 0x14badc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAE0u; }
        if (ctx->pc != 0x14BAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAE0u; }
        if (ctx->pc != 0x14BAE0u) { return; }
    }
    ctx->pc = 0x14BAE0u;
    // 0x14bae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14bae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bae8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BAE8u;
    SET_GPR_U32(ctx, 31, 0x14BAF0u);
    ctx->pc = 0x14BAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAE8u;
            // 0x14baec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAF0u; }
        if (ctx->pc != 0x14BAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAF0u; }
        if (ctx->pc != 0x14BAF0u) { return; }
    }
    ctx->pc = 0x14BAF0u;
    // 0x14baf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14baf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14baf4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BAF4u;
    SET_GPR_U32(ctx, 31, 0x14BAFCu);
    ctx->pc = 0x14BAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAF4u;
            // 0x14baf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAFCu; }
        if (ctx->pc != 0x14BAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAFCu; }
        if (ctx->pc != 0x14BAFCu) { return; }
    }
    ctx->pc = 0x14BAFCu;
    // 0x14bafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb00: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BB00u;
    SET_GPR_U32(ctx, 31, 0x14BB08u);
    ctx->pc = 0x14BB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB00u;
            // 0x14bb04: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB08u; }
        if (ctx->pc != 0x14BB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB08u; }
        if (ctx->pc != 0x14BB08u) { return; }
    }
    ctx->pc = 0x14BB08u;
    // 0x14bb08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb0c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BB0Cu;
    SET_GPR_U32(ctx, 31, 0x14BB14u);
    ctx->pc = 0x14BB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB0Cu;
            // 0x14bb10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB14u; }
        if (ctx->pc != 0x14BB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB14u; }
        if (ctx->pc != 0x14BB14u) { return; }
    }
    ctx->pc = 0x14BB14u;
    // 0x14bb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb18: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BB18u;
    SET_GPR_U32(ctx, 31, 0x14BB20u);
    ctx->pc = 0x14BB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB18u;
            // 0x14bb1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB20u; }
        if (ctx->pc != 0x14BB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB20u; }
        if (ctx->pc != 0x14BB20u) { return; }
    }
    ctx->pc = 0x14BB20u;
    // 0x14bb20: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14bb24: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14bb28: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14BB28u;
    SET_GPR_U32(ctx, 31, 0x14BB30u);
    ctx->pc = 0x14BB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB28u;
            // 0x14bb2c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB30u; }
        if (ctx->pc != 0x14BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB30u; }
        if (ctx->pc != 0x14BB30u) { return; }
    }
    ctx->pc = 0x14BB30u;
    // 0x14bb30: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14BB30u;
    SET_GPR_U32(ctx, 31, 0x14BB38u);
    ctx->pc = 0x14BB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB30u;
            // 0x14bb34: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB38u; }
        if (ctx->pc != 0x14BB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB38u; }
        if (ctx->pc != 0x14BB38u) { return; }
    }
    ctx->pc = 0x14BB38u;
    // 0x14bb38: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bb3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14bb40: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14BB40u;
    SET_GPR_U32(ctx, 31, 0x14BB48u);
    ctx->pc = 0x14BB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB40u;
            // 0x14bb44: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB48u; }
        if (ctx->pc != 0x14BB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB48u; }
        if (ctx->pc != 0x14BB48u) { return; }
    }
    ctx->pc = 0x14BB48u;
    // 0x14bb48: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bb4c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14bb50: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14BB50u;
    SET_GPR_U32(ctx, 31, 0x14BB58u);
    ctx->pc = 0x14BB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB50u;
            // 0x14bb54: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB58u; }
        if (ctx->pc != 0x14BB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB58u; }
        if (ctx->pc != 0x14BB58u) { return; }
    }
    ctx->pc = 0x14BB58u;
    // 0x14bb58: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bb5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14bb5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb60: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14bb60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14bb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb68: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bb6c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14bb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14bb70: 0xc060614  jal         func_181850
    ctx->pc = 0x14BB70u;
    SET_GPR_U32(ctx, 31, 0x14BB78u);
    ctx->pc = 0x14BB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB70u;
            // 0x14bb74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB78u; }
        if (ctx->pc != 0x14BB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB78u; }
        if (ctx->pc != 0x14BB78u) { return; }
    }
    ctx->pc = 0x14BB78u;
    // 0x14bb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb7c: 0xc06060c  jal         func_181830
    ctx->pc = 0x14BB7Cu;
    SET_GPR_U32(ctx, 31, 0x14BB84u);
    ctx->pc = 0x14BB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB7Cu;
            // 0x14bb80: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB84u; }
        if (ctx->pc != 0x14BB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB84u; }
        if (ctx->pc != 0x14BB84u) { return; }
    }
    ctx->pc = 0x14BB84u;
    // 0x14bb84: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14bb84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14bb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14bb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bb90: 0xc060604  jal         func_181810
    ctx->pc = 0x14BB90u;
    SET_GPR_U32(ctx, 31, 0x14BB98u);
    ctx->pc = 0x14BB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB90u;
            // 0x14bb94: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB98u; }
        if (ctx->pc != 0x14BB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB98u; }
        if (ctx->pc != 0x14BB98u) { return; }
    }
    ctx->pc = 0x14BB98u;
    // 0x14bb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bba0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14BBA0u;
    SET_GPR_U32(ctx, 31, 0x14BBA8u);
    ctx->pc = 0x14BBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBA0u;
            // 0x14bba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBA8u; }
        if (ctx->pc != 0x14BBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBA8u; }
        if (ctx->pc != 0x14BBA8u) { return; }
    }
    ctx->pc = 0x14BBA8u;
    // 0x14bba8: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14bbac: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14BBACu;
    SET_GPR_U32(ctx, 31, 0x14BBB4u);
    ctx->pc = 0x14BBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBACu;
            // 0x14bbb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBB4u; }
        if (ctx->pc != 0x14BBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBB4u; }
        if (ctx->pc != 0x14BBB4u) { return; }
    }
    ctx->pc = 0x14BBB4u;
    // 0x14bbb4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14BBB4u;
    SET_GPR_U32(ctx, 31, 0x14BBBCu);
    ctx->pc = 0x14BBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBB4u;
            // 0x14bbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBBCu; }
        if (ctx->pc != 0x14BBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBBCu; }
        if (ctx->pc != 0x14BBBCu) { return; }
    }
    ctx->pc = 0x14BBBCu;
    // 0x14bbbc: 0x24040093  addiu       $a0, $zero, 0x93
    ctx->pc = 0x14bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x14bbc0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14BBC0u;
    SET_GPR_U32(ctx, 31, 0x14BBC8u);
    ctx->pc = 0x14BBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBC0u;
            // 0x14bbc4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBC8u; }
        if (ctx->pc != 0x14BBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBC8u; }
        if (ctx->pc != 0x14BBC8u) { return; }
    }
    ctx->pc = 0x14BBC8u;
    // 0x14bbc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14bbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbd0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BBD0u;
    SET_GPR_U32(ctx, 31, 0x14BBD8u);
    ctx->pc = 0x14BBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBD0u;
            // 0x14bbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBD8u; }
        if (ctx->pc != 0x14BBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBD8u; }
        if (ctx->pc != 0x14BBD8u) { return; }
    }
    ctx->pc = 0x14BBD8u;
    // 0x14bbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbdc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BBDCu;
    SET_GPR_U32(ctx, 31, 0x14BBE4u);
    ctx->pc = 0x14BBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBDCu;
            // 0x14bbe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBE4u; }
        if (ctx->pc != 0x14BBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBE4u; }
        if (ctx->pc != 0x14BBE4u) { return; }
    }
    ctx->pc = 0x14BBE4u;
    // 0x14bbe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbe8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BBE8u;
    SET_GPR_U32(ctx, 31, 0x14BBF0u);
    ctx->pc = 0x14BBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBE8u;
            // 0x14bbec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBF0u; }
        if (ctx->pc != 0x14BBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBF0u; }
        if (ctx->pc != 0x14BBF0u) { return; }
    }
    ctx->pc = 0x14BBF0u;
    // 0x14bbf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbf4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BBF4u;
    SET_GPR_U32(ctx, 31, 0x14BBFCu);
    ctx->pc = 0x14BBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBF4u;
            // 0x14bbf8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBFCu; }
        if (ctx->pc != 0x14BBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBFCu; }
        if (ctx->pc != 0x14BBFCu) { return; }
    }
    ctx->pc = 0x14BBFCu;
    // 0x14bbfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc00: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BC00u;
    SET_GPR_U32(ctx, 31, 0x14BC08u);
    ctx->pc = 0x14BC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC00u;
            // 0x14bc04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC08u; }
        if (ctx->pc != 0x14BC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC08u; }
        if (ctx->pc != 0x14BC08u) { return; }
    }
    ctx->pc = 0x14BC08u;
    // 0x14bc08: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14bc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14bc0c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14bc10: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14BC10u;
    SET_GPR_U32(ctx, 31, 0x14BC18u);
    ctx->pc = 0x14BC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC10u;
            // 0x14bc14: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC18u; }
        if (ctx->pc != 0x14BC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC18u; }
        if (ctx->pc != 0x14BC18u) { return; }
    }
    ctx->pc = 0x14BC18u;
    // 0x14bc18: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14BC18u;
    SET_GPR_U32(ctx, 31, 0x14BC20u);
    ctx->pc = 0x14BC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC18u;
            // 0x14bc1c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC20u; }
        if (ctx->pc != 0x14BC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC20u; }
        if (ctx->pc != 0x14BC20u) { return; }
    }
    ctx->pc = 0x14BC20u;
    // 0x14bc20: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bc24: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14bc28: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14BC28u;
    SET_GPR_U32(ctx, 31, 0x14BC30u);
    ctx->pc = 0x14BC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC28u;
            // 0x14bc2c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC30u; }
        if (ctx->pc != 0x14BC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC30u; }
        if (ctx->pc != 0x14BC30u) { return; }
    }
    ctx->pc = 0x14BC30u;
    // 0x14bc30: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bc34: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14bc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14bc38: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14BC38u;
    SET_GPR_U32(ctx, 31, 0x14BC40u);
    ctx->pc = 0x14BC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC38u;
            // 0x14bc3c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC40u; }
        if (ctx->pc != 0x14BC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC40u; }
        if (ctx->pc != 0x14BC40u) { return; }
    }
    ctx->pc = 0x14BC40u;
    // 0x14bc40: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bc44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14bc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc48: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14bc48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14bc4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc50: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bc54: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14bc54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14bc58: 0xc060614  jal         func_181850
    ctx->pc = 0x14BC58u;
    SET_GPR_U32(ctx, 31, 0x14BC60u);
    ctx->pc = 0x14BC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC58u;
            // 0x14bc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC60u; }
        if (ctx->pc != 0x14BC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC60u; }
        if (ctx->pc != 0x14BC60u) { return; }
    }
    ctx->pc = 0x14BC60u;
    // 0x14bc60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc64: 0xc06060c  jal         func_181830
    ctx->pc = 0x14BC64u;
    SET_GPR_U32(ctx, 31, 0x14BC6Cu);
    ctx->pc = 0x14BC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC64u;
            // 0x14bc68: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC6Cu; }
        if (ctx->pc != 0x14BC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC6Cu; }
        if (ctx->pc != 0x14BC6Cu) { return; }
    }
    ctx->pc = 0x14BC6Cu;
    // 0x14bc6c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14bc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14bc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14bc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bc78: 0xc060604  jal         func_181810
    ctx->pc = 0x14BC78u;
    SET_GPR_U32(ctx, 31, 0x14BC80u);
    ctx->pc = 0x14BC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC78u;
            // 0x14bc7c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC80u; }
        if (ctx->pc != 0x14BC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC80u; }
        if (ctx->pc != 0x14BC80u) { return; }
    }
    ctx->pc = 0x14BC80u;
    // 0x14bc80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc88: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14BC88u;
    SET_GPR_U32(ctx, 31, 0x14BC90u);
    ctx->pc = 0x14BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC88u;
            // 0x14bc8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC90u; }
        if (ctx->pc != 0x14BC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC90u; }
        if (ctx->pc != 0x14BC90u) { return; }
    }
    ctx->pc = 0x14BC90u;
    // 0x14bc90: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14bc94: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14BC94u;
    SET_GPR_U32(ctx, 31, 0x14BC9Cu);
    ctx->pc = 0x14BC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC94u;
            // 0x14bc98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC9Cu; }
        if (ctx->pc != 0x14BC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC9Cu; }
        if (ctx->pc != 0x14BC9Cu) { return; }
    }
    ctx->pc = 0x14BC9Cu;
    // 0x14bc9c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14BC9Cu;
    SET_GPR_U32(ctx, 31, 0x14BCA4u);
    ctx->pc = 0x14BCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC9Cu;
            // 0x14bca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCA4u; }
        if (ctx->pc != 0x14BCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCA4u; }
        if (ctx->pc != 0x14BCA4u) { return; }
    }
    ctx->pc = 0x14BCA4u;
    // 0x14bca4: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x14bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x14bca8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14BCA8u;
    SET_GPR_U32(ctx, 31, 0x14BCB0u);
    ctx->pc = 0x14BCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCA8u;
            // 0x14bcac: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCB0u; }
        if (ctx->pc != 0x14BCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCB0u; }
        if (ctx->pc != 0x14BCB0u) { return; }
    }
    ctx->pc = 0x14BCB0u;
    // 0x14bcb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14bcb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcb8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BCB8u;
    SET_GPR_U32(ctx, 31, 0x14BCC0u);
    ctx->pc = 0x14BCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCB8u;
            // 0x14bcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCC0u; }
        if (ctx->pc != 0x14BCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCC0u; }
        if (ctx->pc != 0x14BCC0u) { return; }
    }
    ctx->pc = 0x14BCC0u;
    // 0x14bcc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcc4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BCC4u;
    SET_GPR_U32(ctx, 31, 0x14BCCCu);
    ctx->pc = 0x14BCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCC4u;
            // 0x14bcc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCCCu; }
        if (ctx->pc != 0x14BCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCCCu; }
        if (ctx->pc != 0x14BCCCu) { return; }
    }
    ctx->pc = 0x14BCCCu;
    // 0x14bccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcd0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BCD0u;
    SET_GPR_U32(ctx, 31, 0x14BCD8u);
    ctx->pc = 0x14BCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCD0u;
            // 0x14bcd4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCD8u; }
        if (ctx->pc != 0x14BCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCD8u; }
        if (ctx->pc != 0x14BCD8u) { return; }
    }
    ctx->pc = 0x14BCD8u;
    // 0x14bcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcdc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BCDCu;
    SET_GPR_U32(ctx, 31, 0x14BCE4u);
    ctx->pc = 0x14BCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCDCu;
            // 0x14bce0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCE4u; }
        if (ctx->pc != 0x14BCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCE4u; }
        if (ctx->pc != 0x14BCE4u) { return; }
    }
    ctx->pc = 0x14BCE4u;
    // 0x14bce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bce8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BCE8u;
    SET_GPR_U32(ctx, 31, 0x14BCF0u);
    ctx->pc = 0x14BCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCE8u;
            // 0x14bcec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCF0u; }
        if (ctx->pc != 0x14BCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCF0u; }
        if (ctx->pc != 0x14BCF0u) { return; }
    }
    ctx->pc = 0x14BCF0u;
    // 0x14bcf0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14bcf4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14bcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14bcf8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14BCF8u;
    SET_GPR_U32(ctx, 31, 0x14BD00u);
    ctx->pc = 0x14BCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCF8u;
            // 0x14bcfc: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD00u; }
        if (ctx->pc != 0x14BD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD00u; }
        if (ctx->pc != 0x14BD00u) { return; }
    }
    ctx->pc = 0x14BD00u;
    // 0x14bd00: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14BD00u;
    SET_GPR_U32(ctx, 31, 0x14BD08u);
    ctx->pc = 0x14BD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD00u;
            // 0x14bd04: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD08u; }
        if (ctx->pc != 0x14BD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD08u; }
        if (ctx->pc != 0x14BD08u) { return; }
    }
    ctx->pc = 0x14BD08u;
    // 0x14bd08: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bd0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14bd10: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14BD10u;
    SET_GPR_U32(ctx, 31, 0x14BD18u);
    ctx->pc = 0x14BD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD10u;
            // 0x14bd14: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD18u; }
        if (ctx->pc != 0x14BD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD18u; }
        if (ctx->pc != 0x14BD18u) { return; }
    }
    ctx->pc = 0x14BD18u;
    // 0x14bd18: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bd1c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14bd20: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14BD20u;
    SET_GPR_U32(ctx, 31, 0x14BD28u);
    ctx->pc = 0x14BD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD20u;
            // 0x14bd24: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD28u; }
        if (ctx->pc != 0x14BD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD28u; }
        if (ctx->pc != 0x14BD28u) { return; }
    }
    ctx->pc = 0x14BD28u;
    // 0x14bd28: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bd2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14bd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd30: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14bd30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14bd34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd38: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bd3c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14bd3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14bd40: 0xc060614  jal         func_181850
    ctx->pc = 0x14BD40u;
    SET_GPR_U32(ctx, 31, 0x14BD48u);
    ctx->pc = 0x14BD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD40u;
            // 0x14bd44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD48u; }
        if (ctx->pc != 0x14BD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD48u; }
        if (ctx->pc != 0x14BD48u) { return; }
    }
    ctx->pc = 0x14BD48u;
    // 0x14bd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd4c: 0xc06060c  jal         func_181830
    ctx->pc = 0x14BD4Cu;
    SET_GPR_U32(ctx, 31, 0x14BD54u);
    ctx->pc = 0x14BD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD4Cu;
            // 0x14bd50: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD54u; }
        if (ctx->pc != 0x14BD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD54u; }
        if (ctx->pc != 0x14BD54u) { return; }
    }
    ctx->pc = 0x14BD54u;
    // 0x14bd54: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14bd54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14bd58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bd60: 0xc060604  jal         func_181810
    ctx->pc = 0x14BD60u;
    SET_GPR_U32(ctx, 31, 0x14BD68u);
    ctx->pc = 0x14BD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD60u;
            // 0x14bd64: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD68u; }
        if (ctx->pc != 0x14BD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD68u; }
        if (ctx->pc != 0x14BD68u) { return; }
    }
    ctx->pc = 0x14BD68u;
    // 0x14bd68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd70: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14BD70u;
    SET_GPR_U32(ctx, 31, 0x14BD78u);
    ctx->pc = 0x14BD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD70u;
            // 0x14bd74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD78u; }
        if (ctx->pc != 0x14BD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD78u; }
        if (ctx->pc != 0x14BD78u) { return; }
    }
    ctx->pc = 0x14BD78u;
    // 0x14bd78: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14bd7c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14BD7Cu;
    SET_GPR_U32(ctx, 31, 0x14BD84u);
    ctx->pc = 0x14BD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD7Cu;
            // 0x14bd80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD84u; }
        if (ctx->pc != 0x14BD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD84u; }
        if (ctx->pc != 0x14BD84u) { return; }
    }
    ctx->pc = 0x14BD84u;
    // 0x14bd84: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14BD84u;
    SET_GPR_U32(ctx, 31, 0x14BD8Cu);
    ctx->pc = 0x14BD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD84u;
            // 0x14bd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD8Cu; }
        if (ctx->pc != 0x14BD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD8Cu; }
        if (ctx->pc != 0x14BD8Cu) { return; }
    }
    ctx->pc = 0x14BD8Cu;
    // 0x14bd8c: 0x24040095  addiu       $a0, $zero, 0x95
    ctx->pc = 0x14bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x14bd90: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14BD90u;
    SET_GPR_U32(ctx, 31, 0x14BD98u);
    ctx->pc = 0x14BD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD90u;
            // 0x14bd94: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD98u; }
        if (ctx->pc != 0x14BD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD98u; }
        if (ctx->pc != 0x14BD98u) { return; }
    }
    ctx->pc = 0x14BD98u;
    // 0x14bd98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14bd98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bda0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BDA0u;
    SET_GPR_U32(ctx, 31, 0x14BDA8u);
    ctx->pc = 0x14BDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDA0u;
            // 0x14bda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDA8u; }
        if (ctx->pc != 0x14BDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDA8u; }
        if (ctx->pc != 0x14BDA8u) { return; }
    }
    ctx->pc = 0x14BDA8u;
    // 0x14bda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bdac: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BDACu;
    SET_GPR_U32(ctx, 31, 0x14BDB4u);
    ctx->pc = 0x14BDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDACu;
            // 0x14bdb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDB4u; }
        if (ctx->pc != 0x14BDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDB4u; }
        if (ctx->pc != 0x14BDB4u) { return; }
    }
    ctx->pc = 0x14BDB4u;
    // 0x14bdb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bdb8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BDB8u;
    SET_GPR_U32(ctx, 31, 0x14BDC0u);
    ctx->pc = 0x14BDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDB8u;
            // 0x14bdbc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDC0u; }
        if (ctx->pc != 0x14BDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDC0u; }
        if (ctx->pc != 0x14BDC0u) { return; }
    }
    ctx->pc = 0x14BDC0u;
    // 0x14bdc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bdc4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BDC4u;
    SET_GPR_U32(ctx, 31, 0x14BDCCu);
    ctx->pc = 0x14BDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDC4u;
            // 0x14bdc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDCCu; }
        if (ctx->pc != 0x14BDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDCCu; }
        if (ctx->pc != 0x14BDCCu) { return; }
    }
    ctx->pc = 0x14BDCCu;
    // 0x14bdcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bdd0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BDD0u;
    SET_GPR_U32(ctx, 31, 0x14BDD8u);
    ctx->pc = 0x14BDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDD0u;
            // 0x14bdd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDD8u; }
        if (ctx->pc != 0x14BDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDD8u; }
        if (ctx->pc != 0x14BDD8u) { return; }
    }
    ctx->pc = 0x14BDD8u;
    // 0x14bdd8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14bddc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14bde0: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14BDE0u;
    SET_GPR_U32(ctx, 31, 0x14BDE8u);
    ctx->pc = 0x14BDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDE0u;
            // 0x14bde4: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDE8u; }
        if (ctx->pc != 0x14BDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDE8u; }
        if (ctx->pc != 0x14BDE8u) { return; }
    }
    ctx->pc = 0x14BDE8u;
    // 0x14bde8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14BDE8u;
    SET_GPR_U32(ctx, 31, 0x14BDF0u);
    ctx->pc = 0x14BDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDE8u;
            // 0x14bdec: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDF0u; }
        if (ctx->pc != 0x14BDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BDF0u; }
        if (ctx->pc != 0x14BDF0u) { return; }
    }
    ctx->pc = 0x14BDF0u;
    // 0x14bdf0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bdf4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x14bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14bdf8: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14BDF8u;
    SET_GPR_U32(ctx, 31, 0x14BE00u);
    ctx->pc = 0x14BDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDF8u;
            // 0x14bdfc: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE00u; }
        if (ctx->pc != 0x14BE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE00u; }
        if (ctx->pc != 0x14BE00u) { return; }
    }
    ctx->pc = 0x14BE00u;
    // 0x14be00: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14be00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14be04: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x14be04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14be08: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14BE08u;
    SET_GPR_U32(ctx, 31, 0x14BE10u);
    ctx->pc = 0x14BE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE08u;
            // 0x14be0c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE10u; }
        if (ctx->pc != 0x14BE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE10u; }
        if (ctx->pc != 0x14BE10u) { return; }
    }
    ctx->pc = 0x14BE10u;
    // 0x14be10: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14be10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14be14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14be14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be18: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14be18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14be1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be20: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14be20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14be24: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14be24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14be28: 0xc060614  jal         func_181850
    ctx->pc = 0x14BE28u;
    SET_GPR_U32(ctx, 31, 0x14BE30u);
    ctx->pc = 0x14BE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE28u;
            // 0x14be2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE30u; }
        if (ctx->pc != 0x14BE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE30u; }
        if (ctx->pc != 0x14BE30u) { return; }
    }
    ctx->pc = 0x14BE30u;
    // 0x14be30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be34: 0xc06060c  jal         func_181830
    ctx->pc = 0x14BE34u;
    SET_GPR_U32(ctx, 31, 0x14BE3Cu);
    ctx->pc = 0x14BE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE34u;
            // 0x14be38: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE3Cu; }
        if (ctx->pc != 0x14BE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE3Cu; }
        if (ctx->pc != 0x14BE3Cu) { return; }
    }
    ctx->pc = 0x14BE3Cu;
    // 0x14be3c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14be3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14be40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14be40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14be44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14be48: 0xc060604  jal         func_181810
    ctx->pc = 0x14BE48u;
    SET_GPR_U32(ctx, 31, 0x14BE50u);
    ctx->pc = 0x14BE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE48u;
            // 0x14be4c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE50u; }
        if (ctx->pc != 0x14BE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE50u; }
        if (ctx->pc != 0x14BE50u) { return; }
    }
    ctx->pc = 0x14BE50u;
    // 0x14be50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14be50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14be54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be58: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14BE58u;
    SET_GPR_U32(ctx, 31, 0x14BE60u);
    ctx->pc = 0x14BE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE58u;
            // 0x14be5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE60u; }
        if (ctx->pc != 0x14BE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE60u; }
        if (ctx->pc != 0x14BE60u) { return; }
    }
    ctx->pc = 0x14BE60u;
    // 0x14be60: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14be60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14be64: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14BE64u;
    SET_GPR_U32(ctx, 31, 0x14BE6Cu);
    ctx->pc = 0x14BE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE64u;
            // 0x14be68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE6Cu; }
        if (ctx->pc != 0x14BE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE6Cu; }
        if (ctx->pc != 0x14BE6Cu) { return; }
    }
    ctx->pc = 0x14BE6Cu;
    // 0x14be6c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14BE6Cu;
    SET_GPR_U32(ctx, 31, 0x14BE74u);
    ctx->pc = 0x14BE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE6Cu;
            // 0x14be70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE74u; }
        if (ctx->pc != 0x14BE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE74u; }
        if (ctx->pc != 0x14BE74u) { return; }
    }
    ctx->pc = 0x14BE74u;
    // 0x14be74: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x14be74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x14be78: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14BE78u;
    SET_GPR_U32(ctx, 31, 0x14BE80u);
    ctx->pc = 0x14BE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE78u;
            // 0x14be7c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE80u; }
        if (ctx->pc != 0x14BE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE80u; }
        if (ctx->pc != 0x14BE80u) { return; }
    }
    ctx->pc = 0x14BE80u;
    // 0x14be80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14be80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14be84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be88: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BE88u;
    SET_GPR_U32(ctx, 31, 0x14BE90u);
    ctx->pc = 0x14BE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE88u;
            // 0x14be8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE90u; }
        if (ctx->pc != 0x14BE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE90u; }
        if (ctx->pc != 0x14BE90u) { return; }
    }
    ctx->pc = 0x14BE90u;
    // 0x14be90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14be90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be94: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BE94u;
    SET_GPR_U32(ctx, 31, 0x14BE9Cu);
    ctx->pc = 0x14BE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE94u;
            // 0x14be98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE9Cu; }
        if (ctx->pc != 0x14BE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE9Cu; }
        if (ctx->pc != 0x14BE9Cu) { return; }
    }
    ctx->pc = 0x14BE9Cu;
    // 0x14be9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14be9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bea0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BEA0u;
    SET_GPR_U32(ctx, 31, 0x14BEA8u);
    ctx->pc = 0x14BEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEA0u;
            // 0x14bea4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEA8u; }
        if (ctx->pc != 0x14BEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEA8u; }
        if (ctx->pc != 0x14BEA8u) { return; }
    }
    ctx->pc = 0x14BEA8u;
    // 0x14bea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14beac: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BEACu;
    SET_GPR_U32(ctx, 31, 0x14BEB4u);
    ctx->pc = 0x14BEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEACu;
            // 0x14beb0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEB4u; }
        if (ctx->pc != 0x14BEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEB4u; }
        if (ctx->pc != 0x14BEB4u) { return; }
    }
    ctx->pc = 0x14BEB4u;
    // 0x14beb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14beb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14beb8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BEB8u;
    SET_GPR_U32(ctx, 31, 0x14BEC0u);
    ctx->pc = 0x14BEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEB8u;
            // 0x14bebc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEC0u; }
        if (ctx->pc != 0x14BEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEC0u; }
        if (ctx->pc != 0x14BEC0u) { return; }
    }
    ctx->pc = 0x14BEC0u;
    // 0x14bec0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14bec4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14bec8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14BEC8u;
    SET_GPR_U32(ctx, 31, 0x14BED0u);
    ctx->pc = 0x14BECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEC8u;
            // 0x14becc: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BED0u; }
        if (ctx->pc != 0x14BED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BED0u; }
        if (ctx->pc != 0x14BED0u) { return; }
    }
    ctx->pc = 0x14BED0u;
    // 0x14bed0: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14BED0u;
    SET_GPR_U32(ctx, 31, 0x14BED8u);
    ctx->pc = 0x14BED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BED0u;
            // 0x14bed4: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BED8u; }
        if (ctx->pc != 0x14BED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BED8u; }
        if (ctx->pc != 0x14BED8u) { return; }
    }
    ctx->pc = 0x14BED8u;
    // 0x14bed8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bedc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x14bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x14bee0: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14BEE0u;
    SET_GPR_U32(ctx, 31, 0x14BEE8u);
    ctx->pc = 0x14BEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEE0u;
            // 0x14bee4: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEE8u; }
        if (ctx->pc != 0x14BEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEE8u; }
        if (ctx->pc != 0x14BEE8u) { return; }
    }
    ctx->pc = 0x14BEE8u;
    // 0x14bee8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14beec: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14beecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14bef0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14BEF0u;
    SET_GPR_U32(ctx, 31, 0x14BEF8u);
    ctx->pc = 0x14BEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEF0u;
            // 0x14bef4: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEF8u; }
        if (ctx->pc != 0x14BEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BEF8u; }
        if (ctx->pc != 0x14BEF8u) { return; }
    }
    ctx->pc = 0x14BEF8u;
    // 0x14bef8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14befc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14befcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf00: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14bf00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14bf04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf08: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bf0c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14bf0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14bf10: 0xc060614  jal         func_181850
    ctx->pc = 0x14BF10u;
    SET_GPR_U32(ctx, 31, 0x14BF18u);
    ctx->pc = 0x14BF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF10u;
            // 0x14bf14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF18u; }
        if (ctx->pc != 0x14BF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF18u; }
        if (ctx->pc != 0x14BF18u) { return; }
    }
    ctx->pc = 0x14BF18u;
    // 0x14bf18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf1c: 0xc06060c  jal         func_181830
    ctx->pc = 0x14BF1Cu;
    SET_GPR_U32(ctx, 31, 0x14BF24u);
    ctx->pc = 0x14BF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF1Cu;
            // 0x14bf20: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF24u; }
        if (ctx->pc != 0x14BF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF24u; }
        if (ctx->pc != 0x14BF24u) { return; }
    }
    ctx->pc = 0x14BF24u;
    // 0x14bf24: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14bf24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14bf28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bf30: 0xc060604  jal         func_181810
    ctx->pc = 0x14BF30u;
    SET_GPR_U32(ctx, 31, 0x14BF38u);
    ctx->pc = 0x14BF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF30u;
            // 0x14bf34: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF38u; }
        if (ctx->pc != 0x14BF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF38u; }
        if (ctx->pc != 0x14BF38u) { return; }
    }
    ctx->pc = 0x14BF38u;
    // 0x14bf38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf40: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14BF40u;
    SET_GPR_U32(ctx, 31, 0x14BF48u);
    ctx->pc = 0x14BF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF40u;
            // 0x14bf44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF48u; }
        if (ctx->pc != 0x14BF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF48u; }
        if (ctx->pc != 0x14BF48u) { return; }
    }
    ctx->pc = 0x14BF48u;
    // 0x14bf48: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14bf4c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14BF4Cu;
    SET_GPR_U32(ctx, 31, 0x14BF54u);
    ctx->pc = 0x14BF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF4Cu;
            // 0x14bf50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF54u; }
        if (ctx->pc != 0x14BF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF54u; }
        if (ctx->pc != 0x14BF54u) { return; }
    }
    ctx->pc = 0x14BF54u;
    // 0x14bf54: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14BF54u;
    SET_GPR_U32(ctx, 31, 0x14BF5Cu);
    ctx->pc = 0x14BF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF54u;
            // 0x14bf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF5Cu; }
        if (ctx->pc != 0x14BF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF5Cu; }
        if (ctx->pc != 0x14BF5Cu) { return; }
    }
    ctx->pc = 0x14BF5Cu;
    // 0x14bf5c: 0x24040097  addiu       $a0, $zero, 0x97
    ctx->pc = 0x14bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x14bf60: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14BF60u;
    SET_GPR_U32(ctx, 31, 0x14BF68u);
    ctx->pc = 0x14BF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF60u;
            // 0x14bf64: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF68u; }
        if (ctx->pc != 0x14BF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF68u; }
        if (ctx->pc != 0x14BF68u) { return; }
    }
    ctx->pc = 0x14BF68u;
    // 0x14bf68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14bf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf70: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BF70u;
    SET_GPR_U32(ctx, 31, 0x14BF78u);
    ctx->pc = 0x14BF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF70u;
            // 0x14bf74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF78u; }
        if (ctx->pc != 0x14BF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF78u; }
        if (ctx->pc != 0x14BF78u) { return; }
    }
    ctx->pc = 0x14BF78u;
    // 0x14bf78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf7c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BF7Cu;
    SET_GPR_U32(ctx, 31, 0x14BF84u);
    ctx->pc = 0x14BF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF7Cu;
            // 0x14bf80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF84u; }
        if (ctx->pc != 0x14BF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF84u; }
        if (ctx->pc != 0x14BF84u) { return; }
    }
    ctx->pc = 0x14BF84u;
    // 0x14bf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf88: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BF88u;
    SET_GPR_U32(ctx, 31, 0x14BF90u);
    ctx->pc = 0x14BF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF88u;
            // 0x14bf8c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF90u; }
        if (ctx->pc != 0x14BF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF90u; }
        if (ctx->pc != 0x14BF90u) { return; }
    }
    ctx->pc = 0x14BF90u;
    // 0x14bf90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf94: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BF94u;
    SET_GPR_U32(ctx, 31, 0x14BF9Cu);
    ctx->pc = 0x14BF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF94u;
            // 0x14bf98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF9Cu; }
        if (ctx->pc != 0x14BF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF9Cu; }
        if (ctx->pc != 0x14BF9Cu) { return; }
    }
    ctx->pc = 0x14BF9Cu;
    // 0x14bf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfa0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14BFA0u;
    SET_GPR_U32(ctx, 31, 0x14BFA8u);
    ctx->pc = 0x14BFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BFA0u;
            // 0x14bfa4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFA8u; }
        if (ctx->pc != 0x14BFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFA8u; }
        if (ctx->pc != 0x14BFA8u) { return; }
    }
    ctx->pc = 0x14BFA8u;
    // 0x14bfa8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14bfac: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14bfb0: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14BFB0u;
    SET_GPR_U32(ctx, 31, 0x14BFB8u);
    ctx->pc = 0x14BFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BFB0u;
            // 0x14bfb4: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFB8u; }
        if (ctx->pc != 0x14BFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFB8u; }
        if (ctx->pc != 0x14BFB8u) { return; }
    }
    ctx->pc = 0x14BFB8u;
    // 0x14bfb8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14BFB8u;
    SET_GPR_U32(ctx, 31, 0x14BFC0u);
    ctx->pc = 0x14BFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BFB8u;
            // 0x14bfbc: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFC0u; }
        if (ctx->pc != 0x14BFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFC0u; }
        if (ctx->pc != 0x14BFC0u) { return; }
    }
    ctx->pc = 0x14BFC0u;
    // 0x14bfc0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bfc4: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x14bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x14bfc8: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14BFC8u;
    SET_GPR_U32(ctx, 31, 0x14BFD0u);
    ctx->pc = 0x14BFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BFC8u;
            // 0x14bfcc: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFD0u; }
        if (ctx->pc != 0x14BFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFD0u; }
        if (ctx->pc != 0x14BFD0u) { return; }
    }
    ctx->pc = 0x14BFD0u;
    // 0x14bfd0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bfd4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14bfd8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14BFD8u;
    SET_GPR_U32(ctx, 31, 0x14BFE0u);
    ctx->pc = 0x14BFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BFD8u;
            // 0x14bfdc: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFE0u; }
        if (ctx->pc != 0x14BFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BFE0u; }
        if (ctx->pc != 0x14BFE0u) { return; }
    }
    ctx->pc = 0x14BFE0u;
    // 0x14bfe0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bfe4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14bfe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfe8: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14bfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14bfec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bff0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14bff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14bff4: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14bff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14bff8: 0xc060614  jal         func_181850
    ctx->pc = 0x14BFF8u;
    SET_GPR_U32(ctx, 31, 0x14C000u);
    ctx->pc = 0x14BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BFF8u;
            // 0x14bffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C000u; }
        if (ctx->pc != 0x14C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C000u; }
        if (ctx->pc != 0x14C000u) { return; }
    }
    ctx->pc = 0x14C000u;
    // 0x14c000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c004: 0xc06060c  jal         func_181830
    ctx->pc = 0x14C004u;
    SET_GPR_U32(ctx, 31, 0x14C00Cu);
    ctx->pc = 0x14C008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C004u;
            // 0x14c008: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C00Cu; }
        if (ctx->pc != 0x14C00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C00Cu; }
        if (ctx->pc != 0x14C00Cu) { return; }
    }
    ctx->pc = 0x14C00Cu;
    // 0x14c00c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14c00cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14c010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c018: 0xc060604  jal         func_181810
    ctx->pc = 0x14C018u;
    SET_GPR_U32(ctx, 31, 0x14C020u);
    ctx->pc = 0x14C01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C018u;
            // 0x14c01c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C020u; }
        if (ctx->pc != 0x14C020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C020u; }
        if (ctx->pc != 0x14C020u) { return; }
    }
    ctx->pc = 0x14C020u;
    // 0x14c020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c028: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14C028u;
    SET_GPR_U32(ctx, 31, 0x14C030u);
    ctx->pc = 0x14C02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C028u;
            // 0x14c02c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C030u; }
        if (ctx->pc != 0x14C030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C030u; }
        if (ctx->pc != 0x14C030u) { return; }
    }
    ctx->pc = 0x14C030u;
    // 0x14c030: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14c030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14c034: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14C034u;
    SET_GPR_U32(ctx, 31, 0x14C03Cu);
    ctx->pc = 0x14C038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C034u;
            // 0x14c038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C03Cu; }
        if (ctx->pc != 0x14C03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C03Cu; }
        if (ctx->pc != 0x14C03Cu) { return; }
    }
    ctx->pc = 0x14C03Cu;
    // 0x14c03c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14C03Cu;
    SET_GPR_U32(ctx, 31, 0x14C044u);
    ctx->pc = 0x14C040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C03Cu;
            // 0x14c040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C044u; }
        if (ctx->pc != 0x14C044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C044u; }
        if (ctx->pc != 0x14C044u) { return; }
    }
    ctx->pc = 0x14C044u;
    // 0x14c044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14c044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c04c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C04Cu;
            // 0x14c050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14C054u;
}
