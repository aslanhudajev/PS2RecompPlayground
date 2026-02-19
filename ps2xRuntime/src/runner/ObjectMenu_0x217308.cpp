#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ObjectMenu
// Address: 0x217308 - 0x2178f4
void ObjectMenu_0x217308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x217308u;

    // 0x217308: 0x27bdff20
    ctx->pc = 0x217308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x21730c: 0xffbf00d0
    ctx->pc = 0x21730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x217310: 0xffb700c0
    ctx->pc = 0x217310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x217314: 0xffb600b0
    ctx->pc = 0x217314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x217318: 0xffb500a0
    ctx->pc = 0x217318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x21731c: 0xffb40090
    ctx->pc = 0x21731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x217320: 0xffb30080
    ctx->pc = 0x217320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x217324: 0xffb20070
    ctx->pc = 0x217324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x217328: 0xffb10060
    ctx->pc = 0x217328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x21732c: 0xffb00050
    ctx->pc = 0x21732cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x217330: 0x3c020036
    ctx->pc = 0x217330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x217334: 0x8c52dee0
    ctx->pc = 0x217334u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x217338: 0xa82d
    ctx->pc = 0x217338u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21733c: 0x3c10003c
    ctx->pc = 0x21733cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x217340: 0x8e02d0ac
    ctx->pc = 0x217340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294955180)));
    // 0x217344: 0x14400030
    ctx->pc = 0x217344u;
    {
        const bool branch_taken_0x217344 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217348u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x217344) {
            ctx->pc = 0x217408u;
            goto label_217408;
        }
    }
    ctx->pc = 0x21734Cu;
    // 0x21734c: 0x3c013f4c
    ctx->pc = 0x21734cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x217350: 0x3421cccd
    ctx->pc = 0x217350u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x217354: 0x44816000
    ctx->pc = 0x217354u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x217358: 0xc0b1740
    ctx->pc = 0x217358u;
    SET_GPR_U32(ctx, 31, 0x217360u);
    ctx->pc = 0x21735Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetAmbient_0x2c5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217360u; }
    }
    if (ctx->pc != 0x217360u) { return; }
    ctx->pc = 0x217360u;
    // 0x217360: 0x202d
    ctx->pc = 0x217360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217364: 0x3c013f80
    ctx->pc = 0x217364u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x217368: 0x44816000
    ctx->pc = 0x217368u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x21736c: 0xc0b16d8
    ctx->pc = 0x21736Cu;
    SET_GPR_U32(ctx, 31, 0x217374u);
    ctx->pc = 0x217370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBAddLight_0x2c5b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217374u; }
    }
    if (ctx->pc != 0x217374u) { return; }
    ctx->pc = 0x217374u;
    // 0x217374: 0x44806000
    ctx->pc = 0x217374u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x217378: 0x46006346
    ctx->pc = 0x217378u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x21737c: 0x46006386
    ctx->pc = 0x21737cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x217380: 0xc0aae00
    ctx->pc = 0x217380u;
    SET_GPR_U32(ctx, 31, 0x217388u);
    ctx->pc = 0x217384u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2AB800u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowViewport_0x2ab800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217388u; }
    }
    if (ctx->pc != 0x217388u) { return; }
    ctx->pc = 0x217388u;
    // 0x217388: 0x3c04003a
    ctx->pc = 0x217388u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21738c: 0x24845be8
    ctx->pc = 0x21738cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23528));
    // 0x217390: 0x3c05003a
    ctx->pc = 0x217390u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x217394: 0x24a52550
    ctx->pc = 0x217394u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x217398: 0x302d
    ctx->pc = 0x217398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21739c: 0xc0b1b04
    ctx->pc = 0x21739Cu;
    SET_GPR_U32(ctx, 31, 0x2173A4u);
    ctx->pc = 0x2173A0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2173A4u; }
    }
    if (ctx->pc != 0x2173A4u) { return; }
    ctx->pc = 0x2173A4u;
    // 0x2173a4: 0xae02d0ac
    ctx->pc = 0x2173a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955180), GPR_U32(ctx, 2));
    // 0x2173a8: 0x3c03003c
    ctx->pc = 0x2173a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2173ac: 0x24020001
    ctx->pc = 0x2173acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2173b0: 0xac62cf30
    ctx->pc = 0x2173b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954800), GPR_U32(ctx, 2));
    // 0x2173b4: 0x3c02003c
    ctx->pc = 0x2173b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2173b8: 0xac40d0fc
    ctx->pc = 0x2173b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955260), GPR_U32(ctx, 0));
    // 0x2173bc: 0x3c04003a
    ctx->pc = 0x2173bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2173c0: 0x24845bf8
    ctx->pc = 0x2173c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23544));
    // 0x2173c4: 0x282d
    ctx->pc = 0x2173c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173c8: 0xc0b1ba8
    ctx->pc = 0x2173C8u;
    SET_GPR_U32(ctx, 31, 0x2173D0u);
    ctx->pc = 0x2173CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2173D0u; }
    }
    if (ctx->pc != 0x2173D0u) { return; }
    ctx->pc = 0x2173D0u;
    // 0x2173d0: 0x3c030037
    ctx->pc = 0x2173d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2173d4: 0x8c64319c
    ctx->pc = 0x2173d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12700)));
    // 0x2173d8: 0x40282d
    ctx->pc = 0x2173d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173dc: 0x302d
    ctx->pc = 0x2173dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173e0: 0x382d
    ctx->pc = 0x2173e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173e4: 0x24080200
    ctx->pc = 0x2173e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x2173e8: 0xc0b0b54
    ctx->pc = 0x2173E8u;
    SET_GPR_U32(ctx, 31, 0x2173F0u);
    ctx->pc = 0x2173ECu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 384));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2173F0u; }
    }
    if (ctx->pc != 0x2173F0u) { return; }
    ctx->pc = 0x2173F0u;
    // 0x2173f0: 0x3c03003c
    ctx->pc = 0x2173f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2173f4: 0xac62d0b0
    ctx->pc = 0x2173f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955184), GPR_U32(ctx, 2));
    // 0x2173f8: 0x3c01bf80
    ctx->pc = 0x2173f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2173fc: 0x44816000
    ctx->pc = 0x2173fcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x217400: 0xc0b0dd6
    ctx->pc = 0x217400u;
    SET_GPR_U32(ctx, 31, 0x217408u);
    ctx->pc = 0x217404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217408u; }
    }
    if (ctx->pc != 0x217408u) { return; }
    ctx->pc = 0x217408u;
