#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: AIFF_GetInfo
// Address: 0x1667e0 - 0x166b54
void AIFF_GetInfo_0x1667e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AIFF_GetInfo");


    ctx->pc = 0x1667e0u;

    // 0x1667e0: 0x27bdffa0
    ctx->pc = 0x1667e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1667e4: 0x80c02d
    ctx->pc = 0x1667e4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667e8: 0xffb30040
    ctx->pc = 0x1667e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1667ec: 0x3c0f00ff
    ctx->pc = 0x1667ecu;
    SET_GPR_U32(ctx, 15, ((uint32_t)255 << 16));
    // 0x1667f0: 0xffb20030
    ctx->pc = 0x1667f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1667f4: 0xa0982d
    ctx->pc = 0x1667f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667f8: 0xffb10020
    ctx->pc = 0x1667f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1667fc: 0xc0902d
    ctx->pc = 0x1667fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166800: 0xffb00010
    ctx->pc = 0x166800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x166804: 0x3c0e4d52
    ctx->pc = 0x166804u;
    SET_GPR_U32(ctx, 14, ((uint32_t)19794 << 16));
    // 0x166808: 0xffb40050
    ctx->pc = 0x166808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x16680c: 0xe0882d
    ctx->pc = 0x16680cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166810: 0x100802d
    ctx->pc = 0x166810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166814: 0x35ce4f46
    ctx->pc = 0x166814u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 20294));
    // 0x166818: 0x93020003
    ctx->pc = 0x166818u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x16681c: 0x930d0000
    ctx->pc = 0x16681cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x166820: 0x930b0002
    ctx->pc = 0x166820u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x166824: 0x21600
    ctx->pc = 0x166824u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x166828: 0x930c0001
    ctx->pc = 0x166828u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x16682c: 0x1a26825
    ctx->pc = 0x16682cu;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x166830: 0x27180004
    ctx->pc = 0x166830u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x166834: 0xb5c00
    ctx->pc = 0x166834u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 16));
    // 0x166838: 0x93050003
    ctx->pc = 0x166838u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x16683c: 0xc6200
    ctx->pc = 0x16683cu;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 8));
    // 0x166840: 0x93030002
    ctx->pc = 0x166840u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x166844: 0x16c5825
    ctx->pc = 0x166844u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x166848: 0x93040001
    ctx->pc = 0x166848u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x16684c: 0x52e00
    ctx->pc = 0x16684cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x166850: 0x93020000
    ctx->pc = 0x166850u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x166854: 0x31c00
    ctx->pc = 0x166854u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x166858: 0x42200
    ctx->pc = 0x166858u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x16685c: 0x27180004
    ctx->pc = 0x16685cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x166860: 0x451025
    ctx->pc = 0x166860u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x166864: 0x641825
    ctx->pc = 0x166864u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x166868: 0x43c825
    ctx->pc = 0x166868u;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16686c: 0x930a0003
    ctx->pc = 0x16686cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x166870: 0x191203
    ctx->pc = 0x166870u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 8));
    // 0x166874: 0x93040002
    ctx->pc = 0x166874u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x166878: 0x93090001
    ctx->pc = 0x166878u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x16687c: 0x3042ff00
    ctx->pc = 0x16687cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
    // 0x166880: 0x192e02
    ctx->pc = 0x166880u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 25), 24));
    // 0x166884: 0x191a00
    ctx->pc = 0x166884u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 25), 8));
    // 0x166888: 0x93060000
    ctx->pc = 0x166888u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x16688c: 0xa22825
    ctx->pc = 0x16688cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x166890: 0x6f1824
    ctx->pc = 0x166890u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x166894: 0xa5600
    ctx->pc = 0x166894u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 24));
    // 0x166898: 0x42400
    ctx->pc = 0x166898u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x16689c: 0x94a00
    ctx->pc = 0x16689cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
    // 0x1668a0: 0xca3025
    ctx->pc = 0x1668a0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1668a4: 0xa32825
    ctx->pc = 0x1668a4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1668a8: 0x892025
    ctx->pc = 0x1668a8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1668ac: 0x191600
    ctx->pc = 0x1668acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 25), 24));
    // 0x1668b0: 0xc43025
    ctx->pc = 0x1668b0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1668b4: 0x1ab6825
    ctx->pc = 0x1668b4u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1668b8: 0xa2c825
    ctx->pc = 0x1668b8u;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1668bc: 0x602d
    ctx->pc = 0x1668bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668c0: 0x782d
    ctx->pc = 0x1668c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668c4: 0x502d
    ctx->pc = 0x1668c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668c8: 0x27180004
    ctx->pc = 0x1668c8u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x1668cc: 0x15ae009a
    ctx->pc = 0x1668CCu;
    {
        const bool branch_taken_0x1668cc = (GPR_U32(ctx, 13) != GPR_U32(ctx, 14));
        ctx->pc = 0x1668D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1668cc) {
            ctx->pc = 0x166B38u;
            goto label_166b38;
        }
    }
    ctx->pc = 0x1668D4u;
    // 0x1668d4: 0x3c024646
    ctx->pc = 0x1668d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17990 << 16));
    // 0x1668d8: 0x34424941
    ctx->pc = 0x1668d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 18753));
    // 0x1668dc: 0x10c20003
    ctx->pc = 0x1668DCu;
    {
        const bool branch_taken_0x1668dc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x1668E0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
        if (branch_taken_0x1668dc) {
            ctx->pc = 0x1668ECu;
            goto label_1668ec;
        }
    }
    ctx->pc = 0x1668E4u;
