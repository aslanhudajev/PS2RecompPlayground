#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Malloc2__11SystemTask2Fi
// Address: 0x1a3c40 - 0x1a3c84
void Malloc2__11SystemTask2Fi_0x1a3c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Malloc2__11SystemTask2Fi");


    ctx->pc = 0x1a3c40u;

    // 0x1a3c40: 0x27bdffd0
    ctx->pc = 0x1a3c40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3c44: 0x7fbf0020
    ctx->pc = 0x1a3c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a3c48: 0x7fb10010
    ctx->pc = 0x1a3c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3c4c: 0x70808e28
    ctx->pc = 0x1a3c4cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a3c50: 0x70a02628
    ctx->pc = 0x1a3c50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a3c54: 0xc06878c
    ctx->pc = 0x1A3C54u;
    SET_GPR_U32(ctx, 31, 0x1A3C5Cu);
    ctx->pc = 0x1A3C58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C5Cu; }
        else if (ctx->pc != 0x1A3C5Cu) { ctx->pc = 0x1A3C5Cu; }
    }
    if (ctx->pc != 0x1A3C5Cu) { return; }
    ctx->pc = 0x1A3C5Cu;
    // 0x1a3c5c: 0x8e24003c
    ctx->pc = 0x1a3c5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1a3c60: 0x70408628
    ctx->pc = 0x1a3c60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a3c64: 0xc0687b0
    ctx->pc = 0x1A3C64u;
    SET_GPR_U32(ctx, 31, 0x1A3C6Cu);
    ctx->pc = 0x1A3C68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MakeMalloc2List_0x1a1ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C6Cu; }
        else if (ctx->pc != 0x1A3C6Cu) { ctx->pc = 0x1A3C6Cu; }
    }
    if (ctx->pc != 0x1A3C6Cu) { return; }
    ctx->pc = 0x1A3C6Cu;
    // 0x1a3c6c: 0x72001628
    ctx->pc = 0x1a3c6cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a3c70: 0x7bbf0020
    ctx->pc = 0x1a3c70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3c74: 0x7bb10010
    ctx->pc = 0x1a3c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3c78: 0x7bb00000
    ctx->pc = 0x1a3c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3c7c: 0x3e00008
    ctx->pc = 0x1A3C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3C84u;
}
