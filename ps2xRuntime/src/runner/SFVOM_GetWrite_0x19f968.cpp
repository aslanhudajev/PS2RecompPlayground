#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFVOM_GetWrite
// Address: 0x19f968 - 0x19f988
void SFVOM_GetWrite_0x19f968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFVOM_GetWrite");


    ctx->pc = 0x19f968u;

    // 0x19f968: 0x27bdfff0
    ctx->pc = 0x19f968u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f96c: 0x3c05ff00
    ctx->pc = 0x19f96cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19f970: 0xffbf0000
    ctx->pc = 0x19f970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f974: 0xc064ea0
    ctx->pc = 0x19F974u;
    SET_GPR_U32(ctx, 31, 0x19F97Cu);
    ctx->pc = 0x19F978u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1793));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F97Cu; }
        else if (ctx->pc != 0x19F97Cu) { ctx->pc = 0x19F97Cu; }
    }
    if (ctx->pc != 0x19F97Cu) { return; }
    ctx->pc = 0x19F97Cu;
    // 0x19f97c: 0xdfbf0000
    ctx->pc = 0x19f97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f980: 0x3e00008
    ctx->pc = 0x19F980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F984u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F988u;
}
