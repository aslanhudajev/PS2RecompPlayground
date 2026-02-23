#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MEM_Copy
// Address: 0x1805c8 - 0x1805e4
void MEM_Copy_0x1805c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MEM_Copy");


    ctx->pc = 0x1805c8u;

    // 0x1805c8: 0x27bdfff0
    ctx->pc = 0x1805c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1805cc: 0xffbf0000
    ctx->pc = 0x1805ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1805d0: 0xc050c90
    ctx->pc = 0x1805D0u;
    SET_GPR_U32(ctx, 31, 0x1805D8u);
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805D8u; }
        else if (ctx->pc != 0x1805D8u) { ctx->pc = 0x1805D8u; }
    }
    if (ctx->pc != 0x1805D8u) { return; }
    ctx->pc = 0x1805D8u;
    // 0x1805d8: 0xdfbf0000
    ctx->pc = 0x1805d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1805dc: 0x3e00008
    ctx->pc = 0x1805DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1805E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1805E4u;
}
