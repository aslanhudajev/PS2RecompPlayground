#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: throw_helper
// Address: 0x1493b8 - 0x1496e8
void throw_helper_0x1493b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("throw_helper");


    ctx->pc = 0x1493b8u;

    // 0x1493b8: 0x27bdf960
    ctx->pc = 0x1493b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965600));
    // 0x1493bc: 0xffbe0680
    ctx->pc = 0x1493bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
    // 0x1493c0: 0xffb60660
    ctx->pc = 0x1493c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
    // 0x1493c4: 0xc0f02d
    ctx->pc = 0x1493c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493c8: 0xffb50650
    ctx->pc = 0x1493c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
    // 0x1493cc: 0xffb40640
    ctx->pc = 0x1493ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
    // 0x1493d0: 0xa82d
    ctx->pc = 0x1493d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493d4: 0xffb30630
    ctx->pc = 0x1493d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
    // 0x1493d8: 0x3a0a02d
    ctx->pc = 0x1493d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493dc: 0xffb00600
    ctx->pc = 0x1493dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
    // 0x1493e0: 0x80982d
    ctx->pc = 0x1493e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493e4: 0xffbf0690
    ctx->pc = 0x1493e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
    // 0x1493e8: 0xa0802d
    ctx->pc = 0x1493e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493ec: 0xffb70670
    ctx->pc = 0x1493ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
    // 0x1493f0: 0xffb20620
    ctx->pc = 0x1493f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
    // 0x1493f4: 0xffb10610
    ctx->pc = 0x1493f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
    // 0x1493f8: 0xafa705e4
    ctx->pc = 0x1493f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1508), GPR_U32(ctx, 7));
    // 0x1493fc: 0x8e62000c
    ctx->pc = 0x1493fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x149400: 0x8e770008
    ctx->pc = 0x149400u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x149404: 0xafb005e8
    ctx->pc = 0x149404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1512), GPR_U32(ctx, 16));
    // 0x149408: 0x2b02b
    ctx->pc = 0x149408u;
    SET_GPR_U32(ctx, 22, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14940c: 0x8cf10000
    ctx->pc = 0x14940cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x149410: 0xafa005f4
    ctx->pc = 0x149410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
    // 0x149414: 0xafa005f8
    ctx->pc = 0x149414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 0));
    // 0x149418: 0x1000004d
    ctx->pc = 0x149418u;
    {
        const bool branch_taken_0x149418 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14941Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1504), GPR_U32(ctx, 0));
        if (branch_taken_0x149418) {
            ctx->pc = 0x149550u;
            goto label_149550;
        }
    }
    ctx->pc = 0x149420u;
label_149420:
    // 0x149420: 0x8e230004
    ctx->pc = 0x149420u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x149424: 0x54600003
    ctx->pc = 0x149424u;
    {
        const bool branch_taken_0x149424 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x149424) {
            ctx->pc = 0x149428u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->pc = 0x149434u;
            goto label_149434;
        }
    }
    ctx->pc = 0x14942Cu;
    // 0x14942c: 0x10000005
    ctx->pc = 0x14942Cu;
    {
        const bool branch_taken_0x14942c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x149430u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14942c) {
            ctx->pc = 0x149444u;
            goto label_149444;
        }
    }
    ctx->pc = 0x149434u;
label_149434:
    // 0x149434: 0x3c02ffff
    ctx->pc = 0x149434u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x149438: 0x3442fffe
    ctx->pc = 0x149438u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
    // 0x14943c: 0x621826
    ctx->pc = 0x14943cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149440: 0x2c630001
    ctx->pc = 0x149440u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 1));