label_217408:
    // 0x217408: 0x3c030032
    ctx->pc = 0x217408u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21740c: 0x2463f7e8
    ctx->pc = 0x21740cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965224));
    // 0x217410: 0x3c10003c
    ctx->pc = 0x217410u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x217414: 0x8e02cf30
    ctx->pc = 0x217414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294954800)));
    // 0x217418: 0x2404000c
    ctx->pc = 0x217418u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x21741c: 0x441018
    ctx->pc = 0x21741cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x217420: 0x432021
    ctx->pc = 0x217420u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217424: 0x622821
    ctx->pc = 0x217424u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217428: 0xa0182d
    ctx->pc = 0x217428u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21742c: 0x8c840000
    ctx->pc = 0x21742cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217430: 0x8ca50004
    ctx->pc = 0x217430u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x217434: 0xc0b1734
    ctx->pc = 0x217434u;
    SET_GPR_U32(ctx, 31, 0x21743Cu);
    ctx->pc = 0x217438u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->pc = 0x2C5CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetBGColor_0x2c5cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21743Cu; }
    }
    if (ctx->pc != 0x21743Cu) { return; }
    ctx->pc = 0x21743Cu;
    // 0x21743c: 0x3c02003c
    ctx->pc = 0x21743cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217440: 0x8c44d0b0
    ctx->pc = 0x217440u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955184)));
    // 0x217444: 0x10800007
    ctx->pc = 0x217444u;
    {
        const bool branch_taken_0x217444 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x217448u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x217444) {
            ctx->pc = 0x217464u;
            goto label_217464;
        }
    }
    ctx->pc = 0x21744Cu;
    // 0x21744c: 0x2463f858
    ctx->pc = 0x21744cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965336));
    // 0x217450: 0x8e02cf30
    ctx->pc = 0x217450u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294954800)));
    // 0x217454: 0x21080
    ctx->pc = 0x217454u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x217458: 0x431021
    ctx->pc = 0x217458u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21745c: 0xc0b0f40
    ctx->pc = 0x21745Cu;
    SET_GPR_U32(ctx, 31, 0x217464u);
    ctx->pc = 0x217460u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217464u; }
    }
    if (ctx->pc != 0x217464u) { return; }
    ctx->pc = 0x217464u;
