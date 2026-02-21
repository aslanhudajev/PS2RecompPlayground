#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: any_down
// Address: 0x206f78 - 0x206f94
void any_down_0x206f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206f78u;

    // 0x206f78: 0x27bdfff0
    ctx->pc = 0x206f78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206f7c: 0xffbf0000
    ctx->pc = 0x206f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206f80: 0xc081bae
    ctx->pc = 0x206F80u;
    SET_GPR_U32(ctx, 31, 0x206F88u);
    ctx->pc = 0x206F84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 192));
    ctx->pc = 0x206EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_0x206eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F88u; }
    }
    if (ctx->pc != 0x206F88u) { return; }
    ctx->pc = 0x206F88u;
    // 0x206f88: 0xdfbf0000
    ctx->pc = 0x206f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206f8c: 0x3e00008
    ctx->pc = 0x206F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206F94u;
}
