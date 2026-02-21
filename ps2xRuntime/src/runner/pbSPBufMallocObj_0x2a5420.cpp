#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSPBufMallocObj
// Address: 0x2a5420 - 0x2a545c
void pbSPBufMallocObj_0x2a5420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5420u;

    // 0x2a5420: 0x27bdfff0
    ctx->pc = 0x2a5420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5424: 0xffbf0000
    ctx->pc = 0x2a5424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5428: 0x3c020037
    ctx->pc = 0x2a5428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a542c: 0x8c422658
    ctx->pc = 0x2a542cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9816)));
    // 0x2a5430: 0x14400005
    ctx->pc = 0x2A5430u;
    {
        const bool branch_taken_0x2a5430 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a5430) {
            ctx->pc = 0x2A5448u;
            goto label_2a5448;
        }
    }
    ctx->pc = 0x2A5438u;
    // 0x2a5438: 0xc0a94ee
    ctx->pc = 0x2A5438u;
    SET_GPR_U32(ctx, 31, 0x2A5440u);
    ctx->pc = 0x2A53B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPNextBuf_0x2a53b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5440u; }
    }
    if (ctx->pc != 0x2A5440u) { return; }
    ctx->pc = 0x2A5440u;
    // 0x2a5440: 0x10000004
    ctx->pc = 0x2A5440u;
    {
        const bool branch_taken_0x2a5440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A5444u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2a5440) {
            ctx->pc = 0x2A5454u;
            goto label_2a5454;
        }
    }
    ctx->pc = 0x2A5448u;
label_2a5448:
    // 0x2a5448: 0xc0a94d4
    ctx->pc = 0x2A5448u;
    SET_GPR_U32(ctx, 31, 0x2A5450u);
    ctx->pc = 0x2A5350u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPBufMallocSub_0x2a5350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5450u; }
    }
    if (ctx->pc != 0x2A5450u) { return; }
    ctx->pc = 0x2A5450u;
    // 0x2a5450: 0xdfbf0000
    ctx->pc = 0x2a5450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5454:
    // 0x2a5454: 0x3e00008
    ctx->pc = 0x2A5454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5458u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5448u: goto label_2a5448;
            case 0x2A5454u: goto label_2a5454;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A545Cu;
}