label_217464:
    // 0x217464: 0x3c110032
    ctx->pc = 0x217464u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x217468: 0x3c02003c
    ctx->pc = 0x217468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21746c: 0x202d
    ctx->pc = 0x21746cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217470: 0x282d
    ctx->pc = 0x217470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217474: 0x8e26f8d0
    ctx->pc = 0x217474u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4294965456)));
    // 0x217478: 0x382d
    ctx->pc = 0x217478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21747c: 0xc085a1e
    ctx->pc = 0x21747Cu;
    SET_GPR_U32(ctx, 31, 0x217484u);
    ctx->pc = 0x217480u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294954824)));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217484u; }
    }
    if (ctx->pc != 0x217484u) { return; }
    ctx->pc = 0x217484u;
    // 0x217484: 0xae22f8d0
    ctx->pc = 0x217484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965456), GPR_U32(ctx, 2));
    // 0x217488: 0x8e430038
    ctx->pc = 0x217488u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x21748c: 0x22100
    ctx->pc = 0x21748cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 4));
    // 0x217490: 0x641821
    ctx->pc = 0x217490u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x217494: 0x8c760004
    ctx->pc = 0x217494u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x217498: 0x3c10003c
    ctx->pc = 0x217498u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x21749c: 0x2610cf50
    ctx->pc = 0x21749cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294954832));
    // 0x2174a0: 0x21080
    ctx->pc = 0x2174a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2174a4: 0x501021
    ctx->pc = 0x2174a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2174a8: 0x8c520000
    ctx->pc = 0x2174a8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2174ac: 0x24040001
    ctx->pc = 0x2174acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2174b0: 0x282d
    ctx->pc = 0x2174b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174b4: 0x240302d
    ctx->pc = 0x2174b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174b8: 0x24070001
    ctx->pc = 0x2174b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2174bc: 0x402d
    ctx->pc = 0x2174bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174c0: 0xc0859d6
    ctx->pc = 0x2174C0u;
    SET_GPR_U32(ctx, 31, 0x2174C8u);
    ctx->pc = 0x2174C4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 22), 76)));
    ctx->pc = 0x216758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuModD_0x216758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2174C8u; }
    }
    if (ctx->pc != 0x2174C8u) { return; }
    ctx->pc = 0x2174C8u;
    // 0x2174c8: 0x8e23f8d0
    ctx->pc = 0x2174c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294965456)));
    // 0x2174cc: 0x31880
    ctx->pc = 0x2174ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2174d0: 0x701821
    ctx->pc = 0x2174d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2174d4: 0xac620000
    ctx->pc = 0x2174d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2174d8: 0x24040004
    ctx->pc = 0x2174d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2174dc: 0x282d
    ctx->pc = 0x2174dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174e0: 0x40302d
    ctx->pc = 0x2174e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174e4: 0x2407000a
    ctx->pc = 0x2174e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2174e8: 0x402d
    ctx->pc = 0x2174e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174ec: 0xc0859d6
    ctx->pc = 0x2174ECu;
    SET_GPR_U32(ctx, 31, 0x2174F4u);
    ctx->pc = 0x2174F0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 22), 76)));
    ctx->pc = 0x216758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuModD_0x216758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2174F4u; }
    }
    if (ctx->pc != 0x2174F4u) { return; }
    ctx->pc = 0x2174F4u;
    // 0x2174f4: 0x40182d
    ctx->pc = 0x2174f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2174f8: 0x8e22f8d0
    ctx->pc = 0x2174f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294965456)));
    // 0x2174fc: 0x21080
    ctx->pc = 0x2174fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x217500: 0x501021
    ctx->pc = 0x217500u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x217504: 0x1072000a
    ctx->pc = 0x217504u;
    {
        const bool branch_taken_0x217504 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        ctx->pc = 0x217508u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x217504) {
            ctx->pc = 0x217530u;
            goto label_217530;
        }
    }
    ctx->pc = 0x21750Cu;
    // 0x21750c: 0x24050018
    ctx->pc = 0x21750cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    // 0x217510: 0x652818
    ctx->pc = 0x217510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x217514: 0x8ec2005c
    ctx->pc = 0x217514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x217518: 0x3c04003a
    ctx->pc = 0x217518u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21751c: 0x24845c08
    ctx->pc = 0x21751cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23560));
    // 0x217520: 0xc0bed0a
    ctx->pc = 0x217520u;
    SET_GPR_U32(ctx, 31, 0x217528u);
    ctx->pc = 0x217524u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217528u; }
    }
    if (ctx->pc != 0x217528u) { return; }
    ctx->pc = 0x217528u;
    // 0x217528: 0x3c02003c
    ctx->pc = 0x217528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21752c: 0xac40d0fc
    ctx->pc = 0x21752cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955260), GPR_U32(ctx, 0));
