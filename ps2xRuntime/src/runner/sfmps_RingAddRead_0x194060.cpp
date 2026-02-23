#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_RingAddRead
// Address: 0x194060 - 0x194080
void sfmps_RingAddRead_0x194060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_RingAddRead");


    ctx->pc = 0x194060u;

    // 0x194060: 0x27bdfff0
    ctx->pc = 0x194060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x194064: 0xa0302d
    ctx->pc = 0x194064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194068: 0xffbf0000
    ctx->pc = 0x194068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19406c: 0xc06479e
    ctx->pc = 0x19406Cu;
    SET_GPR_U32(ctx, 31, 0x194074u);
    ctx->pc = 0x194070u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 14084)));
    ctx->pc = 0x191E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingAddRead_0x191e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194074u; }
        else if (ctx->pc != 0x194074u) { ctx->pc = 0x194074u; }
    }
    if (ctx->pc != 0x194074u) { return; }
    ctx->pc = 0x194074u;
    // 0x194074: 0xdfbf0000
    ctx->pc = 0x194074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194078: 0x3e00008
    ctx->pc = 0x194078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19407Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194080u;
}