label_149444:
    // 0x149444: 0x12c0000a
    ctx->pc = 0x149444u;
    {
        const bool branch_taken_0x149444 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x149448u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x149444) {
            ctx->pc = 0x149470u;
            goto label_149470;
        }
    }
    ctx->pc = 0x14944Cu;
    // 0x14944c: 0x8e64000c
    ctx->pc = 0x14944cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x149450: 0x8e250004
    ctx->pc = 0x149450u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x149454: 0x24070001
    ctx->pc = 0x149454u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x149458: 0x27a805e0
    ctx->pc = 0x149458u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 1504));
    // 0x14945c: 0xc052434
    ctx->pc = 0x14945Cu;
    SET_GPR_U32(ctx, 31, 0x149464u);
    ctx->pc = 0x149460u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1490D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_exception_handler_0x1490d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149464u; }
        else if (ctx->pc != 0x149464u) { ctx->pc = 0x149464u; }
    }
    if (ctx->pc != 0x149464u) { return; }
    ctx->pc = 0x149464u;
    // 0x149464: 0x40a82d
    ctx->pc = 0x149464u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149468: 0x1000000e
    ctx->pc = 0x149468u;
    {
        const bool branch_taken_0x149468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14946Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x149468) {
            ctx->pc = 0x1494A4u;
            goto label_1494a4;
        }
    }
    ctx->pc = 0x149470u;
label_149470:
    // 0x149470: 0x10600008
    ctx->pc = 0x149470u;
    {
        const bool branch_taken_0x149470 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x149474u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x149470) {
            ctx->pc = 0x149494u;
            goto label_149494;
        }
    }
    ctx->pc = 0x149478u;
    // 0x149478: 0x8e250004
    ctx->pc = 0x149478u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14947c: 0x2e0302d
    ctx->pc = 0x14947cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149480: 0x382d
    ctx->pc = 0x149480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149484: 0xc052434
    ctx->pc = 0x149484u;
    SET_GPR_U32(ctx, 31, 0x14948Cu);
    ctx->pc = 0x149488u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 1504));
    ctx->pc = 0x1490D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_exception_handler_0x1490d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14948Cu; }
        else if (ctx->pc != 0x14948Cu) { ctx->pc = 0x14948Cu; }
    }
    if (ctx->pc != 0x14948Cu) { return; }
    ctx->pc = 0x14948Cu;
    // 0x14948c: 0x10000005
    ctx->pc = 0x14948Cu;
    {
        const bool branch_taken_0x14948c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x149490u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14948c) {
            ctx->pc = 0x1494A4u;
            goto label_1494a4;
        }
    }
    ctx->pc = 0x149494u;
label_149494:
    // 0x149494: 0x8e250004
    ctx->pc = 0x149494u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x149498: 0xc0523fe
    ctx->pc = 0x149498u;
    SET_GPR_U32(ctx, 31, 0x1494A0u);
    ctx->pc = 0x14949Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        old_find_exception_handler_0x148ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1494A0u; }
        else if (ctx->pc != 0x1494A0u) { ctx->pc = 0x1494A0u; }
    }
    if (ctx->pc != 0x1494A0u) { return; }
    ctx->pc = 0x1494A0u;
    // 0x1494a0: 0x40a82d
    ctx->pc = 0x1494a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1494a4:
    // 0x1494a4: 0x12a00022
    ctx->pc = 0x1494A4u;
    {
        const bool branch_taken_0x1494a4 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x1494A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 1504)));
        if (branch_taken_0x1494a4) {
            ctx->pc = 0x149530u;
            goto label_149530;
        }
    }
    ctx->pc = 0x1494ACu;
    // 0x1494ac: 0x1040001e
    ctx->pc = 0x1494ACu;
    {
        const bool branch_taken_0x1494ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1494B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 1528)));
        if (branch_taken_0x1494ac) {
            ctx->pc = 0x149528u;
            goto label_149528;
        }
    }
    ctx->pc = 0x1494B4u;
    // 0x1494b4: 0x5440001f
    ctx->pc = 0x1494B4u;
    {
        const bool branch_taken_0x1494b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1494b4) {
            ctx->pc = 0x1494B8u;
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->pc = 0x149534u;
            goto label_149534;
        }
    }
    ctx->pc = 0x1494BCu;
    // 0x1494bc: 0x27a302f0
    ctx->pc = 0x1494bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 752));
    // 0x1494c0: 0x220102d
    ctx->pc = 0x1494c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494c4: 0x262402e0
    ctx->pc = 0x1494c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 736));
