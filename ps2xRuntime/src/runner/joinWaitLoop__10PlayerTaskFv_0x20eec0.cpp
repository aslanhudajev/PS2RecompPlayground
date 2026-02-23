#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: joinWaitLoop__10PlayerTaskFv
// Address: 0x20eec0 - 0x20eedc
void joinWaitLoop__10PlayerTaskFv_0x20eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("joinWaitLoop__10PlayerTaskFv");


    ctx->pc = 0x20eec0u;

    // 0x20eec0: 0x27bdfff0
    ctx->pc = 0x20eec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20eec4: 0x7fbf0000
    ctx->pc = 0x20eec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20eec8: 0xc083bb8
    ctx->pc = 0x20EEC8u;
    SET_GPR_U32(ctx, 31, 0x20EED0u);
    ctx->pc = 0x20EEE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        joinWaitLoop_main__10PlayerTaskFv_0x20eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EED0u; }
        else if (ctx->pc != 0x20EED0u) { ctx->pc = 0x20EED0u; }
    }
    if (ctx->pc != 0x20EED0u) { return; }
    ctx->pc = 0x20EED0u;
    // 0x20eed0: 0x7bbf0000
    ctx->pc = 0x20eed0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20eed4: 0x3e00008
    ctx->pc = 0x20EED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EED8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20EEDCu;
}
