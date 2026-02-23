#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: AddPlayerHitNum__Fi
// Address: 0x213520 - 0x213568
void AddPlayerHitNum__Fi_0x213520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AddPlayerHitNum__Fi");


    ctx->pc = 0x213520u;

    // 0x213520: 0x41900
    ctx->pc = 0x213520u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x213524: 0x642023
    ctx->pc = 0x213524u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213528: 0x418c0
    ctx->pc = 0x213528u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x21352c: 0x641823
    ctx->pc = 0x21352cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213530: 0x320c0
    ctx->pc = 0x213530u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 3));
    // 0x213534: 0x3c030050
    ctx->pc = 0x213534u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x213538: 0x2463dd88
    ctx->pc = 0x213538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958472));
    // 0x21353c: 0x643021
    ctx->pc = 0x21353cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213540: 0x8cc50000
    ctx->pc = 0x213540u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213544: 0x3c030050
    ctx->pc = 0x213544u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x213548: 0x2463dd90
    ctx->pc = 0x213548u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958480));
    // 0x21354c: 0x642021
    ctx->pc = 0x21354cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213550: 0x24a30001
    ctx->pc = 0x213550u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x213554: 0xacc30000
    ctx->pc = 0x213554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x213558: 0x8c830000
    ctx->pc = 0x213558u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21355c: 0x24630001
    ctx->pc = 0x21355cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x213560: 0x3e00008
    ctx->pc = 0x213560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213564u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x213568u;
}
