#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDmaInitMFifo
// Address: 0x1a52c0 - 0x1a52f0
void nlDmaInitMFifo_0x1a52c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDmaInitMFifo");


    ctx->pc = 0x1a52c0u;

    // 0x1a52c0: 0xaf8689c0
    ctx->pc = 0x1a52c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937024), GPR_U32(ctx, 6));
    // 0x1a52c4: 0xaf8789b8
    ctx->pc = 0x1a52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937016), GPR_U32(ctx, 7));
    // 0x1a52c8: 0xaf8489c4
    ctx->pc = 0x1a52c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937028), GPR_U32(ctx, 4));
    // 0x1a52cc: 0xaf8589bc
    ctx->pc = 0x1a52ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937020), GPR_U32(ctx, 5));
    // 0x1a52d0: 0xaf8089b4
    ctx->pc = 0x1a52d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937012), GPR_U32(ctx, 0));
    // 0x1a52d4: 0xaf8089b0
    ctx->pc = 0x1a52d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937008), GPR_U32(ctx, 0));
    // 0x1a52d8: 0x3c011001
    ctx->pc = 0x1a52d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a52dc: 0xac24e050
    ctx->pc = 0x1a52dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959184), GPR_U32(ctx, 4)); // MMIO: 0x1000e050
    // 0x1a52e0: 0x24a3fff0
    ctx->pc = 0x1a52e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x1a52e4: 0x3c011001
    ctx->pc = 0x1a52e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a52e8: 0x3e00008
    ctx->pc = 0x1A52E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52ECu;
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959168), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A52F0u;
}
