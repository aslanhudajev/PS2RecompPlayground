#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UpdateOldVal__FP6SWDATA
// Address: 0x1ef330 - 0x1ef37c
void UpdateOldVal__FP6SWDATA_0x1ef330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UpdateOldVal__FP6SWDATA");


    ctx->pc = 0x1ef330u;

    // 0x1ef330: 0x94830002
    ctx->pc = 0x1ef330u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ef334: 0xa4830004
    ctx->pc = 0x1ef334u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef338: 0x9483000e
    ctx->pc = 0x1ef338u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1ef33c: 0xa4830010
    ctx->pc = 0x1ef33cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef340: 0x94830036
    ctx->pc = 0x1ef340u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x1ef344: 0xa4830038
    ctx->pc = 0x1ef344u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef348: 0x94830042
    ctx->pc = 0x1ef348u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x1ef34c: 0xa4830044
    ctx->pc = 0x1ef34cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef350: 0x9483001c
    ctx->pc = 0x1ef350u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ef354: 0xa483001e
    ctx->pc = 0x1ef354u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef358: 0x94830028
    ctx->pc = 0x1ef358u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1ef35c: 0xa483002a
    ctx->pc = 0x1ef35cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef360: 0x94830050
    ctx->pc = 0x1ef360u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1ef364: 0xa4830052
    ctx->pc = 0x1ef364u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef368: 0x9483005c
    ctx->pc = 0x1ef368u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1ef36c: 0xa483005e
    ctx->pc = 0x1ef36cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef370: 0x94830068
    ctx->pc = 0x1ef370u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1ef374: 0x3e00008
    ctx->pc = 0x1EF374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF378u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF37Cu;
}
