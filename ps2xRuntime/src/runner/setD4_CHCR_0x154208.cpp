#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setD4_CHCR
// Address: 0x154208 - 0x15426c
void setD4_CHCR_0x154208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setD4_CHCR");


    ctx->pc = 0x154208u;

    // 0x154208: 0x27bdffe0
    ctx->pc = 0x154208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15420c: 0xffb00000
    ctx->pc = 0x15420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x154210: 0xffbf0010
    ctx->pc = 0x154210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x154214: 0xc05725c
    ctx->pc = 0x154214u;
    SET_GPR_U32(ctx, 31, 0x15421Cu);
    ctx->pc = 0x154218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15421Cu; }
        else if (ctx->pc != 0x15421Cu) { ctx->pc = 0x15421Cu; }
    }
    if (ctx->pc != 0x15421Cu) { return; }
    ctx->pc = 0x15421Cu;
    // 0x15421c: 0x3c051000
    ctx->pc = 0x15421cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x154220: 0x3c070001
    ctx->pc = 0x154220u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x154224: 0x34a5f520
    ctx->pc = 0x154224u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x154228: 0x3c061000
    ctx->pc = 0x154228u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x15422c: 0x8ca20000
    ctx->pc = 0x15422cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x154230: 0x34c6f590
    ctx->pc = 0x154230u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x154234: 0x3c031000
    ctx->pc = 0x154234u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x154238: 0x3c04fffe
    ctx->pc = 0x154238u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x15423c: 0x471025
    ctx->pc = 0x15423cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x154240: 0x3463b400
    ctx->pc = 0x154240u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46080));
    // 0x154244: 0xacc20000
    ctx->pc = 0x154244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x154248: 0x3484ffff
    ctx->pc = 0x154248u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x15424c: 0xac700000
    ctx->pc = 0x15424cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x154250: 0xdfbf0010
    ctx->pc = 0x154250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154254: 0x8ca20000
    ctx->pc = 0x154254u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x154258: 0xdfb00000
    ctx->pc = 0x154258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15425c: 0x441024
    ctx->pc = 0x15425cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x154260: 0xacc20000
    ctx->pc = 0x154260u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x154264: 0x805726e
    ctx->pc = 0x154264u;
    ctx->pc = 0x154268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15C9B8u;
    EIntr_0x15c9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x15426Cu;
}
