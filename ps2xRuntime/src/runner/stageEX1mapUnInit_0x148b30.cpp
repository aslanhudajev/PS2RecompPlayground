#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stageEX1mapUnInit
// Address: 0x148b30 - 0x148b74
void stageEX1mapUnInit_0x148b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stageEX1mapUnInit_0x148b30");
#endif

    ctx->pc = 0x148b30u;

    // 0x148b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x148b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148b38: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x148B38u;
    SET_GPR_U32(ctx, 31, 0x148B40u);
    ctx->pc = 0x148B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B38u;
            // 0x148b3c: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B40u; }
        if (ctx->pc != 0x148B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B40u; }
        if (ctx->pc != 0x148B40u) { return; }
    }
    ctx->pc = 0x148B40u;
    // 0x148b40: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x148B40u;
    SET_GPR_U32(ctx, 31, 0x148B48u);
    ctx->pc = 0x148B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B40u;
            // 0x148b44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B48u; }
        if (ctx->pc != 0x148B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B48u; }
        if (ctx->pc != 0x148B48u) { return; }
    }
    ctx->pc = 0x148B48u;
    // 0x148b48: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x148B48u;
    SET_GPR_U32(ctx, 31, 0x148B50u);
    ctx->pc = 0x148B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B48u;
            // 0x148b4c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B50u; }
        if (ctx->pc != 0x148B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B50u; }
        if (ctx->pc != 0x148B50u) { return; }
    }
    ctx->pc = 0x148B50u;
    // 0x148b50: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x148B50u;
    SET_GPR_U32(ctx, 31, 0x148B58u);
    ctx->pc = 0x148B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B50u;
            // 0x148b54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B58u; }
        if (ctx->pc != 0x148B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B58u; }
        if (ctx->pc != 0x148B58u) { return; }
    }
    ctx->pc = 0x148B58u;
    // 0x148b58: 0xc060680  jal         func_181A00
    ctx->pc = 0x148B58u;
    SET_GPR_U32(ctx, 31, 0x148B60u);
    ctx->pc = 0x148B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B58u;
            // 0x148b5c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B60u; }
        if (ctx->pc != 0x148B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B60u; }
        if (ctx->pc != 0x148B60u) { return; }
    }
    ctx->pc = 0x148B60u;
    // 0x148b60: 0xc060680  jal         func_181A00
    ctx->pc = 0x148B60u;
    SET_GPR_U32(ctx, 31, 0x148B68u);
    ctx->pc = 0x148B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B60u;
            // 0x148b64: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B68u; }
        if (ctx->pc != 0x148B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148B68u; }
        if (ctx->pc != 0x148B68u) { return; }
    }
    ctx->pc = 0x148B68u;
    // 0x148b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x148B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148B6Cu;
            // 0x148b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148B74u;
}
