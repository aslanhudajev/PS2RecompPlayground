#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PullTriggerNow__Fi
// Address: 0x202620 - 0x20265c
void is_PullTriggerNow__Fi_0x202620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PullTriggerNow__Fi");


    ctx->pc = 0x202620u;

    // 0x202620: 0x41040
    ctx->pc = 0x202620u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x202624: 0x441021
    ctx->pc = 0x202624u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202628: 0x21880
    ctx->pc = 0x202628u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20262c: 0x3c020050
    ctx->pc = 0x20262cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x202630: 0x27bdfff0
    ctx->pc = 0x202630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202634: 0x2442fecc
    ctx->pc = 0x202634u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966988));
    // 0x202638: 0x7fbf0000
    ctx->pc = 0x202638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20263c: 0x431021
    ctx->pc = 0x20263cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202640: 0x94450000
    ctx->pc = 0x202640u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202644: 0x24062000
    ctx->pc = 0x202644u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x202648: 0xc0808d4
    ctx->pc = 0x202648u;
    SET_GPR_U32(ctx, 31, 0x202650u);
    ctx->pc = 0x20264Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x202350u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressButtonNow__FiUiUiUi_0x202350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202650u; }
        else if (ctx->pc != 0x202650u) { ctx->pc = 0x202650u; }
    }
    if (ctx->pc != 0x202650u) { return; }
    ctx->pc = 0x202650u;
    // 0x202650: 0x7bbf0000
    ctx->pc = 0x202650u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202654: 0x3e00008
    ctx->pc = 0x202654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202658u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20265Cu;
}
