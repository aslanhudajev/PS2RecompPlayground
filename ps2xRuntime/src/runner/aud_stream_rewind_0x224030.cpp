#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_stream_rewind
// Address: 0x224030 - 0x224058
void aud_stream_rewind_0x224030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x224030u;

    // 0x224030: 0x27bdfff0
    ctx->pc = 0x224030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224034: 0xffbf0000
    ctx->pc = 0x224034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224038: 0xc088cb6
    ctx->pc = 0x224038u;
    SET_GPR_U32(ctx, 31, 0x224040u);
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224040u; }
    }
    if (ctx->pc != 0x224040u) { return; }
    ctx->pc = 0x224040u;
    // 0x224040: 0x2404000b
    ctx->pc = 0x224040u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    // 0x224044: 0xc088ce8
    ctx->pc = 0x224044u;
    SET_GPR_U32(ctx, 31, 0x22404Cu);
    ctx->pc = 0x224048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22404Cu; }
    }
    if (ctx->pc != 0x22404Cu) { return; }
    ctx->pc = 0x22404Cu;
    // 0x22404c: 0xdfbf0000
    ctx->pc = 0x22404cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224050: 0x3e00008
    ctx->pc = 0x224050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224054u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224058u;
}
