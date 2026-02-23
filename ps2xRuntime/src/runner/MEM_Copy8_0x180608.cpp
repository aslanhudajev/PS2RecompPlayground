#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MEM_Copy8
// Address: 0x180608 - 0x180624
void MEM_Copy8_0x180608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MEM_Copy8");


    ctx->pc = 0x180608u;

    // 0x180608: 0x27bdfff0
    ctx->pc = 0x180608u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18060c: 0xffbf0000
    ctx->pc = 0x18060cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180610: 0xc050c90
    ctx->pc = 0x180610u;
    SET_GPR_U32(ctx, 31, 0x180618u);
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180618u; }
        else if (ctx->pc != 0x180618u) { ctx->pc = 0x180618u; }
    }
    if (ctx->pc != 0x180618u) { return; }
    ctx->pc = 0x180618u;
    // 0x180618: 0xdfbf0000
    ctx->pc = 0x180618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18061c: 0x3e00008
    ctx->pc = 0x18061Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180620u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180624u;
}
