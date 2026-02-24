#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _groupOfPicturesHeader
// Address: 0x1247a0 - 0x124884
void _groupOfPicturesHeader_0x1247a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1247a0u;

    // 0x1247a0: 0x27bdffa0
    ctx->pc = 0x1247a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1247a4: 0x3c020017
    ctx->pc = 0x1247a4u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1247a8: 0x8c4417bc
    ctx->pc = 0x1247a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    // 0x1247ac: 0x3c030017
    ctx->pc = 0x1247acu;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x1247b0: 0xffb40040
    ctx->pc = 0x1247b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1247b4: 0x3c060017
    ctx->pc = 0x1247b4u;
    SET_GPR_S32(ctx, 6, ((uint32_t)23 << 16));
    // 0x1247b8: 0xffb30030
    ctx->pc = 0x1247b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1247bc: 0x3c070017
    ctx->pc = 0x1247bcu;
    SET_GPR_S32(ctx, 7, ((uint32_t)23 << 16));
    // 0x1247c0: 0xffb20020
    ctx->pc = 0x1247c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1247c4: 0x24050001
    ctx->pc = 0x1247c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1247c8: 0xffb10010
    ctx->pc = 0x1247c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1247cc: 0x3c120017
    ctx->pc = 0x1247ccu;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
    // 0x1247d0: 0xffb00000
    ctx->pc = 0x1247d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1247d4: 0x3c110017
    ctx->pc = 0x1247d4u;
    SET_GPR_S32(ctx, 17, ((uint32_t)23 << 16));
    // 0x1247d8: 0xffbf0050
    ctx->pc = 0x1247d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1247dc: 0x3c100017
    ctx->pc = 0x1247dcu;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    // 0x1247e0: 0x8c622134
    ctx->pc = 0x1247e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8500)));
    // 0x1247e4: 0x3c140017
    ctx->pc = 0x1247e4u;
    SET_GPR_S32(ctx, 20, ((uint32_t)23 << 16));
    // 0x1247e8: 0x8c830040
    ctx->pc = 0x1247e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1247ec: 0x3c130017
    ctx->pc = 0x1247ecu;
    SET_GPR_S32(ctx, 19, ((uint32_t)23 << 16));
    // 0x1247f0: 0x24420001
    ctx->pc = 0x1247f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1247f4: 0x24040001
    ctx->pc = 0x1247f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1247f8: 0xac6000e8
    ctx->pc = 0x1247f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 0));
    // 0x1247fc: 0xacc22130
    ctx->pc = 0x1247fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8496), GPR_U32(ctx, 2));
    // 0x124800: 0xc048fdc
    ctx->pc = 0x124800u;
    SET_GPR_U32(ctx, 31, 0x124808u);
    ctx->pc = 0x124804u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8504), GPR_U32(ctx, 5));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124808u; }
    }
    if (ctx->pc != 0x124808u) { return; }
    ctx->pc = 0x124808u;
    // 0x124808: 0xae021a1c
    ctx->pc = 0x124808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6684), GPR_U32(ctx, 2));
    // 0x12480c: 0xc048fdc
    ctx->pc = 0x12480Cu;
    SET_GPR_U32(ctx, 31, 0x124814u);
    ctx->pc = 0x124810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124814u; }
    }
    if (ctx->pc != 0x124814u) { return; }
    ctx->pc = 0x124814u;
    // 0x124814: 0x3c100017
    ctx->pc = 0x124814u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    // 0x124818: 0xae221a20
    ctx->pc = 0x124818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6688), GPR_U32(ctx, 2));
    // 0x12481c: 0xc048fdc
    ctx->pc = 0x12481Cu;
    SET_GPR_U32(ctx, 31, 0x124824u);
    ctx->pc = 0x124820u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124824u; }
    }
    if (ctx->pc != 0x124824u) { return; }
    ctx->pc = 0x124824u;
    // 0x124824: 0x3c110017
    ctx->pc = 0x124824u;
    SET_GPR_S32(ctx, 17, ((uint32_t)23 << 16));
    // 0x124828: 0xae421a24
    ctx->pc = 0x124828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6692), GPR_U32(ctx, 2));
    // 0x12482c: 0xc048fdc
    ctx->pc = 0x12482Cu;
    SET_GPR_U32(ctx, 31, 0x124834u);
    ctx->pc = 0x124830u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124834u; }
    }
    if (ctx->pc != 0x124834u) { return; }
    ctx->pc = 0x124834u;
    // 0x124834: 0xc048fdc
    ctx->pc = 0x124834u;
    SET_GPR_U32(ctx, 31, 0x12483Cu);
    ctx->pc = 0x124838u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12483Cu; }
    }
    if (ctx->pc != 0x12483Cu) { return; }
    ctx->pc = 0x12483Cu;
    // 0x12483c: 0xae821a28
    ctx->pc = 0x12483cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6696), GPR_U32(ctx, 2));
    // 0x124840: 0xc048fdc
    ctx->pc = 0x124840u;
    SET_GPR_U32(ctx, 31, 0x124848u);
    ctx->pc = 0x124844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124848u; }
    }
    if (ctx->pc != 0x124848u) { return; }
    ctx->pc = 0x124848u;
    // 0x124848: 0xae621a2c
    ctx->pc = 0x124848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6700), GPR_U32(ctx, 2));
    // 0x12484c: 0xc048fdc
    ctx->pc = 0x12484Cu;
    SET_GPR_U32(ctx, 31, 0x124854u);
    ctx->pc = 0x124850u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124854u; }
    }
    if (ctx->pc != 0x124854u) { return; }
    ctx->pc = 0x124854u;
    // 0x124854: 0xae221a30
    ctx->pc = 0x124854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6704), GPR_U32(ctx, 2));
    // 0x124858: 0xc048fdc
    ctx->pc = 0x124858u;
    SET_GPR_U32(ctx, 31, 0x124860u);
    ctx->pc = 0x12485Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124860u; }
    }
    if (ctx->pc != 0x124860u) { return; }
    ctx->pc = 0x124860u;
    // 0x124860: 0xae021a34
    ctx->pc = 0x124860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6708), GPR_U32(ctx, 2));
    // 0x124864: 0xdfbf0050
    ctx->pc = 0x124864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x124868: 0xdfb40040
    ctx->pc = 0x124868u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12486c: 0xdfb30030
    ctx->pc = 0x12486cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124870: 0xdfb20020
    ctx->pc = 0x124870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124874: 0xdfb10010
    ctx->pc = 0x124874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124878: 0xdfb00000
    ctx->pc = 0x124878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12487c: 0x80490ea
    ctx->pc = 0x12487Cu;
    ctx->pc = 0x124880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1243A8u;
    _extensionAndUserData_0x1243a8(rdram, ctx, runtime); return;
    ctx->pc = 0x124884u;
}