label_1668e4:
    // 0x1668e4: 0x10000094
    ctx->pc = 0x1668E4u;
    {
        const bool branch_taken_0x1668e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1668E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1668e4) {
            ctx->pc = 0x166B38u;
            goto label_166b38;
        }
    }
    ctx->pc = 0x1668ECu;
label_1668ec:
    // 0x1668ec: 0x244bfffc
    ctx->pc = 0x1668ecu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1668f0: 0x30b182b
    ctx->pc = 0x1668f0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x1668f4: 0x1060008f
    ctx->pc = 0x1668F4u;
    {
        const bool branch_taken_0x1668f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1668F8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x1668f4) {
            ctx->pc = 0x166B34u;
            goto label_166b34;
        }
    }
    ctx->pc = 0x1668FCu;
    // 0x1668fc: 0x3c0e00ff
    ctx->pc = 0x1668fcu;
    SET_GPR_U32(ctx, 14, ((uint32_t)255 << 16));
    // 0x166900: 0x93020003
    ctx->pc = 0x166900u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x166904: 0x0
    ctx->pc = 0x166904u;
    // NOP
label_166908:
    // 0x166908: 0x3c09444e
    ctx->pc = 0x166908u;
    SET_GPR_U32(ctx, 9, ((uint32_t)17486 << 16));
    // 0x16690c: 0x93080000
    ctx->pc = 0x16690cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x166910: 0x35295353
    ctx->pc = 0x166910u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 21331));
    // 0x166914: 0x93060002
    ctx->pc = 0x166914u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x166918: 0x21600
    ctx->pc = 0x166918u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x16691c: 0x93070001
    ctx->pc = 0x16691cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x166920: 0x1024025
    ctx->pc = 0x166920u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x166924: 0x27180004
    ctx->pc = 0x166924u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x166928: 0x63400
    ctx->pc = 0x166928u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x16692c: 0x93050003
    ctx->pc = 0x16692cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x166930: 0x73a00
    ctx->pc = 0x166930u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x166934: 0x93030002
    ctx->pc = 0x166934u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x166938: 0xc73025
    ctx->pc = 0x166938u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16693c: 0x93040001
    ctx->pc = 0x16693cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x166940: 0x52e00
    ctx->pc = 0x166940u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x166944: 0x93020000
    ctx->pc = 0x166944u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x166948: 0x31c00
    ctx->pc = 0x166948u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x16694c: 0x42200
    ctx->pc = 0x16694cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x166950: 0x1066825
    ctx->pc = 0x166950u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x166954: 0x641825
    ctx->pc = 0x166954u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x166958: 0x451025
    ctx->pc = 0x166958u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16695c: 0x43c825
    ctx->pc = 0x16695cu;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166960: 0x27180004
    ctx->pc = 0x166960u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x166964: 0x191a03
    ctx->pc = 0x166964u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x166968: 0x192602
    ctx->pc = 0x166968u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 25), 24));
    // 0x16696c: 0x3063ff00
    ctx->pc = 0x16696cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65280));
    // 0x166970: 0x191200
    ctx->pc = 0x166970u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 25), 8));
    // 0x166974: 0x832025
    ctx->pc = 0x166974u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x166978: 0x4e1024
    ctx->pc = 0x166978u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x16697c: 0x822025
    ctx->pc = 0x16697cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x166980: 0x191e00
    ctx->pc = 0x166980u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 25), 24));
    // 0x166984: 0x11a9004a
    ctx->pc = 0x166984u;
    {
        const bool branch_taken_0x166984 = (GPR_U32(ctx, 13) == GPR_U32(ctx, 9));
        ctx->pc = 0x166988u;
        SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x166984) {
            ctx->pc = 0x166AB0u;
            goto label_166ab0;
        }
    }
    ctx->pc = 0x16698Cu;
    // 0x16698c: 0x3c024d4d
    ctx->pc = 0x16698cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)19789 << 16));
    // 0x166990: 0x34424f43
    ctx->pc = 0x166990u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 20291));
    // 0x166994: 0x15a20061
    ctx->pc = 0x166994u;
    {
        const bool branch_taken_0x166994 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 2));
        ctx->pc = 0x166998u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 25), 1));
        if (branch_taken_0x166994) {
            ctx->pc = 0x166B1Cu;
            goto label_166b1c;
        }
    }
    ctx->pc = 0x16699Cu;
    // 0x16699c: 0x15800063
    ctx->pc = 0x16699Cu;
    {
        const bool branch_taken_0x16699c = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x1669A0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
        if (branch_taken_0x16699c) {
            ctx->pc = 0x166B2Cu;
            goto label_166b2c;
        }
    }
    ctx->pc = 0x1669A4u;
    // 0x1669a4: 0x2b220012
    ctx->pc = 0x1669a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), 18));
    // 0x1669a8: 0x1440ffce
    ctx->pc = 0x1669A8u;
    {
        const bool branch_taken_0x1669a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1669ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16398));
        if (branch_taken_0x1669a8) {
            ctx->pc = 0x1668E4u;
            goto label_1668e4;
        }
    }
    ctx->pc = 0x1669B0u;
    // 0x1669b0: 0x93030001
    ctx->pc = 0x1669b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1669b4: 0x93020000
    ctx->pc = 0x1669b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1669b8: 0x31a00
    ctx->pc = 0x1669b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1669bc: 0x27180002
    ctx->pc = 0x1669bcu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 2));
    // 0x1669c0: 0x431025
    ctx->pc = 0x1669c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1669c4: 0x21a00
    ctx->pc = 0x1669c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1669c8: 0x240c0001
    ctx->pc = 0x1669c8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1669cc: 0x3063ff00
    ctx->pc = 0x1669ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65280));
    // 0x1669d0: 0x21202
    ctx->pc = 0x1669d0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x1669d4: 0x431025
    ctx->pc = 0x1669d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1669d8: 0xae420000
    ctx->pc = 0x1669d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1669dc: 0x93050003
    ctx->pc = 0x1669dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1669e0: 0x93020002
    ctx->pc = 0x1669e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1669e4: 0x93040001
    ctx->pc = 0x1669e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1669e8: 0x52e00
    ctx->pc = 0x1669e8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x1669ec: 0x93030000
    ctx->pc = 0x1669ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1669f0: 0x21400
    ctx->pc = 0x1669f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1669f4: 0x42200
    ctx->pc = 0x1669f4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x1669f8: 0x27180004
    ctx->pc = 0x1669f8u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x1669fc: 0x441025
    ctx->pc = 0x1669fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x166a00: 0x651825
    ctx->pc = 0x166a00u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x166a04: 0x621825
    ctx->pc = 0x166a04u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166a08: 0x32a03
    ctx->pc = 0x166a08u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x166a0c: 0x32200
    ctx->pc = 0x166a0cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x166a10: 0x31602
    ctx->pc = 0x166a10u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 24));
    // 0x166a14: 0x30a5ff00
    ctx->pc = 0x166a14u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
    // 0x166a18: 0x31e00
    ctx->pc = 0x166a18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x166a1c: 0x8e2024
    ctx->pc = 0x166a1cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x166a20: 0x852025
    ctx->pc = 0x166a20u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x166a24: 0x431025
    ctx->pc = 0x166a24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166a28: 0x441025
    ctx->pc = 0x166a28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x166a2c: 0xae020000
    ctx->pc = 0x166a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x166a30: 0x93040001
    ctx->pc = 0x166a30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x166a34: 0x93020000
    ctx->pc = 0x166a34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x166a38: 0x42200
    ctx->pc = 0x166a38u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x166a3c: 0x27180002
    ctx->pc = 0x166a3cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 2));
    // 0x166a40: 0x441025
    ctx->pc = 0x166a40u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x166a44: 0x21a00
    ctx->pc = 0x166a44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x166a48: 0x3063ff00
    ctx->pc = 0x166a48u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65280));
    // 0x166a4c: 0x21202
    ctx->pc = 0x166a4cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x166a50: 0x431025
    ctx->pc = 0x166a50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166a54: 0xae220000
    ctx->pc = 0x166a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x166a58: 0x93050000
    ctx->pc = 0x166a58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x166a5c: 0x93030001
    ctx->pc = 0x166a5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x166a60: 0x27180002
    ctx->pc = 0x166a60u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 2));
    // 0x166a64: 0x93040001
    ctx->pc = 0x166a64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x166a68: 0x31a00
    ctx->pc = 0x166a68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x166a6c: 0x93020000
    ctx->pc = 0x166a6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x166a70: 0xa32825
    ctx->pc = 0x166a70u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x166a74: 0x42200
    ctx->pc = 0x166a74u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x166a78: 0x52a02
    ctx->pc = 0x166a78u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 8));
    // 0x166a7c: 0x441025
    ctx->pc = 0x166a7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x166a80: 0xc53023
    ctx->pc = 0x166a80u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x166a84: 0x21a00
    ctx->pc = 0x166a84u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x166a88: 0x27180008
    ctx->pc = 0x166a88u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 8));
    // 0x166a8c: 0x21202
    ctx->pc = 0x166a8cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x166a90: 0x741824
    ctx->pc = 0x166a90u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x166a94: 0x431025
    ctx->pc = 0x166a94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166a98: 0x3042ffff
    ctx->pc = 0x166a98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x166a9c: 0xc21007
    ctx->pc = 0x166a9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x166aa0: 0x11e00021
    ctx->pc = 0x166AA0u;
    {
        const bool branch_taken_0x166aa0 = (GPR_U32(ctx, 15) == GPR_U32(ctx, 0));
        ctx->pc = 0x166AA4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x166aa0) {
            ctx->pc = 0x166B28u;
            goto label_166b28;
        }
    }
    ctx->pc = 0x166AA8u;
    // 0x166aa8: 0x10000023
    ctx->pc = 0x166AA8u;
    {
        const bool branch_taken_0x166aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x166AACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166aa8) {
            ctx->pc = 0x166B38u;
            goto label_166b38;
        }
    }
    ctx->pc = 0x166AB0u;