label_1494c8:
    // 0x1494c8: 0xdc450000
    ctx->pc = 0x1494c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1494cc: 0xdc460008
    ctx->pc = 0x1494ccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1494d0: 0xdc470010
    ctx->pc = 0x1494d0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1494d4: 0xdc480018
    ctx->pc = 0x1494d4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1494d8: 0xfc650000
    ctx->pc = 0x1494d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1494dc: 0xfc660008
    ctx->pc = 0x1494dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1494e0: 0xfc670010
    ctx->pc = 0x1494e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x1494e4: 0xfc680018
    ctx->pc = 0x1494e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x1494e8: 0x24420020
    ctx->pc = 0x1494e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x1494ec: 0x24630020
    ctx->pc = 0x1494ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x1494f0: 0x0
    ctx->pc = 0x1494f0u;
    // NOP
    // 0x1494f4: 0x1444fff4
    ctx->pc = 0x1494F4u;
    {
        const bool branch_taken_0x1494f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x1494f4) {
            ctx->pc = 0x1494C8u;
            goto label_1494c8;
        }
    }
    ctx->pc = 0x1494FCu;
    // 0x1494fc: 0x24040001
    ctx->pc = 0x1494fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x149500: 0x24050001
    ctx->pc = 0x149500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x149504: 0xafb005f0
    ctx->pc = 0x149504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1520), GPR_U32(ctx, 16));
    // 0x149508: 0xafb505ec
    ctx->pc = 0x149508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1516), GPR_U32(ctx, 21));
    // 0x14950c: 0xafa405f8
    ctx->pc = 0x14950cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 4));
    // 0x149510: 0xafa505f4
    ctx->pc = 0x149510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 5));
    // 0x149514: 0xdc460000
    ctx->pc = 0x149514u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149518: 0xdc470008
    ctx->pc = 0x149518u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14951c: 0xfc660000
    ctx->pc = 0x14951cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x149520: 0x10000003
    ctx->pc = 0x149520u;
    {
        const bool branch_taken_0x149520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x149524u;
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
        if (branch_taken_0x149520) {
            ctx->pc = 0x149530u;
            goto label_149530;
        }
    }
    ctx->pc = 0x149528u;
label_149528:
    // 0x149528: 0x10000011
    ctx->pc = 0x149528u;
    {
        const bool branch_taken_0x149528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14952Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
        if (branch_taken_0x149528) {
            ctx->pc = 0x149570u;
            goto label_149570;
        }
    }
    ctx->pc = 0x149530u;
label_149530:
    // 0x149530: 0x9624029a
    ctx->pc = 0x149530u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_149534:
    // 0x149534: 0x240302d
    ctx->pc = 0x149534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149538: 0xc052486
    ctx->pc = 0x149538u;
    SET_GPR_U32(ctx, 31, 0x149540u);
    ctx->pc = 0x14953Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x149218u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_reg_addr_0x149218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149540u; }
        else if (ctx->pc != 0x149540u) { ctx->pc = 0x149540u; }
    }
    if (ctx->pc != 0x149540u) { return; }
    ctx->pc = 0x149540u;
    // 0x149540: 0xdc430000
    ctx->pc = 0x149540u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149544: 0x3183c
    ctx->pc = 0x149544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x149548: 0x3183f
    ctx->pc = 0x149548u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x14954c: 0x2470ffff
    ctx->pc = 0x14954cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294967295));
