#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDBPlayerPos
// Address: 0x2a38c0 - 0x2a3914
void pbDBPlayerPos_0x2a38c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a38c0u;

    // 0x2a38c0: 0x27bdffe0
    ctx->pc = 0x2a38c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a38c4: 0xffbf0010
    ctx->pc = 0x2a38c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a38c8: 0xffb00000
    ctx->pc = 0x2a38c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a38cc: 0x80282d
    ctx->pc = 0x2a38ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a38d0: 0x3c100036
    ctx->pc = 0x2a38d0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a38d4: 0x8e04e120
    ctx->pc = 0x2a38d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294959392)));
    // 0x2a38d8: 0x24840030
    ctx->pc = 0x2a38d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x2a38dc: 0x3c060036
    ctx->pc = 0x2a38dcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)54 << 16));
    // 0x2a38e0: 0xc0b956a
    ctx->pc = 0x2A38E0u;
    SET_GPR_U32(ctx, 31, 0x2A38E8u);
    ctx->pc = 0x2A38E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294959408));
    ctx->pc = 0x2E55A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x2e55a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38E8u; }
    }
    if (ctx->pc != 0x2A38E8u) { return; }
    ctx->pc = 0x2A38E8u;
    // 0x2a38e8: 0x8e05e120
    ctx->pc = 0x2a38e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294959392)));
    // 0x2a38ec: 0x24a40010
    ctx->pc = 0x2a38ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 16));
    // 0x2a38f0: 0xc0b958e
    ctx->pc = 0x2A38F0u;
    SET_GPR_U32(ctx, 31, 0x2A38F8u);
    ctx->pc = 0x2A38F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38F8u; }
    }
    if (ctx->pc != 0x2A38F8u) { return; }
    ctx->pc = 0x2A38F8u;
    // 0x2a38f8: 0x8e03e120
    ctx->pc = 0x2a38f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294959392)));
    // 0x2a38fc: 0x24020001
    ctx->pc = 0x2a38fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3900: 0xac620020
    ctx->pc = 0x2a3900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2a3904: 0xdfbf0010
    ctx->pc = 0x2a3904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3908: 0xdfb00000
    ctx->pc = 0x2a3908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a390c: 0x3e00008
    ctx->pc = 0x2A390Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3914u;
}
