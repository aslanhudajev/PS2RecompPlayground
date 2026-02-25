#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemInit
// Address: 0x197210 - 0x197250
void ItemInit_0x197210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemInit_0x197210");
#endif

    ctx->pc = 0x197210u;

    // 0x197210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197214: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x197214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19721c: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x19721Cu;
    SET_GPR_U32(ctx, 31, 0x197224u);
    ctx->pc = 0x197220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19721Cu;
            // 0x197220: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197224u; }
        if (ctx->pc != 0x197224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197224u; }
        if (ctx->pc != 0x197224u) { return; }
    }
    ctx->pc = 0x197224u;
    // 0x197224: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x197224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x197228: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x197228u;
    SET_GPR_U32(ctx, 31, 0x197230u);
    ctx->pc = 0x19722Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197228u;
            // 0x19722c: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197230u; }
        if (ctx->pc != 0x197230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197230u; }
        if (ctx->pc != 0x197230u) { return; }
    }
    ctx->pc = 0x197230u;
    // 0x197230: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x197230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x197234: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x197234u;
    SET_GPR_U32(ctx, 31, 0x19723Cu);
    ctx->pc = 0x197238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197234u;
            // 0x197238: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19723Cu; }
        if (ctx->pc != 0x19723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19723Cu; }
        if (ctx->pc != 0x19723Cu) { return; }
    }
    ctx->pc = 0x19723Cu;
    // 0x19723c: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x19723cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x197240: 0xac201608  sw          $zero, 0x1608($at)
    ctx->pc = 0x197240u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5640), GPR_U32(ctx, 0));
    // 0x197244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197248: 0x3e00008  jr          $ra
    ctx->pc = 0x197248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19724Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197248u;
            // 0x19724c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197250u;
}