label_149550:
    // 0x149550: 0x220902d
    ctx->pc = 0x149550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149554: 0x280302d
    ctx->pc = 0x149554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149558: 0x200202d
    ctx->pc = 0x149558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14955c: 0xc0524c8
    ctx->pc = 0x14955Cu;
    SET_GPR_U32(ctx, 31, 0x149564u);
    ctx->pc = 0x149560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x149320u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_stack_level_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149564u; }
        else if (ctx->pc != 0x149564u) { ctx->pc = 0x149564u; }
    }
    if (ctx->pc != 0x149564u) { return; }
    ctx->pc = 0x149564u;
    // 0x149564: 0x40882d
    ctx->pc = 0x149564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149568: 0x1620ffad
    ctx->pc = 0x149568u;
    {
        const bool branch_taken_0x149568 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x14956Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x149568) {
            ctx->pc = 0x149420u;
            goto label_149420;
        }
    }
    ctx->pc = 0x149570u;
label_149570:
    // 0x149570: 0x8fa505f8
    ctx->pc = 0x149570u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 1528)));
    // 0x149574: 0x10a00007
    ctx->pc = 0x149574u;
    {
        const bool branch_taken_0x149574 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x149578u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 1524)));
        if (branch_taken_0x149574) {
            ctx->pc = 0x149594u;
            goto label_149594;
        }
    }
    ctx->pc = 0x14957Cu;
    // 0x14957c: 0x27b102f0
    ctx->pc = 0x14957cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 752));
    // 0x149580: 0x8fb505ec
    ctx->pc = 0x149580u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 1516)));
    // 0x149584: 0x10c00003
    ctx->pc = 0x149584u;
    {
        const bool branch_taken_0x149584 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x149588u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 1520)));
        if (branch_taken_0x149584) {
            ctx->pc = 0x149594u;
            goto label_149594;
        }
    }
    ctx->pc = 0x14958Cu;
    // 0x14958c: 0xc0524ec
    ctx->pc = 0x14958Cu;
    SET_GPR_U32(ctx, 31, 0x149594u);
    ctx->pc = 0x1493B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unwinding_cleanup_0x1493b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149594u; }
        else if (ctx->pc != 0x149594u) { ctx->pc = 0x149594u; }
    }
    if (ctx->pc != 0x149594u) { return; }
    ctx->pc = 0x149594u;
label_149594:
    // 0x149594: 0x56a00004
    ctx->pc = 0x149594u;
    {
        const bool branch_taken_0x149594 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x149594) {
            ctx->pc = 0x149598u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
            ctx->pc = 0x1495A8u;
            goto label_1495a8;
        }
    }
    ctx->pc = 0x14959Cu;
    // 0x14959c: 0xc0522d4
    ctx->pc = 0x14959Cu;
    SET_GPR_U32(ctx, 31, 0x1495A4u);
    ctx->pc = 0x148B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___terminate_0x148b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495A4u; }
        else if (ctx->pc != 0x1495A4u) { ctx->pc = 0x1495A4u; }
    }
    if (ctx->pc != 0x1495A4u) { return; }
    ctx->pc = 0x1495A4u;
    // 0x1495a4: 0xae750000
    ctx->pc = 0x1495a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_1495a8:
    // 0x1495a8: 0x8fa705e8
    ctx->pc = 0x1495a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x1495ac: 0x16070003
    ctx->pc = 0x1495ACu;
    {
        const bool branch_taken_0x1495ac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 7));
        ctx->pc = 0x1495B0u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1495ac) {
            ctx->pc = 0x1495BCu;
            goto label_1495bc;
        }
    }
    ctx->pc = 0x1495B4u;
    // 0x1495b4: 0x1000003d
    ctx->pc = 0x1495B4u;
    {
        const bool branch_taken_0x1495b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1495B8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1495b4) {
            ctx->pc = 0x1496ACu;
            goto label_1496ac;
        }
    }
    ctx->pc = 0x1495BCu;
label_1495bc:
    // 0x1495bc: 0x220182d
    ctx->pc = 0x1495bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495c0: 0x8fb005e8
    ctx->pc = 0x1495c0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x1495c4: 0x3c0102d
    ctx->pc = 0x1495c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495c8: 0x27c402e0
    ctx->pc = 0x1495c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 736));
