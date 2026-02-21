#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: reset_sel_menu
// Address: 0x286268 - 0x286284
void reset_sel_menu_0x286268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x286268u;

    // 0x286268: 0x3c020035
    ctx->pc = 0x286268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28626c: 0x2442a620
    ctx->pc = 0x28626cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944288));
    // 0x286270: 0x240300e8
    ctx->pc = 0x286270u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 232));
    // 0x286274: 0x832018
    ctx->pc = 0x286274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x286278: 0x441021
    ctx->pc = 0x286278u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28627c: 0x3e00008
    ctx->pc = 0x28627Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286280u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286284u;
}
