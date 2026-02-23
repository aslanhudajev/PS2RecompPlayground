#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MEM_CopySq8
// Address: 0x180688 - 0x1806a4
void MEM_CopySq8_0x180688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MEM_CopySq8");


    ctx->pc = 0x180688u;

    // 0x180688: 0x27bdfff0
    ctx->pc = 0x180688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18068c: 0xffbf0000
    ctx->pc = 0x18068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180690: 0xc060182
    ctx->pc = 0x180690u;
    SET_GPR_U32(ctx, 31, 0x180698u);
    ctx->pc = 0x180608u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy8_0x180608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180698u; }
        else if (ctx->pc != 0x180698u) { ctx->pc = 0x180698u; }
    }
    if (ctx->pc != 0x180698u) { return; }
    ctx->pc = 0x180698u;
    // 0x180698: 0xdfbf0000
    ctx->pc = 0x180698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18069c: 0x3e00008
    ctx->pc = 0x18069Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1806A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1806A4u;
}
