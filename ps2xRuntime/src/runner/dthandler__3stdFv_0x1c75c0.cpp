#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dthandler__3stdFv
// Address: 0x1c75c0 - 0x1c75dc
void dthandler__3stdFv_0x1c75c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dthandler__3stdFv");


    ctx->pc = 0x1c75c0u;

    // 0x1c75c0: 0x27bdfff0
    ctx->pc = 0x1c75c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c75c4: 0x7fbf0000
    ctx->pc = 0x1c75c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c75c8: 0xc050034
    ctx->pc = 0x1C75C8u;
    SET_GPR_U32(ctx, 31, 0x1C75D0u);
    ctx->pc = 0x1400D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        abort_0x1400d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75D0u; }
        else if (ctx->pc != 0x1C75D0u) { ctx->pc = 0x1C75D0u; }
    }
    if (ctx->pc != 0x1C75D0u) { return; }
    ctx->pc = 0x1C75D0u;
    // 0x1c75d0: 0x7bbf0000
    ctx->pc = 0x1c75d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c75d4: 0x3e00008
    ctx->pc = 0x1C75D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C75D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C75DCu;
}