label_217530:
    // 0x217530: 0x3c02003c
    ctx->pc = 0x217530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217534: 0x2451cf50
    ctx->pc = 0x217534u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294954832));
    // 0x217538: 0x3c100032
    ctx->pc = 0x217538u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x21753c: 0x8e06f8d0
    ctx->pc = 0x21753cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294965456)));
    // 0x217540: 0x61080
    ctx->pc = 0x217540u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x217544: 0x511021
    ctx->pc = 0x217544u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x217548: 0x8c440000
    ctx->pc = 0x217548u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21754c: 0x24020018
    ctx->pc = 0x21754cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x217550: 0x822018
    ctx->pc = 0x217550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x217554: 0x8ec2005c
    ctx->pc = 0x217554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x217558: 0x822021
    ctx->pc = 0x217558u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21755c: 0xc0282d
    ctx->pc = 0x21755cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217560: 0xc0b19fe
    ctx->pc = 0x217560u;
    SET_GPR_U32(ctx, 31, 0x217568u);
    ctx->pc = 0x217564u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217568u; }
    }
    if (ctx->pc != 0x217568u) { return; }
    ctx->pc = 0x217568u;
    // 0x217568: 0x3c03003c
    ctx->pc = 0x217568u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21756c: 0x8c63d0fc
    ctx->pc = 0x21756cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294955260)));
    // 0x217570: 0x432821
    ctx->pc = 0x217570u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217574: 0x3c020032
    ctx->pc = 0x217574u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x217578: 0x8e03f8d0
    ctx->pc = 0x217578u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294965456)));
    // 0x21757c: 0x8c42f8dc
    ctx->pc = 0x21757cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965468)));
    // 0x217580: 0x14620008
    ctx->pc = 0x217580u;
    {
        const bool branch_taken_0x217580 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x217584u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x217580) {
            ctx->pc = 0x2175A4u;
            goto label_2175a4;
        }
    }
    ctx->pc = 0x217588u;
    // 0x217588: 0x31080
    ctx->pc = 0x217588u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21758c: 0x511021
    ctx->pc = 0x21758cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x217590: 0x3c030032
    ctx->pc = 0x217590u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x217594: 0x8c440000
    ctx->pc = 0x217594u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217598: 0x8c62f8e0
    ctx->pc = 0x217598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965472)));
    // 0x21759c: 0x1082000b
    ctx->pc = 0x21759Cu;
    {
        const bool branch_taken_0x21759c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2175A0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x21759c) {
            ctx->pc = 0x2175CCu;
            goto label_2175cc;
        }
    }
    ctx->pc = 0x2175A4u;
label_2175a4:
    // 0x2175a4: 0x3c020032
    ctx->pc = 0x2175a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2175a8: 0x8c43f8d0
    ctx->pc = 0x2175a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965456)));
    // 0x2175ac: 0xac83f8dc
    ctx->pc = 0x2175acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965468), GPR_U32(ctx, 3));
    // 0x2175b0: 0x3c040032
    ctx->pc = 0x2175b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x2175b4: 0x3c02003c
    ctx->pc = 0x2175b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2175b8: 0x2442cf50
    ctx->pc = 0x2175b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954832));
    // 0x2175bc: 0x31880
    ctx->pc = 0x2175bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2175c0: 0x621821
    ctx->pc = 0x2175c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2175c4: 0x8c620000
    ctx->pc = 0x2175c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2175c8: 0xac82f8e0
    ctx->pc = 0x2175c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965472), GPR_U32(ctx, 2));
label_2175cc:
    // 0x2175cc: 0x3c10003c
    ctx->pc = 0x2175ccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2175d0: 0xc0b220e
    ctx->pc = 0x2175D0u;
    SET_GPR_U32(ctx, 31, 0x2175D8u);
    ctx->pc = 0x2175D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294955180)));
    ctx->pc = 0x2C8838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetObject_0x2c8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175D8u; }
    }
    if (ctx->pc != 0x2175D8u) { return; }
    ctx->pc = 0x2175D8u;
    // 0x2175d8: 0x3c020031
    ctx->pc = 0x2175d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2175dc: 0xdc420e28
    ctx->pc = 0x2175dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x2175e0: 0x30420001
    ctx->pc = 0x2175e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2175e4: 0x2103c
    ctx->pc = 0x2175e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2175e8: 0x2103f
    ctx->pc = 0x2175e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2175ec: 0x1040000a
    ctx->pc = 0x2175ECu;
    {
        const bool branch_taken_0x2175ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2175F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2175ec) {
            ctx->pc = 0x217618u;
            goto label_217618;
        }
    }
    ctx->pc = 0x2175F4u;
    // 0x2175f4: 0x8e04d0ac
    ctx->pc = 0x2175f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294955180)));
    // 0x2175f8: 0x2405fffe
    ctx->pc = 0x2175f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2175fc: 0x8c46cf28
    ctx->pc = 0x2175fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294954792)));
    // 0x217600: 0xc0b4126
    ctx->pc = 0x217600u;
    SET_GPR_U32(ctx, 31, 0x217608u);
    ctx->pc = 0x217604u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217608u; }
    }
    if (ctx->pc != 0x217608u) { return; }
    ctx->pc = 0x217608u;
    // 0x217608: 0x3c03003c
    ctx->pc = 0x217608u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21760c: 0x24020001
    ctx->pc = 0x21760cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x217610: 0x1000000b
    ctx->pc = 0x217610u;
    {
        const bool branch_taken_0x217610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217614u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954796), GPR_U32(ctx, 2));
        if (branch_taken_0x217610) {
            ctx->pc = 0x217640u;
            goto label_217640;
        }
    }
    ctx->pc = 0x217618u;
