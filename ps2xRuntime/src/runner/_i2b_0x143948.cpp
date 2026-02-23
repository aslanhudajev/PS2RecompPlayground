#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _i2b
// Address: 0x143948 - 0x143980
void _i2b_0x143948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_i2b");


    ctx->pc = 0x143948u;

    // 0x143948: 0x27bdffe0
    ctx->pc = 0x143948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14394c: 0xffb00000
    ctx->pc = 0x14394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143950: 0xa0802d
    ctx->pc = 0x143950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143954: 0xffbf0010
    ctx->pc = 0x143954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143958: 0xc050d32
    ctx->pc = 0x143958u;
    SET_GPR_U32(ctx, 31, 0x143960u);
    ctx->pc = 0x14395Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1434C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1434c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143960u; }
        else if (ctx->pc != 0x143960u) { ctx->pc = 0x143960u; }
    }
    if (ctx->pc != 0x143960u) { return; }
    ctx->pc = 0x143960u;
    // 0x143960: 0x40182d
    ctx->pc = 0x143960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143964: 0x24040001
    ctx->pc = 0x143964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x143968: 0xac700014
    ctx->pc = 0x143968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x14396c: 0xdfbf0010
    ctx->pc = 0x14396cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143970: 0xdfb00000
    ctx->pc = 0x143970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143974: 0xac640010
    ctx->pc = 0x143974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x143978: 0x3e00008
    ctx->pc = 0x143978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14397Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143980u;
}
