#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ReadCfgGameBuffer__Fv
// Address: 0x1d3880 - 0x1d38f4
void ReadCfgGameBuffer__Fv_0x1d3880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ReadCfgGameBuffer__Fv");


    ctx->pc = 0x1d3880u;

    // 0x1d3880: 0x3c020050
    ctx->pc = 0x1d3880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d3884: 0x2444fc80
    ctx->pc = 0x1d3884u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966400));
    // 0x1d3888: 0x27bdfff0
    ctx->pc = 0x1d3888u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d388c: 0x3c020050
    ctx->pc = 0x1d388cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d3890: 0x7fbf0000
    ctx->pc = 0x1d3890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d3894: 0x2445fefc
    ctx->pc = 0x1d3894u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967036));
    // 0x1d3898: 0xc050c90
    ctx->pc = 0x1D3898u;
    SET_GPR_U32(ctx, 31, 0x1D38A0u);
    ctx->pc = 0x1D389Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 192));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38A0u; }
        else if (ctx->pc != 0x1D38A0u) { ctx->pc = 0x1D38A0u; }
    }
    if (ctx->pc != 0x1D38A0u) { return; }
    ctx->pc = 0x1D38A0u;
    // 0x1d38a0: 0x3c020050
    ctx->pc = 0x1d38a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d38a4: 0x2444fd40
    ctx->pc = 0x1d38a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966592));
    // 0x1d38a8: 0x3c020050
    ctx->pc = 0x1d38a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d38ac: 0x24450034
    ctx->pc = 0x1d38acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 52));
    // 0x1d38b0: 0xc050c90
    ctx->pc = 0x1D38B0u;
    SET_GPR_U32(ctx, 31, 0x1D38B8u);
    ctx->pc = 0x1D38B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 133));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38B8u; }
        else if (ctx->pc != 0x1D38B8u) { ctx->pc = 0x1D38B8u; }
    }
    if (ctx->pc != 0x1D38B8u) { return; }
    ctx->pc = 0x1D38B8u;
    // 0x1d38b8: 0x3c020050
    ctx->pc = 0x1d38b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d38bc: 0x2444fdd0
    ctx->pc = 0x1d38bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966736));
    // 0x1d38c0: 0x3c020050
    ctx->pc = 0x1d38c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d38c4: 0x2445ffbc
    ctx->pc = 0x1d38c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967228));
    // 0x1d38c8: 0xc050c90
    ctx->pc = 0x1D38C8u;
    SET_GPR_U32(ctx, 31, 0x1D38D0u);
    ctx->pc = 0x1D38CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38D0u; }
        else if (ctx->pc != 0x1D38D0u) { ctx->pc = 0x1D38D0u; }
    }
    if (ctx->pc != 0x1D38D0u) { return; }
    ctx->pc = 0x1D38D0u;
    // 0x1d38d0: 0x3c020050
    ctx->pc = 0x1d38d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d38d4: 0x2444fe10
    ctx->pc = 0x1d38d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x1d38d8: 0x3c020050
    ctx->pc = 0x1d38d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d38dc: 0x2445ffce
    ctx->pc = 0x1d38dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967246));
    // 0x1d38e0: 0xc050c90
    ctx->pc = 0x1D38E0u;
    SET_GPR_U32(ctx, 31, 0x1D38E8u);
    ctx->pc = 0x1D38E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 102));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38E8u; }
        else if (ctx->pc != 0x1D38E8u) { ctx->pc = 0x1D38E8u; }
    }
    if (ctx->pc != 0x1D38E8u) { return; }
    ctx->pc = 0x1D38E8u;
    // 0x1d38e8: 0x7bbf0000
    ctx->pc = 0x1d38e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d38ec: 0x3e00008
    ctx->pc = 0x1D38ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D38F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D38F4u;
}
