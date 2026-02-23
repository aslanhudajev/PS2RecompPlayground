#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyGetNumIbufRoom
// Address: 0x18d060 - 0x18d08c
void mwPlyGetNumIbufRoom_0x18d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyGetNumIbufRoom");


    ctx->pc = 0x18d060u;

    // 0x18d060: 0x27bdffd0
    ctx->pc = 0x18d060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18d064: 0xffbf0020
    ctx->pc = 0x18d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18d068: 0x3a0282d
    ctx->pc = 0x18d068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d06c: 0xc066f38
    ctx->pc = 0x18D06Cu;
    SET_GPR_U32(ctx, 31, 0x18D074u);
    ctx->pc = 0x18D070u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19BCE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetWritePtr_0x19bce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D074u; }
        else if (ctx->pc != 0x18D074u) { ctx->pc = 0x18D074u; }
    }
    if (ctx->pc != 0x18D074u) { return; }
    ctx->pc = 0x18D074u;
    // 0x18d074: 0x8fa30004
    ctx->pc = 0x18d074u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18d078: 0x8fa2000c
    ctx->pc = 0x18d078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x18d07c: 0xdfbf0020
    ctx->pc = 0x18d07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d080: 0x621021
    ctx->pc = 0x18d080u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18d084: 0x3e00008
    ctx->pc = 0x18D084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D088u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D08Cu;
}
