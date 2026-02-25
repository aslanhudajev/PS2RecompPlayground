#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitStage1Boss_Hontai
// Address: 0x161c20 - 0x161c6c
void UnInitStage1Boss_Hontai_0x161c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitStage1Boss_Hontai_0x161c20");
#endif

    ctx->pc = 0x161c20u;

    // 0x161c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161c28: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x161C28u;
    SET_GPR_U32(ctx, 31, 0x161C30u);
    ctx->pc = 0x161C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C28u;
            // 0x161c2c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C30u; }
        if (ctx->pc != 0x161C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C30u; }
        if (ctx->pc != 0x161C30u) { return; }
    }
    ctx->pc = 0x161C30u;
    // 0x161c30: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x161C30u;
    SET_GPR_U32(ctx, 31, 0x161C38u);
    ctx->pc = 0x161C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C30u;
            // 0x161c34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C38u; }
        if (ctx->pc != 0x161C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C38u; }
        if (ctx->pc != 0x161C38u) { return; }
    }
    ctx->pc = 0x161C38u;
    // 0x161c38: 0xc060680  jal         func_181A00
    ctx->pc = 0x161C38u;
    SET_GPR_U32(ctx, 31, 0x161C40u);
    ctx->pc = 0x161C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C38u;
            // 0x161c3c: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C40u; }
        if (ctx->pc != 0x161C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C40u; }
        if (ctx->pc != 0x161C40u) { return; }
    }
    ctx->pc = 0x161C40u;
    // 0x161c40: 0xc060680  jal         func_181A00
    ctx->pc = 0x161C40u;
    SET_GPR_U32(ctx, 31, 0x161C48u);
    ctx->pc = 0x161C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C40u;
            // 0x161c44: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C48u; }
        if (ctx->pc != 0x161C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C48u; }
        if (ctx->pc != 0x161C48u) { return; }
    }
    ctx->pc = 0x161C48u;
    // 0x161c48: 0xc060680  jal         func_181A00
    ctx->pc = 0x161C48u;
    SET_GPR_U32(ctx, 31, 0x161C50u);
    ctx->pc = 0x161C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C48u;
            // 0x161c4c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C50u; }
        if (ctx->pc != 0x161C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C50u; }
        if (ctx->pc != 0x161C50u) { return; }
    }
    ctx->pc = 0x161C50u;
    // 0x161c50: 0xc060680  jal         func_181A00
    ctx->pc = 0x161C50u;
    SET_GPR_U32(ctx, 31, 0x161C58u);
    ctx->pc = 0x161C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C50u;
            // 0x161c54: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C58u; }
        if (ctx->pc != 0x161C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C58u; }
        if (ctx->pc != 0x161C58u) { return; }
    }
    ctx->pc = 0x161C58u;
    // 0x161c58: 0xc060680  jal         func_181A00
    ctx->pc = 0x161C58u;
    SET_GPR_U32(ctx, 31, 0x161C60u);
    ctx->pc = 0x161C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C58u;
            // 0x161c5c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C60u; }
        if (ctx->pc != 0x161C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C60u; }
        if (ctx->pc != 0x161C60u) { return; }
    }
    ctx->pc = 0x161C60u;
    // 0x161c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161c64: 0x3e00008  jr          $ra
    ctx->pc = 0x161C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C64u;
            // 0x161c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161C6Cu;
}
