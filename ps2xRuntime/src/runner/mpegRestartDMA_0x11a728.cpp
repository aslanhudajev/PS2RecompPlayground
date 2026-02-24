#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegRestartDMA
// Address: 0x11a728 - 0x11a74c
void mpegRestartDMA_0x11a728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a728u;

    // 0x11a728: 0x27bdfff0
    ctx->pc = 0x11a728u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a72c: 0x3c040075
    ctx->pc = 0x11a72cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11a730: 0xffbf0000
    ctx->pc = 0x11a730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a734: 0xc0471ba
    ctx->pc = 0x11A734u;
    SET_GPR_U32(ctx, 31, 0x11A73Cu);
    ctx->pc = 0x11A738u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960656));
    ctx->pc = 0x11C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufRestartDMA_0x11c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A73Cu; }
    }
    if (ctx->pc != 0x11A73Cu) { return; }
    ctx->pc = 0x11A73Cu;
    // 0x11a73c: 0xdfbf0000
    ctx->pc = 0x11a73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a740: 0x24020001
    ctx->pc = 0x11a740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a744: 0x3e00008
    ctx->pc = 0x11A744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A748u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A74Cu;
}
