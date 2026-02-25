#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: debug_InitDMATimer
// Address: 0x167a10 - 0x167a40
void debug_InitDMATimer_0x167a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("debug_InitDMATimer_0x167a10");
#endif

    ctx->pc = 0x167a10u;

    // 0x167a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167a14: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x167a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x167a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167a1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x167a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167a20: 0x24a57a40  addiu       $a1, $a1, 0x7A40
    ctx->pc = 0x167a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31296));
    // 0x167a24: 0xc04ba5c  jal         func_12E970
    ctx->pc = 0x167A24u;
    SET_GPR_U32(ctx, 31, 0x167A2Cu);
    ctx->pc = 0x167A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167A24u;
            // 0x167a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E970u;
    if (runtime->hasFunction(0x12E970u)) {
        auto targetFn = runtime->lookupFunction(0x12E970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A2Cu; }
        if (ctx->pc != 0x167A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x12e970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A2Cu; }
        if (ctx->pc != 0x167A2Cu) { return; }
    }
    ctx->pc = 0x167A2Cu;
    // 0x167a2c: 0xc04be1e  jal         func_12F878
    ctx->pc = 0x167A2Cu;
    SET_GPR_U32(ctx, 31, 0x167A34u);
    ctx->pc = 0x167A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167A2Cu;
            // 0x167a30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F878u;
    if (runtime->hasFunction(0x12F878u)) {
        auto targetFn = runtime->lookupFunction(0x12F878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A34u; }
        if (ctx->pc != 0x167A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x12f878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167A34u; }
        if (ctx->pc != 0x167A34u) { return; }
    }
    ctx->pc = 0x167A34u;
    // 0x167a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167a38: 0x3e00008  jr          $ra
    ctx->pc = 0x167A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167A38u;
            // 0x167a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167A40u;
}
