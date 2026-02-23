#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setD4_CHCR
// Address: 0x199310 - 0x199374
void setD4_CHCR_0x199310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setD4_CHCR");


    ctx->pc = 0x199310u;

    // 0x199310: 0x27bdffe0
    ctx->pc = 0x199310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199314: 0xffb00000
    ctx->pc = 0x199314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199318: 0xffbf0010
    ctx->pc = 0x199318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19931c: 0xc05725c
    ctx->pc = 0x19931Cu;
    SET_GPR_U32(ctx, 31, 0x199324u);
    ctx->pc = 0x199320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199324u; }
        else if (ctx->pc != 0x199324u) { ctx->pc = 0x199324u; }
    }
    if (ctx->pc != 0x199324u) { return; }
    ctx->pc = 0x199324u;
    // 0x199324: 0x3c051000
    ctx->pc = 0x199324u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x199328: 0x3c070001
    ctx->pc = 0x199328u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x19932c: 0x34a5f520
    ctx->pc = 0x19932cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x199330: 0x3c061000
    ctx->pc = 0x199330u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x199334: 0x8ca20000
    ctx->pc = 0x199334u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x199338: 0x34c6f590
    ctx->pc = 0x199338u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x19933c: 0x3c031000
    ctx->pc = 0x19933cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x199340: 0x3c04fffe
    ctx->pc = 0x199340u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x199344: 0x471025
    ctx->pc = 0x199344u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x199348: 0x3463b400
    ctx->pc = 0x199348u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46080));
    // 0x19934c: 0xacc20000
    ctx->pc = 0x19934cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x199350: 0x3484ffff
    ctx->pc = 0x199350u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x199354: 0xac700000
    ctx->pc = 0x199354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x199358: 0xdfbf0010
    ctx->pc = 0x199358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19935c: 0x8ca20000
    ctx->pc = 0x19935cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x199360: 0xdfb00000
    ctx->pc = 0x199360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199364: 0x441024
    ctx->pc = 0x199364u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x199368: 0xacc20000
    ctx->pc = 0x199368u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x19936c: 0x805726e
    ctx->pc = 0x19936Cu;
    ctx->pc = 0x199370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15C9B8u;
    EIntr_0x15c9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x199374u;
}