label_1495cc:
    // 0x1495cc: 0xdc480000
    ctx->pc = 0x1495ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1495d0: 0xdc450008
    ctx->pc = 0x1495d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1495d4: 0xdc460010
    ctx->pc = 0x1495d4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1495d8: 0xdc470018
    ctx->pc = 0x1495d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1495dc: 0xfc680000
    ctx->pc = 0x1495dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x1495e0: 0xfc650008
    ctx->pc = 0x1495e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1495e4: 0xfc660010
    ctx->pc = 0x1495e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x1495e8: 0xfc670018
    ctx->pc = 0x1495e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x1495ec: 0x24420020
    ctx->pc = 0x1495ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x1495f0: 0x24630020
    ctx->pc = 0x1495f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x1495f4: 0x0
    ctx->pc = 0x1495f4u;
    // NOP
    // 0x1495f8: 0x1444fff4
    ctx->pc = 0x1495F8u;
    {
        const bool branch_taken_0x1495f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x1495f8) {
            ctx->pc = 0x1495CCu;
            goto label_1495cc;
        }
    }
    ctx->pc = 0x149600u;
    // 0x149600: 0xdc480000
    ctx->pc = 0x149600u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149604: 0xdc440008
    ctx->pc = 0x149604u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x149608: 0xfc680000
    ctx->pc = 0x149608u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x14960c: 0xfc640008
    ctx->pc = 0x14960cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x149610: 0x8fa705e8
    ctx->pc = 0x149610u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x149614: 0x50f60022
    ctx->pc = 0x149614u;
    {
        const bool branch_taken_0x149614 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 22));
        if (branch_taken_0x149614) {
            ctx->pc = 0x149618u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->pc = 0x1496A0u;
            goto label_1496a0;
        }
    }
    ctx->pc = 0x14961Cu;
    // 0x14961c: 0x220902d
    ctx->pc = 0x14961cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_149620:
    // 0x149620: 0x280302d
    ctx->pc = 0x149620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149624: 0x200202d
    ctx->pc = 0x149624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149628: 0xc0524c8
    ctx->pc = 0x149628u;
    SET_GPR_U32(ctx, 31, 0x149630u);
    ctx->pc = 0x14962Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x149320u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_stack_level_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149630u; }
        else if (ctx->pc != 0x149630u) { ctx->pc = 0x149630u; }
    }
    if (ctx->pc != 0x149630u) { return; }
    ctx->pc = 0x149630u;
    // 0x149630: 0x240a02d
    ctx->pc = 0x149630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149634: 0x40882d
    ctx->pc = 0x149634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149638: 0x802d
    ctx->pc = 0x149638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14963c: 0x9624029a
    ctx->pc = 0x14963cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
    // 0x149640: 0x2633029c
    ctx->pc = 0x149640u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 668));
    // 0x149644: 0x0
    ctx->pc = 0x149644u;
    // NOP
