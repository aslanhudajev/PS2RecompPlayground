#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BGLoadFile
// Address: 0x264208 - 0x264230
void BGLoadFile_0x264208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x264208u;

    // 0x264208: 0x8c830010
    ctx->pc = 0x264208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26420c: 0x24020002
    ctx->pc = 0x26420cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x264210: 0x10620005
    ctx->pc = 0x264210u;
    {
        const bool branch_taken_0x264210 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x264210) {
            ctx->pc = 0x264228u;
            goto label_264228;
        }
    }
    ctx->pc = 0x264218u;
    // 0x264218: 0x8c820004
    ctx->pc = 0x264218u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26421c: 0x8c830008
    ctx->pc = 0x26421cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x264220: 0x431021
    ctx->pc = 0x264220u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264224: 0xac820004
    ctx->pc = 0x264224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_264228:
    // 0x264228: 0x3e00008
    ctx->pc = 0x264228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264228u: goto label_264228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x264230u;
}
