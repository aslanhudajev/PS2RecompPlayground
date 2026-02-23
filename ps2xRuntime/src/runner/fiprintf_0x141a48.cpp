#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fiprintf
// Address: 0x141a48 - 0x141a7c
void fiprintf_0x141a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fiprintf");


    ctx->pc = 0x141a48u;

    // 0x141a48: 0x27bdff80
    ctx->pc = 0x141a48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x141a4c: 0xffa60050
    ctx->pc = 0x141a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x141a50: 0xffbf0000
    ctx->pc = 0x141a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141a54: 0x27a60050
    ctx->pc = 0x141a54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    // 0x141a58: 0xffa70058
    ctx->pc = 0x141a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x141a5c: 0xffa80060
    ctx->pc = 0x141a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x141a60: 0xffa90068
    ctx->pc = 0x141a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x141a64: 0xffaa0070
    ctx->pc = 0x141a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x141a68: 0xc051748
    ctx->pc = 0x141A68u;
    SET_GPR_U32(ctx, 31, 0x141A70u);
    ctx->pc = 0x141A6Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->pc = 0x145D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        vfiprintf_0x145d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A70u; }
        else if (ctx->pc != 0x141A70u) { ctx->pc = 0x141A70u; }
    }
    if (ctx->pc != 0x141A70u) { return; }
    ctx->pc = 0x141A70u;
    // 0x141a70: 0xdfbf0000
    ctx->pc = 0x141a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141a74: 0x3e00008
    ctx->pc = 0x141A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141A78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141A7Cu;
}
