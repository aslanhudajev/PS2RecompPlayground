#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__12CTrnBoxPointFv
// Address: 0x21b270 - 0x21b29c
void init__12CTrnBoxPointFv_0x21b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__12CTrnBoxPointFv");


    ctx->pc = 0x21b270u;

    // 0x21b270: 0xac800124
    ctx->pc = 0x21b270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
    // 0x21b274: 0xac800018
    ctx->pc = 0x21b274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x21b278: 0xac80001c
    ctx->pc = 0x21b278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x21b27c: 0xac800020
    ctx->pc = 0x21b27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x21b280: 0xac80000c
    ctx->pc = 0x21b280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x21b284: 0xac800010
    ctx->pc = 0x21b284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x21b288: 0xac800014
    ctx->pc = 0x21b288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x21b28c: 0xac800000
    ctx->pc = 0x21b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x21b290: 0xac800004
    ctx->pc = 0x21b290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x21b294: 0x3e00008
    ctx->pc = 0x21B294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B298u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B29Cu;
}
