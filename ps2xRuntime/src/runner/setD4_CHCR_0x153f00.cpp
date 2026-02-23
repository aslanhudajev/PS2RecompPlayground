#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setD4_CHCR
// Address: 0x153f00 - 0x153f64
void setD4_CHCR_0x153f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setD4_CHCR");


    ctx->pc = 0x153f00u;

    // 0x153f00: 0x27bdffe0
    ctx->pc = 0x153f00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153f04: 0xffb00000
    ctx->pc = 0x153f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x153f08: 0xffbf0010
    ctx->pc = 0x153f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153f0c: 0xc05725c
    ctx->pc = 0x153F0Cu;
    SET_GPR_U32(ctx, 31, 0x153F14u);
    ctx->pc = 0x153F10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153F14u; }
        else if (ctx->pc != 0x153F14u) { ctx->pc = 0x153F14u; }
    }
    if (ctx->pc != 0x153F14u) { return; }
    ctx->pc = 0x153F14u;
    // 0x153f14: 0x3c051000
    ctx->pc = 0x153f14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x153f18: 0x3c070001
    ctx->pc = 0x153f18u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x153f1c: 0x34a5f520
    ctx->pc = 0x153f1cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x153f20: 0x3c061000
    ctx->pc = 0x153f20u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x153f24: 0x8ca20000
    ctx->pc = 0x153f24u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x153f28: 0x34c6f590
    ctx->pc = 0x153f28u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x153f2c: 0x3c031000
    ctx->pc = 0x153f2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x153f30: 0x3c04fffe
    ctx->pc = 0x153f30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x153f34: 0x471025
    ctx->pc = 0x153f34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x153f38: 0x3463b400
    ctx->pc = 0x153f38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46080));
    // 0x153f3c: 0xacc20000
    ctx->pc = 0x153f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x153f40: 0x3484ffff
    ctx->pc = 0x153f40u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x153f44: 0xac700000
    ctx->pc = 0x153f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x153f48: 0xdfbf0010
    ctx->pc = 0x153f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153f4c: 0x8ca20000
    ctx->pc = 0x153f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153f50: 0xdfb00000
    ctx->pc = 0x153f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153f54: 0x441024
    ctx->pc = 0x153f54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x153f58: 0xacc20000
    ctx->pc = 0x153f58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x153f5c: 0x805726e
    ctx->pc = 0x153F5Cu;
    ctx->pc = 0x153F60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x15C9B8u;
    EIntr_0x15c9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x153F64u;
}
