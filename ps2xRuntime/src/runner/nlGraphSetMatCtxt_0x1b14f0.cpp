#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlGraphSetMatCtxt
// Address: 0x1b14f0 - 0x1b166c
void nlGraphSetMatCtxt_0x1b14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlGraphSetMatCtxt");


    ctx->pc = 0x1b14f0u;

    // 0x1b14f0: 0x27bdffd0
    ctx->pc = 0x1b14f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b14f4: 0x7fbf0020
    ctx->pc = 0x1b14f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1b14f8: 0x7fb10010
    ctx->pc = 0x1b14f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b14fc: 0x7fb00000
    ctx->pc = 0x1b14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1500: 0x14800003
    ctx->pc = 0x1B1500u;
    {
        const bool branch_taken_0x1b1500 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1504u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b1500) {
            ctx->pc = 0x1B1510u;
            goto label_1b1510;
        }
    }
    ctx->pc = 0x1B1508u;
    // 0x1b1508: 0x10000002
    ctx->pc = 0x1B1508u;
    {
        const bool branch_taken_0x1b1508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B150Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b1508) {
            ctx->pc = 0x1B1514u;
            goto label_1b1514;
        }
    }
    ctx->pc = 0x1B1510u;
label_1b1510:
    // 0x1b1510: 0x24100001
    ctx->pc = 0x1b1510u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1b1514:
    // 0x1b1514: 0x3c011001
    ctx->pc = 0x1b1514u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1b1518: 0x8c22d000
    ctx->pc = 0x1b1518u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1b151c: 0x30420100
    ctx->pc = 0x1b151cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1b1520: 0x0
    ctx->pc = 0x1b1520u;
    // NOP
    // 0x1b1524: 0x0
    ctx->pc = 0x1b1524u;
    // NOP
    // 0x1b1528: 0x1440fffa
    ctx->pc = 0x1B1528u;
    {
        const bool branch_taken_0x1b1528 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b1528) {
            ctx->pc = 0x1B1514u;
            goto label_1b1514;
        }
    }
    ctx->pc = 0x1B1530u;
    // 0x1b1530: 0xc069528
    ctx->pc = 0x1B1530u;
    SET_GPR_U32(ctx, 31, 0x1B1538u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1538u; }
        else if (ctx->pc != 0x1B1538u) { ctx->pc = 0x1B1538u; }
    }
    if (ctx->pc != 0x1B1538u) { return; }
    ctx->pc = 0x1B1538u;
    // 0x1b1538: 0x3c031000
    ctx->pc = 0x1b1538u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1b153c: 0x34640008
    ctx->pc = 0x1b153cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 8));
    // 0x1b1540: 0xac440000
    ctx->pc = 0x1b1540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1b1544: 0xac400004
    ctx->pc = 0x1b1544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b1548: 0xac430008
    ctx->pc = 0x1b1548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1b154c: 0x3203c
    ctx->pc = 0x1b154cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1550: 0x3c035100
    ctx->pc = 0x1b1550u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20736 << 16));
    // 0x1b1554: 0x34630008
    ctx->pc = 0x1b1554u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8));
    // 0x1b1558: 0xac43000c
    ctx->pc = 0x1b1558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1b155c: 0x34038007
    ctx->pc = 0x1b155cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32775));
    // 0x1b1560: 0x641825
    ctx->pc = 0x1b1560u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1564: 0xfc430010
    ctx->pc = 0x1b1564u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1b1568: 0x2403000e
    ctx->pc = 0x1b1568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b156c: 0xfc430018
    ctx->pc = 0x1b156cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x1b1570: 0x8e250060
    ctx->pc = 0x1b1570u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1b1574: 0x26030006
    ctx->pc = 0x1b1574u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 6));
    // 0x1b1578: 0x3203c
    ctx->pc = 0x1b1578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b157c: 0x26030014
    ctx->pc = 0x1b157cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 20));
    // 0x1b1580: 0x3483c
    ctx->pc = 0x1b1580u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1584: 0x26030042
    ctx->pc = 0x1b1584u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 66));
    // 0x1b1588: 0xac450020
    ctx->pc = 0x1b1588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x1b158c: 0x8e250064
    ctx->pc = 0x1b158cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1b1590: 0x3403c
    ctx->pc = 0x1b1590u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1594: 0x26030047
    ctx->pc = 0x1b1594u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 71));
    // 0x1b1598: 0x3383c
    ctx->pc = 0x1b1598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b159c: 0x26030034
    ctx->pc = 0x1b159cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 52));
    // 0x1b15a0: 0x4203f
    ctx->pc = 0x1b15a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b15a4: 0xac450024
    ctx->pc = 0x1b15a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
    // 0x1b15a8: 0xfc440028
    ctx->pc = 0x1b15a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 4));
    // 0x1b15ac: 0x8e2a0068
    ctx->pc = 0x1b15acu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1b15b0: 0x3303c
    ctx->pc = 0x1b15b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b15b4: 0x26030036
    ctx->pc = 0x1b15b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 54));
    // 0x1b15b8: 0x3283c
    ctx->pc = 0x1b15b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b15bc: 0x26030008
    ctx->pc = 0x1b15bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 8));
    // 0x1b15c0: 0x3183c
    ctx->pc = 0x1b15c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b15c4: 0xac4a0030
    ctx->pc = 0x1b15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 10));
    // 0x1b15c8: 0x8e2a006c
    ctx->pc = 0x1b15c8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1b15cc: 0x9483f
    ctx->pc = 0x1b15ccu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x1b15d0: 0x8403f
    ctx->pc = 0x1b15d0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1b15d4: 0x7383f
    ctx->pc = 0x1b15d4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1b15d8: 0x6303f
    ctx->pc = 0x1b15d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1b15dc: 0x5283f
    ctx->pc = 0x1b15dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b15e0: 0xac4a0034
    ctx->pc = 0x1b15e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 10));
    // 0x1b15e4: 0xfc490038
    ctx->pc = 0x1b15e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 9));
    // 0x1b15e8: 0x8e290070
    ctx->pc = 0x1b15e8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1b15ec: 0x3183f
    ctx->pc = 0x1b15ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b15f0: 0x24040009
    ctx->pc = 0x1b15f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b15f4: 0xac490040
    ctx->pc = 0x1b15f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 9));
    // 0x1b15f8: 0x8e290074
    ctx->pc = 0x1b15f8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1b15fc: 0xac490044
    ctx->pc = 0x1b15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 9));
    // 0x1b1600: 0xfc480048
    ctx->pc = 0x1b1600u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 8));
    // 0x1b1604: 0x8e280080
    ctx->pc = 0x1b1604u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1b1608: 0xac480050
    ctx->pc = 0x1b1608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 8));
    // 0x1b160c: 0x8e280084
    ctx->pc = 0x1b160cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b1610: 0xac480054
    ctx->pc = 0x1b1610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 8));
    // 0x1b1614: 0xfc470058
    ctx->pc = 0x1b1614u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 7));
    // 0x1b1618: 0x8e270088
    ctx->pc = 0x1b1618u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1b161c: 0xac470060
    ctx->pc = 0x1b161cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 7));
    // 0x1b1620: 0x8e27008c
    ctx->pc = 0x1b1620u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1b1624: 0xac470064
    ctx->pc = 0x1b1624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 7));
    // 0x1b1628: 0xfc460068
    ctx->pc = 0x1b1628u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 6));
    // 0x1b162c: 0x8e260090
    ctx->pc = 0x1b162cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1b1630: 0xac460070
    ctx->pc = 0x1b1630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 6));
    // 0x1b1634: 0x8e260094
    ctx->pc = 0x1b1634u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1b1638: 0xac460074
    ctx->pc = 0x1b1638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 6));
    // 0x1b163c: 0xfc450078
    ctx->pc = 0x1b163cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 5));
    // 0x1b1640: 0x8e2500a0
    ctx->pc = 0x1b1640u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1b1644: 0xac450080
    ctx->pc = 0x1b1644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
    // 0x1b1648: 0x8e2500a4
    ctx->pc = 0x1b1648u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1b164c: 0xac450084
    ctx->pc = 0x1b164cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 5));
    // 0x1b1650: 0xc06952c
    ctx->pc = 0x1B1650u;
    SET_GPR_U32(ctx, 31, 0x1B1658u);
    ctx->pc = 0x1B1654u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 136), GPR_U64(ctx, 3));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1658u; }
        else if (ctx->pc != 0x1B1658u) { ctx->pc = 0x1B1658u; }
    }
    if (ctx->pc != 0x1B1658u) { return; }
    ctx->pc = 0x1B1658u;
    // 0x1b1658: 0x7bbf0020
    ctx->pc = 0x1b1658u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b165c: 0x7bb10010
    ctx->pc = 0x1b165cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1660: 0x7bb00000
    ctx->pc = 0x1b1660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1664: 0x3e00008
    ctx->pc = 0x1B1664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1668u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1510u: goto label_1b1510;
            case 0x1B1514u: goto label_1b1514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B166Cu;
}
