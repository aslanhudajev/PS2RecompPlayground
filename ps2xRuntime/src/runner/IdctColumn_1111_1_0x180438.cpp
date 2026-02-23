#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_1111_1
// Address: 0x180438 - 0x1805b4
void IdctColumn_1111_1_0x180438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_1111_1");


    ctx->pc = 0x180438u;

    // 0x180438: 0x27bdffd0
    ctx->pc = 0x180438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18043c: 0x3c180001
    ctx->pc = 0x18043cu;
    SET_GPR_U32(ctx, 24, ((uint32_t)1 << 16));
    // 0x180440: 0xffb10010
    ctx->pc = 0x180440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x180444: 0x3c19fffe
    ctx->pc = 0x180444u;
    SET_GPR_U32(ctx, 25, ((uint32_t)65534 << 16));
    // 0x180448: 0xffb00000
    ctx->pc = 0x180448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18044c: 0x3c11ffff
    ctx->pc = 0x18044cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)65535 << 16));
    // 0x180450: 0xffb20020
    ctx->pc = 0x180450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x180454: 0x3c100002
    ctx->pc = 0x180454u;
    SET_GPR_U32(ctx, 16, ((uint32_t)2 << 16));
    // 0x180458: 0x80502d
    ctx->pc = 0x180458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18045c: 0x24120008
    ctx->pc = 0x18045cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 8));
    // 0x180460: 0x37186a0a
    ctx->pc = 0x180460u;
    SET_GPR_U32(ctx, 24, OR32(GPR_U32(ctx, 24), 27146));
    // 0x180464: 0x36313c11
    ctx->pc = 0x180464u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 15377));
    // 0x180468: 0x36109cf6
    ctx->pc = 0x180468u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 40182));
    // 0x18046c: 0x3739eae8
    ctx->pc = 0x18046cu;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 25), 60136));
    // 0x180470: 0x10000002
    ctx->pc = 0x180470u;
    {
        const bool branch_taken_0x180470 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180474u;
        SET_GPR_U32(ctx, 15, ((uint32_t)32 << 16));
        if (branch_taken_0x180470) {
            ctx->pc = 0x18047Cu;
            goto label_18047c;
        }
    }
    ctx->pc = 0x180478u;
label_180478:
    // 0x180478: 0x254a0002
    ctx->pc = 0x180478u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 2));
