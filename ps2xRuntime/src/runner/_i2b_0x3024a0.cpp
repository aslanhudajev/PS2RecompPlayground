#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _i2b
// Address: 0x3024a0 - 0x3024d8
void _i2b_0x3024a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3024a0u;

    // 0x3024a0: 0x27bdffe0
    ctx->pc = 0x3024a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3024a4: 0xffb00000
    ctx->pc = 0x3024a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3024a8: 0xa0802d
    ctx->pc = 0x3024a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024ac: 0xffbf0010
    ctx->pc = 0x3024acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3024b0: 0xc0c0808
    ctx->pc = 0x3024B0u;
    SET_GPR_U32(ctx, 31, 0x3024B8u);
    ctx->pc = 0x3024B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x302020u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x302020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3024B8u; }
    }
    if (ctx->pc != 0x3024B8u) { return; }
    ctx->pc = 0x3024B8u;
    // 0x3024b8: 0x40182d
    ctx->pc = 0x3024b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024bc: 0x24040001
    ctx->pc = 0x3024bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x3024c0: 0xac700014
    ctx->pc = 0x3024c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x3024c4: 0xdfbf0010
    ctx->pc = 0x3024c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3024c8: 0xdfb00000
    ctx->pc = 0x3024c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3024cc: 0xac640010
    ctx->pc = 0x3024ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x3024d0: 0x3e00008
    ctx->pc = 0x3024D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3024D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3024D8u;
}
