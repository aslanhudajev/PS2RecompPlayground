#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage5mapInit
// Address: 0x1497f0 - 0x149c68
void stage5mapInit_0x1497f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage5mapInit_0x1497f0");
#endif

    ctx->pc = 0x1497f0u;

    // 0x1497f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1497f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1497f4: 0x240400ef  addiu       $a0, $zero, 0xEF
    ctx->pc = 0x1497f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    // 0x1497f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1497f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1497fc: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1497fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x149800: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x149804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14980c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x14980cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x149810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149814: 0xc05c1d8  jal         func_170760
    ctx->pc = 0x149814u;
    SET_GPR_U32(ctx, 31, 0x14981Cu);
    ctx->pc = 0x149818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149814u;
            // 0x149818: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170760u;
    if (runtime->hasFunction(0x170760u)) {
        auto targetFn = runtime->lookupFunction(0x170760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14981Cu; }
        if (ctx->pc != 0x14981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadClut2rom_0x170760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14981Cu; }
        if (ctx->pc != 0x14981Cu) { return; }
    }
    ctx->pc = 0x14981Cu;
    // 0x14981c: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x14981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x149820: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x149820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x149824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149828: 0xc05c1d8  jal         func_170760
    ctx->pc = 0x149828u;
    SET_GPR_U32(ctx, 31, 0x149830u);
    ctx->pc = 0x14982Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149828u;
            // 0x14982c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170760u;
    if (runtime->hasFunction(0x170760u)) {
        auto targetFn = runtime->lookupFunction(0x170760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149830u; }
        if (ctx->pc != 0x149830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadClut2rom_0x170760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149830u; }
        if (ctx->pc != 0x149830u) { return; }
    }
    ctx->pc = 0x149830u;
    // 0x149830: 0x240400ee  addiu       $a0, $zero, 0xEE
    ctx->pc = 0x149830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x149834: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x149834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x149838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14983c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14983Cu;
    SET_GPR_U32(ctx, 31, 0x149844u);
    ctx->pc = 0x149840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14983Cu;
            // 0x149840: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149844u; }
        if (ctx->pc != 0x149844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149844u; }
        if (ctx->pc != 0x149844u) { return; }
    }
    ctx->pc = 0x149844u;
    // 0x149844: 0x240400f1  addiu       $a0, $zero, 0xF1
    ctx->pc = 0x149844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x149848: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x149848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14984c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14984cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149850: 0xc05c20c  jal         func_170830
    ctx->pc = 0x149850u;
    SET_GPR_U32(ctx, 31, 0x149858u);
    ctx->pc = 0x149854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149850u;
            // 0x149854: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149858u; }
        if (ctx->pc != 0x149858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149858u; }
        if (ctx->pc != 0x149858u) { return; }
    }
    ctx->pc = 0x149858u;
    // 0x149858: 0x240400f2  addiu       $a0, $zero, 0xF2
    ctx->pc = 0x149858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x14985c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x14985cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x149860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149864: 0xc05c20c  jal         func_170830
    ctx->pc = 0x149864u;
    SET_GPR_U32(ctx, 31, 0x14986Cu);
    ctx->pc = 0x149868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149864u;
            // 0x149868: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14986Cu; }
        if (ctx->pc != 0x14986Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14986Cu; }
        if (ctx->pc != 0x14986Cu) { return; }
    }
    ctx->pc = 0x14986Cu;
    // 0x14986c: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x14986cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x149870: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x149870u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x149874: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x149874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149878: 0x26319750  addiu       $s1, $s1, -0x68B0
    ctx->pc = 0x149878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940496));
    // 0x14987c: 0x26109700  addiu       $s0, $s0, -0x6900
    ctx->pc = 0x14987cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940416));