label_18047c:
    // 0x18047c: 0x854d0020
    ctx->pc = 0x18047cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x180480: 0x2652ffff
    ctx->pc = 0x180480u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x180484: 0x854c0060
    ctx->pc = 0x180484u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 96)));
    // 0x180488: 0x85460000
    ctx->pc = 0x180488u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x18048c: 0x18d7023
    ctx->pc = 0x18048cu;
    SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x180490: 0x85480040
    ctx->pc = 0x180490u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x180494: 0x18d6021
    ctx->pc = 0x180494u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x180498: 0x61c00
    ctx->pc = 0x180498u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 16));
    // 0x18049c: 0x1d86818
    ctx->pc = 0x18049cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
    // 0x1804a0: 0xc3400
    ctx->pc = 0x1804a0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 12), 16));
    // 0x1804a4: 0x81400
    ctx->pc = 0x1804a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 16));
    // 0x1804a8: 0x854b0010
    ctx->pc = 0x1804a8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x1804ac: 0x627021
    ctx->pc = 0x1804acu;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1804b0: 0x434023
    ctx->pc = 0x1804b0u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1804b4: 0x85490050
    ctx->pc = 0x1804b4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x1804b8: 0x1c66023
    ctx->pc = 0x1804b8u;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x1804bc: 0x1a66821
    ctx->pc = 0x1804bcu;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x1804c0: 0x85450030
    ctx->pc = 0x1804c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x1804c4: 0x10d1821
    ctx->pc = 0x1804c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x1804c8: 0x85440070
    ctx->pc = 0x1804c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x1804cc: 0x1a86823
    ctx->pc = 0x1804ccu;
    SET_GPR_U32(ctx, 13, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x1804d0: 0x1251023
    ctx->pc = 0x1804d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1804d4: 0x1644021
    ctx->pc = 0x1804d4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1804d8: 0xa92821
    ctx->pc = 0x1804d8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1804dc: 0x8b2023
    ctx->pc = 0x1804dcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1804e0: 0x503818
    ctx->pc = 0x1804e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x1804e4: 0x1055823
    ctx->pc = 0x1804e4u;
    SET_GPR_U32(ctx, 11, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1804e8: 0x1c63021
    ctx->pc = 0x1804e8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x1804ec: 0x441021
    ctx->pc = 0x1804ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1804f0: 0xa82821
    ctx->pc = 0x1804f0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1804f4: 0x52c00
    ctx->pc = 0x1804f4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x1804f8: 0x70514018
    ctx->pc = 0x1804f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1804fc: 0x37023
    ctx->pc = 0x1804fcu;
    SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x180500: 0xc51023
    ctx->pc = 0x180500u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x180504: 0xc51821
    ctx->pc = 0x180504u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x180508: 0x1785818
    ctx->pc = 0x180508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)(uint32_t)result); }
    // 0x18050c: 0x993018
    ctx->pc = 0x18050cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x180510: 0x4f1021
    ctx->pc = 0x180510u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x180514: 0x6f1821
    ctx->pc = 0x180514u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x180518: 0x1074821
    ctx->pc = 0x180518u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x18051c: 0x21583
    ctx->pc = 0x18051cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x180520: 0x31d83
    ctx->pc = 0x180520u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x180524: 0xa5420070
    ctx->pc = 0x180524u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x180528: 0xc82021
    ctx->pc = 0x180528u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x18052c: 0xa5430000
    ctx->pc = 0x18052cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x180530: 0x852023
    ctx->pc = 0x180530u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x180534: 0x1645823
    ctx->pc = 0x180534u;
    SET_GPR_U32(ctx, 11, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x180538: 0x1c43823
    ctx->pc = 0x180538u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x18053c: 0x12b4823
    ctx->pc = 0x18053cu;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x180540: 0x1ab3023
    ctx->pc = 0x180540u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x180544: 0x1892823
    ctx->pc = 0x180544u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x180548: 0x1c42021
    ctx->pc = 0x180548u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x18054c: 0x1ab1021
    ctx->pc = 0x18054cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x180550: 0x1891821
    ctx->pc = 0x180550u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x180554: 0x8f2021
    ctx->pc = 0x180554u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x180558: 0x4f1021
    ctx->pc = 0x180558u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x18055c: 0x6f1821
    ctx->pc = 0x18055cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x180560: 0xaf2821
    ctx->pc = 0x180560u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x180564: 0xcf3021
    ctx->pc = 0x180564u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x180568: 0xef3821
    ctx->pc = 0x180568u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x18056c: 0x42583
    ctx->pc = 0x18056cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x180570: 0x21583
    ctx->pc = 0x180570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x180574: 0x31d83
    ctx->pc = 0x180574u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x180578: 0x52d83
    ctx->pc = 0x180578u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 22));
    // 0x18057c: 0x63583
    ctx->pc = 0x18057cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 22));
    // 0x180580: 0x73d83
    ctx->pc = 0x180580u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 22));
    // 0x180584: 0xa5440010
    ctx->pc = 0x180584u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x180588: 0xa5420020
    ctx->pc = 0x180588u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x18058c: 0xa5430030
    ctx->pc = 0x18058cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x180590: 0xa5450040
    ctx->pc = 0x180590u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x180594: 0xa5460050
    ctx->pc = 0x180594u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 80), (uint16_t)GPR_U32(ctx, 6));
    // 0x180598: 0x1640ffb7
    ctx->pc = 0x180598u;
    {
        const bool branch_taken_0x180598 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x18059Cu;
        WRITE16(ADD32(GPR_U32(ctx, 10), 96), (uint16_t)GPR_U32(ctx, 7));
        if (branch_taken_0x180598) {
            ctx->pc = 0x180478u;
            goto label_180478;
        }
    }
    ctx->pc = 0x1805A0u;
    // 0x1805a0: 0xdfb20020
    ctx->pc = 0x1805a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1805a4: 0xdfb10010
    ctx->pc = 0x1805a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1805a8: 0xdfb00000
    ctx->pc = 0x1805a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1805ac: 0x3e00008
    ctx->pc = 0x1805ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1805B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180478u: goto label_180478;
            case 0x18047Cu: goto label_18047c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1805B4u;
}
