#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxb_DefGetWr
// Address: 0x167b98 - 0x167bc8
void adxb_DefGetWr_0x167b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxb_DefGetWr");


    ctx->pc = 0x167b98u;

    // 0x167b98: 0x8c88009c
    ctx->pc = 0x167b98u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x167b9c: 0x8c82003c
    ctx->pc = 0x167b9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x167ba0: 0xaca80000
    ctx->pc = 0x167ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x167ba4: 0x8c85009c
    ctx->pc = 0x167ba4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x167ba8: 0x8c830040
    ctx->pc = 0x167ba8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x167bac: 0x651823
    ctx->pc = 0x167bacu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167bb0: 0xacc30000
    ctx->pc = 0x167bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x167bb4: 0x8c850018
    ctx->pc = 0x167bb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x167bb8: 0x8c830098
    ctx->pc = 0x167bb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x167bbc: 0xa32823
    ctx->pc = 0x167bbcu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x167bc0: 0x3e00008
    ctx->pc = 0x167BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167BC4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167BC8u;
}
