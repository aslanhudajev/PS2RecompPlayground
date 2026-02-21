#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegNodata
// Address: 0x11a6d0 - 0x11a6fc
void mpegNodata_0x11a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a6d0u;

    // 0x11a6d0: 0x27bdfff0
    ctx->pc = 0x11a6d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a6d4: 0xffbf0000
    ctx->pc = 0x11a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a6d8: 0xc04638c
    ctx->pc = 0x11A6D8u;
    SET_GPR_U32(ctx, 31, 0x11A6E0u);
    ctx->pc = 0x118E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x118e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6E0u; }
    }
    if (ctx->pc != 0x11A6E0u) { return; }
    ctx->pc = 0x11A6E0u;
    // 0x11a6e0: 0x3c040075
    ctx->pc = 0x11a6e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11a6e4: 0xc0470fe
    ctx->pc = 0x11A6E4u;
    SET_GPR_U32(ctx, 31, 0x11A6ECu);
    ctx->pc = 0x11A6E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960656));
    ctx->pc = 0x11C3F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufAddDMA_0x11c3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6ECu; }
    }
    if (ctx->pc != 0x11A6ECu) { return; }
    ctx->pc = 0x11A6ECu;
    // 0x11a6ec: 0xdfbf0000
    ctx->pc = 0x11a6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a6f0: 0x24020001
    ctx->pc = 0x11a6f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a6f4: 0x3e00008
    ctx->pc = 0x11A6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A6F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A6FCu;
}
