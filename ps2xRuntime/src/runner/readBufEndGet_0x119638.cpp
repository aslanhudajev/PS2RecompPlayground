#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readBufEndGet
// Address: 0x119638 - 0x11965c
void readBufEndGet_0x119638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119638u;

    // 0x119638: 0x3c020005
    ctx->pc = 0x119638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x11963c: 0x822021
    ctx->pc = 0x11963cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119640: 0x8c820004
    ctx->pc = 0x119640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x119644: 0x40302d
    ctx->pc = 0x119644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119648: 0xa2182a
    ctx->pc = 0x119648u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x11964c: 0xa3100b
    ctx->pc = 0x11964cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x119650: 0xc23023
    ctx->pc = 0x119650u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x119654: 0x3e00008
    ctx->pc = 0x119654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119658u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11965Cu;
}
