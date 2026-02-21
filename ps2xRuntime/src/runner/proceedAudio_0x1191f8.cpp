#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: proceedAudio
// Address: 0x1191f8 - 0x11921c
void proceedAudio_0x1191f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1191f8u;

    // 0x1191f8: 0x27bdfff0
    ctx->pc = 0x1191f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1191fc: 0x3c040075
    ctx->pc = 0x1191fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x119200: 0xffbf0000
    ctx->pc = 0x119200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119204: 0xc0466b2
    ctx->pc = 0x119204u;
    SET_GPR_U32(ctx, 31, 0x11920Cu);
    ctx->pc = 0x119208u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960488));
    ctx->pc = 0x119AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecSendToIOP_0x119ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11920Cu; }
    }
    if (ctx->pc != 0x11920Cu) { return; }
    ctx->pc = 0x11920Cu;
    // 0x11920c: 0xdfbf0000
    ctx->pc = 0x11920cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119210: 0x24020001
    ctx->pc = 0x119210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x119214: 0x3e00008
    ctx->pc = 0x119214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119218u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11921Cu;
}
