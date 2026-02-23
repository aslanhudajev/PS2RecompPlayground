#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: clrColli__25TrnKomonoTumiageColliTaskFv
// Address: 0x21b8f0 - 0x21b904
void clrColli__25TrnKomonoTumiageColliTaskFv_0x21b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("clrColli__25TrnKomonoTumiageColliTaskFv");


    ctx->pc = 0x21b8f0u;

    // 0x21b8f0: 0x8c85000c
    ctx->pc = 0x21b8f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21b8f4: 0x2403fff7
    ctx->pc = 0x21b8f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x21b8f8: 0xa31824
    ctx->pc = 0x21b8f8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21b8fc: 0x3e00008
    ctx->pc = 0x21B8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B900u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B904u;
}
