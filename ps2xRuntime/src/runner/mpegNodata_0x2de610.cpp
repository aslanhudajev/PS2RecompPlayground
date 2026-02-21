#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegNodata
// Address: 0x2de610 - 0x2de63c
void mpegNodata_0x2de610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de610u;

    // 0x2de610: 0x27bdfff0
    ctx->pc = 0x2de610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de614: 0xffbf0000
    ctx->pc = 0x2de614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de618: 0xc0b74d4
    ctx->pc = 0x2DE618u;
    SET_GPR_U32(ctx, 31, 0x2DE620u);
    ctx->pc = 0x2DD350u;
    {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x2dd350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE620u; }
    }
    if (ctx->pc != 0x2DE620u) { return; }
    ctx->pc = 0x2DE620u;
    // 0x2de620: 0x3c04003a
    ctx->pc = 0x2de620u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2de624: 0xc0b7d6e
    ctx->pc = 0x2DE624u;
    SET_GPR_U32(ctx, 31, 0x2DE62Cu);
    ctx->pc = 0x2DE628u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10888));
    ctx->pc = 0x2DF5B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufAddDMA_0x2df5b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE62Cu; }
    }
    if (ctx->pc != 0x2DE62Cu) { return; }
    ctx->pc = 0x2DE62Cu;
    // 0x2de62c: 0x24020001
    ctx->pc = 0x2de62cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de630: 0xdfbf0000
    ctx->pc = 0x2de630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de634: 0x3e00008
    ctx->pc = 0x2DE634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE638u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE63Cu;
}
