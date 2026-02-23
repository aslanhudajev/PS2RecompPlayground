#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: matherr
// Address: 0x150498 - 0x1504bc
void matherr_0x150498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("matherr");


    ctx->pc = 0x150498u;

    // 0x150498: 0x27bdfff0
    ctx->pc = 0x150498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15049c: 0xffbf0000
    ctx->pc = 0x15049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1504a0: 0xdc840008
    ctx->pc = 0x1504a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1504a4: 0xc052e02
    ctx->pc = 0x1504A4u;
    SET_GPR_U32(ctx, 31, 0x1504ACu);
    ctx->pc = 0x1504A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1504ACu; }
        else if (ctx->pc != 0x1504ACu) { ctx->pc = 0x1504ACu; }
    }
    if (ctx->pc != 0x1504ACu) { return; }
    ctx->pc = 0x1504ACu;
    // 0x1504ac: 0xdfbf0000
    ctx->pc = 0x1504acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1504b0: 0x102d
    ctx->pc = 0x1504b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504b4: 0x3e00008
    ctx->pc = 0x1504B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1504B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1504BCu;
}
