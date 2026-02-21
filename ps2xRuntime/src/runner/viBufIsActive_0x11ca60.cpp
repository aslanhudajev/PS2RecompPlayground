#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufIsActive
// Address: 0x11ca60 - 0x11caa0
void viBufIsActive_0x11ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ca60u;

    // 0x11ca60: 0x27bdffd0
    ctx->pc = 0x11ca60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ca64: 0xffb10010
    ctx->pc = 0x11ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ca68: 0xffb00000
    ctx->pc = 0x11ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ca6c: 0xffbf0020
    ctx->pc = 0x11ca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11ca70: 0x80802d
    ctx->pc = 0x11ca70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca74: 0xc0438b8
    ctx->pc = 0x11CA74u;
    SET_GPR_U32(ctx, 31, 0x11CA7Cu);
    ctx->pc = 0x11CA78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA7Cu; }
    }
    if (ctx->pc != 0x11CA7Cu) { return; }
    ctx->pc = 0x11CA7Cu;
    // 0x11ca7c: 0x8e040040
    ctx->pc = 0x11ca7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11ca80: 0xc0438b0
    ctx->pc = 0x11CA80u;
    SET_GPR_U32(ctx, 31, 0x11CA88u);
    ctx->pc = 0x11CA84u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA88u; }
    }
    if (ctx->pc != 0x11CA88u) { return; }
    ctx->pc = 0x11CA88u;
    // 0x11ca88: 0x220102d
    ctx->pc = 0x11ca88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca8c: 0xdfbf0020
    ctx->pc = 0x11ca8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ca90: 0xdfb10010
    ctx->pc = 0x11ca90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ca94: 0xdfb00000
    ctx->pc = 0x11ca94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ca98: 0x3e00008
    ctx->pc = 0x11CA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CAA0u;
}
