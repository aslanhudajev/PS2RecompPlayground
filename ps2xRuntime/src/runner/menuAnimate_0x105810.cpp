#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: menuAnimate
// Address: 0x105810 - 0x1059b0
void menuAnimate_0x105810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x105810u;

    // 0x105810: 0x27bdff50
    ctx->pc = 0x105810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x105814: 0xffb10010
    ctx->pc = 0x105814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105818: 0x8f9182e8
    ctx->pc = 0x105818u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x10581c: 0xffb60060
    ctx->pc = 0x10581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x105820: 0xffb50050
    ctx->pc = 0x105820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105824: 0x34168000
    ctx->pc = 0x105824u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 0), 32768));
    // 0x105828: 0xffb40040
    ctx->pc = 0x105828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10582c: 0x2415000f
    ctx->pc = 0x10582cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 15));
    // 0x105830: 0xffb30030
    ctx->pc = 0x105830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x105834: 0x24140001
    ctx->pc = 0x105834u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x105838: 0xffbf0090
    ctx->pc = 0x105838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10583c: 0x24130100
    ctx->pc = 0x10583cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 256));
    // 0x105840: 0xffbe0080
    ctx->pc = 0x105840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x105844: 0x3222003f
    ctx->pc = 0x105844u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 63));
    // 0x105848: 0xffb70070
    ctx->pc = 0x105848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10584c: 0xffb20020
    ctx->pc = 0x10584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105850: 0xffb00000
    ctx->pc = 0x105850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105854: 0x10400004
    ctx->pc = 0x105854u;
    {
        const bool branch_taken_0x105854 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105858u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        if (branch_taken_0x105854) {
            ctx->pc = 0x105868u;
            goto label_105868;
        }
    }
    ctx->pc = 0x10585Cu;
    // 0x10585c: 0x3c040017
    ctx->pc = 0x10585cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x105860: 0xc04ace4
    ctx->pc = 0x105860u;
    SET_GPR_U32(ctx, 31, 0x105868u);
    ctx->pc = 0x105864u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12152));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105868u; }
    }
    if (ctx->pc != 0x105868u) { return; }
    ctx->pc = 0x105868u;
label_105868:
    // 0x105868: 0x3c020014
    ctx->pc = 0x105868u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20 << 16));
    // 0x10586c: 0x8f9282d0
    ctx->pc = 0x10586cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x105870: 0x24501698
    ctx->pc = 0x105870u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 5784));
    // 0x105874: 0x3c013f80
    ctx->pc = 0x105874u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x105878: 0x4481a000
    ctx->pc = 0x105878u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x10587c: 0x24020140
    ctx->pc = 0x10587cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x105880: 0xae110550
    ctx->pc = 0x105880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 17));
    // 0x105884: 0xae020554
    ctx->pc = 0x105884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x105888: 0x241e1000
    ctx->pc = 0x105888u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x10588c: 0x24022800
    ctx->pc = 0x10588cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10240));
    // 0x105890: 0xae160560
    ctx->pc = 0x105890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 22));
    // 0x105894: 0xae020564
    ctx->pc = 0x105894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x105898: 0x24170400
    ctx->pc = 0x105898u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x10589c: 0x24022000
    ctx->pc = 0x10589cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1058a0: 0xae130558
    ctx->pc = 0x1058a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 19));
    // 0x1058a4: 0xae020568
    ctx->pc = 0x1058a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 2));
    // 0x1058a8: 0x3242003f
    ctx->pc = 0x1058a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 63));
    // 0x1058ac: 0xae16055c
    ctx->pc = 0x1058acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 22));
    // 0x1058b0: 0xae14056c
    ctx->pc = 0x1058b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 20));
    // 0x1058b4: 0xa2150578
    ctx->pc = 0x1058b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1400), (uint8_t)GPR_U32(ctx, 21));
    // 0x1058b8: 0xe6140570
    ctx->pc = 0x1058b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    // 0x1058bc: 0x10400004
    ctx->pc = 0x1058BCu;
    {
        const bool branch_taken_0x1058bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1058C0u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
        if (branch_taken_0x1058bc) {
            ctx->pc = 0x1058D0u;
            goto label_1058d0;
        }
    }
    ctx->pc = 0x1058C4u;
    // 0x1058c4: 0x3c040017
    ctx->pc = 0x1058c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1058c8: 0xc04ace4
    ctx->pc = 0x1058C8u;
    SET_GPR_U32(ctx, 31, 0x1058D0u);
    ctx->pc = 0x1058CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12152));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1058D0u; }
    }
    if (ctx->pc != 0x1058D0u) { return; }
    ctx->pc = 0x1058D0u;
