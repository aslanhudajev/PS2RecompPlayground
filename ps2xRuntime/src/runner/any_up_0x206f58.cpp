#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: any_up
// Address: 0x206f58 - 0x206f74
void any_up_0x206f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206f58u;

    // 0x206f58: 0x27bdfff0
    ctx->pc = 0x206f58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206f5c: 0xffbf0000
    ctx->pc = 0x206f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206f60: 0xc081bae
    ctx->pc = 0x206F60u;
    SET_GPR_U32(ctx, 31, 0x206F68u);
    ctx->pc = 0x206F64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x206EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_0x206eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F68u; }
    }
    if (ctx->pc != 0x206F68u) { return; }
    ctx->pc = 0x206F68u;
    // 0x206f68: 0xdfbf0000
    ctx->pc = 0x206f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206f6c: 0x3e00008
    ctx->pc = 0x206F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206F74u;
}
