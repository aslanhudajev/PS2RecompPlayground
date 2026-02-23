#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isceSifSendCmd
// Address: 0x156f70 - 0x156fac
void isceSifSendCmd_0x156f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isceSifSendCmd");


    ctx->pc = 0x156f70u;

    // 0x156f70: 0xc0102d
    ctx->pc = 0x156f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f74: 0xe0182d
    ctx->pc = 0x156f74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f78: 0x100582d
    ctx->pc = 0x156f78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f7c: 0x27bdfff0
    ctx->pc = 0x156f7cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156f80: 0x120502d
    ctx->pc = 0x156f80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f84: 0xa0302d
    ctx->pc = 0x156f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f88: 0xffbf0000
    ctx->pc = 0x156f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156f8c: 0x40382d
    ctx->pc = 0x156f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f90: 0x60402d
    ctx->pc = 0x156f90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f94: 0x160482d
    ctx->pc = 0x156f94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f98: 0xc055b7e
    ctx->pc = 0x156F98u;
    SET_GPR_U32(ctx, 31, 0x156FA0u);
    ctx->pc = 0x156F9Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x156DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceSifSendCmd_0x156df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156FA0u; }
        else if (ctx->pc != 0x156FA0u) { ctx->pc = 0x156FA0u; }
    }
    if (ctx->pc != 0x156FA0u) { return; }
    ctx->pc = 0x156FA0u;
    // 0x156fa0: 0xdfbf0000
    ctx->pc = 0x156fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156fa4: 0x3e00008
    ctx->pc = 0x156FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156FACu;
}
