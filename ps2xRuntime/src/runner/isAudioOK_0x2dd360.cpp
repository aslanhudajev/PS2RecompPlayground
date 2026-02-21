#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isAudioOK
// Address: 0x2dd360 - 0x2dd398
void isAudioOK_0x2dd360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dd360u;

    // 0x2dd360: 0x27bdfff0
    ctx->pc = 0x2dd360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dd364: 0xffbf0000
    ctx->pc = 0x2dd364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd368: 0x3c020031
    ctx->pc = 0x2dd368u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2dd36c: 0x8c42f190
    ctx->pc = 0x2dd36cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    // 0x2dd370: 0x14400006
    ctx->pc = 0x2DD370u;
    {
        const bool branch_taken_0x2dd370 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD374u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2dd370) {
            ctx->pc = 0x2DD38Cu;
            goto label_2dd38c;
        }
    }
    ctx->pc = 0x2DD378u;
    // 0x2dd378: 0x3c04003a
    ctx->pc = 0x2dd378u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd37c: 0xc0b7b58
    ctx->pc = 0x2DD37Cu;
    SET_GPR_U32(ctx, 31, 0x2DD384u);
    ctx->pc = 0x2DD380u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11000));
    ctx->pc = 0x2DED60u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecIsPreset_0x2ded60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD384u; }
    }
    if (ctx->pc != 0x2DD384u) { return; }
    ctx->pc = 0x2DD384u;
    // 0x2dd384: 0x10000002
    ctx->pc = 0x2DD384u;
    {
        const bool branch_taken_0x2dd384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD388u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2dd384) {
            ctx->pc = 0x2DD390u;
            goto label_2dd390;
        }
    }
    ctx->pc = 0x2DD38Cu;
label_2dd38c:
    // 0x2dd38c: 0xdfbf0000
    ctx->pc = 0x2dd38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd390:
    // 0x2dd390: 0x3e00008
    ctx->pc = 0x2DD390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD394u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DD38Cu: goto label_2dd38c;
            case 0x2DD390u: goto label_2dd390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DD398u;
}
