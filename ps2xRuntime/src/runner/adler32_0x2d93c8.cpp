#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: adler32
// Address: 0x2d93c8 - 0x2d9564
void adler32_0x2d93c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d93c8u;

    // 0x2d93c8: 0x27bdffb0
    ctx->pc = 0x2d93c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d93cc: 0xffbf0040
    ctx->pc = 0x2d93ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d93d0: 0xffb30030
    ctx->pc = 0x2d93d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d93d4: 0xffb20020
    ctx->pc = 0x2d93d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d93d8: 0xffb10010
    ctx->pc = 0x2d93d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d93dc: 0xffb00000
    ctx->pc = 0x2d93dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d93e0: 0xa0902d
    ctx->pc = 0x2d93e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93e4: 0xc0982d
    ctx->pc = 0x2d93e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93e8: 0x3090ffff
    ctx->pc = 0x2d93e8u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 4), 65535));
    // 0x2d93ec: 0x42402
    ctx->pc = 0x2d93ecu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 16));
    // 0x2d93f0: 0x16400003
    ctx->pc = 0x2D93F0u;
    {
        const bool branch_taken_0x2d93f0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D93F4u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 4), 65535));
        if (branch_taken_0x2d93f0) {
            ctx->pc = 0x2D9400u;
            goto label_2d9400;
        }
    }
    ctx->pc = 0x2D93F8u;
    // 0x2d93f8: 0x10000053
    ctx->pc = 0x2D93F8u;
    {
        const bool branch_taken_0x2d93f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D93FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2d93f8) {
            ctx->pc = 0x2D9548u;
            goto label_2d9548;
        }
    }
    ctx->pc = 0x2D9400u;
label_2d9400:
    // 0x2d9400: 0x1260004e
    ctx->pc = 0x2D9400u;
    {
        const bool branch_taken_0x2d9400 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9404u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 16);
        if (branch_taken_0x2d9400) {
            ctx->pc = 0x2D953Cu;
            goto label_2d953c;
        }
    }
    ctx->pc = 0x2D9408u;
label_2d9408:
    // 0x2d9408: 0x2e6215b1
    ctx->pc = 0x2d9408u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 5553));
    // 0x2d940c: 0x240315b0
    ctx->pc = 0x2d940cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5552));
    // 0x2d9410: 0x262180b
    ctx->pc = 0x2d9410u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 19));
    // 0x2d9414: 0x28620010
    ctx->pc = 0x2d9414u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x2d9418: 0x14400035
    ctx->pc = 0x2D9418u;
    {
        const bool branch_taken_0x2d9418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D941Cu;
        SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        if (branch_taken_0x2d9418) {
            ctx->pc = 0x2D94F0u;
            goto label_2d94f0;
        }
    }
    ctx->pc = 0x2D9420u;
label_2d9420:
    // 0x2d9420: 0x92420000
    ctx->pc = 0x2d9420u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9424: 0x202802d
    ctx->pc = 0x2d9424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d9428: 0x230882d
    ctx->pc = 0x2d9428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d942c: 0x92420001
    ctx->pc = 0x2d942cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2d9430: 0x202802d
    ctx->pc = 0x2d9430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d9434: 0x230882d
    ctx->pc = 0x2d9434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d9438: 0x92420002
    ctx->pc = 0x2d9438u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2d943c: 0x202802d
    ctx->pc = 0x2d943cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d9440: 0x230882d
    ctx->pc = 0x2d9440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d9444: 0x92420003
    ctx->pc = 0x2d9444u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2d9448: 0x202802d
    ctx->pc = 0x2d9448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d944c: 0x230882d
    ctx->pc = 0x2d944cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d9450: 0x92420004
    ctx->pc = 0x2d9450u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d9454: 0x202802d
    ctx->pc = 0x2d9454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d9458: 0x230882d
    ctx->pc = 0x2d9458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d945c: 0x92420005
    ctx->pc = 0x2d945cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x2d9460: 0x202802d
    ctx->pc = 0x2d9460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d9464: 0x230882d
    ctx->pc = 0x2d9464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d9468: 0x92420006
    ctx->pc = 0x2d9468u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2d946c: 0x202802d
    ctx->pc = 0x2d946cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d9470: 0x230882d
    ctx->pc = 0x2d9470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d9474: 0x92420007
    ctx->pc = 0x2d9474u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x2d9478: 0x202802d
    ctx->pc = 0x2d9478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d947c: 0x230882d
    ctx->pc = 0x2d947cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d9480: 0x92420008
    ctx->pc = 0x2d9480u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d9484: 0x202802d
    ctx->pc = 0x2d9484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d9488: 0x230882d
    ctx->pc = 0x2d9488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d948c: 0x92420009
    ctx->pc = 0x2d948cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x2d9490: 0x202802d
    ctx->pc = 0x2d9490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d9494: 0x230882d
    ctx->pc = 0x2d9494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d9498: 0x9242000a
    ctx->pc = 0x2d9498u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2d949c: 0x202802d
    ctx->pc = 0x2d949cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d94a0: 0x230882d
    ctx->pc = 0x2d94a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d94a4: 0x9242000b
    ctx->pc = 0x2d94a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x2d94a8: 0x202802d
    ctx->pc = 0x2d94a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d94ac: 0x230882d
    ctx->pc = 0x2d94acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d94b0: 0x9242000c
    ctx->pc = 0x2d94b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2d94b4: 0x202802d
    ctx->pc = 0x2d94b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d94b8: 0x230882d
    ctx->pc = 0x2d94b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d94bc: 0x9242000d
    ctx->pc = 0x2d94bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x2d94c0: 0x202802d
    ctx->pc = 0x2d94c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d94c4: 0x230882d
    ctx->pc = 0x2d94c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d94c8: 0x9242000e
    ctx->pc = 0x2d94c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x2d94cc: 0x202802d
    ctx->pc = 0x2d94ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d94d0: 0x230882d
    ctx->pc = 0x2d94d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d94d4: 0x9242000f
    ctx->pc = 0x2d94d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x2d94d8: 0x202802d
    ctx->pc = 0x2d94d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d94dc: 0x230882d
    ctx->pc = 0x2d94dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d94e0: 0x2463fff0
    ctx->pc = 0x2d94e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2d94e4: 0x28620010
    ctx->pc = 0x2d94e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x2d94e8: 0x1040ffcd
    ctx->pc = 0x2D94E8u;
    {
        const bool branch_taken_0x2d94e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D94ECu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x2d94e8) {
            ctx->pc = 0x2D9420u;
            goto label_2d9420;
        }
    }
    ctx->pc = 0x2D94F0u;
