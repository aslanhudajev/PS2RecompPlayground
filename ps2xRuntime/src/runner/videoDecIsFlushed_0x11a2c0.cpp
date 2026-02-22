#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecIsFlushed
// Address: 0x11a2c0 - 0x11a308
void videoDecIsFlushed_0x11a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a2c0u;

    // 0x11a2c0: 0x27bdffd0
    ctx->pc = 0x11a2c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a2c4: 0xffb00000
    ctx->pc = 0x11a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a2c8: 0xffb10010
    ctx->pc = 0x11a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a2cc: 0x80802d
    ctx->pc = 0x11a2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2d0: 0xffbf0020
    ctx->pc = 0x11a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a2d4: 0xc046866
    ctx->pc = 0x11A2D4u;
    SET_GPR_U32(ctx, 31, 0x11A2DCu);
    ctx->pc = 0x11A2D8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11A198u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecInputCount_0x11a198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2DCu; }
    }
    if (ctx->pc != 0x11A2DCu) { return; }
    ctx->pc = 0x11A2DCu;
    // 0x11a2dc: 0x14400005
    ctx->pc = 0x11A2DCu;
    {
        const bool branch_taken_0x11a2dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A2E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11a2dc) {
            ctx->pc = 0x11A2F4u;
            goto label_11a2f4;
        }
    }
    ctx->pc = 0x11A2E4u;
    // 0x11a2e4: 0xc047da8
    ctx->pc = 0x11A2E4u;
    SET_GPR_U32(ctx, 31, 0x11A2ECu);
    ctx->pc = 0x11A2E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F6A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegIsRefBuffEmpty_0x11f6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2ECu; }
    }
    if (ctx->pc != 0x11A2ECu) { return; }
    ctx->pc = 0x11A2ECu;
    // 0x11a2ec: 0x2882b
    ctx->pc = 0x11a2ecu;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11a2f0: 0x220102d
    ctx->pc = 0x11a2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a2f4:
    // 0x11a2f4: 0xdfbf0020
    ctx->pc = 0x11a2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a2f8: 0xdfb10010
    ctx->pc = 0x11a2f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a2fc: 0xdfb00000
    ctx->pc = 0x11a2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a300: 0x3e00008
    ctx->pc = 0x11A300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A304u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A2F4u: goto label_11a2f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A308u;
}
