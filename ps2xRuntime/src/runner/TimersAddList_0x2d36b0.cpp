#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TimersAddList
// Address: 0x2d36b0 - 0x2d36f8
void TimersAddList_0x2d36b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d36b0u;

    // 0x2d36b0: 0x27bdfff0
    ctx->pc = 0x2d36b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d36b4: 0xffbf0000
    ctx->pc = 0x2d36b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d36b8: 0x3c02003a
    ctx->pc = 0x2d36b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d36bc: 0xac4421d0
    ctx->pc = 0x2d36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8656), GPR_U32(ctx, 4));
    // 0x2d36c0: 0x3c02003a
    ctx->pc = 0x2d36c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d36c4: 0xac4521d4
    ctx->pc = 0x2d36c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8660), GPR_U32(ctx, 5));
    // 0x2d36c8: 0x3c02003d
    ctx->pc = 0x2d36c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d36cc: 0xac462ce0
    ctx->pc = 0x2d36ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11488), GPR_U32(ctx, 6));
    // 0x2d36d0: 0x3c02003d
    ctx->pc = 0x2d36d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d36d4: 0xac472ce4
    ctx->pc = 0x2d36d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11492), GPR_U32(ctx, 7));
    // 0x2d36d8: 0xc0b4a76
    ctx->pc = 0x2D36D8u;
    SET_GPR_U32(ctx, 31, 0x2D36E0u);
    ctx->pc = 0x2D36DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D29D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_timersFYB_0x2d29d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D36E0u; }
    }
    if (ctx->pc != 0x2D36E0u) { return; }
    ctx->pc = 0x2D36E0u;
    // 0x2d36e0: 0x3c04003a
    ctx->pc = 0x2d36e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2d36e4: 0x24842050
    ctx->pc = 0x2d36e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8272));
    // 0x2d36e8: 0x24050018
    ctx->pc = 0x2d36e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d36ec: 0xdfbf0000
    ctx->pc = 0x2d36ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d36f0: 0x80b4a76
    ctx->pc = 0x2D36F0u;
    ctx->pc = 0x2D36F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D29D8u;
    init_timersFYB_0x2d29d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2D36F8u;
}
