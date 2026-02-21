#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ShowLoading
// Address: 0x2262b8 - 0x2262dc
void ShowLoading_0x2262b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2262b8u;

    // 0x2262b8: 0x3c020032
    ctx->pc = 0x2262b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2262bc: 0x3c030032
    ctx->pc = 0x2262bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2262c0: 0x8c440714
    ctx->pc = 0x2262c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1812)));
    // 0x2262c4: 0x8c650718
    ctx->pc = 0x2262c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 1816)));
    // 0x2262c8: 0x3c013f80
    ctx->pc = 0x2262c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2262cc: 0x44816000
    ctx->pc = 0x2262ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2262d0: 0x3c06003a
    ctx->pc = 0x2262d0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2262d4: 0x8080a9a
    ctx->pc = 0x2262D4u;
    ctx->pc = 0x2262D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 27512));
    ctx->pc = 0x202A68u;
    DrawGlowText_0x202a68(rdram, ctx, runtime); return;
    ctx->pc = 0x2262DCu;
}
