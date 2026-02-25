#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GameOrderInit
// Address: 0x15ba70 - 0x15bad8
void GameOrderInit_0x15ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GameOrderInit_0x15ba70");
#endif

    ctx->pc = 0x15ba70u;

    // 0x15ba70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ba74: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x15ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x15ba78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ba7c: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15BA7Cu;
    SET_GPR_U32(ctx, 31, 0x15BA84u);
    ctx->pc = 0x15BA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA7Cu;
            // 0x15ba80: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA84u; }
        if (ctx->pc != 0x15BA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA84u; }
        if (ctx->pc != 0x15BA84u) { return; }
    }
    ctx->pc = 0x15BA84u;
    // 0x15ba84: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x15ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x15ba88: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15BA88u;
    SET_GPR_U32(ctx, 31, 0x15BA90u);
    ctx->pc = 0x15BA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA88u;
            // 0x15ba8c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA90u; }
        if (ctx->pc != 0x15BA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA90u; }
        if (ctx->pc != 0x15BA90u) { return; }
    }
    ctx->pc = 0x15BA90u;
    // 0x15ba90: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x15ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x15ba94: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15BA94u;
    SET_GPR_U32(ctx, 31, 0x15BA9Cu);
    ctx->pc = 0x15BA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA94u;
            // 0x15ba98: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA9Cu; }
        if (ctx->pc != 0x15BA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA9Cu; }
        if (ctx->pc != 0x15BA9Cu) { return; }
    }
    ctx->pc = 0x15BA9Cu;
    // 0x15ba9c: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x15ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x15baa0: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15BAA0u;
    SET_GPR_U32(ctx, 31, 0x15BAA8u);
    ctx->pc = 0x15BAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAA0u;
            // 0x15baa4: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAA8u; }
        if (ctx->pc != 0x15BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAA8u; }
        if (ctx->pc != 0x15BAA8u) { return; }
    }
    ctx->pc = 0x15BAA8u;
    // 0x15baa8: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x15baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x15baac: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15BAACu;
    SET_GPR_U32(ctx, 31, 0x15BAB4u);
    ctx->pc = 0x15BAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAACu;
            // 0x15bab0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAB4u; }
        if (ctx->pc != 0x15BAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAB4u; }
        if (ctx->pc != 0x15BAB4u) { return; }
    }
    ctx->pc = 0x15BAB4u;
    // 0x15bab4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x15bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x15bab8: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15BAB8u;
    SET_GPR_U32(ctx, 31, 0x15BAC0u);
    ctx->pc = 0x15BABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAB8u;
            // 0x15babc: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAC0u; }
        if (ctx->pc != 0x15BAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAC0u; }
        if (ctx->pc != 0x15BAC0u) { return; }
    }
    ctx->pc = 0x15BAC0u;
    // 0x15bac0: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x15bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x15bac4: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15BAC4u;
    SET_GPR_U32(ctx, 31, 0x15BACCu);
    ctx->pc = 0x15BAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAC4u;
            // 0x15bac8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BACCu; }
        if (ctx->pc != 0x15BACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BACCu; }
        if (ctx->pc != 0x15BACCu) { return; }
    }
    ctx->pc = 0x15BACCu;
    // 0x15bacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15baccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bad0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAD0u;
            // 0x15bad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BAD8u;
}
