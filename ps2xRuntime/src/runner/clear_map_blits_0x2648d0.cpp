#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: clear_map_blits
// Address: 0x2648d0 - 0x264910
void clear_map_blits_0x2648d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2648d0u;

    // 0x2648d0: 0x202d
    ctx->pc = 0x2648d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2648d4: 0x3c02003c
    ctx->pc = 0x2648d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2648d8: 0x24463320
    ctx->pc = 0x2648d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 13088));
    // 0x2648dc: 0x3c02003c
    ctx->pc = 0x2648dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2648e0: 0x24453330
    ctx->pc = 0x2648e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 13104));
    // 0x2648e4: 0x41080
    ctx->pc = 0x2648e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_2648e8:
    // 0x2648e8: 0x461821
    ctx->pc = 0x2648e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2648ec: 0xac600000
    ctx->pc = 0x2648ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2648f0: 0x451021
    ctx->pc = 0x2648f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2648f4: 0xac400000
    ctx->pc = 0x2648f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2648f8: 0x24840001
    ctx->pc = 0x2648f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2648fc: 0x28820004
    ctx->pc = 0x2648fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x264900: 0x1440fff9
    ctx->pc = 0x264900u;
    {
        const bool branch_taken_0x264900 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x264904u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x264900) {
            ctx->pc = 0x2648E8u;
            goto label_2648e8;
        }
    }
    ctx->pc = 0x264908u;
    // 0x264908: 0x3e00008
    ctx->pc = 0x264908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2648E8u: goto label_2648e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x264910u;
}
