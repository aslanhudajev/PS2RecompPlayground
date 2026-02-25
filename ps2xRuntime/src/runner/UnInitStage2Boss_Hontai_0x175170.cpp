#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitStage2Boss_Hontai
// Address: 0x175170 - 0x1751bc
void UnInitStage2Boss_Hontai_0x175170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitStage2Boss_Hontai_0x175170");
#endif

    ctx->pc = 0x175170u;

    // 0x175170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175178: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x175178u;
    SET_GPR_U32(ctx, 31, 0x175180u);
    ctx->pc = 0x17517Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175178u;
            // 0x17517c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175180u; }
        if (ctx->pc != 0x175180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175180u; }
        if (ctx->pc != 0x175180u) { return; }
    }
    ctx->pc = 0x175180u;
    // 0x175180: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x175180u;
    SET_GPR_U32(ctx, 31, 0x175188u);
    ctx->pc = 0x175184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175180u;
            // 0x175184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175188u; }
        if (ctx->pc != 0x175188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175188u; }
        if (ctx->pc != 0x175188u) { return; }
    }
    ctx->pc = 0x175188u;
    // 0x175188: 0xc060680  jal         func_181A00
    ctx->pc = 0x175188u;
    SET_GPR_U32(ctx, 31, 0x175190u);
    ctx->pc = 0x17518Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175188u;
            // 0x17518c: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175190u; }
        if (ctx->pc != 0x175190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175190u; }
        if (ctx->pc != 0x175190u) { return; }
    }
    ctx->pc = 0x175190u;
    // 0x175190: 0xc060680  jal         func_181A00
    ctx->pc = 0x175190u;
    SET_GPR_U32(ctx, 31, 0x175198u);
    ctx->pc = 0x175194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175190u;
            // 0x175194: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175198u; }
        if (ctx->pc != 0x175198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175198u; }
        if (ctx->pc != 0x175198u) { return; }
    }
    ctx->pc = 0x175198u;
    // 0x175198: 0xc060680  jal         func_181A00
    ctx->pc = 0x175198u;
    SET_GPR_U32(ctx, 31, 0x1751A0u);
    ctx->pc = 0x17519Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175198u;
            // 0x17519c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751A0u; }
        if (ctx->pc != 0x1751A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751A0u; }
        if (ctx->pc != 0x1751A0u) { return; }
    }
    ctx->pc = 0x1751A0u;
    // 0x1751a0: 0xc060680  jal         func_181A00
    ctx->pc = 0x1751A0u;
    SET_GPR_U32(ctx, 31, 0x1751A8u);
    ctx->pc = 0x1751A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1751A0u;
            // 0x1751a4: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751A8u; }
        if (ctx->pc != 0x1751A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751A8u; }
        if (ctx->pc != 0x1751A8u) { return; }
    }
    ctx->pc = 0x1751A8u;
    // 0x1751a8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1751A8u;
    SET_GPR_U32(ctx, 31, 0x1751B0u);
    ctx->pc = 0x1751ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1751A8u;
            // 0x1751ac: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751B0u; }
        if (ctx->pc != 0x1751B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751B0u; }
        if (ctx->pc != 0x1751B0u) { return; }
    }
    ctx->pc = 0x1751B0u;
    // 0x1751b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1751b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1751b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1751B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1751B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1751B4u;
            // 0x1751b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1751BCu;
}
