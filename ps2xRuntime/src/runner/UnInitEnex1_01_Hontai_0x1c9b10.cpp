#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitEnex1_01_Hontai
// Address: 0x1c9b10 - 0x1c9b3c
void UnInitEnex1_01_Hontai_0x1c9b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitEnex1_01_Hontai_0x1c9b10");
#endif

    ctx->pc = 0x1c9b10u;

    // 0x1c9b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9b18: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1C9B18u;
    SET_GPR_U32(ctx, 31, 0x1C9B20u);
    ctx->pc = 0x1C9B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B18u;
            // 0x1c9b1c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B20u; }
        if (ctx->pc != 0x1C9B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B20u; }
        if (ctx->pc != 0x1C9B20u) { return; }
    }
    ctx->pc = 0x1C9B20u;
    // 0x1c9b20: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1C9B20u;
    SET_GPR_U32(ctx, 31, 0x1C9B28u);
    ctx->pc = 0x1C9B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B20u;
            // 0x1c9b24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B28u; }
        if (ctx->pc != 0x1C9B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B28u; }
        if (ctx->pc != 0x1C9B28u) { return; }
    }
    ctx->pc = 0x1C9B28u;
    // 0x1c9b28: 0xc060680  jal         func_181A00
    ctx->pc = 0x1C9B28u;
    SET_GPR_U32(ctx, 31, 0x1C9B30u);
    ctx->pc = 0x1C9B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B28u;
            // 0x1c9b2c: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B30u; }
        if (ctx->pc != 0x1C9B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B30u; }
        if (ctx->pc != 0x1C9B30u) { return; }
    }
    ctx->pc = 0x1C9B30u;
    // 0x1c9b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b34: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B34u;
            // 0x1c9b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9B3Cu;
}
