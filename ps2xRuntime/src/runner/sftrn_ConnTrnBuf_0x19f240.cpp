#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_ConnTrnBuf
// Address: 0x19f240 - 0x19f26c
void sftrn_ConnTrnBuf_0x19f240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_ConnTrnBuf");


    ctx->pc = 0x19f240u;

    // 0x19f240: 0x240306e0
    ctx->pc = 0x19f240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1760));
    // 0x19f244: 0x24020388
    ctx->pc = 0x19f244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x19f248: 0xa34018
    ctx->pc = 0x19f248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x19f24c: 0x63080
    ctx->pc = 0x19f24cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x19f250: 0x1041821
    ctx->pc = 0x19f250u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x19f254: 0xe24018
    ctx->pc = 0x19f254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x19f258: 0x661821
    ctx->pc = 0x19f258u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19f25c: 0xac673028
    ctx->pc = 0x19f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12328), GPR_U32(ctx, 7));
    // 0x19f260: 0x1041021
    ctx->pc = 0x19f260u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x19f264: 0x3e00008
    ctx->pc = 0x19F264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F268u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4244), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F26Cu;
}
