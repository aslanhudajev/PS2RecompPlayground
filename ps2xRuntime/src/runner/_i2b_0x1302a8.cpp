#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _i2b
// Address: 0x1302a8 - 0x1302e0
void _i2b_0x1302a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1302a8u;

    // 0x1302a8: 0x27bdffe0
    ctx->pc = 0x1302a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1302ac: 0xffb00000
    ctx->pc = 0x1302acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1302b0: 0xa0802d
    ctx->pc = 0x1302b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302b4: 0xffbf0010
    ctx->pc = 0x1302b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1302b8: 0xc04bf8a
    ctx->pc = 0x1302B8u;
    SET_GPR_U32(ctx, 31, 0x1302C0u);
    ctx->pc = 0x1302BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x12FE28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1302C0u; }
    }
    if (ctx->pc != 0x1302C0u) { return; }
    ctx->pc = 0x1302C0u;
    // 0x1302c0: 0x40182d
    ctx->pc = 0x1302c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302c4: 0x24040001
    ctx->pc = 0x1302c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1302c8: 0xac700014
    ctx->pc = 0x1302c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x1302cc: 0xdfbf0010
    ctx->pc = 0x1302ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1302d0: 0xdfb00000
    ctx->pc = 0x1302d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1302d4: 0xac640010
    ctx->pc = 0x1302d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1302d8: 0x3e00008
    ctx->pc = 0x1302D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1302E0u;
}
