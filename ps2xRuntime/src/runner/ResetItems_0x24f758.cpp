#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResetItems
// Address: 0x24f758 - 0x24f818
void ResetItems_0x24f758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24f758u;

    // 0x24f758: 0x27bdfff0
    ctx->pc = 0x24f758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24f75c: 0xffbf0000
    ctx->pc = 0x24f75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f760: 0x3c020038
    ctx->pc = 0x24f760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x24f764: 0x8c44c9a0
    ctx->pc = 0x24f764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953376)));
    // 0x24f768: 0x3c05003a
    ctx->pc = 0x24f768u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x24f76c: 0x24a52550
    ctx->pc = 0x24f76cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x24f770: 0xc0b3ec0
    ctx->pc = 0x24F770u;
    SET_GPR_U32(ctx, 31, 0x24F778u);
    ctx->pc = 0x24F774u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F778u; }
    }
    if (ctx->pc != 0x24F778u) { return; }
    ctx->pc = 0x24F778u;
    // 0x24f778: 0x3c030034
    ctx->pc = 0x24f778u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x24f77c: 0xac62cd9c
    ctx->pc = 0x24f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954396), GPR_U32(ctx, 2));
    // 0x24f780: 0x40202d
    ctx->pc = 0x24f780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f784: 0x24050004
    ctx->pc = 0x24f784u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x24f788: 0xc0b41b8
    ctx->pc = 0x24F788u;
    SET_GPR_U32(ctx, 31, 0x24F790u);
    ctx->pc = 0x24F78Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F790u; }
    }
    if (ctx->pc != 0x24F790u) { return; }
    ctx->pc = 0x24F790u;
    // 0x24f790: 0x3c020034
    ctx->pc = 0x24f790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f794: 0xac40cd94
    ctx->pc = 0x24f794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954388), GPR_U32(ctx, 0));
    // 0x24f798: 0x3c020034
    ctx->pc = 0x24f798u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f79c: 0xac40cd98
    ctx->pc = 0x24f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954392), GPR_U32(ctx, 0));
    // 0x24f7a0: 0x3c020034
    ctx->pc = 0x24f7a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f7a4: 0xac40cdd4
    ctx->pc = 0x24f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954452), GPR_U32(ctx, 0));
    // 0x24f7a8: 0x3c020034
    ctx->pc = 0x24f7a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f7ac: 0xac40cdd8
    ctx->pc = 0x24f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954456), GPR_U32(ctx, 0));
    // 0x24f7b0: 0x3c020034
    ctx->pc = 0x24f7b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f7b4: 0xac40d1b8
    ctx->pc = 0x24f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955448), GPR_U32(ctx, 0));
    // 0x24f7b8: 0x3c020034
    ctx->pc = 0x24f7b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f7bc: 0xac40d1bc
    ctx->pc = 0x24f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955452), GPR_U32(ctx, 0));
    // 0x24f7c0: 0x3c02003c
    ctx->pc = 0x24f7c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x24f7c4: 0xac402aa8
    ctx->pc = 0x24f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10920), GPR_U32(ctx, 0));
    // 0x24f7c8: 0x3c020034
    ctx->pc = 0x24f7c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f7cc: 0x2443d1c0
    ctx->pc = 0x24f7ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294955456));
    // 0x24f7d0: 0xac40d1c0
    ctx->pc = 0x24f7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955456), GPR_U32(ctx, 0));
    // 0x24f7d4: 0xac600004
    ctx->pc = 0x24f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x24f7d8: 0xac600008
    ctx->pc = 0x24f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x24f7dc: 0x3c020034
    ctx->pc = 0x24f7dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f7e0: 0xac40d1cc
    ctx->pc = 0x24f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955468), GPR_U32(ctx, 0));
    // 0x24f7e4: 0x3c020034
    ctx->pc = 0x24f7e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f7e8: 0xac40d1d0
    ctx->pc = 0x24f7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955472), GPR_U32(ctx, 0));
    // 0x24f7ec: 0x3c030034
    ctx->pc = 0x24f7ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x24f7f0: 0x3c02003a
    ctx->pc = 0x24f7f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x24f7f4: 0x8c4222f8
    ctx->pc = 0x24f7f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x24f7f8: 0xac62cddc
    ctx->pc = 0x24f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954460), GPR_U32(ctx, 2));
    // 0x24f7fc: 0x3c020034
    ctx->pc = 0x24f7fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f800: 0xac40cdc0
    ctx->pc = 0x24f800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954432), GPR_U32(ctx, 0));
    // 0x24f804: 0x3c020034
    ctx->pc = 0x24f804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f808: 0xac40cdc4
    ctx->pc = 0x24f808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954436), GPR_U32(ctx, 0));
    // 0x24f80c: 0xdfbf0000
    ctx->pc = 0x24f80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f810: 0x3e00008
    ctx->pc = 0x24F810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F814u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24F818u;
}
