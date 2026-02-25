#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: zcfree
// Address: 0x1ef0b8 - 0x1ef0d4
void zcfree_0x1ef0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("zcfree_0x1ef0b8");
#endif

    ctx->pc = 0x1ef0b8u;

    // 0x1ef0b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef0bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef0c0: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x1EF0C0u;
    SET_GPR_U32(ctx, 31, 0x1EF0C8u);
    ctx->pc = 0x1EF0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0C0u;
            // 0x1ef0c4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0C8u; }
        if (ctx->pc != 0x1EF0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0C8u; }
        if (ctx->pc != 0x1EF0C8u) { return; }
    }
    ctx->pc = 0x1EF0C8u;
    // 0x1ef0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0CCu;
            // 0x1ef0d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF0D4u;
}
