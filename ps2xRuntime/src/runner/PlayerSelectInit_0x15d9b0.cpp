#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PlayerSelectInit
// Address: 0x15d9b0 - 0x1610b8
void PlayerSelectInit_0x15d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PlayerSelectInit_0x15d9b0");
#endif

    ctx->pc = 0x15d9b0u;

    // 0x15d9b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15d9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15d9b4: 0x2404013c  addiu       $a0, $zero, 0x13C
    ctx->pc = 0x15d9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x15d9b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15d9bc: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x15d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x15d9c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15d9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15d9c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d9c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15d9cc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x15d9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d9d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15d9d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d9dc: 0xc05c20c  jal         func_170830
    ctx->pc = 0x15D9DCu;
    SET_GPR_U32(ctx, 31, 0x15D9E4u);
    ctx->pc = 0x15D9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9DCu;
            // 0x15d9e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D9E4u; }
        if (ctx->pc != 0x15D9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D9E4u; }
        if (ctx->pc != 0x15D9E4u) { return; }
    }
    ctx->pc = 0x15D9E4u;
    // 0x15d9e4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D9E4u;
    SET_GPR_U32(ctx, 31, 0x15D9ECu);
    ctx->pc = 0x15D9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9E4u;
            // 0x15d9e8: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D9ECu; }
        if (ctx->pc != 0x15D9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D9ECu; }
        if (ctx->pc != 0x15D9ECu) { return; }
    }
    ctx->pc = 0x15D9ECu;
    // 0x15d9ec: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x15D9ECu;
    SET_GPR_U32(ctx, 31, 0x15D9F4u);
    ctx->pc = 0x15D9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D9ECu;
            // 0x15d9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D9F4u; }
        if (ctx->pc != 0x15D9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D9F4u; }
        if (ctx->pc != 0x15D9F4u) { return; }
    }
    ctx->pc = 0x15D9F4u;
    // 0x15d9f4: 0x2404013d  addiu       $a0, $zero, 0x13D
    ctx->pc = 0x15d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 317));
    // 0x15d9f8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x15d9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15d9fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da00: 0xc05c20c  jal         func_170830
    ctx->pc = 0x15DA00u;
    SET_GPR_U32(ctx, 31, 0x15DA08u);
    ctx->pc = 0x15DA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA00u;
            // 0x15da04: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA08u; }
        if (ctx->pc != 0x15DA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA08u; }
        if (ctx->pc != 0x15DA08u) { return; }
    }
    ctx->pc = 0x15DA08u;
    // 0x15da08: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15DA08u;
    SET_GPR_U32(ctx, 31, 0x15DA10u);
    ctx->pc = 0x15DA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA08u;
            // 0x15da0c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA10u; }
        if (ctx->pc != 0x15DA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA10u; }
        if (ctx->pc != 0x15DA10u) { return; }
    }
    ctx->pc = 0x15DA10u;
    // 0x15da10: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x15DA10u;
    SET_GPR_U32(ctx, 31, 0x15DA18u);
    ctx->pc = 0x15DA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA10u;
            // 0x15da14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA18u; }
        if (ctx->pc != 0x15DA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA18u; }
        if (ctx->pc != 0x15DA18u) { return; }
    }
    ctx->pc = 0x15DA18u;
    // 0x15da18: 0x2404013a  addiu       $a0, $zero, 0x13A
    ctx->pc = 0x15da18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
    // 0x15da1c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x15da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x15da20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15da20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da24: 0xc05c20c  jal         func_170830
    ctx->pc = 0x15DA24u;
    SET_GPR_U32(ctx, 31, 0x15DA2Cu);
    ctx->pc = 0x15DA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA24u;
            // 0x15da28: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA2Cu; }
        if (ctx->pc != 0x15DA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA2Cu; }
        if (ctx->pc != 0x15DA2Cu) { return; }
    }
    ctx->pc = 0x15DA2Cu;
    // 0x15da2c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15DA2Cu;
    SET_GPR_U32(ctx, 31, 0x15DA34u);
    ctx->pc = 0x15DA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA2Cu;
            // 0x15da30: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA34u; }
        if (ctx->pc != 0x15DA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA34u; }
        if (ctx->pc != 0x15DA34u) { return; }
    }
    ctx->pc = 0x15DA34u;
    // 0x15da34: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x15DA34u;
    SET_GPR_U32(ctx, 31, 0x15DA3Cu);
    ctx->pc = 0x15DA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA34u;
            // 0x15da38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA3Cu; }
        if (ctx->pc != 0x15DA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA3Cu; }
        if (ctx->pc != 0x15DA3Cu) { return; }
    }
    ctx->pc = 0x15DA3Cu;
    // 0x15da3c: 0x2404013b  addiu       $a0, $zero, 0x13B
    ctx->pc = 0x15da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 315));
    // 0x15da40: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x15da40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x15da44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15da44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da48: 0xc05c20c  jal         func_170830
    ctx->pc = 0x15DA48u;
    SET_GPR_U32(ctx, 31, 0x15DA50u);
    ctx->pc = 0x15DA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA48u;
            // 0x15da4c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA50u; }
        if (ctx->pc != 0x15DA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA50u; }
        if (ctx->pc != 0x15DA50u) { return; }
    }
    ctx->pc = 0x15DA50u;
    // 0x15da50: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15DA50u;
    SET_GPR_U32(ctx, 31, 0x15DA58u);
    ctx->pc = 0x15DA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA50u;
            // 0x15da54: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA58u; }
        if (ctx->pc != 0x15DA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA58u; }
        if (ctx->pc != 0x15DA58u) { return; }
    }
    ctx->pc = 0x15DA58u;
    // 0x15da58: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x15DA58u;
    SET_GPR_U32(ctx, 31, 0x15DA60u);
    ctx->pc = 0x15DA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA58u;
            // 0x15da5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA60u; }
        if (ctx->pc != 0x15DA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA60u; }
        if (ctx->pc != 0x15DA60u) { return; }
    }
    ctx->pc = 0x15DA60u;
    // 0x15da60: 0x2404013f  addiu       $a0, $zero, 0x13F
    ctx->pc = 0x15da60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
    // 0x15da64: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15DA64u;
    SET_GPR_U32(ctx, 31, 0x15DA6Cu);
    ctx->pc = 0x15DA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA64u;
            // 0x15da68: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA6Cu; }
        if (ctx->pc != 0x15DA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA6Cu; }
        if (ctx->pc != 0x15DA6Cu) { return; }
    }
    ctx->pc = 0x15DA6Cu;
    // 0x15da6c: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x15da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x15da70: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15DA70u;
    SET_GPR_U32(ctx, 31, 0x15DA78u);
    ctx->pc = 0x15DA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA70u;
            // 0x15da74: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA78u; }
        if (ctx->pc != 0x15DA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA78u; }
        if (ctx->pc != 0x15DA78u) { return; }
    }
    ctx->pc = 0x15DA78u;
    // 0x15da78: 0x24040141  addiu       $a0, $zero, 0x141
    ctx->pc = 0x15da78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x15da7c: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15DA7Cu;
    SET_GPR_U32(ctx, 31, 0x15DA84u);
    ctx->pc = 0x15DA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA7Cu;
            // 0x15da80: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA84u; }
        if (ctx->pc != 0x15DA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA84u; }
        if (ctx->pc != 0x15DA84u) { return; }
    }
    ctx->pc = 0x15DA84u;
    // 0x15da84: 0x24040142  addiu       $a0, $zero, 0x142
    ctx->pc = 0x15da84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x15da88: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15DA88u;
    SET_GPR_U32(ctx, 31, 0x15DA90u);
    ctx->pc = 0x15DA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA88u;
            // 0x15da8c: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA90u; }
        if (ctx->pc != 0x15DA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA90u; }
        if (ctx->pc != 0x15DA90u) { return; }
    }
    ctx->pc = 0x15DA90u;
    // 0x15da90: 0x24040143  addiu       $a0, $zero, 0x143
    ctx->pc = 0x15da90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
    // 0x15da94: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15DA94u;
    SET_GPR_U32(ctx, 31, 0x15DA9Cu);
    ctx->pc = 0x15DA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DA94u;
            // 0x15da98: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA9Cu; }
        if (ctx->pc != 0x15DA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA9Cu; }
        if (ctx->pc != 0x15DA9Cu) { return; }
    }
    ctx->pc = 0x15DA9Cu;
    // 0x15da9c: 0x24040144  addiu       $a0, $zero, 0x144
    ctx->pc = 0x15da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    // 0x15daa0: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15DAA0u;
    SET_GPR_U32(ctx, 31, 0x15DAA8u);
    ctx->pc = 0x15DAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DAA0u;
            // 0x15daa4: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DAA8u; }
        if (ctx->pc != 0x15DAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DAA8u; }
        if (ctx->pc != 0x15DAA8u) { return; }
    }
    ctx->pc = 0x15DAA8u;
    // 0x15daa8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x15daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x15daac: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15DAACu;
    SET_GPR_U32(ctx, 31, 0x15DAB4u);
    ctx->pc = 0x15DAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DAACu;
            // 0x15dab0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DAB4u; }
        if (ctx->pc != 0x15DAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DAB4u; }
        if (ctx->pc != 0x15DAB4u) { return; }
    }
    ctx->pc = 0x15DAB4u;
    // 0x15dab4: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x15dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x15dab8: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x15dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x15dabc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15dabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15dac0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dac4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x15dac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15dac8: 0x3c02480a  lui         $v0, 0x480A
    ctx->pc = 0x15dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18442 << 16));
    // 0x15dacc: 0x34424d00  ori         $v0, $v0, 0x4D00
    ctx->pc = 0x15daccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)19712u)));
    // 0x15dad0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15dad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15dad4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DAD4u;
    SET_GPR_U32(ctx, 31, 0x15DADCu);
    ctx->pc = 0x15DAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DAD4u;
            // 0x15dad8: 0x24844950  addiu       $a0, $a0, 0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DADCu; }
        if (ctx->pc != 0x15DADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DADCu; }
        if (ctx->pc != 0x15DADCu) { return; }
    }
    ctx->pc = 0x15DADCu;
    // 0x15dadc: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x15dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x15dae0: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x15dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x15dae4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15dae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15dae8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15daec: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x15daecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15daf0: 0x3c02480a  lui         $v0, 0x480A
    ctx->pc = 0x15daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18442 << 16));
    // 0x15daf4: 0x34424d00  ori         $v0, $v0, 0x4D00
    ctx->pc = 0x15daf4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)19712u)));
    // 0x15daf8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15daf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15dafc: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DAFCu;
    SET_GPR_U32(ctx, 31, 0x15DB04u);
    ctx->pc = 0x15DB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DAFCu;
            // 0x15db00: 0x24844960  addiu       $a0, $a0, 0x4960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB04u; }
        if (ctx->pc != 0x15DB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB04u; }
        if (ctx->pc != 0x15DB04u) { return; }
    }
    ctx->pc = 0x15DB04u;
    // 0x15db04: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15db04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15db08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15db08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db0c: 0x24844930  addiu       $a0, $a0, 0x4930
    ctx->pc = 0x15db0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18736));
    // 0x15db10: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DB10u;
    SET_GPR_U32(ctx, 31, 0x15DB18u);
    ctx->pc = 0x15DB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB10u;
            // 0x15db14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB18u; }
        if (ctx->pc != 0x15DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB18u; }
        if (ctx->pc != 0x15DB18u) { return; }
    }
    ctx->pc = 0x15DB18u;
    // 0x15db18: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15db18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15db1c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x15db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x15db20: 0x24844940  addiu       $a0, $a0, 0x4940
    ctx->pc = 0x15db20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18752));
    // 0x15db24: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DB24u;
    SET_GPR_U32(ctx, 31, 0x15DB2Cu);
    ctx->pc = 0x15DB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB24u;
            // 0x15db28: 0x240601c0  addiu       $a2, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB2Cu; }
        if (ctx->pc != 0x15DB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB2Cu; }
        if (ctx->pc != 0x15DB2Cu) { return; }
    }
    ctx->pc = 0x15DB2Cu;
    // 0x15db2c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15db30: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15DB30u;
    SET_GPR_U32(ctx, 31, 0x15DB38u);
    ctx->pc = 0x15DB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB30u;
            // 0x15db34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB38u; }
        if (ctx->pc != 0x15DB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB38u; }
        if (ctx->pc != 0x15DB38u) { return; }
    }
    ctx->pc = 0x15DB38u;
    // 0x15db38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15db38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15db3c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15db40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15db44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15db44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db48: 0x24844690  addiu       $a0, $a0, 0x4690
    ctx->pc = 0x15db48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18064));
    // 0x15db4c: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15db50: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15db50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15db54: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15db54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15db58: 0x24a2fff8  addiu       $v0, $a1, -0x8
    ctx->pc = 0x15db58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x15db5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15db5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15db60: 0x246200c8  addiu       $v0, $v1, 0xC8
    ctx->pc = 0x15db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x15db64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15db64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15db68: 0x0  nop
    ctx->pc = 0x15db68u;
    // NOP
    // 0x15db6c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15db6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15db70: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DB70u;
    SET_GPR_U32(ctx, 31, 0x15DB78u);
    ctx->pc = 0x15DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DB70u;
            // 0x15db74: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB78u; }
        if (ctx->pc != 0x15DB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB78u; }
        if (ctx->pc != 0x15DB78u) { return; }
    }
    ctx->pc = 0x15DB78u;
    // 0x15db78: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15db78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15db7c: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15db80: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15db80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15db84: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15db84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15db88: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15db88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15db8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15db90: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15db90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15db94: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15db98: 0x248446a0  addiu       $a0, $a0, 0x46A0
    ctx->pc = 0x15db98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18080));
    // 0x15db9c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x15db9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x15dba0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15dba4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15dba4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dba8: 0x246300c8  addiu       $v1, $v1, 0xC8
    ctx->pc = 0x15dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x15dbac: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15dbacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15dbb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dbb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dbb8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DBB8u;
    SET_GPR_U32(ctx, 31, 0x15DBC0u);
    ctx->pc = 0x15DBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBB8u;
            // 0x15dbbc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DBC0u; }
        if (ctx->pc != 0x15DBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DBC0u; }
        if (ctx->pc != 0x15DBC0u) { return; }
    }
    ctx->pc = 0x15DBC0u;
    // 0x15dbc0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15dbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15dbc4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dbc8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15dbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15dbcc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DBCCu;
    SET_GPR_U32(ctx, 31, 0x15DBD4u);
    ctx->pc = 0x15DBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBCCu;
            // 0x15dbd0: 0x24844670  addiu       $a0, $a0, 0x4670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DBD4u; }
        if (ctx->pc != 0x15DBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DBD4u; }
        if (ctx->pc != 0x15DBD4u) { return; }
    }
    ctx->pc = 0x15DBD4u;
    // 0x15dbd4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15dbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15dbd8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dbdc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15dbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15dbe0: 0x24844680  addiu       $a0, $a0, 0x4680
    ctx->pc = 0x15dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18048));
    // 0x15dbe4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15dbe8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15dbec: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15dbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15dbf0: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DBF0u;
    SET_GPR_U32(ctx, 31, 0x15DBF8u);
    ctx->pc = 0x15DBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBF0u;
            // 0x15dbf4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DBF8u; }
        if (ctx->pc != 0x15DBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DBF8u; }
        if (ctx->pc != 0x15DBF8u) { return; }
    }
    ctx->pc = 0x15DBF8u;
    // 0x15dbf8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15dbfc: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15DBFCu;
    SET_GPR_U32(ctx, 31, 0x15DC04u);
    ctx->pc = 0x15DC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBFCu;
            // 0x15dc00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC04u; }
        if (ctx->pc != 0x15DC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC04u; }
        if (ctx->pc != 0x15DC04u) { return; }
    }
    ctx->pc = 0x15DC04u;
    // 0x15dc04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15dc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dc08: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dc0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15dc10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15dc10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc14: 0x248448f0  addiu       $a0, $a0, 0x48F0
    ctx->pc = 0x15dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18672));
    // 0x15dc18: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15dc1c: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15dc1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15dc20: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15dc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15dc24: 0x24a2ff83  addiu       $v0, $a1, -0x7D
    ctx->pc = 0x15dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967171));
    // 0x15dc28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15dc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15dc2c: 0x2462ffe8  addiu       $v0, $v1, -0x18
    ctx->pc = 0x15dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x15dc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dc34: 0x0  nop
    ctx->pc = 0x15dc34u;
    // NOP
    // 0x15dc38: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15dc38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15dc3c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DC3Cu;
    SET_GPR_U32(ctx, 31, 0x15DC44u);
    ctx->pc = 0x15DC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC3Cu;
            // 0x15dc40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC44u; }
        if (ctx->pc != 0x15DC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC44u; }
        if (ctx->pc != 0x15DC44u) { return; }
    }
    ctx->pc = 0x15DC44u;
    // 0x15dc44: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15dc44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15dc48: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15dc4c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15dc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15dc50: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15dc50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15dc54: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15dc54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15dc58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15dc5c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dc60: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15dc64: 0x24844900  addiu       $a0, $a0, 0x4900
    ctx->pc = 0x15dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18688));
    // 0x15dc68: 0x24c6ff83  addiu       $a2, $a2, -0x7D
    ctx->pc = 0x15dc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967171));
    // 0x15dc6c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15dc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15dc70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15dc70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dc74: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x15dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x15dc78: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15dc78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15dc7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dc80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dc80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dc84: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DC84u;
    SET_GPR_U32(ctx, 31, 0x15DC8Cu);
    ctx->pc = 0x15DC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC84u;
            // 0x15dc88: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC8Cu; }
        if (ctx->pc != 0x15DC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DC8Cu; }
        if (ctx->pc != 0x15DC8Cu) { return; }
    }
    ctx->pc = 0x15DC8Cu;
    // 0x15dc8c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15dc90: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dc94: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15dc94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15dc98: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DC98u;
    SET_GPR_U32(ctx, 31, 0x15DCA0u);
    ctx->pc = 0x15DC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DC98u;
            // 0x15dc9c: 0x248448b0  addiu       $a0, $a0, 0x48B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCA0u; }
        if (ctx->pc != 0x15DCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCA0u; }
        if (ctx->pc != 0x15DCA0u) { return; }
    }
    ctx->pc = 0x15DCA0u;
    // 0x15dca0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15dca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15dca4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dca8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15dca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15dcac: 0x248448c0  addiu       $a0, $a0, 0x48C0
    ctx->pc = 0x15dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18624));
    // 0x15dcb0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15dcb4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15dcb8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15dcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15dcbc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DCBCu;
    SET_GPR_U32(ctx, 31, 0x15DCC4u);
    ctx->pc = 0x15DCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DCBCu;
            // 0x15dcc0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCC4u; }
        if (ctx->pc != 0x15DCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DCC4u; }
        if (ctx->pc != 0x15DCC4u) { return; }
    }
    ctx->pc = 0x15DCC4u;
    // 0x15dcc4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15dcc8: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15dccc: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15dcccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15dcd0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dcd4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15dcd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15dcd8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15dcdc: 0x24844910  addiu       $a0, $a0, 0x4910
    ctx->pc = 0x15dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18704));
    // 0x15dce0: 0x24a2007d  addiu       $v0, $a1, 0x7D
    ctx->pc = 0x15dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 125));
    // 0x15dce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15dce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15dce8: 0x2462ffe8  addiu       $v0, $v1, -0x18
    ctx->pc = 0x15dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x15dcec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dcecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dcf0: 0x0  nop
    ctx->pc = 0x15dcf0u;
    // NOP
    // 0x15dcf4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15dcf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15dcf8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DCF8u;
    SET_GPR_U32(ctx, 31, 0x15DD00u);
    ctx->pc = 0x15DCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DCF8u;
            // 0x15dcfc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD00u; }
        if (ctx->pc != 0x15DD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD00u; }
        if (ctx->pc != 0x15DD00u) { return; }
    }
    ctx->pc = 0x15DD00u;
    // 0x15dd00: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15dd00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15dd04: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15dd08: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15dd0c: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15dd0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15dd10: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15dd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15dd14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15dd18: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dd1c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15dd20: 0x24844920  addiu       $a0, $a0, 0x4920
    ctx->pc = 0x15dd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18720));
    // 0x15dd24: 0x24c6007d  addiu       $a2, $a2, 0x7D
    ctx->pc = 0x15dd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 125));
    // 0x15dd28: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15dd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15dd2c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15dd2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dd30: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x15dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x15dd34: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15dd34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15dd38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dd3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dd3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dd40: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DD40u;
    SET_GPR_U32(ctx, 31, 0x15DD48u);
    ctx->pc = 0x15DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD40u;
            // 0x15dd44: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD48u; }
        if (ctx->pc != 0x15DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD48u; }
        if (ctx->pc != 0x15DD48u) { return; }
    }
    ctx->pc = 0x15DD48u;
    // 0x15dd48: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15dd4c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dd50: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15dd54: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DD54u;
    SET_GPR_U32(ctx, 31, 0x15DD5Cu);
    ctx->pc = 0x15DD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD54u;
            // 0x15dd58: 0x248448d0  addiu       $a0, $a0, 0x48D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD5Cu; }
        if (ctx->pc != 0x15DD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD5Cu; }
        if (ctx->pc != 0x15DD5Cu) { return; }
    }
    ctx->pc = 0x15DD5Cu;
    // 0x15dd5c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15dd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15dd60: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dd64: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15dd68: 0x248448e0  addiu       $a0, $a0, 0x48E0
    ctx->pc = 0x15dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18656));
    // 0x15dd6c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15dd70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15dd74: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15dd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15dd78: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DD78u;
    SET_GPR_U32(ctx, 31, 0x15DD80u);
    ctx->pc = 0x15DD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD78u;
            // 0x15dd7c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD80u; }
        if (ctx->pc != 0x15DD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD80u; }
        if (ctx->pc != 0x15DD80u) { return; }
    }
    ctx->pc = 0x15DD80u;
    // 0x15dd80: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15dd84: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15DD84u;
    SET_GPR_U32(ctx, 31, 0x15DD8Cu);
    ctx->pc = 0x15DD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD84u;
            // 0x15dd88: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD8Cu; }
        if (ctx->pc != 0x15DD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD8Cu; }
        if (ctx->pc != 0x15DD8Cu) { return; }
    }
    ctx->pc = 0x15DD8Cu;
    // 0x15dd8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dd90: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dd94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15dd98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15dd98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd9c: 0x24844870  addiu       $a0, $a0, 0x4870
    ctx->pc = 0x15dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18544));
    // 0x15dda0: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15dda4: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15dda4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15dda8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15dda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ddac: 0x24a2ff82  addiu       $v0, $a1, -0x7E
    ctx->pc = 0x15ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967170));
    // 0x15ddb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ddb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ddb4: 0x2462006e  addiu       $v0, $v1, 0x6E
    ctx->pc = 0x15ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x15ddb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ddb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ddbc: 0x0  nop
    ctx->pc = 0x15ddbcu;
    // NOP
    // 0x15ddc0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15ddc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ddc4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DDC4u;
    SET_GPR_U32(ctx, 31, 0x15DDCCu);
    ctx->pc = 0x15DDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DDC4u;
            // 0x15ddc8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDCCu; }
        if (ctx->pc != 0x15DDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDCCu; }
        if (ctx->pc != 0x15DDCCu) { return; }
    }
    ctx->pc = 0x15DDCCu;
    // 0x15ddcc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ddccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ddd0: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15ddd4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ddd8: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15ddd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15dddc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15dddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15dde0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15dde4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dde8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ddec: 0x24844880  addiu       $a0, $a0, 0x4880
    ctx->pc = 0x15ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18560));
    // 0x15ddf0: 0x24c6ff82  addiu       $a2, $a2, -0x7E
    ctx->pc = 0x15ddf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967170));
    // 0x15ddf4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15ddf8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15ddf8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ddfc: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x15ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x15de00: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15de00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15de04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15de08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15de08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15de0c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DE0Cu;
    SET_GPR_U32(ctx, 31, 0x15DE14u);
    ctx->pc = 0x15DE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE0Cu;
            // 0x15de10: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE14u; }
        if (ctx->pc != 0x15DE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE14u; }
        if (ctx->pc != 0x15DE14u) { return; }
    }
    ctx->pc = 0x15DE14u;
    // 0x15de14: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15de14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15de18: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15de18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15de1c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15de1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15de20: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DE20u;
    SET_GPR_U32(ctx, 31, 0x15DE28u);
    ctx->pc = 0x15DE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE20u;
            // 0x15de24: 0x24844830  addiu       $a0, $a0, 0x4830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE28u; }
        if (ctx->pc != 0x15DE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE28u; }
        if (ctx->pc != 0x15DE28u) { return; }
    }
    ctx->pc = 0x15DE28u;
    // 0x15de28: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15de28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15de2c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15de30: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15de30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15de34: 0x24844840  addiu       $a0, $a0, 0x4840
    ctx->pc = 0x15de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18496));
    // 0x15de38: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15de38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15de3c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15de40: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15de40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15de44: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DE44u;
    SET_GPR_U32(ctx, 31, 0x15DE4Cu);
    ctx->pc = 0x15DE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE44u;
            // 0x15de48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE4Cu; }
        if (ctx->pc != 0x15DE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE4Cu; }
        if (ctx->pc != 0x15DE4Cu) { return; }
    }
    ctx->pc = 0x15DE4Cu;
    // 0x15de4c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15de4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15de50: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15de50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15de54: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15de54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15de58: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15de58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15de5c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15de5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15de60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15de64: 0x24844890  addiu       $a0, $a0, 0x4890
    ctx->pc = 0x15de64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18576));
    // 0x15de68: 0x24a2007c  addiu       $v0, $a1, 0x7C
    ctx->pc = 0x15de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 124));
    // 0x15de6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15de6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15de70: 0x2462006e  addiu       $v0, $v1, 0x6E
    ctx->pc = 0x15de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x15de74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15de74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15de78: 0x0  nop
    ctx->pc = 0x15de78u;
    // NOP
    // 0x15de7c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15de7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15de80: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DE80u;
    SET_GPR_U32(ctx, 31, 0x15DE88u);
    ctx->pc = 0x15DE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE80u;
            // 0x15de84: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE88u; }
        if (ctx->pc != 0x15DE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE88u; }
        if (ctx->pc != 0x15DE88u) { return; }
    }
    ctx->pc = 0x15DE88u;
    // 0x15de88: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15de88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15de8c: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15de90: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15de90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15de94: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15de94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15de98: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15de98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15de9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15dea0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dea4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15dea8: 0x248448a0  addiu       $a0, $a0, 0x48A0
    ctx->pc = 0x15dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18592));
    // 0x15deac: 0x24c6007c  addiu       $a2, $a2, 0x7C
    ctx->pc = 0x15deacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 124));
    // 0x15deb0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15deb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15deb4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15deb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15deb8: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x15deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x15debc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15debcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15dec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dec8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DEC8u;
    SET_GPR_U32(ctx, 31, 0x15DED0u);
    ctx->pc = 0x15DECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DEC8u;
            // 0x15decc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DED0u; }
        if (ctx->pc != 0x15DED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DED0u; }
        if (ctx->pc != 0x15DED0u) { return; }
    }
    ctx->pc = 0x15DED0u;
    // 0x15ded0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ded4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ded8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15ded8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15dedc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DEDCu;
    SET_GPR_U32(ctx, 31, 0x15DEE4u);
    ctx->pc = 0x15DEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DEDCu;
            // 0x15dee0: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DEE4u; }
        if (ctx->pc != 0x15DEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DEE4u; }
        if (ctx->pc != 0x15DEE4u) { return; }
    }
    ctx->pc = 0x15DEE4u;
    // 0x15dee4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15dee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15dee8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15deec: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15deecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15def0: 0x24844860  addiu       $a0, $a0, 0x4860
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18528));
    // 0x15def4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15def4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15def8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15defc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15defcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15df00: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DF00u;
    SET_GPR_U32(ctx, 31, 0x15DF08u);
    ctx->pc = 0x15DF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF00u;
            // 0x15df04: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF08u; }
        if (ctx->pc != 0x15DF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF08u; }
        if (ctx->pc != 0x15DF08u) { return; }
    }
    ctx->pc = 0x15DF08u;
    // 0x15df08: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15df08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15df0c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15DF0Cu;
    SET_GPR_U32(ctx, 31, 0x15DF14u);
    ctx->pc = 0x15DF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF0Cu;
            // 0x15df10: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF14u; }
        if (ctx->pc != 0x15DF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF14u; }
        if (ctx->pc != 0x15DF14u) { return; }
    }
    ctx->pc = 0x15DF14u;
    // 0x15df14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15df14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15df18: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15df18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15df1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15df20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15df20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df24: 0x248447f0  addiu       $a0, $a0, 0x47F0
    ctx->pc = 0x15df24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18416));
    // 0x15df28: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15df28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15df2c: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15df2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15df30: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15df30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15df34: 0x24a2ff82  addiu       $v0, $a1, -0x7E
    ctx->pc = 0x15df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967170));
    // 0x15df38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15df38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15df3c: 0x24620068  addiu       $v0, $v1, 0x68
    ctx->pc = 0x15df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x15df40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15df40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15df44: 0x0  nop
    ctx->pc = 0x15df44u;
    // NOP
    // 0x15df48: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15df48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15df4c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DF4Cu;
    SET_GPR_U32(ctx, 31, 0x15DF54u);
    ctx->pc = 0x15DF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF4Cu;
            // 0x15df50: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF54u; }
        if (ctx->pc != 0x15DF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF54u; }
        if (ctx->pc != 0x15DF54u) { return; }
    }
    ctx->pc = 0x15DF54u;
    // 0x15df54: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15df54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15df58: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15df58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15df5c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15df5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15df60: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15df60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15df64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15df64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15df68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15df68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15df6c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15df70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15df74: 0x24844800  addiu       $a0, $a0, 0x4800
    ctx->pc = 0x15df74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18432));
    // 0x15df78: 0x24c6ff82  addiu       $a2, $a2, -0x7E
    ctx->pc = 0x15df78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967170));
    // 0x15df7c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15df80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15df80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15df84: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x15df84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x15df88: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15df88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15df8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15df90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15df90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15df94: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15DF94u;
    SET_GPR_U32(ctx, 31, 0x15DF9Cu);
    ctx->pc = 0x15DF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF94u;
            // 0x15df98: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF9Cu; }
        if (ctx->pc != 0x15DF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF9Cu; }
        if (ctx->pc != 0x15DF9Cu) { return; }
    }
    ctx->pc = 0x15DF9Cu;
    // 0x15df9c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15df9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15dfa0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dfa4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15dfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15dfa8: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DFA8u;
    SET_GPR_U32(ctx, 31, 0x15DFB0u);
    ctx->pc = 0x15DFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFA8u;
            // 0x15dfac: 0x248447b0  addiu       $a0, $a0, 0x47B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFB0u; }
        if (ctx->pc != 0x15DFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFB0u; }
        if (ctx->pc != 0x15DFB0u) { return; }
    }
    ctx->pc = 0x15DFB0u;
    // 0x15dfb0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15dfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15dfb4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dfb8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15dfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15dfbc: 0x248447c0  addiu       $a0, $a0, 0x47C0
    ctx->pc = 0x15dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18368));
    // 0x15dfc0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15dfc4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15dfc8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15dfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15dfcc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15DFCCu;
    SET_GPR_U32(ctx, 31, 0x15DFD4u);
    ctx->pc = 0x15DFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFCCu;
            // 0x15dfd0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFD4u; }
        if (ctx->pc != 0x15DFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFD4u; }
        if (ctx->pc != 0x15DFD4u) { return; }
    }
    ctx->pc = 0x15DFD4u;
    // 0x15dfd4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15dfd8: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15dfdc: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15dfdcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15dfe0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15dfe4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15dfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15dfe8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15dfec: 0x24844810  addiu       $a0, $a0, 0x4810
    ctx->pc = 0x15dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18448));
    // 0x15dff0: 0x24a2007c  addiu       $v0, $a1, 0x7C
    ctx->pc = 0x15dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 124));
    // 0x15dff4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15dff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15dff8: 0x24620068  addiu       $v0, $v1, 0x68
    ctx->pc = 0x15dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x15dffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e000: 0x0  nop
    ctx->pc = 0x15e000u;
    // NOP
    // 0x15e004: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e008: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E008u;
    SET_GPR_U32(ctx, 31, 0x15E010u);
    ctx->pc = 0x15E00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E008u;
            // 0x15e00c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E010u; }
        if (ctx->pc != 0x15E010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E010u; }
        if (ctx->pc != 0x15E010u) { return; }
    }
    ctx->pc = 0x15E010u;
    // 0x15e010: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e014: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15e014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15e018: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e01c: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15e01cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15e020: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e024: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e028: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e02c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e030: 0x24844820  addiu       $a0, $a0, 0x4820
    ctx->pc = 0x15e030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    // 0x15e034: 0x24c6007c  addiu       $a2, $a2, 0x7C
    ctx->pc = 0x15e034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 124));
    // 0x15e038: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e03c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e03cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e040: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x15e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x15e044: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e050: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E050u;
    SET_GPR_U32(ctx, 31, 0x15E058u);
    ctx->pc = 0x15E054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E050u;
            // 0x15e054: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E058u; }
        if (ctx->pc != 0x15E058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E058u; }
        if (ctx->pc != 0x15E058u) { return; }
    }
    ctx->pc = 0x15E058u;
    // 0x15e058: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e05c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e060: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e064: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E064u;
    SET_GPR_U32(ctx, 31, 0x15E06Cu);
    ctx->pc = 0x15E068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E064u;
            // 0x15e068: 0x248447d0  addiu       $a0, $a0, 0x47D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E06Cu; }
        if (ctx->pc != 0x15E06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E06Cu; }
        if (ctx->pc != 0x15E06Cu) { return; }
    }
    ctx->pc = 0x15E06Cu;
    // 0x15e06c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e06cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e070: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e074: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e078: 0x248447e0  addiu       $a0, $a0, 0x47E0
    ctx->pc = 0x15e078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18400));
    // 0x15e07c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e080: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e084: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e088: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E088u;
    SET_GPR_U32(ctx, 31, 0x15E090u);
    ctx->pc = 0x15E08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E088u;
            // 0x15e08c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E090u; }
        if (ctx->pc != 0x15E090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E090u; }
        if (ctx->pc != 0x15E090u) { return; }
    }
    ctx->pc = 0x15E090u;
    // 0x15e090: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15e090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15e094: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15E094u;
    SET_GPR_U32(ctx, 31, 0x15E09Cu);
    ctx->pc = 0x15E098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E094u;
            // 0x15e098: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E09Cu; }
        if (ctx->pc != 0x15E09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E09Cu; }
        if (ctx->pc != 0x15E09Cu) { return; }
    }
    ctx->pc = 0x15E09Cu;
    // 0x15e09c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15e09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e0a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e0a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e0a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0ac: 0x24844730  addiu       $a0, $a0, 0x4730
    ctx->pc = 0x15e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18224));
    // 0x15e0b0: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e0b4: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e0b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e0b8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e0bc: 0x24a2ff17  addiu       $v0, $a1, -0xE9
    ctx->pc = 0x15e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967063));
    // 0x15e0c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e0c4: 0x2462ffe4  addiu       $v0, $v1, -0x1C
    ctx->pc = 0x15e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x15e0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e0cc: 0x0  nop
    ctx->pc = 0x15e0ccu;
    // NOP
    // 0x15e0d0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e0d4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E0D4u;
    SET_GPR_U32(ctx, 31, 0x15E0DCu);
    ctx->pc = 0x15E0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0D4u;
            // 0x15e0d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E0DCu; }
        if (ctx->pc != 0x15E0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E0DCu; }
        if (ctx->pc != 0x15E0DCu) { return; }
    }
    ctx->pc = 0x15E0DCu;
    // 0x15e0dc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e0e0: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e0e4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e0e8: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e0e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e0ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e0f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e0f4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e0f8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e0fc: 0x24844740  addiu       $a0, $a0, 0x4740
    ctx->pc = 0x15e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18240));
    // 0x15e100: 0x24c6ff17  addiu       $a2, $a2, -0xE9
    ctx->pc = 0x15e100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967063));
    // 0x15e104: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e108: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e108u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e10c: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x15e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x15e110: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e11c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E11Cu;
    SET_GPR_U32(ctx, 31, 0x15E124u);
    ctx->pc = 0x15E120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E11Cu;
            // 0x15e120: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E124u; }
        if (ctx->pc != 0x15E124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E124u; }
        if (ctx->pc != 0x15E124u) { return; }
    }
    ctx->pc = 0x15E124u;
    // 0x15e124: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e128: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e12c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e12cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e130: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E130u;
    SET_GPR_U32(ctx, 31, 0x15E138u);
    ctx->pc = 0x15E134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E130u;
            // 0x15e134: 0x248446b0  addiu       $a0, $a0, 0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E138u; }
        if (ctx->pc != 0x15E138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E138u; }
        if (ctx->pc != 0x15E138u) { return; }
    }
    ctx->pc = 0x15E138u;
    // 0x15e138: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e13c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e140: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e144: 0x248446c0  addiu       $a0, $a0, 0x46C0
    ctx->pc = 0x15e144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18112));
    // 0x15e148: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e14c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e150: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e154: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E154u;
    SET_GPR_U32(ctx, 31, 0x15E15Cu);
    ctx->pc = 0x15E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E154u;
            // 0x15e158: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E15Cu; }
        if (ctx->pc != 0x15E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E15Cu; }
        if (ctx->pc != 0x15E15Cu) { return; }
    }
    ctx->pc = 0x15E15Cu;
    // 0x15e15c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e160: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e164: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e164u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e168: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e16c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e170: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e174: 0x24844750  addiu       $a0, $a0, 0x4750
    ctx->pc = 0x15e174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18256));
    // 0x15e178: 0x24a20011  addiu       $v0, $a1, 0x11
    ctx->pc = 0x15e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 17));
    // 0x15e17c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e180: 0x2462ffe4  addiu       $v0, $v1, -0x1C
    ctx->pc = 0x15e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x15e184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e188: 0x0  nop
    ctx->pc = 0x15e188u;
    // NOP
    // 0x15e18c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e190: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E190u;
    SET_GPR_U32(ctx, 31, 0x15E198u);
    ctx->pc = 0x15E194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E190u;
            // 0x15e194: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E198u; }
        if (ctx->pc != 0x15E198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E198u; }
        if (ctx->pc != 0x15E198u) { return; }
    }
    ctx->pc = 0x15E198u;
    // 0x15e198: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e19c: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e1a0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e1a4: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e1a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e1a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e1ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e1b0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e1b4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e1b8: 0x24844760  addiu       $a0, $a0, 0x4760
    ctx->pc = 0x15e1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18272));
    // 0x15e1bc: 0x24c60011  addiu       $a2, $a2, 0x11
    ctx->pc = 0x15e1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17));
    // 0x15e1c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e1c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e1c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e1c8: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x15e1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x15e1cc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e1d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e1d8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E1D8u;
    SET_GPR_U32(ctx, 31, 0x15E1E0u);
    ctx->pc = 0x15E1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E1D8u;
            // 0x15e1dc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E1E0u; }
        if (ctx->pc != 0x15E1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E1E0u; }
        if (ctx->pc != 0x15E1E0u) { return; }
    }
    ctx->pc = 0x15E1E0u;
    // 0x15e1e0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e1e4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e1e8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e1ec: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E1ECu;
    SET_GPR_U32(ctx, 31, 0x15E1F4u);
    ctx->pc = 0x15E1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E1ECu;
            // 0x15e1f0: 0x248446d0  addiu       $a0, $a0, 0x46D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E1F4u; }
        if (ctx->pc != 0x15E1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E1F4u; }
        if (ctx->pc != 0x15E1F4u) { return; }
    }
    ctx->pc = 0x15E1F4u;
    // 0x15e1f4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e1f8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e1fc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e200: 0x248446e0  addiu       $a0, $a0, 0x46E0
    ctx->pc = 0x15e200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18144));
    // 0x15e204: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e208: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e20c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e210: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E210u;
    SET_GPR_U32(ctx, 31, 0x15E218u);
    ctx->pc = 0x15E214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E210u;
            // 0x15e214: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E218u; }
        if (ctx->pc != 0x15E218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E218u; }
        if (ctx->pc != 0x15E218u) { return; }
    }
    ctx->pc = 0x15E218u;
    // 0x15e218: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15e218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15e21c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15E21Cu;
    SET_GPR_U32(ctx, 31, 0x15E224u);
    ctx->pc = 0x15E220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E21Cu;
            // 0x15e220: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E224u; }
        if (ctx->pc != 0x15E224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E224u; }
        if (ctx->pc != 0x15E224u) { return; }
    }
    ctx->pc = 0x15E224u;
    // 0x15e224: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15e224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e228: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e22c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e234: 0x24844770  addiu       $a0, $a0, 0x4770
    ctx->pc = 0x15e234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18288));
    // 0x15e238: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e23c: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e23cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e240: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e244: 0x24a2ffeb  addiu       $v0, $a1, -0x15
    ctx->pc = 0x15e244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967275));
    // 0x15e248: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e24c: 0x2462ffe4  addiu       $v0, $v1, -0x1C
    ctx->pc = 0x15e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x15e250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e254: 0x0  nop
    ctx->pc = 0x15e254u;
    // NOP
    // 0x15e258: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e25c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E25Cu;
    SET_GPR_U32(ctx, 31, 0x15E264u);
    ctx->pc = 0x15E260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E25Cu;
            // 0x15e260: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E264u; }
        if (ctx->pc != 0x15E264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E264u; }
        if (ctx->pc != 0x15E264u) { return; }
    }
    ctx->pc = 0x15E264u;
    // 0x15e264: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e268: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e26c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e270: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e270u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e274: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e278: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e27c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e280: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e284: 0x24844780  addiu       $a0, $a0, 0x4780
    ctx->pc = 0x15e284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18304));
    // 0x15e288: 0x24c6ffeb  addiu       $a2, $a2, -0x15
    ctx->pc = 0x15e288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967275));
    // 0x15e28c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e290: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e290u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e294: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x15e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x15e298: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e29c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e2a4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E2A4u;
    SET_GPR_U32(ctx, 31, 0x15E2ACu);
    ctx->pc = 0x15E2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2A4u;
            // 0x15e2a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2ACu; }
        if (ctx->pc != 0x15E2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2ACu; }
        if (ctx->pc != 0x15E2ACu) { return; }
    }
    ctx->pc = 0x15E2ACu;
    // 0x15e2ac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e2b0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e2b4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e2b8: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E2B8u;
    SET_GPR_U32(ctx, 31, 0x15E2C0u);
    ctx->pc = 0x15E2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2B8u;
            // 0x15e2bc: 0x248446f0  addiu       $a0, $a0, 0x46F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2C0u; }
        if (ctx->pc != 0x15E2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2C0u; }
        if (ctx->pc != 0x15E2C0u) { return; }
    }
    ctx->pc = 0x15E2C0u;
    // 0x15e2c0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e2c4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e2c8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e2cc: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x15e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x15e2d0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e2d4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e2d8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e2dc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E2DCu;
    SET_GPR_U32(ctx, 31, 0x15E2E4u);
    ctx->pc = 0x15E2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2DCu;
            // 0x15e2e0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2E4u; }
        if (ctx->pc != 0x15E2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2E4u; }
        if (ctx->pc != 0x15E2E4u) { return; }
    }
    ctx->pc = 0x15E2E4u;
    // 0x15e2e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e2e8: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e2ec: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e2ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e2f0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e2f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e2f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e2fc: 0x24844790  addiu       $a0, $a0, 0x4790
    ctx->pc = 0x15e2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18320));
    // 0x15e300: 0x24a200e5  addiu       $v0, $a1, 0xE5
    ctx->pc = 0x15e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 229));
    // 0x15e304: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e308: 0x2462ffe4  addiu       $v0, $v1, -0x1C
    ctx->pc = 0x15e308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x15e30c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e310: 0x0  nop
    ctx->pc = 0x15e310u;
    // NOP
    // 0x15e314: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e318: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E318u;
    SET_GPR_U32(ctx, 31, 0x15E320u);
    ctx->pc = 0x15E31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E318u;
            // 0x15e31c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E320u; }
        if (ctx->pc != 0x15E320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E320u; }
        if (ctx->pc != 0x15E320u) { return; }
    }
    ctx->pc = 0x15E320u;
    // 0x15e320: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e324: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e328: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e32c: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e32cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e330: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e334: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e338: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e33c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e340: 0x248447a0  addiu       $a0, $a0, 0x47A0
    ctx->pc = 0x15e340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    // 0x15e344: 0x24c600e5  addiu       $a2, $a2, 0xE5
    ctx->pc = 0x15e344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 229));
    // 0x15e348: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e34c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e34cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e350: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x15e350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x15e354: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e360: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E360u;
    SET_GPR_U32(ctx, 31, 0x15E368u);
    ctx->pc = 0x15E364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E360u;
            // 0x15e364: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E368u; }
        if (ctx->pc != 0x15E368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E368u; }
        if (ctx->pc != 0x15E368u) { return; }
    }
    ctx->pc = 0x15E368u;
    // 0x15e368: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e36c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e370: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e374: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E374u;
    SET_GPR_U32(ctx, 31, 0x15E37Cu);
    ctx->pc = 0x15E378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E374u;
            // 0x15e378: 0x24844710  addiu       $a0, $a0, 0x4710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E37Cu; }
        if (ctx->pc != 0x15E37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E37Cu; }
        if (ctx->pc != 0x15E37Cu) { return; }
    }
    ctx->pc = 0x15E37Cu;
    // 0x15e37c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e37cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e380: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e384: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e388: 0x24844720  addiu       $a0, $a0, 0x4720
    ctx->pc = 0x15e388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18208));
    // 0x15e38c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e390: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e394: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e398: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E398u;
    SET_GPR_U32(ctx, 31, 0x15E3A0u);
    ctx->pc = 0x15E39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E398u;
            // 0x15e39c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3A0u; }
        if (ctx->pc != 0x15E3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3A0u; }
        if (ctx->pc != 0x15E3A0u) { return; }
    }
    ctx->pc = 0x15E3A0u;
    // 0x15e3a0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15e3a4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15E3A4u;
    SET_GPR_U32(ctx, 31, 0x15E3ACu);
    ctx->pc = 0x15E3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3A4u;
            // 0x15e3a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3ACu; }
        if (ctx->pc != 0x15E3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3ACu; }
        if (ctx->pc != 0x15E3ACu) { return; }
    }
    ctx->pc = 0x15E3ACu;
    // 0x15e3ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15e3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e3b0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e3b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e3b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3bc: 0x24844370  addiu       $a0, $a0, 0x4370
    ctx->pc = 0x15e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17264));
    // 0x15e3c0: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e3c4: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e3c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e3c8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e3cc: 0x24a2ff36  addiu       $v0, $a1, -0xCA
    ctx->pc = 0x15e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967094));
    // 0x15e3d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e3d4: 0x2462002a  addiu       $v0, $v1, 0x2A
    ctx->pc = 0x15e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 42));
    // 0x15e3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e3dc: 0x0  nop
    ctx->pc = 0x15e3dcu;
    // NOP
    // 0x15e3e0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e3e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e3e4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E3E4u;
    SET_GPR_U32(ctx, 31, 0x15E3ECu);
    ctx->pc = 0x15E3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3E4u;
            // 0x15e3e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3ECu; }
        if (ctx->pc != 0x15E3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3ECu; }
        if (ctx->pc != 0x15E3ECu) { return; }
    }
    ctx->pc = 0x15E3ECu;
    // 0x15e3ec: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e3f0: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e3f4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e3f8: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e3f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e3fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e400: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e404: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e408: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e40c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x15e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x15e410: 0x24c6ff36  addiu       $a2, $a2, -0xCA
    ctx->pc = 0x15e410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967094));
    // 0x15e414: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e418: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e418u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e41c: 0x2463002a  addiu       $v1, $v1, 0x2A
    ctx->pc = 0x15e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 42));
    // 0x15e420: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e42c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E42Cu;
    SET_GPR_U32(ctx, 31, 0x15E434u);
    ctx->pc = 0x15E430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E42Cu;
            // 0x15e430: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E434u; }
        if (ctx->pc != 0x15E434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E434u; }
        if (ctx->pc != 0x15E434u) { return; }
    }
    ctx->pc = 0x15E434u;
    // 0x15e434: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e438: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e43c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e440: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E440u;
    SET_GPR_U32(ctx, 31, 0x15E448u);
    ctx->pc = 0x15E444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E440u;
            // 0x15e444: 0x24844070  addiu       $a0, $a0, 0x4070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E448u; }
        if (ctx->pc != 0x15E448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E448u; }
        if (ctx->pc != 0x15E448u) { return; }
    }
    ctx->pc = 0x15E448u;
    // 0x15e448: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e44c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e450: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e454: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x15e454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x15e458: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e45c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e460: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e464: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E464u;
    SET_GPR_U32(ctx, 31, 0x15E46Cu);
    ctx->pc = 0x15E468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E464u;
            // 0x15e468: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E46Cu; }
        if (ctx->pc != 0x15E46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E46Cu; }
        if (ctx->pc != 0x15E46Cu) { return; }
    }
    ctx->pc = 0x15E46Cu;
    // 0x15e46c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e470: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e474: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e474u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e478: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e47c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e480: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e484: 0x24844390  addiu       $a0, $a0, 0x4390
    ctx->pc = 0x15e484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
    // 0x15e488: 0x24a2ffcd  addiu       $v0, $a1, -0x33
    ctx->pc = 0x15e488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967245));
    // 0x15e48c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e490: 0x2462002a  addiu       $v0, $v1, 0x2A
    ctx->pc = 0x15e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 42));
    // 0x15e494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e498: 0x0  nop
    ctx->pc = 0x15e498u;
    // NOP
    // 0x15e49c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e49cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e4a0: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E4A0u;
    SET_GPR_U32(ctx, 31, 0x15E4A8u);
    ctx->pc = 0x15E4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4A0u;
            // 0x15e4a4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4A8u; }
        if (ctx->pc != 0x15E4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4A8u; }
        if (ctx->pc != 0x15E4A8u) { return; }
    }
    ctx->pc = 0x15E4A8u;
    // 0x15e4a8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e4ac: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e4b0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e4b4: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e4b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e4b8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e4bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e4c0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e4c4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e4c8: 0x248443a0  addiu       $a0, $a0, 0x43A0
    ctx->pc = 0x15e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17312));
    // 0x15e4cc: 0x24c6ffcd  addiu       $a2, $a2, -0x33
    ctx->pc = 0x15e4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967245));
    // 0x15e4d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e4d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e4d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e4d8: 0x2463002a  addiu       $v1, $v1, 0x2A
    ctx->pc = 0x15e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 42));
    // 0x15e4dc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e4dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e4e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e4e8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E4E8u;
    SET_GPR_U32(ctx, 31, 0x15E4F0u);
    ctx->pc = 0x15E4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4E8u;
            // 0x15e4ec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4F0u; }
        if (ctx->pc != 0x15E4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4F0u; }
        if (ctx->pc != 0x15E4F0u) { return; }
    }
    ctx->pc = 0x15E4F0u;
    // 0x15e4f0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e4f4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e4f8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e4fc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E4FCu;
    SET_GPR_U32(ctx, 31, 0x15E504u);
    ctx->pc = 0x15E500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4FCu;
            // 0x15e500: 0x24844090  addiu       $a0, $a0, 0x4090 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E504u; }
        if (ctx->pc != 0x15E504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E504u; }
        if (ctx->pc != 0x15E504u) { return; }
    }
    ctx->pc = 0x15E504u;
    // 0x15e504: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e508: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e50c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e510: 0x248440a0  addiu       $a0, $a0, 0x40A0
    ctx->pc = 0x15e510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16544));
    // 0x15e514: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e518: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e51c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e520: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E520u;
    SET_GPR_U32(ctx, 31, 0x15E528u);
    ctx->pc = 0x15E524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E520u;
            // 0x15e524: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E528u; }
        if (ctx->pc != 0x15E528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E528u; }
        if (ctx->pc != 0x15E528u) { return; }
    }
    ctx->pc = 0x15E528u;
    // 0x15e528: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e52c: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e530: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e530u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e534: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e538: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e53c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e540: 0x248443b0  addiu       $a0, $a0, 0x43B0
    ctx->pc = 0x15e540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17328));
    // 0x15e544: 0x24a2ff48  addiu       $v0, $a1, -0xB8
    ctx->pc = 0x15e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967112));
    // 0x15e548: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e54c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x15e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x15e550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e554: 0x0  nop
    ctx->pc = 0x15e554u;
    // NOP
    // 0x15e558: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e55c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E55Cu;
    SET_GPR_U32(ctx, 31, 0x15E564u);
    ctx->pc = 0x15E560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E55Cu;
            // 0x15e560: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E564u; }
        if (ctx->pc != 0x15E564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E564u; }
        if (ctx->pc != 0x15E564u) { return; }
    }
    ctx->pc = 0x15E564u;
    // 0x15e564: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e568: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e56c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e570: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e570u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e574: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e578: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e57c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e580: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e584: 0x248443c0  addiu       $a0, $a0, 0x43C0
    ctx->pc = 0x15e584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17344));
    // 0x15e588: 0x24c6ff48  addiu       $a2, $a2, -0xB8
    ctx->pc = 0x15e588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967112));
    // 0x15e58c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e590: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e590u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e594: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x15e594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x15e598: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e5a4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E5A4u;
    SET_GPR_U32(ctx, 31, 0x15E5ACu);
    ctx->pc = 0x15E5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5A4u;
            // 0x15e5a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5ACu; }
        if (ctx->pc != 0x15E5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5ACu; }
        if (ctx->pc != 0x15E5ACu) { return; }
    }
    ctx->pc = 0x15E5ACu;
    // 0x15e5ac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e5b0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e5b4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e5b8: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E5B8u;
    SET_GPR_U32(ctx, 31, 0x15E5C0u);
    ctx->pc = 0x15E5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5B8u;
            // 0x15e5bc: 0x248440b0  addiu       $a0, $a0, 0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5C0u; }
        if (ctx->pc != 0x15E5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5C0u; }
        if (ctx->pc != 0x15E5C0u) { return; }
    }
    ctx->pc = 0x15E5C0u;
    // 0x15e5c0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e5c4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e5c8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e5cc: 0x248440c0  addiu       $a0, $a0, 0x40C0
    ctx->pc = 0x15e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    // 0x15e5d0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e5d4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e5d8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e5dc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E5DCu;
    SET_GPR_U32(ctx, 31, 0x15E5E4u);
    ctx->pc = 0x15E5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5DCu;
            // 0x15e5e0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5E4u; }
        if (ctx->pc != 0x15E5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5E4u; }
        if (ctx->pc != 0x15E5E4u) { return; }
    }
    ctx->pc = 0x15E5E4u;
    // 0x15e5e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e5e8: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e5ec: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e5ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e5f0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e5f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e5f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e5fc: 0x248443d0  addiu       $a0, $a0, 0x43D0
    ctx->pc = 0x15e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17360));
    // 0x15e600: 0x24a2ffbb  addiu       $v0, $a1, -0x45
    ctx->pc = 0x15e600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967227));
    // 0x15e604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e608: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x15e608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x15e60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e610: 0x0  nop
    ctx->pc = 0x15e610u;
    // NOP
    // 0x15e614: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e618: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E618u;
    SET_GPR_U32(ctx, 31, 0x15E620u);
    ctx->pc = 0x15E61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E618u;
            // 0x15e61c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E620u; }
        if (ctx->pc != 0x15E620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E620u; }
        if (ctx->pc != 0x15E620u) { return; }
    }
    ctx->pc = 0x15E620u;
    // 0x15e620: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e624: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e628: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e62c: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e62cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e630: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e634: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e638: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e63c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e640: 0x248443e0  addiu       $a0, $a0, 0x43E0
    ctx->pc = 0x15e640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17376));
    // 0x15e644: 0x24c6ffbb  addiu       $a2, $a2, -0x45
    ctx->pc = 0x15e644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967227));
    // 0x15e648: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e64c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e64cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e650: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x15e650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x15e654: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e65c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e660: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E660u;
    SET_GPR_U32(ctx, 31, 0x15E668u);
    ctx->pc = 0x15E664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E660u;
            // 0x15e664: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E668u; }
        if (ctx->pc != 0x15E668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E668u; }
        if (ctx->pc != 0x15E668u) { return; }
    }
    ctx->pc = 0x15E668u;
    // 0x15e668: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e66c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e670: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e674: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E674u;
    SET_GPR_U32(ctx, 31, 0x15E67Cu);
    ctx->pc = 0x15E678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E674u;
            // 0x15e678: 0x248440d0  addiu       $a0, $a0, 0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E67Cu; }
        if (ctx->pc != 0x15E67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E67Cu; }
        if (ctx->pc != 0x15E67Cu) { return; }
    }
    ctx->pc = 0x15E67Cu;
    // 0x15e67c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e680: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e684: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e688: 0x248440e0  addiu       $a0, $a0, 0x40E0
    ctx->pc = 0x15e688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16608));
    // 0x15e68c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e690: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e694: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e698: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E698u;
    SET_GPR_U32(ctx, 31, 0x15E6A0u);
    ctx->pc = 0x15E69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E698u;
            // 0x15e69c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6A0u; }
        if (ctx->pc != 0x15E6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6A0u; }
        if (ctx->pc != 0x15E6A0u) { return; }
    }
    ctx->pc = 0x15E6A0u;
    // 0x15e6a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e6a4: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e6a8: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e6a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e6ac: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e6b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e6b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e6b8: 0x248443f0  addiu       $a0, $a0, 0x43F0
    ctx->pc = 0x15e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17392));
    // 0x15e6bc: 0x24a2ff36  addiu       $v0, $a1, -0xCA
    ctx->pc = 0x15e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967094));
    // 0x15e6c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e6c4: 0x24620054  addiu       $v0, $v1, 0x54
    ctx->pc = 0x15e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15e6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e6cc: 0x0  nop
    ctx->pc = 0x15e6ccu;
    // NOP
    // 0x15e6d0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e6d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e6d4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E6D4u;
    SET_GPR_U32(ctx, 31, 0x15E6DCu);
    ctx->pc = 0x15E6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6D4u;
            // 0x15e6d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6DCu; }
        if (ctx->pc != 0x15E6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6DCu; }
        if (ctx->pc != 0x15E6DCu) { return; }
    }
    ctx->pc = 0x15E6DCu;
    // 0x15e6dc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e6e0: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e6e4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e6e8: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e6e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e6ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e6f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e6f4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e6f8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e6fc: 0x24844400  addiu       $a0, $a0, 0x4400
    ctx->pc = 0x15e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17408));
    // 0x15e700: 0x24c6ff36  addiu       $a2, $a2, -0xCA
    ctx->pc = 0x15e700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967094));
    // 0x15e704: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e708: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e708u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e70c: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x15e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15e710: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e71c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E71Cu;
    SET_GPR_U32(ctx, 31, 0x15E724u);
    ctx->pc = 0x15E720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E71Cu;
            // 0x15e720: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E724u; }
        if (ctx->pc != 0x15E724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E724u; }
        if (ctx->pc != 0x15E724u) { return; }
    }
    ctx->pc = 0x15E724u;
    // 0x15e724: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e728: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e72c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e72cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e730: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E730u;
    SET_GPR_U32(ctx, 31, 0x15E738u);
    ctx->pc = 0x15E734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E730u;
            // 0x15e734: 0x248440f0  addiu       $a0, $a0, 0x40F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E738u; }
        if (ctx->pc != 0x15E738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E738u; }
        if (ctx->pc != 0x15E738u) { return; }
    }
    ctx->pc = 0x15E738u;
    // 0x15e738: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e73c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e740: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e744: 0x24844100  addiu       $a0, $a0, 0x4100
    ctx->pc = 0x15e744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
    // 0x15e748: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e74c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e750: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e754: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E754u;
    SET_GPR_U32(ctx, 31, 0x15E75Cu);
    ctx->pc = 0x15E758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E754u;
            // 0x15e758: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E75Cu; }
        if (ctx->pc != 0x15E75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E75Cu; }
        if (ctx->pc != 0x15E75Cu) { return; }
    }
    ctx->pc = 0x15E75Cu;
    // 0x15e75c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e760: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e764: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e764u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e768: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e76c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e76cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e770: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e774: 0x24844410  addiu       $a0, $a0, 0x4410
    ctx->pc = 0x15e774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
    // 0x15e778: 0x24a2ffcd  addiu       $v0, $a1, -0x33
    ctx->pc = 0x15e778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967245));
    // 0x15e77c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e780: 0x24620054  addiu       $v0, $v1, 0x54
    ctx->pc = 0x15e780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15e784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e788: 0x0  nop
    ctx->pc = 0x15e788u;
    // NOP
    // 0x15e78c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e78cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e790: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E790u;
    SET_GPR_U32(ctx, 31, 0x15E798u);
    ctx->pc = 0x15E794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E790u;
            // 0x15e794: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E798u; }
        if (ctx->pc != 0x15E798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E798u; }
        if (ctx->pc != 0x15E798u) { return; }
    }
    ctx->pc = 0x15E798u;
    // 0x15e798: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e79c: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e7a0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e7a4: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e7a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e7a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e7ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e7b0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e7b4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e7b8: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x15e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x15e7bc: 0x24c6ffcd  addiu       $a2, $a2, -0x33
    ctx->pc = 0x15e7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967245));
    // 0x15e7c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e7c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e7c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e7c8: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x15e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15e7cc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e7ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e7d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e7d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e7d8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E7D8u;
    SET_GPR_U32(ctx, 31, 0x15E7E0u);
    ctx->pc = 0x15E7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E7D8u;
            // 0x15e7dc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E7E0u; }
        if (ctx->pc != 0x15E7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E7E0u; }
        if (ctx->pc != 0x15E7E0u) { return; }
    }
    ctx->pc = 0x15E7E0u;
    // 0x15e7e0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e7e4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e7e8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e7ec: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E7ECu;
    SET_GPR_U32(ctx, 31, 0x15E7F4u);
    ctx->pc = 0x15E7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E7ECu;
            // 0x15e7f0: 0x24844110  addiu       $a0, $a0, 0x4110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E7F4u; }
        if (ctx->pc != 0x15E7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E7F4u; }
        if (ctx->pc != 0x15E7F4u) { return; }
    }
    ctx->pc = 0x15E7F4u;
    // 0x15e7f4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e7f8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e7fc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e800: 0x24844120  addiu       $a0, $a0, 0x4120
    ctx->pc = 0x15e800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16672));
    // 0x15e804: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e808: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e80c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e810: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E810u;
    SET_GPR_U32(ctx, 31, 0x15E818u);
    ctx->pc = 0x15E814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E810u;
            // 0x15e814: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E818u; }
        if (ctx->pc != 0x15E818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E818u; }
        if (ctx->pc != 0x15E818u) { return; }
    }
    ctx->pc = 0x15E818u;
    // 0x15e818: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e81c: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e820: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e820u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e824: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e828: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e82c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e830: 0x24844430  addiu       $a0, $a0, 0x4430
    ctx->pc = 0x15e830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17456));
    // 0x15e834: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x15e834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x15e838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e83c: 0x2462002a  addiu       $v0, $v1, 0x2A
    ctx->pc = 0x15e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 42));
    // 0x15e840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e844: 0x0  nop
    ctx->pc = 0x15e844u;
    // NOP
    // 0x15e848: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e84c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E84Cu;
    SET_GPR_U32(ctx, 31, 0x15E854u);
    ctx->pc = 0x15E850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E84Cu;
            // 0x15e850: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E854u; }
        if (ctx->pc != 0x15E854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E854u; }
        if (ctx->pc != 0x15E854u) { return; }
    }
    ctx->pc = 0x15E854u;
    // 0x15e854: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e858: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e85c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e860: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e860u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e864: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e868: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e86c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e870: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e874: 0x24844440  addiu       $a0, $a0, 0x4440
    ctx->pc = 0x15e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17472));
    // 0x15e878: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x15e878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x15e87c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e880: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e880u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e884: 0x2463002a  addiu       $v1, $v1, 0x2A
    ctx->pc = 0x15e884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 42));
    // 0x15e888: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e88c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e894: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E894u;
    SET_GPR_U32(ctx, 31, 0x15E89Cu);
    ctx->pc = 0x15E898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E894u;
            // 0x15e898: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E89Cu; }
        if (ctx->pc != 0x15E89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E89Cu; }
        if (ctx->pc != 0x15E89Cu) { return; }
    }
    ctx->pc = 0x15E89Cu;
    // 0x15e89c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e8a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e8a4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e8a8: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E8A8u;
    SET_GPR_U32(ctx, 31, 0x15E8B0u);
    ctx->pc = 0x15E8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8A8u;
            // 0x15e8ac: 0x24844130  addiu       $a0, $a0, 0x4130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8B0u; }
        if (ctx->pc != 0x15E8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8B0u; }
        if (ctx->pc != 0x15E8B0u) { return; }
    }
    ctx->pc = 0x15E8B0u;
    // 0x15e8b0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e8b4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e8b8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e8bc: 0x24844140  addiu       $a0, $a0, 0x4140
    ctx->pc = 0x15e8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16704));
    // 0x15e8c0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e8c4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e8c8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e8cc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E8CCu;
    SET_GPR_U32(ctx, 31, 0x15E8D4u);
    ctx->pc = 0x15E8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8CCu;
            // 0x15e8d0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8D4u; }
        if (ctx->pc != 0x15E8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E8D4u; }
        if (ctx->pc != 0x15E8D4u) { return; }
    }
    ctx->pc = 0x15E8D4u;
    // 0x15e8d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e8d8: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e8dc: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e8dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e8e0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e8e4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e8e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e8ec: 0x24844450  addiu       $a0, $a0, 0x4450
    ctx->pc = 0x15e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17488));
    // 0x15e8f0: 0x24a200c7  addiu       $v0, $a1, 0xC7
    ctx->pc = 0x15e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 199));
    // 0x15e8f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e8f8: 0x2462002a  addiu       $v0, $v1, 0x2A
    ctx->pc = 0x15e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 42));
    // 0x15e8fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e900: 0x0  nop
    ctx->pc = 0x15e900u;
    // NOP
    // 0x15e904: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e908: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E908u;
    SET_GPR_U32(ctx, 31, 0x15E910u);
    ctx->pc = 0x15E90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E908u;
            // 0x15e90c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E910u; }
        if (ctx->pc != 0x15E910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E910u; }
        if (ctx->pc != 0x15E910u) { return; }
    }
    ctx->pc = 0x15E910u;
    // 0x15e910: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e914: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e918: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e91c: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e91cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e920: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e924: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e928: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e92c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e930: 0x24844460  addiu       $a0, $a0, 0x4460
    ctx->pc = 0x15e930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17504));
    // 0x15e934: 0x24c600c7  addiu       $a2, $a2, 0xC7
    ctx->pc = 0x15e934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 199));
    // 0x15e938: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e93c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e93cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e940: 0x2463002a  addiu       $v1, $v1, 0x2A
    ctx->pc = 0x15e940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 42));
    // 0x15e944: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15e944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e94c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e950: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E950u;
    SET_GPR_U32(ctx, 31, 0x15E958u);
    ctx->pc = 0x15E954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E950u;
            // 0x15e954: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E958u; }
        if (ctx->pc != 0x15E958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E958u; }
        if (ctx->pc != 0x15E958u) { return; }
    }
    ctx->pc = 0x15E958u;
    // 0x15e958: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15e958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e95c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e960: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15e960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e964: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E964u;
    SET_GPR_U32(ctx, 31, 0x15E96Cu);
    ctx->pc = 0x15E968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E964u;
            // 0x15e968: 0x24844150  addiu       $a0, $a0, 0x4150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E96Cu; }
        if (ctx->pc != 0x15E96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E96Cu; }
        if (ctx->pc != 0x15E96Cu) { return; }
    }
    ctx->pc = 0x15E96Cu;
    // 0x15e96c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e970: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e974: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e978: 0x24844160  addiu       $a0, $a0, 0x4160
    ctx->pc = 0x15e978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16736));
    // 0x15e97c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e980: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e984: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e988: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15E988u;
    SET_GPR_U32(ctx, 31, 0x15E990u);
    ctx->pc = 0x15E98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E988u;
            // 0x15e98c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E990u; }
        if (ctx->pc != 0x15E990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E990u; }
        if (ctx->pc != 0x15E990u) { return; }
    }
    ctx->pc = 0x15E990u;
    // 0x15e990: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15e990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e994: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e998: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e998u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e99c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e9a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e9a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e9a8: 0x24844470  addiu       $a0, $a0, 0x4470
    ctx->pc = 0x15e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17520));
    // 0x15e9ac: 0x24a20042  addiu       $v0, $a1, 0x42
    ctx->pc = 0x15e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 66));
    // 0x15e9b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15e9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e9b4: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x15e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x15e9b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e9bc: 0x0  nop
    ctx->pc = 0x15e9bcu;
    // NOP
    // 0x15e9c0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15e9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15e9c4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15E9C4u;
    SET_GPR_U32(ctx, 31, 0x15E9CCu);
    ctx->pc = 0x15E9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E9C4u;
            // 0x15e9c8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E9CCu; }
        if (ctx->pc != 0x15E9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E9CCu; }
        if (ctx->pc != 0x15E9CCu) { return; }
    }
    ctx->pc = 0x15E9CCu;
    // 0x15e9cc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e9d0: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15e9d4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15e9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e9d8: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15e9d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15e9dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15e9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15e9e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e9e4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15e9e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e9ec: 0x24844480  addiu       $a0, $a0, 0x4480
    ctx->pc = 0x15e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17536));
    // 0x15e9f0: 0x24c60042  addiu       $a2, $a2, 0x42
    ctx->pc = 0x15e9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 66));
    // 0x15e9f4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e9f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e9f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e9fc: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x15e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x15ea00: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15ea00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ea04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ea08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ea08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ea0c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EA0Cu;
    SET_GPR_U32(ctx, 31, 0x15EA14u);
    ctx->pc = 0x15EA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA0Cu;
            // 0x15ea10: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA14u; }
        if (ctx->pc != 0x15EA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA14u; }
        if (ctx->pc != 0x15EA14u) { return; }
    }
    ctx->pc = 0x15EA14u;
    // 0x15ea14: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15ea14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ea18: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ea1c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15ea1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ea20: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EA20u;
    SET_GPR_U32(ctx, 31, 0x15EA28u);
    ctx->pc = 0x15EA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA20u;
            // 0x15ea24: 0x24844170  addiu       $a0, $a0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA28u; }
        if (ctx->pc != 0x15EA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA28u; }
        if (ctx->pc != 0x15EA28u) { return; }
    }
    ctx->pc = 0x15EA28u;
    // 0x15ea28: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ea28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ea2c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ea30: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ea30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ea34: 0x24844180  addiu       $a0, $a0, 0x4180
    ctx->pc = 0x15ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16768));
    // 0x15ea38: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ea3c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ea40: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15ea40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15ea44: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EA44u;
    SET_GPR_U32(ctx, 31, 0x15EA4Cu);
    ctx->pc = 0x15EA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA44u;
            // 0x15ea48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA4Cu; }
        if (ctx->pc != 0x15EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA4Cu; }
        if (ctx->pc != 0x15EA4Cu) { return; }
    }
    ctx->pc = 0x15EA4Cu;
    // 0x15ea4c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ea50: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15ea54: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15ea54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15ea58: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ea58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ea5c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ea5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ea60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ea64: 0x24844490  addiu       $a0, $a0, 0x4490
    ctx->pc = 0x15ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17552));
    // 0x15ea68: 0x24a200b5  addiu       $v0, $a1, 0xB5
    ctx->pc = 0x15ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 181));
    // 0x15ea6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ea6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ea70: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x15ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x15ea74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ea74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ea78: 0x0  nop
    ctx->pc = 0x15ea78u;
    // NOP
    // 0x15ea7c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15ea7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ea80: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EA80u;
    SET_GPR_U32(ctx, 31, 0x15EA88u);
    ctx->pc = 0x15EA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA80u;
            // 0x15ea84: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA88u; }
        if (ctx->pc != 0x15EA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA88u; }
        if (ctx->pc != 0x15EA88u) { return; }
    }
    ctx->pc = 0x15EA88u;
    // 0x15ea88: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ea88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ea8c: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15ea90: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ea94: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15ea94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15ea98: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ea98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ea9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15eaa0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15eaa4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15eaa8: 0x248444a0  addiu       $a0, $a0, 0x44A0
    ctx->pc = 0x15eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17568));
    // 0x15eaac: 0x24c600b5  addiu       $a2, $a2, 0xB5
    ctx->pc = 0x15eaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 181));
    // 0x15eab0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15eab4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15eab4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eab8: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x15eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x15eabc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15eabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15eac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15eac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15eac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eac8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EAC8u;
    SET_GPR_U32(ctx, 31, 0x15EAD0u);
    ctx->pc = 0x15EACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EAC8u;
            // 0x15eacc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EAD0u; }
        if (ctx->pc != 0x15EAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EAD0u; }
        if (ctx->pc != 0x15EAD0u) { return; }
    }
    ctx->pc = 0x15EAD0u;
    // 0x15ead0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15ead0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ead4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ead4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ead8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15ead8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15eadc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EADCu;
    SET_GPR_U32(ctx, 31, 0x15EAE4u);
    ctx->pc = 0x15EAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EADCu;
            // 0x15eae0: 0x24844190  addiu       $a0, $a0, 0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EAE4u; }
        if (ctx->pc != 0x15EAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EAE4u; }
        if (ctx->pc != 0x15EAE4u) { return; }
    }
    ctx->pc = 0x15EAE4u;
    // 0x15eae4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15eae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15eae8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15eaec: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15eaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15eaf0: 0x248441a0  addiu       $a0, $a0, 0x41A0
    ctx->pc = 0x15eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16800));
    // 0x15eaf4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15eaf8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15eafc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15eafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15eb00: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EB00u;
    SET_GPR_U32(ctx, 31, 0x15EB08u);
    ctx->pc = 0x15EB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB00u;
            // 0x15eb04: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB08u; }
        if (ctx->pc != 0x15EB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB08u; }
        if (ctx->pc != 0x15EB08u) { return; }
    }
    ctx->pc = 0x15EB08u;
    // 0x15eb08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15eb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15eb0c: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15eb10: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15eb10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15eb14: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15eb18: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15eb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15eb1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15eb20: 0x248444b0  addiu       $a0, $a0, 0x44B0
    ctx->pc = 0x15eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17584));
    // 0x15eb24: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x15eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x15eb28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15eb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15eb2c: 0x24620054  addiu       $v0, $v1, 0x54
    ctx->pc = 0x15eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15eb30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15eb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eb34: 0x0  nop
    ctx->pc = 0x15eb34u;
    // NOP
    // 0x15eb38: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15eb38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15eb3c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EB3Cu;
    SET_GPR_U32(ctx, 31, 0x15EB44u);
    ctx->pc = 0x15EB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB3Cu;
            // 0x15eb40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB44u; }
        if (ctx->pc != 0x15EB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB44u; }
        if (ctx->pc != 0x15EB44u) { return; }
    }
    ctx->pc = 0x15EB44u;
    // 0x15eb44: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15eb44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15eb48: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15eb4c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15eb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15eb50: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15eb50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15eb54: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15eb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15eb58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15eb5c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15eb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15eb60: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15eb64: 0x248444c0  addiu       $a0, $a0, 0x44C0
    ctx->pc = 0x15eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17600));
    // 0x15eb68: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x15eb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x15eb6c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15eb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15eb70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15eb70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eb74: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x15eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15eb78: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15eb78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15eb7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15eb80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15eb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eb84: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EB84u;
    SET_GPR_U32(ctx, 31, 0x15EB8Cu);
    ctx->pc = 0x15EB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB84u;
            // 0x15eb88: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB8Cu; }
        if (ctx->pc != 0x15EB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB8Cu; }
        if (ctx->pc != 0x15EB8Cu) { return; }
    }
    ctx->pc = 0x15EB8Cu;
    // 0x15eb8c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15eb90: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15eb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15eb94: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15eb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15eb98: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EB98u;
    SET_GPR_U32(ctx, 31, 0x15EBA0u);
    ctx->pc = 0x15EB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB98u;
            // 0x15eb9c: 0x248441b0  addiu       $a0, $a0, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBA0u; }
        if (ctx->pc != 0x15EBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBA0u; }
        if (ctx->pc != 0x15EBA0u) { return; }
    }
    ctx->pc = 0x15EBA0u;
    // 0x15eba0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15eba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15eba4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15eba8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15eba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ebac: 0x248441c0  addiu       $a0, $a0, 0x41C0
    ctx->pc = 0x15ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16832));
    // 0x15ebb0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ebb4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ebb8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15ebbc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EBBCu;
    SET_GPR_U32(ctx, 31, 0x15EBC4u);
    ctx->pc = 0x15EBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBBCu;
            // 0x15ebc0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBC4u; }
        if (ctx->pc != 0x15EBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBC4u; }
        if (ctx->pc != 0x15EBC4u) { return; }
    }
    ctx->pc = 0x15EBC4u;
    // 0x15ebc4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ebc8: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15ebcc: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15ebccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15ebd0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ebd4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ebd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ebd8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ebdc: 0x248444d0  addiu       $a0, $a0, 0x44D0
    ctx->pc = 0x15ebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17616));
    // 0x15ebe0: 0x24a200c7  addiu       $v0, $a1, 0xC7
    ctx->pc = 0x15ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 199));
    // 0x15ebe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ebe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ebe8: 0x24620054  addiu       $v0, $v1, 0x54
    ctx->pc = 0x15ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15ebec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ebecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ebf0: 0x0  nop
    ctx->pc = 0x15ebf0u;
    // NOP
    // 0x15ebf4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15ebf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ebf8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EBF8u;
    SET_GPR_U32(ctx, 31, 0x15EC00u);
    ctx->pc = 0x15EBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBF8u;
            // 0x15ebfc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC00u; }
        if (ctx->pc != 0x15EC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC00u; }
        if (ctx->pc != 0x15EC00u) { return; }
    }
    ctx->pc = 0x15EC00u;
    // 0x15ec00: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ec00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ec04: 0x3c02486c  lui         $v0, 0x486C
    ctx->pc = 0x15ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18540 << 16));
    // 0x15ec08: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ec0c: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x15ec0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61184u)));
    // 0x15ec10: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ec10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ec14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ec18: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ec1c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ec20: 0x248444e0  addiu       $a0, $a0, 0x44E0
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17632));
    // 0x15ec24: 0x24c600c7  addiu       $a2, $a2, 0xC7
    ctx->pc = 0x15ec24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 199));
    // 0x15ec28: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15ec2c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15ec2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ec30: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x15ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15ec34: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15ec34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ec38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ec3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ec3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ec40: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EC40u;
    SET_GPR_U32(ctx, 31, 0x15EC48u);
    ctx->pc = 0x15EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC40u;
            // 0x15ec44: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC48u; }
        if (ctx->pc != 0x15EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC48u; }
        if (ctx->pc != 0x15EC48u) { return; }
    }
    ctx->pc = 0x15EC48u;
    // 0x15ec48: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ec4c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ec50: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15ec50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ec54: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EC54u;
    SET_GPR_U32(ctx, 31, 0x15EC5Cu);
    ctx->pc = 0x15EC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC54u;
            // 0x15ec58: 0x248441d0  addiu       $a0, $a0, 0x41D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC5Cu; }
        if (ctx->pc != 0x15EC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC5Cu; }
        if (ctx->pc != 0x15EC5Cu) { return; }
    }
    ctx->pc = 0x15EC5Cu;
    // 0x15ec5c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ec5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ec60: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ec64: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ec64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ec68: 0x248441e0  addiu       $a0, $a0, 0x41E0
    ctx->pc = 0x15ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16864));
    // 0x15ec6c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ec70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ec74: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15ec78: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EC78u;
    SET_GPR_U32(ctx, 31, 0x15EC80u);
    ctx->pc = 0x15EC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC78u;
            // 0x15ec7c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC80u; }
        if (ctx->pc != 0x15EC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC80u; }
        if (ctx->pc != 0x15EC80u) { return; }
    }
    ctx->pc = 0x15EC80u;
    // 0x15ec80: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ec84: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15ec88: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15ec88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15ec8c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ec90: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ec90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ec94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ec98: 0x248444f0  addiu       $a0, $a0, 0x44F0
    ctx->pc = 0x15ec98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17648));
    // 0x15ec9c: 0x24a2ff39  addiu       $v0, $a1, -0xC7
    ctx->pc = 0x15ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967097));
    // 0x15eca0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15eca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15eca4: 0x24620032  addiu       $v0, $v1, 0x32
    ctx->pc = 0x15eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x15eca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15eca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ecac: 0x0  nop
    ctx->pc = 0x15ecacu;
    // NOP
    // 0x15ecb0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15ecb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ecb4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15ECB4u;
    SET_GPR_U32(ctx, 31, 0x15ECBCu);
    ctx->pc = 0x15ECB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECB4u;
            // 0x15ecb8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECBCu; }
        if (ctx->pc != 0x15ECBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECBCu; }
        if (ctx->pc != 0x15ECBCu) { return; }
    }
    ctx->pc = 0x15ECBCu;
    // 0x15ecbc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ecc0: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15ecc4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ecc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ecc8: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15ecc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15eccc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ecccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ecd0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ecd4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ecd8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ecdc: 0x24844500  addiu       $a0, $a0, 0x4500
    ctx->pc = 0x15ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
    // 0x15ece0: 0x24c6ff39  addiu       $a2, $a2, -0xC7
    ctx->pc = 0x15ece0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967097));
    // 0x15ece4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15ece8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15ece8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ecec: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x15ececu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x15ecf0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15ecf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ecf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ecf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ecf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ecfc: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15ECFCu;
    SET_GPR_U32(ctx, 31, 0x15ED04u);
    ctx->pc = 0x15ED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECFCu;
            // 0x15ed00: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED04u; }
        if (ctx->pc != 0x15ED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED04u; }
        if (ctx->pc != 0x15ED04u) { return; }
    }
    ctx->pc = 0x15ED04u;
    // 0x15ed04: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ed08: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ed0c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15ed0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ed10: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15ED10u;
    SET_GPR_U32(ctx, 31, 0x15ED18u);
    ctx->pc = 0x15ED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED10u;
            // 0x15ed14: 0x248441f0  addiu       $a0, $a0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED18u; }
        if (ctx->pc != 0x15ED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED18u; }
        if (ctx->pc != 0x15ED18u) { return; }
    }
    ctx->pc = 0x15ED18u;
    // 0x15ed18: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ed1c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ed20: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ed20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ed24: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x15ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
    // 0x15ed28: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ed2c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ed30: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15ed30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15ed34: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15ED34u;
    SET_GPR_U32(ctx, 31, 0x15ED3Cu);
    ctx->pc = 0x15ED38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED34u;
            // 0x15ed38: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED3Cu; }
        if (ctx->pc != 0x15ED3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED3Cu; }
        if (ctx->pc != 0x15ED3Cu) { return; }
    }
    ctx->pc = 0x15ED3Cu;
    // 0x15ed3c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15ed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ed40: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15ed44: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15ed44u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15ed48: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ed4c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ed4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ed50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ed54: 0x24844510  addiu       $a0, $a0, 0x4510
    ctx->pc = 0x15ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17680));
    // 0x15ed58: 0x24a2ffc9  addiu       $v0, $a1, -0x37
    ctx->pc = 0x15ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967241));
    // 0x15ed5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ed5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ed60: 0x24620032  addiu       $v0, $v1, 0x32
    ctx->pc = 0x15ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x15ed64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ed64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ed68: 0x0  nop
    ctx->pc = 0x15ed68u;
    // NOP
    // 0x15ed6c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15ed6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ed70: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15ED70u;
    SET_GPR_U32(ctx, 31, 0x15ED78u);
    ctx->pc = 0x15ED74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED70u;
            // 0x15ed74: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED78u; }
        if (ctx->pc != 0x15ED78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED78u; }
        if (ctx->pc != 0x15ED78u) { return; }
    }
    ctx->pc = 0x15ED78u;
    // 0x15ed78: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ed78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ed7c: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15ed80: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ed84: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15ed84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15ed88: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ed88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ed8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ed90: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ed94: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ed98: 0x24844520  addiu       $a0, $a0, 0x4520
    ctx->pc = 0x15ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17696));
    // 0x15ed9c: 0x24c6ffc9  addiu       $a2, $a2, -0x37
    ctx->pc = 0x15ed9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967241));
    // 0x15eda0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15eda4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15eda4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eda8: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x15eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x15edac: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15edacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15edb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15edb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15edb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15edb8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EDB8u;
    SET_GPR_U32(ctx, 31, 0x15EDC0u);
    ctx->pc = 0x15EDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EDB8u;
            // 0x15edbc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EDC0u; }
        if (ctx->pc != 0x15EDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EDC0u; }
        if (ctx->pc != 0x15EDC0u) { return; }
    }
    ctx->pc = 0x15EDC0u;
    // 0x15edc0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15edc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15edc4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15edc8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15edc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15edcc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EDCCu;
    SET_GPR_U32(ctx, 31, 0x15EDD4u);
    ctx->pc = 0x15EDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EDCCu;
            // 0x15edd0: 0x24844210  addiu       $a0, $a0, 0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EDD4u; }
        if (ctx->pc != 0x15EDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EDD4u; }
        if (ctx->pc != 0x15EDD4u) { return; }
    }
    ctx->pc = 0x15EDD4u;
    // 0x15edd4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15edd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15edd8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15eddc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ede0: 0x24844220  addiu       $a0, $a0, 0x4220
    ctx->pc = 0x15ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16928));
    // 0x15ede4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ede8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15edec: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15edecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15edf0: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EDF0u;
    SET_GPR_U32(ctx, 31, 0x15EDF8u);
    ctx->pc = 0x15EDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EDF0u;
            // 0x15edf4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EDF8u; }
        if (ctx->pc != 0x15EDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EDF8u; }
        if (ctx->pc != 0x15EDF8u) { return; }
    }
    ctx->pc = 0x15EDF8u;
    // 0x15edf8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15edf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15edfc: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15ee00: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15ee00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15ee04: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ee08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ee08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ee0c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ee10: 0x24844530  addiu       $a0, $a0, 0x4530
    ctx->pc = 0x15ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17712));
    // 0x15ee14: 0x24a2ff4b  addiu       $v0, $a1, -0xB5
    ctx->pc = 0x15ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967115));
    // 0x15ee18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ee18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ee1c: 0x24620047  addiu       $v0, $v1, 0x47
    ctx->pc = 0x15ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 71));
    // 0x15ee20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ee20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ee24: 0x0  nop
    ctx->pc = 0x15ee24u;
    // NOP
    // 0x15ee28: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15ee28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ee2c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EE2Cu;
    SET_GPR_U32(ctx, 31, 0x15EE34u);
    ctx->pc = 0x15EE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE2Cu;
            // 0x15ee30: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE34u; }
        if (ctx->pc != 0x15EE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE34u; }
        if (ctx->pc != 0x15EE34u) { return; }
    }
    ctx->pc = 0x15EE34u;
    // 0x15ee34: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ee34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ee38: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15ee3c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ee40: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15ee40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15ee44: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ee44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ee48: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ee4c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ee50: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ee54: 0x24844540  addiu       $a0, $a0, 0x4540
    ctx->pc = 0x15ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17728));
    // 0x15ee58: 0x24c6ff4b  addiu       $a2, $a2, -0xB5
    ctx->pc = 0x15ee58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967115));
    // 0x15ee5c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15ee60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15ee60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ee64: 0x24630047  addiu       $v1, $v1, 0x47
    ctx->pc = 0x15ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 71));
    // 0x15ee68: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15ee68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ee6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ee70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ee70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ee74: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EE74u;
    SET_GPR_U32(ctx, 31, 0x15EE7Cu);
    ctx->pc = 0x15EE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE74u;
            // 0x15ee78: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE7Cu; }
        if (ctx->pc != 0x15EE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE7Cu; }
        if (ctx->pc != 0x15EE7Cu) { return; }
    }
    ctx->pc = 0x15EE7Cu;
    // 0x15ee7c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15ee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ee80: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ee84: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15ee84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ee88: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EE88u;
    SET_GPR_U32(ctx, 31, 0x15EE90u);
    ctx->pc = 0x15EE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE88u;
            // 0x15ee8c: 0x24844230  addiu       $a0, $a0, 0x4230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE90u; }
        if (ctx->pc != 0x15EE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE90u; }
        if (ctx->pc != 0x15EE90u) { return; }
    }
    ctx->pc = 0x15EE90u;
    // 0x15ee90: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ee90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ee94: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ee98: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ee9c: 0x24844240  addiu       $a0, $a0, 0x4240
    ctx->pc = 0x15ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16960));
    // 0x15eea0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15eea4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15eea8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15eea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15eeac: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EEACu;
    SET_GPR_U32(ctx, 31, 0x15EEB4u);
    ctx->pc = 0x15EEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EEACu;
            // 0x15eeb0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEB4u; }
        if (ctx->pc != 0x15EEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEB4u; }
        if (ctx->pc != 0x15EEB4u) { return; }
    }
    ctx->pc = 0x15EEB4u;
    // 0x15eeb4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15eeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15eeb8: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15eebc: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15eebcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15eec0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15eec4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15eec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15eec8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15eecc: 0x24844550  addiu       $a0, $a0, 0x4550
    ctx->pc = 0x15eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17744));
    // 0x15eed0: 0x24a2ffb7  addiu       $v0, $a1, -0x49
    ctx->pc = 0x15eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967223));
    // 0x15eed4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15eed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15eed8: 0x24620047  addiu       $v0, $v1, 0x47
    ctx->pc = 0x15eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 71));
    // 0x15eedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15eedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eee0: 0x0  nop
    ctx->pc = 0x15eee0u;
    // NOP
    // 0x15eee4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15eee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15eee8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EEE8u;
    SET_GPR_U32(ctx, 31, 0x15EEF0u);
    ctx->pc = 0x15EEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EEE8u;
            // 0x15eeec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEF0u; }
        if (ctx->pc != 0x15EEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EEF0u; }
        if (ctx->pc != 0x15EEF0u) { return; }
    }
    ctx->pc = 0x15EEF0u;
    // 0x15eef0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15eef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15eef4: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15eef8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15eef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15eefc: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15eefcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15ef00: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ef00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ef04: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ef08: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ef08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ef0c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ef10: 0x24844560  addiu       $a0, $a0, 0x4560
    ctx->pc = 0x15ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17760));
    // 0x15ef14: 0x24c6ffb7  addiu       $a2, $a2, -0x49
    ctx->pc = 0x15ef14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967223));
    // 0x15ef18: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15ef18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15ef1c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15ef1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ef20: 0x24630047  addiu       $v1, $v1, 0x47
    ctx->pc = 0x15ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 71));
    // 0x15ef24: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15ef24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ef28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ef2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ef2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ef30: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EF30u;
    SET_GPR_U32(ctx, 31, 0x15EF38u);
    ctx->pc = 0x15EF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF30u;
            // 0x15ef34: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF38u; }
        if (ctx->pc != 0x15EF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF38u; }
        if (ctx->pc != 0x15EF38u) { return; }
    }
    ctx->pc = 0x15EF38u;
    // 0x15ef38: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15ef38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ef3c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ef40: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15ef40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ef44: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EF44u;
    SET_GPR_U32(ctx, 31, 0x15EF4Cu);
    ctx->pc = 0x15EF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF44u;
            // 0x15ef48: 0x24844250  addiu       $a0, $a0, 0x4250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF4Cu; }
        if (ctx->pc != 0x15EF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF4Cu; }
        if (ctx->pc != 0x15EF4Cu) { return; }
    }
    ctx->pc = 0x15EF4Cu;
    // 0x15ef4c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ef4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ef50: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ef54: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ef58: 0x24844260  addiu       $a0, $a0, 0x4260
    ctx->pc = 0x15ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16992));
    // 0x15ef5c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ef60: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ef64: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15ef64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15ef68: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15EF68u;
    SET_GPR_U32(ctx, 31, 0x15EF70u);
    ctx->pc = 0x15EF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF68u;
            // 0x15ef6c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF70u; }
        if (ctx->pc != 0x15EF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF70u; }
        if (ctx->pc != 0x15EF70u) { return; }
    }
    ctx->pc = 0x15EF70u;
    // 0x15ef70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ef74: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15ef78: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15ef78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15ef7c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ef80: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ef80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ef84: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ef88: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x15ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x15ef8c: 0x24a2ff39  addiu       $v0, $a1, -0xC7
    ctx->pc = 0x15ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967097));
    // 0x15ef90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ef90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ef94: 0x2462005c  addiu       $v0, $v1, 0x5C
    ctx->pc = 0x15ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x15ef98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ef98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ef9c: 0x0  nop
    ctx->pc = 0x15ef9cu;
    // NOP
    // 0x15efa0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15efa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15efa4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EFA4u;
    SET_GPR_U32(ctx, 31, 0x15EFACu);
    ctx->pc = 0x15EFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFA4u;
            // 0x15efa8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFACu; }
        if (ctx->pc != 0x15EFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFACu; }
        if (ctx->pc != 0x15EFACu) { return; }
    }
    ctx->pc = 0x15EFACu;
    // 0x15efac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15efacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15efb0: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15efb4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15efb8: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15efb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15efbc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15efbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15efc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15efc4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15efc8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15efcc: 0x24844580  addiu       $a0, $a0, 0x4580
    ctx->pc = 0x15efccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x15efd0: 0x24c6ff39  addiu       $a2, $a2, -0xC7
    ctx->pc = 0x15efd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967097));
    // 0x15efd4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15efd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15efd8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15efd8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15efdc: 0x2463005c  addiu       $v1, $v1, 0x5C
    ctx->pc = 0x15efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x15efe0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15efe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15efe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15efe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15efe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15efec: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15EFECu;
    SET_GPR_U32(ctx, 31, 0x15EFF4u);
    ctx->pc = 0x15EFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFECu;
            // 0x15eff0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFF4u; }
        if (ctx->pc != 0x15EFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFF4u; }
        if (ctx->pc != 0x15EFF4u) { return; }
    }
    ctx->pc = 0x15EFF4u;
    // 0x15eff4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15eff8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15effc: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15effcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f000: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F000u;
    SET_GPR_U32(ctx, 31, 0x15F008u);
    ctx->pc = 0x15F004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F000u;
            // 0x15f004: 0x24844270  addiu       $a0, $a0, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F008u; }
        if (ctx->pc != 0x15F008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F008u; }
        if (ctx->pc != 0x15F008u) { return; }
    }
    ctx->pc = 0x15F008u;
    // 0x15f008: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f00c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f010: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f014: 0x24844280  addiu       $a0, $a0, 0x4280
    ctx->pc = 0x15f014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17024));
    // 0x15f018: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f01c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f020: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f024: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F024u;
    SET_GPR_U32(ctx, 31, 0x15F02Cu);
    ctx->pc = 0x15F028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F024u;
            // 0x15f028: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F02Cu; }
        if (ctx->pc != 0x15F02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F02Cu; }
        if (ctx->pc != 0x15F02Cu) { return; }
    }
    ctx->pc = 0x15F02Cu;
    // 0x15f02c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f030: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f034: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f034u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f038: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f03c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f040: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f044: 0x24844590  addiu       $a0, $a0, 0x4590
    ctx->pc = 0x15f044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17808));
    // 0x15f048: 0x24a2ffc9  addiu       $v0, $a1, -0x37
    ctx->pc = 0x15f048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967241));
    // 0x15f04c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f050: 0x2462005c  addiu       $v0, $v1, 0x5C
    ctx->pc = 0x15f050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x15f054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f058: 0x0  nop
    ctx->pc = 0x15f058u;
    // NOP
    // 0x15f05c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f05cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f060: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F060u;
    SET_GPR_U32(ctx, 31, 0x15F068u);
    ctx->pc = 0x15F064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F060u;
            // 0x15f064: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F068u; }
        if (ctx->pc != 0x15F068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F068u; }
        if (ctx->pc != 0x15F068u) { return; }
    }
    ctx->pc = 0x15F068u;
    // 0x15f068: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f06c: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f070: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f074: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f074u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f078: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f07c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f080: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f084: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f088: 0x248445a0  addiu       $a0, $a0, 0x45A0
    ctx->pc = 0x15f088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17824));
    // 0x15f08c: 0x24c6ffc9  addiu       $a2, $a2, -0x37
    ctx->pc = 0x15f08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967241));
    // 0x15f090: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f094: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f094u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f098: 0x2463005c  addiu       $v1, $v1, 0x5C
    ctx->pc = 0x15f098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x15f09c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f09cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f0a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f0a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f0a8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F0A8u;
    SET_GPR_U32(ctx, 31, 0x15F0B0u);
    ctx->pc = 0x15F0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0A8u;
            // 0x15f0ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0B0u; }
        if (ctx->pc != 0x15F0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0B0u; }
        if (ctx->pc != 0x15F0B0u) { return; }
    }
    ctx->pc = 0x15F0B0u;
    // 0x15f0b0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f0b4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f0b8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f0bc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F0BCu;
    SET_GPR_U32(ctx, 31, 0x15F0C4u);
    ctx->pc = 0x15F0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0BCu;
            // 0x15f0c0: 0x24844290  addiu       $a0, $a0, 0x4290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0C4u; }
        if (ctx->pc != 0x15F0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0C4u; }
        if (ctx->pc != 0x15F0C4u) { return; }
    }
    ctx->pc = 0x15F0C4u;
    // 0x15f0c4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f0c8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f0cc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f0d0: 0x248442a0  addiu       $a0, $a0, 0x42A0
    ctx->pc = 0x15f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17056));
    // 0x15f0d4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f0d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f0dc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f0e0: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F0E0u;
    SET_GPR_U32(ctx, 31, 0x15F0E8u);
    ctx->pc = 0x15F0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0E0u;
            // 0x15f0e4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0E8u; }
        if (ctx->pc != 0x15F0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0E8u; }
        if (ctx->pc != 0x15F0E8u) { return; }
    }
    ctx->pc = 0x15F0E8u;
    // 0x15f0e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15f0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f0ec: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f0f0: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f0f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f0f4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f0f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f0fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f100: 0x248445b0  addiu       $a0, $a0, 0x45B0
    ctx->pc = 0x15f100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17840));
    // 0x15f104: 0x24a20033  addiu       $v0, $a1, 0x33
    ctx->pc = 0x15f104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 51));
    // 0x15f108: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f10c: 0x24620032  addiu       $v0, $v1, 0x32
    ctx->pc = 0x15f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x15f110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f114: 0x0  nop
    ctx->pc = 0x15f114u;
    // NOP
    // 0x15f118: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f11c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F11Cu;
    SET_GPR_U32(ctx, 31, 0x15F124u);
    ctx->pc = 0x15F120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F11Cu;
            // 0x15f120: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F124u; }
        if (ctx->pc != 0x15F124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F124u; }
        if (ctx->pc != 0x15F124u) { return; }
    }
    ctx->pc = 0x15F124u;
    // 0x15f124: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f128: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f12c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f130: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f130u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f134: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f138: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f13c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f140: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f144: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x15f144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
    // 0x15f148: 0x24c60033  addiu       $a2, $a2, 0x33
    ctx->pc = 0x15f148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 51));
    // 0x15f14c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f150: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f150u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f154: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x15f154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x15f158: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f15c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f164: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F164u;
    SET_GPR_U32(ctx, 31, 0x15F16Cu);
    ctx->pc = 0x15F168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F164u;
            // 0x15f168: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F16Cu; }
        if (ctx->pc != 0x15F16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F16Cu; }
        if (ctx->pc != 0x15F16Cu) { return; }
    }
    ctx->pc = 0x15F16Cu;
    // 0x15f16c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f170: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f174: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f178: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F178u;
    SET_GPR_U32(ctx, 31, 0x15F180u);
    ctx->pc = 0x15F17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F178u;
            // 0x15f17c: 0x248442b0  addiu       $a0, $a0, 0x42B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F180u; }
        if (ctx->pc != 0x15F180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F180u; }
        if (ctx->pc != 0x15F180u) { return; }
    }
    ctx->pc = 0x15F180u;
    // 0x15f180: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f184: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f188: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f18c: 0x248442c0  addiu       $a0, $a0, 0x42C0
    ctx->pc = 0x15f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17088));
    // 0x15f190: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f194: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f198: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f19c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F19Cu;
    SET_GPR_U32(ctx, 31, 0x15F1A4u);
    ctx->pc = 0x15F1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F19Cu;
            // 0x15f1a0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F1A4u; }
        if (ctx->pc != 0x15F1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F1A4u; }
        if (ctx->pc != 0x15F1A4u) { return; }
    }
    ctx->pc = 0x15F1A4u;
    // 0x15f1a4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15f1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f1a8: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f1ac: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f1acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f1b0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f1b4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f1b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f1bc: 0x248445d0  addiu       $a0, $a0, 0x45D0
    ctx->pc = 0x15f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17872));
    // 0x15f1c0: 0x24a200c3  addiu       $v0, $a1, 0xC3
    ctx->pc = 0x15f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 195));
    // 0x15f1c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f1c8: 0x24620032  addiu       $v0, $v1, 0x32
    ctx->pc = 0x15f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x15f1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f1d0: 0x0  nop
    ctx->pc = 0x15f1d0u;
    // NOP
    // 0x15f1d4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f1d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f1d8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F1D8u;
    SET_GPR_U32(ctx, 31, 0x15F1E0u);
    ctx->pc = 0x15F1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1D8u;
            // 0x15f1dc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F1E0u; }
        if (ctx->pc != 0x15F1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F1E0u; }
        if (ctx->pc != 0x15F1E0u) { return; }
    }
    ctx->pc = 0x15F1E0u;
    // 0x15f1e0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f1e4: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f1e8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f1ec: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f1ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f1f0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f1f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f1f8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f1fc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f200: 0x248445e0  addiu       $a0, $a0, 0x45E0
    ctx->pc = 0x15f200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17888));
    // 0x15f204: 0x24c600c3  addiu       $a2, $a2, 0xC3
    ctx->pc = 0x15f204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 195));
    // 0x15f208: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f20c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f20cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f210: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x15f210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x15f214: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f220: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F220u;
    SET_GPR_U32(ctx, 31, 0x15F228u);
    ctx->pc = 0x15F224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F220u;
            // 0x15f224: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F228u; }
        if (ctx->pc != 0x15F228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F228u; }
        if (ctx->pc != 0x15F228u) { return; }
    }
    ctx->pc = 0x15F228u;
    // 0x15f228: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f22c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f230: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f234: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F234u;
    SET_GPR_U32(ctx, 31, 0x15F23Cu);
    ctx->pc = 0x15F238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F234u;
            // 0x15f238: 0x248442d0  addiu       $a0, $a0, 0x42D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F23Cu; }
        if (ctx->pc != 0x15F23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F23Cu; }
        if (ctx->pc != 0x15F23Cu) { return; }
    }
    ctx->pc = 0x15F23Cu;
    // 0x15f23c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f23cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f240: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f244: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f248: 0x248442e0  addiu       $a0, $a0, 0x42E0
    ctx->pc = 0x15f248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17120));
    // 0x15f24c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f250: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f254: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f258: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F258u;
    SET_GPR_U32(ctx, 31, 0x15F260u);
    ctx->pc = 0x15F25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F258u;
            // 0x15f25c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F260u; }
        if (ctx->pc != 0x15F260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F260u; }
        if (ctx->pc != 0x15F260u) { return; }
    }
    ctx->pc = 0x15F260u;
    // 0x15f260: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15f260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f264: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f268: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f268u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f26c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f270: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f274: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f278: 0x248445f0  addiu       $a0, $a0, 0x45F0
    ctx->pc = 0x15f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17904));
    // 0x15f27c: 0x24a20045  addiu       $v0, $a1, 0x45
    ctx->pc = 0x15f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 69));
    // 0x15f280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f284: 0x24620047  addiu       $v0, $v1, 0x47
    ctx->pc = 0x15f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 71));
    // 0x15f288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f28c: 0x0  nop
    ctx->pc = 0x15f28cu;
    // NOP
    // 0x15f290: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f294: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F294u;
    SET_GPR_U32(ctx, 31, 0x15F29Cu);
    ctx->pc = 0x15F298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F294u;
            // 0x15f298: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F29Cu; }
        if (ctx->pc != 0x15F29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F29Cu; }
        if (ctx->pc != 0x15F29Cu) { return; }
    }
    ctx->pc = 0x15F29Cu;
    // 0x15f29c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f2a0: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f2a4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f2a8: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f2a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f2ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f2b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f2b4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f2b8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f2bc: 0x24844600  addiu       $a0, $a0, 0x4600
    ctx->pc = 0x15f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    // 0x15f2c0: 0x24c60045  addiu       $a2, $a2, 0x45
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 69));
    // 0x15f2c4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f2c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f2c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f2cc: 0x24630047  addiu       $v1, $v1, 0x47
    ctx->pc = 0x15f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 71));
    // 0x15f2d0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f2d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f2d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f2dc: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F2DCu;
    SET_GPR_U32(ctx, 31, 0x15F2E4u);
    ctx->pc = 0x15F2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2DCu;
            // 0x15f2e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2E4u; }
        if (ctx->pc != 0x15F2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2E4u; }
        if (ctx->pc != 0x15F2E4u) { return; }
    }
    ctx->pc = 0x15F2E4u;
    // 0x15f2e4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f2e8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f2ec: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f2f0: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F2F0u;
    SET_GPR_U32(ctx, 31, 0x15F2F8u);
    ctx->pc = 0x15F2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2F0u;
            // 0x15f2f4: 0x248442f0  addiu       $a0, $a0, 0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2F8u; }
        if (ctx->pc != 0x15F2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2F8u; }
        if (ctx->pc != 0x15F2F8u) { return; }
    }
    ctx->pc = 0x15F2F8u;
    // 0x15f2f8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f2fc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f300: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f304: 0x24844300  addiu       $a0, $a0, 0x4300
    ctx->pc = 0x15f304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17152));
    // 0x15f308: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f30c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f310: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f314: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F314u;
    SET_GPR_U32(ctx, 31, 0x15F31Cu);
    ctx->pc = 0x15F318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F314u;
            // 0x15f318: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F31Cu; }
        if (ctx->pc != 0x15F31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F31Cu; }
        if (ctx->pc != 0x15F31Cu) { return; }
    }
    ctx->pc = 0x15F31Cu;
    // 0x15f31c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15f31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f320: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f324: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f324u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f328: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f32c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f330: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f334: 0x24844610  addiu       $a0, $a0, 0x4610
    ctx->pc = 0x15f334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17936));
    // 0x15f338: 0x24a200b1  addiu       $v0, $a1, 0xB1
    ctx->pc = 0x15f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 177));
    // 0x15f33c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f340: 0x24620047  addiu       $v0, $v1, 0x47
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 71));
    // 0x15f344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f348: 0x0  nop
    ctx->pc = 0x15f348u;
    // NOP
    // 0x15f34c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f34cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f350: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F350u;
    SET_GPR_U32(ctx, 31, 0x15F358u);
    ctx->pc = 0x15F354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F350u;
            // 0x15f354: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F358u; }
        if (ctx->pc != 0x15F358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F358u; }
        if (ctx->pc != 0x15F358u) { return; }
    }
    ctx->pc = 0x15F358u;
    // 0x15f358: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f35c: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f360: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f364: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f364u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f368: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f36c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f370: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f374: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f378: 0x24844620  addiu       $a0, $a0, 0x4620
    ctx->pc = 0x15f378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17952));
    // 0x15f37c: 0x24c600b1  addiu       $a2, $a2, 0xB1
    ctx->pc = 0x15f37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 177));
    // 0x15f380: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f384: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f384u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f388: 0x24630047  addiu       $v1, $v1, 0x47
    ctx->pc = 0x15f388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 71));
    // 0x15f38c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f38cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f398: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F398u;
    SET_GPR_U32(ctx, 31, 0x15F3A0u);
    ctx->pc = 0x15F39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F398u;
            // 0x15f39c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3A0u; }
        if (ctx->pc != 0x15F3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3A0u; }
        if (ctx->pc != 0x15F3A0u) { return; }
    }
    ctx->pc = 0x15F3A0u;
    // 0x15f3a0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f3a4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f3a8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f3ac: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F3ACu;
    SET_GPR_U32(ctx, 31, 0x15F3B4u);
    ctx->pc = 0x15F3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3ACu;
            // 0x15f3b0: 0x24844310  addiu       $a0, $a0, 0x4310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3B4u; }
        if (ctx->pc != 0x15F3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3B4u; }
        if (ctx->pc != 0x15F3B4u) { return; }
    }
    ctx->pc = 0x15F3B4u;
    // 0x15f3b4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f3b8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f3bc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f3c0: 0x24844320  addiu       $a0, $a0, 0x4320
    ctx->pc = 0x15f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17184));
    // 0x15f3c4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f3c8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f3cc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f3d0: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F3D0u;
    SET_GPR_U32(ctx, 31, 0x15F3D8u);
    ctx->pc = 0x15F3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3D0u;
            // 0x15f3d4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3D8u; }
        if (ctx->pc != 0x15F3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3D8u; }
        if (ctx->pc != 0x15F3D8u) { return; }
    }
    ctx->pc = 0x15F3D8u;
    // 0x15f3d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15f3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f3dc: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f3e0: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f3e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f3e4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f3e8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f3ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f3f0: 0x24844630  addiu       $a0, $a0, 0x4630
    ctx->pc = 0x15f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17968));
    // 0x15f3f4: 0x24a20033  addiu       $v0, $a1, 0x33
    ctx->pc = 0x15f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 51));
    // 0x15f3f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f3fc: 0x2462005c  addiu       $v0, $v1, 0x5C
    ctx->pc = 0x15f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x15f400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f404: 0x0  nop
    ctx->pc = 0x15f404u;
    // NOP
    // 0x15f408: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f40c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F40Cu;
    SET_GPR_U32(ctx, 31, 0x15F414u);
    ctx->pc = 0x15F410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F40Cu;
            // 0x15f410: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F414u; }
        if (ctx->pc != 0x15F414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F414u; }
        if (ctx->pc != 0x15F414u) { return; }
    }
    ctx->pc = 0x15F414u;
    // 0x15f414: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f418: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f41c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f420: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f420u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f424: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f428: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f42c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f430: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f434: 0x24844640  addiu       $a0, $a0, 0x4640
    ctx->pc = 0x15f434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17984));
    // 0x15f438: 0x24c60033  addiu       $a2, $a2, 0x33
    ctx->pc = 0x15f438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 51));
    // 0x15f43c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f440: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f440u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f444: 0x2463005c  addiu       $v1, $v1, 0x5C
    ctx->pc = 0x15f444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x15f448: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f44c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f454: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F454u;
    SET_GPR_U32(ctx, 31, 0x15F45Cu);
    ctx->pc = 0x15F458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F454u;
            // 0x15f458: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F45Cu; }
        if (ctx->pc != 0x15F45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F45Cu; }
        if (ctx->pc != 0x15F45Cu) { return; }
    }
    ctx->pc = 0x15F45Cu;
    // 0x15f45c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f460: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f464: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f468: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F468u;
    SET_GPR_U32(ctx, 31, 0x15F470u);
    ctx->pc = 0x15F46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F468u;
            // 0x15f46c: 0x24844330  addiu       $a0, $a0, 0x4330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F470u; }
        if (ctx->pc != 0x15F470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F470u; }
        if (ctx->pc != 0x15F470u) { return; }
    }
    ctx->pc = 0x15F470u;
    // 0x15f470: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f474: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f478: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f47c: 0x24844340  addiu       $a0, $a0, 0x4340
    ctx->pc = 0x15f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17216));
    // 0x15f480: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f484: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f488: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f48c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F48Cu;
    SET_GPR_U32(ctx, 31, 0x15F494u);
    ctx->pc = 0x15F490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F48Cu;
            // 0x15f490: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F494u; }
        if (ctx->pc != 0x15F494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F494u; }
        if (ctx->pc != 0x15F494u) { return; }
    }
    ctx->pc = 0x15F494u;
    // 0x15f494: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15f494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f498: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f49c: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f49cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f4a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f4a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f4a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f4ac: 0x24844650  addiu       $a0, $a0, 0x4650
    ctx->pc = 0x15f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18000));
    // 0x15f4b0: 0x24a200c3  addiu       $v0, $a1, 0xC3
    ctx->pc = 0x15f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 195));
    // 0x15f4b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f4b8: 0x2462005c  addiu       $v0, $v1, 0x5C
    ctx->pc = 0x15f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x15f4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f4c0: 0x0  nop
    ctx->pc = 0x15f4c0u;
    // NOP
    // 0x15f4c4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f4c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f4c8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F4C8u;
    SET_GPR_U32(ctx, 31, 0x15F4D0u);
    ctx->pc = 0x15F4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4C8u;
            // 0x15f4cc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4D0u; }
        if (ctx->pc != 0x15F4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4D0u; }
        if (ctx->pc != 0x15F4D0u) { return; }
    }
    ctx->pc = 0x15F4D0u;
    // 0x15f4d0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f4d4: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f4d8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f4dc: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x15f4dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x15f4e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f4e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f4e8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f4ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f4f0: 0x24844660  addiu       $a0, $a0, 0x4660
    ctx->pc = 0x15f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18016));
    // 0x15f4f4: 0x24c600c3  addiu       $a2, $a2, 0xC3
    ctx->pc = 0x15f4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 195));
    // 0x15f4f8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f4fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f4fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f500: 0x2463005c  addiu       $v1, $v1, 0x5C
    ctx->pc = 0x15f500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x15f504: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f510: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F510u;
    SET_GPR_U32(ctx, 31, 0x15F518u);
    ctx->pc = 0x15F514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F510u;
            // 0x15f514: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F518u; }
        if (ctx->pc != 0x15F518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F518u; }
        if (ctx->pc != 0x15F518u) { return; }
    }
    ctx->pc = 0x15F518u;
    // 0x15f518: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f51c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f520: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f524: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F524u;
    SET_GPR_U32(ctx, 31, 0x15F52Cu);
    ctx->pc = 0x15F528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F524u;
            // 0x15f528: 0x24844350  addiu       $a0, $a0, 0x4350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F52Cu; }
        if (ctx->pc != 0x15F52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F52Cu; }
        if (ctx->pc != 0x15F52Cu) { return; }
    }
    ctx->pc = 0x15F52Cu;
    // 0x15f52c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f530: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f534: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f538: 0x24844360  addiu       $a0, $a0, 0x4360
    ctx->pc = 0x15f538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17248));
    // 0x15f53c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f540: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f544: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f548: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F548u;
    SET_GPR_U32(ctx, 31, 0x15F550u);
    ctx->pc = 0x15F54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F548u;
            // 0x15f54c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F550u; }
        if (ctx->pc != 0x15F550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F550u; }
        if (ctx->pc != 0x15F550u) { return; }
    }
    ctx->pc = 0x15F550u;
    // 0x15f550: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15f550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15f554: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15F554u;
    SET_GPR_U32(ctx, 31, 0x15F55Cu);
    ctx->pc = 0x15F558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F554u;
            // 0x15f558: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F55Cu; }
        if (ctx->pc != 0x15F55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F55Cu; }
        if (ctx->pc != 0x15F55Cu) { return; }
    }
    ctx->pc = 0x15F55Cu;
    // 0x15f55c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f560: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f564: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15f568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f56c: 0x24843ff0  addiu       $a0, $a0, 0x3FF0
    ctx->pc = 0x15f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    // 0x15f570: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15f570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15f574: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15f574u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15f578: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f57c: 0x24a2ff80  addiu       $v0, $a1, -0x80
    ctx->pc = 0x15f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x15f580: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f584: 0x2462003e  addiu       $v0, $v1, 0x3E
    ctx->pc = 0x15f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x15f588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f58c: 0x0  nop
    ctx->pc = 0x15f58cu;
    // NOP
    // 0x15f590: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f594: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F594u;
    SET_GPR_U32(ctx, 31, 0x15F59Cu);
    ctx->pc = 0x15F598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F594u;
            // 0x15f598: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F59Cu; }
        if (ctx->pc != 0x15F59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F59Cu; }
        if (ctx->pc != 0x15F59Cu) { return; }
    }
    ctx->pc = 0x15F59Cu;
    // 0x15f59c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f5a0: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15f5a4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f5a8: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15f5a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15f5ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f5b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f5b4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f5b8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f5bc: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x15f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x15f5c0: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x15f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x15f5c4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f5c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f5c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5cc: 0x2463003e  addiu       $v1, $v1, 0x3E
    ctx->pc = 0x15f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x15f5d0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f5d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f5d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5dc: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F5DCu;
    SET_GPR_U32(ctx, 31, 0x15F5E4u);
    ctx->pc = 0x15F5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5DCu;
            // 0x15f5e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5E4u; }
        if (ctx->pc != 0x15F5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5E4u; }
        if (ctx->pc != 0x15F5E4u) { return; }
    }
    ctx->pc = 0x15F5E4u;
    // 0x15f5e4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f5e8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f5ec: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f5f0: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F5F0u;
    SET_GPR_U32(ctx, 31, 0x15F5F8u);
    ctx->pc = 0x15F5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5F0u;
            // 0x15f5f4: 0x24843f70  addiu       $a0, $a0, 0x3F70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5F8u; }
        if (ctx->pc != 0x15F5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5F8u; }
        if (ctx->pc != 0x15F5F8u) { return; }
    }
    ctx->pc = 0x15F5F8u;
    // 0x15f5f8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f5fc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f600: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f604: 0x24843f80  addiu       $a0, $a0, 0x3F80
    ctx->pc = 0x15f604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16256));
    // 0x15f608: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f60c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f610: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f614: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F614u;
    SET_GPR_U32(ctx, 31, 0x15F61Cu);
    ctx->pc = 0x15F618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F614u;
            // 0x15f618: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F61Cu; }
        if (ctx->pc != 0x15F61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F61Cu; }
        if (ctx->pc != 0x15F61Cu) { return; }
    }
    ctx->pc = 0x15F61Cu;
    // 0x15f61c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15f620: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15F620u;
    SET_GPR_U32(ctx, 31, 0x15F628u);
    ctx->pc = 0x15F624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F620u;
            // 0x15f624: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F628u; }
        if (ctx->pc != 0x15F628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F628u; }
        if (ctx->pc != 0x15F628u) { return; }
    }
    ctx->pc = 0x15F628u;
    // 0x15f628: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f62c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f630: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15f634: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f638: 0x24844010  addiu       $a0, $a0, 0x4010
    ctx->pc = 0x15f638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16400));
    // 0x15f63c: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15f640: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15f640u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15f644: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f648: 0x24a2007a  addiu       $v0, $a1, 0x7A
    ctx->pc = 0x15f648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 122));
    // 0x15f64c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f650: 0x2462003e  addiu       $v0, $v1, 0x3E
    ctx->pc = 0x15f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x15f654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f658: 0x0  nop
    ctx->pc = 0x15f658u;
    // NOP
    // 0x15f65c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f65cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f660: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F660u;
    SET_GPR_U32(ctx, 31, 0x15F668u);
    ctx->pc = 0x15F664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F660u;
            // 0x15f664: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F668u; }
        if (ctx->pc != 0x15F668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F668u; }
        if (ctx->pc != 0x15F668u) { return; }
    }
    ctx->pc = 0x15F668u;
    // 0x15f668: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f66c: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15f670: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f674: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15f674u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15f678: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f67c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f680: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f684: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f688: 0x24844020  addiu       $a0, $a0, 0x4020
    ctx->pc = 0x15f688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16416));
    // 0x15f68c: 0x24c6007a  addiu       $a2, $a2, 0x7A
    ctx->pc = 0x15f68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 122));
    // 0x15f690: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f694: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f694u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f698: 0x2463003e  addiu       $v1, $v1, 0x3E
    ctx->pc = 0x15f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x15f69c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f69cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f6a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f6a8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F6A8u;
    SET_GPR_U32(ctx, 31, 0x15F6B0u);
    ctx->pc = 0x15F6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6A8u;
            // 0x15f6ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6B0u; }
        if (ctx->pc != 0x15F6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6B0u; }
        if (ctx->pc != 0x15F6B0u) { return; }
    }
    ctx->pc = 0x15F6B0u;
    // 0x15f6b0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f6b4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f6b8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f6bc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F6BCu;
    SET_GPR_U32(ctx, 31, 0x15F6C4u);
    ctx->pc = 0x15F6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6BCu;
            // 0x15f6c0: 0x24843f90  addiu       $a0, $a0, 0x3F90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6C4u; }
        if (ctx->pc != 0x15F6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6C4u; }
        if (ctx->pc != 0x15F6C4u) { return; }
    }
    ctx->pc = 0x15F6C4u;
    // 0x15f6c4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f6c8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f6cc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f6d0: 0x24843fa0  addiu       $a0, $a0, 0x3FA0
    ctx->pc = 0x15f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16288));
    // 0x15f6d4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f6d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f6dc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f6e0: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F6E0u;
    SET_GPR_U32(ctx, 31, 0x15F6E8u);
    ctx->pc = 0x15F6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6E0u;
            // 0x15f6e4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6E8u; }
        if (ctx->pc != 0x15F6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6E8u; }
        if (ctx->pc != 0x15F6E8u) { return; }
    }
    ctx->pc = 0x15F6E8u;
    // 0x15f6e8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15f6ec: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15F6ECu;
    SET_GPR_U32(ctx, 31, 0x15F6F4u);
    ctx->pc = 0x15F6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6ECu;
            // 0x15f6f0: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6F4u; }
        if (ctx->pc != 0x15F6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F6F4u; }
        if (ctx->pc != 0x15F6F4u) { return; }
    }
    ctx->pc = 0x15F6F4u;
    // 0x15f6f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f6f8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f6fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15f700: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f704: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x15f704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x15f708: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f70c: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x15f70cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x15f710: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f714: 0x24a2ff80  addiu       $v0, $a1, -0x80
    ctx->pc = 0x15f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x15f718: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f71c: 0x24620054  addiu       $v0, $v1, 0x54
    ctx->pc = 0x15f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15f720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f724: 0x0  nop
    ctx->pc = 0x15f724u;
    // NOP
    // 0x15f728: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f72c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F72Cu;
    SET_GPR_U32(ctx, 31, 0x15F734u);
    ctx->pc = 0x15F730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F72Cu;
            // 0x15f730: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F734u; }
        if (ctx->pc != 0x15F734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F734u; }
        if (ctx->pc != 0x15F734u) { return; }
    }
    ctx->pc = 0x15F734u;
    // 0x15f734: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f738: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f73c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f740: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x15f740u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x15f744: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f748: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f74c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f750: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f754: 0x24844040  addiu       $a0, $a0, 0x4040
    ctx->pc = 0x15f754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    // 0x15f758: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x15f758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x15f75c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f760: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f760u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f764: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x15f764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15f768: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f76c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f774: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F774u;
    SET_GPR_U32(ctx, 31, 0x15F77Cu);
    ctx->pc = 0x15F778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F774u;
            // 0x15f778: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F77Cu; }
        if (ctx->pc != 0x15F77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F77Cu; }
        if (ctx->pc != 0x15F77Cu) { return; }
    }
    ctx->pc = 0x15F77Cu;
    // 0x15f77c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f780: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f784: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f788: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F788u;
    SET_GPR_U32(ctx, 31, 0x15F790u);
    ctx->pc = 0x15F78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F788u;
            // 0x15f78c: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F790u; }
        if (ctx->pc != 0x15F790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F790u; }
        if (ctx->pc != 0x15F790u) { return; }
    }
    ctx->pc = 0x15F790u;
    // 0x15f790: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f794: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f798: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f79c: 0x24843fc0  addiu       $a0, $a0, 0x3FC0
    ctx->pc = 0x15f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16320));
    // 0x15f7a0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f7a4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f7a8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f7ac: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F7ACu;
    SET_GPR_U32(ctx, 31, 0x15F7B4u);
    ctx->pc = 0x15F7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7ACu;
            // 0x15f7b0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7B4u; }
        if (ctx->pc != 0x15F7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7B4u; }
        if (ctx->pc != 0x15F7B4u) { return; }
    }
    ctx->pc = 0x15F7B4u;
    // 0x15f7b4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15f7b8: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15F7B8u;
    SET_GPR_U32(ctx, 31, 0x15F7C0u);
    ctx->pc = 0x15F7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7B8u;
            // 0x15f7bc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7C0u; }
        if (ctx->pc != 0x15F7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7C0u; }
        if (ctx->pc != 0x15F7C0u) { return; }
    }
    ctx->pc = 0x15F7C0u;
    // 0x15f7c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f7c4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f7c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15f7cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7d0: 0x24844050  addiu       $a0, $a0, 0x4050
    ctx->pc = 0x15f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16464));
    // 0x15f7d4: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f7d8: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x15f7d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x15f7dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f7e0: 0x24a2007a  addiu       $v0, $a1, 0x7A
    ctx->pc = 0x15f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 122));
    // 0x15f7e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f7e8: 0x24620054  addiu       $v0, $v1, 0x54
    ctx->pc = 0x15f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15f7ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f7f0: 0x0  nop
    ctx->pc = 0x15f7f0u;
    // NOP
    // 0x15f7f4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f7f8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F7F8u;
    SET_GPR_U32(ctx, 31, 0x15F800u);
    ctx->pc = 0x15F7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7F8u;
            // 0x15f7fc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F800u; }
        if (ctx->pc != 0x15F800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F800u; }
        if (ctx->pc != 0x15F800u) { return; }
    }
    ctx->pc = 0x15F800u;
    // 0x15f800: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f804: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x15f804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x15f808: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f80c: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x15f80cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x15f810: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f814: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f818: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f81c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f820: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x15f820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x15f824: 0x24c6007a  addiu       $a2, $a2, 0x7A
    ctx->pc = 0x15f824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 122));
    // 0x15f828: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f82c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f82cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f830: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x15f830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x15f834: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f840: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F840u;
    SET_GPR_U32(ctx, 31, 0x15F848u);
    ctx->pc = 0x15F844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F840u;
            // 0x15f844: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F848u; }
        if (ctx->pc != 0x15F848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F848u; }
        if (ctx->pc != 0x15F848u) { return; }
    }
    ctx->pc = 0x15F848u;
    // 0x15f848: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f84c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f850: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f854: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F854u;
    SET_GPR_U32(ctx, 31, 0x15F85Cu);
    ctx->pc = 0x15F858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F854u;
            // 0x15f858: 0x24843fd0  addiu       $a0, $a0, 0x3FD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F85Cu; }
        if (ctx->pc != 0x15F85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F85Cu; }
        if (ctx->pc != 0x15F85Cu) { return; }
    }
    ctx->pc = 0x15F85Cu;
    // 0x15f85c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f860: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f864: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f868: 0x24843fe0  addiu       $a0, $a0, 0x3FE0
    ctx->pc = 0x15f868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16352));
    // 0x15f86c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f870: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f874: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f878: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F878u;
    SET_GPR_U32(ctx, 31, 0x15F880u);
    ctx->pc = 0x15F87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F878u;
            // 0x15f87c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F880u; }
        if (ctx->pc != 0x15F880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F880u; }
        if (ctx->pc != 0x15F880u) { return; }
    }
    ctx->pc = 0x15F880u;
    // 0x15f880: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15f884: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15F884u;
    SET_GPR_U32(ctx, 31, 0x15F88Cu);
    ctx->pc = 0x15F888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F884u;
            // 0x15f888: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F88Cu; }
        if (ctx->pc != 0x15F88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F88Cu; }
        if (ctx->pc != 0x15F88Cu) { return; }
    }
    ctx->pc = 0x15F88Cu;
    // 0x15f88c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f890: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f894: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15f898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f89c: 0x24843eb0  addiu       $a0, $a0, 0x3EB0
    ctx->pc = 0x15f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16048));
    // 0x15f8a0: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15f8a4: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15f8a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15f8a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f8ac: 0x24a2ff80  addiu       $v0, $a1, -0x80
    ctx->pc = 0x15f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x15f8b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f8b4: 0x24620055  addiu       $v0, $v1, 0x55
    ctx->pc = 0x15f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15f8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f8bc: 0x0  nop
    ctx->pc = 0x15f8bcu;
    // NOP
    // 0x15f8c0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f8c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f8c4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F8C4u;
    SET_GPR_U32(ctx, 31, 0x15F8CCu);
    ctx->pc = 0x15F8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8C4u;
            // 0x15f8c8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8CCu; }
        if (ctx->pc != 0x15F8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8CCu; }
        if (ctx->pc != 0x15F8CCu) { return; }
    }
    ctx->pc = 0x15F8CCu;
    // 0x15f8cc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f8d0: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15f8d4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f8d8: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15f8d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15f8dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f8e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f8e4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f8e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f8ec: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    ctx->pc = 0x15f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x15f8f0: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x15f8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x15f8f4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f8f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f8f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f8fc: 0x24630055  addiu       $v1, $v1, 0x55
    ctx->pc = 0x15f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15f900: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f90c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F90Cu;
    SET_GPR_U32(ctx, 31, 0x15F914u);
    ctx->pc = 0x15F910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F90Cu;
            // 0x15f910: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F914u; }
        if (ctx->pc != 0x15F914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F914u; }
        if (ctx->pc != 0x15F914u) { return; }
    }
    ctx->pc = 0x15F914u;
    // 0x15f914: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f918: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f91c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f920: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F920u;
    SET_GPR_U32(ctx, 31, 0x15F928u);
    ctx->pc = 0x15F924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F920u;
            // 0x15f924: 0x24843df0  addiu       $a0, $a0, 0x3DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F928u; }
        if (ctx->pc != 0x15F928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F928u; }
        if (ctx->pc != 0x15F928u) { return; }
    }
    ctx->pc = 0x15F928u;
    // 0x15f928: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f92c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f930: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f934: 0x24843e00  addiu       $a0, $a0, 0x3E00
    ctx->pc = 0x15f934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15872));
    // 0x15f938: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15f938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f93c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f940: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f944: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F944u;
    SET_GPR_U32(ctx, 31, 0x15F94Cu);
    ctx->pc = 0x15F948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F944u;
            // 0x15f948: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F94Cu; }
        if (ctx->pc != 0x15F94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F94Cu; }
        if (ctx->pc != 0x15F94Cu) { return; }
    }
    ctx->pc = 0x15F94Cu;
    // 0x15f94c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15f950: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15F950u;
    SET_GPR_U32(ctx, 31, 0x15F958u);
    ctx->pc = 0x15F954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F950u;
            // 0x15f954: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F958u; }
        if (ctx->pc != 0x15F958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F958u; }
        if (ctx->pc != 0x15F958u) { return; }
    }
    ctx->pc = 0x15F958u;
    // 0x15f958: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f95c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f960: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15f964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f968: 0x24843ed0  addiu       $a0, $a0, 0x3ED0
    ctx->pc = 0x15f968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16080));
    // 0x15f96c: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15f970: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15f970u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15f974: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f978: 0x24a2ff80  addiu       $v0, $a1, -0x80
    ctx->pc = 0x15f978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x15f97c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f980: 0x24620055  addiu       $v0, $v1, 0x55
    ctx->pc = 0x15f980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15f984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f988: 0x0  nop
    ctx->pc = 0x15f988u;
    // NOP
    // 0x15f98c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15f98cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f990: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F990u;
    SET_GPR_U32(ctx, 31, 0x15F998u);
    ctx->pc = 0x15F994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F990u;
            // 0x15f994: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F998u; }
        if (ctx->pc != 0x15F998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F998u; }
        if (ctx->pc != 0x15F998u) { return; }
    }
    ctx->pc = 0x15F998u;
    // 0x15f998: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15f998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15f99c: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15f9a0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15f9a4: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15f9a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15f9a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15f9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15f9ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15f9b0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f9b4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15f9b8: 0x24843ee0  addiu       $a0, $a0, 0x3EE0
    ctx->pc = 0x15f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16096));
    // 0x15f9bc: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x15f9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x15f9c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f9c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15f9c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f9c8: 0x24630055  addiu       $v1, $v1, 0x55
    ctx->pc = 0x15f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15f9cc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15f9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15f9d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f9d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f9d8: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15F9D8u;
    SET_GPR_U32(ctx, 31, 0x15F9E0u);
    ctx->pc = 0x15F9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9D8u;
            // 0x15f9dc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9E0u; }
        if (ctx->pc != 0x15F9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9E0u; }
        if (ctx->pc != 0x15F9E0u) { return; }
    }
    ctx->pc = 0x15F9E0u;
    // 0x15f9e0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15f9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f9e4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f9e8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15f9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f9ec: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15F9ECu;
    SET_GPR_U32(ctx, 31, 0x15F9F4u);
    ctx->pc = 0x15F9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9ECu;
            // 0x15f9f0: 0x24843e10  addiu       $a0, $a0, 0x3E10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9F4u; }
        if (ctx->pc != 0x15F9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9F4u; }
        if (ctx->pc != 0x15F9F4u) { return; }
    }
    ctx->pc = 0x15F9F4u;
    // 0x15f9f4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15f9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15f9f8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15f9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15f9fc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fa00: 0x24843e20  addiu       $a0, $a0, 0x3E20
    ctx->pc = 0x15fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15904));
    // 0x15fa04: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fa08: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fa0c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fa10: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FA10u;
    SET_GPR_U32(ctx, 31, 0x15FA18u);
    ctx->pc = 0x15FA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA10u;
            // 0x15fa14: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA18u; }
        if (ctx->pc != 0x15FA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA18u; }
        if (ctx->pc != 0x15FA18u) { return; }
    }
    ctx->pc = 0x15FA18u;
    // 0x15fa18: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15fa1c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15FA1Cu;
    SET_GPR_U32(ctx, 31, 0x15FA24u);
    ctx->pc = 0x15FA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA1Cu;
            // 0x15fa20: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA24u; }
        if (ctx->pc != 0x15FA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA24u; }
        if (ctx->pc != 0x15FA24u) { return; }
    }
    ctx->pc = 0x15FA24u;
    // 0x15fa24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fa28: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fa2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15fa30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fa30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa34: 0x24843ef0  addiu       $a0, $a0, 0x3EF0
    ctx->pc = 0x15fa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16112));
    // 0x15fa38: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fa3c: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fa3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fa40: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fa44: 0x24a2ff80  addiu       $v0, $a1, -0x80
    ctx->pc = 0x15fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x15fa48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15fa4c: 0x24620055  addiu       $v0, $v1, 0x55
    ctx->pc = 0x15fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15fa50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fa50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa54: 0x0  nop
    ctx->pc = 0x15fa54u;
    // NOP
    // 0x15fa58: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15fa58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fa5c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FA5Cu;
    SET_GPR_U32(ctx, 31, 0x15FA64u);
    ctx->pc = 0x15FA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA5Cu;
            // 0x15fa60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA64u; }
        if (ctx->pc != 0x15FA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA64u; }
        if (ctx->pc != 0x15FA64u) { return; }
    }
    ctx->pc = 0x15FA64u;
    // 0x15fa64: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15fa64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15fa68: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fa6c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fa70: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fa70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fa74: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fa74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fa78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15fa7c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fa80: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fa84: 0x24843f00  addiu       $a0, $a0, 0x3F00
    ctx->pc = 0x15fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16128));
    // 0x15fa88: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x15fa88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x15fa8c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15fa90: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15fa90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fa94: 0x24630055  addiu       $v1, $v1, 0x55
    ctx->pc = 0x15fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15fa98: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15fa98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fa9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15faa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15faa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15faa4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FAA4u;
    SET_GPR_U32(ctx, 31, 0x15FAACu);
    ctx->pc = 0x15FAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAA4u;
            // 0x15faa8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAACu; }
        if (ctx->pc != 0x15FAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAACu; }
        if (ctx->pc != 0x15FAACu) { return; }
    }
    ctx->pc = 0x15FAACu;
    // 0x15faac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15faacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fab0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fab4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15fab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fab8: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FAB8u;
    SET_GPR_U32(ctx, 31, 0x15FAC0u);
    ctx->pc = 0x15FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAB8u;
            // 0x15fabc: 0x24843e30  addiu       $a0, $a0, 0x3E30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAC0u; }
        if (ctx->pc != 0x15FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAC0u; }
        if (ctx->pc != 0x15FAC0u) { return; }
    }
    ctx->pc = 0x15FAC0u;
    // 0x15fac0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15fac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fac4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fac8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15facc: 0x24843e40  addiu       $a0, $a0, 0x3E40
    ctx->pc = 0x15faccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15936));
    // 0x15fad0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fad4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fad8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fadc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FADCu;
    SET_GPR_U32(ctx, 31, 0x15FAE4u);
    ctx->pc = 0x15FAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FADCu;
            // 0x15fae0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAE4u; }
        if (ctx->pc != 0x15FAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAE4u; }
        if (ctx->pc != 0x15FAE4u) { return; }
    }
    ctx->pc = 0x15FAE4u;
    // 0x15fae4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15fae8: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15FAE8u;
    SET_GPR_U32(ctx, 31, 0x15FAF0u);
    ctx->pc = 0x15FAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAE8u;
            // 0x15faec: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAF0u; }
        if (ctx->pc != 0x15FAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FAF0u; }
        if (ctx->pc != 0x15FAF0u) { return; }
    }
    ctx->pc = 0x15FAF0u;
    // 0x15faf0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15faf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15faf4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15faf8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15fafc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb00: 0x24843f10  addiu       $a0, $a0, 0x3F10
    ctx->pc = 0x15fb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16144));
    // 0x15fb04: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fb08: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fb08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fb0c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fb10: 0x24a2007a  addiu       $v0, $a1, 0x7A
    ctx->pc = 0x15fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 122));
    // 0x15fb14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15fb18: 0x24620055  addiu       $v0, $v1, 0x55
    ctx->pc = 0x15fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15fb1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fb1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fb20: 0x0  nop
    ctx->pc = 0x15fb20u;
    // NOP
    // 0x15fb24: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15fb24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fb28: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FB28u;
    SET_GPR_U32(ctx, 31, 0x15FB30u);
    ctx->pc = 0x15FB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB28u;
            // 0x15fb2c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB30u; }
        if (ctx->pc != 0x15FB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB30u; }
        if (ctx->pc != 0x15FB30u) { return; }
    }
    ctx->pc = 0x15FB30u;
    // 0x15fb30: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15fb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15fb34: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fb38: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fb3c: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fb3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fb40: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fb44: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15fb48: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fb4c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fb50: 0x24843f20  addiu       $a0, $a0, 0x3F20
    ctx->pc = 0x15fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    // 0x15fb54: 0x24c6007a  addiu       $a2, $a2, 0x7A
    ctx->pc = 0x15fb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 122));
    // 0x15fb58: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15fb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15fb5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15fb5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fb60: 0x24630055  addiu       $v1, $v1, 0x55
    ctx->pc = 0x15fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15fb64: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15fb64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fb68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fb6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fb70: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FB70u;
    SET_GPR_U32(ctx, 31, 0x15FB78u);
    ctx->pc = 0x15FB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB70u;
            // 0x15fb74: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB78u; }
        if (ctx->pc != 0x15FB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB78u; }
        if (ctx->pc != 0x15FB78u) { return; }
    }
    ctx->pc = 0x15FB78u;
    // 0x15fb78: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15fb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fb7c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fb80: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15fb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fb84: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FB84u;
    SET_GPR_U32(ctx, 31, 0x15FB8Cu);
    ctx->pc = 0x15FB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB84u;
            // 0x15fb88: 0x24843e50  addiu       $a0, $a0, 0x3E50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB8Cu; }
        if (ctx->pc != 0x15FB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB8Cu; }
        if (ctx->pc != 0x15FB8Cu) { return; }
    }
    ctx->pc = 0x15FB8Cu;
    // 0x15fb8c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15fb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fb90: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fb94: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fb98: 0x24843e60  addiu       $a0, $a0, 0x3E60
    ctx->pc = 0x15fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15968));
    // 0x15fb9c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fba0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fba4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fba8: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FBA8u;
    SET_GPR_U32(ctx, 31, 0x15FBB0u);
    ctx->pc = 0x15FBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FBA8u;
            // 0x15fbac: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBB0u; }
        if (ctx->pc != 0x15FBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBB0u; }
        if (ctx->pc != 0x15FBB0u) { return; }
    }
    ctx->pc = 0x15FBB0u;
    // 0x15fbb0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15fbb4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15FBB4u;
    SET_GPR_U32(ctx, 31, 0x15FBBCu);
    ctx->pc = 0x15FBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FBB4u;
            // 0x15fbb8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBBCu; }
        if (ctx->pc != 0x15FBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBBCu; }
        if (ctx->pc != 0x15FBBCu) { return; }
    }
    ctx->pc = 0x15FBBCu;
    // 0x15fbbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fbc0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fbc4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15fbc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fbcc: 0x24843f30  addiu       $a0, $a0, 0x3F30
    ctx->pc = 0x15fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16176));
    // 0x15fbd0: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fbd4: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fbd4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fbd8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fbdc: 0x24a2007a  addiu       $v0, $a1, 0x7A
    ctx->pc = 0x15fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 122));
    // 0x15fbe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15fbe4: 0x24620055  addiu       $v0, $v1, 0x55
    ctx->pc = 0x15fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15fbe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fbe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fbec: 0x0  nop
    ctx->pc = 0x15fbecu;
    // NOP
    // 0x15fbf0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15fbf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fbf4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FBF4u;
    SET_GPR_U32(ctx, 31, 0x15FBFCu);
    ctx->pc = 0x15FBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FBF4u;
            // 0x15fbf8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBFCu; }
        if (ctx->pc != 0x15FBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBFCu; }
        if (ctx->pc != 0x15FBFCu) { return; }
    }
    ctx->pc = 0x15FBFCu;
    // 0x15fbfc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15fbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15fc00: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fc04: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fc08: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fc08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fc0c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fc10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15fc14: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fc18: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fc1c: 0x24843f40  addiu       $a0, $a0, 0x3F40
    ctx->pc = 0x15fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16192));
    // 0x15fc20: 0x24c6007a  addiu       $a2, $a2, 0x7A
    ctx->pc = 0x15fc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 122));
    // 0x15fc24: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15fc28: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15fc28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fc2c: 0x24630055  addiu       $v1, $v1, 0x55
    ctx->pc = 0x15fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15fc30: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15fc30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fc34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fc38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fc3c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FC3Cu;
    SET_GPR_U32(ctx, 31, 0x15FC44u);
    ctx->pc = 0x15FC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC3Cu;
            // 0x15fc40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC44u; }
        if (ctx->pc != 0x15FC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC44u; }
        if (ctx->pc != 0x15FC44u) { return; }
    }
    ctx->pc = 0x15FC44u;
    // 0x15fc44: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fc48: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fc4c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15fc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fc50: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FC50u;
    SET_GPR_U32(ctx, 31, 0x15FC58u);
    ctx->pc = 0x15FC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC50u;
            // 0x15fc54: 0x24843e70  addiu       $a0, $a0, 0x3E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC58u; }
        if (ctx->pc != 0x15FC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC58u; }
        if (ctx->pc != 0x15FC58u) { return; }
    }
    ctx->pc = 0x15FC58u;
    // 0x15fc58: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15fc58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fc5c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fc60: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fc64: 0x24843e80  addiu       $a0, $a0, 0x3E80
    ctx->pc = 0x15fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16000));
    // 0x15fc68: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fc6c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fc70: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15fc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fc74: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FC74u;
    SET_GPR_U32(ctx, 31, 0x15FC7Cu);
    ctx->pc = 0x15FC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC74u;
            // 0x15fc78: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC7Cu; }
        if (ctx->pc != 0x15FC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC7Cu; }
        if (ctx->pc != 0x15FC7Cu) { return; }
    }
    ctx->pc = 0x15FC7Cu;
    // 0x15fc7c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15fc80: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15FC80u;
    SET_GPR_U32(ctx, 31, 0x15FC88u);
    ctx->pc = 0x15FC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC80u;
            // 0x15fc84: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC88u; }
        if (ctx->pc != 0x15FC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC88u; }
        if (ctx->pc != 0x15FC88u) { return; }
    }
    ctx->pc = 0x15FC88u;
    // 0x15fc88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fc8c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fc90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15fc94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc98: 0x24843f50  addiu       $a0, $a0, 0x3F50
    ctx->pc = 0x15fc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16208));
    // 0x15fc9c: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fca0: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fca0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fca4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fca8: 0x24a2007a  addiu       $v0, $a1, 0x7A
    ctx->pc = 0x15fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 122));
    // 0x15fcac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fcacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15fcb0: 0x24620055  addiu       $v0, $v1, 0x55
    ctx->pc = 0x15fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15fcb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fcb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fcb8: 0x0  nop
    ctx->pc = 0x15fcb8u;
    // NOP
    // 0x15fcbc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15fcbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fcc0: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FCC0u;
    SET_GPR_U32(ctx, 31, 0x15FCC8u);
    ctx->pc = 0x15FCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FCC0u;
            // 0x15fcc4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FCC8u; }
        if (ctx->pc != 0x15FCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FCC8u; }
        if (ctx->pc != 0x15FCC8u) { return; }
    }
    ctx->pc = 0x15FCC8u;
    // 0x15fcc8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15fcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15fccc: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fcd0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fcd4: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fcd4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fcd8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fcdc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15fce0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fce4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fce8: 0x24843f60  addiu       $a0, $a0, 0x3F60
    ctx->pc = 0x15fce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16224));
    // 0x15fcec: 0x24c6007a  addiu       $a2, $a2, 0x7A
    ctx->pc = 0x15fcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 122));
    // 0x15fcf0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15fcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15fcf4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15fcf4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fcf8: 0x24630055  addiu       $v1, $v1, 0x55
    ctx->pc = 0x15fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x15fcfc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15fcfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fd00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fd04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fd04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fd08: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FD08u;
    SET_GPR_U32(ctx, 31, 0x15FD10u);
    ctx->pc = 0x15FD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD08u;
            // 0x15fd0c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD10u; }
        if (ctx->pc != 0x15FD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD10u; }
        if (ctx->pc != 0x15FD10u) { return; }
    }
    ctx->pc = 0x15FD10u;
    // 0x15fd10: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15fd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fd14: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fd18: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15fd18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fd1c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FD1Cu;
    SET_GPR_U32(ctx, 31, 0x15FD24u);
    ctx->pc = 0x15FD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD1Cu;
            // 0x15fd20: 0x24843e90  addiu       $a0, $a0, 0x3E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD24u; }
        if (ctx->pc != 0x15FD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD24u; }
        if (ctx->pc != 0x15FD24u) { return; }
    }
    ctx->pc = 0x15FD24u;
    // 0x15fd24: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15fd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fd28: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fd2c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fd30: 0x24843ea0  addiu       $a0, $a0, 0x3EA0
    ctx->pc = 0x15fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16032));
    // 0x15fd34: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fd38: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fd3c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15fd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fd40: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FD40u;
    SET_GPR_U32(ctx, 31, 0x15FD48u);
    ctx->pc = 0x15FD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD40u;
            // 0x15fd44: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD48u; }
        if (ctx->pc != 0x15FD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD48u; }
        if (ctx->pc != 0x15FD48u) { return; }
    }
    ctx->pc = 0x15FD48u;
    // 0x15fd48: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15fd4c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15FD4Cu;
    SET_GPR_U32(ctx, 31, 0x15FD54u);
    ctx->pc = 0x15FD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD4Cu;
            // 0x15fd50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD54u; }
        if (ctx->pc != 0x15FD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD54u; }
        if (ctx->pc != 0x15FD54u) { return; }
    }
    ctx->pc = 0x15FD54u;
    // 0x15fd54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fd58: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fd5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15fd60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd64: 0x24843d30  addiu       $a0, $a0, 0x3D30
    ctx->pc = 0x15fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15664));
    // 0x15fd68: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fd6c: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fd6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fd70: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fd74: 0x24a2ff82  addiu       $v0, $a1, -0x7E
    ctx->pc = 0x15fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967170));
    // 0x15fd78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fd78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15fd7c: 0x2462007e  addiu       $v0, $v1, 0x7E
    ctx->pc = 0x15fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x15fd80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fd84: 0x0  nop
    ctx->pc = 0x15fd84u;
    // NOP
    // 0x15fd88: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15fd88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fd8c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FD8Cu;
    SET_GPR_U32(ctx, 31, 0x15FD94u);
    ctx->pc = 0x15FD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD8Cu;
            // 0x15fd90: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD94u; }
        if (ctx->pc != 0x15FD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FD94u; }
        if (ctx->pc != 0x15FD94u) { return; }
    }
    ctx->pc = 0x15FD94u;
    // 0x15fd94: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15fd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15fd98: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fd9c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fda0: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fda0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fda4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fda8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15fdac: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fdb0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fdb4: 0x24843d40  addiu       $a0, $a0, 0x3D40
    ctx->pc = 0x15fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15680));
    // 0x15fdb8: 0x24c6ff82  addiu       $a2, $a2, -0x7E
    ctx->pc = 0x15fdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967170));
    // 0x15fdbc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15fdc0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15fdc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fdc4: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x15fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x15fdc8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15fdc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fdcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fdd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fdd4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FDD4u;
    SET_GPR_U32(ctx, 31, 0x15FDDCu);
    ctx->pc = 0x15FDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDD4u;
            // 0x15fdd8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDDCu; }
        if (ctx->pc != 0x15FDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDDCu; }
        if (ctx->pc != 0x15FDDCu) { return; }
    }
    ctx->pc = 0x15FDDCu;
    // 0x15fddc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fde0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fde4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15fde4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fde8: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FDE8u;
    SET_GPR_U32(ctx, 31, 0x15FDF0u);
    ctx->pc = 0x15FDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FDE8u;
            // 0x15fdec: 0x24843c70  addiu       $a0, $a0, 0x3C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDF0u; }
        if (ctx->pc != 0x15FDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FDF0u; }
        if (ctx->pc != 0x15FDF0u) { return; }
    }
    ctx->pc = 0x15FDF0u;
    // 0x15fdf0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15fdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fdf4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fdf8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fdfc: 0x24843c80  addiu       $a0, $a0, 0x3C80
    ctx->pc = 0x15fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15488));
    // 0x15fe00: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fe04: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fe08: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fe0c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FE0Cu;
    SET_GPR_U32(ctx, 31, 0x15FE14u);
    ctx->pc = 0x15FE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE0Cu;
            // 0x15fe10: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE14u; }
        if (ctx->pc != 0x15FE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE14u; }
        if (ctx->pc != 0x15FE14u) { return; }
    }
    ctx->pc = 0x15FE14u;
    // 0x15fe14: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15fe18: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15FE18u;
    SET_GPR_U32(ctx, 31, 0x15FE20u);
    ctx->pc = 0x15FE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE18u;
            // 0x15fe1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE20u; }
        if (ctx->pc != 0x15FE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE20u; }
        if (ctx->pc != 0x15FE20u) { return; }
    }
    ctx->pc = 0x15FE20u;
    // 0x15fe20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fe24: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fe28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15fe2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fe2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe30: 0x24843d50  addiu       $a0, $a0, 0x3D50
    ctx->pc = 0x15fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15696));
    // 0x15fe34: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fe38: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fe38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fe3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fe3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fe40: 0x24a2ff82  addiu       $v0, $a1, -0x7E
    ctx->pc = 0x15fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967170));
    // 0x15fe44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fe44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15fe48: 0x2462007e  addiu       $v0, $v1, 0x7E
    ctx->pc = 0x15fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x15fe4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fe4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fe50: 0x0  nop
    ctx->pc = 0x15fe50u;
    // NOP
    // 0x15fe54: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15fe54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fe58: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FE58u;
    SET_GPR_U32(ctx, 31, 0x15FE60u);
    ctx->pc = 0x15FE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE58u;
            // 0x15fe5c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE60u; }
        if (ctx->pc != 0x15FE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE60u; }
        if (ctx->pc != 0x15FE60u) { return; }
    }
    ctx->pc = 0x15FE60u;
    // 0x15fe60: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15fe60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15fe64: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15fe68: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fe6c: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15fe6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15fe70: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15fe70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15fe74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15fe78: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fe7c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fe80: 0x24843d60  addiu       $a0, $a0, 0x3D60
    ctx->pc = 0x15fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15712));
    // 0x15fe84: 0x24c6ff82  addiu       $a2, $a2, -0x7E
    ctx->pc = 0x15fe84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967170));
    // 0x15fe88: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15fe8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15fe8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fe90: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x15fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x15fe94: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15fe94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fe98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fe9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fe9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fea0: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FEA0u;
    SET_GPR_U32(ctx, 31, 0x15FEA8u);
    ctx->pc = 0x15FEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FEA0u;
            // 0x15fea4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEA8u; }
        if (ctx->pc != 0x15FEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEA8u; }
        if (ctx->pc != 0x15FEA8u) { return; }
    }
    ctx->pc = 0x15FEA8u;
    // 0x15fea8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15fea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15feac: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15feacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15feb0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15feb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15feb4: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FEB4u;
    SET_GPR_U32(ctx, 31, 0x15FEBCu);
    ctx->pc = 0x15FEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FEB4u;
            // 0x15feb8: 0x24843c90  addiu       $a0, $a0, 0x3C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEBCu; }
        if (ctx->pc != 0x15FEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEBCu; }
        if (ctx->pc != 0x15FEBCu) { return; }
    }
    ctx->pc = 0x15FEBCu;
    // 0x15febc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15febcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15fec0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fec4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15fec8: 0x24843ca0  addiu       $a0, $a0, 0x3CA0
    ctx->pc = 0x15fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15520));
    // 0x15fecc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15fed0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15fed4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15fed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fed8: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FED8u;
    SET_GPR_U32(ctx, 31, 0x15FEE0u);
    ctx->pc = 0x15FEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FED8u;
            // 0x15fedc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEE0u; }
        if (ctx->pc != 0x15FEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEE0u; }
        if (ctx->pc != 0x15FEE0u) { return; }
    }
    ctx->pc = 0x15FEE0u;
    // 0x15fee0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15fee4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15FEE4u;
    SET_GPR_U32(ctx, 31, 0x15FEECu);
    ctx->pc = 0x15FEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FEE4u;
            // 0x15fee8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEECu; }
        if (ctx->pc != 0x15FEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEECu; }
        if (ctx->pc != 0x15FEECu) { return; }
    }
    ctx->pc = 0x15FEECu;
    // 0x15feec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15feecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fef0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15fef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15fef4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15fef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fefc: 0x24843d70  addiu       $a0, $a0, 0x3D70
    ctx->pc = 0x15fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15728));
    // 0x15ff00: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15ff04: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15ff04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15ff08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ff08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ff0c: 0x24a2ff82  addiu       $v0, $a1, -0x7E
    ctx->pc = 0x15ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967170));
    // 0x15ff10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ff10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ff14: 0x2462007e  addiu       $v0, $v1, 0x7E
    ctx->pc = 0x15ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x15ff18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ff18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff1c: 0x0  nop
    ctx->pc = 0x15ff1cu;
    // NOP
    // 0x15ff20: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15ff20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ff24: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FF24u;
    SET_GPR_U32(ctx, 31, 0x15FF2Cu);
    ctx->pc = 0x15FF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF24u;
            // 0x15ff28: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF2Cu; }
        if (ctx->pc != 0x15FF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF2Cu; }
        if (ctx->pc != 0x15FF2Cu) { return; }
    }
    ctx->pc = 0x15FF2Cu;
    // 0x15ff2c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ff30: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15ff34: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ff38: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15ff38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15ff3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ff3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ff40: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ff44: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ff48: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ff4c: 0x24843d80  addiu       $a0, $a0, 0x3D80
    ctx->pc = 0x15ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15744));
    // 0x15ff50: 0x24c6ff82  addiu       $a2, $a2, -0x7E
    ctx->pc = 0x15ff50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967170));
    // 0x15ff54: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15ff58: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15ff58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff5c: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x15ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x15ff60: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15ff60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ff64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ff68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ff68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff6c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FF6Cu;
    SET_GPR_U32(ctx, 31, 0x15FF74u);
    ctx->pc = 0x15FF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF6Cu;
            // 0x15ff70: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF74u; }
        if (ctx->pc != 0x15FF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF74u; }
        if (ctx->pc != 0x15FF74u) { return; }
    }
    ctx->pc = 0x15FF74u;
    // 0x15ff74: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x15ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ff78: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ff7c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x15ff7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ff80: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FF80u;
    SET_GPR_U32(ctx, 31, 0x15FF88u);
    ctx->pc = 0x15FF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF80u;
            // 0x15ff84: 0x24843cb0  addiu       $a0, $a0, 0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF88u; }
        if (ctx->pc != 0x15FF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF88u; }
        if (ctx->pc != 0x15FF88u) { return; }
    }
    ctx->pc = 0x15FF88u;
    // 0x15ff88: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15ff8c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ff90: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15ff90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15ff94: 0x24843cc0  addiu       $a0, $a0, 0x3CC0
    ctx->pc = 0x15ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15552));
    // 0x15ff98: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15ff9c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x15ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15ffa0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15ffa4: 0xc058430  jal         func_1610C0
    ctx->pc = 0x15FFA4u;
    SET_GPR_U32(ctx, 31, 0x15FFACu);
    ctx->pc = 0x15FFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFA4u;
            // 0x15ffa8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFACu; }
        if (ctx->pc != 0x15FFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFACu; }
        if (ctx->pc != 0x15FFACu) { return; }
    }
    ctx->pc = 0x15FFACu;
    // 0x15ffac: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x15ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15ffb0: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15FFB0u;
    SET_GPR_U32(ctx, 31, 0x15FFB8u);
    ctx->pc = 0x15FFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFB0u;
            // 0x15ffb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFB8u; }
        if (ctx->pc != 0x15FFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFB8u; }
        if (ctx->pc != 0x15FFB8u) { return; }
    }
    ctx->pc = 0x15FFB8u;
    // 0x15ffb8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ffbc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ffc0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15ffc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ffc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffc8: 0x24843d90  addiu       $a0, $a0, 0x3D90
    ctx->pc = 0x15ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15760));
    // 0x15ffcc: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x15ffd0: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x15ffd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x15ffd4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15ffd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ffd8: 0x24a2007c  addiu       $v0, $a1, 0x7C
    ctx->pc = 0x15ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 124));
    // 0x15ffdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ffdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ffe0: 0x2462007e  addiu       $v0, $v1, 0x7E
    ctx->pc = 0x15ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x15ffe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ffe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ffe8: 0x0  nop
    ctx->pc = 0x15ffe8u;
    // NOP
    // 0x15ffec: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15ffecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15fff0: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x15FFF0u;
    SET_GPR_U32(ctx, 31, 0x15FFF8u);
    ctx->pc = 0x15FFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFF0u;
            // 0x15fff4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFF8u; }
        if (ctx->pc != 0x15FFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFF8u; }
        if (ctx->pc != 0x15FFF8u) { return; }
    }
    ctx->pc = 0x15FFF8u;
    // 0x15fff8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15fff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15fffc: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x15fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x160000: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160004: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x160004u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x160008: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16000c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x160010: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160014: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160018: 0x24843da0  addiu       $a0, $a0, 0x3DA0
    ctx->pc = 0x160018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15776));
    // 0x16001c: 0x24c6007c  addiu       $a2, $a2, 0x7C
    ctx->pc = 0x16001cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 124));
    // 0x160020: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x160020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160024: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160024u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160028: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x160028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x16002c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x16002cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160038: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160038u;
    SET_GPR_U32(ctx, 31, 0x160040u);
    ctx->pc = 0x16003Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160038u;
            // 0x16003c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160040u; }
        if (ctx->pc != 0x160040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160040u; }
        if (ctx->pc != 0x160040u) { return; }
    }
    ctx->pc = 0x160040u;
    // 0x160040: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x160040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160044: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160048: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x160048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16004c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x16004Cu;
    SET_GPR_U32(ctx, 31, 0x160054u);
    ctx->pc = 0x160050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16004Cu;
            // 0x160050: 0x24843cd0  addiu       $a0, $a0, 0x3CD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160054u; }
        if (ctx->pc != 0x160054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160054u; }
        if (ctx->pc != 0x160054u) { return; }
    }
    ctx->pc = 0x160054u;
    // 0x160054: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160058: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x16005c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x16005cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160060: 0x24843ce0  addiu       $a0, $a0, 0x3CE0
    ctx->pc = 0x160060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15584));
    // 0x160064: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160068: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16006c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x16006cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x160070: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160070u;
    SET_GPR_U32(ctx, 31, 0x160078u);
    ctx->pc = 0x160074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160070u;
            // 0x160074: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160078u; }
        if (ctx->pc != 0x160078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160078u; }
        if (ctx->pc != 0x160078u) { return; }
    }
    ctx->pc = 0x160078u;
    // 0x160078: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x160078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x16007c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x16007Cu;
    SET_GPR_U32(ctx, 31, 0x160084u);
    ctx->pc = 0x160080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16007Cu;
            // 0x160080: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160084u; }
        if (ctx->pc != 0x160084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160084u; }
        if (ctx->pc != 0x160084u) { return; }
    }
    ctx->pc = 0x160084u;
    // 0x160084: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160088: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x16008c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160094: 0x24843db0  addiu       $a0, $a0, 0x3DB0
    ctx->pc = 0x160094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15792));
    // 0x160098: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x160098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x16009c: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x16009cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x1600a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1600a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1600a4: 0x24a2007c  addiu       $v0, $a1, 0x7C
    ctx->pc = 0x1600a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 124));
    // 0x1600a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1600a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1600ac: 0x2462007e  addiu       $v0, $v1, 0x7E
    ctx->pc = 0x1600acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x1600b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1600b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1600b4: 0x0  nop
    ctx->pc = 0x1600b4u;
    // NOP
    // 0x1600b8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1600b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1600bc: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1600BCu;
    SET_GPR_U32(ctx, 31, 0x1600C4u);
    ctx->pc = 0x1600C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1600BCu;
            // 0x1600c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600C4u; }
        if (ctx->pc != 0x1600C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600C4u; }
        if (ctx->pc != 0x1600C4u) { return; }
    }
    ctx->pc = 0x1600C4u;
    // 0x1600c4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1600c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1600c8: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x1600c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x1600cc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1600ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1600d0: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x1600d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x1600d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1600d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1600d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1600dc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1600dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1600e0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1600e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1600e4: 0x24843dc0  addiu       $a0, $a0, 0x3DC0
    ctx->pc = 0x1600e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15808));
    // 0x1600e8: 0x24c6007c  addiu       $a2, $a2, 0x7C
    ctx->pc = 0x1600e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 124));
    // 0x1600ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1600ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1600f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1600f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1600f4: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x1600f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x1600f8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1600f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1600fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1600fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160104: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160104u;
    SET_GPR_U32(ctx, 31, 0x16010Cu);
    ctx->pc = 0x160108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160104u;
            // 0x160108: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16010Cu; }
        if (ctx->pc != 0x16010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16010Cu; }
        if (ctx->pc != 0x16010Cu) { return; }
    }
    ctx->pc = 0x16010Cu;
    // 0x16010c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x16010cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160110: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160114: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x160114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160118: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160118u;
    SET_GPR_U32(ctx, 31, 0x160120u);
    ctx->pc = 0x16011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160118u;
            // 0x16011c: 0x24843cf0  addiu       $a0, $a0, 0x3CF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160120u; }
        if (ctx->pc != 0x160120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160120u; }
        if (ctx->pc != 0x160120u) { return; }
    }
    ctx->pc = 0x160120u;
    // 0x160120: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160124: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160128: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16012c: 0x24843d00  addiu       $a0, $a0, 0x3D00
    ctx->pc = 0x16012cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15616));
    // 0x160130: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160134: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160138: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16013c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x16013Cu;
    SET_GPR_U32(ctx, 31, 0x160144u);
    ctx->pc = 0x160140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16013Cu;
            // 0x160140: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160144u; }
        if (ctx->pc != 0x160144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160144u; }
        if (ctx->pc != 0x160144u) { return; }
    }
    ctx->pc = 0x160144u;
    // 0x160144: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x160144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x160148: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160148u;
    SET_GPR_U32(ctx, 31, 0x160150u);
    ctx->pc = 0x16014Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160148u;
            // 0x16014c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160150u; }
        if (ctx->pc != 0x160150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160150u; }
        if (ctx->pc != 0x160150u) { return; }
    }
    ctx->pc = 0x160150u;
    // 0x160150: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160154: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160158: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16015c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16015cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160160: 0x24843dd0  addiu       $a0, $a0, 0x3DD0
    ctx->pc = 0x160160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15824));
    // 0x160164: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x160164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x160168: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x160168u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x16016c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x16016cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160170: 0x24a2007c  addiu       $v0, $a1, 0x7C
    ctx->pc = 0x160170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 124));
    // 0x160174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160178: 0x2462007e  addiu       $v0, $v1, 0x7E
    ctx->pc = 0x160178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x16017c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16017cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160180: 0x0  nop
    ctx->pc = 0x160180u;
    // NOP
    // 0x160184: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160188: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160188u;
    SET_GPR_U32(ctx, 31, 0x160190u);
    ctx->pc = 0x16018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160188u;
            // 0x16018c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160190u; }
        if (ctx->pc != 0x160190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160190u; }
        if (ctx->pc != 0x160190u) { return; }
    }
    ctx->pc = 0x160190u;
    // 0x160190: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x160190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160194: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x160194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x160198: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16019c: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x16019cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x1601a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1601a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1601a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1601a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1601a8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1601a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1601ac: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1601acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1601b0: 0x24843de0  addiu       $a0, $a0, 0x3DE0
    ctx->pc = 0x1601b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15840));
    // 0x1601b4: 0x24c6007c  addiu       $a2, $a2, 0x7C
    ctx->pc = 0x1601b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 124));
    // 0x1601b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1601b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1601bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1601bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1601c0: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x1601c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x1601c4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1601c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1601c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1601c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1601cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1601ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1601d0: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1601D0u;
    SET_GPR_U32(ctx, 31, 0x1601D8u);
    ctx->pc = 0x1601D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1601D0u;
            // 0x1601d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601D8u; }
        if (ctx->pc != 0x1601D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601D8u; }
        if (ctx->pc != 0x1601D8u) { return; }
    }
    ctx->pc = 0x1601D8u;
    // 0x1601d8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1601d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1601dc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1601dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1601e0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1601e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1601e4: 0xc058430  jal         func_1610C0
    ctx->pc = 0x1601E4u;
    SET_GPR_U32(ctx, 31, 0x1601ECu);
    ctx->pc = 0x1601E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1601E4u;
            // 0x1601e8: 0x24843d10  addiu       $a0, $a0, 0x3D10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601ECu; }
        if (ctx->pc != 0x1601ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1601ECu; }
        if (ctx->pc != 0x1601ECu) { return; }
    }
    ctx->pc = 0x1601ECu;
    // 0x1601ec: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1601ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1601f0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1601f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1601f4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1601f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1601f8: 0x24843d20  addiu       $a0, $a0, 0x3D20
    ctx->pc = 0x1601f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15648));
    // 0x1601fc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1601fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160200: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160204: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x160208: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160208u;
    SET_GPR_U32(ctx, 31, 0x160210u);
    ctx->pc = 0x16020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160208u;
            // 0x16020c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160210u; }
        if (ctx->pc != 0x160210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160210u; }
        if (ctx->pc != 0x160210u) { return; }
    }
    ctx->pc = 0x160210u;
    // 0x160210: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x160210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x160214: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160214u;
    SET_GPR_U32(ctx, 31, 0x16021Cu);
    ctx->pc = 0x160218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160214u;
            // 0x160218: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16021Cu; }
        if (ctx->pc != 0x16021Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16021Cu; }
        if (ctx->pc != 0x16021Cu) { return; }
    }
    ctx->pc = 0x16021Cu;
    // 0x16021c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16021cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160220: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160224: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16022c: 0x24843c30  addiu       $a0, $a0, 0x3C30
    ctx->pc = 0x16022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15408));
    // 0x160230: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x160230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x160234: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x160234u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x160238: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16023c: 0x24a2ff8d  addiu       $v0, $a1, -0x73
    ctx->pc = 0x16023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967181));
    // 0x160240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160244: 0x24620011  addiu       $v0, $v1, 0x11
    ctx->pc = 0x160244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 17));
    // 0x160248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16024c: 0x0  nop
    ctx->pc = 0x16024cu;
    // NOP
    // 0x160250: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160254: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160254u;
    SET_GPR_U32(ctx, 31, 0x16025Cu);
    ctx->pc = 0x160258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160254u;
            // 0x160258: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16025Cu; }
        if (ctx->pc != 0x16025Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16025Cu; }
        if (ctx->pc != 0x16025Cu) { return; }
    }
    ctx->pc = 0x16025Cu;
    // 0x16025c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16025cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160260: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x160260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x160264: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160268: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x160268u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x16026c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x16026cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160270: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x160270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x160274: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160278: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16027c: 0x24843c40  addiu       $a0, $a0, 0x3C40
    ctx->pc = 0x16027cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15424));
    // 0x160280: 0x24c6ff8d  addiu       $a2, $a2, -0x73
    ctx->pc = 0x160280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967181));
    // 0x160284: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x160284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160288: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160288u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16028c: 0x24630011  addiu       $v1, $v1, 0x11
    ctx->pc = 0x16028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17));
    // 0x160290: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x160290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16029c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x16029Cu;
    SET_GPR_U32(ctx, 31, 0x1602A4u);
    ctx->pc = 0x1602A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16029Cu;
            // 0x1602a0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602A4u; }
        if (ctx->pc != 0x1602A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602A4u; }
        if (ctx->pc != 0x1602A4u) { return; }
    }
    ctx->pc = 0x1602A4u;
    // 0x1602a4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1602a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1602a8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1602a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1602ac: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1602acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1602b0: 0xc058430  jal         func_1610C0
    ctx->pc = 0x1602B0u;
    SET_GPR_U32(ctx, 31, 0x1602B8u);
    ctx->pc = 0x1602B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1602B0u;
            // 0x1602b4: 0x24843bf0  addiu       $a0, $a0, 0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602B8u; }
        if (ctx->pc != 0x1602B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602B8u; }
        if (ctx->pc != 0x1602B8u) { return; }
    }
    ctx->pc = 0x1602B8u;
    // 0x1602b8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1602b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1602bc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1602bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1602c0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1602c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1602c4: 0x24843c00  addiu       $a0, $a0, 0x3C00
    ctx->pc = 0x1602c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15360));
    // 0x1602c8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1602c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1602cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1602ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1602d0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1602d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1602d4: 0xc058430  jal         func_1610C0
    ctx->pc = 0x1602D4u;
    SET_GPR_U32(ctx, 31, 0x1602DCu);
    ctx->pc = 0x1602D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1602D4u;
            // 0x1602d8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602DCu; }
        if (ctx->pc != 0x1602DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602DCu; }
        if (ctx->pc != 0x1602DCu) { return; }
    }
    ctx->pc = 0x1602DCu;
    // 0x1602dc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1602dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1602e0: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1602E0u;
    SET_GPR_U32(ctx, 31, 0x1602E8u);
    ctx->pc = 0x1602E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1602E0u;
            // 0x1602e4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602E8u; }
        if (ctx->pc != 0x1602E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1602E8u; }
        if (ctx->pc != 0x1602E8u) { return; }
    }
    ctx->pc = 0x1602E8u;
    // 0x1602e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1602e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1602ec: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1602ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1602f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1602f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1602f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1602f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1602f8: 0x24843c50  addiu       $a0, $a0, 0x3C50
    ctx->pc = 0x1602f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15440));
    // 0x1602fc: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x1602fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x160300: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x160300u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x160304: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160308: 0x24a2007a  addiu       $v0, $a1, 0x7A
    ctx->pc = 0x160308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 122));
    // 0x16030c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16030cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160310: 0x24620011  addiu       $v0, $v1, 0x11
    ctx->pc = 0x160310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 17));
    // 0x160314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160318: 0x0  nop
    ctx->pc = 0x160318u;
    // NOP
    // 0x16031c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x16031cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160320: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160320u;
    SET_GPR_U32(ctx, 31, 0x160328u);
    ctx->pc = 0x160324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160320u;
            // 0x160324: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160328u; }
        if (ctx->pc != 0x160328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160328u; }
        if (ctx->pc != 0x160328u) { return; }
    }
    ctx->pc = 0x160328u;
    // 0x160328: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x160328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16032c: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x16032cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x160330: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160334: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x160334u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x160338: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16033c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x160340: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160344: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160348: 0x24843c60  addiu       $a0, $a0, 0x3C60
    ctx->pc = 0x160348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15456));
    // 0x16034c: 0x24c6007a  addiu       $a2, $a2, 0x7A
    ctx->pc = 0x16034cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 122));
    // 0x160350: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x160350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160354: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160354u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160358: 0x24630011  addiu       $v1, $v1, 0x11
    ctx->pc = 0x160358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17));
    // 0x16035c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x16035cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160368: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160368u;
    SET_GPR_U32(ctx, 31, 0x160370u);
    ctx->pc = 0x16036Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160368u;
            // 0x16036c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160370u; }
        if (ctx->pc != 0x160370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160370u; }
        if (ctx->pc != 0x160370u) { return; }
    }
    ctx->pc = 0x160370u;
    // 0x160370: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x160370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160374: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160378: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x160378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16037c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x16037Cu;
    SET_GPR_U32(ctx, 31, 0x160384u);
    ctx->pc = 0x160380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16037Cu;
            // 0x160380: 0x24843c10  addiu       $a0, $a0, 0x3C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160384u; }
        if (ctx->pc != 0x160384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160384u; }
        if (ctx->pc != 0x160384u) { return; }
    }
    ctx->pc = 0x160384u;
    // 0x160384: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160388: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x16038c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x16038cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160390: 0x24843c20  addiu       $a0, $a0, 0x3C20
    ctx->pc = 0x160390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15392));
    // 0x160394: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160398: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16039c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x16039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1603a0: 0xc058430  jal         func_1610C0
    ctx->pc = 0x1603A0u;
    SET_GPR_U32(ctx, 31, 0x1603A8u);
    ctx->pc = 0x1603A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1603A0u;
            // 0x1603a4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603A8u; }
        if (ctx->pc != 0x1603A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603A8u; }
        if (ctx->pc != 0x1603A8u) { return; }
    }
    ctx->pc = 0x1603A8u;
    // 0x1603a8: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1603a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1603ac: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1603ACu;
    SET_GPR_U32(ctx, 31, 0x1603B4u);
    ctx->pc = 0x1603B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1603ACu;
            // 0x1603b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603B4u; }
        if (ctx->pc != 0x1603B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603B4u; }
        if (ctx->pc != 0x1603B4u) { return; }
    }
    ctx->pc = 0x1603B4u;
    // 0x1603b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1603b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1603b8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1603b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1603bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1603bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1603c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1603c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603c4: 0x24843a70  addiu       $a0, $a0, 0x3A70
    ctx->pc = 0x1603c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14960));
    // 0x1603c8: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x1603c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x1603cc: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x1603ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x1603d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1603d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1603d4: 0x24a2ff84  addiu       $v0, $a1, -0x7C
    ctx->pc = 0x1603d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967172));
    // 0x1603d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1603d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1603dc: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x1603dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x1603e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1603e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1603e4: 0x0  nop
    ctx->pc = 0x1603e4u;
    // NOP
    // 0x1603e8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1603e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1603ec: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1603ECu;
    SET_GPR_U32(ctx, 31, 0x1603F4u);
    ctx->pc = 0x1603F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1603ECu;
            // 0x1603f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603F4u; }
        if (ctx->pc != 0x1603F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1603F4u; }
        if (ctx->pc != 0x1603F4u) { return; }
    }
    ctx->pc = 0x1603F4u;
    // 0x1603f4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1603f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1603f8: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x1603f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x1603fc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1603fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160400: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x160400u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x160404: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160408: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x160408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16040c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x16040cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160410: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160414: 0x24843a80  addiu       $a0, $a0, 0x3A80
    ctx->pc = 0x160414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14976));
    // 0x160418: 0x24c6ff84  addiu       $a2, $a2, -0x7C
    ctx->pc = 0x160418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967172));
    // 0x16041c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160420: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160420u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160424: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x160424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x160428: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x160428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x16042c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160434: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160434u;
    SET_GPR_U32(ctx, 31, 0x16043Cu);
    ctx->pc = 0x160438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160434u;
            // 0x160438: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16043Cu; }
        if (ctx->pc != 0x16043Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16043Cu; }
        if (ctx->pc != 0x16043Cu) { return; }
    }
    ctx->pc = 0x16043Cu;
    // 0x16043c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x16043cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160440: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160444: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x160444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160448: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160448u;
    SET_GPR_U32(ctx, 31, 0x160450u);
    ctx->pc = 0x16044Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160448u;
            // 0x16044c: 0x248438f0  addiu       $a0, $a0, 0x38F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160450u; }
        if (ctx->pc != 0x160450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160450u; }
        if (ctx->pc != 0x160450u) { return; }
    }
    ctx->pc = 0x160450u;
    // 0x160450: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160454: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160458: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16045c: 0x24843900  addiu       $a0, $a0, 0x3900
    ctx->pc = 0x16045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14592));
    // 0x160460: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160464: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160468: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16046c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x16046Cu;
    SET_GPR_U32(ctx, 31, 0x160474u);
    ctx->pc = 0x160470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16046Cu;
            // 0x160470: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160474u; }
        if (ctx->pc != 0x160474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160474u; }
        if (ctx->pc != 0x160474u) { return; }
    }
    ctx->pc = 0x160474u;
    // 0x160474: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x160474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160478: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x16047c: 0x248438c0  addiu       $a0, $a0, 0x38C0
    ctx->pc = 0x16047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14528));
    // 0x160480: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x160480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160484: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x160484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160488: 0xc057660  jal         func_15D980
    ctx->pc = 0x160488u;
    SET_GPR_U32(ctx, 31, 0x160490u);
    ctx->pc = 0x16048Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160488u;
            // 0x16048c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160490u; }
        if (ctx->pc != 0x160490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160490u; }
        if (ctx->pc != 0x160490u) { return; }
    }
    ctx->pc = 0x160490u;
    // 0x160490: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x160490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x160494: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160494u;
    SET_GPR_U32(ctx, 31, 0x16049Cu);
    ctx->pc = 0x160498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160494u;
            // 0x160498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16049Cu; }
        if (ctx->pc != 0x16049Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16049Cu; }
        if (ctx->pc != 0x16049Cu) { return; }
    }
    ctx->pc = 0x16049Cu;
    // 0x16049c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16049cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1604a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1604a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1604a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1604a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1604a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1604a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604ac: 0x24843a90  addiu       $a0, $a0, 0x3A90
    ctx->pc = 0x1604acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14992));
    // 0x1604b0: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x1604b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x1604b4: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x1604b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x1604b8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1604b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1604bc: 0x24a2ff84  addiu       $v0, $a1, -0x7C
    ctx->pc = 0x1604bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967172));
    // 0x1604c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1604c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1604c4: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x1604c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x1604c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1604c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1604cc: 0x0  nop
    ctx->pc = 0x1604ccu;
    // NOP
    // 0x1604d0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1604d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1604d4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1604D4u;
    SET_GPR_U32(ctx, 31, 0x1604DCu);
    ctx->pc = 0x1604D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1604D4u;
            // 0x1604d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604DCu; }
        if (ctx->pc != 0x1604DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1604DCu; }
        if (ctx->pc != 0x1604DCu) { return; }
    }
    ctx->pc = 0x1604DCu;
    // 0x1604dc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1604dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1604e0: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x1604e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x1604e4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1604e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1604e8: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x1604e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x1604ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1604ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1604f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1604f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1604f4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1604f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1604f8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1604f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1604fc: 0x24843aa0  addiu       $a0, $a0, 0x3AA0
    ctx->pc = 0x1604fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15008));
    // 0x160500: 0x24c6ff84  addiu       $a2, $a2, -0x7C
    ctx->pc = 0x160500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967172));
    // 0x160504: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x160504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160508: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160508u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16050c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x16050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x160510: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x160510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16051c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x16051Cu;
    SET_GPR_U32(ctx, 31, 0x160524u);
    ctx->pc = 0x160520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16051Cu;
            // 0x160520: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160524u; }
        if (ctx->pc != 0x160524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160524u; }
        if (ctx->pc != 0x160524u) { return; }
    }
    ctx->pc = 0x160524u;
    // 0x160524: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x160524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160528: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x16052c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x16052cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160530: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160530u;
    SET_GPR_U32(ctx, 31, 0x160538u);
    ctx->pc = 0x160534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160530u;
            // 0x160534: 0x24843910  addiu       $a0, $a0, 0x3910 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160538u; }
        if (ctx->pc != 0x160538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160538u; }
        if (ctx->pc != 0x160538u) { return; }
    }
    ctx->pc = 0x160538u;
    // 0x160538: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16053c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x16053cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160540: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160544: 0x24843920  addiu       $a0, $a0, 0x3920
    ctx->pc = 0x160544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14624));
    // 0x160548: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16054c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160550: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x160554: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160554u;
    SET_GPR_U32(ctx, 31, 0x16055Cu);
    ctx->pc = 0x160558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160554u;
            // 0x160558: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16055Cu; }
        if (ctx->pc != 0x16055Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16055Cu; }
        if (ctx->pc != 0x16055Cu) { return; }
    }
    ctx->pc = 0x16055Cu;
    // 0x16055c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x16055cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160560: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160564: 0x248438c4  addiu       $a0, $a0, 0x38C4
    ctx->pc = 0x160564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14532));
    // 0x160568: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x160568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16056c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16056cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160570: 0xc057660  jal         func_15D980
    ctx->pc = 0x160570u;
    SET_GPR_U32(ctx, 31, 0x160578u);
    ctx->pc = 0x160574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160570u;
            // 0x160574: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160578u; }
        if (ctx->pc != 0x160578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160578u; }
        if (ctx->pc != 0x160578u) { return; }
    }
    ctx->pc = 0x160578u;
    // 0x160578: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x160578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x16057c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x16057Cu;
    SET_GPR_U32(ctx, 31, 0x160584u);
    ctx->pc = 0x160580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16057Cu;
            // 0x160580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160584u; }
        if (ctx->pc != 0x160584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160584u; }
        if (ctx->pc != 0x160584u) { return; }
    }
    ctx->pc = 0x160584u;
    // 0x160584: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160588: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x16058c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160590: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160594: 0x24843ab0  addiu       $a0, $a0, 0x3AB0
    ctx->pc = 0x160594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15024));
    // 0x160598: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x16059c: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x16059cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x1605a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1605a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1605a4: 0x24a2ff84  addiu       $v0, $a1, -0x7C
    ctx->pc = 0x1605a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967172));
    // 0x1605a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1605a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1605ac: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x1605acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x1605b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1605b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1605b4: 0x0  nop
    ctx->pc = 0x1605b4u;
    // NOP
    // 0x1605b8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1605b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1605bc: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1605BCu;
    SET_GPR_U32(ctx, 31, 0x1605C4u);
    ctx->pc = 0x1605C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1605BCu;
            // 0x1605c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605C4u; }
        if (ctx->pc != 0x1605C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605C4u; }
        if (ctx->pc != 0x1605C4u) { return; }
    }
    ctx->pc = 0x1605C4u;
    // 0x1605c4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1605c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1605c8: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x1605c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x1605cc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1605ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1605d0: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x1605d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x1605d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1605d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1605d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1605d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1605dc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1605dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1605e0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1605e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1605e4: 0x24843ac0  addiu       $a0, $a0, 0x3AC0
    ctx->pc = 0x1605e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15040));
    // 0x1605e8: 0x24c6ff84  addiu       $a2, $a2, -0x7C
    ctx->pc = 0x1605e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967172));
    // 0x1605ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1605ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1605f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1605f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1605f4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x1605f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x1605f8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1605f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1605fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1605fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160604: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160604u;
    SET_GPR_U32(ctx, 31, 0x16060Cu);
    ctx->pc = 0x160608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160604u;
            // 0x160608: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16060Cu; }
        if (ctx->pc != 0x16060Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16060Cu; }
        if (ctx->pc != 0x16060Cu) { return; }
    }
    ctx->pc = 0x16060Cu;
    // 0x16060c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x16060cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160610: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160614: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x160614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160618: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160618u;
    SET_GPR_U32(ctx, 31, 0x160620u);
    ctx->pc = 0x16061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160618u;
            // 0x16061c: 0x24843930  addiu       $a0, $a0, 0x3930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160620u; }
        if (ctx->pc != 0x160620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160620u; }
        if (ctx->pc != 0x160620u) { return; }
    }
    ctx->pc = 0x160620u;
    // 0x160620: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160624: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160628: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16062c: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x16062cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x160630: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160634: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160638: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16063c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x16063Cu;
    SET_GPR_U32(ctx, 31, 0x160644u);
    ctx->pc = 0x160640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16063Cu;
            // 0x160640: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160644u; }
        if (ctx->pc != 0x160644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160644u; }
        if (ctx->pc != 0x160644u) { return; }
    }
    ctx->pc = 0x160644u;
    // 0x160644: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x160644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160648: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x16064c: 0x248438c8  addiu       $a0, $a0, 0x38C8
    ctx->pc = 0x16064cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14536));
    // 0x160650: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x160650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160654: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x160654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160658: 0xc057660  jal         func_15D980
    ctx->pc = 0x160658u;
    SET_GPR_U32(ctx, 31, 0x160660u);
    ctx->pc = 0x16065Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160658u;
            // 0x16065c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160660u; }
        if (ctx->pc != 0x160660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160660u; }
        if (ctx->pc != 0x160660u) { return; }
    }
    ctx->pc = 0x160660u;
    // 0x160660: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x160660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x160664: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160664u;
    SET_GPR_U32(ctx, 31, 0x16066Cu);
    ctx->pc = 0x160668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160664u;
            // 0x160668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16066Cu; }
        if (ctx->pc != 0x16066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16066Cu; }
        if (ctx->pc != 0x16066Cu) { return; }
    }
    ctx->pc = 0x16066Cu;
    // 0x16066c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16066cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160670: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160674: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160678: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16067c: 0x24843ad0  addiu       $a0, $a0, 0x3AD0
    ctx->pc = 0x16067cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15056));
    // 0x160680: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160684: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x160684u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x160688: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16068c: 0x24a2ff84  addiu       $v0, $a1, -0x7C
    ctx->pc = 0x16068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967172));
    // 0x160690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160694: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x160694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x160698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16069c: 0x0  nop
    ctx->pc = 0x16069cu;
    // NOP
    // 0x1606a0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1606a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1606a4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1606A4u;
    SET_GPR_U32(ctx, 31, 0x1606ACu);
    ctx->pc = 0x1606A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1606A4u;
            // 0x1606a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606ACu; }
        if (ctx->pc != 0x1606ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606ACu; }
        if (ctx->pc != 0x1606ACu) { return; }
    }
    ctx->pc = 0x1606ACu;
    // 0x1606ac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1606acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1606b0: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x1606b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x1606b4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1606b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1606b8: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x1606b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x1606bc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1606bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1606c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1606c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1606c4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1606c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1606c8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1606c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1606cc: 0x24843ae0  addiu       $a0, $a0, 0x3AE0
    ctx->pc = 0x1606ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15072));
    // 0x1606d0: 0x24c6ff84  addiu       $a2, $a2, -0x7C
    ctx->pc = 0x1606d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967172));
    // 0x1606d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1606d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1606d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1606d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1606dc: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x1606dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x1606e0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1606e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1606e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1606e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1606e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1606e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1606ec: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1606ECu;
    SET_GPR_U32(ctx, 31, 0x1606F4u);
    ctx->pc = 0x1606F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1606ECu;
            // 0x1606f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606F4u; }
        if (ctx->pc != 0x1606F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1606F4u; }
        if (ctx->pc != 0x1606F4u) { return; }
    }
    ctx->pc = 0x1606F4u;
    // 0x1606f4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1606f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1606f8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1606f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1606fc: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1606fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160700: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160700u;
    SET_GPR_U32(ctx, 31, 0x160708u);
    ctx->pc = 0x160704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160700u;
            // 0x160704: 0x24843950  addiu       $a0, $a0, 0x3950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160708u; }
        if (ctx->pc != 0x160708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160708u; }
        if (ctx->pc != 0x160708u) { return; }
    }
    ctx->pc = 0x160708u;
    // 0x160708: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16070c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x16070cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160710: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160714: 0x24843960  addiu       $a0, $a0, 0x3960
    ctx->pc = 0x160714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14688));
    // 0x160718: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16071c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160720: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x160724: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160724u;
    SET_GPR_U32(ctx, 31, 0x16072Cu);
    ctx->pc = 0x160728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160724u;
            // 0x160728: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16072Cu; }
        if (ctx->pc != 0x16072Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16072Cu; }
        if (ctx->pc != 0x16072Cu) { return; }
    }
    ctx->pc = 0x16072Cu;
    // 0x16072c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x16072cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160730: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160734: 0x248438cc  addiu       $a0, $a0, 0x38CC
    ctx->pc = 0x160734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14540));
    // 0x160738: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x160738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16073c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16073cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160740: 0xc057660  jal         func_15D980
    ctx->pc = 0x160740u;
    SET_GPR_U32(ctx, 31, 0x160748u);
    ctx->pc = 0x160744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160740u;
            // 0x160744: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160748u; }
        if (ctx->pc != 0x160748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160748u; }
        if (ctx->pc != 0x160748u) { return; }
    }
    ctx->pc = 0x160748u;
    // 0x160748: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x160748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16074c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x16074Cu;
    SET_GPR_U32(ctx, 31, 0x160754u);
    ctx->pc = 0x160750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16074Cu;
            // 0x160750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160754u; }
        if (ctx->pc != 0x160754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160754u; }
        if (ctx->pc != 0x160754u) { return; }
    }
    ctx->pc = 0x160754u;
    // 0x160754: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160758: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x16075c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16075cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160764: 0x24843af0  addiu       $a0, $a0, 0x3AF0
    ctx->pc = 0x160764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15088));
    // 0x160768: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x16076c: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x16076cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x160770: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160774: 0x24a2ff84  addiu       $v0, $a1, -0x7C
    ctx->pc = 0x160774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967172));
    // 0x160778: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16077c: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x16077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x160780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160784: 0x0  nop
    ctx->pc = 0x160784u;
    // NOP
    // 0x160788: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x16078c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x16078Cu;
    SET_GPR_U32(ctx, 31, 0x160794u);
    ctx->pc = 0x160790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16078Cu;
            // 0x160790: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160794u; }
        if (ctx->pc != 0x160794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160794u; }
        if (ctx->pc != 0x160794u) { return; }
    }
    ctx->pc = 0x160794u;
    // 0x160794: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x160794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160798: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x16079c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x16079cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1607a0: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x1607a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x1607a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1607a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1607a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1607a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1607ac: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1607acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1607b0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1607b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1607b4: 0x24843b00  addiu       $a0, $a0, 0x3B00
    ctx->pc = 0x1607b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15104));
    // 0x1607b8: 0x24c6ff84  addiu       $a2, $a2, -0x7C
    ctx->pc = 0x1607b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967172));
    // 0x1607bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1607bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1607c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1607c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1607c4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x1607c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x1607c8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1607c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1607cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1607ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1607d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1607d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1607d4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1607D4u;
    SET_GPR_U32(ctx, 31, 0x1607DCu);
    ctx->pc = 0x1607D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1607D4u;
            // 0x1607d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607DCu; }
        if (ctx->pc != 0x1607DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607DCu; }
        if (ctx->pc != 0x1607DCu) { return; }
    }
    ctx->pc = 0x1607DCu;
    // 0x1607dc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1607dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1607e0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1607e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1607e4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1607e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1607e8: 0xc058430  jal         func_1610C0
    ctx->pc = 0x1607E8u;
    SET_GPR_U32(ctx, 31, 0x1607F0u);
    ctx->pc = 0x1607ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1607E8u;
            // 0x1607ec: 0x24843970  addiu       $a0, $a0, 0x3970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607F0u; }
        if (ctx->pc != 0x1607F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607F0u; }
        if (ctx->pc != 0x1607F0u) { return; }
    }
    ctx->pc = 0x1607F0u;
    // 0x1607f0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1607f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1607f4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1607f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1607f8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1607f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1607fc: 0x24843980  addiu       $a0, $a0, 0x3980
    ctx->pc = 0x1607fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
    // 0x160800: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160804: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160808: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16080c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x16080Cu;
    SET_GPR_U32(ctx, 31, 0x160814u);
    ctx->pc = 0x160810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16080Cu;
            // 0x160810: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160814u; }
        if (ctx->pc != 0x160814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160814u; }
        if (ctx->pc != 0x160814u) { return; }
    }
    ctx->pc = 0x160814u;
    // 0x160814: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x160814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160818: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x16081c: 0x248438d0  addiu       $a0, $a0, 0x38D0
    ctx->pc = 0x16081cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14544));
    // 0x160820: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x160820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160824: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x160824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160828: 0xc057660  jal         func_15D980
    ctx->pc = 0x160828u;
    SET_GPR_U32(ctx, 31, 0x160830u);
    ctx->pc = 0x16082Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160828u;
            // 0x16082c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160830u; }
        if (ctx->pc != 0x160830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160830u; }
        if (ctx->pc != 0x160830u) { return; }
    }
    ctx->pc = 0x160830u;
    // 0x160830: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x160830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x160834: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160834u;
    SET_GPR_U32(ctx, 31, 0x16083Cu);
    ctx->pc = 0x160838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160834u;
            // 0x160838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16083Cu; }
        if (ctx->pc != 0x16083Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16083Cu; }
        if (ctx->pc != 0x16083Cu) { return; }
    }
    ctx->pc = 0x16083Cu;
    // 0x16083c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16083cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160840: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160844: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16084c: 0x24843b10  addiu       $a0, $a0, 0x3B10
    ctx->pc = 0x16084cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15120));
    // 0x160850: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160854: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x160854u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x160858: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16085c: 0x24a2ff84  addiu       $v0, $a1, -0x7C
    ctx->pc = 0x16085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967172));
    // 0x160860: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160864: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x160864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x160868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16086c: 0x0  nop
    ctx->pc = 0x16086cu;
    // NOP
    // 0x160870: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160874: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160874u;
    SET_GPR_U32(ctx, 31, 0x16087Cu);
    ctx->pc = 0x160878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160874u;
            // 0x160878: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16087Cu; }
        if (ctx->pc != 0x16087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16087Cu; }
        if (ctx->pc != 0x16087Cu) { return; }
    }
    ctx->pc = 0x16087Cu;
    // 0x16087c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16087cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160880: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160884: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160888: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x160888u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x16088c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x16088cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160890: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x160890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x160894: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160898: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16089c: 0x24843b20  addiu       $a0, $a0, 0x3B20
    ctx->pc = 0x16089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15136));
    // 0x1608a0: 0x24c6ff84  addiu       $a2, $a2, -0x7C
    ctx->pc = 0x1608a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967172));
    // 0x1608a4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1608a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1608a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1608a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1608ac: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x1608acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x1608b0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1608b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1608b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1608b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1608b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1608b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1608bc: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1608BCu;
    SET_GPR_U32(ctx, 31, 0x1608C4u);
    ctx->pc = 0x1608C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1608BCu;
            // 0x1608c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1608C4u; }
        if (ctx->pc != 0x1608C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1608C4u; }
        if (ctx->pc != 0x1608C4u) { return; }
    }
    ctx->pc = 0x1608C4u;
    // 0x1608c4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1608c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1608c8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1608c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1608cc: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1608ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1608d0: 0xc058430  jal         func_1610C0
    ctx->pc = 0x1608D0u;
    SET_GPR_U32(ctx, 31, 0x1608D8u);
    ctx->pc = 0x1608D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1608D0u;
            // 0x1608d4: 0x24843990  addiu       $a0, $a0, 0x3990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1608D8u; }
        if (ctx->pc != 0x1608D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1608D8u; }
        if (ctx->pc != 0x1608D8u) { return; }
    }
    ctx->pc = 0x1608D8u;
    // 0x1608d8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1608d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1608dc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1608dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1608e0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1608e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1608e4: 0x248439a0  addiu       $a0, $a0, 0x39A0
    ctx->pc = 0x1608e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14752));
    // 0x1608e8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1608e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1608ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1608ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1608f0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1608f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1608f4: 0xc058430  jal         func_1610C0
    ctx->pc = 0x1608F4u;
    SET_GPR_U32(ctx, 31, 0x1608FCu);
    ctx->pc = 0x1608F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1608F4u;
            // 0x1608f8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1608FCu; }
        if (ctx->pc != 0x1608FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1608FCu; }
        if (ctx->pc != 0x1608FCu) { return; }
    }
    ctx->pc = 0x1608FCu;
    // 0x1608fc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1608fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160900: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160904: 0x248438d4  addiu       $a0, $a0, 0x38D4
    ctx->pc = 0x160904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14548));
    // 0x160908: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x160908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16090c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16090cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160910: 0xc057660  jal         func_15D980
    ctx->pc = 0x160910u;
    SET_GPR_U32(ctx, 31, 0x160918u);
    ctx->pc = 0x160914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160910u;
            // 0x160914: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160918u; }
        if (ctx->pc != 0x160918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160918u; }
        if (ctx->pc != 0x160918u) { return; }
    }
    ctx->pc = 0x160918u;
    // 0x160918: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x160918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x16091c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x16091Cu;
    SET_GPR_U32(ctx, 31, 0x160924u);
    ctx->pc = 0x160920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16091Cu;
            // 0x160920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160924u; }
        if (ctx->pc != 0x160924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160924u; }
        if (ctx->pc != 0x160924u) { return; }
    }
    ctx->pc = 0x160924u;
    // 0x160924: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x160924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160928: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x16092c: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x16092cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x160930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160934: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x160934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160938: 0x3c0349c8  lui         $v1, 0x49C8
    ctx->pc = 0x160938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18888 << 16));
    // 0x16093c: 0x24843b30  addiu       $a0, $a0, 0x3B30
    ctx->pc = 0x16093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15152));
    // 0x160940: 0x346264a0  ori         $v0, $v1, 0x64A0
    ctx->pc = 0x160940u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25760u)));
    // 0x160944: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160948: 0x24e20083  addiu       $v0, $a3, 0x83
    ctx->pc = 0x160948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 131));
    // 0x16094c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x160950: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160954: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x160954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x160958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16095c: 0x0  nop
    ctx->pc = 0x16095cu;
    // NOP
    // 0x160960: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160964: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160964u;
    SET_GPR_U32(ctx, 31, 0x16096Cu);
    ctx->pc = 0x160968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160964u;
            // 0x160968: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16096Cu; }
        if (ctx->pc != 0x16096Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16096Cu; }
        if (ctx->pc != 0x16096Cu) { return; }
    }
    ctx->pc = 0x16096Cu;
    // 0x16096c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x16096cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160970: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160974: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x160974u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x160978: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x160978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16097c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x16097cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160980: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160984: 0x24843b40  addiu       $a0, $a0, 0x3B40
    ctx->pc = 0x160984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15168));
    // 0x160988: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16098c: 0x24a50083  addiu       $a1, $a1, 0x83
    ctx->pc = 0x16098cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 131));
    // 0x160990: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160990u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160994: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x160994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x160998: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x160998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x16099c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1609a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1609a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1609a4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1609A4u;
    SET_GPR_U32(ctx, 31, 0x1609ACu);
    ctx->pc = 0x1609A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1609A4u;
            // 0x1609a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609ACu; }
        if (ctx->pc != 0x1609ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609ACu; }
        if (ctx->pc != 0x1609ACu) { return; }
    }
    ctx->pc = 0x1609ACu;
    // 0x1609ac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1609acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1609b0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1609b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1609b4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1609b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1609b8: 0xc058430  jal         func_1610C0
    ctx->pc = 0x1609B8u;
    SET_GPR_U32(ctx, 31, 0x1609C0u);
    ctx->pc = 0x1609BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1609B8u;
            // 0x1609bc: 0x248439b0  addiu       $a0, $a0, 0x39B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609C0u; }
        if (ctx->pc != 0x1609C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609C0u; }
        if (ctx->pc != 0x1609C0u) { return; }
    }
    ctx->pc = 0x1609C0u;
    // 0x1609c0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1609c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1609c4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1609c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1609c8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1609c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1609cc: 0x248439c0  addiu       $a0, $a0, 0x39C0
    ctx->pc = 0x1609ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14784));
    // 0x1609d0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1609d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1609d4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1609d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1609d8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1609d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1609dc: 0xc058430  jal         func_1610C0
    ctx->pc = 0x1609DCu;
    SET_GPR_U32(ctx, 31, 0x1609E4u);
    ctx->pc = 0x1609E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1609DCu;
            // 0x1609e0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609E4u; }
        if (ctx->pc != 0x1609E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609E4u; }
        if (ctx->pc != 0x1609E4u) { return; }
    }
    ctx->pc = 0x1609E4u;
    // 0x1609e4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1609e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1609e8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1609e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1609ec: 0x248438d8  addiu       $a0, $a0, 0x38D8
    ctx->pc = 0x1609ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14552));
    // 0x1609f0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1609f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1609f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609f8: 0xc057660  jal         func_15D980
    ctx->pc = 0x1609F8u;
    SET_GPR_U32(ctx, 31, 0x160A00u);
    ctx->pc = 0x1609FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1609F8u;
            // 0x1609fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160A00u; }
        if (ctx->pc != 0x160A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160A00u; }
        if (ctx->pc != 0x160A00u) { return; }
    }
    ctx->pc = 0x160A00u;
    // 0x160a00: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x160a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x160a04: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160A04u;
    SET_GPR_U32(ctx, 31, 0x160A0Cu);
    ctx->pc = 0x160A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160A04u;
            // 0x160a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160A0Cu; }
        if (ctx->pc != 0x160A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160A0Cu; }
        if (ctx->pc != 0x160A0Cu) { return; }
    }
    ctx->pc = 0x160A0Cu;
    // 0x160a0c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x160a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160a10: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160a14: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x160a18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a1c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x160a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160a20: 0x3c0349c8  lui         $v1, 0x49C8
    ctx->pc = 0x160a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18888 << 16));
    // 0x160a24: 0x24843b50  addiu       $a0, $a0, 0x3B50
    ctx->pc = 0x160a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15184));
    // 0x160a28: 0x346264a0  ori         $v0, $v1, 0x64A0
    ctx->pc = 0x160a28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25760u)));
    // 0x160a2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160a30: 0x24e20083  addiu       $v0, $a3, 0x83
    ctx->pc = 0x160a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 131));
    // 0x160a34: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x160a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x160a38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160a3c: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x160a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x160a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160a44: 0x0  nop
    ctx->pc = 0x160a44u;
    // NOP
    // 0x160a48: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160a4c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160A4Cu;
    SET_GPR_U32(ctx, 31, 0x160A54u);
    ctx->pc = 0x160A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160A4Cu;
            // 0x160a50: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160A54u; }
        if (ctx->pc != 0x160A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160A54u; }
        if (ctx->pc != 0x160A54u) { return; }
    }
    ctx->pc = 0x160A54u;
    // 0x160a54: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x160a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160a58: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160a5c: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x160a5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x160a60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x160a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x160a64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160a68: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160a6c: 0x24843b60  addiu       $a0, $a0, 0x3B60
    ctx->pc = 0x160a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15200));
    // 0x160a70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160a74: 0x24a50083  addiu       $a1, $a1, 0x83
    ctx->pc = 0x160a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 131));
    // 0x160a78: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160a78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160a7c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x160a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x160a80: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x160a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160a88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160a8c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160A8Cu;
    SET_GPR_U32(ctx, 31, 0x160A94u);
    ctx->pc = 0x160A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160A8Cu;
            // 0x160a90: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160A94u; }
        if (ctx->pc != 0x160A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160A94u; }
        if (ctx->pc != 0x160A94u) { return; }
    }
    ctx->pc = 0x160A94u;
    // 0x160a94: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x160a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160a98: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160a9c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x160a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160aa0: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160AA0u;
    SET_GPR_U32(ctx, 31, 0x160AA8u);
    ctx->pc = 0x160AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160AA0u;
            // 0x160aa4: 0x248439d0  addiu       $a0, $a0, 0x39D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160AA8u; }
        if (ctx->pc != 0x160AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160AA8u; }
        if (ctx->pc != 0x160AA8u) { return; }
    }
    ctx->pc = 0x160AA8u;
    // 0x160aa8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160aac: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160ab0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160ab4: 0x248439e0  addiu       $a0, $a0, 0x39E0
    ctx->pc = 0x160ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14816));
    // 0x160ab8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160abc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160ac0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x160ac4: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160AC4u;
    SET_GPR_U32(ctx, 31, 0x160ACCu);
    ctx->pc = 0x160AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160AC4u;
            // 0x160ac8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160ACCu; }
        if (ctx->pc != 0x160ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160ACCu; }
        if (ctx->pc != 0x160ACCu) { return; }
    }
    ctx->pc = 0x160ACCu;
    // 0x160acc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x160accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160ad0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160ad4: 0x248438dc  addiu       $a0, $a0, 0x38DC
    ctx->pc = 0x160ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14556));
    // 0x160ad8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x160ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160adc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x160adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ae0: 0xc057660  jal         func_15D980
    ctx->pc = 0x160AE0u;
    SET_GPR_U32(ctx, 31, 0x160AE8u);
    ctx->pc = 0x160AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160AE0u;
            // 0x160ae4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160AE8u; }
        if (ctx->pc != 0x160AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160AE8u; }
        if (ctx->pc != 0x160AE8u) { return; }
    }
    ctx->pc = 0x160AE8u;
    // 0x160ae8: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x160ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x160aec: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160AECu;
    SET_GPR_U32(ctx, 31, 0x160AF4u);
    ctx->pc = 0x160AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160AECu;
            // 0x160af0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160AF4u; }
        if (ctx->pc != 0x160AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160AF4u; }
        if (ctx->pc != 0x160AF4u) { return; }
    }
    ctx->pc = 0x160AF4u;
    // 0x160af4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x160af4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160af8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160afc: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x160afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x160b00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b04: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x160b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160b08: 0x3c0349c8  lui         $v1, 0x49C8
    ctx->pc = 0x160b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18888 << 16));
    // 0x160b0c: 0x24843b70  addiu       $a0, $a0, 0x3B70
    ctx->pc = 0x160b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15216));
    // 0x160b10: 0x346264a0  ori         $v0, $v1, 0x64A0
    ctx->pc = 0x160b10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25760u)));
    // 0x160b14: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160b18: 0x24e20083  addiu       $v0, $a3, 0x83
    ctx->pc = 0x160b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 131));
    // 0x160b1c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x160b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x160b20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160b24: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x160b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x160b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160b2c: 0x0  nop
    ctx->pc = 0x160b2cu;
    // NOP
    // 0x160b30: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160b34: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160B34u;
    SET_GPR_U32(ctx, 31, 0x160B3Cu);
    ctx->pc = 0x160B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160B34u;
            // 0x160b38: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B3Cu; }
        if (ctx->pc != 0x160B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B3Cu; }
        if (ctx->pc != 0x160B3Cu) { return; }
    }
    ctx->pc = 0x160B3Cu;
    // 0x160b3c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x160b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160b40: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160b44: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x160b44u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x160b48: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x160b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x160b4c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160b50: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160b54: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x160b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
    // 0x160b58: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160b5c: 0x24a50083  addiu       $a1, $a1, 0x83
    ctx->pc = 0x160b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 131));
    // 0x160b60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160b60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160b64: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x160b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x160b68: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x160b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160b6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160b74: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160B74u;
    SET_GPR_U32(ctx, 31, 0x160B7Cu);
    ctx->pc = 0x160B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160B74u;
            // 0x160b78: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B7Cu; }
        if (ctx->pc != 0x160B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B7Cu; }
        if (ctx->pc != 0x160B7Cu) { return; }
    }
    ctx->pc = 0x160B7Cu;
    // 0x160b7c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x160b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160b80: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160b84: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x160b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160b88: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160B88u;
    SET_GPR_U32(ctx, 31, 0x160B90u);
    ctx->pc = 0x160B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160B88u;
            // 0x160b8c: 0x248439f0  addiu       $a0, $a0, 0x39F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B90u; }
        if (ctx->pc != 0x160B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B90u; }
        if (ctx->pc != 0x160B90u) { return; }
    }
    ctx->pc = 0x160B90u;
    // 0x160b90: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160b94: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160b98: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160b9c: 0x24843a00  addiu       $a0, $a0, 0x3A00
    ctx->pc = 0x160b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14848));
    // 0x160ba0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160ba4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160ba8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x160bac: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160BACu;
    SET_GPR_U32(ctx, 31, 0x160BB4u);
    ctx->pc = 0x160BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160BACu;
            // 0x160bb0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BB4u; }
        if (ctx->pc != 0x160BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BB4u; }
        if (ctx->pc != 0x160BB4u) { return; }
    }
    ctx->pc = 0x160BB4u;
    // 0x160bb4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x160bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160bb8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160bbc: 0x248438e0  addiu       $a0, $a0, 0x38E0
    ctx->pc = 0x160bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14560));
    // 0x160bc0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x160bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bc4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x160bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bc8: 0xc057660  jal         func_15D980
    ctx->pc = 0x160BC8u;
    SET_GPR_U32(ctx, 31, 0x160BD0u);
    ctx->pc = 0x160BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160BC8u;
            // 0x160bcc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BD0u; }
        if (ctx->pc != 0x160BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BD0u; }
        if (ctx->pc != 0x160BD0u) { return; }
    }
    ctx->pc = 0x160BD0u;
    // 0x160bd0: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x160bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x160bd4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160BD4u;
    SET_GPR_U32(ctx, 31, 0x160BDCu);
    ctx->pc = 0x160BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160BD4u;
            // 0x160bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BDCu; }
        if (ctx->pc != 0x160BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BDCu; }
        if (ctx->pc != 0x160BDCu) { return; }
    }
    ctx->pc = 0x160BDCu;
    // 0x160bdc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x160bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160be0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160be4: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x160be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x160be8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bec: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x160becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160bf0: 0x3c0349c8  lui         $v1, 0x49C8
    ctx->pc = 0x160bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18888 << 16));
    // 0x160bf4: 0x24843b90  addiu       $a0, $a0, 0x3B90
    ctx->pc = 0x160bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15248));
    // 0x160bf8: 0x346264a0  ori         $v0, $v1, 0x64A0
    ctx->pc = 0x160bf8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25760u)));
    // 0x160bfc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160c00: 0x24e20083  addiu       $v0, $a3, 0x83
    ctx->pc = 0x160c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 131));
    // 0x160c04: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x160c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x160c08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160c0c: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x160c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x160c10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c14: 0x0  nop
    ctx->pc = 0x160c14u;
    // NOP
    // 0x160c18: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160c1c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160C1Cu;
    SET_GPR_U32(ctx, 31, 0x160C24u);
    ctx->pc = 0x160C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160C1Cu;
            // 0x160c20: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C24u; }
        if (ctx->pc != 0x160C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C24u; }
        if (ctx->pc != 0x160C24u) { return; }
    }
    ctx->pc = 0x160C24u;
    // 0x160c24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x160c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160c28: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160c2c: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x160c2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x160c30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x160c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x160c34: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160c38: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160c3c: 0x24843ba0  addiu       $a0, $a0, 0x3BA0
    ctx->pc = 0x160c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15264));
    // 0x160c40: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160c44: 0x24a50083  addiu       $a1, $a1, 0x83
    ctx->pc = 0x160c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 131));
    // 0x160c48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160c48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c4c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x160c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x160c50: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x160c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c5c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160C5Cu;
    SET_GPR_U32(ctx, 31, 0x160C64u);
    ctx->pc = 0x160C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160C5Cu;
            // 0x160c60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C64u; }
        if (ctx->pc != 0x160C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C64u; }
        if (ctx->pc != 0x160C64u) { return; }
    }
    ctx->pc = 0x160C64u;
    // 0x160c64: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x160c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160c68: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160c6c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x160c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160c70: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160C70u;
    SET_GPR_U32(ctx, 31, 0x160C78u);
    ctx->pc = 0x160C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160C70u;
            // 0x160c74: 0x24843a10  addiu       $a0, $a0, 0x3A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C78u; }
        if (ctx->pc != 0x160C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C78u; }
        if (ctx->pc != 0x160C78u) { return; }
    }
    ctx->pc = 0x160C78u;
    // 0x160c78: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160c7c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160c80: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160c84: 0x24843a20  addiu       $a0, $a0, 0x3A20
    ctx->pc = 0x160c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14880));
    // 0x160c88: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160c8c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160c90: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x160c94: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160C94u;
    SET_GPR_U32(ctx, 31, 0x160C9Cu);
    ctx->pc = 0x160C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160C94u;
            // 0x160c98: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C9Cu; }
        if (ctx->pc != 0x160C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C9Cu; }
        if (ctx->pc != 0x160C9Cu) { return; }
    }
    ctx->pc = 0x160C9Cu;
    // 0x160c9c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x160c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160ca0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160ca4: 0x248438e4  addiu       $a0, $a0, 0x38E4
    ctx->pc = 0x160ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14564));
    // 0x160ca8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x160ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x160cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cb0: 0xc057660  jal         func_15D980
    ctx->pc = 0x160CB0u;
    SET_GPR_U32(ctx, 31, 0x160CB8u);
    ctx->pc = 0x160CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160CB0u;
            // 0x160cb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160CB8u; }
        if (ctx->pc != 0x160CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160CB8u; }
        if (ctx->pc != 0x160CB8u) { return; }
    }
    ctx->pc = 0x160CB8u;
    // 0x160cb8: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x160cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x160cbc: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160CBCu;
    SET_GPR_U32(ctx, 31, 0x160CC4u);
    ctx->pc = 0x160CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160CBCu;
            // 0x160cc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160CC4u; }
        if (ctx->pc != 0x160CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160CC4u; }
        if (ctx->pc != 0x160CC4u) { return; }
    }
    ctx->pc = 0x160CC4u;
    // 0x160cc4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x160cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160cc8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160ccc: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x160cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x160cd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cd4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x160cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160cd8: 0x3c0349c8  lui         $v1, 0x49C8
    ctx->pc = 0x160cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18888 << 16));
    // 0x160cdc: 0x24843bb0  addiu       $a0, $a0, 0x3BB0
    ctx->pc = 0x160cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15280));
    // 0x160ce0: 0x346264a0  ori         $v0, $v1, 0x64A0
    ctx->pc = 0x160ce0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25760u)));
    // 0x160ce4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160ce8: 0x24e20083  addiu       $v0, $a3, 0x83
    ctx->pc = 0x160ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 131));
    // 0x160cec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x160cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x160cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160cf4: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x160cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x160cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160cfc: 0x0  nop
    ctx->pc = 0x160cfcu;
    // NOP
    // 0x160d00: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160d04: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160D04u;
    SET_GPR_U32(ctx, 31, 0x160D0Cu);
    ctx->pc = 0x160D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160D04u;
            // 0x160d08: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D0Cu; }
        if (ctx->pc != 0x160D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D0Cu; }
        if (ctx->pc != 0x160D0Cu) { return; }
    }
    ctx->pc = 0x160D0Cu;
    // 0x160d0c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x160d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160d10: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160d14: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x160d14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x160d18: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x160d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x160d1c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160d20: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160d24: 0x24843bc0  addiu       $a0, $a0, 0x3BC0
    ctx->pc = 0x160d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15296));
    // 0x160d28: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160d2c: 0x24a50083  addiu       $a1, $a1, 0x83
    ctx->pc = 0x160d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 131));
    // 0x160d30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160d30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160d34: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x160d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x160d38: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x160d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160d44: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160D44u;
    SET_GPR_U32(ctx, 31, 0x160D4Cu);
    ctx->pc = 0x160D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160D44u;
            // 0x160d48: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D4Cu; }
        if (ctx->pc != 0x160D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D4Cu; }
        if (ctx->pc != 0x160D4Cu) { return; }
    }
    ctx->pc = 0x160D4Cu;
    // 0x160d4c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x160d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160d50: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160d54: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x160d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160d58: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160D58u;
    SET_GPR_U32(ctx, 31, 0x160D60u);
    ctx->pc = 0x160D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160D58u;
            // 0x160d5c: 0x24843a30  addiu       $a0, $a0, 0x3A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D60u; }
        if (ctx->pc != 0x160D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D60u; }
        if (ctx->pc != 0x160D60u) { return; }
    }
    ctx->pc = 0x160D60u;
    // 0x160d60: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160d64: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160d68: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160d6c: 0x24843a40  addiu       $a0, $a0, 0x3A40
    ctx->pc = 0x160d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14912));
    // 0x160d70: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160d74: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160d78: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x160d7c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160D7Cu;
    SET_GPR_U32(ctx, 31, 0x160D84u);
    ctx->pc = 0x160D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160D7Cu;
            // 0x160d80: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D84u; }
        if (ctx->pc != 0x160D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D84u; }
        if (ctx->pc != 0x160D84u) { return; }
    }
    ctx->pc = 0x160D84u;
    // 0x160d84: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x160d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160d88: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160d8c: 0x248438e8  addiu       $a0, $a0, 0x38E8
    ctx->pc = 0x160d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14568));
    // 0x160d90: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x160d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d94: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x160d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d98: 0xc057660  jal         func_15D980
    ctx->pc = 0x160D98u;
    SET_GPR_U32(ctx, 31, 0x160DA0u);
    ctx->pc = 0x160D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160D98u;
            // 0x160d9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DA0u; }
        if (ctx->pc != 0x160DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DA0u; }
        if (ctx->pc != 0x160DA0u) { return; }
    }
    ctx->pc = 0x160DA0u;
    // 0x160da0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x160da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x160da4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160DA4u;
    SET_GPR_U32(ctx, 31, 0x160DACu);
    ctx->pc = 0x160DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160DA4u;
            // 0x160da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DACu; }
        if (ctx->pc != 0x160DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DACu; }
        if (ctx->pc != 0x160DACu) { return; }
    }
    ctx->pc = 0x160DACu;
    // 0x160dac: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x160dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160db0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160db4: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x160db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x160db8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dbc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x160dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160dc0: 0x3c0349c8  lui         $v1, 0x49C8
    ctx->pc = 0x160dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18888 << 16));
    // 0x160dc4: 0x24843bd0  addiu       $a0, $a0, 0x3BD0
    ctx->pc = 0x160dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15312));
    // 0x160dc8: 0x346264a0  ori         $v0, $v1, 0x64A0
    ctx->pc = 0x160dc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25760u)));
    // 0x160dcc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160dd0: 0x24e20083  addiu       $v0, $a3, 0x83
    ctx->pc = 0x160dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 131));
    // 0x160dd4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x160dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x160dd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160ddc: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x160ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x160de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160de4: 0x0  nop
    ctx->pc = 0x160de4u;
    // NOP
    // 0x160de8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160dec: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160DECu;
    SET_GPR_U32(ctx, 31, 0x160DF4u);
    ctx->pc = 0x160DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160DECu;
            // 0x160df0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DF4u; }
        if (ctx->pc != 0x160DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160DF4u; }
        if (ctx->pc != 0x160DF4u) { return; }
    }
    ctx->pc = 0x160DF4u;
    // 0x160df4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x160df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160df8: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160dfc: 0x344264a0  ori         $v0, $v0, 0x64A0
    ctx->pc = 0x160dfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)25760u)));
    // 0x160e00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x160e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x160e04: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160e08: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160e0c: 0x24843be0  addiu       $a0, $a0, 0x3BE0
    ctx->pc = 0x160e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15328));
    // 0x160e10: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160e14: 0x24a50083  addiu       $a1, $a1, 0x83
    ctx->pc = 0x160e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 131));
    // 0x160e18: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x160e18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160e1c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x160e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x160e20: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x160e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160e24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160e2c: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160E2Cu;
    SET_GPR_U32(ctx, 31, 0x160E34u);
    ctx->pc = 0x160E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160E2Cu;
            // 0x160e30: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E34u; }
        if (ctx->pc != 0x160E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E34u; }
        if (ctx->pc != 0x160E34u) { return; }
    }
    ctx->pc = 0x160E34u;
    // 0x160e34: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x160e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160e38: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160e3c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x160e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160e40: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160E40u;
    SET_GPR_U32(ctx, 31, 0x160E48u);
    ctx->pc = 0x160E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160E40u;
            // 0x160e44: 0x24843a50  addiu       $a0, $a0, 0x3A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E48u; }
        if (ctx->pc != 0x160E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E48u; }
        if (ctx->pc != 0x160E48u) { return; }
    }
    ctx->pc = 0x160E48u;
    // 0x160e48: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160e4c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160e50: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160e54: 0x24843a60  addiu       $a0, $a0, 0x3A60
    ctx->pc = 0x160e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14944));
    // 0x160e58: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160e5c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160e60: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x160e64: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160E64u;
    SET_GPR_U32(ctx, 31, 0x160E6Cu);
    ctx->pc = 0x160E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160E64u;
            // 0x160e68: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E6Cu; }
        if (ctx->pc != 0x160E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E6Cu; }
        if (ctx->pc != 0x160E6Cu) { return; }
    }
    ctx->pc = 0x160E6Cu;
    // 0x160e6c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x160e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x160e70: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x160e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x160e74: 0x248438ec  addiu       $a0, $a0, 0x38EC
    ctx->pc = 0x160e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14572));
    // 0x160e78: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x160e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e7c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x160e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e80: 0xc057660  jal         func_15D980
    ctx->pc = 0x160E80u;
    SET_GPR_U32(ctx, 31, 0x160E88u);
    ctx->pc = 0x160E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160E80u;
            // 0x160e84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E88u; }
        if (ctx->pc != 0x160E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E88u; }
        if (ctx->pc != 0x160E88u) { return; }
    }
    ctx->pc = 0x160E88u;
    // 0x160e88: 0x3c140030  lui         $s4, 0x30
    ctx->pc = 0x160e88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)48 << 16));
    // 0x160e8c: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x160e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x160e90: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x160e90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e94: 0x26943740  addiu       $s4, $s4, 0x3740
    ctx->pc = 0x160e94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 14144));
    // 0x160e98: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x160e98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e9c: 0x265235c0  addiu       $s2, $s2, 0x35C0
    ctx->pc = 0x160e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 13760));
