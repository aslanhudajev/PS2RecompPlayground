#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDBGetVu0Info
// Address: 0x2b4030 - 0x2b404c
void pbDBGetVu0Info_0x2b4030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4030u;

    // 0x2b4030: 0x27bdfff0
    ctx->pc = 0x2b4030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4034: 0xffbf0000
    ctx->pc = 0x2b4034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4038: 0xc0acf00
    ctx->pc = 0x2B4038u;
    SET_GPR_U32(ctx, 31, 0x2B4040u);
    ctx->pc = 0x2B403Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVuXInfo_0x2b3c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4040u; }
    }
    if (ctx->pc != 0x2B4040u) { return; }
    ctx->pc = 0x2B4040u;
    // 0x2b4040: 0xdfbf0000
    ctx->pc = 0x2b4040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4044: 0x3e00008
    ctx->pc = 0x2B4044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4048u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B404Cu;
}
