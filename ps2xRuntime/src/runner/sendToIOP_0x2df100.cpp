#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sendToIOP
// Address: 0x2df100 - 0x2df130
void sendToIOP_0x2df100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df100u;

    // 0x2df100: 0x27bdfff0
    ctx->pc = 0x2df100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df104: 0xa0202d
    ctx->pc = 0x2df104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df108: 0xc0282d
    ctx->pc = 0x2df108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df10c: 0x1ca00003
    ctx->pc = 0x2DF10Cu;
    {
        const bool branch_taken_0x2df10c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2DF110u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x2df10c) {
            ctx->pc = 0x2DF11Cu;
            goto label_2df11c;
        }
    }
    ctx->pc = 0x2DF114u;
    // 0x2df114: 0x10000003
    ctx->pc = 0x2DF114u;
    {
        const bool branch_taken_0x2df114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DF118u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2df114) {
            ctx->pc = 0x2DF124u;
            goto label_2df124;
        }
    }
    ctx->pc = 0x2DF11Cu;
label_2df11c:
    // 0x2df11c: 0xc089046
    ctx->pc = 0x2DF11Cu;
    SET_GPR_U32(ctx, 31, 0x2DF124u);
    ctx->pc = 0x224118u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_stream_put_buffer_0x224118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF124u; }
    }
    if (ctx->pc != 0x2DF124u) { return; }
    ctx->pc = 0x2DF124u;
label_2df124:
    // 0x2df124: 0xdfbf0000
    ctx->pc = 0x2df124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df128: 0x3e00008
    ctx->pc = 0x2DF128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF12Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF11Cu: goto label_2df11c;
            case 0x2DF124u: goto label_2df124;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DF130u;
}