label_160ea0:
    // 0x160ea0: 0x26a5000d  addiu       $a1, $s5, 0xD
    ctx->pc = 0x160ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 13));
    // 0x160ea4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160EA4u;
    SET_GPR_U32(ctx, 31, 0x160EACu);
    ctx->pc = 0x160EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160EA4u;
            // 0x160ea8: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EACu; }
        if (ctx->pc != 0x160EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EACu; }
        if (ctx->pc != 0x160EACu) { return; }
    }
    ctx->pc = 0x160EACu;
    // 0x160eac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160eb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160eb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160eb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x160eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ebc: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160ec0: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x160ec0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x160ec4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160ec8: 0x24a2ff80  addiu       $v0, $a1, -0x80
    ctx->pc = 0x160ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x160ecc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160ed0: 0x24620074  addiu       $v0, $v1, 0x74
    ctx->pc = 0x160ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x160ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160ed8: 0x0  nop
    ctx->pc = 0x160ed8u;
    // NOP
    // 0x160edc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160ee0: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160EE0u;
    SET_GPR_U32(ctx, 31, 0x160EE8u);
    ctx->pc = 0x160EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160EE0u;
            // 0x160ee4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EE8u; }
        if (ctx->pc != 0x160EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EE8u; }
        if (ctx->pc != 0x160EE8u) { return; }
    }
    ctx->pc = 0x160EE8u;
    // 0x160ee8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x160ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x160eec: 0x138900  sll         $s1, $s3, 4
    ctx->pc = 0x160eecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x160ef0: 0x24423740  addiu       $v0, $v0, 0x3740
    ctx->pc = 0x160ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14144));
    // 0x160ef4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x160ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160ef8: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x160ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x160efc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x160efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160f00: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160f04: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x160f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x160f08: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x160f08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x160f0c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x160f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160f10: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160f14: 0x24e2ff80  addiu       $v0, $a3, -0x80
    ctx->pc = 0x160f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x160f18: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x160f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x160f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f20: 0x0  nop
    ctx->pc = 0x160f20u;
    // NOP
    // 0x160f24: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x160f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160f28: 0x24a20074  addiu       $v0, $a1, 0x74
    ctx->pc = 0x160f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 116));
    // 0x160f2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x160f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f34: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160F34u;
    SET_GPR_U32(ctx, 31, 0x160F3Cu);
    ctx->pc = 0x160F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160F34u;
            // 0x160f38: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160F3Cu; }
        if (ctx->pc != 0x160F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160F3Cu; }
        if (ctx->pc != 0x160F3Cu) { return; }
    }
    ctx->pc = 0x160F3Cu;
    // 0x160f3c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x160f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160f40: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x160f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160f44: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160F44u;
    SET_GPR_U32(ctx, 31, 0x160F4Cu);
    ctx->pc = 0x160F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160F44u;
            // 0x160f48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160F4Cu; }
        if (ctx->pc != 0x160F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160F4Cu; }
        if (ctx->pc != 0x160F4Cu) { return; }
    }
    ctx->pc = 0x160F4Cu;
    // 0x160f4c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x160f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x160f50: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x160f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x160f54: 0x244235c0  addiu       $v0, $v0, 0x35C0
    ctx->pc = 0x160f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13760));
    // 0x160f58: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160f5c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x160f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x160f60: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x160f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160f64: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x160f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x160f68: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x160f6c: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160F6Cu;
    SET_GPR_U32(ctx, 31, 0x160F74u);
    ctx->pc = 0x160F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160F6Cu;
            // 0x160f70: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160F74u; }
        if (ctx->pc != 0x160F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160F74u; }
        if (ctx->pc != 0x160F74u) { return; }
    }
    ctx->pc = 0x160F74u;
    // 0x160f74: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x160f74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x160f78: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x160f78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x160f7c: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x160f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x160f80: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x160f80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x160f84: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x160F84u;
    {
        const bool branch_taken_0x160f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F84u;
            // 0x160f88: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f84) {
            ctx->pc = 0x160EA0u;
            goto label_160ea0;
        }
    }
    ctx->pc = 0x160F8Cu;
    // 0x160f8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x160f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f90: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x160f90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x160f94: 0x2414000d  addiu       $s4, $zero, 0xD
    ctx->pc = 0x160f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_160f98:
    // 0x160f98: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x160f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x160f9c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x160F9Cu;
    SET_GPR_U32(ctx, 31, 0x160FA4u);
    ctx->pc = 0x160FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160F9Cu;
            // 0x160fa0: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FA4u; }
        if (ctx->pc != 0x160FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FA4u; }
        if (ctx->pc != 0x160FA4u) { return; }
    }
    ctx->pc = 0x160FA4u;
    // 0x160fa4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x160fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160fa8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x160fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x160fac: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x160facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x160fb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x160fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fb4: 0x159900  sll         $s3, $s5, 4
    ctx->pc = 0x160fb4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x160fb8: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x160fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x160fbc: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x160fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x160fc0: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x160fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x160fc4: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x160fc4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x160fc8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x160fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x160fcc: 0x24c2007d  addiu       $v0, $a2, 0x7D
    ctx->pc = 0x160fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 125));
    // 0x160fd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160fd4: 0x24a20074  addiu       $v0, $a1, 0x74
    ctx->pc = 0x160fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 116));
    // 0x160fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160fdc: 0x0  nop
    ctx->pc = 0x160fdcu;
    // NOP
    // 0x160fe0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x160fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x160fe4: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x160FE4u;
    SET_GPR_U32(ctx, 31, 0x160FECu);
    ctx->pc = 0x160FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160FE4u;
            // 0x160fe8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FECu; }
        if (ctx->pc != 0x160FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FECu; }
        if (ctx->pc != 0x160FECu) { return; }
    }
    ctx->pc = 0x160FECu;
    // 0x160fec: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x160fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x160ff0: 0x149100  sll         $s2, $s4, 4
    ctx->pc = 0x160ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x160ff4: 0x24423740  addiu       $v0, $v0, 0x3740
    ctx->pc = 0x160ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14144));
    // 0x160ff8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x160ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x160ffc: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x160ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x161000: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x161000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x161004: 0x3c0249c8  lui         $v0, 0x49C8
    ctx->pc = 0x161004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18888 << 16));
    // 0x161008: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x161008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16100c: 0x344283e0  ori         $v0, $v0, 0x83E0
    ctx->pc = 0x16100cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)33760u)));
    // 0x161010: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x161010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x161014: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x161014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x161018: 0x24e2007d  addiu       $v0, $a3, 0x7D
    ctx->pc = 0x161018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 125));
    // 0x16101c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x161020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161024: 0x0  nop
    ctx->pc = 0x161024u;
    // NOP
    // 0x161028: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x161028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x16102c: 0x24a20074  addiu       $v0, $a1, 0x74
    ctx->pc = 0x16102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 116));
    // 0x161030: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x161030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161038: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x161038u;
    SET_GPR_U32(ctx, 31, 0x161040u);
    ctx->pc = 0x16103Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161038u;
            // 0x16103c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161040u; }
        if (ctx->pc != 0x161040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161040u; }
        if (ctx->pc != 0x161040u) { return; }
    }
    ctx->pc = 0x161040u;
    // 0x161040: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x161040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x161044: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x161044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x161048: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x161048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16104c: 0x244235c0  addiu       $v0, $v0, 0x35C0
    ctx->pc = 0x16104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13760));
    // 0x161050: 0xc058430  jal         func_1610C0
    ctx->pc = 0x161050u;
    SET_GPR_U32(ctx, 31, 0x161058u);
    ctx->pc = 0x161054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161050u;
            // 0x161054: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161058u; }
        if (ctx->pc != 0x161058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161058u; }
        if (ctx->pc != 0x161058u) { return; }
    }
    ctx->pc = 0x161058u;
    // 0x161058: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x161058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x16105c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x16105cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x161060: 0x244235c0  addiu       $v0, $v0, 0x35C0
    ctx->pc = 0x161060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13760));
    // 0x161064: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x161064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x161068: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x161068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16106c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x16106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x161070: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x161070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x161074: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x161074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x161078: 0xc058430  jal         func_1610C0
    ctx->pc = 0x161078u;
    SET_GPR_U32(ctx, 31, 0x161080u);
    ctx->pc = 0x16107Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161078u;
            // 0x16107c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (runtime->hasFunction(0x1610C0u)) {
        auto targetFn = runtime->lookupFunction(0x1610C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161080u; }
        if (ctx->pc != 0x161080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1610c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161080u; }
        if (ctx->pc != 0x161080u) { return; }
    }
    ctx->pc = 0x161080u;
    // 0x161080: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x161080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x161084: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x161084u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x161088: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x161088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x16108c: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x16108Cu;
    {
        const bool branch_taken_0x16108c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16108Cu;
            // 0x161090: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16108c) {
            ctx->pc = 0x160F98u;
            goto label_160f98;
        }
    }
    ctx->pc = 0x161094u;
    // 0x161094: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x161094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x161098: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x161098u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16109c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16109cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1610a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1610a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1610a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1610a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1610a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1610a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1610ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1610acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1610b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1610B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1610B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1610B0u;
            // 0x1610b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160EA0u: goto label_160ea0;
            case 0x160F98u: goto label_160f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1610B8u;
}
