#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MEM_Copy32
// Address: 0x180628 - 0x180644
void MEM_Copy32_0x180628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MEM_Copy32");


    ctx->pc = 0x180628u;

    // 0x180628: 0x27bdfff0
    ctx->pc = 0x180628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18062c: 0xffbf0000
    ctx->pc = 0x18062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180630: 0xc050c90
    ctx->pc = 0x180630u;
    SET_GPR_U32(ctx, 31, 0x180638u);
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180638u; }
        else if (ctx->pc != 0x180638u) { ctx->pc = 0x180638u; }
    }
    if (ctx->pc != 0x180638u) { return; }
    ctx->pc = 0x180638u;
    // 0x180638: 0xdfbf0000
    ctx->pc = 0x180638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18063c: 0x3e00008
    ctx->pc = 0x18063Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180640u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180644u;
}
