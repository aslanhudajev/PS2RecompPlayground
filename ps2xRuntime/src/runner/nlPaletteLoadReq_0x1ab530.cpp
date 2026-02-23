#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPaletteLoadReq
// Address: 0x1ab530 - 0x1ab554
void nlPaletteLoadReq_0x1ab530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPaletteLoadReq");


    ctx->pc = 0x1ab530u;

    // 0x1ab530: 0x8f858a50
    ctx->pc = 0x1ab530u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937168)));
    // 0x1ab534: 0x41840
    ctx->pc = 0x1ab534u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ab538: 0x641821
    ctx->pc = 0x1ab538u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab53c: 0x31880
    ctx->pc = 0x1ab53cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab540: 0x652021
    ctx->pc = 0x1ab540u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ab544: 0x8483000a
    ctx->pc = 0x1ab544u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1ab548: 0x34630004
    ctx->pc = 0x1ab548u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x1ab54c: 0x3e00008
    ctx->pc = 0x1AB54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB550u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB554u;
}