label_217618:
    // 0x217618: 0x3c10003c
    ctx->pc = 0x217618u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x21761c: 0x8e02cf2c
    ctx->pc = 0x21761cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294954796)));
    // 0x217620: 0x10400007
    ctx->pc = 0x217620u;
    {
        const bool branch_taken_0x217620 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x217624u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x217620) {
            ctx->pc = 0x217640u;
            goto label_217640;
        }
    }
    ctx->pc = 0x217628u;
    // 0x217628: 0x8c44d0ac
    ctx->pc = 0x217628u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955180)));
    // 0x21762c: 0x2405ffff
    ctx->pc = 0x21762cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x217630: 0x302d
    ctx->pc = 0x217630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217634: 0xc0b4126
    ctx->pc = 0x217634u;
    SET_GPR_U32(ctx, 31, 0x21763Cu);
    ctx->pc = 0x217638u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21763Cu; }
    }
    if (ctx->pc != 0x21763Cu) { return; }
    ctx->pc = 0x21763Cu;
    // 0x21763c: 0xae00cf2c
    ctx->pc = 0x21763cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954796), GPR_U32(ctx, 0));
label_217640:
    // 0x217640: 0x3c02003c
    ctx->pc = 0x217640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217644: 0x8c42cf18
    ctx->pc = 0x217644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954776)));
    // 0x217648: 0x3c030100
    ctx->pc = 0x217648u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x21764c: 0x431024
    ctx->pc = 0x21764cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217650: 0x10400013
    ctx->pc = 0x217650u;
    {
        const bool branch_taken_0x217650 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x217654u;
        SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
        if (branch_taken_0x217650) {
            ctx->pc = 0x2176A0u;
            goto label_2176a0;
        }
    }
    ctx->pc = 0x217658u;
    // 0x217658: 0x8cc4d0fc
    ctx->pc = 0x217658u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4294955260)));
    // 0x21765c: 0x24840001
    ctx->pc = 0x21765cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x217660: 0xacc4d0fc
    ctx->pc = 0x217660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955260), GPR_U32(ctx, 4));
    // 0x217664: 0x3c03003c
    ctx->pc = 0x217664u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x217668: 0x2463cf50
    ctx->pc = 0x217668u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954832));
    // 0x21766c: 0x3c020032
    ctx->pc = 0x21766cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x217670: 0x8c42f8d0
    ctx->pc = 0x217670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965456)));
    // 0x217674: 0x21080
    ctx->pc = 0x217674u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x217678: 0x431021
    ctx->pc = 0x217678u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21767c: 0x8c420000
    ctx->pc = 0x21767cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217680: 0x8ec5005c
    ctx->pc = 0x217680u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x217684: 0x24030018
    ctx->pc = 0x217684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x217688: 0x431018
    ctx->pc = 0x217688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21768c: 0x451021
    ctx->pc = 0x21768cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x217690: 0x84420016
    ctx->pc = 0x217690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x217694: 0x44102a
    ctx->pc = 0x217694u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x217698: 0x54400001
    ctx->pc = 0x217698u;
    {
        const bool branch_taken_0x217698 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x217698) {
            ctx->pc = 0x21769Cu;
            WRITE32(ADD32(GPR_U32(ctx, 6), 4294955260), GPR_U32(ctx, 0));
            ctx->pc = 0x2176A0u;
            goto label_2176a0;
        }
    }
    ctx->pc = 0x2176A0u;
label_2176a0:
    // 0x2176a0: 0xc085c06
    ctx->pc = 0x2176A0u;
    SET_GPR_U32(ctx, 31, 0x2176A8u);
    ctx->pc = 0x2176A4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x217018u;
    {
        const uint32_t __entryPc = ctx->pc;
        mod_objpos_0x217018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2176A8u; }
    }
    if (ctx->pc != 0x2176A8u) { return; }
    ctx->pc = 0x2176A8u;
    // 0x2176a8: 0x8e04d0ac
    ctx->pc = 0x2176a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294955180)));
    // 0x2176ac: 0x3c05003c
    ctx->pc = 0x2176acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2176b0: 0xc0b5a4e
    ctx->pc = 0x2176B0u;
    SET_GPR_U32(ctx, 31, 0x2176B8u);
    ctx->pc = 0x2176B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955152));
    ctx->pc = 0x2D6938u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreatePYRMatrix_0x2d6938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2176B8u; }
    }
    if (ctx->pc != 0x2176B8u) { return; }
    ctx->pc = 0x2176B8u;
    // 0x2176b8: 0x8e03d0ac
    ctx->pc = 0x2176b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294955180)));
    // 0x2176bc: 0x3c02003c
    ctx->pc = 0x2176bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2176c0: 0x2444d0a0
    ctx->pc = 0x2176c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294955168));
    // 0x2176c4: 0xc440d0a0
    ctx->pc = 0x2176c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2176c8: 0xe4600030
    ctx->pc = 0x2176c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2176cc: 0xc4800004
    ctx->pc = 0x2176ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2176d0: 0xe4600034
    ctx->pc = 0x2176d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2176d4: 0xc4800008
    ctx->pc = 0x2176d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2176d8: 0xe4600038
    ctx->pc = 0x2176d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2176dc: 0x3c02003c
    ctx->pc = 0x2176dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2176e0: 0x8c42cf48
    ctx->pc = 0x2176e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954824)));
    // 0x2176e4: 0x18400018
    ctx->pc = 0x2176E4u;
    {
        const bool branch_taken_0x2176e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2176E8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2176e4) {
            ctx->pc = 0x217748u;
            goto label_217748;
        }
    }
    ctx->pc = 0x2176ECu;
    // 0x2176ec: 0x3c14003a
    ctx->pc = 0x2176ecu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2176f0: 0x3c130032
    ctx->pc = 0x2176f0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)50 << 16));
    // 0x2176f4: 0x3c1200ff
    ctx->pc = 0x2176f4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)255 << 16));
    // 0x2176f8: 0x3652ff00
    ctx->pc = 0x2176f8u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65280));
    // 0x2176fc: 0x3c11003c
    ctx->pc = 0x2176fcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
