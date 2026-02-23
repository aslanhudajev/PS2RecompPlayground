#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: duhandler__3stdFv
// Address: 0x1c75e0 - 0x1c75fc
void duhandler__3stdFv_0x1c75e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("duhandler__3stdFv");


    ctx->pc = 0x1c75e0u;

    // 0x1c75e0: 0x27bdfff0
    ctx->pc = 0x1c75e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c75e4: 0x7fbf0000
    ctx->pc = 0x1c75e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c75e8: 0xc071d80
    ctx->pc = 0x1C75E8u;
    SET_GPR_U32(ctx, 31, 0x1C75F0u);
    ctx->pc = 0x1C7600u;
    {
        const uint32_t __entryPc = ctx->pc;
        terminate__3stdFv_0x1c7600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75F0u; }
        else if (ctx->pc != 0x1C75F0u) { ctx->pc = 0x1C75F0u; }
    }
    if (ctx->pc != 0x1C75F0u) { return; }
    ctx->pc = 0x1C75F0u;
    // 0x1c75f0: 0x7bbf0000
    ctx->pc = 0x1c75f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c75f4: 0x3e00008
    ctx->pc = 0x1C75F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C75F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C75FCu;
}
