#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: initialiseDrawDisplay
// Address: 0x102b18 - 0x102b50
void initialiseDrawDisplay_0x102b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("initialiseDrawDisplay_0x102b18");
#endif

    ctx->pc = 0x102b18u;

    // 0x102b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x102b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102b20: 0xc043192  jal         func_10C648
    ctx->pc = 0x102B20u;
    SET_GPR_U32(ctx, 31, 0x102B28u);
    ctx->pc = 0x10C648u;
    if (runtime->hasFunction(0x10C648u)) {
        auto targetFn = runtime->lookupFunction(0x10C648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B28u; }
        if (ctx->pc != 0x102B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x10c648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B28u; }
        if (ctx->pc != 0x102B28u) { return; }
    }
    ctx->pc = 0x102B28u;
    // 0x102b28: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x102b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x102b2c: 0xc04a90c  jal         func_12A430
    ctx->pc = 0x102B2Cu;
    SET_GPR_U32(ctx, 31, 0x102B34u);
    ctx->pc = 0x102B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102B2Cu;
            // 0x102b30: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A430u;
    if (runtime->hasFunction(0x12A430u)) {
        auto targetFn = runtime->lookupFunction(0x12A430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B34u; }
        if (ctx->pc != 0x102B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x12a430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B34u; }
        if (ctx->pc != 0x102B34u) { return; }
    }
    ctx->pc = 0x102B34u;
    // 0x102b34: 0xaf8282b8  sw          $v0, -0x7D48($gp)
    ctx->pc = 0x102b34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935224), GPR_U32(ctx, 2));
    // 0x102b38: 0xc043502  jal         func_10D408
    ctx->pc = 0x102B38u;
    SET_GPR_U32(ctx, 31, 0x102B40u);
    ctx->pc = 0x102B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102B38u;
            // 0x102b3c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D408u;
    if (runtime->hasFunction(0x10D408u)) {
        auto targetFn = runtime->lookupFunction(0x10D408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B40u; }
        if (ctx->pc != 0x102B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x10d408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B40u; }
        if (ctx->pc != 0x102B40u) { return; }
    }
    ctx->pc = 0x102B40u;
    // 0x102b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102b44: 0xaf828490  sw          $v0, -0x7B70($gp)
    ctx->pc = 0x102b44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935696), GPR_U32(ctx, 2));
    // 0x102b48: 0x8040b2e  j           func_102CB8
    ctx->pc = 0x102B48u;
    ctx->pc = 0x102B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102B48u;
            // 0x102b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102CB8u;
    if (runtime->hasFunction(0x102CB8u)) {
        auto targetFn = runtime->lookupFunction(0x102CB8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        reInitialiseDrawDisplay_0x102cb8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x102B50u;
}
