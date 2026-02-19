#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindStringMessage
// Address: 0x201c48 - 0x201c6c
void FindStringMessage_0x201c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201c48u;

    // 0x201c48: 0x27bdfff0
    ctx->pc = 0x201c48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201c4c: 0xffbf0000
    ctx->pc = 0x201c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201c50: 0x80282d
    ctx->pc = 0x201c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c54: 0x3c040031
    ctx->pc = 0x201c54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x201c58: 0xc0806d2
    ctx->pc = 0x201C58u;
    SET_GPR_U32(ctx, 31, 0x201C60u);
    ctx->pc = 0x201C5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964904));
    ctx->pc = 0x201B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindStringMessageSub_0x201b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201C60u; }
    }
    if (ctx->pc != 0x201C60u) { return; }
    ctx->pc = 0x201C60u;
    // 0x201c60: 0xdfbf0000
    ctx->pc = 0x201c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201c64: 0x3e00008
    ctx->pc = 0x201C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201C6Cu;
}
