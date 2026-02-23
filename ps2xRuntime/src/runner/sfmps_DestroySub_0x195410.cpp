#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_DestroySub
// Address: 0x195410 - 0x19542c
void sfmps_DestroySub_0x195410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_DestroySub");


    ctx->pc = 0x195410u;

    // 0x195410: 0x27bdfff0
    ctx->pc = 0x195410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195414: 0xffbf0000
    ctx->pc = 0x195414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195418: 0xc060a56
    ctx->pc = 0x195418u;
    SET_GPR_U32(ctx, 31, 0x195420u);
    ctx->pc = 0x182958u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_Destroy_0x182958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195420u; }
        else if (ctx->pc != 0x195420u) { ctx->pc = 0x195420u; }
    }
    if (ctx->pc != 0x195420u) { return; }
    ctx->pc = 0x195420u;
    // 0x195420: 0xdfbf0000
    ctx->pc = 0x195420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195424: 0x3e00008
    ctx->pc = 0x195424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195428u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19542Cu;
}
