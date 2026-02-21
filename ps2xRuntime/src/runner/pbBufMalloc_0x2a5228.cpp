#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbBufMalloc
// Address: 0x2a5228 - 0x2a5260
void pbBufMalloc_0x2a5228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5228u;

    // 0x2a5228: 0x27bdffe0
    ctx->pc = 0x2a5228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a522c: 0xffbf0010
    ctx->pc = 0x2a522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5230: 0xffb00000
    ctx->pc = 0x2a5230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5234: 0x3c020001
    ctx->pc = 0x2a5234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x2a5238: 0x40802d
    ctx->pc = 0x2a5238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a523c: 0x84800b
    ctx->pc = 0x2a523cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
    // 0x2a5240: 0xc0be97a
    ctx->pc = 0x2A5240u;
    SET_GPR_U32(ctx, 31, 0x2A5248u);
    ctx->pc = 0x2A5244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FA5E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x2fa5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5248u; }
    }
    if (ctx->pc != 0x2A5248u) { return; }
    ctx->pc = 0x2A5248u;
    // 0x2a5248: 0xc0be97a
    ctx->pc = 0x2A5248u;
    SET_GPR_U32(ctx, 31, 0x2A5250u);
    ctx->pc = 0x2A524Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FA5E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x2fa5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5250u; }
    }
    if (ctx->pc != 0x2A5250u) { return; }
    ctx->pc = 0x2A5250u;
    // 0x2a5250: 0xdfbf0010
    ctx->pc = 0x2a5250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5254: 0xdfb00000
    ctx->pc = 0x2a5254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5258: 0x3e00008
    ctx->pc = 0x2A5258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A525Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5260u;
}