label_217700:
    // 0x217700: 0x27a40010
    ctx->pc = 0x217700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x217704: 0x26855c10
    ctx->pc = 0x217704u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 23568));
    // 0x217708: 0xc0b6252
    ctx->pc = 0x217708u;
    SET_GPR_U32(ctx, 31, 0x217710u);
    ctx->pc = 0x21770Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217710u; }
    }
    if (ctx->pc != 0x217710u) { return; }
    ctx->pc = 0x217710u;
    // 0x217710: 0x8e62f8d0
    ctx->pc = 0x217710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294965456)));
    // 0x217714: 0x3c0400ff
    ctx->pc = 0x217714u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x217718: 0x3484ffff
    ctx->pc = 0x217718u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x21771c: 0x2021026
    ctx->pc = 0x21771cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x217720: 0x242200a
    ctx->pc = 0x217720u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 18));
    // 0x217724: 0x2a0282d
    ctx->pc = 0x217724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217728: 0x2e0302d
    ctx->pc = 0x217728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21772c: 0xc0b4724
    ctx->pc = 0x21772Cu;
    SET_GPR_U32(ctx, 31, 0x217734u);
    ctx->pc = 0x217730u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217734u; }
    }
    if (ctx->pc != 0x217734u) { return; }
    ctx->pc = 0x217734u;
    // 0x217734: 0x26100001
    ctx->pc = 0x217734u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x217738: 0x8e22cf48
    ctx->pc = 0x217738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294954824)));
    // 0x21773c: 0x202102a
    ctx->pc = 0x21773cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x217740: 0x1440ffef
    ctx->pc = 0x217740u;
    {
        const bool branch_taken_0x217740 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217744u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4));
        if (branch_taken_0x217740) {
            ctx->pc = 0x217700u;
            goto label_217700;
        }
    }
    ctx->pc = 0x217748u;
label_217748:
    // 0x217748: 0x3c0400ff
    ctx->pc = 0x217748u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x21774c: 0xc0b46e2
    ctx->pc = 0x21774Cu;
    SET_GPR_U32(ctx, 31, 0x217754u);
    ctx->pc = 0x217750u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217754u; }
    }
    if (ctx->pc != 0x217754u) { return; }
    ctx->pc = 0x217754u;
    // 0x217754: 0x40b82d
    ctx->pc = 0x217754u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217758: 0x82c20020
    ctx->pc = 0x217758u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x21775c: 0x1040000e
    ctx->pc = 0x21775Cu;
    {
        const bool branch_taken_0x21775c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x217760u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 22), 32));
        if (branch_taken_0x21775c) {
            ctx->pc = 0x217798u;
            goto label_217798;
        }
    }
    ctx->pc = 0x217764u;
    // 0x217764: 0xc0bf306
    ctx->pc = 0x217764u;
    SET_GPR_U32(ctx, 31, 0x21776Cu);
    ctx->pc = 0x217768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21776Cu; }
    }
    if (ctx->pc != 0x21776Cu) { return; }
    ctx->pc = 0x21776Cu;
    // 0x21776c: 0x24050039
    ctx->pc = 0x21776cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
    // 0x217770: 0x3c030032
    ctx->pc = 0x217770u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x217774: 0x3c0400ff
    ctx->pc = 0x217774u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x217778: 0x3484ff00
    ctx->pc = 0x217778u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x21777c: 0xa22823
    ctx->pc = 0x21777cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x217780: 0x24060003
    ctx->pc = 0x217780u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x217784: 0x3c07003a
    ctx->pc = 0x217784u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x217788: 0x24e75c18
    ctx->pc = 0x217788u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 23576));
    // 0x21778c: 0x200402d
    ctx->pc = 0x21778cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217790: 0xc0b4724
    ctx->pc = 0x217790u;
    SET_GPR_U32(ctx, 31, 0x217798u);
    ctx->pc = 0x217794u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 4294965456)));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217798u; }
    }
    if (ctx->pc != 0x217798u) { return; }
    ctx->pc = 0x217798u;
