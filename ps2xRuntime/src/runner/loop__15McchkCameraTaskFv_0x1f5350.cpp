#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loop__15McchkCameraTaskFv
// Address: 0x1f5350 - 0x1f5398
void loop__15McchkCameraTaskFv_0x1f5350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loop__15McchkCameraTaskFv");


    ctx->pc = 0x1f5350u;

    // 0x1f5350: 0x27bdfff0
    ctx->pc = 0x1f5350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f5354: 0x7fbf0000
    ctx->pc = 0x1f5354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f5358: 0x8f828c48
    ctx->pc = 0x1f5358u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1f535c: 0xac400090
    ctx->pc = 0x1f535cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x1f5360: 0x8f828c48
    ctx->pc = 0x1f5360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1f5364: 0xac400094
    ctx->pc = 0x1f5364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    // 0x1f5368: 0x8f828c48
    ctx->pc = 0x1f5368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1f536c: 0xac400098
    ctx->pc = 0x1f536cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 0));
    // 0x1f5370: 0x8f828c48
    ctx->pc = 0x1f5370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1f5374: 0xac40009c
    ctx->pc = 0x1f5374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x1f5378: 0x8f828c48
    ctx->pc = 0x1f5378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1f537c: 0xac4000a0
    ctx->pc = 0x1f537cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x1f5380: 0x8f828c48
    ctx->pc = 0x1f5380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1f5384: 0xc072620
    ctx->pc = 0x1F5384u;
    SET_GPR_U32(ctx, 31, 0x1F538Cu);
    ctx->pc = 0x1F5388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
    ctx->pc = 0x1C9880u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcCamera__10CameraTaskFv_0x1c9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F538Cu; }
        else if (ctx->pc != 0x1F538Cu) { ctx->pc = 0x1F538Cu; }
    }
    if (ctx->pc != 0x1F538Cu) { return; }
    ctx->pc = 0x1F538Cu;
    // 0x1f538c: 0x7bbf0000
    ctx->pc = 0x1f538cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5390: 0x3e00008
    ctx->pc = 0x1F5390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5394u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5398u;
}
