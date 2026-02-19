#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbObjectSpAddr
// Address: 0x2be9e0 - 0x2be9fc
void pbObjectSpAddr_0x2be9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2be9e0u;

    // 0x2be9e0: 0x27bdfff0
    ctx->pc = 0x2be9e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be9e4: 0xffbf0000
    ctx->pc = 0x2be9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be9e8: 0xc0a9508
    ctx->pc = 0x2BE9E8u;
    SET_GPR_U32(ctx, 31, 0x2BE9F0u);
    ctx->pc = 0x2A5420u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPBufMallocObj_0x2a5420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9F0u; }
    }
    if (ctx->pc != 0x2BE9F0u) { return; }
    ctx->pc = 0x2BE9F0u;
    // 0x2be9f0: 0xdfbf0000
    ctx->pc = 0x2be9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be9f4: 0x3e00008
    ctx->pc = 0x2BE9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE9F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE9FCu;
}
