#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setD3_CHCR
// Address: 0x1992a8 - 0x19930c
void setD3_CHCR_0x1992a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setD3_CHCR");


    ctx->pc = 0x1992a8u;

    // 0x1992a8: 0x27bdffe0
    ctx->pc = 0x1992a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1992ac: 0xffb00000
    ctx->pc = 0x1992acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1992b0: 0xffbf0010
    ctx->pc = 0x1992b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1992b4: 0xc05725c
    ctx->pc = 0x1992B4u;
    SET_GPR_U32(ctx, 31, 0x1992BCu);
    ctx->pc = 0x1992B8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1992BCu; }
        else if (ctx->pc != 0x1992BCu) { ctx->pc = 0x1992BCu; }
    }
    if (ctx->pc != 0x1992BCu) { return; }
    ctx->pc = 0x1992BCu;
    // 0x1992bc: 0x3c051000
    ctx->pc = 0x1992bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1992c0: 0x3c070001
    ctx->pc = 0x1992c0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x1992c4: 0x34a5f520
    ctx->pc = 0x1992c4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x1992c8: 0x3c061000
    ctx->pc = 0x1992c8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x1992cc: 0x8ca20000
    ctx->pc = 0x1992ccu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x1992d0: 0x34c6f590
    ctx->pc = 0x1992d0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x1992d4: 0x3c031000
    ctx->pc = 0x1992d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1992d8: 0x3c04fffe
    ctx->pc = 0x1992d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x1992dc: 0x471025
    ctx->pc = 0x1992dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1992e0: 0x3463b000
    ctx->pc = 0x1992e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x1992e4: 0xacc20000
    ctx->pc = 0x1992e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1992e8: 0x3484ffff
    ctx->pc = 0x1992e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x1992ec: 0xac700000
    ctx->pc = 0x1992ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1992f0: 0xdfbf0010
    ctx->pc = 0x1992f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1992f4: 0x8ca20000
    ctx->pc = 0x1992f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1992f8: 0xdfb00000
    ctx->pc = 0x1992f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1992fc: 0x441024
    ctx->pc = 0x1992fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x199300: 0xacc20000
    ctx->pc = 0x199300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x199304: 0x805726e
    ctx->pc = 0x199304u;
    ctx->pc = 0x199308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15C9B8u;
    EIntr_0x15c9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x19930Cu;
}
