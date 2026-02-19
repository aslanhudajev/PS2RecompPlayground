#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TransitionBlitShow
// Address: 0x2268c8 - 0x22698c
void TransitionBlitShow_0x2268c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2268c8u;

    // 0x2268c8: 0x27bdffc0
    ctx->pc = 0x2268c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2268cc: 0xffbf0020
    ctx->pc = 0x2268ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2268d0: 0xffb10010
    ctx->pc = 0x2268d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2268d4: 0xffb00000
    ctx->pc = 0x2268d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2268d8: 0x10800005
    ctx->pc = 0x2268D8u;
    {
        const bool branch_taken_0x2268d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2268DCu;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        if (branch_taken_0x2268d8) {
            ctx->pc = 0x2268F0u;
            goto label_2268f0;
        }
    }
    ctx->pc = 0x2268E0u;
    // 0x2268e0: 0x3c0142c8
    ctx->pc = 0x2268e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x2268e4: 0x4481a000
    ctx->pc = 0x2268e4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2268e8: 0x10000005
    ctx->pc = 0x2268E8u;
    {
        const bool branch_taken_0x2268e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2268ECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 384));
        if (branch_taken_0x2268e8) {
            ctx->pc = 0x226900u;
            goto label_226900;
        }
    }
    ctx->pc = 0x2268F0u;
label_2268f0:
    // 0x2268f0: 0x24110140
    ctx->pc = 0x2268f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2268f4: 0x3c01477a
    ctx->pc = 0x2268f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x2268f8: 0x34216400
    ctx->pc = 0x2268f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 25600));
    // 0x2268fc: 0x4481a000
    ctx->pc = 0x2268fcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_226900:
    // 0x226900: 0x3c100032
    ctx->pc = 0x226900u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x226904: 0x8e020890
    ctx->pc = 0x226904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2192)));
    // 0x226908: 0x1440000f
    ctx->pc = 0x226908u;
    {
        const bool branch_taken_0x226908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22690Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2192)));
        if (branch_taken_0x226908) {
            ctx->pc = 0x226948u;
            goto label_226948;
        }
    }
    ctx->pc = 0x226910u;
    // 0x226910: 0x3c04003a
    ctx->pc = 0x226910u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x226914: 0x24846c98
    ctx->pc = 0x226914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27800));
    // 0x226918: 0xc0b1bb4
    ctx->pc = 0x226918u;
    SET_GPR_U32(ctx, 31, 0x226920u);
    ctx->pc = 0x22691Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226920u; }
    }
    if (ctx->pc != 0x226920u) { return; }
    ctx->pc = 0x226920u;
    // 0x226920: 0x202d
    ctx->pc = 0x226920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226924: 0x40282d
    ctx->pc = 0x226924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226928: 0x302d
    ctx->pc = 0x226928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22692c: 0x382d
    ctx->pc = 0x22692cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226930: 0x24080200
    ctx->pc = 0x226930u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x226934: 0xc0b0b54
    ctx->pc = 0x226934u;
    SET_GPR_U32(ctx, 31, 0x22693Cu);
    ctx->pc = 0x226938u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22693Cu; }
    }
    if (ctx->pc != 0x22693Cu) { return; }
    ctx->pc = 0x22693Cu;
    // 0x22693c: 0xae020890
    ctx->pc = 0x22693cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2192), GPR_U32(ctx, 2));
    // 0x226940: 0x3c100032
    ctx->pc = 0x226940u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x226944: 0x8e040890
    ctx->pc = 0x226944u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2192)));
label_226948:
    // 0x226948: 0x282d
    ctx->pc = 0x226948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22694c: 0xc0b0cf6
    ctx->pc = 0x22694Cu;
    SET_GPR_U32(ctx, 31, 0x226954u);
    ctx->pc = 0x226950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226954u; }
    }
    if (ctx->pc != 0x226954u) { return; }
    ctx->pc = 0x226954u;
    // 0x226954: 0x8e040890
    ctx->pc = 0x226954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2192)));
    // 0x226958: 0xc0b0dd6
    ctx->pc = 0x226958u;
    SET_GPR_U32(ctx, 31, 0x226960u);
    ctx->pc = 0x22695Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226960u; }
    }
    if (ctx->pc != 0x226960u) { return; }
    ctx->pc = 0x226960u;
    // 0x226960: 0x8e040890
    ctx->pc = 0x226960u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2192)));
    // 0x226964: 0xc0b0f52
    ctx->pc = 0x226964u;
    SET_GPR_U32(ctx, 31, 0x22696Cu);
    ctx->pc = 0x226968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22696Cu; }
    }
    if (ctx->pc != 0x22696Cu) { return; }
    ctx->pc = 0x22696Cu;
    // 0x22696c: 0x8e040890
    ctx->pc = 0x22696cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2192)));
    // 0x226970: 0x282d
    ctx->pc = 0x226970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226974: 0xdfbf0020
    ctx->pc = 0x226974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226978: 0xdfb10010
    ctx->pc = 0x226978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22697c: 0xdfb00000
    ctx->pc = 0x22697cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226980: 0xc7b40030
    ctx->pc = 0x226980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x226984: 0x80b0ce8
    ctx->pc = 0x226984u;
    ctx->pc = 0x226988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2C33A0u;
    MBBlitSetHide_0x2c33a0(rdram, ctx, runtime); return;
    ctx->pc = 0x22698Cu;
}
