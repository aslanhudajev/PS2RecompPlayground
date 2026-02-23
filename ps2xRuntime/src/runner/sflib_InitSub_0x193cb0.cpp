#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sflib_InitSub
// Address: 0x193cb0 - 0x193ccc
void sflib_InitSub_0x193cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sflib_InitSub");


    ctx->pc = 0x193cb0u;

    // 0x193cb0: 0x27bdfff0
    ctx->pc = 0x193cb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193cb4: 0xffbf0000
    ctx->pc = 0x193cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193cb8: 0xc066ab4
    ctx->pc = 0x193CB8u;
    SET_GPR_U32(ctx, 31, 0x193CC0u);
    ctx->pc = 0x19AAD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPLY_Init_0x19aad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CC0u; }
        else if (ctx->pc != 0x193CC0u) { ctx->pc = 0x193CC0u; }
    }
    if (ctx->pc != 0x193CC0u) { return; }
    ctx->pc = 0x193CC0u;
    // 0x193cc0: 0xdfbf0000
    ctx->pc = 0x193cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193cc4: 0x8064b82
    ctx->pc = 0x193CC4u;
    ctx->pc = 0x193CC8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x192E08u;
    SFHDS_Init_0x192e08(rdram, ctx, runtime); return;
    ctx->pc = 0x193CCCu;
}
