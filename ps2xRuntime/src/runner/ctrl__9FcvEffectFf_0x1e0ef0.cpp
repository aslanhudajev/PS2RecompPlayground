#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__9FcvEffectFf
// Address: 0x1e0ef0 - 0x1e0f10
void ctrl__9FcvEffectFf_0x1e0ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__9FcvEffectFf");


    ctx->pc = 0x1e0ef0u;

    // 0x1e0ef0: 0x27bdfff0
    ctx->pc = 0x1e0ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0ef4: 0x7fbf0000
    ctx->pc = 0x1e0ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e0ef8: 0xe48c0024
    ctx->pc = 0x1e0ef8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1e0efc: 0xc071b74
    ctx->pc = 0x1E0EFCu;
    SET_GPR_U32(ctx, 31, 0x1E0F04u);
    ctx->pc = 0x1E0F00u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 4), 276));
    ctx->pc = 0x1C6DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ptmf_scall_0x1c6dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F04u; }
        else if (ctx->pc != 0x1E0F04u) { ctx->pc = 0x1E0F04u; }
    }
    if (ctx->pc != 0x1E0F04u) { return; }
    ctx->pc = 0x1E0F04u;
    // 0x1e0f04: 0x7bbf0000
    ctx->pc = 0x1e0f04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0f08: 0x3e00008
    ctx->pc = 0x1E0F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0F10u;
}
