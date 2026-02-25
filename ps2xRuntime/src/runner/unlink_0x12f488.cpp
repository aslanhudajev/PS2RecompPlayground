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
// Address: 0x12f488 - 0x12f4b0
void unlink_0x12f488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("unlink_0x12f488");
#endif

    ctx->pc = 0x12f488u;

    // 0x12f488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f48c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f490: 0xc04e5ce  jal         func_139738
    ctx->pc = 0x12F490u;
    SET_GPR_U32(ctx, 31, 0x12F498u);
    ctx->pc = 0x139738u;
    if (runtime->hasFunction(0x139738u)) {
        auto targetFn = runtime->lookupFunction(0x139738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F498u; }
        if (ctx->pc != 0x12F498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x139738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F498u; }
        if (ctx->pc != 0x12F498u) { return; }
    }
    ctx->pc = 0x12F498u;
    // 0x12f498: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x12f498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12f49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f4a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12f4a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12F4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4A8u;
            // 0x12f4ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F4B0u;
}