label_149648:
    // 0x149648: 0x12040008
    ctx->pc = 0x149648u;
    {
        const bool branch_taken_0x149648 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x14964Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        if (branch_taken_0x149648) {
            ctx->pc = 0x14966Cu;
            goto label_14966c;
        }
    }
    ctx->pc = 0x149650u;
    // 0x149650: 0x80430000
    ctx->pc = 0x149650u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149654: 0x10600005
    ctx->pc = 0x149654u;
    {
        const bool branch_taken_0x149654 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x149658u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x149654) {
            ctx->pc = 0x14966Cu;
            goto label_14966c;
        }
    }
    ctx->pc = 0x14965Cu;
    // 0x14965c: 0x200202d
    ctx->pc = 0x14965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149660: 0xc0524a8
    ctx->pc = 0x149660u;
    SET_GPR_U32(ctx, 31, 0x149668u);
    ctx->pc = 0x149664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1492A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        copy_reg_0x1492a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149668u; }
        else if (ctx->pc != 0x149668u) { ctx->pc = 0x149668u; }
    }
    if (ctx->pc != 0x149668u) { return; }
    ctx->pc = 0x149668u;
    // 0x149668: 0x9624029a
    ctx->pc = 0x149668u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_14966c:
    // 0x14966c: 0x26100001
    ctx->pc = 0x14966cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x149670: 0x2a02004f
    ctx->pc = 0x149670u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 79));
    // 0x149674: 0x1440fff4
    ctx->pc = 0x149674u;
    {
        const bool branch_taken_0x149674 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x149678u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x149674) {
            ctx->pc = 0x149648u;
            goto label_149648;
        }
    }
    ctx->pc = 0x14967Cu;
    // 0x14967c: 0xc052486
    ctx->pc = 0x14967Cu;
    SET_GPR_U32(ctx, 31, 0x149684u);
    ctx->pc = 0x149680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x149218u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_reg_addr_0x149218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149684u; }
        else if (ctx->pc != 0x149684u) { ctx->pc = 0x149684u; }
    }
    if (ctx->pc != 0x149684u) { return; }
    ctx->pc = 0x149684u;
    // 0x149684: 0xdc430000
    ctx->pc = 0x149684u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149688: 0x3183c
    ctx->pc = 0x149688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14968c: 0x3183f
    ctx->pc = 0x14968cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x149690: 0x2470ffff
    ctx->pc = 0x149690u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x149694: 0x1616ffe2
    ctx->pc = 0x149694u;
    {
        const bool branch_taken_0x149694 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 22));
        ctx->pc = 0x149698u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x149694) {
            ctx->pc = 0x149620u;
            goto label_149620;
        }
    }
    ctx->pc = 0x14969Cu;
    // 0x14969c: 0x9622029a
    ctx->pc = 0x14969cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_1496a0:
    // 0x1496a0: 0x24040002
    ctx->pc = 0x1496a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1496a4: 0x2221021
    ctx->pc = 0x1496a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1496a8: 0x8043029c
    ctx->pc = 0x1496a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
label_1496ac:
    // 0x1496ac: 0x8fa805e4
    ctx->pc = 0x1496acu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 1508)));
    // 0x1496b0: 0x2a0102d
    ctx->pc = 0x1496b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496b4: 0xdfbf0690
    ctx->pc = 0x1496b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x1496b8: 0xad110000
    ctx->pc = 0x1496b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
    // 0x1496bc: 0xdfbe0680
    ctx->pc = 0x1496bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x1496c0: 0xdfb70670
    ctx->pc = 0x1496c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x1496c4: 0xdfb60660
    ctx->pc = 0x1496c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x1496c8: 0xdfb50650
    ctx->pc = 0x1496c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x1496cc: 0xdfb40640
    ctx->pc = 0x1496ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x1496d0: 0xdfb30630
    ctx->pc = 0x1496d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x1496d4: 0xdfb20620
    ctx->pc = 0x1496d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x1496d8: 0xdfb10610
    ctx->pc = 0x1496d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x1496dc: 0xdfb00600
    ctx->pc = 0x1496dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x1496e0: 0x3e00008
    ctx->pc = 0x1496E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1496E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1696));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149420u: goto label_149420;
            case 0x149434u: goto label_149434;
            case 0x149444u: goto label_149444;
            case 0x149470u: goto label_149470;
            case 0x149494u: goto label_149494;
            case 0x1494A4u: goto label_1494a4;
            case 0x1494C8u: goto label_1494c8;
            case 0x149528u: goto label_149528;
            case 0x149530u: goto label_149530;
            case 0x149534u: goto label_149534;
            case 0x149550u: goto label_149550;
            case 0x149570u: goto label_149570;
            case 0x149594u: goto label_149594;
            case 0x1495A8u: goto label_1495a8;
            case 0x1495BCu: goto label_1495bc;
            case 0x1495CCu: goto label_1495cc;
            case 0x149620u: goto label_149620;
            case 0x149648u: goto label_149648;
            case 0x14966Cu: goto label_14966c;
            case 0x1496A0u: goto label_1496a0;
            case 0x1496ACu: goto label_1496ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1496E8u;
}