label_1058d0:
    // 0x1058d0: 0x8f9182d4
    ctx->pc = 0x1058d0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294935252)));
    // 0x1058d4: 0x24027b00
    ctx->pc = 0x1058d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31488));
    // 0x1058d8: 0xae020270
    ctx->pc = 0x1058d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    // 0x1058dc: 0x24020040
    ctx->pc = 0x1058dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1058e0: 0xae120264
    ctx->pc = 0x1058e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 18));
    // 0x1058e4: 0xae02026c
    ctx->pc = 0x1058e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
    // 0x1058e8: 0x3223003f
    ctx->pc = 0x1058e8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 63));
    // 0x1058ec: 0x24027500
    ctx->pc = 0x1058ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29952));
    // 0x1058f0: 0xae130268
    ctx->pc = 0x1058f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 19));
    // 0x1058f4: 0xae020274
    ctx->pc = 0x1058f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
    // 0x1058f8: 0xae1e0278
    ctx->pc = 0x1058f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 30));
    // 0x1058fc: 0xae17027c
    ctx->pc = 0x1058fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 23));
    // 0x105900: 0xae140280
    ctx->pc = 0x105900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 20));
    // 0x105904: 0xa215028c
    ctx->pc = 0x105904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 652), (uint8_t)GPR_U32(ctx, 21));
    // 0x105908: 0xe6140284
    ctx->pc = 0x105908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x10590c: 0x10600004
    ctx->pc = 0x10590Cu;
    {
        const bool branch_taken_0x10590c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x105910u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
        if (branch_taken_0x10590c) {
            ctx->pc = 0x105920u;
            goto label_105920;
        }
    }
    ctx->pc = 0x105914u;
    // 0x105914: 0x3c040017
    ctx->pc = 0x105914u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x105918: 0xc04ace4
    ctx->pc = 0x105918u;
    SET_GPR_U32(ctx, 31, 0x105920u);
    ctx->pc = 0x10591Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12152));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105920u; }
    }
    if (ctx->pc != 0x105920u) { return; }
    ctx->pc = 0x105920u;
label_105920:
    // 0x105920: 0x8f84813c
    ctx->pc = 0x105920u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934844)));
    // 0x105924: 0x24020040
    ctx->pc = 0x105924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x105928: 0xae0202f4
    ctx->pc = 0x105928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 2));
    // 0x10592c: 0x34028500
    ctx->pc = 0x10592cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 34048));
    // 0x105930: 0xe6140310
    ctx->pc = 0x105930u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    // 0x105934: 0xae0202f8
    ctx->pc = 0x105934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 2));
    // 0x105938: 0x28830261
    ctx->pc = 0x105938u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 609));
    // 0x10593c: 0x24027500
    ctx->pc = 0x10593cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29952));
    // 0x105940: 0xae1102ec
    ctx->pc = 0x105940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 17));
    // 0x105944: 0xae1302f0
    ctx->pc = 0x105944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 19));
    // 0x105948: 0xae0202fc
    ctx->pc = 0x105948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 2));
    // 0x10594c: 0xae1e0300
    ctx->pc = 0x10594cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 30));
    // 0x105950: 0xae170304
    ctx->pc = 0x105950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 23));
    // 0x105954: 0xae140308
    ctx->pc = 0x105954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 20));
    // 0x105958: 0xa2150314
    ctx->pc = 0x105958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 788), (uint8_t)GPR_U32(ctx, 21));
    // 0x10595c: 0x10600003
    ctx->pc = 0x10595Cu;
    {
        const bool branch_taken_0x10595c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x105960u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
        if (branch_taken_0x10595c) {
            ctx->pc = 0x10596Cu;
            goto label_10596c;
        }
    }
    ctx->pc = 0x105964u;
    // 0x105964: 0x24820028
    ctx->pc = 0x105964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 40));
    // 0x105968: 0xaf82813c
    ctx->pc = 0x105968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934844), GPR_U32(ctx, 2));
label_10596c:
    // 0x10596c: 0x8f828140
    ctx->pc = 0x10596cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934848)));
    // 0x105970: 0x10400002
    ctx->pc = 0x105970u;
    {
        const bool branch_taken_0x105970 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105974u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967286));
        if (branch_taken_0x105970) {
            ctx->pc = 0x10597Cu;
            goto label_10597c;
        }
    }
    ctx->pc = 0x105978u;
    // 0x105978: 0xaf828140
    ctx->pc = 0x105978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934848), GPR_U32(ctx, 2));
label_10597c:
    // 0x10597c: 0xdfbf0090
    ctx->pc = 0x10597cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105980: 0xdfbe0080
    ctx->pc = 0x105980u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105984: 0xdfb70070
    ctx->pc = 0x105984u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105988: 0xdfb60060
    ctx->pc = 0x105988u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10598c: 0xdfb50050
    ctx->pc = 0x10598cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105990: 0xdfb40040
    ctx->pc = 0x105990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105994: 0xdfb30030
    ctx->pc = 0x105994u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105998: 0xdfb20020
    ctx->pc = 0x105998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10599c: 0xdfb10010
    ctx->pc = 0x10599cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1059a0: 0xdfb00000
    ctx->pc = 0x1059a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1059a4: 0xc7b400a0
    ctx->pc = 0x1059a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1059a8: 0x3e00008
    ctx->pc = 0x1059A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1059ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105868u: goto label_105868;
            case 0x1058D0u: goto label_1058d0;
            case 0x105920u: goto label_105920;
            case 0x10596Cu: goto label_10596c;
            case 0x10597Cu: goto label_10597c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1059B0u;
}
