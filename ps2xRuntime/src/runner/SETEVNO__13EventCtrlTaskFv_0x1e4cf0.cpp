#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SETEVNO__13EventCtrlTaskFv
// Address: 0x1e4cf0 - 0x1e4d48
void SETEVNO__13EventCtrlTaskFv_0x1e4cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SETEVNO__13EventCtrlTaskFv");


    ctx->pc = 0x1e4cf0u;

    // 0x1e4cf0: 0x8c86000c
    ctx->pc = 0x1e4cf0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4cf4: 0x83858ba8
    ctx->pc = 0x1e4cf4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1e4cf8: 0x83838bac
    ctx->pc = 0x1e4cf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937516)));
    // 0x1e4cfc: 0x3c0101fc
    ctx->pc = 0x1e4cfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1e4d00: 0x80c70004
    ctx->pc = 0x1e4d00u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e4d04: 0x52880
    ctx->pc = 0x1e4d04u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e4d08: 0xa10821
    ctx->pc = 0x1e4d08u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x1e4d0c: 0xa3878bb0
    ctx->pc = 0x1e4d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937520), (uint8_t)GPR_U32(ctx, 7));
    // 0x1e4d10: 0x33080
    ctx->pc = 0x1e4d10u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4d14: 0x8c252000
    ctx->pc = 0x1e4d14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 8192)));
    // 0x1e4d18: 0x83838bb0
    ctx->pc = 0x1e4d18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937520)));
    // 0x1e4d1c: 0xa63021
    ctx->pc = 0x1e4d1cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e4d20: 0x32880
    ctx->pc = 0x1e4d20u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4d24: 0x8cc30000
    ctx->pc = 0x1e4d24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e4d28: 0x3c010050
    ctx->pc = 0x1e4d28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e4d2c: 0x651821
    ctx->pc = 0x1e4d2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e4d30: 0x8c630000
    ctx->pc = 0x1e4d30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4d34: 0xac83000c
    ctx->pc = 0x1e4d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1e4d38: 0xa3808bb4
    ctx->pc = 0x1e4d38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937524), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4d3c: 0xa020e4f7
    ctx->pc = 0x1e4d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294960375), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4d40: 0x3e00008
    ctx->pc = 0x1E4D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4D44u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4D48u;
}
