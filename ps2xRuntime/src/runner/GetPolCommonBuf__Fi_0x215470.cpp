#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetPolCommonBuf__Fi
// Address: 0x215470 - 0x215494
void GetPolCommonBuf__Fi_0x215470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetPolCommonBuf__Fi");


    ctx->pc = 0x215470u;

    // 0x215470: 0x8f828c60
    ctx->pc = 0x215470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x215474: 0x2484000f
    ctx->pc = 0x215474u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15));
    // 0x215478: 0x2403fff0
    ctx->pc = 0x215478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x21547c: 0x832024
    ctx->pc = 0x21547cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x215480: 0x2403fffc
    ctx->pc = 0x215480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x215484: 0x831824
    ctx->pc = 0x215484u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x215488: 0x431821
    ctx->pc = 0x215488u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21548c: 0x3e00008
    ctx->pc = 0x21548Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215490u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215494u;
}
