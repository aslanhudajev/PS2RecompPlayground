#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotInit
// Address: 0x195c40 - 0x195e08
void EnemyShotInit_0x195c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotInit_0x195c40");
#endif

    ctx->pc = 0x195c40u;

    // 0x195c40: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x195c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x195c44: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x195c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x195c48: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x195c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x195c4c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x195c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x195c50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x195c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x195c54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x195c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195c58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x195c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x195c5c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x195c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x195c60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x195c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x195c64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x195c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x195c68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x195c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x195c6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x195c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x195c70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195c74: 0xc05c20c  jal         func_170830
    ctx->pc = 0x195C74u;
    SET_GPR_U32(ctx, 31, 0x195C7Cu);
    ctx->pc = 0x195C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195C74u;
            // 0x195c78: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C7Cu; }
        if (ctx->pc != 0x195C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C7Cu; }
        if (ctx->pc != 0x195C7Cu) { return; }
    }
    ctx->pc = 0x195C7Cu;
    // 0x195c7c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x195c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x195c80: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x195C80u;
    SET_GPR_U32(ctx, 31, 0x195C88u);
    ctx->pc = 0x195C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195C80u;
            // 0x195c84: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C88u; }
        if (ctx->pc != 0x195C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C88u; }
        if (ctx->pc != 0x195C88u) { return; }
    }
    ctx->pc = 0x195C88u;
    // 0x195c88: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x195c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x195c8c: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x195C8Cu;
    SET_GPR_U32(ctx, 31, 0x195C94u);
    ctx->pc = 0x195C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195C8Cu;
            // 0x195c90: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C94u; }
        if (ctx->pc != 0x195C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C94u; }
        if (ctx->pc != 0x195C94u) { return; }
    }
    ctx->pc = 0x195C94u;
    // 0x195c94: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x195c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x195c98: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x195C98u;
    SET_GPR_U32(ctx, 31, 0x195CA0u);
    ctx->pc = 0x195C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195C98u;
            // 0x195c9c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CA0u; }
        if (ctx->pc != 0x195CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CA0u; }
        if (ctx->pc != 0x195CA0u) { return; }
    }
    ctx->pc = 0x195CA0u;
    // 0x195ca0: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x195ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x195ca4: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x195CA4u;
    SET_GPR_U32(ctx, 31, 0x195CACu);
    ctx->pc = 0x195CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CA4u;
            // 0x195ca8: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CACu; }
        if (ctx->pc != 0x195CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CACu; }
        if (ctx->pc != 0x195CACu) { return; }
    }
    ctx->pc = 0x195CACu;
    // 0x195cac: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x195cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x195cb0: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x195CB0u;
    SET_GPR_U32(ctx, 31, 0x195CB8u);
    ctx->pc = 0x195CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CB0u;
            // 0x195cb4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CB8u; }
        if (ctx->pc != 0x195CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CB8u; }
        if (ctx->pc != 0x195CB8u) { return; }
    }
    ctx->pc = 0x195CB8u;
    // 0x195cb8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x195cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x195cbc: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x195CBCu;
    SET_GPR_U32(ctx, 31, 0x195CC4u);
    ctx->pc = 0x195CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CBCu;
            // 0x195cc0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CC4u; }
        if (ctx->pc != 0x195CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CC4u; }
        if (ctx->pc != 0x195CC4u) { return; }
    }
    ctx->pc = 0x195CC4u;
    // 0x195cc4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x195cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x195cc8: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x195CC8u;
    SET_GPR_U32(ctx, 31, 0x195CD0u);
    ctx->pc = 0x195CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CC8u;
            // 0x195ccc: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CD0u; }
        if (ctx->pc != 0x195CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CD0u; }
        if (ctx->pc != 0x195CD0u) { return; }
    }
    ctx->pc = 0x195CD0u;
    // 0x195cd0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x195cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x195cd4: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x195CD4u;
    SET_GPR_U32(ctx, 31, 0x195CDCu);
    ctx->pc = 0x195CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CD4u;
            // 0x195cd8: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CDCu; }
        if (ctx->pc != 0x195CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CDCu; }
        if (ctx->pc != 0x195CDCu) { return; }
    }
    ctx->pc = 0x195CDCu;
    // 0x195cdc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x195cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x195ce0: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x195CE0u;
    SET_GPR_U32(ctx, 31, 0x195CE8u);
    ctx->pc = 0x195CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CE0u;
            // 0x195ce4: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CE8u; }
        if (ctx->pc != 0x195CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CE8u; }
        if (ctx->pc != 0x195CE8u) { return; }
    }
    ctx->pc = 0x195CE8u;
    // 0x195ce8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x195ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x195cec: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x195CECu;
    SET_GPR_U32(ctx, 31, 0x195CF4u);
    ctx->pc = 0x195CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CECu;
            // 0x195cf0: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CF4u; }
        if (ctx->pc != 0x195CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CF4u; }
        if (ctx->pc != 0x195CF4u) { return; }
    }
    ctx->pc = 0x195CF4u;
    // 0x195cf4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x195cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x195cf8: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x195CF8u;
    SET_GPR_U32(ctx, 31, 0x195D00u);
    ctx->pc = 0x195CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CF8u;
            // 0x195cfc: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D00u; }
        if (ctx->pc != 0x195D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D00u; }
        if (ctx->pc != 0x195D00u) { return; }
    }
    ctx->pc = 0x195D00u;
    // 0x195d00: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x195D00u;
    SET_GPR_U32(ctx, 31, 0x195D08u);
    ctx->pc = 0x195D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195D00u;
            // 0x195d04: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D08u; }
        if (ctx->pc != 0x195D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D08u; }
        if (ctx->pc != 0x195D08u) { return; }
    }
    ctx->pc = 0x195D08u;
    // 0x195d08: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x195D08u;
    SET_GPR_U32(ctx, 31, 0x195D10u);
    ctx->pc = 0x195D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195D08u;
            // 0x195d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D10u; }
        if (ctx->pc != 0x195D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D10u; }
        if (ctx->pc != 0x195D10u) { return; }
    }
    ctx->pc = 0x195D10u;
    // 0x195d10: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x195d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x195d14: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x195d14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x195d18: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x195d18u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x195d1c: 0xac200238  sw          $zero, 0x238($at)
    ctx->pc = 0x195d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 568), GPR_U32(ctx, 0));
    // 0x195d20: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x195d20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d24: 0x26940420  addiu       $s4, $s4, 0x420
    ctx->pc = 0x195d24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1056));
    // 0x195d28: 0x26730240  addiu       $s3, $s3, 0x240
    ctx->pc = 0x195d28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
    // 0x195d2c: 0x27b200e8  addiu       $s2, $sp, 0xE8
    ctx->pc = 0x195d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x195d30: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x195d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x195d34: 0x27b00094  addiu       $s0, $sp, 0x94
    ctx->pc = 0x195d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x195d38: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x195d38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x195d3c: 0x27b7009c  addiu       $s7, $sp, 0x9C
    ctx->pc = 0x195d3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_195d40:
    // 0x195d40: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x195D40u;
    SET_GPR_U32(ctx, 31, 0x195D48u);
    ctx->pc = 0x195D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195D40u;
            // 0x195d44: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D48u; }
        if (ctx->pc != 0x195D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D48u; }
        if (ctx->pc != 0x195D48u) { return; }
    }
    ctx->pc = 0x195D48u;
    // 0x195d48: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x195d48u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195d4c: 0x3c033d56  lui         $v1, 0x3D56
    ctx->pc = 0x195d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15702 << 16));
    // 0x195d50: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x195d50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)30544u)));
    // 0x195d54: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x195d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x195d58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x195d5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x195d5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x195d60: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x195d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x195d64: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x195d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x195d68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x195d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d6c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x195d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195d74: 0x0  nop
    ctx->pc = 0x195d74u;
    // NOP
    // 0x195d78: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x195d78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x195d7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x195d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x195d80: 0xc04b82e  jal         func_12E0B8
    ctx->pc = 0x195D80u;
    SET_GPR_U32(ctx, 31, 0x195D88u);
    ctx->pc = 0x195D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195D80u;
            // 0x195d84: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E0B8u;
    if (runtime->hasFunction(0x12E0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12E0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D88u; }
        if (ctx->pc != 0x195D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrix_0x12e0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D88u; }
        if (ctx->pc != 0x195D88u) { return; }
    }
    ctx->pc = 0x195D88u;
    // 0x195d88: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x195d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195d8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x195d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x195d90: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x195d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x195d94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x195d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x195d98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x195d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195d9c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x195d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195da0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x195da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x195da4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x195da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195da8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x195da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x195dac: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x195dacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x195db0: 0xc04b758  jal         func_12DD60
    ctx->pc = 0x195DB0u;
    SET_GPR_U32(ctx, 31, 0x195DB8u);
    ctx->pc = 0x195DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195DB0u;
            // 0x195db4: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD60u;
    if (runtime->hasFunction(0x12DD60u)) {
        auto targetFn = runtime->lookupFunction(0x12DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DB8u; }
        if (ctx->pc != 0x195DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x12dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DB8u; }
        if (ctx->pc != 0x195DB8u) { return; }
    }
    ctx->pc = 0x195DB8u;
    // 0x195db8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x195db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195dbc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x195dbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x195dc0: 0x2aa30078  slti        $v1, $s5, 0x78
    ctx->pc = 0x195dc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x195dc4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x195dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x195dc8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x195dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195dcc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x195dccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x195dd0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x195dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x195dd4: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x195DD4u;
    {
        const bool branch_taken_0x195dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195DD4u;
            // 0x195dd8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195dd4) {
            ctx->pc = 0x195D40u;
            goto label_195d40;
        }
    }
    ctx->pc = 0x195DDCu;
    // 0x195ddc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x195ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195de0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x195de0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x195de4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x195de4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195de8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x195de8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195dec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x195decu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195df0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x195df0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195df4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195e00: 0x3e00008  jr          $ra
    ctx->pc = 0x195E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195E00u;
            // 0x195e04: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195D40u: goto label_195d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195E08u;
}
