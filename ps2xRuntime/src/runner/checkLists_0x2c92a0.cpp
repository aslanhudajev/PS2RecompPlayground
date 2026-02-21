#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: checkLists
// Address: 0x2c92a0 - 0x2c92e0
void checkLists_0x2c92a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c92a0u;

    // 0x2c92a0: 0x27bdffe0
    ctx->pc = 0x2c92a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c92a4: 0xffbf0010
    ctx->pc = 0x2c92a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c92a8: 0xffb00000
    ctx->pc = 0x2c92a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c92ac: 0x3c10003a
    ctx->pc = 0x2c92acu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2c92b0: 0x2610aa38
    ctx->pc = 0x2c92b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294945336));
    // 0x2c92b4: 0x200202d
    ctx->pc = 0x2c92b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c92b8: 0x3c05003b
    ctx->pc = 0x2c92b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2c92bc: 0xc0b249a
    ctx->pc = 0x2C92BCu;
    SET_GPR_U32(ctx, 31, 0x2C92C4u);
    ctx->pc = 0x2C92C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29712));
    ctx->pc = 0x2C9268u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkOneList_0x2c9268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92C4u; }
    }
    if (ctx->pc != 0x2C92C4u) { return; }
    ctx->pc = 0x2C92C4u;
    // 0x2c92c4: 0x26040008
    ctx->pc = 0x2c92c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8));
    // 0x2c92c8: 0x3c05003b
    ctx->pc = 0x2c92c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2c92cc: 0x24a57420
    ctx->pc = 0x2c92ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29728));
    // 0x2c92d0: 0xdfbf0010
    ctx->pc = 0x2c92d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c92d4: 0xdfb00000
    ctx->pc = 0x2c92d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c92d8: 0x80b249a
    ctx->pc = 0x2C92D8u;
    ctx->pc = 0x2C92DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2C9268u;
    checkOneList_0x2c9268(rdram, ctx, runtime); return;
    ctx->pc = 0x2C92E0u;
}
