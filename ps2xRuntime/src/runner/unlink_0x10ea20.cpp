#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: unlink
// Address: 0x10ea20 - 0x10ea48
void unlink_0x10ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("unlink_0x10ea20");
#endif

    ctx->pc = 0x10ea20u;

    // 0x10ea20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ea24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ea28: 0xc04a844  jal         func_12A110
    ctx->pc = 0x10EA28u;
    SET_GPR_U32(ctx, 31, 0x10EA30u);
    ctx->pc = 0x12A110u;
    if (runtime->hasFunction(0x12A110u)) {
        auto targetFn = runtime->lookupFunction(0x12A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA30u; }
        if (ctx->pc != 0x10EA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x12a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA30u; }
        if (ctx->pc != 0x10EA30u) { return; }
    }
    ctx->pc = 0x10EA30u;
    // 0x10ea30: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10ea34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ea34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ea38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10ea3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ea40: 0x3e00008  jr          $ra
    ctx->pc = 0x10EA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA40u;
            // 0x10ea44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EA48u;
}
