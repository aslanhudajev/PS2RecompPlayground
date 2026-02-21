#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawText
// Address: 0x201320 - 0x2013b0
void DrawText_0x201320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201320u;

    // 0x201320: 0x27bdff40
    ctx->pc = 0x201320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x201324: 0xffbf0050
    ctx->pc = 0x201324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x201328: 0xffb40040
    ctx->pc = 0x201328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20132c: 0xffb30030
    ctx->pc = 0x20132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x201330: 0xffb20020
    ctx->pc = 0x201330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x201334: 0xffb10010
    ctx->pc = 0x201334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201338: 0xffb00000
    ctx->pc = 0x201338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20133c: 0x80882d
    ctx->pc = 0x20133cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201340: 0xa0902d
    ctx->pc = 0x201340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201344: 0xc0982d
    ctx->pc = 0x201344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201348: 0xe0a02d
    ctx->pc = 0x201348u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20134c: 0xffa900a8
    ctx->pc = 0x20134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x201350: 0xffaa00b0
    ctx->pc = 0x201350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x201354: 0xffab00b8
    ctx->pc = 0x201354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x201358: 0x3c100031
    ctx->pc = 0x201358u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x20135c: 0x2604f2a8
    ctx->pc = 0x20135cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294963880));
    // 0x201360: 0x100282d
    ctx->pc = 0x201360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201364: 0xc0b5d5e
    ctx->pc = 0x201364u;
    SET_GPR_U32(ctx, 31, 0x20136Cu);
    ctx->pc = 0x201368u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 168));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20136Cu; }
    }
    if (ctx->pc != 0x20136Cu) { return; }
    ctx->pc = 0x20136Cu;
    // 0x20136c: 0x220202d
    ctx->pc = 0x20136cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201370: 0x240282d
    ctx->pc = 0x201370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201374: 0x260302d
    ctx->pc = 0x201374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201378: 0x280382d
    ctx->pc = 0x201378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20137c: 0x3c013f80
    ctx->pc = 0x20137cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x201380: 0x44816000
    ctx->pc = 0x201380u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x201384: 0x46006346
    ctx->pc = 0x201384u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x201388: 0xc08041c
    ctx->pc = 0x201388u;
    SET_GPR_U32(ctx, 31, 0x201390u);
    ctx->pc = 0x20138Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 4294963880));
    ctx->pc = 0x201070u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextSub_0x201070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201390u; }
    }
    if (ctx->pc != 0x201390u) { return; }
    ctx->pc = 0x201390u;
    // 0x201390: 0xdfbf0050
    ctx->pc = 0x201390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201394: 0xdfb40040
    ctx->pc = 0x201394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201398: 0xdfb30030
    ctx->pc = 0x201398u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20139c: 0xdfb20020
    ctx->pc = 0x20139cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2013a0: 0xdfb10010
    ctx->pc = 0x2013a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2013a4: 0xdfb00000
    ctx->pc = 0x2013a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2013a8: 0x3e00008
    ctx->pc = 0x2013A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2013ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2013B0u;
}
