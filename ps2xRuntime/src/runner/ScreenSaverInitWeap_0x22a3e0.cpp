#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScreenSaverInitWeap
// Address: 0x22a3e0 - 0x22a43c
void ScreenSaverInitWeap_0x22a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22a3e0u;

    // 0x22a3e0: 0x27bdffe0
    ctx->pc = 0x22a3e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22a3e4: 0xffbf0010
    ctx->pc = 0x22a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22a3e8: 0xffb00000
    ctx->pc = 0x22a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a3ec: 0xc08a8ac
    ctx->pc = 0x22A3ECu;
    SET_GPR_U32(ctx, 31, 0x22A3F4u);
    ctx->pc = 0x22A3F0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22A2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaverCreateWeap_0x22a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A3F4u; }
    }
    if (ctx->pc != 0x22A3F4u) { return; }
    ctx->pc = 0x22A3F4u;
    // 0x22a3f4: 0xc08a852
    ctx->pc = 0x22A3F4u;
    SET_GPR_U32(ctx, 31, 0x22A3FCu);
    ctx->pc = 0x22A3F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22A148u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaverResetWeap_0x22a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A3FCu; }
    }
    if (ctx->pc != 0x22A3FCu) { return; }
    ctx->pc = 0x22A3FCu;
    // 0x22a3fc: 0xc0b5c24
    ctx->pc = 0x22A3FCu;
    SET_GPR_U32(ctx, 31, 0x22A404u);
    ctx->pc = 0x22A400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A404u; }
    }
    if (ctx->pc != 0x22A404u) { return; }
    ctx->pc = 0x22A404u;
    // 0x22a404: 0x3c03003c
    ctx->pc = 0x22a404u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x22a408: 0x246318c0
    ctx->pc = 0x22a408u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6336));
    // 0x22a40c: 0x24040090
    ctx->pc = 0x22a40cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 144));
    // 0x22a410: 0x2042018
    ctx->pc = 0x22a410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22a414: 0x832021
    ctx->pc = 0x22a414u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22a418: 0x2403001e
    ctx->pc = 0x22a418u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 30));
    // 0x22a41c: 0x2038018
    ctx->pc = 0x22a41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22a420: 0x24420001
    ctx->pc = 0x22a420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a424: 0x2028021
    ctx->pc = 0x22a424u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22a428: 0xac90002c
    ctx->pc = 0x22a428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 16));
    // 0x22a42c: 0xdfbf0010
    ctx->pc = 0x22a42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a430: 0xdfb00000
    ctx->pc = 0x22a430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a434: 0x3e00008
    ctx->pc = 0x22A434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A438u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A43Cu;
}
