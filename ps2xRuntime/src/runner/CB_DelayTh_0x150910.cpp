#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CB_DelayTh
// Address: 0x150910 - 0x150934
void CB_DelayTh_0x150910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CB_DelayTh");


    ctx->pc = 0x150910u;

    // 0x150910: 0x27bdfff0
    ctx->pc = 0x150910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150914: 0xffbf0000
    ctx->pc = 0x150914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150918: 0xc055244
    ctx->pc = 0x150918u;
    SET_GPR_U32(ctx, 31, 0x150920u);
    ctx->pc = 0x15091Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154910u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x154910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150920u; }
        else if (ctx->pc != 0x150920u) { ctx->pc = 0x150920u; }
    }
    if (ctx->pc != 0x150920u) { return; }
    ctx->pc = 0x150920u;
    // 0x150920: 0xf
    ctx->pc = 0x150920u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x150924: 0x42000038
    ctx->pc = 0x150924u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x150928: 0xdfbf0000
    ctx->pc = 0x150928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15092c: 0x3e00008
    ctx->pc = 0x15092Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150930u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150934u;
}