label_166ab0:
    // 0x166ab0: 0x15e0001e
    ctx->pc = 0x166AB0u;
    {
        const bool branch_taken_0x166ab0 = (GPR_U32(ctx, 15) != GPR_U32(ctx, 0));
        ctx->pc = 0x166AB4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
        if (branch_taken_0x166ab0) {
            ctx->pc = 0x166B2Cu;
            goto label_166b2c;
        }
    }
    ctx->pc = 0x166AB8u;
    // 0x166ab8: 0x93050003
    ctx->pc = 0x166ab8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x166abc: 0x240f0001
    ctx->pc = 0x166abcu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 1));
    // 0x166ac0: 0x93020002
    ctx->pc = 0x166ac0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x166ac4: 0x93040001
    ctx->pc = 0x166ac4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x166ac8: 0x52e00
    ctx->pc = 0x166ac8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x166acc: 0x93030000
    ctx->pc = 0x166accu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x166ad0: 0x21400
    ctx->pc = 0x166ad0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x166ad4: 0x42200
    ctx->pc = 0x166ad4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x166ad8: 0x27180004
    ctx->pc = 0x166ad8u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 4));
    // 0x166adc: 0x651825
    ctx->pc = 0x166adcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x166ae0: 0x441025
    ctx->pc = 0x166ae0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x166ae4: 0x621025
    ctx->pc = 0x166ae4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166ae8: 0x22a02
    ctx->pc = 0x166ae8u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 2), 8));
    // 0x166aec: 0x22200
    ctx->pc = 0x166aecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 8));
    // 0x166af0: 0x21e02
    ctx->pc = 0x166af0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 24));
    // 0x166af4: 0x8e2024
    ctx->pc = 0x166af4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x166af8: 0x21600
    ctx->pc = 0x166af8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x166afc: 0x30a5ff00
    ctx->pc = 0x166afcu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
    // 0x166b00: 0x621825
    ctx->pc = 0x166b00u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166b04: 0x852025
    ctx->pc = 0x166b04u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x166b08: 0x641025
    ctx->pc = 0x166b08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x166b0c: 0x11800006
    ctx->pc = 0x166B0Cu;
    {
        const bool branch_taken_0x166b0c = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x166B10u;
        SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
        if (branch_taken_0x166b0c) {
            ctx->pc = 0x166B28u;
            goto label_166b28;
        }
    }
    ctx->pc = 0x166B14u;
    // 0x166b14: 0x10000008
    ctx->pc = 0x166B14u;
    {
        const bool branch_taken_0x166b14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x166B18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166b14) {
            ctx->pc = 0x166B38u;
            goto label_166b38;
        }
    }
    ctx->pc = 0x166B1Cu;
