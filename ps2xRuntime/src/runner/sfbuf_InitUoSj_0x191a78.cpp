#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_InitUoSj
// Address: 0x191a78 - 0x191aa4
void sfbuf_InitUoSj_0x191a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_InitUoSj");


    ctx->pc = 0x191a78u;

    // 0x191a78: 0x24020002
    ctx->pc = 0x191a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x191a7c: 0x0
    ctx->pc = 0x191a7cu;
    // NOP
label_191a80:
    // 0x191a80: 0xac800000
    ctx->pc = 0x191a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x191a84: 0x2442ffff
    ctx->pc = 0x191a84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x191a88: 0xac800004
    ctx->pc = 0x191a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x191a8c: 0x24840008
    ctx->pc = 0x191a8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x191a90: 0x0
    ctx->pc = 0x191a90u;
    // NOP
    // 0x191a94: 0x441fffa
    ctx->pc = 0x191A94u;
    {
        const bool branch_taken_0x191a94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x191a94) {
            ctx->pc = 0x191A80u;
            goto label_191a80;
        }
    }
    ctx->pc = 0x191A9Cu;
    // 0x191a9c: 0x3e00008
    ctx->pc = 0x191A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191A80u: goto label_191a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191AA4u;
}
