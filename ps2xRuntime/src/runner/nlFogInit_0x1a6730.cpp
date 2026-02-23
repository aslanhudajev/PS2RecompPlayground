#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlFogInit
// Address: 0x1a6730 - 0x1a6834
void nlFogInit_0x1a6730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlFogInit");


    ctx->pc = 0x1a6730u;

    // 0x1a6730: 0x27bdfff0
    ctx->pc = 0x1a6730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6734: 0x7fbf0000
    ctx->pc = 0x1a6734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a6738: 0x3c010030
    ctx->pc = 0x1a6738u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a673c: 0xac203a30
    ctx->pc = 0x1a673cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14896), GPR_U32(ctx, 0));
    // 0x1a6740: 0x3c010030
    ctx->pc = 0x1a6740u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6744: 0xac203a34
    ctx->pc = 0x1a6744u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14900), GPR_U32(ctx, 0));
    // 0x1a6748: 0x3c010030
    ctx->pc = 0x1a6748u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a674c: 0xac203a38
    ctx->pc = 0x1a674cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14904), GPR_U32(ctx, 0));
    // 0x1a6750: 0x3c026c04
    ctx->pc = 0x1a6750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27652 << 16));
    // 0x1a6754: 0x34428000
    ctx->pc = 0x1a6754u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x1a6758: 0x3c010030
    ctx->pc = 0x1a6758u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a675c: 0xac223a3c
    ctx->pc = 0x1a675cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14908), GPR_U32(ctx, 2));
    // 0x1a6760: 0x34028001
    ctx->pc = 0x1a6760u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32769));
    // 0x1a6764: 0x3c010030
    ctx->pc = 0x1a6764u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6768: 0xac223a40
    ctx->pc = 0x1a6768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14912), GPR_U32(ctx, 2));
    // 0x1a676c: 0x3c021000
    ctx->pc = 0x1a676cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1a6770: 0x3c010030
    ctx->pc = 0x1a6770u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6774: 0xac223a44
    ctx->pc = 0x1a6774u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14916), GPR_U32(ctx, 2));
    // 0x1a6778: 0x2403000e
    ctx->pc = 0x1a6778u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a677c: 0x3c010030
    ctx->pc = 0x1a677cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6780: 0xac233a48
    ctx->pc = 0x1a6780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14920), GPR_U32(ctx, 3));
    // 0x1a6784: 0x3c010030
    ctx->pc = 0x1a6784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6788: 0xac203a4c
    ctx->pc = 0x1a6788u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14924), GPR_U32(ctx, 0));
    // 0x1a678c: 0x3c010030
    ctx->pc = 0x1a678cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6790: 0xac203a54
    ctx->pc = 0x1a6790u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14932), GPR_U32(ctx, 0));
    // 0x1a6794: 0x2403003d
    ctx->pc = 0x1a6794u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 61));
    // 0x1a6798: 0x3c010030
    ctx->pc = 0x1a6798u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a679c: 0xac233a58
    ctx->pc = 0x1a679cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14936), GPR_U32(ctx, 3));
    // 0x1a67a0: 0x3c010030
    ctx->pc = 0x1a67a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a67a4: 0xac203a5c
    ctx->pc = 0x1a67a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14940), GPR_U32(ctx, 0));
    // 0x1a67a8: 0x3c031500
    ctx->pc = 0x1a67a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)5376 << 16));
    // 0x1a67ac: 0x3463000a
    ctx->pc = 0x1a67acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 10));
    // 0x1a67b0: 0x3c010030
    ctx->pc = 0x1a67b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a67b4: 0xac233a80
    ctx->pc = 0x1a67b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14976), GPR_U32(ctx, 3));
    // 0x1a67b8: 0x3c010030
    ctx->pc = 0x1a67b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a67bc: 0xac203a84
    ctx->pc = 0x1a67bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14980), GPR_U32(ctx, 0));
    // 0x1a67c0: 0x3c010030
    ctx->pc = 0x1a67c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a67c4: 0xac203a88
    ctx->pc = 0x1a67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14984), GPR_U32(ctx, 0));
    // 0x1a67c8: 0x3c010030
    ctx->pc = 0x1a67c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a67cc: 0xac203a8c
    ctx->pc = 0x1a67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14988), GPR_U32(ctx, 0));
    // 0x1a67d0: 0x34420006
    ctx->pc = 0x1a67d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 6));
    // 0x1a67d4: 0x3c010030
    ctx->pc = 0x1a67d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a67d8: 0xac223a20
    ctx->pc = 0x1a67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14880), GPR_U32(ctx, 2));
    // 0x1a67dc: 0x3c010030
    ctx->pc = 0x1a67dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a67e0: 0xac203a24
    ctx->pc = 0x1a67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14884), GPR_U32(ctx, 0));
    // 0x1a67e4: 0x3c010030
    ctx->pc = 0x1a67e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a67e8: 0xac203a28
    ctx->pc = 0x1a67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14888), GPR_U32(ctx, 0));
    // 0x1a67ec: 0x3c0200ff
    ctx->pc = 0x1a67ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
    // 0x1a67f0: 0x3c010030
    ctx->pc = 0x1a67f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a67f4: 0x3444ffff
    ctx->pc = 0x1a67f4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1a67f8: 0xc06993c
    ctx->pc = 0x1A67F8u;
    SET_GPR_U32(ctx, 31, 0x1A6800u);
    ctx->pc = 0x1A67FCu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14892), GPR_U32(ctx, 0));
    ctx->pc = 0x1A64F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlFogTableColor_0x1a64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6800u; }
        else if (ctx->pc != 0x1A6800u) { ctx->pc = 0x1A6800u; }
    }
    if (ctx->pc != 0x1A6800u) { return; }
    ctx->pc = 0x1A6800u;
    // 0x1a6800: 0x44806000
    ctx->pc = 0x1a6800u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1a6804: 0xc069960
    ctx->pc = 0x1A6804u;
    SET_GPR_U32(ctx, 31, 0x1A680Cu);
    ctx->pc = 0x1A6808u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1A6580u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetFog_0x1a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A680Cu; }
        else if (ctx->pc != 0x1A680Cu) { ctx->pc = 0x1A680Cu; }
    }
    if (ctx->pc != 0x1A680Cu) { return; }
    ctx->pc = 0x1A680Cu;
    // 0x1a680c: 0x44806000
    ctx->pc = 0x1a680cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1a6810: 0x3c020026
    ctx->pc = 0x1a6810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a6814: 0x2444e308
    ctx->pc = 0x1a6814u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294959880));
    // 0x1a6818: 0xc069988
    ctx->pc = 0x1A6818u;
    SET_GPR_U32(ctx, 31, 0x1A6820u);
    ctx->pc = 0x1A681Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1A6620u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetLayerFog_0x1a6620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6820u; }
        else if (ctx->pc != 0x1A6820u) { ctx->pc = 0x1A6820u; }
    }
    if (ctx->pc != 0x1A6820u) { return; }
    ctx->pc = 0x1A6820u;
    // 0x1a6820: 0xc0699a8
    ctx->pc = 0x1A6820u;
    SET_GPR_U32(ctx, 31, 0x1A6828u);
    ctx->pc = 0x1A66A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSendFog_0x1a66a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6828u; }
        else if (ctx->pc != 0x1A6828u) { ctx->pc = 0x1A6828u; }
    }
    if (ctx->pc != 0x1A6828u) { return; }
    ctx->pc = 0x1A6828u;
    // 0x1a6828: 0x7bbf0000
    ctx->pc = 0x1a6828u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a682c: 0x3e00008
    ctx->pc = 0x1A682Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6834u;
}
