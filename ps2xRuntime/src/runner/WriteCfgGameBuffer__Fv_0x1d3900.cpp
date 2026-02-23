#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WriteCfgGameBuffer__Fv
// Address: 0x1d3900 - 0x1d3974
void WriteCfgGameBuffer__Fv_0x1d3900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WriteCfgGameBuffer__Fv");


    ctx->pc = 0x1d3900u;

    // 0x1d3900: 0x3c020050
    ctx->pc = 0x1d3900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d3904: 0x2444fefc
    ctx->pc = 0x1d3904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967036));
    // 0x1d3908: 0x27bdfff0
    ctx->pc = 0x1d3908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d390c: 0x3c020050
    ctx->pc = 0x1d390cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d3910: 0x7fbf0000
    ctx->pc = 0x1d3910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d3914: 0x2445fc80
    ctx->pc = 0x1d3914u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294966400));
    // 0x1d3918: 0xc050c90
    ctx->pc = 0x1D3918u;
    SET_GPR_U32(ctx, 31, 0x1D3920u);
    ctx->pc = 0x1D391Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 192));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3920u; }
        else if (ctx->pc != 0x1D3920u) { ctx->pc = 0x1D3920u; }
    }
    if (ctx->pc != 0x1D3920u) { return; }
    ctx->pc = 0x1D3920u;
    // 0x1d3920: 0x3c020050
    ctx->pc = 0x1d3920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d3924: 0x24440034
    ctx->pc = 0x1d3924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 52));
    // 0x1d3928: 0x3c020050
    ctx->pc = 0x1d3928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d392c: 0x2445fd40
    ctx->pc = 0x1d392cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294966592));
    // 0x1d3930: 0xc050c90
    ctx->pc = 0x1D3930u;
    SET_GPR_U32(ctx, 31, 0x1D3938u);
    ctx->pc = 0x1D3934u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 133));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3938u; }
        else if (ctx->pc != 0x1D3938u) { ctx->pc = 0x1D3938u; }
    }
    if (ctx->pc != 0x1D3938u) { return; }
    ctx->pc = 0x1D3938u;
    // 0x1d3938: 0x3c020050
    ctx->pc = 0x1d3938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d393c: 0x2444ffbc
    ctx->pc = 0x1d393cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967228));
    // 0x1d3940: 0x3c020050
    ctx->pc = 0x1d3940u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d3944: 0x2445fdd0
    ctx->pc = 0x1d3944u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294966736));
    // 0x1d3948: 0xc050c90
    ctx->pc = 0x1D3948u;
    SET_GPR_U32(ctx, 31, 0x1D3950u);
    ctx->pc = 0x1D394Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3950u; }
        else if (ctx->pc != 0x1D3950u) { ctx->pc = 0x1D3950u; }
    }
    if (ctx->pc != 0x1D3950u) { return; }
    ctx->pc = 0x1D3950u;
    // 0x1d3950: 0x3c020050
    ctx->pc = 0x1d3950u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d3954: 0x2444ffce
    ctx->pc = 0x1d3954u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967246));
    // 0x1d3958: 0x3c020050
    ctx->pc = 0x1d3958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d395c: 0x2445fe10
    ctx->pc = 0x1d395cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x1d3960: 0xc050c90
    ctx->pc = 0x1D3960u;
    SET_GPR_U32(ctx, 31, 0x1D3968u);
    ctx->pc = 0x1D3964u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 102));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3968u; }
        else if (ctx->pc != 0x1D3968u) { ctx->pc = 0x1D3968u; }
    }
    if (ctx->pc != 0x1D3968u) { return; }
    ctx->pc = 0x1D3968u;
    // 0x1d3968: 0x7bbf0000
    ctx->pc = 0x1d3968u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d396c: 0x3e00008
    ctx->pc = 0x1D396Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3970u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3974u;
}
