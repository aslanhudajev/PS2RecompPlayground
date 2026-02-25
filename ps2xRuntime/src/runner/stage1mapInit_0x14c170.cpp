#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage1mapInit
// Address: 0x14c170 - 0x14cc4c
void stage1mapInit_0x14c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage1mapInit_0x14c170");
#endif

    ctx->pc = 0x14c170u;

    // 0x14c170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c174: 0x2404007d  addiu       $a0, $zero, 0x7D
    ctx->pc = 0x14c174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x14c178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c17c: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x14c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x14c180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c184: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x14c184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c188: 0xc05c1d8  jal         func_170760
    ctx->pc = 0x14C188u;
    SET_GPR_U32(ctx, 31, 0x14C190u);
    ctx->pc = 0x14C18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C188u;
            // 0x14c18c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170760u;
    if (runtime->hasFunction(0x170760u)) {
        auto targetFn = runtime->lookupFunction(0x170760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C190u; }
        if (ctx->pc != 0x14C190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadClut2rom_0x170760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C190u; }
        if (ctx->pc != 0x14C190u) { return; }
    }
    ctx->pc = 0x14C190u;
    // 0x14c190: 0x2404007e  addiu       $a0, $zero, 0x7E
    ctx->pc = 0x14c190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x14c194: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x14c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x14c198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c19c: 0xc05c1d8  jal         func_170760
    ctx->pc = 0x14C19Cu;
    SET_GPR_U32(ctx, 31, 0x14C1A4u);
    ctx->pc = 0x14C1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C19Cu;
            // 0x14c1a0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170760u;
    if (runtime->hasFunction(0x170760u)) {
        auto targetFn = runtime->lookupFunction(0x170760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1A4u; }
        if (ctx->pc != 0x14C1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadClut2rom_0x170760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1A4u; }
        if (ctx->pc != 0x14C1A4u) { return; }
    }
    ctx->pc = 0x14C1A4u;
    // 0x14c1a4: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x14c1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x14c1a8: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x14c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x14c1ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1b0: 0xc05c1d8  jal         func_170760
    ctx->pc = 0x14C1B0u;
    SET_GPR_U32(ctx, 31, 0x14C1B8u);
    ctx->pc = 0x14C1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1B0u;
            // 0x14c1b4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170760u;
    if (runtime->hasFunction(0x170760u)) {
        auto targetFn = runtime->lookupFunction(0x170760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1B8u; }
        if (ctx->pc != 0x14C1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadClut2rom_0x170760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1B8u; }
        if (ctx->pc != 0x14C1B8u) { return; }
    }
    ctx->pc = 0x14C1B8u;
    // 0x14c1b8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14c1bc: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x14c1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x14c1c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1c4: 0xc05c1d8  jal         func_170760
    ctx->pc = 0x14C1C4u;
    SET_GPR_U32(ctx, 31, 0x14C1CCu);
    ctx->pc = 0x14C1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1C4u;
            // 0x14c1c8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170760u;
    if (runtime->hasFunction(0x170760u)) {
        auto targetFn = runtime->lookupFunction(0x170760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1CCu; }
        if (ctx->pc != 0x14C1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadClut2rom_0x170760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1CCu; }
        if (ctx->pc != 0x14C1CCu) { return; }
    }
    ctx->pc = 0x14C1CCu;
    // 0x14c1cc: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x14c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x14c1d0: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x14c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x14c1d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1d8: 0xc05c1d8  jal         func_170760
    ctx->pc = 0x14C1D8u;
    SET_GPR_U32(ctx, 31, 0x14C1E0u);
    ctx->pc = 0x14C1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1D8u;
            // 0x14c1dc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170760u;
    if (runtime->hasFunction(0x170760u)) {
        auto targetFn = runtime->lookupFunction(0x170760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1E0u; }
        if (ctx->pc != 0x14C1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadClut2rom_0x170760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1E0u; }
        if (ctx->pc != 0x14C1E0u) { return; }
    }
    ctx->pc = 0x14C1E0u;
    // 0x14c1e0: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x14c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x14c1e4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x14c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14c1e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1ec: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14C1ECu;
    SET_GPR_U32(ctx, 31, 0x14C1F4u);
    ctx->pc = 0x14C1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1ECu;
            // 0x14c1f0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1F4u; }
        if (ctx->pc != 0x14C1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1F4u; }
        if (ctx->pc != 0x14C1F4u) { return; }
    }
    ctx->pc = 0x14C1F4u;
    // 0x14c1f4: 0x24040082  addiu       $a0, $zero, 0x82
    ctx->pc = 0x14c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x14c1f8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x14c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14c1fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c200: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14C200u;
    SET_GPR_U32(ctx, 31, 0x14C208u);
    ctx->pc = 0x14C204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C200u;
            // 0x14c204: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C208u; }
        if (ctx->pc != 0x14C208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C208u; }
        if (ctx->pc != 0x14C208u) { return; }
    }
    ctx->pc = 0x14C208u;
    // 0x14c208: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x14c208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x14c20c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x14c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14c210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c214: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14C214u;
    SET_GPR_U32(ctx, 31, 0x14C21Cu);
    ctx->pc = 0x14C218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C214u;
            // 0x14c218: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C21Cu; }
        if (ctx->pc != 0x14C21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C21Cu; }
        if (ctx->pc != 0x14C21Cu) { return; }
    }
    ctx->pc = 0x14C21Cu;
    // 0x14c21c: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x14c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x14c220: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x14c220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14c224: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c228: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14C228u;
    SET_GPR_U32(ctx, 31, 0x14C230u);
    ctx->pc = 0x14C22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C228u;
            // 0x14c22c: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C230u; }
        if (ctx->pc != 0x14C230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C230u; }
        if (ctx->pc != 0x14C230u) { return; }
    }
    ctx->pc = 0x14C230u;
    // 0x14c230: 0x2404007b  addiu       $a0, $zero, 0x7B
    ctx->pc = 0x14c230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x14c234: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x14c234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x14c238: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c23c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14C23Cu;
    SET_GPR_U32(ctx, 31, 0x14C244u);
    ctx->pc = 0x14C240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C23Cu;
            // 0x14c240: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C244u; }
        if (ctx->pc != 0x14C244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C244u; }
        if (ctx->pc != 0x14C244u) { return; }
    }
    ctx->pc = 0x14C244u;
    // 0x14c244: 0x2404006e  addiu       $a0, $zero, 0x6E
    ctx->pc = 0x14c244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x14c248: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14C248u;
    SET_GPR_U32(ctx, 31, 0x14C250u);
    ctx->pc = 0x14C24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C248u;
            // 0x14c24c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C250u; }
        if (ctx->pc != 0x14C250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C250u; }
        if (ctx->pc != 0x14C250u) { return; }
    }
    ctx->pc = 0x14C250u;
    // 0x14c250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c258: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C258u;
    SET_GPR_U32(ctx, 31, 0x14C260u);
    ctx->pc = 0x14C25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C258u;
            // 0x14c25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C260u; }
        if (ctx->pc != 0x14C260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C260u; }
        if (ctx->pc != 0x14C260u) { return; }
    }
    ctx->pc = 0x14C260u;
    // 0x14c260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c264: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C264u;
    SET_GPR_U32(ctx, 31, 0x14C26Cu);
    ctx->pc = 0x14C268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C264u;
            // 0x14c268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C26Cu; }
        if (ctx->pc != 0x14C26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C26Cu; }
        if (ctx->pc != 0x14C26Cu) { return; }
    }
    ctx->pc = 0x14C26Cu;
    // 0x14c26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c270: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C270u;
    SET_GPR_U32(ctx, 31, 0x14C278u);
    ctx->pc = 0x14C274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C270u;
            // 0x14c274: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C278u; }
        if (ctx->pc != 0x14C278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C278u; }
        if (ctx->pc != 0x14C278u) { return; }
    }
    ctx->pc = 0x14C278u;
    // 0x14c278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c27c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C27Cu;
    SET_GPR_U32(ctx, 31, 0x14C284u);
    ctx->pc = 0x14C280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C27Cu;
            // 0x14c280: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C284u; }
        if (ctx->pc != 0x14C284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C284u; }
        if (ctx->pc != 0x14C284u) { return; }
    }
    ctx->pc = 0x14C284u;
    // 0x14c284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c288: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C288u;
    SET_GPR_U32(ctx, 31, 0x14C290u);
    ctx->pc = 0x14C28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C288u;
            // 0x14c28c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C290u; }
        if (ctx->pc != 0x14C290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C290u; }
        if (ctx->pc != 0x14C290u) { return; }
    }
    ctx->pc = 0x14C290u;
    // 0x14c290: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14c290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14c294: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14c294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14c298: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14C298u;
    SET_GPR_U32(ctx, 31, 0x14C2A0u);
    ctx->pc = 0x14C29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C298u;
            // 0x14c29c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2A0u; }
        if (ctx->pc != 0x14C2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2A0u; }
        if (ctx->pc != 0x14C2A0u) { return; }
    }
    ctx->pc = 0x14C2A0u;
    // 0x14c2a0: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14C2A0u;
    SET_GPR_U32(ctx, 31, 0x14C2A8u);
    ctx->pc = 0x14C2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2A0u;
            // 0x14c2a4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2A8u; }
        if (ctx->pc != 0x14C2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2A8u; }
        if (ctx->pc != 0x14C2A8u) { return; }
    }
    ctx->pc = 0x14C2A8u;
    // 0x14c2a8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c2ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14c2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c2b0: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14C2B0u;
    SET_GPR_U32(ctx, 31, 0x14C2B8u);
    ctx->pc = 0x14C2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2B0u;
            // 0x14c2b4: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2B8u; }
        if (ctx->pc != 0x14C2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2B8u; }
        if (ctx->pc != 0x14C2B8u) { return; }
    }
    ctx->pc = 0x14C2B8u;
    // 0x14c2b8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c2bc: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14c2c0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C2C0u;
    SET_GPR_U32(ctx, 31, 0x14C2C8u);
    ctx->pc = 0x14C2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2C0u;
            // 0x14c2c4: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2C8u; }
        if (ctx->pc != 0x14C2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2C8u; }
        if (ctx->pc != 0x14C2C8u) { return; }
    }
    ctx->pc = 0x14C2C8u;
    // 0x14c2c8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c2cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14c2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2d0: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14c2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14c2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2d8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c2dc: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14c2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14c2e0: 0xc060614  jal         func_181850
    ctx->pc = 0x14C2E0u;
    SET_GPR_U32(ctx, 31, 0x14C2E8u);
    ctx->pc = 0x14C2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2E0u;
            // 0x14c2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2E8u; }
        if (ctx->pc != 0x14C2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2E8u; }
        if (ctx->pc != 0x14C2E8u) { return; }
    }
    ctx->pc = 0x14C2E8u;
    // 0x14c2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2ec: 0xc06060c  jal         func_181830
    ctx->pc = 0x14C2ECu;
    SET_GPR_U32(ctx, 31, 0x14C2F4u);
    ctx->pc = 0x14C2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2ECu;
            // 0x14c2f0: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2F4u; }
        if (ctx->pc != 0x14C2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C2F4u; }
        if (ctx->pc != 0x14C2F4u) { return; }
    }
    ctx->pc = 0x14C2F4u;
    // 0x14c2f4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14c2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14c2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c300: 0xc060604  jal         func_181810
    ctx->pc = 0x14C300u;
    SET_GPR_U32(ctx, 31, 0x14C308u);
    ctx->pc = 0x14C304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C300u;
            // 0x14c304: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C308u; }
        if (ctx->pc != 0x14C308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C308u; }
        if (ctx->pc != 0x14C308u) { return; }
    }
    ctx->pc = 0x14C308u;
    // 0x14c308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c30c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c310: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14C310u;
    SET_GPR_U32(ctx, 31, 0x14C318u);
    ctx->pc = 0x14C314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C310u;
            // 0x14c314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C318u; }
        if (ctx->pc != 0x14C318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C318u; }
        if (ctx->pc != 0x14C318u) { return; }
    }
    ctx->pc = 0x14C318u;
    // 0x14c318: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14c318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14c31c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14C31Cu;
    SET_GPR_U32(ctx, 31, 0x14C324u);
    ctx->pc = 0x14C320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C31Cu;
            // 0x14c320: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C324u; }
        if (ctx->pc != 0x14C324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C324u; }
        if (ctx->pc != 0x14C324u) { return; }
    }
    ctx->pc = 0x14C324u;
    // 0x14c324: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14C324u;
    SET_GPR_U32(ctx, 31, 0x14C32Cu);
    ctx->pc = 0x14C328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C324u;
            // 0x14c328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C32Cu; }
        if (ctx->pc != 0x14C32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C32Cu; }
        if (ctx->pc != 0x14C32Cu) { return; }
    }
    ctx->pc = 0x14C32Cu;
    // 0x14c32c: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x14c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x14c330: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14C330u;
    SET_GPR_U32(ctx, 31, 0x14C338u);
    ctx->pc = 0x14C334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C330u;
            // 0x14c334: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C338u; }
        if (ctx->pc != 0x14C338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C338u; }
        if (ctx->pc != 0x14C338u) { return; }
    }
    ctx->pc = 0x14C338u;
    // 0x14c338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c33c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c340: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C340u;
    SET_GPR_U32(ctx, 31, 0x14C348u);
    ctx->pc = 0x14C344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C340u;
            // 0x14c344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C348u; }
        if (ctx->pc != 0x14C348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C348u; }
        if (ctx->pc != 0x14C348u) { return; }
    }
    ctx->pc = 0x14C348u;
    // 0x14c348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c34c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C34Cu;
    SET_GPR_U32(ctx, 31, 0x14C354u);
    ctx->pc = 0x14C350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C34Cu;
            // 0x14c350: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C354u; }
        if (ctx->pc != 0x14C354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C354u; }
        if (ctx->pc != 0x14C354u) { return; }
    }
    ctx->pc = 0x14C354u;
    // 0x14c354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c358: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C358u;
    SET_GPR_U32(ctx, 31, 0x14C360u);
    ctx->pc = 0x14C35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C358u;
            // 0x14c35c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C360u; }
        if (ctx->pc != 0x14C360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C360u; }
        if (ctx->pc != 0x14C360u) { return; }
    }
    ctx->pc = 0x14C360u;
    // 0x14c360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c364: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C364u;
    SET_GPR_U32(ctx, 31, 0x14C36Cu);
    ctx->pc = 0x14C368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C364u;
            // 0x14c368: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C36Cu; }
        if (ctx->pc != 0x14C36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C36Cu; }
        if (ctx->pc != 0x14C36Cu) { return; }
    }
    ctx->pc = 0x14C36Cu;
    // 0x14c36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c370: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C370u;
    SET_GPR_U32(ctx, 31, 0x14C378u);
    ctx->pc = 0x14C374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C370u;
            // 0x14c374: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C378u; }
        if (ctx->pc != 0x14C378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C378u; }
        if (ctx->pc != 0x14C378u) { return; }
    }
    ctx->pc = 0x14C378u;
    // 0x14c378: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14c378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14c37c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14c380: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14C380u;
    SET_GPR_U32(ctx, 31, 0x14C388u);
    ctx->pc = 0x14C384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C380u;
            // 0x14c384: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C388u; }
        if (ctx->pc != 0x14C388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C388u; }
        if (ctx->pc != 0x14C388u) { return; }
    }
    ctx->pc = 0x14C388u;
    // 0x14c388: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14C388u;
    SET_GPR_U32(ctx, 31, 0x14C390u);
    ctx->pc = 0x14C38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C388u;
            // 0x14c38c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C390u; }
        if (ctx->pc != 0x14C390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C390u; }
        if (ctx->pc != 0x14C390u) { return; }
    }
    ctx->pc = 0x14C390u;
    // 0x14c390: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c394: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14c394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c398: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14C398u;
    SET_GPR_U32(ctx, 31, 0x14C3A0u);
    ctx->pc = 0x14C39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C398u;
            // 0x14c39c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C3A0u; }
        if (ctx->pc != 0x14C3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C3A0u; }
        if (ctx->pc != 0x14C3A0u) { return; }
    }
    ctx->pc = 0x14C3A0u;
    // 0x14c3a0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c3a4: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14c3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14c3a8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C3A8u;
    SET_GPR_U32(ctx, 31, 0x14C3B0u);
    ctx->pc = 0x14C3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3A8u;
            // 0x14c3ac: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C3B0u; }
        if (ctx->pc != 0x14C3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C3B0u; }
        if (ctx->pc != 0x14C3B0u) { return; }
    }
    ctx->pc = 0x14C3B0u;
    // 0x14c3b0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c3b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14c3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3b8: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14c3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14c3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3c0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c3c4: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14c3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14c3c8: 0xc060614  jal         func_181850
    ctx->pc = 0x14C3C8u;
    SET_GPR_U32(ctx, 31, 0x14C3D0u);
    ctx->pc = 0x14C3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3C8u;
            // 0x14c3cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C3D0u; }
        if (ctx->pc != 0x14C3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C3D0u; }
        if (ctx->pc != 0x14C3D0u) { return; }
    }
    ctx->pc = 0x14C3D0u;
    // 0x14c3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3d4: 0xc06060c  jal         func_181830
    ctx->pc = 0x14C3D4u;
    SET_GPR_U32(ctx, 31, 0x14C3DCu);
    ctx->pc = 0x14C3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3D4u;
            // 0x14c3d8: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C3DCu; }
        if (ctx->pc != 0x14C3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C3DCu; }
        if (ctx->pc != 0x14C3DCu) { return; }
    }
    ctx->pc = 0x14C3DCu;
    // 0x14c3dc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14c3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14c3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c3e8: 0xc060604  jal         func_181810
    ctx->pc = 0x14C3E8u;
    SET_GPR_U32(ctx, 31, 0x14C3F0u);
    ctx->pc = 0x14C3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3E8u;
            // 0x14c3ec: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C3F0u; }
        if (ctx->pc != 0x14C3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C3F0u; }
        if (ctx->pc != 0x14C3F0u) { return; }
    }
    ctx->pc = 0x14C3F0u;
    // 0x14c3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3f8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14C3F8u;
    SET_GPR_U32(ctx, 31, 0x14C400u);
    ctx->pc = 0x14C3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3F8u;
            // 0x14c3fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C400u; }
        if (ctx->pc != 0x14C400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C400u; }
        if (ctx->pc != 0x14C400u) { return; }
    }
    ctx->pc = 0x14C400u;
    // 0x14c400: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14c400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14c404: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14C404u;
    SET_GPR_U32(ctx, 31, 0x14C40Cu);
    ctx->pc = 0x14C408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C404u;
            // 0x14c408: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C40Cu; }
        if (ctx->pc != 0x14C40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C40Cu; }
        if (ctx->pc != 0x14C40Cu) { return; }
    }
    ctx->pc = 0x14C40Cu;
    // 0x14c40c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14C40Cu;
    SET_GPR_U32(ctx, 31, 0x14C414u);
    ctx->pc = 0x14C410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C40Cu;
            // 0x14c410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C414u; }
        if (ctx->pc != 0x14C414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C414u; }
        if (ctx->pc != 0x14C414u) { return; }
    }
    ctx->pc = 0x14C414u;
    // 0x14c414: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x14c414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x14c418: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14C418u;
    SET_GPR_U32(ctx, 31, 0x14C420u);
    ctx->pc = 0x14C41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C418u;
            // 0x14c41c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C420u; }
        if (ctx->pc != 0x14C420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C420u; }
        if (ctx->pc != 0x14C420u) { return; }
    }
    ctx->pc = 0x14C420u;
    // 0x14c420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c428: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C428u;
    SET_GPR_U32(ctx, 31, 0x14C430u);
    ctx->pc = 0x14C42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C428u;
            // 0x14c42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C430u; }
        if (ctx->pc != 0x14C430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C430u; }
        if (ctx->pc != 0x14C430u) { return; }
    }
    ctx->pc = 0x14C430u;
    // 0x14c430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c434: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C434u;
    SET_GPR_U32(ctx, 31, 0x14C43Cu);
    ctx->pc = 0x14C438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C434u;
            // 0x14c438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C43Cu; }
        if (ctx->pc != 0x14C43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C43Cu; }
        if (ctx->pc != 0x14C43Cu) { return; }
    }
    ctx->pc = 0x14C43Cu;
    // 0x14c43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c440: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C440u;
    SET_GPR_U32(ctx, 31, 0x14C448u);
    ctx->pc = 0x14C444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C440u;
            // 0x14c444: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C448u; }
        if (ctx->pc != 0x14C448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C448u; }
        if (ctx->pc != 0x14C448u) { return; }
    }
    ctx->pc = 0x14C448u;
    // 0x14c448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c44c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C44Cu;
    SET_GPR_U32(ctx, 31, 0x14C454u);
    ctx->pc = 0x14C450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C44Cu;
            // 0x14c450: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C454u; }
        if (ctx->pc != 0x14C454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C454u; }
        if (ctx->pc != 0x14C454u) { return; }
    }
    ctx->pc = 0x14C454u;
    // 0x14c454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c458: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C458u;
    SET_GPR_U32(ctx, 31, 0x14C460u);
    ctx->pc = 0x14C45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C458u;
            // 0x14c45c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C460u; }
        if (ctx->pc != 0x14C460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C460u; }
        if (ctx->pc != 0x14C460u) { return; }
    }
    ctx->pc = 0x14C460u;
    // 0x14c460: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14c460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14c464: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14c464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14c468: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14C468u;
    SET_GPR_U32(ctx, 31, 0x14C470u);
    ctx->pc = 0x14C46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C468u;
            // 0x14c46c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C470u; }
        if (ctx->pc != 0x14C470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C470u; }
        if (ctx->pc != 0x14C470u) { return; }
    }
    ctx->pc = 0x14C470u;
    // 0x14c470: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14C470u;
    SET_GPR_U32(ctx, 31, 0x14C478u);
    ctx->pc = 0x14C474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C470u;
            // 0x14c474: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C478u; }
        if (ctx->pc != 0x14C478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C478u; }
        if (ctx->pc != 0x14C478u) { return; }
    }
    ctx->pc = 0x14C478u;
    // 0x14c478: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c47c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c480: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14C480u;
    SET_GPR_U32(ctx, 31, 0x14C488u);
    ctx->pc = 0x14C484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C480u;
            // 0x14c484: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C488u; }
        if (ctx->pc != 0x14C488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C488u; }
        if (ctx->pc != 0x14C488u) { return; }
    }
    ctx->pc = 0x14C488u;
    // 0x14c488: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c48c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x14c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14c490: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C490u;
    SET_GPR_U32(ctx, 31, 0x14C498u);
    ctx->pc = 0x14C494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C490u;
            // 0x14c494: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C498u; }
        if (ctx->pc != 0x14C498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C498u; }
        if (ctx->pc != 0x14C498u) { return; }
    }
    ctx->pc = 0x14C498u;
    // 0x14c498: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c49c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14c49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4a0: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14c4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14c4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4a8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c4ac: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14c4acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14c4b0: 0xc060614  jal         func_181850
    ctx->pc = 0x14C4B0u;
    SET_GPR_U32(ctx, 31, 0x14C4B8u);
    ctx->pc = 0x14C4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4B0u;
            // 0x14c4b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4B8u; }
        if (ctx->pc != 0x14C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4B8u; }
        if (ctx->pc != 0x14C4B8u) { return; }
    }
    ctx->pc = 0x14C4B8u;
    // 0x14c4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4bc: 0xc06060c  jal         func_181830
    ctx->pc = 0x14C4BCu;
    SET_GPR_U32(ctx, 31, 0x14C4C4u);
    ctx->pc = 0x14C4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4BCu;
            // 0x14c4c0: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4C4u; }
        if (ctx->pc != 0x14C4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4C4u; }
        if (ctx->pc != 0x14C4C4u) { return; }
    }
    ctx->pc = 0x14C4C4u;
    // 0x14c4c4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14c4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14c4c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c4d0: 0xc060604  jal         func_181810
    ctx->pc = 0x14C4D0u;
    SET_GPR_U32(ctx, 31, 0x14C4D8u);
    ctx->pc = 0x14C4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4D0u;
            // 0x14c4d4: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4D8u; }
        if (ctx->pc != 0x14C4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4D8u; }
        if (ctx->pc != 0x14C4D8u) { return; }
    }
    ctx->pc = 0x14C4D8u;
    // 0x14c4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4e0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14C4E0u;
    SET_GPR_U32(ctx, 31, 0x14C4E8u);
    ctx->pc = 0x14C4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4E0u;
            // 0x14c4e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4E8u; }
        if (ctx->pc != 0x14C4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4E8u; }
        if (ctx->pc != 0x14C4E8u) { return; }
    }
    ctx->pc = 0x14C4E8u;
    // 0x14c4e8: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14c4ec: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14C4ECu;
    SET_GPR_U32(ctx, 31, 0x14C4F4u);
    ctx->pc = 0x14C4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4ECu;
            // 0x14c4f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4F4u; }
        if (ctx->pc != 0x14C4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4F4u; }
        if (ctx->pc != 0x14C4F4u) { return; }
    }
    ctx->pc = 0x14C4F4u;
    // 0x14c4f4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14C4F4u;
    SET_GPR_U32(ctx, 31, 0x14C4FCu);
    ctx->pc = 0x14C4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4F4u;
            // 0x14c4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4FCu; }
        if (ctx->pc != 0x14C4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4FCu; }
        if (ctx->pc != 0x14C4FCu) { return; }
    }
    ctx->pc = 0x14C4FCu;
    // 0x14c4fc: 0x24040071  addiu       $a0, $zero, 0x71
    ctx->pc = 0x14c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x14c500: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14C500u;
    SET_GPR_U32(ctx, 31, 0x14C508u);
    ctx->pc = 0x14C504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C500u;
            // 0x14c504: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C508u; }
        if (ctx->pc != 0x14C508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C508u; }
        if (ctx->pc != 0x14C508u) { return; }
    }
    ctx->pc = 0x14C508u;
    // 0x14c508: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c50c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c510: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C510u;
    SET_GPR_U32(ctx, 31, 0x14C518u);
    ctx->pc = 0x14C514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C510u;
            // 0x14c514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C518u; }
        if (ctx->pc != 0x14C518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C518u; }
        if (ctx->pc != 0x14C518u) { return; }
    }
    ctx->pc = 0x14C518u;
    // 0x14c518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c51c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C51Cu;
    SET_GPR_U32(ctx, 31, 0x14C524u);
    ctx->pc = 0x14C520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C51Cu;
            // 0x14c520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C524u; }
        if (ctx->pc != 0x14C524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C524u; }
        if (ctx->pc != 0x14C524u) { return; }
    }
    ctx->pc = 0x14C524u;
    // 0x14c524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c528: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C528u;
    SET_GPR_U32(ctx, 31, 0x14C530u);
    ctx->pc = 0x14C52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C528u;
            // 0x14c52c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C530u; }
        if (ctx->pc != 0x14C530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C530u; }
        if (ctx->pc != 0x14C530u) { return; }
    }
    ctx->pc = 0x14C530u;
    // 0x14c530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c534: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C534u;
    SET_GPR_U32(ctx, 31, 0x14C53Cu);
    ctx->pc = 0x14C538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C534u;
            // 0x14c538: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C53Cu; }
        if (ctx->pc != 0x14C53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C53Cu; }
        if (ctx->pc != 0x14C53Cu) { return; }
    }
    ctx->pc = 0x14C53Cu;
    // 0x14c53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c540: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C540u;
    SET_GPR_U32(ctx, 31, 0x14C548u);
    ctx->pc = 0x14C544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C540u;
            // 0x14c544: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C548u; }
        if (ctx->pc != 0x14C548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C548u; }
        if (ctx->pc != 0x14C548u) { return; }
    }
    ctx->pc = 0x14C548u;
    // 0x14c548: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14c54c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14c550: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14C550u;
    SET_GPR_U32(ctx, 31, 0x14C558u);
    ctx->pc = 0x14C554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C550u;
            // 0x14c554: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C558u; }
        if (ctx->pc != 0x14C558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C558u; }
        if (ctx->pc != 0x14C558u) { return; }
    }
    ctx->pc = 0x14C558u;
    // 0x14c558: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14C558u;
    SET_GPR_U32(ctx, 31, 0x14C560u);
    ctx->pc = 0x14C55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C558u;
            // 0x14c55c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C560u; }
        if (ctx->pc != 0x14C560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C560u; }
        if (ctx->pc != 0x14C560u) { return; }
    }
    ctx->pc = 0x14C560u;
    // 0x14c560: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c564: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14c564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c568: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14C568u;
    SET_GPR_U32(ctx, 31, 0x14C570u);
    ctx->pc = 0x14C56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C568u;
            // 0x14c56c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C570u; }
        if (ctx->pc != 0x14C570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C570u; }
        if (ctx->pc != 0x14C570u) { return; }
    }
    ctx->pc = 0x14C570u;
    // 0x14c570: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c574: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x14c574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14c578: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C578u;
    SET_GPR_U32(ctx, 31, 0x14C580u);
    ctx->pc = 0x14C57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C578u;
            // 0x14c57c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C580u; }
        if (ctx->pc != 0x14C580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C580u; }
        if (ctx->pc != 0x14C580u) { return; }
    }
    ctx->pc = 0x14C580u;
    // 0x14c580: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c584: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14c584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c588: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14c588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14c58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c590: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c594: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14c594u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14c598: 0xc060614  jal         func_181850
    ctx->pc = 0x14C598u;
    SET_GPR_U32(ctx, 31, 0x14C5A0u);
    ctx->pc = 0x14C59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C598u;
            // 0x14c59c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5A0u; }
        if (ctx->pc != 0x14C5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5A0u; }
        if (ctx->pc != 0x14C5A0u) { return; }
    }
    ctx->pc = 0x14C5A0u;
    // 0x14c5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5a4: 0xc06060c  jal         func_181830
    ctx->pc = 0x14C5A4u;
    SET_GPR_U32(ctx, 31, 0x14C5ACu);
    ctx->pc = 0x14C5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C5A4u;
            // 0x14c5a8: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5ACu; }
        if (ctx->pc != 0x14C5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5ACu; }
        if (ctx->pc != 0x14C5ACu) { return; }
    }
    ctx->pc = 0x14C5ACu;
    // 0x14c5ac: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14c5acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14c5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c5b8: 0xc060604  jal         func_181810
    ctx->pc = 0x14C5B8u;
    SET_GPR_U32(ctx, 31, 0x14C5C0u);
    ctx->pc = 0x14C5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C5B8u;
            // 0x14c5bc: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5C0u; }
        if (ctx->pc != 0x14C5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5C0u; }
        if (ctx->pc != 0x14C5C0u) { return; }
    }
    ctx->pc = 0x14C5C0u;
    // 0x14c5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5c8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14C5C8u;
    SET_GPR_U32(ctx, 31, 0x14C5D0u);
    ctx->pc = 0x14C5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C5C8u;
            // 0x14c5cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5D0u; }
        if (ctx->pc != 0x14C5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5D0u; }
        if (ctx->pc != 0x14C5D0u) { return; }
    }
    ctx->pc = 0x14C5D0u;
    // 0x14c5d0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14c5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14c5d4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14C5D4u;
    SET_GPR_U32(ctx, 31, 0x14C5DCu);
    ctx->pc = 0x14C5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C5D4u;
            // 0x14c5d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5DCu; }
        if (ctx->pc != 0x14C5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5DCu; }
        if (ctx->pc != 0x14C5DCu) { return; }
    }
    ctx->pc = 0x14C5DCu;
    // 0x14c5dc: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14C5DCu;
    SET_GPR_U32(ctx, 31, 0x14C5E4u);
    ctx->pc = 0x14C5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C5DCu;
            // 0x14c5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5E4u; }
        if (ctx->pc != 0x14C5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5E4u; }
        if (ctx->pc != 0x14C5E4u) { return; }
    }
    ctx->pc = 0x14C5E4u;
    // 0x14c5e4: 0x24040072  addiu       $a0, $zero, 0x72
    ctx->pc = 0x14c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x14c5e8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14C5E8u;
    SET_GPR_U32(ctx, 31, 0x14C5F0u);
    ctx->pc = 0x14C5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C5E8u;
            // 0x14c5ec: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5F0u; }
        if (ctx->pc != 0x14C5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5F0u; }
        if (ctx->pc != 0x14C5F0u) { return; }
    }
    ctx->pc = 0x14C5F0u;
    // 0x14c5f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c5f8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C5F8u;
    SET_GPR_U32(ctx, 31, 0x14C600u);
    ctx->pc = 0x14C5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C5F8u;
            // 0x14c5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C600u; }
        if (ctx->pc != 0x14C600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C600u; }
        if (ctx->pc != 0x14C600u) { return; }
    }
    ctx->pc = 0x14C600u;
    // 0x14c600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c604: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C604u;
    SET_GPR_U32(ctx, 31, 0x14C60Cu);
    ctx->pc = 0x14C608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C604u;
            // 0x14c608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C60Cu; }
        if (ctx->pc != 0x14C60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C60Cu; }
        if (ctx->pc != 0x14C60Cu) { return; }
    }
    ctx->pc = 0x14C60Cu;
    // 0x14c60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c610: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C610u;
    SET_GPR_U32(ctx, 31, 0x14C618u);
    ctx->pc = 0x14C614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C610u;
            // 0x14c614: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C618u; }
        if (ctx->pc != 0x14C618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C618u; }
        if (ctx->pc != 0x14C618u) { return; }
    }
    ctx->pc = 0x14C618u;
    // 0x14c618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c61c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C61Cu;
    SET_GPR_U32(ctx, 31, 0x14C624u);
    ctx->pc = 0x14C620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C61Cu;
            // 0x14c620: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C624u; }
        if (ctx->pc != 0x14C624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C624u; }
        if (ctx->pc != 0x14C624u) { return; }
    }
    ctx->pc = 0x14C624u;
    // 0x14c624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c628: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C628u;
    SET_GPR_U32(ctx, 31, 0x14C630u);
    ctx->pc = 0x14C62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C628u;
            // 0x14c62c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C630u; }
        if (ctx->pc != 0x14C630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C630u; }
        if (ctx->pc != 0x14C630u) { return; }
    }
    ctx->pc = 0x14C630u;
    // 0x14c630: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14c630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14c634: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14c634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14c638: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14C638u;
    SET_GPR_U32(ctx, 31, 0x14C640u);
    ctx->pc = 0x14C63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C638u;
            // 0x14c63c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C640u; }
        if (ctx->pc != 0x14C640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C640u; }
        if (ctx->pc != 0x14C640u) { return; }
    }
    ctx->pc = 0x14C640u;
    // 0x14c640: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14C640u;
    SET_GPR_U32(ctx, 31, 0x14C648u);
    ctx->pc = 0x14C644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C640u;
            // 0x14c644: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C648u; }
        if (ctx->pc != 0x14C648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C648u; }
        if (ctx->pc != 0x14C648u) { return; }
    }
    ctx->pc = 0x14C648u;
    // 0x14c648: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c64c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14c64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c650: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14C650u;
    SET_GPR_U32(ctx, 31, 0x14C658u);
    ctx->pc = 0x14C654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C650u;
            // 0x14c654: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C658u; }
        if (ctx->pc != 0x14C658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C658u; }
        if (ctx->pc != 0x14C658u) { return; }
    }
    ctx->pc = 0x14C658u;
    // 0x14c658: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c65c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x14c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14c660: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C660u;
    SET_GPR_U32(ctx, 31, 0x14C668u);
    ctx->pc = 0x14C664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C660u;
            // 0x14c664: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C668u; }
        if (ctx->pc != 0x14C668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C668u; }
        if (ctx->pc != 0x14C668u) { return; }
    }
    ctx->pc = 0x14C668u;
    // 0x14c668: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c66c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14c66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c670: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14c670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14c674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c678: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c67c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14c67cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14c680: 0xc060614  jal         func_181850
    ctx->pc = 0x14C680u;
    SET_GPR_U32(ctx, 31, 0x14C688u);
    ctx->pc = 0x14C684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C680u;
            // 0x14c684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C688u; }
        if (ctx->pc != 0x14C688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C688u; }
        if (ctx->pc != 0x14C688u) { return; }
    }
    ctx->pc = 0x14C688u;
    // 0x14c688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c68c: 0xc06060c  jal         func_181830
    ctx->pc = 0x14C68Cu;
    SET_GPR_U32(ctx, 31, 0x14C694u);
    ctx->pc = 0x14C690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C68Cu;
            // 0x14c690: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C694u; }
        if (ctx->pc != 0x14C694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C694u; }
        if (ctx->pc != 0x14C694u) { return; }
    }
    ctx->pc = 0x14C694u;
    // 0x14c694: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14c694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14c698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c69c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c6a0: 0xc060604  jal         func_181810
    ctx->pc = 0x14C6A0u;
    SET_GPR_U32(ctx, 31, 0x14C6A8u);
    ctx->pc = 0x14C6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6A0u;
            // 0x14c6a4: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6A8u; }
        if (ctx->pc != 0x14C6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6A8u; }
        if (ctx->pc != 0x14C6A8u) { return; }
    }
    ctx->pc = 0x14C6A8u;
    // 0x14c6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6b0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14C6B0u;
    SET_GPR_U32(ctx, 31, 0x14C6B8u);
    ctx->pc = 0x14C6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6B0u;
            // 0x14c6b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6B8u; }
        if (ctx->pc != 0x14C6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6B8u; }
        if (ctx->pc != 0x14C6B8u) { return; }
    }
    ctx->pc = 0x14C6B8u;
    // 0x14c6b8: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14c6bc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14C6BCu;
    SET_GPR_U32(ctx, 31, 0x14C6C4u);
    ctx->pc = 0x14C6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6BCu;
            // 0x14c6c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6C4u; }
        if (ctx->pc != 0x14C6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6C4u; }
        if (ctx->pc != 0x14C6C4u) { return; }
    }
    ctx->pc = 0x14C6C4u;
    // 0x14c6c4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14C6C4u;
    SET_GPR_U32(ctx, 31, 0x14C6CCu);
    ctx->pc = 0x14C6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6C4u;
            // 0x14c6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6CCu; }
        if (ctx->pc != 0x14C6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6CCu; }
        if (ctx->pc != 0x14C6CCu) { return; }
    }
    ctx->pc = 0x14C6CCu;
    // 0x14c6cc: 0x24040073  addiu       $a0, $zero, 0x73
    ctx->pc = 0x14c6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x14c6d0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14C6D0u;
    SET_GPR_U32(ctx, 31, 0x14C6D8u);
    ctx->pc = 0x14C6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6D0u;
            // 0x14c6d4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6D8u; }
        if (ctx->pc != 0x14C6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6D8u; }
        if (ctx->pc != 0x14C6D8u) { return; }
    }
    ctx->pc = 0x14C6D8u;
    // 0x14c6d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6e0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C6E0u;
    SET_GPR_U32(ctx, 31, 0x14C6E8u);
    ctx->pc = 0x14C6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6E0u;
            // 0x14c6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6E8u; }
        if (ctx->pc != 0x14C6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6E8u; }
        if (ctx->pc != 0x14C6E8u) { return; }
    }
    ctx->pc = 0x14C6E8u;
    // 0x14c6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6ec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C6ECu;
    SET_GPR_U32(ctx, 31, 0x14C6F4u);
    ctx->pc = 0x14C6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6ECu;
            // 0x14c6f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6F4u; }
        if (ctx->pc != 0x14C6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6F4u; }
        if (ctx->pc != 0x14C6F4u) { return; }
    }
    ctx->pc = 0x14C6F4u;
    // 0x14c6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6f8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C6F8u;
    SET_GPR_U32(ctx, 31, 0x14C700u);
    ctx->pc = 0x14C6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6F8u;
            // 0x14c6fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C700u; }
        if (ctx->pc != 0x14C700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C700u; }
        if (ctx->pc != 0x14C700u) { return; }
    }
    ctx->pc = 0x14C700u;
    // 0x14c700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c704: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C704u;
    SET_GPR_U32(ctx, 31, 0x14C70Cu);
    ctx->pc = 0x14C708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C704u;
            // 0x14c708: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C70Cu; }
        if (ctx->pc != 0x14C70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C70Cu; }
        if (ctx->pc != 0x14C70Cu) { return; }
    }
    ctx->pc = 0x14C70Cu;
    // 0x14c70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c710: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C710u;
    SET_GPR_U32(ctx, 31, 0x14C718u);
    ctx->pc = 0x14C714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C710u;
            // 0x14c714: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C718u; }
        if (ctx->pc != 0x14C718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C718u; }
        if (ctx->pc != 0x14C718u) { return; }
    }
    ctx->pc = 0x14C718u;
    // 0x14c718: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14c718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14c71c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14c71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14c720: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14C720u;
    SET_GPR_U32(ctx, 31, 0x14C728u);
    ctx->pc = 0x14C724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C720u;
            // 0x14c724: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C728u; }
        if (ctx->pc != 0x14C728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C728u; }
        if (ctx->pc != 0x14C728u) { return; }
    }
    ctx->pc = 0x14C728u;
    // 0x14c728: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14C728u;
    SET_GPR_U32(ctx, 31, 0x14C730u);
    ctx->pc = 0x14C72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C728u;
            // 0x14c72c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C730u; }
        if (ctx->pc != 0x14C730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C730u; }
        if (ctx->pc != 0x14C730u) { return; }
    }
    ctx->pc = 0x14C730u;
    // 0x14c730: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c734: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14c734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c738: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14C738u;
    SET_GPR_U32(ctx, 31, 0x14C740u);
    ctx->pc = 0x14C73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C738u;
            // 0x14c73c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C740u; }
        if (ctx->pc != 0x14C740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C740u; }
        if (ctx->pc != 0x14C740u) { return; }
    }
    ctx->pc = 0x14C740u;
    // 0x14c740: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c744: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x14c744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14c748: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C748u;
    SET_GPR_U32(ctx, 31, 0x14C750u);
    ctx->pc = 0x14C74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C748u;
            // 0x14c74c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C750u; }
        if (ctx->pc != 0x14C750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C750u; }
        if (ctx->pc != 0x14C750u) { return; }
    }
    ctx->pc = 0x14C750u;
    // 0x14c750: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c754: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14c754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c758: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14c758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14c75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c760: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c764: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14c764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14c768: 0xc060614  jal         func_181850
    ctx->pc = 0x14C768u;
    SET_GPR_U32(ctx, 31, 0x14C770u);
    ctx->pc = 0x14C76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C768u;
            // 0x14c76c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C770u; }
        if (ctx->pc != 0x14C770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C770u; }
        if (ctx->pc != 0x14C770u) { return; }
    }
    ctx->pc = 0x14C770u;
    // 0x14c770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c774: 0xc06060c  jal         func_181830
    ctx->pc = 0x14C774u;
    SET_GPR_U32(ctx, 31, 0x14C77Cu);
    ctx->pc = 0x14C778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C774u;
            // 0x14c778: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C77Cu; }
        if (ctx->pc != 0x14C77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C77Cu; }
        if (ctx->pc != 0x14C77Cu) { return; }
    }
    ctx->pc = 0x14C77Cu;
    // 0x14c77c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14c77cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14c780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c784: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c788: 0xc060604  jal         func_181810
    ctx->pc = 0x14C788u;
    SET_GPR_U32(ctx, 31, 0x14C790u);
    ctx->pc = 0x14C78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C788u;
            // 0x14c78c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C790u; }
        if (ctx->pc != 0x14C790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C790u; }
        if (ctx->pc != 0x14C790u) { return; }
    }
    ctx->pc = 0x14C790u;
    // 0x14c790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c798: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14C798u;
    SET_GPR_U32(ctx, 31, 0x14C7A0u);
    ctx->pc = 0x14C79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C798u;
            // 0x14c79c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7A0u; }
        if (ctx->pc != 0x14C7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7A0u; }
        if (ctx->pc != 0x14C7A0u) { return; }
    }
    ctx->pc = 0x14C7A0u;
    // 0x14c7a0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14c7a4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14C7A4u;
    SET_GPR_U32(ctx, 31, 0x14C7ACu);
    ctx->pc = 0x14C7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7A4u;
            // 0x14c7a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7ACu; }
        if (ctx->pc != 0x14C7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7ACu; }
        if (ctx->pc != 0x14C7ACu) { return; }
    }
    ctx->pc = 0x14C7ACu;
    // 0x14c7ac: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14C7ACu;
    SET_GPR_U32(ctx, 31, 0x14C7B4u);
    ctx->pc = 0x14C7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7ACu;
            // 0x14c7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7B4u; }
        if (ctx->pc != 0x14C7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7B4u; }
        if (ctx->pc != 0x14C7B4u) { return; }
    }
    ctx->pc = 0x14C7B4u;
    // 0x14c7b4: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x14c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x14c7b8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14C7B8u;
    SET_GPR_U32(ctx, 31, 0x14C7C0u);
    ctx->pc = 0x14C7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7B8u;
            // 0x14c7bc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7C0u; }
        if (ctx->pc != 0x14C7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7C0u; }
        if (ctx->pc != 0x14C7C0u) { return; }
    }
    ctx->pc = 0x14C7C0u;
    // 0x14c7c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7c8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C7C8u;
    SET_GPR_U32(ctx, 31, 0x14C7D0u);
    ctx->pc = 0x14C7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7C8u;
            // 0x14c7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7D0u; }
        if (ctx->pc != 0x14C7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7D0u; }
        if (ctx->pc != 0x14C7D0u) { return; }
    }
    ctx->pc = 0x14C7D0u;
    // 0x14c7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7d4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C7D4u;
    SET_GPR_U32(ctx, 31, 0x14C7DCu);
    ctx->pc = 0x14C7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7D4u;
            // 0x14c7d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7DCu; }
        if (ctx->pc != 0x14C7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7DCu; }
        if (ctx->pc != 0x14C7DCu) { return; }
    }
    ctx->pc = 0x14C7DCu;
    // 0x14c7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7e0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C7E0u;
    SET_GPR_U32(ctx, 31, 0x14C7E8u);
    ctx->pc = 0x14C7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7E0u;
            // 0x14c7e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7E8u; }
        if (ctx->pc != 0x14C7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7E8u; }
        if (ctx->pc != 0x14C7E8u) { return; }
    }
    ctx->pc = 0x14C7E8u;
    // 0x14c7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7ec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C7ECu;
    SET_GPR_U32(ctx, 31, 0x14C7F4u);
    ctx->pc = 0x14C7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7ECu;
            // 0x14c7f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7F4u; }
        if (ctx->pc != 0x14C7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7F4u; }
        if (ctx->pc != 0x14C7F4u) { return; }
    }
    ctx->pc = 0x14C7F4u;
    // 0x14c7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7f8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C7F8u;
    SET_GPR_U32(ctx, 31, 0x14C800u);
    ctx->pc = 0x14C7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7F8u;
            // 0x14c7fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C800u; }
        if (ctx->pc != 0x14C800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C800u; }
        if (ctx->pc != 0x14C800u) { return; }
    }
    ctx->pc = 0x14C800u;
    // 0x14c800: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14c800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14c804: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14c804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14c808: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14C808u;
    SET_GPR_U32(ctx, 31, 0x14C810u);
    ctx->pc = 0x14C80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C808u;
            // 0x14c80c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C810u; }
        if (ctx->pc != 0x14C810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C810u; }
        if (ctx->pc != 0x14C810u) { return; }
    }
    ctx->pc = 0x14C810u;
    // 0x14c810: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14C810u;
    SET_GPR_U32(ctx, 31, 0x14C818u);
    ctx->pc = 0x14C814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C810u;
            // 0x14c814: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C818u; }
        if (ctx->pc != 0x14C818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C818u; }
        if (ctx->pc != 0x14C818u) { return; }
    }
    ctx->pc = 0x14C818u;
    // 0x14c818: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c81c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c820: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14C820u;
    SET_GPR_U32(ctx, 31, 0x14C828u);
    ctx->pc = 0x14C824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C820u;
            // 0x14c824: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C828u; }
        if (ctx->pc != 0x14C828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C828u; }
        if (ctx->pc != 0x14C828u) { return; }
    }
    ctx->pc = 0x14C828u;
    // 0x14c828: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c82c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x14c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14c830: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C830u;
    SET_GPR_U32(ctx, 31, 0x14C838u);
    ctx->pc = 0x14C834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C830u;
            // 0x14c834: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C838u; }
        if (ctx->pc != 0x14C838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C838u; }
        if (ctx->pc != 0x14C838u) { return; }
    }
    ctx->pc = 0x14C838u;
    // 0x14c838: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c83c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14c83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c840: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14c840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14c844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c848: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c84c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14c84cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14c850: 0xc060614  jal         func_181850
    ctx->pc = 0x14C850u;
    SET_GPR_U32(ctx, 31, 0x14C858u);
    ctx->pc = 0x14C854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C850u;
            // 0x14c854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C858u; }
        if (ctx->pc != 0x14C858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C858u; }
        if (ctx->pc != 0x14C858u) { return; }
    }
    ctx->pc = 0x14C858u;
    // 0x14c858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c85c: 0xc06060c  jal         func_181830
    ctx->pc = 0x14C85Cu;
    SET_GPR_U32(ctx, 31, 0x14C864u);
    ctx->pc = 0x14C860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C85Cu;
            // 0x14c860: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C864u; }
        if (ctx->pc != 0x14C864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C864u; }
        if (ctx->pc != 0x14C864u) { return; }
    }
    ctx->pc = 0x14C864u;
    // 0x14c864: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14c864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14c868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c86c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c870: 0xc060604  jal         func_181810
    ctx->pc = 0x14C870u;
    SET_GPR_U32(ctx, 31, 0x14C878u);
    ctx->pc = 0x14C874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C870u;
            // 0x14c874: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C878u; }
        if (ctx->pc != 0x14C878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C878u; }
        if (ctx->pc != 0x14C878u) { return; }
    }
    ctx->pc = 0x14C878u;
    // 0x14c878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c880: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14C880u;
    SET_GPR_U32(ctx, 31, 0x14C888u);
    ctx->pc = 0x14C884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C880u;
            // 0x14c884: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C888u; }
        if (ctx->pc != 0x14C888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C888u; }
        if (ctx->pc != 0x14C888u) { return; }
    }
    ctx->pc = 0x14C888u;
    // 0x14c888: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14c888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14c88c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14C88Cu;
    SET_GPR_U32(ctx, 31, 0x14C894u);
    ctx->pc = 0x14C890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C88Cu;
            // 0x14c890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C894u; }
        if (ctx->pc != 0x14C894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C894u; }
        if (ctx->pc != 0x14C894u) { return; }
    }
    ctx->pc = 0x14C894u;
    // 0x14c894: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14C894u;
    SET_GPR_U32(ctx, 31, 0x14C89Cu);
    ctx->pc = 0x14C898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C894u;
            // 0x14c898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C89Cu; }
        if (ctx->pc != 0x14C89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C89Cu; }
        if (ctx->pc != 0x14C89Cu) { return; }
    }
    ctx->pc = 0x14C89Cu;
    // 0x14c89c: 0x24040075  addiu       $a0, $zero, 0x75
    ctx->pc = 0x14c89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x14c8a0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14C8A0u;
    SET_GPR_U32(ctx, 31, 0x14C8A8u);
    ctx->pc = 0x14C8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8A0u;
            // 0x14c8a4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8A8u; }
        if (ctx->pc != 0x14C8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8A8u; }
        if (ctx->pc != 0x14C8A8u) { return; }
    }
    ctx->pc = 0x14C8A8u;
    // 0x14c8a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8b0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C8B0u;
    SET_GPR_U32(ctx, 31, 0x14C8B8u);
    ctx->pc = 0x14C8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8B0u;
            // 0x14c8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8B8u; }
        if (ctx->pc != 0x14C8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8B8u; }
        if (ctx->pc != 0x14C8B8u) { return; }
    }
    ctx->pc = 0x14C8B8u;
    // 0x14c8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8bc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C8BCu;
    SET_GPR_U32(ctx, 31, 0x14C8C4u);
    ctx->pc = 0x14C8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8BCu;
            // 0x14c8c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8C4u; }
        if (ctx->pc != 0x14C8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8C4u; }
        if (ctx->pc != 0x14C8C4u) { return; }
    }
    ctx->pc = 0x14C8C4u;
    // 0x14c8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8c8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C8C8u;
    SET_GPR_U32(ctx, 31, 0x14C8D0u);
    ctx->pc = 0x14C8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8C8u;
            // 0x14c8cc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8D0u; }
        if (ctx->pc != 0x14C8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8D0u; }
        if (ctx->pc != 0x14C8D0u) { return; }
    }
    ctx->pc = 0x14C8D0u;
    // 0x14c8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8d4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C8D4u;
    SET_GPR_U32(ctx, 31, 0x14C8DCu);
    ctx->pc = 0x14C8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8D4u;
            // 0x14c8d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8DCu; }
        if (ctx->pc != 0x14C8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8DCu; }
        if (ctx->pc != 0x14C8DCu) { return; }
    }
    ctx->pc = 0x14C8DCu;
    // 0x14c8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8e0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C8E0u;
    SET_GPR_U32(ctx, 31, 0x14C8E8u);
    ctx->pc = 0x14C8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8E0u;
            // 0x14c8e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8E8u; }
        if (ctx->pc != 0x14C8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8E8u; }
        if (ctx->pc != 0x14C8E8u) { return; }
    }
    ctx->pc = 0x14C8E8u;
    // 0x14c8e8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14c8ec: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14c8f0: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14C8F0u;
    SET_GPR_U32(ctx, 31, 0x14C8F8u);
    ctx->pc = 0x14C8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8F0u;
            // 0x14c8f4: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8F8u; }
        if (ctx->pc != 0x14C8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C8F8u; }
        if (ctx->pc != 0x14C8F8u) { return; }
    }
    ctx->pc = 0x14C8F8u;
    // 0x14c8f8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14C8F8u;
    SET_GPR_U32(ctx, 31, 0x14C900u);
    ctx->pc = 0x14C8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8F8u;
            // 0x14c8fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C900u; }
        if (ctx->pc != 0x14C900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C900u; }
        if (ctx->pc != 0x14C900u) { return; }
    }
    ctx->pc = 0x14C900u;
    // 0x14c900: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c904: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c908: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14C908u;
    SET_GPR_U32(ctx, 31, 0x14C910u);
    ctx->pc = 0x14C90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C908u;
            // 0x14c90c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C910u; }
        if (ctx->pc != 0x14C910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C910u; }
        if (ctx->pc != 0x14C910u) { return; }
    }
    ctx->pc = 0x14C910u;
    // 0x14c910: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c914: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14c914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14c918: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C918u;
    SET_GPR_U32(ctx, 31, 0x14C920u);
    ctx->pc = 0x14C91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C918u;
            // 0x14c91c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C920u; }
        if (ctx->pc != 0x14C920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C920u; }
        if (ctx->pc != 0x14C920u) { return; }
    }
    ctx->pc = 0x14C920u;
    // 0x14c920: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c924: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14c924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c928: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14c928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14c92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c930: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c934: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14c934u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14c938: 0xc060614  jal         func_181850
    ctx->pc = 0x14C938u;
    SET_GPR_U32(ctx, 31, 0x14C940u);
    ctx->pc = 0x14C93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C938u;
            // 0x14c93c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C940u; }
        if (ctx->pc != 0x14C940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C940u; }
        if (ctx->pc != 0x14C940u) { return; }
    }
    ctx->pc = 0x14C940u;
    // 0x14c940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c944: 0xc06060c  jal         func_181830
    ctx->pc = 0x14C944u;
    SET_GPR_U32(ctx, 31, 0x14C94Cu);
    ctx->pc = 0x14C948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C944u;
            // 0x14c948: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C94Cu; }
        if (ctx->pc != 0x14C94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C94Cu; }
        if (ctx->pc != 0x14C94Cu) { return; }
    }
    ctx->pc = 0x14C94Cu;
    // 0x14c94c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14c94cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14c950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c954: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c958: 0xc060604  jal         func_181810
    ctx->pc = 0x14C958u;
    SET_GPR_U32(ctx, 31, 0x14C960u);
    ctx->pc = 0x14C95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C958u;
            // 0x14c95c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C960u; }
        if (ctx->pc != 0x14C960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C960u; }
        if (ctx->pc != 0x14C960u) { return; }
    }
    ctx->pc = 0x14C960u;
    // 0x14c960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c968: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14C968u;
    SET_GPR_U32(ctx, 31, 0x14C970u);
    ctx->pc = 0x14C96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C968u;
            // 0x14c96c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C970u; }
        if (ctx->pc != 0x14C970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C970u; }
        if (ctx->pc != 0x14C970u) { return; }
    }
    ctx->pc = 0x14C970u;
    // 0x14c970: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14c970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14c974: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14C974u;
    SET_GPR_U32(ctx, 31, 0x14C97Cu);
    ctx->pc = 0x14C978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C974u;
            // 0x14c978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C97Cu; }
        if (ctx->pc != 0x14C97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C97Cu; }
        if (ctx->pc != 0x14C97Cu) { return; }
    }
    ctx->pc = 0x14C97Cu;
    // 0x14c97c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14C97Cu;
    SET_GPR_U32(ctx, 31, 0x14C984u);
    ctx->pc = 0x14C980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C97Cu;
            // 0x14c980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C984u; }
        if (ctx->pc != 0x14C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C984u; }
        if (ctx->pc != 0x14C984u) { return; }
    }
    ctx->pc = 0x14C984u;
    // 0x14c984: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x14c984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x14c988: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14C988u;
    SET_GPR_U32(ctx, 31, 0x14C990u);
    ctx->pc = 0x14C98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C988u;
            // 0x14c98c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C990u; }
        if (ctx->pc != 0x14C990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C990u; }
        if (ctx->pc != 0x14C990u) { return; }
    }
    ctx->pc = 0x14C990u;
    // 0x14c990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c998: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C998u;
    SET_GPR_U32(ctx, 31, 0x14C9A0u);
    ctx->pc = 0x14C99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C998u;
            // 0x14c99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9A0u; }
        if (ctx->pc != 0x14C9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9A0u; }
        if (ctx->pc != 0x14C9A0u) { return; }
    }
    ctx->pc = 0x14C9A0u;
    // 0x14c9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9a4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C9A4u;
    SET_GPR_U32(ctx, 31, 0x14C9ACu);
    ctx->pc = 0x14C9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9A4u;
            // 0x14c9a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9ACu; }
        if (ctx->pc != 0x14C9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9ACu; }
        if (ctx->pc != 0x14C9ACu) { return; }
    }
    ctx->pc = 0x14C9ACu;
    // 0x14c9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9b0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C9B0u;
    SET_GPR_U32(ctx, 31, 0x14C9B8u);
    ctx->pc = 0x14C9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9B0u;
            // 0x14c9b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9B8u; }
        if (ctx->pc != 0x14C9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9B8u; }
        if (ctx->pc != 0x14C9B8u) { return; }
    }
    ctx->pc = 0x14C9B8u;
    // 0x14c9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9bc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C9BCu;
    SET_GPR_U32(ctx, 31, 0x14C9C4u);
    ctx->pc = 0x14C9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9BCu;
            // 0x14c9c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9C4u; }
        if (ctx->pc != 0x14C9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9C4u; }
        if (ctx->pc != 0x14C9C4u) { return; }
    }
    ctx->pc = 0x14C9C4u;
    // 0x14c9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9c8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14C9C8u;
    SET_GPR_U32(ctx, 31, 0x14C9D0u);
    ctx->pc = 0x14C9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9C8u;
            // 0x14c9cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9D0u; }
        if (ctx->pc != 0x14C9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9D0u; }
        if (ctx->pc != 0x14C9D0u) { return; }
    }
    ctx->pc = 0x14C9D0u;
    // 0x14c9d0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14c9d4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14c9d8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14C9D8u;
    SET_GPR_U32(ctx, 31, 0x14C9E0u);
    ctx->pc = 0x14C9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9D8u;
            // 0x14c9dc: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9E0u; }
        if (ctx->pc != 0x14C9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9E0u; }
        if (ctx->pc != 0x14C9E0u) { return; }
    }
    ctx->pc = 0x14C9E0u;
    // 0x14c9e0: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14C9E0u;
    SET_GPR_U32(ctx, 31, 0x14C9E8u);
    ctx->pc = 0x14C9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9E0u;
            // 0x14c9e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9E8u; }
        if (ctx->pc != 0x14C9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9E8u; }
        if (ctx->pc != 0x14C9E8u) { return; }
    }
    ctx->pc = 0x14C9E8u;
    // 0x14c9e8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c9ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c9f0: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14C9F0u;
    SET_GPR_U32(ctx, 31, 0x14C9F8u);
    ctx->pc = 0x14C9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9F0u;
            // 0x14c9f4: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9F8u; }
        if (ctx->pc != 0x14C9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9F8u; }
        if (ctx->pc != 0x14C9F8u) { return; }
    }
    ctx->pc = 0x14C9F8u;
    // 0x14c9f8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14c9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14c9fc: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14ca00: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14CA00u;
    SET_GPR_U32(ctx, 31, 0x14CA08u);
    ctx->pc = 0x14CA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA00u;
            // 0x14ca04: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA08u; }
        if (ctx->pc != 0x14CA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA08u; }
        if (ctx->pc != 0x14CA08u) { return; }
    }
    ctx->pc = 0x14CA08u;
    // 0x14ca08: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ca08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ca0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14ca0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca10: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14ca10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14ca14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca18: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ca18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ca1c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14ca1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14ca20: 0xc060614  jal         func_181850
    ctx->pc = 0x14CA20u;
    SET_GPR_U32(ctx, 31, 0x14CA28u);
    ctx->pc = 0x14CA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA20u;
            // 0x14ca24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA28u; }
        if (ctx->pc != 0x14CA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA28u; }
        if (ctx->pc != 0x14CA28u) { return; }
    }
    ctx->pc = 0x14CA28u;
    // 0x14ca28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ca28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca2c: 0xc06060c  jal         func_181830
    ctx->pc = 0x14CA2Cu;
    SET_GPR_U32(ctx, 31, 0x14CA34u);
    ctx->pc = 0x14CA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA2Cu;
            // 0x14ca30: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA34u; }
        if (ctx->pc != 0x14CA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA34u; }
        if (ctx->pc != 0x14CA34u) { return; }
    }
    ctx->pc = 0x14CA34u;
    // 0x14ca34: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14ca34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14ca38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ca38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14ca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ca40: 0xc060604  jal         func_181810
    ctx->pc = 0x14CA40u;
    SET_GPR_U32(ctx, 31, 0x14CA48u);
    ctx->pc = 0x14CA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA40u;
            // 0x14ca44: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA48u; }
        if (ctx->pc != 0x14CA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA48u; }
        if (ctx->pc != 0x14CA48u) { return; }
    }
    ctx->pc = 0x14CA48u;
    // 0x14ca48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14ca4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca50: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14CA50u;
    SET_GPR_U32(ctx, 31, 0x14CA58u);
    ctx->pc = 0x14CA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA50u;
            // 0x14ca54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA58u; }
        if (ctx->pc != 0x14CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA58u; }
        if (ctx->pc != 0x14CA58u) { return; }
    }
    ctx->pc = 0x14CA58u;
    // 0x14ca58: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14ca58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14ca5c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14CA5Cu;
    SET_GPR_U32(ctx, 31, 0x14CA64u);
    ctx->pc = 0x14CA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA5Cu;
            // 0x14ca60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA64u; }
        if (ctx->pc != 0x14CA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA64u; }
        if (ctx->pc != 0x14CA64u) { return; }
    }
    ctx->pc = 0x14CA64u;
    // 0x14ca64: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14CA64u;
    SET_GPR_U32(ctx, 31, 0x14CA6Cu);
    ctx->pc = 0x14CA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA64u;
            // 0x14ca68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA6Cu; }
        if (ctx->pc != 0x14CA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA6Cu; }
        if (ctx->pc != 0x14CA6Cu) { return; }
    }
    ctx->pc = 0x14CA6Cu;
    // 0x14ca6c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x14ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x14ca70: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14CA70u;
    SET_GPR_U32(ctx, 31, 0x14CA78u);
    ctx->pc = 0x14CA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA70u;
            // 0x14ca74: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA78u; }
        if (ctx->pc != 0x14CA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA78u; }
        if (ctx->pc != 0x14CA78u) { return; }
    }
    ctx->pc = 0x14CA78u;
    // 0x14ca78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ca78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14ca7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca80: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14CA80u;
    SET_GPR_U32(ctx, 31, 0x14CA88u);
    ctx->pc = 0x14CA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA80u;
            // 0x14ca84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA88u; }
        if (ctx->pc != 0x14CA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA88u; }
        if (ctx->pc != 0x14CA88u) { return; }
    }
    ctx->pc = 0x14CA88u;
    // 0x14ca88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ca88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca8c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14CA8Cu;
    SET_GPR_U32(ctx, 31, 0x14CA94u);
    ctx->pc = 0x14CA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA8Cu;
            // 0x14ca90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA94u; }
        if (ctx->pc != 0x14CA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA94u; }
        if (ctx->pc != 0x14CA94u) { return; }
    }
    ctx->pc = 0x14CA94u;
    // 0x14ca94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ca94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca98: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14CA98u;
    SET_GPR_U32(ctx, 31, 0x14CAA0u);
    ctx->pc = 0x14CA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA98u;
            // 0x14ca9c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAA0u; }
        if (ctx->pc != 0x14CAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAA0u; }
        if (ctx->pc != 0x14CAA0u) { return; }
    }
    ctx->pc = 0x14CAA0u;
    // 0x14caa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14caa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14caa4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14CAA4u;
    SET_GPR_U32(ctx, 31, 0x14CAACu);
    ctx->pc = 0x14CAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CAA4u;
            // 0x14caa8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAACu; }
        if (ctx->pc != 0x14CAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAACu; }
        if (ctx->pc != 0x14CAACu) { return; }
    }
    ctx->pc = 0x14CAACu;
    // 0x14caac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14caacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cab0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14CAB0u;
    SET_GPR_U32(ctx, 31, 0x14CAB8u);
    ctx->pc = 0x14CAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CAB0u;
            // 0x14cab4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAB8u; }
        if (ctx->pc != 0x14CAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAB8u; }
        if (ctx->pc != 0x14CAB8u) { return; }
    }
    ctx->pc = 0x14CAB8u;
    // 0x14cab8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14cab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14cabc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14cac0: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14CAC0u;
    SET_GPR_U32(ctx, 31, 0x14CAC8u);
    ctx->pc = 0x14CAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CAC0u;
            // 0x14cac4: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAC8u; }
        if (ctx->pc != 0x14CAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAC8u; }
        if (ctx->pc != 0x14CAC8u) { return; }
    }
    ctx->pc = 0x14CAC8u;
    // 0x14cac8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14CAC8u;
    SET_GPR_U32(ctx, 31, 0x14CAD0u);
    ctx->pc = 0x14CACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CAC8u;
            // 0x14cacc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAD0u; }
        if (ctx->pc != 0x14CAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAD0u; }
        if (ctx->pc != 0x14CAD0u) { return; }
    }
    ctx->pc = 0x14CAD0u;
    // 0x14cad0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14cad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14cad4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x14cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14cad8: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14CAD8u;
    SET_GPR_U32(ctx, 31, 0x14CAE0u);
    ctx->pc = 0x14CADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CAD8u;
            // 0x14cadc: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAE0u; }
        if (ctx->pc != 0x14CAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAE0u; }
        if (ctx->pc != 0x14CAE0u) { return; }
    }
    ctx->pc = 0x14CAE0u;
    // 0x14cae0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14cae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14cae4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14cae8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14CAE8u;
    SET_GPR_U32(ctx, 31, 0x14CAF0u);
    ctx->pc = 0x14CAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CAE8u;
            // 0x14caec: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAF0u; }
        if (ctx->pc != 0x14CAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAF0u; }
        if (ctx->pc != 0x14CAF0u) { return; }
    }
    ctx->pc = 0x14CAF0u;
    // 0x14caf0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14caf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14caf4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14caf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14caf8: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14caf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14cafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb00: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14cb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14cb04: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14cb04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14cb08: 0xc060614  jal         func_181850
    ctx->pc = 0x14CB08u;
    SET_GPR_U32(ctx, 31, 0x14CB10u);
    ctx->pc = 0x14CB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB08u;
            // 0x14cb0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB10u; }
        if (ctx->pc != 0x14CB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB10u; }
        if (ctx->pc != 0x14CB10u) { return; }
    }
    ctx->pc = 0x14CB10u;
    // 0x14cb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb14: 0xc06060c  jal         func_181830
    ctx->pc = 0x14CB14u;
    SET_GPR_U32(ctx, 31, 0x14CB1Cu);
    ctx->pc = 0x14CB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB14u;
            // 0x14cb18: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB1Cu; }
        if (ctx->pc != 0x14CB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB1Cu; }
        if (ctx->pc != 0x14CB1Cu) { return; }
    }
    ctx->pc = 0x14CB1Cu;
    // 0x14cb1c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14cb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14cb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cb28: 0xc060604  jal         func_181810
    ctx->pc = 0x14CB28u;
    SET_GPR_U32(ctx, 31, 0x14CB30u);
    ctx->pc = 0x14CB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB28u;
            // 0x14cb2c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB30u; }
        if (ctx->pc != 0x14CB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB30u; }
        if (ctx->pc != 0x14CB30u) { return; }
    }
    ctx->pc = 0x14CB30u;
    // 0x14cb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14cb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb38: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14CB38u;
    SET_GPR_U32(ctx, 31, 0x14CB40u);
    ctx->pc = 0x14CB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB38u;
            // 0x14cb3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB40u; }
        if (ctx->pc != 0x14CB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB40u; }
        if (ctx->pc != 0x14CB40u) { return; }
    }
    ctx->pc = 0x14CB40u;
    // 0x14cb40: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14cb44: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14CB44u;
    SET_GPR_U32(ctx, 31, 0x14CB4Cu);
    ctx->pc = 0x14CB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB44u;
            // 0x14cb48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB4Cu; }
        if (ctx->pc != 0x14CB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB4Cu; }
        if (ctx->pc != 0x14CB4Cu) { return; }
    }
    ctx->pc = 0x14CB4Cu;
    // 0x14cb4c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14CB4Cu;
    SET_GPR_U32(ctx, 31, 0x14CB54u);
    ctx->pc = 0x14CB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB4Cu;
            // 0x14cb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB54u; }
        if (ctx->pc != 0x14CB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB54u; }
        if (ctx->pc != 0x14CB54u) { return; }
    }
    ctx->pc = 0x14CB54u;
    // 0x14cb54: 0x24040079  addiu       $a0, $zero, 0x79
    ctx->pc = 0x14cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x14cb58: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14CB58u;
    SET_GPR_U32(ctx, 31, 0x14CB60u);
    ctx->pc = 0x14CB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB58u;
            // 0x14cb5c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB60u; }
        if (ctx->pc != 0x14CB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB60u; }
        if (ctx->pc != 0x14CB60u) { return; }
    }
    ctx->pc = 0x14CB60u;
    // 0x14cb60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14cb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14cb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb68: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14CB68u;
    SET_GPR_U32(ctx, 31, 0x14CB70u);
    ctx->pc = 0x14CB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB68u;
            // 0x14cb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB70u; }
        if (ctx->pc != 0x14CB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB70u; }
        if (ctx->pc != 0x14CB70u) { return; }
    }
    ctx->pc = 0x14CB70u;
    // 0x14cb70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb74: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14CB74u;
    SET_GPR_U32(ctx, 31, 0x14CB7Cu);
    ctx->pc = 0x14CB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB74u;
            // 0x14cb78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB7Cu; }
        if (ctx->pc != 0x14CB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB7Cu; }
        if (ctx->pc != 0x14CB7Cu) { return; }
    }
    ctx->pc = 0x14CB7Cu;
    // 0x14cb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb80: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14CB80u;
    SET_GPR_U32(ctx, 31, 0x14CB88u);
    ctx->pc = 0x14CB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB80u;
            // 0x14cb84: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB88u; }
        if (ctx->pc != 0x14CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB88u; }
        if (ctx->pc != 0x14CB88u) { return; }
    }
    ctx->pc = 0x14CB88u;
    // 0x14cb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb8c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14CB8Cu;
    SET_GPR_U32(ctx, 31, 0x14CB94u);
    ctx->pc = 0x14CB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB8Cu;
            // 0x14cb90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB94u; }
        if (ctx->pc != 0x14CB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB94u; }
        if (ctx->pc != 0x14CB94u) { return; }
    }
    ctx->pc = 0x14CB94u;
    // 0x14cb94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb98: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14CB98u;
    SET_GPR_U32(ctx, 31, 0x14CBA0u);
    ctx->pc = 0x14CB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB98u;
            // 0x14cb9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBA0u; }
        if (ctx->pc != 0x14CBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBA0u; }
        if (ctx->pc != 0x14CBA0u) { return; }
    }
    ctx->pc = 0x14CBA0u;
    // 0x14cba0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14cba4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14cba8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14CBA8u;
    SET_GPR_U32(ctx, 31, 0x14CBB0u);
    ctx->pc = 0x14CBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBA8u;
            // 0x14cbac: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBB0u; }
        if (ctx->pc != 0x14CBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBB0u; }
        if (ctx->pc != 0x14CBB0u) { return; }
    }
    ctx->pc = 0x14CBB0u;
    // 0x14cbb0: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14CBB0u;
    SET_GPR_U32(ctx, 31, 0x14CBB8u);
    ctx->pc = 0x14CBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBB0u;
            // 0x14cbb4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBB8u; }
        if (ctx->pc != 0x14CBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBB8u; }
        if (ctx->pc != 0x14CBB8u) { return; }
    }
    ctx->pc = 0x14CBB8u;
    // 0x14cbb8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14cbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14cbbc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x14cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14cbc0: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14CBC0u;
    SET_GPR_U32(ctx, 31, 0x14CBC8u);
    ctx->pc = 0x14CBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBC0u;
            // 0x14cbc4: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBC8u; }
        if (ctx->pc != 0x14CBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBC8u; }
        if (ctx->pc != 0x14CBC8u) { return; }
    }
    ctx->pc = 0x14CBC8u;
    // 0x14cbc8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14cbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14cbcc: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x14cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x14cbd0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14CBD0u;
    SET_GPR_U32(ctx, 31, 0x14CBD8u);
    ctx->pc = 0x14CBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBD0u;
            // 0x14cbd4: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBD8u; }
        if (ctx->pc != 0x14CBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBD8u; }
        if (ctx->pc != 0x14CBD8u) { return; }
    }
    ctx->pc = 0x14CBD8u;
    // 0x14cbd8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14cbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14cbdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14cbdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbe0: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14cbe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14cbe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbe8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14cbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14cbec: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14cbecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14cbf0: 0xc060614  jal         func_181850
    ctx->pc = 0x14CBF0u;
    SET_GPR_U32(ctx, 31, 0x14CBF8u);
    ctx->pc = 0x14CBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBF0u;
            // 0x14cbf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBF8u; }
        if (ctx->pc != 0x14CBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBF8u; }
        if (ctx->pc != 0x14CBF8u) { return; }
    }
    ctx->pc = 0x14CBF8u;
    // 0x14cbf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbfc: 0xc06060c  jal         func_181830
    ctx->pc = 0x14CBFCu;
    SET_GPR_U32(ctx, 31, 0x14CC04u);
    ctx->pc = 0x14CC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBFCu;
            // 0x14cc00: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC04u; }
        if (ctx->pc != 0x14CC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC04u; }
        if (ctx->pc != 0x14CC04u) { return; }
    }
    ctx->pc = 0x14CC04u;
    // 0x14cc04: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14cc04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14cc08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cc10: 0xc060604  jal         func_181810
    ctx->pc = 0x14CC10u;
    SET_GPR_U32(ctx, 31, 0x14CC18u);
    ctx->pc = 0x14CC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC10u;
            // 0x14cc14: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC18u; }
        if (ctx->pc != 0x14CC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC18u; }
        if (ctx->pc != 0x14CC18u) { return; }
    }
    ctx->pc = 0x14CC18u;
    // 0x14cc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14cc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc20: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14CC20u;
    SET_GPR_U32(ctx, 31, 0x14CC28u);
    ctx->pc = 0x14CC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC20u;
            // 0x14cc24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC28u; }
        if (ctx->pc != 0x14CC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC28u; }
        if (ctx->pc != 0x14CC28u) { return; }
    }
    ctx->pc = 0x14CC28u;
    // 0x14cc28: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14cc2c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14CC2Cu;
    SET_GPR_U32(ctx, 31, 0x14CC34u);
    ctx->pc = 0x14CC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC2Cu;
            // 0x14cc30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC34u; }
        if (ctx->pc != 0x14CC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC34u; }
        if (ctx->pc != 0x14CC34u) { return; }
    }
    ctx->pc = 0x14CC34u;
    // 0x14cc34: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14CC34u;
    SET_GPR_U32(ctx, 31, 0x14CC3Cu);
    ctx->pc = 0x14CC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC34u;
            // 0x14cc38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC3Cu; }
        if (ctx->pc != 0x14CC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC3Cu; }
        if (ctx->pc != 0x14CC3Cu) { return; }
    }
    ctx->pc = 0x14CC3Cu;
    // 0x14cc3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14cc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cc40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14cc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cc44: 0x3e00008  jr          $ra
    ctx->pc = 0x14CC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC44u;
            // 0x14cc48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14CC4Cu;
}
