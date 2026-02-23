#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UTY_TmrToSec
// Address: 0x1a0fe0 - 0x1a0ffc
void UTY_TmrToSec_0x1a0fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UTY_TmrToSec");


    ctx->pc = 0x1a0fe0u;

    // 0x1a0fe0: 0x27bdfff0
    ctx->pc = 0x1a0fe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0fe4: 0xffbf0000
    ctx->pc = 0x1a0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0fe8: 0xc052114
    ctx->pc = 0x1A0FE8u;
    SET_GPR_U32(ctx, 31, 0x1A0FF0u);
    ctx->pc = 0x1A0FECu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4500 << 16));
    ctx->pc = 0x148450u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___divdi3_0x148450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FF0u; }
        else if (ctx->pc != 0x1A0FF0u) { ctx->pc = 0x1A0FF0u; }
    }
    if (ctx->pc != 0x1A0FF0u) { return; }
    ctx->pc = 0x1A0FF0u;
    // 0x1a0ff0: 0xdfbf0000
    ctx->pc = 0x1a0ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0ff4: 0x3e00008
    ctx->pc = 0x1A0FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0FF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0FFCu;
}
