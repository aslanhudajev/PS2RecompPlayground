#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_DestroySub
// Address: 0x190d98 - 0x190db8
void sfadxt_DestroySub_0x190d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_DestroySub");


    ctx->pc = 0x190d98u;

    // 0x190d98: 0x27bdfff0
    ctx->pc = 0x190d98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190d9c: 0xffbf0000
    ctx->pc = 0x190d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190da0: 0xc05c5d6
    ctx->pc = 0x190DA0u;
    SET_GPR_U32(ctx, 31, 0x190DA8u);
    ctx->pc = 0x171758u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Destroy_0x171758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DA8u; }
        else if (ctx->pc != 0x190DA8u) { ctx->pc = 0x190DA8u; }
    }
    if (ctx->pc != 0x190DA8u) { return; }
    ctx->pc = 0x190DA8u;
    // 0x190da8: 0xdfbf0000
    ctx->pc = 0x190da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190dac: 0x102d
    ctx->pc = 0x190dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190db0: 0x3e00008
    ctx->pc = 0x190DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190DB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190DB8u;
}
