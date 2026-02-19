#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufEndPut
// Address: 0x2df568 - 0x2df5b8
void viBufEndPut_0x2df568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df568u;

    // 0x2df568: 0x27bdffd0
    ctx->pc = 0x2df568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df56c: 0xffbf0020
    ctx->pc = 0x2df56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2df570: 0xffb10010
    ctx->pc = 0x2df570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2df574: 0xffb00000
    ctx->pc = 0x2df574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df578: 0x80802d
    ctx->pc = 0x2df578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df57c: 0xa0882d
    ctx->pc = 0x2df57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df580: 0xc0c0d88
    ctx->pc = 0x2DF580u;
    SET_GPR_U32(ctx, 31, 0x2DF588u);
    ctx->pc = 0x2DF584u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF588u; }
    }
    if (ctx->pc != 0x2DF588u) { return; }
    ctx->pc = 0x2DF588u;
    // 0x2df588: 0x8e020014
    ctx->pc = 0x2df588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2df58c: 0x2221021
    ctx->pc = 0x2df58cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2df590: 0xae020014
    ctx->pc = 0x2df590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2df594: 0xde020048
    ctx->pc = 0x2df594u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2df598: 0x222102d
    ctx->pc = 0x2df598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2df59c: 0xfe020048
    ctx->pc = 0x2df59cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x2df5a0: 0x8e040040
    ctx->pc = 0x2df5a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2df5a4: 0xdfbf0020
    ctx->pc = 0x2df5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df5a8: 0xdfb10010
    ctx->pc = 0x2df5a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df5ac: 0xdfb00000
    ctx->pc = 0x2df5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df5b0: 0x80c0d80
    ctx->pc = 0x2DF5B0u;
    ctx->pc = 0x2DF5B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x303600u;
    SignalSema_0x303600(rdram, ctx, runtime); return;
    ctx->pc = 0x2DF5B8u;
}
