#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iEnableDmac
// Address: 0x12f920 - 0x12f940
void iEnableDmac_0x12f920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iEnableDmac_0x12f920");
#endif

    ctx->pc = 0x12f920u;

    // 0x12f920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f928: 0xc04ba88  jal         func_12EA20
    ctx->pc = 0x12F928u;
    SET_GPR_U32(ctx, 31, 0x12F930u);
    ctx->pc = 0x12EA20u;
    if (runtime->hasFunction(0x12EA20u)) {
        auto targetFn = runtime->lookupFunction(0x12EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F930u; }
        if (ctx->pc != 0x12F930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iEnableDmac_0x12ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F930u; }
        if (ctx->pc != 0x12F930u) { return; }
    }
    ctx->pc = 0x12F930u;
    // 0x12f930: 0xf  sync
    ctx->pc = 0x12f930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f938: 0x3e00008  jr          $ra
    ctx->pc = 0x12F938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F938u;
            // 0x12f93c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F940u;
}
