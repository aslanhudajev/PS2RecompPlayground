#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_GetDtime
// Address: 0x197d30 - 0x197d48
void sfmpv_GetDtime_0x197d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_GetDtime");


    ctx->pc = 0x197d30u;

    // 0x197d30: 0x24840994
    ctx->pc = 0x197d30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2452));
    // 0x197d34: 0x8c8200ac
    ctx->pc = 0x197d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x197d38: 0xace20000
    ctx->pc = 0x197d38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x197d3c: 0x8c8300a8
    ctx->pc = 0x197d3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x197d40: 0x3e00008
    ctx->pc = 0x197D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197D44u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197D48u;
}