label_149880:
    // 0x149880: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x149880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149884: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x149884u;
    SET_GPR_U32(ctx, 31, 0x14988Cu);
    ctx->pc = 0x149888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149884u;
            // 0x149888: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14988Cu; }
        if (ctx->pc != 0x14988Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14988Cu; }
        if (ctx->pc != 0x14988Cu) { return; }
    }
    ctx->pc = 0x14988Cu;
    // 0x14988c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14988cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149894: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149894u;
    SET_GPR_U32(ctx, 31, 0x14989Cu);
    ctx->pc = 0x149898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149894u;
            // 0x149898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14989Cu; }
        if (ctx->pc != 0x14989Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14989Cu; }
        if (ctx->pc != 0x14989Cu) { return; }
    }
    ctx->pc = 0x14989Cu;
    // 0x14989c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498a0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1498A0u;
    SET_GPR_U32(ctx, 31, 0x1498A8u);
    ctx->pc = 0x1498A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1498A0u;
            // 0x1498a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498A8u; }
        if (ctx->pc != 0x1498A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498A8u; }
        if (ctx->pc != 0x1498A8u) { return; }
    }
    ctx->pc = 0x1498A8u;
    // 0x1498a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1498a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498ac: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1498ACu;
    SET_GPR_U32(ctx, 31, 0x1498B4u);
    ctx->pc = 0x1498B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1498ACu;
            // 0x1498b0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498B4u; }
        if (ctx->pc != 0x1498B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498B4u; }
        if (ctx->pc != 0x1498B4u) { return; }
    }
    ctx->pc = 0x1498B4u;
    // 0x1498b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1498b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498b8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1498B8u;
    SET_GPR_U32(ctx, 31, 0x1498C0u);
    ctx->pc = 0x1498BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1498B8u;
            // 0x1498bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498C0u; }
        if (ctx->pc != 0x1498C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498C0u; }
        if (ctx->pc != 0x1498C0u) { return; }
    }
    ctx->pc = 0x1498C0u;
    // 0x1498c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1498c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498c4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1498C4u;
    SET_GPR_U32(ctx, 31, 0x1498CCu);
    ctx->pc = 0x1498C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1498C4u;
            // 0x1498c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498CCu; }
        if (ctx->pc != 0x1498CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498CCu; }
        if (ctx->pc != 0x1498CCu) { return; }
    }
    ctx->pc = 0x1498CCu;
    // 0x1498cc: 0x26440110  addiu       $a0, $s2, 0x110
    ctx->pc = 0x1498ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x1498d0: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x1498d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x1498d4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1498D4u;
    SET_GPR_U32(ctx, 31, 0x1498DCu);
    ctx->pc = 0x1498D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1498D4u;
            // 0x1498d8: 0x26460160  addiu       $a2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498DCu; }
        if (ctx->pc != 0x1498DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498DCu; }
        if (ctx->pc != 0x1498DCu) { return; }
    }
    ctx->pc = 0x1498DCu;
    // 0x1498dc: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1498DCu;
    SET_GPR_U32(ctx, 31, 0x1498E4u);
    ctx->pc = 0x1498E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1498DCu;
            // 0x1498e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498E4u; }
        if (ctx->pc != 0x1498E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498E4u; }
        if (ctx->pc != 0x1498E4u) { return; }
    }
    ctx->pc = 0x1498E4u;
    // 0x1498e4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1498e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1498e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1498e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1498ec: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1498ECu;
    SET_GPR_U32(ctx, 31, 0x1498F4u);
    ctx->pc = 0x1498F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1498ECu;
            // 0x1498f0: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498F4u; }
        if (ctx->pc != 0x1498F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498F4u; }
        if (ctx->pc != 0x1498F4u) { return; }
    }
    ctx->pc = 0x1498F4u;
    // 0x1498f4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1498f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1498f8: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x1498f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1498fc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1498FCu;
    SET_GPR_U32(ctx, 31, 0x149904u);
    ctx->pc = 0x149900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1498FCu;
            // 0x149900: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149904u; }
        if (ctx->pc != 0x149904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149904u; }
        if (ctx->pc != 0x149904u) { return; }
    }
    ctx->pc = 0x149904u;
    // 0x149904: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149908: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x149908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14990c: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14990cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x149910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149914: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149918: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x149918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14991c: 0xc060614  jal         func_181850
    ctx->pc = 0x14991Cu;
    SET_GPR_U32(ctx, 31, 0x149924u);
    ctx->pc = 0x149920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14991Cu;
            // 0x149920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149924u; }
        if (ctx->pc != 0x149924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149924u; }
        if (ctx->pc != 0x149924u) { return; }
    }
    ctx->pc = 0x149924u;
    // 0x149924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149928: 0xc06060c  jal         func_181830
    ctx->pc = 0x149928u;
    SET_GPR_U32(ctx, 31, 0x149930u);
    ctx->pc = 0x14992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149928u;
            // 0x14992c: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149930u; }
        if (ctx->pc != 0x149930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149930u; }
        if (ctx->pc != 0x149930u) { return; }
    }
    ctx->pc = 0x149930u;
    // 0x149930: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x149930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x149934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149938: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14993c: 0xc060604  jal         func_181810
    ctx->pc = 0x14993Cu;
    SET_GPR_U32(ctx, 31, 0x149944u);
    ctx->pc = 0x149940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14993Cu;
            // 0x149940: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149944u; }
        if (ctx->pc != 0x149944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149944u; }
        if (ctx->pc != 0x149944u) { return; }
    }
    ctx->pc = 0x149944u;
    // 0x149944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14994c: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14994Cu;
    SET_GPR_U32(ctx, 31, 0x149954u);
    ctx->pc = 0x149950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14994Cu;
            // 0x149950: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149954u; }
        if (ctx->pc != 0x149954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149954u; }
        if (ctx->pc != 0x149954u) { return; }
    }
    ctx->pc = 0x149954u;
    // 0x149954: 0x8e440180  lw          $a0, 0x180($s2)
    ctx->pc = 0x149954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x149958: 0xc046376  jal         func_118DD8
    ctx->pc = 0x149958u;
    SET_GPR_U32(ctx, 31, 0x149960u);
    ctx->pc = 0x14995Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149958u;
            // 0x14995c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149960u; }
        if (ctx->pc != 0x149960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149960u; }
        if (ctx->pc != 0x149960u) { return; }
    }
    ctx->pc = 0x149960u;
    // 0x149960: 0xc0605cc  jal         func_181730
    ctx->pc = 0x149960u;
    SET_GPR_U32(ctx, 31, 0x149968u);
    ctx->pc = 0x149964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149960u;
            // 0x149964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149968u; }
        if (ctx->pc != 0x149968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149968u; }
        if (ctx->pc != 0x149968u) { return; }
    }
    ctx->pc = 0x149968u;
    // 0x149968: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x149968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14996c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14996cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x149970: 0x2a62000e  slti        $v0, $s3, 0xE
    ctx->pc = 0x149970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x149974: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x149974u;
    {
        const bool branch_taken_0x149974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149974u;
            // 0x149978: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149974) {
            ctx->pc = 0x149880u;
            goto label_149880;
        }
    }
    ctx->pc = 0x14997Cu;
    // 0x14997c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14997cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149980: 0x8c249738  lw          $a0, -0x68C8($at)
    ctx->pc = 0x149980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940472)));
    // 0x149984: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149988: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x149988u;
    SET_GPR_U32(ctx, 31, 0x149990u);
    ctx->pc = 0x14998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149988u;
            // 0x14998c: 0x8c259788  lw          $a1, -0x6878($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149990u; }
        if (ctx->pc != 0x149990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149990u; }
        if (ctx->pc != 0x149990u) { return; }
    }
    ctx->pc = 0x149990u;
    // 0x149990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149998: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149998u;
    SET_GPR_U32(ctx, 31, 0x1499A0u);
    ctx->pc = 0x14999Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149998u;
            // 0x14999c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499A0u; }
        if (ctx->pc != 0x1499A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499A0u; }
        if (ctx->pc != 0x1499A0u) { return; }
    }
    ctx->pc = 0x1499A0u;
    // 0x1499a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1499a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499a4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1499A4u;
    SET_GPR_U32(ctx, 31, 0x1499ACu);
    ctx->pc = 0x1499A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1499A4u;
            // 0x1499a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499ACu; }
        if (ctx->pc != 0x1499ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499ACu; }
        if (ctx->pc != 0x1499ACu) { return; }
    }
    ctx->pc = 0x1499ACu;
    // 0x1499ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1499acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499b0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1499B0u;
    SET_GPR_U32(ctx, 31, 0x1499B8u);
    ctx->pc = 0x1499B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1499B0u;
            // 0x1499b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499B8u; }
        if (ctx->pc != 0x1499B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499B8u; }
        if (ctx->pc != 0x1499B8u) { return; }
    }
    ctx->pc = 0x1499B8u;
    // 0x1499b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1499b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499bc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1499BCu;
    SET_GPR_U32(ctx, 31, 0x1499C4u);
    ctx->pc = 0x1499C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1499BCu;
            // 0x1499c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499C4u; }
        if (ctx->pc != 0x1499C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499C4u; }
        if (ctx->pc != 0x1499C4u) { return; }
    }
    ctx->pc = 0x1499C4u;
    // 0x1499c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1499c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499c8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1499C8u;
    SET_GPR_U32(ctx, 31, 0x1499D0u);
    ctx->pc = 0x1499CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1499C8u;
            // 0x1499cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499D0u; }
        if (ctx->pc != 0x1499D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499D0u; }
        if (ctx->pc != 0x1499D0u) { return; }
    }
    ctx->pc = 0x1499D0u;
    // 0x1499d0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1499d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1499d4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1499d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1499d8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1499D8u;
    SET_GPR_U32(ctx, 31, 0x1499E0u);
    ctx->pc = 0x1499DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1499D8u;
            // 0x1499dc: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499E0u; }
        if (ctx->pc != 0x1499E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499E0u; }
        if (ctx->pc != 0x1499E0u) { return; }
    }
    ctx->pc = 0x1499E0u;
    // 0x1499e0: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1499E0u;
    SET_GPR_U32(ctx, 31, 0x1499E8u);
    ctx->pc = 0x1499E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1499E0u;
            // 0x1499e4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499E8u; }
        if (ctx->pc != 0x1499E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499E8u; }
        if (ctx->pc != 0x1499E8u) { return; }
    }
    ctx->pc = 0x1499E8u;
    // 0x1499e8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1499e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1499ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1499ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1499f0: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1499F0u;
    SET_GPR_U32(ctx, 31, 0x1499F8u);
    ctx->pc = 0x1499F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1499F0u;
            // 0x1499f4: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499F8u; }
        if (ctx->pc != 0x1499F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499F8u; }
        if (ctx->pc != 0x1499F8u) { return; }
    }
    ctx->pc = 0x1499F8u;
    // 0x1499f8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1499f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1499fc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1499fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x149a00: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149A00u;
    SET_GPR_U32(ctx, 31, 0x149A08u);
    ctx->pc = 0x149A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A00u;
            // 0x149a04: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A08u; }
        if (ctx->pc != 0x149A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A08u; }
        if (ctx->pc != 0x149A08u) { return; }
    }
    ctx->pc = 0x149A08u;
    // 0x149a08: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149a0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x149a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a10: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x149a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x149a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a18: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149a1c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x149a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x149a20: 0xc060614  jal         func_181850
    ctx->pc = 0x149A20u;
    SET_GPR_U32(ctx, 31, 0x149A28u);
    ctx->pc = 0x149A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A20u;
            // 0x149a24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A28u; }
        if (ctx->pc != 0x149A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A28u; }
        if (ctx->pc != 0x149A28u) { return; }
    }
    ctx->pc = 0x149A28u;
    // 0x149a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a2c: 0xc06060c  jal         func_181830
    ctx->pc = 0x149A2Cu;
    SET_GPR_U32(ctx, 31, 0x149A34u);
    ctx->pc = 0x149A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A2Cu;
            // 0x149a30: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A34u; }
        if (ctx->pc != 0x149A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A34u; }
        if (ctx->pc != 0x149A34u) { return; }
    }
    ctx->pc = 0x149A34u;
    // 0x149a34: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x149a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x149a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149a40: 0xc060604  jal         func_181810
    ctx->pc = 0x149A40u;
    SET_GPR_U32(ctx, 31, 0x149A48u);
    ctx->pc = 0x149A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A40u;
            // 0x149a44: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A48u; }
        if (ctx->pc != 0x149A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A48u; }
        if (ctx->pc != 0x149A48u) { return; }
    }
    ctx->pc = 0x149A48u;
    // 0x149a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a50: 0xc0605dc  jal         func_181770
    ctx->pc = 0x149A50u;
    SET_GPR_U32(ctx, 31, 0x149A58u);
    ctx->pc = 0x149A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A50u;
            // 0x149a54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A58u; }
        if (ctx->pc != 0x149A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A58u; }
        if (ctx->pc != 0x149A58u) { return; }
    }
    ctx->pc = 0x149A58u;
    // 0x149a58: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x149a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x149a5c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x149A5Cu;
    SET_GPR_U32(ctx, 31, 0x149A64u);
    ctx->pc = 0x149A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A5Cu;
            // 0x149a60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A64u; }
        if (ctx->pc != 0x149A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A64u; }
        if (ctx->pc != 0x149A64u) { return; }
    }
    ctx->pc = 0x149A64u;
    // 0x149a64: 0xc0605cc  jal         func_181730
    ctx->pc = 0x149A64u;
    SET_GPR_U32(ctx, 31, 0x149A6Cu);
    ctx->pc = 0x149A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A64u;
            // 0x149a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A6Cu; }
        if (ctx->pc != 0x149A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A6Cu; }
        if (ctx->pc != 0x149A6Cu) { return; }
    }
    ctx->pc = 0x149A6Cu;
    // 0x149a6c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149a70: 0x8c24973c  lw          $a0, -0x68C4($at)
    ctx->pc = 0x149a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940476)));
    // 0x149a74: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149a78: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x149A78u;
    SET_GPR_U32(ctx, 31, 0x149A80u);
    ctx->pc = 0x149A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A78u;
            // 0x149a7c: 0x8c25978c  lw          $a1, -0x6874($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940556)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A80u; }
        if (ctx->pc != 0x149A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A80u; }
        if (ctx->pc != 0x149A80u) { return; }
    }
    ctx->pc = 0x149A80u;
    // 0x149a80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a88: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149A88u;
    SET_GPR_U32(ctx, 31, 0x149A90u);
    ctx->pc = 0x149A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A88u;
            // 0x149a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A90u; }
        if (ctx->pc != 0x149A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A90u; }
        if (ctx->pc != 0x149A90u) { return; }
    }
    ctx->pc = 0x149A90u;
    // 0x149a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a94: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149A94u;
    SET_GPR_U32(ctx, 31, 0x149A9Cu);
    ctx->pc = 0x149A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A94u;
            // 0x149a98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A9Cu; }
        if (ctx->pc != 0x149A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A9Cu; }
        if (ctx->pc != 0x149A9Cu) { return; }
    }
    ctx->pc = 0x149A9Cu;
    // 0x149a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149aa0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149AA0u;
    SET_GPR_U32(ctx, 31, 0x149AA8u);
    ctx->pc = 0x149AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149AA0u;
            // 0x149aa4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AA8u; }
        if (ctx->pc != 0x149AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AA8u; }
        if (ctx->pc != 0x149AA8u) { return; }
    }
    ctx->pc = 0x149AA8u;
    // 0x149aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149aac: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149AACu;
    SET_GPR_U32(ctx, 31, 0x149AB4u);
    ctx->pc = 0x149AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149AACu;
            // 0x149ab0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AB4u; }
        if (ctx->pc != 0x149AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AB4u; }
        if (ctx->pc != 0x149AB4u) { return; }
    }
    ctx->pc = 0x149AB4u;
    // 0x149ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ab8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149AB8u;
    SET_GPR_U32(ctx, 31, 0x149AC0u);
    ctx->pc = 0x149ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149AB8u;
            // 0x149abc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AC0u; }
        if (ctx->pc != 0x149AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AC0u; }
        if (ctx->pc != 0x149AC0u) { return; }
    }
    ctx->pc = 0x149AC0u;
    // 0x149ac0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x149ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x149ac4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x149ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x149ac8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x149AC8u;
    SET_GPR_U32(ctx, 31, 0x149AD0u);
    ctx->pc = 0x149ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149AC8u;
            // 0x149acc: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AD0u; }
        if (ctx->pc != 0x149AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AD0u; }
        if (ctx->pc != 0x149AD0u) { return; }
    }
    ctx->pc = 0x149AD0u;
    // 0x149ad0: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x149AD0u;
    SET_GPR_U32(ctx, 31, 0x149AD8u);
    ctx->pc = 0x149AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149AD0u;
            // 0x149ad4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AD8u; }
        if (ctx->pc != 0x149AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AD8u; }
        if (ctx->pc != 0x149AD8u) { return; }
    }
    ctx->pc = 0x149AD8u;
    // 0x149ad8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149adc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x149adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x149ae0: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x149AE0u;
    SET_GPR_U32(ctx, 31, 0x149AE8u);
    ctx->pc = 0x149AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149AE0u;
            // 0x149ae4: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AE8u; }
        if (ctx->pc != 0x149AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AE8u; }
        if (ctx->pc != 0x149AE8u) { return; }
    }
    ctx->pc = 0x149AE8u;
    // 0x149ae8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149aec: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x149aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x149af0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149AF0u;
    SET_GPR_U32(ctx, 31, 0x149AF8u);
    ctx->pc = 0x149AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149AF0u;
            // 0x149af4: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AF8u; }
        if (ctx->pc != 0x149AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AF8u; }
        if (ctx->pc != 0x149AF8u) { return; }
    }
    ctx->pc = 0x149AF8u;
    // 0x149af8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149afc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x149afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b00: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x149b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x149b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b08: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149b0c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x149b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x149b10: 0xc060614  jal         func_181850
    ctx->pc = 0x149B10u;
    SET_GPR_U32(ctx, 31, 0x149B18u);
    ctx->pc = 0x149B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B10u;
            // 0x149b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B18u; }
        if (ctx->pc != 0x149B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B18u; }
        if (ctx->pc != 0x149B18u) { return; }
    }
    ctx->pc = 0x149B18u;
    // 0x149b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b1c: 0xc06060c  jal         func_181830
    ctx->pc = 0x149B1Cu;
    SET_GPR_U32(ctx, 31, 0x149B24u);
    ctx->pc = 0x149B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B1Cu;
            // 0x149b20: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B24u; }
        if (ctx->pc != 0x149B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B24u; }
        if (ctx->pc != 0x149B24u) { return; }
    }
    ctx->pc = 0x149B24u;
    // 0x149b24: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x149b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x149b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149b30: 0xc060604  jal         func_181810
    ctx->pc = 0x149B30u;
    SET_GPR_U32(ctx, 31, 0x149B38u);
    ctx->pc = 0x149B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B30u;
            // 0x149b34: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B38u; }
        if (ctx->pc != 0x149B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B38u; }
        if (ctx->pc != 0x149B38u) { return; }
    }
    ctx->pc = 0x149B38u;
    // 0x149b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b40: 0xc0605dc  jal         func_181770
    ctx->pc = 0x149B40u;
    SET_GPR_U32(ctx, 31, 0x149B48u);
    ctx->pc = 0x149B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B40u;
            // 0x149b44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B48u; }
        if (ctx->pc != 0x149B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B48u; }
        if (ctx->pc != 0x149B48u) { return; }
    }
    ctx->pc = 0x149B48u;
    // 0x149b48: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x149b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x149b4c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x149B4Cu;
    SET_GPR_U32(ctx, 31, 0x149B54u);
    ctx->pc = 0x149B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B4Cu;
            // 0x149b50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B54u; }
        if (ctx->pc != 0x149B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B54u; }
        if (ctx->pc != 0x149B54u) { return; }
    }
    ctx->pc = 0x149B54u;
    // 0x149b54: 0xc0605cc  jal         func_181730
    ctx->pc = 0x149B54u;
    SET_GPR_U32(ctx, 31, 0x149B5Cu);
    ctx->pc = 0x149B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B54u;
            // 0x149b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B5Cu; }
        if (ctx->pc != 0x149B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B5Cu; }
        if (ctx->pc != 0x149B5Cu) { return; }
    }
    ctx->pc = 0x149B5Cu;
    // 0x149b5c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149b60: 0x8c249740  lw          $a0, -0x68C0($at)
    ctx->pc = 0x149b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940480)));
    // 0x149b64: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149b68: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x149B68u;
    SET_GPR_U32(ctx, 31, 0x149B70u);
    ctx->pc = 0x149B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B68u;
            // 0x149b6c: 0x8c259790  lw          $a1, -0x6870($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B70u; }
        if (ctx->pc != 0x149B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B70u; }
        if (ctx->pc != 0x149B70u) { return; }
    }
    ctx->pc = 0x149B70u;
    // 0x149b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b78: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149B78u;
    SET_GPR_U32(ctx, 31, 0x149B80u);
    ctx->pc = 0x149B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B78u;
            // 0x149b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B80u; }
        if (ctx->pc != 0x149B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B80u; }
        if (ctx->pc != 0x149B80u) { return; }
    }
    ctx->pc = 0x149B80u;
    // 0x149b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b84: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149B84u;
    SET_GPR_U32(ctx, 31, 0x149B8Cu);
    ctx->pc = 0x149B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B84u;
            // 0x149b88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B8Cu; }
        if (ctx->pc != 0x149B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B8Cu; }
        if (ctx->pc != 0x149B8Cu) { return; }
    }
    ctx->pc = 0x149B8Cu;
    // 0x149b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b90: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149B90u;
    SET_GPR_U32(ctx, 31, 0x149B98u);
    ctx->pc = 0x149B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B90u;
            // 0x149b94: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B98u; }
        if (ctx->pc != 0x149B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B98u; }
        if (ctx->pc != 0x149B98u) { return; }
    }
    ctx->pc = 0x149B98u;
    // 0x149b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149b9c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149B9Cu;
    SET_GPR_U32(ctx, 31, 0x149BA4u);
    ctx->pc = 0x149BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B9Cu;
            // 0x149ba0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BA4u; }
        if (ctx->pc != 0x149BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BA4u; }
        if (ctx->pc != 0x149BA4u) { return; }
    }
    ctx->pc = 0x149BA4u;
    // 0x149ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ba8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149BA8u;
    SET_GPR_U32(ctx, 31, 0x149BB0u);
    ctx->pc = 0x149BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149BA8u;
            // 0x149bac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BB0u; }
        if (ctx->pc != 0x149BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BB0u; }
        if (ctx->pc != 0x149BB0u) { return; }
    }
    ctx->pc = 0x149BB0u;
    // 0x149bb0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x149bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x149bb4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x149bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x149bb8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x149BB8u;
    SET_GPR_U32(ctx, 31, 0x149BC0u);
    ctx->pc = 0x149BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149BB8u;
            // 0x149bbc: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BC0u; }
        if (ctx->pc != 0x149BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BC0u; }
        if (ctx->pc != 0x149BC0u) { return; }
    }
    ctx->pc = 0x149BC0u;
    // 0x149bc0: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x149BC0u;
    SET_GPR_U32(ctx, 31, 0x149BC8u);
    ctx->pc = 0x149BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149BC0u;
            // 0x149bc4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BC8u; }
        if (ctx->pc != 0x149BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BC8u; }
        if (ctx->pc != 0x149BC8u) { return; }
    }
    ctx->pc = 0x149BC8u;
    // 0x149bc8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149bcc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x149bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x149bd0: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x149BD0u;
    SET_GPR_U32(ctx, 31, 0x149BD8u);
    ctx->pc = 0x149BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149BD0u;
            // 0x149bd4: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BD8u; }
        if (ctx->pc != 0x149BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BD8u; }
        if (ctx->pc != 0x149BD8u) { return; }
    }
    ctx->pc = 0x149BD8u;
    // 0x149bd8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149bdc: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x149bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x149be0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149BE0u;
    SET_GPR_U32(ctx, 31, 0x149BE8u);
    ctx->pc = 0x149BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149BE0u;
            // 0x149be4: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BE8u; }
        if (ctx->pc != 0x149BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149BE8u; }
        if (ctx->pc != 0x149BE8u) { return; }
    }
    ctx->pc = 0x149BE8u;
    // 0x149be8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149bec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x149becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149bf0: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x149bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x149bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149bf8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149bfc: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x149bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x149c00: 0xc060614  jal         func_181850
    ctx->pc = 0x149C00u;
    SET_GPR_U32(ctx, 31, 0x149C08u);
    ctx->pc = 0x149C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C00u;
            // 0x149c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C08u; }
        if (ctx->pc != 0x149C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C08u; }
        if (ctx->pc != 0x149C08u) { return; }
    }
    ctx->pc = 0x149C08u;
    // 0x149c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c0c: 0xc06060c  jal         func_181830
    ctx->pc = 0x149C0Cu;
    SET_GPR_U32(ctx, 31, 0x149C14u);
    ctx->pc = 0x149C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C0Cu;
            // 0x149c10: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C14u; }
        if (ctx->pc != 0x149C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C14u; }
        if (ctx->pc != 0x149C14u) { return; }
    }
    ctx->pc = 0x149C14u;
    // 0x149c14: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x149c14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x149c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149c20: 0xc060604  jal         func_181810
    ctx->pc = 0x149C20u;
    SET_GPR_U32(ctx, 31, 0x149C28u);
    ctx->pc = 0x149C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C20u;
            // 0x149c24: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C28u; }
        if (ctx->pc != 0x149C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C28u; }
        if (ctx->pc != 0x149C28u) { return; }
    }
    ctx->pc = 0x149C28u;
    // 0x149c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c30: 0xc0605dc  jal         func_181770
    ctx->pc = 0x149C30u;
    SET_GPR_U32(ctx, 31, 0x149C38u);
    ctx->pc = 0x149C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C30u;
            // 0x149c34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C38u; }
        if (ctx->pc != 0x149C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C38u; }
        if (ctx->pc != 0x149C38u) { return; }
    }
    ctx->pc = 0x149C38u;
    // 0x149c38: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x149c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x149c3c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x149C3Cu;
    SET_GPR_U32(ctx, 31, 0x149C44u);
    ctx->pc = 0x149C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C3Cu;
            // 0x149c40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C44u; }
        if (ctx->pc != 0x149C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C44u; }
        if (ctx->pc != 0x149C44u) { return; }
    }
    ctx->pc = 0x149C44u;
    // 0x149c44: 0xc0605cc  jal         func_181730
    ctx->pc = 0x149C44u;
    SET_GPR_U32(ctx, 31, 0x149C4Cu);
    ctx->pc = 0x149C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C44u;
            // 0x149c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C4Cu; }
        if (ctx->pc != 0x149C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C4Cu; }
        if (ctx->pc != 0x149C4Cu) { return; }
    }
    ctx->pc = 0x149C4Cu;
    // 0x149c4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x149c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149c60: 0x3e00008  jr          $ra
    ctx->pc = 0x149C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149C60u;
            // 0x149c64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149880u: goto label_149880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x149C68u;
}
