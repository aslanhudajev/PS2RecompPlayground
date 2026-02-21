#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegTS
// Address: 0x2de690 - 0x2de6d4
void mpegTS_0x2de690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de690u;

    // 0x2de690: 0x27bdffc0
    ctx->pc = 0x2de690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2de694: 0xffbf0030
    ctx->pc = 0x2de694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2de698: 0xffb00020
    ctx->pc = 0x2de698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2de69c: 0xa0802d
    ctx->pc = 0x2de69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de6a0: 0x3c04003a
    ctx->pc = 0x2de6a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2de6a4: 0x24842a88
    ctx->pc = 0x2de6a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10888));
    // 0x2de6a8: 0xc0b8000
    ctx->pc = 0x2DE6A8u;
    SET_GPR_U32(ctx, 31, 0x2DE6B0u);
    ctx->pc = 0x2DE6ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0000u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufGetTs_0x2e0000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE6B0u; }
    }
    if (ctx->pc != 0x2DE6B0u) { return; }
    ctx->pc = 0x2DE6B0u;
    // 0x2de6b0: 0xdfa20000
    ctx->pc = 0x2de6b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de6b4: 0xfe020008
    ctx->pc = 0x2de6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2de6b8: 0xdfa20008
    ctx->pc = 0x2de6b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de6bc: 0xfe020010
    ctx->pc = 0x2de6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2de6c0: 0x24020001
    ctx->pc = 0x2de6c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de6c4: 0xdfbf0030
    ctx->pc = 0x2de6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de6c8: 0xdfb00020
    ctx->pc = 0x2de6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de6cc: 0x3e00008
    ctx->pc = 0x2DE6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE6D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE6D4u;
}