label_217798:
    // 0x217798: 0x3c10003c
    ctx->pc = 0x217798u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x21779c: 0x8e02d0ac
    ctx->pc = 0x21779cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294955180)));
    // 0x2177a0: 0x8c510070
    ctx->pc = 0x2177a0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2177a4: 0xc0be862
    ctx->pc = 0x2177A4u;
    SET_GPR_U32(ctx, 31, 0x2177ACu);
    ctx->pc = 0x2177A8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2177ACu; }
    }
    if (ctx->pc != 0x2177ACu) { return; }
    ctx->pc = 0x2177ACu;
    // 0x2177ac: 0x40382d
    ctx->pc = 0x2177acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177b0: 0x8e02d0ac
    ctx->pc = 0x2177b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294955180)));
    // 0x2177b4: 0x8e2b002c
    ctx->pc = 0x2177b4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2177b8: 0x11600008
    ctx->pc = 0x2177B8u;
    {
        const bool branch_taken_0x2177b8 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x2177BCu;
        SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
        if (branch_taken_0x2177b8) {
            ctx->pc = 0x2177DCu;
            goto label_2177dc;
        }
    }
    ctx->pc = 0x2177C0u;
    // 0x2177c0: 0x8ec2005c
    ctx->pc = 0x2177c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x2177c4: 0x1625823
    ctx->pc = 0x2177c4u;
    SET_GPR_U32(ctx, 11, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2177c8: 0x3c02aaaa
    ctx->pc = 0x2177c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43690 << 16));
    // 0x2177cc: 0x3442aaab
    ctx->pc = 0x2177ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 43691));
    // 0x2177d0: 0x1621018
    ctx->pc = 0x2177d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2177d4: 0x10000002
    ctx->pc = 0x2177D4u;
    {
        const bool branch_taken_0x2177d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2177D8u;
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 3));
        if (branch_taken_0x2177d4) {
            ctx->pc = 0x2177E0u;
            goto label_2177e0;
        }
    }
    ctx->pc = 0x2177DCu;
