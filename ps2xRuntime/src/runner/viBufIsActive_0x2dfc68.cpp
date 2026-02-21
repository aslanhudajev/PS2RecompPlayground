#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufIsActive
// Address: 0x2dfc68 - 0x2dfca8
void viBufIsActive_0x2dfc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dfc68u;

    // 0x2dfc68: 0x27bdffd0
    ctx->pc = 0x2dfc68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dfc6c: 0xffbf0020
    ctx->pc = 0x2dfc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dfc70: 0xffb10010
    ctx->pc = 0x2dfc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dfc74: 0xffb00000
    ctx->pc = 0x2dfc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dfc78: 0x80802d
    ctx->pc = 0x2dfc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc7c: 0xc0c0d88
    ctx->pc = 0x2DFC7Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC84u);
    ctx->pc = 0x2DFC80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC84u; }
    }
    if (ctx->pc != 0x2DFC84u) { return; }
    ctx->pc = 0x2DFC84u;
    // 0x2dfc84: 0x8e110044
    ctx->pc = 0x2dfc84u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2dfc88: 0xc0c0d80
    ctx->pc = 0x2DFC88u;
    SET_GPR_U32(ctx, 31, 0x2DFC90u);
    ctx->pc = 0x2DFC8Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC90u; }
    }
    if (ctx->pc != 0x2DFC90u) { return; }
    ctx->pc = 0x2DFC90u;
    // 0x2dfc90: 0x220102d
    ctx->pc = 0x2dfc90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc94: 0xdfbf0020
    ctx->pc = 0x2dfc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfc98: 0xdfb10010
    ctx->pc = 0x2dfc98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfc9c: 0xdfb00000
    ctx->pc = 0x2dfc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfca0: 0x3e00008
    ctx->pc = 0x2DFCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFCA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFCA8u;
}
