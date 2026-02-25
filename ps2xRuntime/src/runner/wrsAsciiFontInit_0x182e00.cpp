#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsAsciiFontInit
// Address: 0x182e00 - 0x182e38
void wrsAsciiFontInit_0x182e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsAsciiFontInit_0x182e00");
#endif

    ctx->pc = 0x182e00u;

    // 0x182e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182e04: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x182e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x182e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182e0c: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x182e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x182e10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x182e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182e14: 0xc05c20c  jal         func_170830
    ctx->pc = 0x182E14u;
    SET_GPR_U32(ctx, 31, 0x182E1Cu);
    ctx->pc = 0x182E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182E14u;
            // 0x182e18: 0x2407001c  addiu       $a3, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E1Cu; }
        if (ctx->pc != 0x182E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E1Cu; }
        if (ctx->pc != 0x182E1Cu) { return; }
    }
    ctx->pc = 0x182E1Cu;
    // 0x182e1c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x182E1Cu;
    SET_GPR_U32(ctx, 31, 0x182E24u);
    ctx->pc = 0x182E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182E1Cu;
            // 0x182e20: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E24u; }
        if (ctx->pc != 0x182E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E24u; }
        if (ctx->pc != 0x182E24u) { return; }
    }
    ctx->pc = 0x182E24u;
    // 0x182e24: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x182E24u;
    SET_GPR_U32(ctx, 31, 0x182E2Cu);
    ctx->pc = 0x182E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182E24u;
            // 0x182e28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E2Cu; }
        if (ctx->pc != 0x182E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E2Cu; }
        if (ctx->pc != 0x182E2Cu) { return; }
    }
    ctx->pc = 0x182E2Cu;
    // 0x182e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182e30: 0x3e00008  jr          $ra
    ctx->pc = 0x182E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E30u;
            // 0x182e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182E38u;
}