label_166b1c:
    // 0x166b1c: 0x2403fffe
    ctx->pc = 0x166b1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x166b20: 0x431024
    ctx->pc = 0x166b20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166b24: 0x302c021
    ctx->pc = 0x166b24u;
    SET_GPR_U32(ctx, 24, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
label_166b28:
    // 0x166b28: 0x30b102b
    ctx->pc = 0x166b28u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
label_166b2c:
    // 0x166b2c: 0x5440ff76
    ctx->pc = 0x166B2Cu;
    {
        const bool branch_taken_0x166b2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x166b2c) {
            ctx->pc = 0x166B30u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
            ctx->pc = 0x166908u;
            goto label_166908;
        }
    }
    ctx->pc = 0x166B34u;
label_166b34:
    // 0x166b34: 0x140102d
    ctx->pc = 0x166b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_166b38:
    // 0x166b38: 0xdfb40050
    ctx->pc = 0x166b38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166b3c: 0xdfb30040
    ctx->pc = 0x166b3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166b40: 0xdfb20030
    ctx->pc = 0x166b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166b44: 0xdfb10020
    ctx->pc = 0x166b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166b48: 0xdfb00010
    ctx->pc = 0x166b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166b4c: 0x3e00008
    ctx->pc = 0x166B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166B50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1668E4u: goto label_1668e4;
            case 0x1668ECu: goto label_1668ec;
            case 0x166908u: goto label_166908;
            case 0x166AB0u: goto label_166ab0;
            case 0x166B1Cu: goto label_166b1c;
            case 0x166B28u: goto label_166b28;
            case 0x166B2Cu: goto label_166b2c;
            case 0x166B34u: goto label_166b34;
            case 0x166B38u: goto label_166b38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166B54u;
}
