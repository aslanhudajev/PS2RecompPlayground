#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iSetAlarm
// Address: 0x304348 - 0x304368
void iSetAlarm_0x304348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304348u;

    // 0x304348: 0x27bdfff0
    ctx->pc = 0x304348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30434c: 0xffbf0000
    ctx->pc = 0x30434cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304350: 0xc0c0cf0
    ctx->pc = 0x304350u;
    SET_GPR_U32(ctx, 31, 0x304358u);
    ctx->pc = 0x304354u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    ctx->pc = 0x3033C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iSetAlarm_0x3033c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304358u; }
    }
    if (ctx->pc != 0x304358u) { return; }
    ctx->pc = 0x304358u;
    // 0x304358: 0xf
    ctx->pc = 0x304358u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x30435c: 0xdfbf0000
    ctx->pc = 0x30435cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304360: 0x3e00008
    ctx->pc = 0x304360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304364u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304368u;
}
