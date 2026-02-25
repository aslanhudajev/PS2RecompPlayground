#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: index
// Address: 0x13a408 - 0x13a424
void index_0x13a408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("index_0x13a408");
#endif

    ctx->pc = 0x13a408u;

    // 0x13a408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13a408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13a40c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a410: 0xc04f382  jal         func_13CE08
    ctx->pc = 0x13A410u;
    SET_GPR_U32(ctx, 31, 0x13A418u);
    ctx->pc = 0x13CE08u;
    if (runtime->hasFunction(0x13CE08u)) {
        auto targetFn = runtime->lookupFunction(0x13CE08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A418u; }
        if (ctx->pc != 0x13A418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strchr_0x13ce08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A418u; }
        if (ctx->pc != 0x13A418u) { return; }
    }
    ctx->pc = 0x13A418u;
    // 0x13a418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a41c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A41Cu;
            // 0x13a420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A424u;
}