label_2177dc:
    // 0x2177dc: 0x240bffff
    ctx->pc = 0x2177dcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2177e0:
    // 0x2177e0: 0x8e220028
    ctx->pc = 0x2177e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2177e4: 0xafa20000
    ctx->pc = 0x2177e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2177e8: 0x24040002
    ctx->pc = 0x2177e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2177ec: 0x2405002b
    ctx->pc = 0x2177ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 43));
    // 0x2177f0: 0x3c06003a
    ctx->pc = 0x2177f0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2177f4: 0x24c65c20
    ctx->pc = 0x2177f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 23584));
    // 0x2177f8: 0x8e280020
    ctx->pc = 0x2177f8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2177fc: 0xc0b46ea
    ctx->pc = 0x2177FCu;
    SET_GPR_U32(ctx, 31, 0x217804u);
    ctx->pc = 0x217800u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x2D1BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechof_0x2d1ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217804u; }
    }
    if (ctx->pc != 0x217804u) { return; }
    ctx->pc = 0x217804u;
    // 0x217804: 0x3c02003c
    ctx->pc = 0x217804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217808: 0x2450d0a0
    ctx->pc = 0x217808u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294955168));
    // 0x21780c: 0xc0be862
    ctx->pc = 0x21780Cu;
    SET_GPR_U32(ctx, 31, 0x217814u);
    ctx->pc = 0x217810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217814u; }
    }
    if (ctx->pc != 0x217814u) { return; }
    ctx->pc = 0x217814u;
    // 0x217814: 0x40a82d
    ctx->pc = 0x217814u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217818: 0xc0be862
    ctx->pc = 0x217818u;
    SET_GPR_U32(ctx, 31, 0x217820u);
    ctx->pc = 0x21781Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217820u; }
    }
    if (ctx->pc != 0x217820u) { return; }
    ctx->pc = 0x217820u;
    // 0x217820: 0x40a02d
    ctx->pc = 0x217820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217824: 0xc0be862
    ctx->pc = 0x217824u;
    SET_GPR_U32(ctx, 31, 0x21782Cu);
    ctx->pc = 0x217828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21782Cu; }
    }
    if (ctx->pc != 0x21782Cu) { return; }
    ctx->pc = 0x21782Cu;
    // 0x21782c: 0x40982d
    ctx->pc = 0x21782cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217830: 0x3c02003c
    ctx->pc = 0x217830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217834: 0x2450d090
    ctx->pc = 0x217834u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294955152));
    // 0x217838: 0xc0be862
    ctx->pc = 0x217838u;
    SET_GPR_U32(ctx, 31, 0x217840u);
    ctx->pc = 0x21783Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217840u; }
    }
    if (ctx->pc != 0x217840u) { return; }
    ctx->pc = 0x217840u;
    // 0x217840: 0x40902d
    ctx->pc = 0x217840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217844: 0xc0be862
    ctx->pc = 0x217844u;
    SET_GPR_U32(ctx, 31, 0x21784Cu);
    ctx->pc = 0x217848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21784Cu; }
    }
    if (ctx->pc != 0x21784Cu) { return; }
    ctx->pc = 0x21784Cu;
    // 0x21784c: 0x40882d
    ctx->pc = 0x21784cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217850: 0xc0be862
    ctx->pc = 0x217850u;
    SET_GPR_U32(ctx, 31, 0x217858u);
    ctx->pc = 0x217854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217858u; }
    }
    if (ctx->pc != 0x217858u) { return; }
    ctx->pc = 0x217858u;
    // 0x217858: 0xffa20000
    ctx->pc = 0x217858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x21785c: 0x24040002
    ctx->pc = 0x21785cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x217860: 0x2405002c
    ctx->pc = 0x217860u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 44));
    // 0x217864: 0x3c06003a
    ctx->pc = 0x217864u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x217868: 0x24c65c60
    ctx->pc = 0x217868u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 23648));
    // 0x21786c: 0x2a0382d
    ctx->pc = 0x21786cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217870: 0x280402d
    ctx->pc = 0x217870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217874: 0x260482d
    ctx->pc = 0x217874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217878: 0x240502d
    ctx->pc = 0x217878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21787c: 0xc0b46ea
    ctx->pc = 0x21787Cu;
    SET_GPR_U32(ctx, 31, 0x217884u);
    ctx->pc = 0x217880u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechof_0x2d1ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217884u; }
    }
    if (ctx->pc != 0x217884u) { return; }
    ctx->pc = 0x217884u;
    // 0x217884: 0xc0b46e2
    ctx->pc = 0x217884u;
    SET_GPR_U32(ctx, 31, 0x21788Cu);
    ctx->pc = 0x217888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21788Cu; }
    }
    if (ctx->pc != 0x21788Cu) { return; }
    ctx->pc = 0x21788Cu;
    // 0x21788c: 0xc085ba0
    ctx->pc = 0x21788Cu;
    SET_GPR_U32(ctx, 31, 0x217894u);
    ctx->pc = 0x217890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispObjMenu_0x216e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217894u; }
    }
    if (ctx->pc != 0x217894u) { return; }
    ctx->pc = 0x217894u;
    // 0x217894: 0x3c02003c
    ctx->pc = 0x217894u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217898: 0x8c42cef8
    ctx->pc = 0x217898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954744)));
    // 0x21789c: 0x3c030800
    ctx->pc = 0x21789cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
    // 0x2178a0: 0x431024
    ctx->pc = 0x2178a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2178a4: 0x50400008
    ctx->pc = 0x2178A4u;
    {
        const bool branch_taken_0x2178a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2178a4) {
            ctx->pc = 0x2178A8u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2178C8u;
            goto label_2178c8;
        }
    }
    ctx->pc = 0x2178ACu;
    // 0x2178ac: 0xc0b4026
    ctx->pc = 0x2178ACu;
    SET_GPR_U32(ctx, 31, 0x2178B4u);
    ctx->pc = 0x2D0098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeInit_0x2d0098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2178B4u; }
    }
    if (ctx->pc != 0x2178B4u) { return; }
    ctx->pc = 0x2178B4u;
    // 0x2178b4: 0x3c02003c
    ctx->pc = 0x2178b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2178b8: 0xac40d0ac
    ctx->pc = 0x2178b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955180), GPR_U32(ctx, 0));
    // 0x2178bc: 0x3c02003c
    ctx->pc = 0x2178bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2178c0: 0xac40d0b0
    ctx->pc = 0x2178c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955184), GPR_U32(ctx, 0));
    // 0x2178c4: 0x24020001
    ctx->pc = 0x2178c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2178c8:
    // 0x2178c8: 0xdfbf00d0
    ctx->pc = 0x2178c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2178cc: 0xdfb700c0
    ctx->pc = 0x2178ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2178d0: 0xdfb600b0
    ctx->pc = 0x2178d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2178d4: 0xdfb500a0
    ctx->pc = 0x2178d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2178d8: 0xdfb40090
    ctx->pc = 0x2178d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2178dc: 0xdfb30080
    ctx->pc = 0x2178dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2178e0: 0xdfb20070
    ctx->pc = 0x2178e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2178e4: 0xdfb10060
    ctx->pc = 0x2178e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2178e8: 0xdfb00050
    ctx->pc = 0x2178e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2178ec: 0x3e00008
    ctx->pc = 0x2178ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2178F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217408u: goto label_217408;
            case 0x217464u: goto label_217464;
            case 0x217530u: goto label_217530;
            case 0x2175A4u: goto label_2175a4;
            case 0x2175CCu: goto label_2175cc;
            case 0x217618u: goto label_217618;
            case 0x217640u: goto label_217640;
            case 0x2176A0u: goto label_2176a0;
            case 0x217700u: goto label_217700;
            case 0x217748u: goto label_217748;
            case 0x217798u: goto label_217798;
            case 0x2177DCu: goto label_2177dc;
            case 0x2177E0u: goto label_2177e0;
            case 0x2178C8u: goto label_2178c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2178F4u;
}
