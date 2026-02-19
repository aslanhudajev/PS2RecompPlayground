#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawNormalText
// Address: 0x201298 - 0x20131c
void DrawNormalText_0x201298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201298u;

    // 0x201298: 0x27bdff50
    ctx->pc = 0x201298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20129c: 0xffbf0030
    ctx->pc = 0x20129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2012a0: 0xffb20020
    ctx->pc = 0x2012a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2012a4: 0xffb10010
    ctx->pc = 0x2012a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2012a8: 0xffb00000
    ctx->pc = 0x2012a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2012ac: 0x80802d
    ctx->pc = 0x2012acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012b0: 0xa0902d
    ctx->pc = 0x2012b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012b4: 0xffa70088
    ctx->pc = 0x2012b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x2012b8: 0xffa80090
    ctx->pc = 0x2012b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x2012bc: 0xffa90098
    ctx->pc = 0x2012bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x2012c0: 0xffaa00a0
    ctx->pc = 0x2012c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x2012c4: 0xffab00a8
    ctx->pc = 0x2012c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x2012c8: 0x3c110031
    ctx->pc = 0x2012c8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    // 0x2012cc: 0x2624f2a8
    ctx->pc = 0x2012ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294963880));
    // 0x2012d0: 0xc0282d
    ctx->pc = 0x2012d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012d4: 0xc0b5d5e
    ctx->pc = 0x2012D4u;
    SET_GPR_U32(ctx, 31, 0x2012DCu);
    ctx->pc = 0x2012D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 136));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2012DCu; }
    }
    if (ctx->pc != 0x2012DCu) { return; }
    ctx->pc = 0x2012DCu;
    // 0x2012dc: 0x200202d
    ctx->pc = 0x2012dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012e0: 0x240282d
    ctx->pc = 0x2012e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012e4: 0x24060001
    ctx->pc = 0x2012e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2012e8: 0x3c0700ff
    ctx->pc = 0x2012e8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2012ec: 0x34e7ffff
    ctx->pc = 0x2012ecu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2012f0: 0x3c013f80
    ctx->pc = 0x2012f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2012f4: 0x44816000
    ctx->pc = 0x2012f4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2012f8: 0x46006346
    ctx->pc = 0x2012f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2012fc: 0xc08041c
    ctx->pc = 0x2012FCu;
    SET_GPR_U32(ctx, 31, 0x201304u);
    ctx->pc = 0x201300u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 4294963880));
    ctx->pc = 0x201070u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextSub_0x201070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201304u; }
    }
    if (ctx->pc != 0x201304u) { return; }
    ctx->pc = 0x201304u;
    // 0x201304: 0xdfbf0030
    ctx->pc = 0x201304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201308: 0xdfb20020
    ctx->pc = 0x201308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20130c: 0xdfb10010
    ctx->pc = 0x20130cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201310: 0xdfb00000
    ctx->pc = 0x201310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201314: 0x3e00008
    ctx->pc = 0x201314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201318u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20131Cu;
}
