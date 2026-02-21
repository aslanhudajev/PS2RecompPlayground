#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbTexAlphaXfer
// Address: 0x2ad718 - 0x2ad734
void pbTexAlphaXfer_0x2ad718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad718u;

    // 0x2ad718: 0x80482d
    ctx->pc = 0x2ad718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad71c: 0xa0502d
    ctx->pc = 0x2ad71cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad720: 0x100202d
    ctx->pc = 0x2ad720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad724: 0xe0282d
    ctx->pc = 0x2ad724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad728: 0x2407001b
    ctx->pc = 0x2ad728u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 27));
    // 0x2ad72c: 0x80ab572
    ctx->pc = 0x2AD72Cu;
    ctx->pc = 0x2AD730u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2AD5C8u;
    TexDmaAppendTexture_0x2ad5c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2AD734u;
}
