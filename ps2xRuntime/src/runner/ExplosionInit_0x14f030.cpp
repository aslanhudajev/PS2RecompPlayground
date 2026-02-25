#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExplosionInit
// Address: 0x14f030 - 0x14f10c
void ExplosionInit_0x14f030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExplosionInit_0x14f030");
#endif

    ctx->pc = 0x14f030u;

    // 0x14f030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14f030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14f034: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14f034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f03c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x14f03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x14f040: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14f040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f044: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14F044u;
    SET_GPR_U32(ctx, 31, 0x14F04Cu);
    ctx->pc = 0x14F048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F044u;
            // 0x14f048: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F04Cu; }
        if (ctx->pc != 0x14F04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F04Cu; }
        if (ctx->pc != 0x14F04Cu) { return; }
    }
    ctx->pc = 0x14F04Cu;
    // 0x14f04c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f050: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x14f050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14f054: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14f054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f058: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14F058u;
    SET_GPR_U32(ctx, 31, 0x14F060u);
    ctx->pc = 0x14F05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F058u;
            // 0x14f05c: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F060u; }
        if (ctx->pc != 0x14F060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F060u; }
        if (ctx->pc != 0x14F060u) { return; }
    }
    ctx->pc = 0x14F060u;
    // 0x14f060: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x14f060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x14f064: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x14F064u;
    SET_GPR_U32(ctx, 31, 0x14F06Cu);
    ctx->pc = 0x14F068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F064u;
            // 0x14f068: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F06Cu; }
        if (ctx->pc != 0x14F06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F06Cu; }
        if (ctx->pc != 0x14F06Cu) { return; }
    }
    ctx->pc = 0x14F06Cu;
    // 0x14f06c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x14f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x14f070: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x14F070u;
    SET_GPR_U32(ctx, 31, 0x14F078u);
    ctx->pc = 0x14F074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F070u;
            // 0x14f074: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F078u; }
        if (ctx->pc != 0x14F078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F078u; }
        if (ctx->pc != 0x14F078u) { return; }
    }
    ctx->pc = 0x14F078u;
    // 0x14f078: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x14f078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14f07c: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x14F07Cu;
    SET_GPR_U32(ctx, 31, 0x14F084u);
    ctx->pc = 0x14F080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F07Cu;
            // 0x14f080: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F084u; }
        if (ctx->pc != 0x14F084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F084u; }
        if (ctx->pc != 0x14F084u) { return; }
    }
    ctx->pc = 0x14F084u;
    // 0x14f084: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x14f084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x14f088: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x14F088u;
    SET_GPR_U32(ctx, 31, 0x14F090u);
    ctx->pc = 0x14F08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F088u;
            // 0x14f08c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F090u; }
        if (ctx->pc != 0x14F090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F090u; }
        if (ctx->pc != 0x14F090u) { return; }
    }
    ctx->pc = 0x14F090u;
    // 0x14f090: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x14f090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14f094: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x14F094u;
    SET_GPR_U32(ctx, 31, 0x14F09Cu);
    ctx->pc = 0x14F098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F094u;
            // 0x14f098: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F09Cu; }
        if (ctx->pc != 0x14F09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F09Cu; }
        if (ctx->pc != 0x14F09Cu) { return; }
    }
    ctx->pc = 0x14F09Cu;
    // 0x14f09c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14f0a0: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x14F0A0u;
    SET_GPR_U32(ctx, 31, 0x14F0A8u);
    ctx->pc = 0x14F0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0A0u;
            // 0x14f0a4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0A8u; }
        if (ctx->pc != 0x14F0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0A8u; }
        if (ctx->pc != 0x14F0A8u) { return; }
    }
    ctx->pc = 0x14F0A8u;
    // 0x14f0a8: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x14f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x14f0ac: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x14F0ACu;
    SET_GPR_U32(ctx, 31, 0x14F0B4u);
    ctx->pc = 0x14F0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0ACu;
            // 0x14f0b0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0B4u; }
        if (ctx->pc != 0x14F0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0B4u; }
        if (ctx->pc != 0x14F0B4u) { return; }
    }
    ctx->pc = 0x14F0B4u;
    // 0x14f0b4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x14f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14f0b8: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x14F0B8u;
    SET_GPR_U32(ctx, 31, 0x14F0C0u);
    ctx->pc = 0x14F0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0B8u;
            // 0x14f0bc: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0C0u; }
        if (ctx->pc != 0x14F0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0C0u; }
        if (ctx->pc != 0x14F0C0u) { return; }
    }
    ctx->pc = 0x14F0C0u;
    // 0x14f0c0: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x14f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x14f0c4: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x14F0C4u;
    SET_GPR_U32(ctx, 31, 0x14F0CCu);
    ctx->pc = 0x14F0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0C4u;
            // 0x14f0c8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0CCu; }
        if (ctx->pc != 0x14F0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0CCu; }
        if (ctx->pc != 0x14F0CCu) { return; }
    }
    ctx->pc = 0x14F0CCu;
    // 0x14f0cc: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x14f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x14f0d0: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x14F0D0u;
    SET_GPR_U32(ctx, 31, 0x14F0D8u);
    ctx->pc = 0x14F0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0D0u;
            // 0x14f0d4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0D8u; }
        if (ctx->pc != 0x14F0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0D8u; }
        if (ctx->pc != 0x14F0D8u) { return; }
    }
    ctx->pc = 0x14F0D8u;
    // 0x14f0d8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14F0D8u;
    SET_GPR_U32(ctx, 31, 0x14F0E0u);
    ctx->pc = 0x14F0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0D8u;
            // 0x14f0dc: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0E0u; }
        if (ctx->pc != 0x14F0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0E0u; }
        if (ctx->pc != 0x14F0E0u) { return; }
    }
    ctx->pc = 0x14F0E0u;
    // 0x14f0e0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14F0E0u;
    SET_GPR_U32(ctx, 31, 0x14F0E8u);
    ctx->pc = 0x14F0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0E0u;
            // 0x14f0e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0E8u; }
        if (ctx->pc != 0x14F0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0E8u; }
        if (ctx->pc != 0x14F0E8u) { return; }
    }
    ctx->pc = 0x14F0E8u;
    // 0x14f0e8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14F0E8u;
    SET_GPR_U32(ctx, 31, 0x14F0F0u);
    ctx->pc = 0x14F0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0E8u;
            // 0x14f0ec: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0F0u; }
        if (ctx->pc != 0x14F0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0F0u; }
        if (ctx->pc != 0x14F0F0u) { return; }
    }
    ctx->pc = 0x14F0F0u;
    // 0x14f0f0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14F0F0u;
    SET_GPR_U32(ctx, 31, 0x14F0F8u);
    ctx->pc = 0x14F0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0F0u;
            // 0x14f0f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0F8u; }
        if (ctx->pc != 0x14F0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0F8u; }
        if (ctx->pc != 0x14F0F8u) { return; }
    }
    ctx->pc = 0x14F0F8u;
    // 0x14f0f8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14f0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14f0fc: 0xac209d20  sw          $zero, -0x62E0($at)
    ctx->pc = 0x14f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941984), GPR_U32(ctx, 0));
    // 0x14f100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f104: 0x3e00008  jr          $ra
    ctx->pc = 0x14F104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F104u;
            // 0x14f108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14F10Cu;
}
