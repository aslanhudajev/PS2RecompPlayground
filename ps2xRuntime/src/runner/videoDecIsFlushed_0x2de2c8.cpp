#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecIsFlushed
// Address: 0x2de2c8 - 0x2de310
void videoDecIsFlushed_0x2de2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de2c8u;

    // 0x2de2c8: 0x27bdffd0
    ctx->pc = 0x2de2c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de2cc: 0xffbf0020
    ctx->pc = 0x2de2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2de2d0: 0xffb10010
    ctx->pc = 0x2de2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2de2d4: 0xffb00000
    ctx->pc = 0x2de2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de2d8: 0x80802d
    ctx->pc = 0x2de2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de2dc: 0xc0b7866
    ctx->pc = 0x2DE2DCu;
    SET_GPR_U32(ctx, 31, 0x2DE2E4u);
    ctx->pc = 0x2DE2E0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE198u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecInputCount_0x2de198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE2E4u; }
    }
    if (ctx->pc != 0x2DE2E4u) { return; }
    ctx->pc = 0x2DE2E4u;
    // 0x2de2e4: 0x14400005
    ctx->pc = 0x2DE2E4u;
    {
        const bool branch_taken_0x2de2e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DE2E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2de2e4) {
            ctx->pc = 0x2DE2FCu;
            goto label_2de2fc;
        }
    }
    ctx->pc = 0x2DE2ECu;
    // 0x2de2ec: 0xc0bb7fc
    ctx->pc = 0x2DE2ECu;
    SET_GPR_U32(ctx, 31, 0x2DE2F4u);
    ctx->pc = 0x2DE2F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EDFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegIsRefBuffEmpty_0x2edff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE2F4u; }
    }
    if (ctx->pc != 0x2DE2F4u) { return; }
    ctx->pc = 0x2DE2F4u;
    // 0x2de2f4: 0x2882b
    ctx->pc = 0x2de2f4u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2de2f8: 0x220102d
    ctx->pc = 0x2de2f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2de2fc:
    // 0x2de2fc: 0xdfbf0020
    ctx->pc = 0x2de2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de300: 0xdfb10010
    ctx->pc = 0x2de300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de304: 0xdfb00000
    ctx->pc = 0x2de304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de308: 0x3e00008
    ctx->pc = 0x2DE308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE30Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE2FCu: goto label_2de2fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DE310u;
}
