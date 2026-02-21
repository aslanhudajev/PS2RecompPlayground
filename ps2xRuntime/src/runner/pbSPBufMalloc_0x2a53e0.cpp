#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSPBufMalloc
// Address: 0x2a53e0 - 0x2a541c
void pbSPBufMalloc_0x2a53e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a53e0u;

    // 0x2a53e0: 0x27bdfff0
    ctx->pc = 0x2a53e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a53e4: 0xffbf0000
    ctx->pc = 0x2a53e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a53e8: 0x3c020037
    ctx->pc = 0x2a53e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a53ec: 0x8c422658
    ctx->pc = 0x2a53ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9816)));
    // 0x2a53f0: 0x14400005
    ctx->pc = 0x2A53F0u;
    {
        const bool branch_taken_0x2a53f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a53f0) {
            ctx->pc = 0x2A5408u;
            goto label_2a5408;
        }
    }
    ctx->pc = 0x2A53F8u;
    // 0x2a53f8: 0xc0a94ee
    ctx->pc = 0x2A53F8u;
    SET_GPR_U32(ctx, 31, 0x2A5400u);
    ctx->pc = 0x2A53B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPNextBuf_0x2a53b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5400u; }
    }
    if (ctx->pc != 0x2A5400u) { return; }
    ctx->pc = 0x2A5400u;
    // 0x2a5400: 0x10000004
    ctx->pc = 0x2A5400u;
    {
        const bool branch_taken_0x2a5400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A5404u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2a5400) {
            ctx->pc = 0x2A5414u;
            goto label_2a5414;
        }
    }
    ctx->pc = 0x2A5408u;
label_2a5408:
    // 0x2a5408: 0xc0a94d4
    ctx->pc = 0x2A5408u;
    SET_GPR_U32(ctx, 31, 0x2A5410u);
    ctx->pc = 0x2A5350u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPBufMallocSub_0x2a5350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5410u; }
    }
    if (ctx->pc != 0x2A5410u) { return; }
    ctx->pc = 0x2A5410u;
    // 0x2a5410: 0xdfbf0000
    ctx->pc = 0x2a5410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5414:
    // 0x2a5414: 0x3e00008
    ctx->pc = 0x2A5414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5418u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5408u: goto label_2a5408;
            case 0x2A5414u: goto label_2a5414;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A541Cu;
}
