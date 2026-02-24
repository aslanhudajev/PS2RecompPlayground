#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: drawExtender
// Address: 0x1083c0 - 0x108604
void drawExtender_0x1083c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1083c0u;

    // 0x1083c0: 0x8f9982b8
    ctx->pc = 0x1083c0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1083c4: 0x27bdff70
    ctx->pc = 0x1083c4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1083c8: 0xffb70070
    ctx->pc = 0x1083c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1083cc: 0x700014a9
    ctx->pc = 0x1083ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1083d0: 0xffb60060
    ctx->pc = 0x1083d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1083d4: 0x2417000e
    ctx->pc = 0x1083d4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1083d8: 0xffb50050
    ctx->pc = 0x1083d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1083dc: 0x3c061000
    ctx->pc = 0x1083dcu;
    SET_GPR_S32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x1083e0: 0xffb40040
    ctx->pc = 0x1083e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1083e4: 0x3c071000
    ctx->pc = 0x1083e4u;
    SET_GPR_S32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x1083e8: 0x7383c
    ctx->pc = 0x1083e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1083ec: 0x34e78001
    ctx->pc = 0x1083ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)32769);
    // 0x1083f0: 0xffb30030
    ctx->pc = 0x1083f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1083f4: 0x3c0801ff
    ctx->pc = 0x1083f4u;
    SET_GPR_S32(ctx, 8, ((uint32_t)511 << 16));
    // 0x1083f8: 0x84438
    ctx->pc = 0x1083f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x1083fc: 0x3508027f
    ctx->pc = 0x1083fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)639);
    // 0x108400: 0x84438
    ctx->pc = 0x108400u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x108404: 0xffb20020
    ctx->pc = 0x108404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108408: 0x24090040
    ctx->pc = 0x108408u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 64));
    // 0x10840c: 0xffb10010
    ctx->pc = 0x10840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108410: 0x2412001a
    ctx->pc = 0x108410u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 26));
    // 0x108414: 0xffb00000
    ctx->pc = 0x108414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108418: 0x3c0a1000
    ctx->pc = 0x108418u;
    SET_GPR_S32(ctx, 10, ((uint32_t)4096 << 16));
    // 0x10841c: 0xa503c
    ctx->pc = 0x10841cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x108420: 0x354a0003
    ctx->pc = 0x108420u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)3);
    // 0x108424: 0xffbf0080
    ctx->pc = 0x108424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x108428: 0x240b014c
    ctx->pc = 0x108428u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 332));
    // 0x10842c: 0x7f220000
    ctx->pc = 0x10842cu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 2));
    // 0x108430: 0x3c0c7f00
    ctx->pc = 0x108430u;
    SET_GPR_S32(ctx, 12, ((uint32_t)32512 << 16));
    // 0x108434: 0x358c00ff
    ctx->pc = 0x108434u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)255);
    // 0x108438: 0x2402001e
    ctx->pc = 0x108438u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x10843c: 0x240d0001
    ctx->pc = 0x10843cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 1));
    // 0x108440: 0x827018
    ctx->pc = 0x108440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)(uint32_t)result); }
    // 0x108444: 0x3c130002
    ctx->pc = 0x108444u;
    SET_GPR_S32(ctx, 19, ((uint32_t)2 << 16));
    // 0x108448: 0x24140047
    ctx->pc = 0x108448u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 71));
    // 0x10844c: 0x3c158000
    ctx->pc = 0x10844cu;
    SET_GPR_S32(ctx, 21, ((uint32_t)32768 << 16));
    // 0x108450: 0x15a83c
    ctx->pc = 0x108450u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x108454: 0x36b58001
    ctx->pc = 0x108454u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)32769);
    // 0x108458: 0x3c164141
    ctx->pc = 0x108458u;
    SET_GPR_S32(ctx, 22, ((uint32_t)16705 << 16));
    // 0x10845c: 0x36d64141
    ctx->pc = 0x10845cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)16705);
    // 0x108460: 0xaf260000
    ctx->pc = 0x108460u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 6));
    // 0x108464: 0xff270010
    ctx->pc = 0x108464u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 16), GPR_U64(ctx, 7));
    // 0x108468: 0x27240080
    ctx->pc = 0x108468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 25), 128));
    // 0x10846c: 0xff280020
    ctx->pc = 0x10846cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 32), GPR_U64(ctx, 8));
    // 0x108470: 0x2411004d
    ctx->pc = 0x108470u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 77));
    // 0x108474: 0xff290028
    ctx->pc = 0x108474u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 40), GPR_U64(ctx, 9));
    // 0x108478: 0x241000ff
    ctx->pc = 0x108478u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 255));
    // 0x10847c: 0xff2a0030
    ctx->pc = 0x10847cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 48), GPR_U64(ctx, 10));
    // 0x108480: 0x240f007f
    ctx->pc = 0x108480u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 127));
    // 0x108484: 0xff370038
    ctx->pc = 0x108484u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 56), GPR_U64(ctx, 23));
    // 0x108488: 0x24187100
    ctx->pc = 0x108488u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 28928));
    // 0x10848c: 0xff2b0040
    ctx->pc = 0x10848cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 64), GPR_U64(ctx, 11));
    // 0x108490: 0x27220090
    ctx->pc = 0x108490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 25), 144));
    // 0x108494: 0xff2c0050
    ctx->pc = 0x108494u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 80), GPR_U64(ctx, 12));
    // 0x108498: 0x272600a0
    ctx->pc = 0x108498u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 25), 160));
    // 0x10849c: 0xff2d0058
    ctx->pc = 0x10849cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 88), GPR_U64(ctx, 13));
    // 0x1084a0: 0x24ac0700
    ctx->pc = 0x1084a0u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 5), 1792));
    // 0x1084a4: 0xff330060
    ctx->pc = 0x1084a4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 96), GPR_U64(ctx, 19));
    // 0x1084a8: 0xc6100
    ctx->pc = 0x1084a8u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 4));
    // 0x1084ac: 0xff340068
    ctx->pc = 0x1084acu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 104), GPR_U64(ctx, 20));
    // 0x1084b0: 0x3c0d0010
    ctx->pc = 0x1084b0u;
    SET_GPR_S32(ctx, 13, ((uint32_t)16 << 16));
    // 0x1084b4: 0xff350070
    ctx->pc = 0x1084b4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 112), GPR_U64(ctx, 21));
    // 0x1084b8: 0x25ce0710
    ctx->pc = 0x1084b8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1808));
    // 0x1084bc: 0xff360078
    ctx->pc = 0x1084bcu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 120), GPR_U64(ctx, 22));
    // 0x1084c0: 0xe7100
    ctx->pc = 0x1084c0u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 4));
    // 0x1084c4: 0xff370018
    ctx->pc = 0x1084c4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 24), GPR_U64(ctx, 23));
    // 0x1084c8: 0x272700b0
    ctx->pc = 0x1084c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 25), 176));
    // 0x1084cc: 0xaf320080
    ctx->pc = 0x1084ccu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 128), GPR_U32(ctx, 18));
    // 0x1084d0: 0x272900c0
    ctx->pc = 0x1084d0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 25), 192));
    // 0x1084d4: 0xff200048
    ctx->pc = 0x1084d4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 72), GPR_U64(ctx, 0));
    // 0x1084d8: 0x24a50714
    ctx->pc = 0x1084d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1812));
    // 0x1084dc: 0xac910004
    ctx->pc = 0x1084dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x1084e0: 0x272800d0
    ctx->pc = 0x1084e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 25), 208));
    // 0x1084e4: 0xac900008
    ctx->pc = 0x1084e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
    // 0x1084e8: 0x52900
    ctx->pc = 0x1084e8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1084ec: 0xac8f000c
    ctx->pc = 0x1084ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 15));
    // 0x1084f0: 0x272a00e0
    ctx->pc = 0x1084f0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 25), 224));
    // 0x1084f4: 0xaf380090
    ctx->pc = 0x1084f4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 144), GPR_U32(ctx, 24));
    // 0x1084f8: 0x272b00f0
    ctx->pc = 0x1084f8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 25), 240));
    // 0x1084fc: 0xac40000c
    ctx->pc = 0x1084fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x108500: 0x3c137000
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 19, ((uint32_t)28672 << 16));
    // 0x108504: 0xac4c0004
    ctx->pc = 0x108504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 12));
    // 0x108508: 0x202d
    ctx->pc = 0x108508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10850c: 0xac4d0008
    ctx->pc = 0x10850cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 13));
    // 0x108510: 0xaf3200a0
    ctx->pc = 0x108510u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 160), GPR_U32(ctx, 18));
    // 0x108514: 0x700014a9
    ctx->pc = 0x108514u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108518: 0xacd10004
    ctx->pc = 0x108518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
    // 0x10851c: 0xacd00008
    ctx->pc = 0x10851cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 16));
    // 0x108520: 0xaccf000c
    ctx->pc = 0x108520u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 15));
    // 0x108524: 0xaf2e00b0
    ctx->pc = 0x108524u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 176), GPR_U32(ctx, 14));
    // 0x108528: 0xacec0004
    ctx->pc = 0x108528u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 12));
    // 0x10852c: 0xace0000c
    ctx->pc = 0x10852cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x108530: 0xaced0008
    ctx->pc = 0x108530u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 13));
    // 0x108534: 0xaf3200c0
    ctx->pc = 0x108534u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 192), GPR_U32(ctx, 18));
    // 0x108538: 0xad310004
    ctx->pc = 0x108538u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 17));
    // 0x10853c: 0xad300008
    ctx->pc = 0x10853cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 16));
    // 0x108540: 0xad2f000c
    ctx->pc = 0x108540u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 15));
    // 0x108544: 0xaf3800d0
    ctx->pc = 0x108544u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 208), GPR_U32(ctx, 24));
    // 0x108548: 0xad00000c
    ctx->pc = 0x108548u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x10854c: 0xad050004
    ctx->pc = 0x10854cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
    // 0x108550: 0xad0d0008
    ctx->pc = 0x108550u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 13));
    // 0x108554: 0xaf3200e0
    ctx->pc = 0x108554u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 224), GPR_U32(ctx, 18));
    // 0x108558: 0xad510004
    ctx->pc = 0x108558u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 17));
    // 0x10855c: 0xad500008
    ctx->pc = 0x10855cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 16));
    // 0x108560: 0xad4f000c
    ctx->pc = 0x108560u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 15));
    // 0x108564: 0xaf2e00f0
    ctx->pc = 0x108564u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 240), GPR_U32(ctx, 14));
    // 0x108568: 0xad650004
    ctx->pc = 0x108568u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
    // 0x10856c: 0xad6d0008
    ctx->pc = 0x10856cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 13));
    // 0x108570: 0xad60000c
    ctx->pc = 0x108570u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x108574: 0x7f220100
    ctx->pc = 0x108574u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 256), GPR_VEC(ctx, 2));
    // 0x108578: 0x8f220000
    ctx->pc = 0x108578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x10857c: 0xaf330100
    ctx->pc = 0x10857cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 256), GPR_U32(ctx, 19));
    // 0x108580: 0x3442000f
    ctx->pc = 0x108580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)15);
    // 0x108584: 0xc043948
    ctx->pc = 0x108584u;
    SET_GPR_U32(ctx, 31, 0x10858Cu);
    ctx->pc = 0x108588u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10858Cu; }
    }
    if (ctx->pc != 0x10858Cu) { return; }
    ctx->pc = 0x10858Cu;
    // 0x10858c: 0x202d
    ctx->pc = 0x10858cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108590: 0xc043322
    ctx->pc = 0x108590u;
    SET_GPR_U32(ctx, 31, 0x108598u);
    ctx->pc = 0x108594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108598u; }
    }
    if (ctx->pc != 0x108598u) { return; }
    ctx->pc = 0x108598u;
    // 0x108598: 0x8f848490
    ctx->pc = 0x108598u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x10859c: 0x282d
    ctx->pc = 0x10859cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085a0: 0xc04372a
    ctx->pc = 0x1085A0u;
    SET_GPR_U32(ctx, 31, 0x1085A8u);
    ctx->pc = 0x1085A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085A8u; }
    }
    if (ctx->pc != 0x1085A8u) { return; }
    ctx->pc = 0x1085A8u;
    // 0x1085a8: 0x8f8382b8
    ctx->pc = 0x1085a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1085ac: 0x3c050fff
    ctx->pc = 0x1085acu;
    SET_GPR_S32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x1085b0: 0x34a5ffff
    ctx->pc = 0x1085b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)65535);
    // 0x1085b4: 0x8f848490
    ctx->pc = 0x1085b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1085b8: 0xc0435d6
    ctx->pc = 0x1085B8u;
    SET_GPR_U32(ctx, 31, 0x1085C0u);
    ctx->pc = 0x1085BCu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085C0u; }
    }
    if (ctx->pc != 0x1085C0u) { return; }
    ctx->pc = 0x1085C0u;
    // 0x1085c0: 0x202d
    ctx->pc = 0x1085c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085c4: 0xc043322
    ctx->pc = 0x1085C4u;
    SET_GPR_U32(ctx, 31, 0x1085CCu);
    ctx->pc = 0x1085C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085CCu; }
    }
    if (ctx->pc != 0x1085CCu) { return; }
    ctx->pc = 0x1085CCu;
    // 0x1085cc: 0x8f848490
    ctx->pc = 0x1085ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1085d0: 0x282d
    ctx->pc = 0x1085d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085d4: 0xdfbf0080
    ctx->pc = 0x1085d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1085d8: 0x302d
    ctx->pc = 0x1085d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085dc: 0xdfb70070
    ctx->pc = 0x1085dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1085e0: 0xdfb60060
    ctx->pc = 0x1085e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1085e4: 0xdfb50050
    ctx->pc = 0x1085e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1085e8: 0xdfb40040
    ctx->pc = 0x1085e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1085ec: 0xdfb30030
    ctx->pc = 0x1085ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1085f0: 0xdfb20020
    ctx->pc = 0x1085f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1085f4: 0xdfb10010
    ctx->pc = 0x1085f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1085f8: 0xdfb00000
    ctx->pc = 0x1085f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1085fc: 0x804372a
    ctx->pc = 0x1085FCu;
    ctx->pc = 0x108600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x10DCA8u;
    sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x108604u;
}
