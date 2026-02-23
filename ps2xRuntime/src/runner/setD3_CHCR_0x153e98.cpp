#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setD3_CHCR
// Address: 0x153e98 - 0x153efc
void setD3_CHCR_0x153e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setD3_CHCR");


    ctx->pc = 0x153e98u;

    // 0x153e98: 0x27bdffe0
    ctx->pc = 0x153e98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153e9c: 0xffb00000
    ctx->pc = 0x153e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x153ea0: 0xffbf0010
    ctx->pc = 0x153ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153ea4: 0xc05725c
    ctx->pc = 0x153EA4u;
    SET_GPR_U32(ctx, 31, 0x153EACu);
    ctx->pc = 0x153EA8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153EACu; }
        else if (ctx->pc != 0x153EACu) { ctx->pc = 0x153EACu; }
    }
    if (ctx->pc != 0x153EACu) { return; }
    ctx->pc = 0x153EACu;
    // 0x153eac: 0x3c051000
    ctx->pc = 0x153eacu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x153eb0: 0x3c070001
    ctx->pc = 0x153eb0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x153eb4: 0x34a5f520
    ctx->pc = 0x153eb4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x153eb8: 0x3c061000
    ctx->pc = 0x153eb8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x153ebc: 0x8ca20000
    ctx->pc = 0x153ebcu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x153ec0: 0x34c6f590
    ctx->pc = 0x153ec0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x153ec4: 0x3c031000
    ctx->pc = 0x153ec4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x153ec8: 0x3c04fffe
    ctx->pc = 0x153ec8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x153ecc: 0x471025
    ctx->pc = 0x153eccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x153ed0: 0x3463b000
    ctx->pc = 0x153ed0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x153ed4: 0xacc20000
    ctx->pc = 0x153ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x153ed8: 0x3484ffff
    ctx->pc = 0x153ed8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x153edc: 0xac700000
    ctx->pc = 0x153edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x153ee0: 0xdfbf0010
    ctx->pc = 0x153ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153ee4: 0x8ca20000
    ctx->pc = 0x153ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153ee8: 0xdfb00000
    ctx->pc = 0x153ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153eec: 0x441024
    ctx->pc = 0x153eecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x153ef0: 0xacc20000
    ctx->pc = 0x153ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x153ef4: 0x805726e
    ctx->pc = 0x153EF4u;
    ctx->pc = 0x153EF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15C9B8u;
    EIntr_0x15c9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x153EFCu;
}
