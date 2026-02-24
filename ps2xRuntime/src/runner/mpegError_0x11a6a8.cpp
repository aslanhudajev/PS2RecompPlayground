#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegError
// Address: 0x11a6a8 - 0x11a6d0
void mpegError_0x11a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a6a8u;

    // 0x11a6a8: 0x27bdfff0
    ctx->pc = 0x11a6a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a6ac: 0x3c040017
    ctx->pc = 0x11a6acu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x11a6b0: 0xffbf0000
    ctx->pc = 0x11a6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a6b4: 0x24845f28
    ctx->pc = 0x11a6b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24360));
    // 0x11a6b8: 0xc04ace4
    ctx->pc = 0x11A6B8u;
    SET_GPR_U32(ctx, 31, 0x11A6C0u);
    ctx->pc = 0x11A6BCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6C0u; }
    }
    if (ctx->pc != 0x11A6C0u) { return; }
    ctx->pc = 0x11A6C0u;
    // 0x11a6c0: 0xdfbf0000
    ctx->pc = 0x11a6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a6c4: 0x24020001
    ctx->pc = 0x11a6c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a6c8: 0x3e00008
    ctx->pc = 0x11A6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A6CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A6D0u;
}