label_2d94f0:
    // 0x2d94f0: 0x10600009
    ctx->pc = 0x2D94F0u;
    {
        const bool branch_taken_0x2d94f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D94F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d94f0) {
            ctx->pc = 0x2D9518u;
            goto label_2d9518;
        }
    }
    ctx->pc = 0x2D94F8u;
label_2d94f8:
    // 0x2d94f8: 0x92420000
    ctx->pc = 0x2d94f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d94fc: 0x202802d
    ctx->pc = 0x2d94fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d9500: 0x26520001
    ctx->pc = 0x2d9500u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d9504: 0x230882d
    ctx->pc = 0x2d9504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d9508: 0x2463ffff
    ctx->pc = 0x2d9508u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d950c: 0x1460fffa
    ctx->pc = 0x2D950Cu;
    {
        const bool branch_taken_0x2d950c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d950c) {
            ctx->pc = 0x2D94F8u;
            goto label_2d94f8;
        }
    }
    ctx->pc = 0x2D9514u;
    // 0x2d9514: 0x200202d
    ctx->pc = 0x2d9514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9518:
    // 0x2d9518: 0xc0be0ec
    ctx->pc = 0x2D9518u;
    SET_GPR_U32(ctx, 31, 0x2D9520u);
    ctx->pc = 0x2D951Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65521));
    ctx->pc = 0x2F83B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2f83b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9520u; }
    }
    if (ctx->pc != 0x2D9520u) { return; }
    ctx->pc = 0x2D9520u;
    // 0x2d9520: 0x40802d
    ctx->pc = 0x2d9520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9524: 0x220202d
    ctx->pc = 0x2d9524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9528: 0xc0be0ec
    ctx->pc = 0x2D9528u;
    SET_GPR_U32(ctx, 31, 0x2D9530u);
    ctx->pc = 0x2D952Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65521));
    ctx->pc = 0x2F83B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2f83b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9530u; }
    }
    if (ctx->pc != 0x2D9530u) { return; }
    ctx->pc = 0x2D9530u;
    // 0x2d9530: 0x1660ffb5
    ctx->pc = 0x2D9530u;
    {
        const bool branch_taken_0x2d9530 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9534u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d9530) {
            ctx->pc = 0x2D9408u;
            goto label_2d9408;
        }
    }
    ctx->pc = 0x2D9538u;
    // 0x2d9538: 0x111438
    ctx->pc = 0x2d9538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 16);
label_2d953c:
    // 0x2d953c: 0x501025
    ctx->pc = 0x2d953cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d9540: 0x2103c
    ctx->pc = 0x2d9540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d9544: 0x2103f
    ctx->pc = 0x2d9544u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2d9548:
    // 0x2d9548: 0xdfbf0040
    ctx->pc = 0x2d9548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d954c: 0xdfb30030
    ctx->pc = 0x2d954cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9550: 0xdfb20020
    ctx->pc = 0x2d9550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9554: 0xdfb10010
    ctx->pc = 0x2d9554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9558: 0xdfb00000
    ctx->pc = 0x2d9558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d955c: 0x3e00008
    ctx->pc = 0x2D955Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9560u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9400u: goto label_2d9400;
            case 0x2D9408u: goto label_2d9408;
            case 0x2D9420u: goto label_2d9420;
            case 0x2D94F0u: goto label_2d94f0;
            case 0x2D94F8u: goto label_2d94f8;
            case 0x2D9518u: goto label_2d9518;
            case 0x2D953Cu: goto label_2d953c;
            case 0x2D9548u: goto label_2d9548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D9564u;
}
