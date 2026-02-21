#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: displayTrayOpenMessage
// Address: 0x108608 - 0x1088ac
void displayTrayOpenMessage_0x108608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108608u;

    // 0x108608: 0x8f8282b8
    ctx->pc = 0x108608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x10860c: 0x27bdff60
    ctx->pc = 0x10860cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x108610: 0xffbe0080
    ctx->pc = 0x108610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x108614: 0x70001ca9
    ctx->pc = 0x108614u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108618: 0xffb70070
    ctx->pc = 0x108618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10861c: 0x3c095000
    ctx->pc = 0x10861cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)20480 << 16));
    // 0x108620: 0x9483c
    ctx->pc = 0x108620u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x108624: 0x35298001
    ctx->pc = 0x108624u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 32769));
    // 0x108628: 0xffb60060
    ctx->pc = 0x108628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10862c: 0x240f000e
    ctx->pc = 0x10862cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 14));
    // 0x108630: 0xffb50050
    ctx->pc = 0x108630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x108634: 0x240d0080
    ctx->pc = 0x108634u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 128));
    // 0x108638: 0xffb40040
    ctx->pc = 0x108638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10863c: 0x240e014c
    ctx->pc = 0x10863cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 332));
    // 0x108640: 0xffb30030
    ctx->pc = 0x108640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x108644: 0x3c1e1000
    ctx->pc = 0x108644u;
    SET_GPR_U32(ctx, 30, ((uint32_t)4096 << 16));
    // 0x108648: 0x1ef03c
    ctx->pc = 0x108648u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 0));
    // 0x10864c: 0x37de0001
    ctx->pc = 0x10864cu;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 1));
    // 0x108650: 0xffb20020
    ctx->pc = 0x108650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108654: 0x3c041000
    ctx->pc = 0x108654u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x108658: 0x4203c
    ctx->pc = 0x108658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10865c: 0x34840002
    ctx->pc = 0x10865cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 2));
    // 0x108660: 0xffb10010
    ctx->pc = 0x108660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108664: 0x2405000a
    ctx->pc = 0x108664u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x108668: 0xffb00000
    ctx->pc = 0x108668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10866c: 0x24060042
    ctx->pc = 0x10866cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 66));
    // 0x108670: 0xffbf0090
    ctx->pc = 0x108670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x108674: 0x24470070
    ctx->pc = 0x108674u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 112));
    // 0x108678: 0x7c430000
    ctx->pc = 0x108678u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x10867c: 0x2418007f
    ctx->pc = 0x10867cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 127));
    // 0x108680: 0xfc490060
    ctx->pc = 0x108680u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 9));
    // 0x108684: 0x3c031000
    ctx->pc = 0x108684u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x108688: 0x3c090004
    ctx->pc = 0x108688u;
    SET_GPR_U32(ctx, 9, ((uint32_t)4 << 16));
    // 0x10868c: 0x35294441
    ctx->pc = 0x10868cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 17473));
    // 0x108690: 0xac430000
    ctx->pc = 0x108690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x108694: 0xfc440010
    ctx->pc = 0x108694u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x108698: 0x24157240
    ctx->pc = 0x108698u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 29248));
    // 0x10869c: 0xfc450030
    ctx->pc = 0x10869cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 5));
    // 0x1086a0: 0x3c030010
    ctx->pc = 0x1086a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x1086a4: 0xfc460038
    ctx->pc = 0x1086a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 6));
    // 0x1086a8: 0x24440080
    ctx->pc = 0x1086a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 128));
    // 0x1086ac: 0xfc5e0040
    ctx->pc = 0x1086acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 30));
    // 0x1086b0: 0x24107960
    ctx->pc = 0x1086b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 31072));
    // 0x1086b4: 0xfc490068
    ctx->pc = 0x1086b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 9));
    // 0x1086b8: 0x34128dc0
    ctx->pc = 0x1086b8u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 0), 36288));
    // 0x1086bc: 0xfc4f0018
    ctx->pc = 0x1086bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 15));
    // 0x1086c0: 0x24450090
    ctx->pc = 0x1086c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 144));
    // 0x1086c4: 0xfc4e0020
    ctx->pc = 0x1086c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 14));
    // 0x1086c8: 0x244600a0
    ctx->pc = 0x1086c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 160));
    // 0x1086cc: 0xfc400028
    ctx->pc = 0x1086ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 0));
    // 0x1086d0: 0x341186a0
    ctx->pc = 0x1086d0u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 0), 34464));
    // 0x1086d4: 0xfc4f0048
    ctx->pc = 0x1086d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 15));
    // 0x1086d8: 0x244800b0
    ctx->pc = 0x1086d8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 176));
    // 0x1086dc: 0xfc4e0050
    ctx->pc = 0x1086dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 14));
    // 0x1086e0: 0x244a00f0
    ctx->pc = 0x1086e0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 240));
    // 0x1086e4: 0xfc400058
    ctx->pc = 0x1086e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 0));
    // 0x1086e8: 0x24177280
    ctx->pc = 0x1086e8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 29312));
    // 0x1086ec: 0xac4d0070
    ctx->pc = 0x1086ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 13));
    // 0x1086f0: 0x244b0100
    ctx->pc = 0x1086f0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 256));
    // 0x1086f4: 0xacf8000c
    ctx->pc = 0x1086f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 24));
    // 0x1086f8: 0x241379a0
    ctx->pc = 0x1086f8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 31136));
    // 0x1086fc: 0xace00004
    ctx->pc = 0x1086fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x108700: 0x34168d80
    ctx->pc = 0x108700u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 0), 36224));
    // 0x108704: 0xace00008
    ctx->pc = 0x108704u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x108708: 0x24490110
    ctx->pc = 0x108708u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 272));
    // 0x10870c: 0xac550080
    ctx->pc = 0x10870cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 21));
    // 0x108710: 0x24470120
    ctx->pc = 0x108710u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 288));
    // 0x108714: 0xac900004
    ctx->pc = 0x108714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x108718: 0x34148660
    ctx->pc = 0x108718u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 0), 34400));
    // 0x10871c: 0xac830008
    ctx->pc = 0x10871cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x108720: 0x244c0130
    ctx->pc = 0x108720u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 304));
    // 0x108724: 0xac80000c
    ctx->pc = 0x108724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x108728: 0x3c191000
    ctx->pc = 0x108728u;
    SET_GPR_U32(ctx, 25, ((uint32_t)4096 << 16));
    // 0x10872c: 0x19c83c
    ctx->pc = 0x10872cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 0));
    // 0x108730: 0x37398001
    ctx->pc = 0x108730u;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 25), 32769));
    // 0x108734: 0xac520090
    ctx->pc = 0x108734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 18));
    // 0x108738: 0x202d
    ctx->pc = 0x108738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10873c: 0xacb00004
    ctx->pc = 0x10873cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x108740: 0xaca30008
    ctx->pc = 0x108740u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x108744: 0x24100040
    ctx->pc = 0x108744u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 64));
    // 0x108748: 0xaca0000c
    ctx->pc = 0x108748u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x10874c: 0xac5500a0
    ctx->pc = 0x10874cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 21));
    // 0x108750: 0x3c055000
    ctx->pc = 0x108750u;
    SET_GPR_U32(ctx, 5, ((uint32_t)20480 << 16));
    // 0x108754: 0x5283c
    ctx->pc = 0x108754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x108758: 0x34a58001
    ctx->pc = 0x108758u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 32769));
    // 0x10875c: 0xacd10004
    ctx->pc = 0x10875cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
    // 0x108760: 0xacc30008
    ctx->pc = 0x108760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x108764: 0xacc0000c
    ctx->pc = 0x108764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x108768: 0xac5200b0
    ctx->pc = 0x108768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 18));
    // 0x10876c: 0x3c060004
    ctx->pc = 0x10876cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)4 << 16));
    // 0x108770: 0x34c64441
    ctx->pc = 0x108770u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 17473));
    // 0x108774: 0xad110004
    ctx->pc = 0x108774u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 17));
    // 0x108778: 0xad030008
    ctx->pc = 0x108778u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x10877c: 0xad00000c
    ctx->pc = 0x10877cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x108780: 0xfc5e00c0
    ctx->pc = 0x108780u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 30));
    // 0x108784: 0xfc4500e0
    ctx->pc = 0x108784u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 224), GPR_U64(ctx, 5));
    // 0x108788: 0xfc4600e8
    ctx->pc = 0x108788u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 232), GPR_U64(ctx, 6));
    // 0x10878c: 0x70002ca9
    ctx->pc = 0x10878cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108790: 0xfc4e00d0
    ctx->pc = 0x108790u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 208), GPR_U64(ctx, 14));
    // 0x108794: 0x3c067000
    ctx->pc = 0x108794u;
    SET_GPR_U32(ctx, 6, ((uint32_t)28672 << 16));
    // 0x108798: 0xfc4f00c8
    ctx->pc = 0x108798u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 200), GPR_U64(ctx, 15));
    // 0x10879c: 0xfc4000d8
    ctx->pc = 0x10879cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 216), GPR_U64(ctx, 0));
    // 0x1087a0: 0xac4d00f0
    ctx->pc = 0x1087a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 13));
    // 0x1087a4: 0xad58000c
    ctx->pc = 0x1087a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 24));
    // 0x1087a8: 0xad4d0008
    ctx->pc = 0x1087a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 13));
    // 0x1087ac: 0xad4d0004
    ctx->pc = 0x1087acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 13));
    // 0x1087b0: 0xac570100
    ctx->pc = 0x1087b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 23));
    // 0x1087b4: 0xad730004
    ctx->pc = 0x1087b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 19));
    // 0x1087b8: 0xad60000c
    ctx->pc = 0x1087b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x1087bc: 0xad630008
    ctx->pc = 0x1087bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    // 0x1087c0: 0xac560110
    ctx->pc = 0x1087c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 22));
    // 0x1087c4: 0xad330004
    ctx->pc = 0x1087c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 19));
    // 0x1087c8: 0xad20000c
    ctx->pc = 0x1087c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x1087cc: 0xad230008
    ctx->pc = 0x1087ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x1087d0: 0xac570120
    ctx->pc = 0x1087d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 23));
    // 0x1087d4: 0x3c0901e8
    ctx->pc = 0x1087d4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)488 << 16));
    // 0x1087d8: 0x35290018
    ctx->pc = 0x1087d8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 24));
    // 0x1087dc: 0x94c38
    ctx->pc = 0x1087dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1087e0: 0x35290266
    ctx->pc = 0x1087e0u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 614));
    // 0x1087e4: 0x94c38
    ctx->pc = 0x1087e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1087e8: 0x35290018
    ctx->pc = 0x1087e8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 24));
    // 0x1087ec: 0xacf40004
    ctx->pc = 0x1087ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x1087f0: 0xace0000c
    ctx->pc = 0x1087f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1087f4: 0xace30008
    ctx->pc = 0x1087f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1087f8: 0xac560130
    ctx->pc = 0x1087f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 22));
    // 0x1087fc: 0xad940004
    ctx->pc = 0x1087fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 20));
    // 0x108800: 0xad830008
    ctx->pc = 0x108800u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 3));
    // 0x108804: 0xad80000c
    ctx->pc = 0x108804u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x108808: 0xfc500158
    ctx->pc = 0x108808u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 344), GPR_U64(ctx, 16));
    // 0x10880c: 0x8c430000
    ctx->pc = 0x10880cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108810: 0xfc590140
    ctx->pc = 0x108810u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 320), GPR_U64(ctx, 25));
    // 0x108814: 0x34630015
    ctx->pc = 0x108814u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 21));
    // 0x108818: 0xfc4f0148
    ctx->pc = 0x108818u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 328), GPR_U64(ctx, 15));
    // 0x10881c: 0xfc490150
    ctx->pc = 0x10881cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 336), GPR_U64(ctx, 9));
    // 0x108820: 0xac430000
    ctx->pc = 0x108820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x108824: 0x7c450160
    ctx->pc = 0x108824u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 352), GPR_VEC(ctx, 5));
    // 0x108828: 0xc043948
    ctx->pc = 0x108828u;
    SET_GPR_U32(ctx, 31, 0x108830u);
    ctx->pc = 0x10882Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 6));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108830u; }
    }
    if (ctx->pc != 0x108830u) { return; }
    ctx->pc = 0x108830u;
    // 0x108830: 0x202d
    ctx->pc = 0x108830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108834: 0xc043322
    ctx->pc = 0x108834u;
    SET_GPR_U32(ctx, 31, 0x10883Cu);
    ctx->pc = 0x108838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10883Cu; }
    }
    if (ctx->pc != 0x10883Cu) { return; }
    ctx->pc = 0x10883Cu;
    // 0x10883c: 0x8f848490
    ctx->pc = 0x10883cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x108840: 0x282d
    ctx->pc = 0x108840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108844: 0xc04372a
    ctx->pc = 0x108844u;
    SET_GPR_U32(ctx, 31, 0x10884Cu);
    ctx->pc = 0x108848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10884Cu; }
    }
    if (ctx->pc != 0x10884Cu) { return; }
    ctx->pc = 0x10884Cu;
    // 0x10884c: 0x8f8382b8
    ctx->pc = 0x10884cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x108850: 0x3c050fff
    ctx->pc = 0x108850u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x108854: 0x34a5ffff
    ctx->pc = 0x108854u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x108858: 0x8f848490
    ctx->pc = 0x108858u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x10885c: 0xc0435d6
    ctx->pc = 0x10885Cu;
    SET_GPR_U32(ctx, 31, 0x108864u);
    ctx->pc = 0x108860u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108864u; }
    }
    if (ctx->pc != 0x108864u) { return; }
    ctx->pc = 0x108864u;
    // 0x108864: 0x202d
    ctx->pc = 0x108864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108868: 0xc043322
    ctx->pc = 0x108868u;
    SET_GPR_U32(ctx, 31, 0x108870u);
    ctx->pc = 0x10886Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108870u; }
    }
    if (ctx->pc != 0x108870u) { return; }
    ctx->pc = 0x108870u;
    // 0x108870: 0x8f848490
    ctx->pc = 0x108870u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x108874: 0x282d
    ctx->pc = 0x108874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108878: 0xdfbf0090
    ctx->pc = 0x108878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10887c: 0x302d
    ctx->pc = 0x10887cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108880: 0xdfbe0080
    ctx->pc = 0x108880u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108884: 0xdfb70070
    ctx->pc = 0x108884u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108888: 0xdfb60060
    ctx->pc = 0x108888u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10888c: 0xdfb50050
    ctx->pc = 0x10888cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108890: 0xdfb40040
    ctx->pc = 0x108890u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108894: 0xdfb30030
    ctx->pc = 0x108894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108898: 0xdfb20020
    ctx->pc = 0x108898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10889c: 0xdfb10010
    ctx->pc = 0x10889cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1088a0: 0xdfb00000
    ctx->pc = 0x1088a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1088a4: 0x804372a
    ctx->pc = 0x1088A4u;
    ctx->pc = 0x1088A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x10DCA8u;
    sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x1088ACu;
}
