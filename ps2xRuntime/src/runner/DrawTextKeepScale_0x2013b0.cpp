#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawTextKeepScale
// Address: 0x2013b0 - 0x20143c
void DrawTextKeepScale_0x2013b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2013b0u;

    // 0x2013b0: 0x27bdff40
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2013b4: 0xffbf0050
    ctx->pc = 0x2013b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2013b8: 0xffb40040
    ctx->pc = 0x2013b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2013bc: 0xffb30030
    ctx->pc = 0x2013bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2013c0: 0xffb20020
    ctx->pc = 0x2013c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2013c4: 0xffb10010
    ctx->pc = 0x2013c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2013c8: 0xffb00000
    ctx->pc = 0x2013c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2013cc: 0x80882d
    ctx->pc = 0x2013ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013d0: 0xa0902d
    ctx->pc = 0x2013d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013d4: 0xc0982d
    ctx->pc = 0x2013d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013d8: 0xe0a02d
    ctx->pc = 0x2013d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013dc: 0xffa900a8
    ctx->pc = 0x2013dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x2013e0: 0xffaa00b0
    ctx->pc = 0x2013e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x2013e4: 0xffab00b8
    ctx->pc = 0x2013e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x2013e8: 0x3c100031
    ctx->pc = 0x2013e8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x2013ec: 0x2604f2a8
    ctx->pc = 0x2013ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294963880));
    // 0x2013f0: 0x100282d
    ctx->pc = 0x2013f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013f4: 0xc0b5d5e
    ctx->pc = 0x2013F4u;
    SET_GPR_U32(ctx, 31, 0x2013FCu);
    ctx->pc = 0x2013F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 168));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2013FCu; }
    }
    if (ctx->pc != 0x2013FCu) { return; }
    ctx->pc = 0x2013FCu;
    // 0x2013fc: 0x220202d
    ctx->pc = 0x2013fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201400: 0x240282d
    ctx->pc = 0x201400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201404: 0x260302d
    ctx->pc = 0x201404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201408: 0x280382d
    ctx->pc = 0x201408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20140c: 0x44806000
    ctx->pc = 0x20140cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x201410: 0x46006346
    ctx->pc = 0x201410u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x201414: 0xc08041c
    ctx->pc = 0x201414u;
    SET_GPR_U32(ctx, 31, 0x20141Cu);
    ctx->pc = 0x201418u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 4294963880));
    ctx->pc = 0x201070u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextSub_0x201070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20141Cu; }
    }
    if (ctx->pc != 0x20141Cu) { return; }
    ctx->pc = 0x20141Cu;
    // 0x20141c: 0xdfbf0050
    ctx->pc = 0x20141cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201420: 0xdfb40040
    ctx->pc = 0x201420u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201424: 0xdfb30030
    ctx->pc = 0x201424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201428: 0xdfb20020
    ctx->pc = 0x201428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20142c: 0xdfb10010
    ctx->pc = 0x20142cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201430: 0xdfb00000
    ctx->pc = 0x201430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201434: 0x3e00008
    ctx->pc = 0x201434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201438u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20143Cu;
}
