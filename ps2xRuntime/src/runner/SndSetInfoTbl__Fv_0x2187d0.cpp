#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SndSetInfoTbl__Fv
// Address: 0x2187d0 - 0x218d18
void SndSetInfoTbl__Fv_0x2187d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SndSetInfoTbl__Fv");


    ctx->pc = 0x2187d0u;

    // 0x2187d0: 0x27bdfc30
    ctx->pc = 0x2187d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966320));
    // 0x2187d4: 0x7fb20020
    ctx->pc = 0x2187d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2187d8: 0x7fb10010
    ctx->pc = 0x2187d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2187dc: 0x7fb00000
    ctx->pc = 0x2187dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2187e0: 0x3c010050
    ctx->pc = 0x2187e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2187e4: 0x8025fec5
    ctx->pc = 0x2187e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x2187e8: 0x3c030029
    ctx->pc = 0x2187e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x2187ec: 0x2464b650
    ctx->pc = 0x2187ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294948432));
    // 0x2187f0: 0x3c030029
    ctx->pc = 0x2187f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x2187f4: 0x2463b8f0
    ctx->pc = 0x2187f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949104));
    // 0x2187f8: 0x3c090001
    ctx->pc = 0x2187f8u;
    SET_GPR_U32(ctx, 9, ((uint32_t)1 << 16));
    // 0x2187fc: 0x52880
    ctx->pc = 0x2187fcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x218800: 0x651821
    ctx->pc = 0x218800u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x218804: 0x852021
    ctx->pc = 0x218804u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x218808: 0x8c850000
    ctx->pc = 0x218808u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21880c: 0x8c660000
    ctx->pc = 0x21880cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218810: 0x2407ffc0
    ctx->pc = 0x218810u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x218814: 0x70a02628
    ctx->pc = 0x218814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x218818: 0xaf898e60
    ctx->pc = 0x218818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938208), GPR_U32(ctx, 9));
    // 0x21881c: 0x8cc80004
    ctx->pc = 0x21881cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x218820: 0x70001e28
    ctx->pc = 0x218820u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218824: 0x2508003f
    ctx->pc = 0x218824u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 63));
    // 0x218828: 0x1073824
    ctx->pc = 0x218828u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x21882c: 0xe93821
    ctx->pc = 0x21882cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x218830: 0xaf878e64
    ctx->pc = 0x218830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938212), GPR_U32(ctx, 7));
    // 0x218834: 0xaf808e5c
    ctx->pc = 0x218834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938204), GPR_U32(ctx, 0));
label_218838:
    // 0x218838: 0x8c890000
    ctx->pc = 0x218838u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21883c: 0x8f888e5c
    ctx->pc = 0x21883cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294938204)));
    // 0x218840: 0x24630008
    ctx->pc = 0x218840u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x218844: 0x28670020
    ctx->pc = 0x218844u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 3), 32));
    // 0x218848: 0x1094021
    ctx->pc = 0x218848u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x21884c: 0xaf888e5c
    ctx->pc = 0x21884cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938204), GPR_U32(ctx, 8));
    // 0x218850: 0x8c890004
    ctx->pc = 0x218850u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x218854: 0x8f888e5c
    ctx->pc = 0x218854u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294938204)));
    // 0x218858: 0x1094021
    ctx->pc = 0x218858u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x21885c: 0xaf888e5c
    ctx->pc = 0x21885cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938204), GPR_U32(ctx, 8));
    // 0x218860: 0x8c890008
    ctx->pc = 0x218860u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x218864: 0x8f888e5c
    ctx->pc = 0x218864u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294938204)));
    // 0x218868: 0x1094021
    ctx->pc = 0x218868u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x21886c: 0xaf888e5c
    ctx->pc = 0x21886cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938204), GPR_U32(ctx, 8));
    // 0x218870: 0x8c89000c
    ctx->pc = 0x218870u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x218874: 0x8f888e5c
    ctx->pc = 0x218874u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294938204)));
    // 0x218878: 0x1094021
    ctx->pc = 0x218878u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x21887c: 0xaf888e5c
    ctx->pc = 0x21887cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938204), GPR_U32(ctx, 8));
    // 0x218880: 0x8c890010
    ctx->pc = 0x218880u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x218884: 0x8f888e5c
    ctx->pc = 0x218884u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294938204)));
    // 0x218888: 0x1094021
    ctx->pc = 0x218888u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x21888c: 0xaf888e5c
    ctx->pc = 0x21888cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938204), GPR_U32(ctx, 8));
    // 0x218890: 0x8c890014
    ctx->pc = 0x218890u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x218894: 0x8f888e5c
    ctx->pc = 0x218894u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294938204)));
    // 0x218898: 0x1094021
    ctx->pc = 0x218898u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x21889c: 0xaf888e5c
    ctx->pc = 0x21889cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938204), GPR_U32(ctx, 8));
    // 0x2188a0: 0x8c890018
    ctx->pc = 0x2188a0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2188a4: 0x8f888e5c
    ctx->pc = 0x2188a4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294938204)));
    // 0x2188a8: 0x1094021
    ctx->pc = 0x2188a8u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2188ac: 0xaf888e5c
    ctx->pc = 0x2188acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938204), GPR_U32(ctx, 8));
    // 0x2188b0: 0x8c89001c
    ctx->pc = 0x2188b0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2188b4: 0x8f888e5c
    ctx->pc = 0x2188b4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294938204)));
    // 0x2188b8: 0x24840020
    ctx->pc = 0x2188b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2188bc: 0x1094021
    ctx->pc = 0x2188bcu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2188c0: 0x14e0ffdd
    ctx->pc = 0x2188C0u;
    {
        const bool branch_taken_0x2188c0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x2188C4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938204), GPR_U32(ctx, 8));
        if (branch_taken_0x2188c0) {
            ctx->pc = 0x218838u;
            goto label_218838;
        }
    }
    ctx->pc = 0x2188C8u;
    // 0x2188c8: 0x8f878e5c
    ctx->pc = 0x2188c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294938204)));
    // 0x2188cc: 0x3c030091
    ctx->pc = 0x2188ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x2188d0: 0x3c040008
    ctx->pc = 0x2188d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)8 << 16));
    // 0x2188d4: 0x246919b0
    ctx->pc = 0x2188d4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 3), 6576));
    // 0x2188d8: 0x70004628
    ctx->pc = 0x2188d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2188dc: 0x70005628
    ctx->pc = 0x2188dcu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2188e0: 0xe41821
    ctx->pc = 0x2188e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2188e4: 0xaf838e5c
    ctx->pc = 0x2188e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938204), GPR_U32(ctx, 3));
label_2188e8:
    // 0x2188e8: 0xad280000
    ctx->pc = 0x2188e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x2188ec: 0x8ca40000
    ctx->pc = 0x2188ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2188f0: 0x254a0008
    ctx->pc = 0x2188f0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 8));
    // 0x2188f4: 0x29430020
    ctx->pc = 0x2188f4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 10), 32));
    // 0x2188f8: 0x1044021
    ctx->pc = 0x2188f8u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2188fc: 0xad280004
    ctx->pc = 0x2188fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 8));
    // 0x218900: 0x8ca40004
    ctx->pc = 0x218900u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x218904: 0x1044021
    ctx->pc = 0x218904u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x218908: 0xad280008
    ctx->pc = 0x218908u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 8));
    // 0x21890c: 0x8ca40008
    ctx->pc = 0x21890cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x218910: 0x1044021
    ctx->pc = 0x218910u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x218914: 0xad28000c
    ctx->pc = 0x218914u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
    // 0x218918: 0x8ca4000c
    ctx->pc = 0x218918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21891c: 0x1044021
    ctx->pc = 0x21891cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x218920: 0xad280010
    ctx->pc = 0x218920u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 8));
    // 0x218924: 0x8ca40010
    ctx->pc = 0x218924u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x218928: 0x1044021
    ctx->pc = 0x218928u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x21892c: 0xad280014
    ctx->pc = 0x21892cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 8));
    // 0x218930: 0x8ca40014
    ctx->pc = 0x218930u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x218934: 0x1044021
    ctx->pc = 0x218934u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x218938: 0xad280018
    ctx->pc = 0x218938u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 8));
    // 0x21893c: 0x8ca40018
    ctx->pc = 0x21893cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x218940: 0x1044021
    ctx->pc = 0x218940u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x218944: 0xad28001c
    ctx->pc = 0x218944u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 8));
    // 0x218948: 0x8ca4001c
    ctx->pc = 0x218948u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x21894c: 0x25290020
    ctx->pc = 0x21894cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 32));
    // 0x218950: 0x1044021
    ctx->pc = 0x218950u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x218954: 0x1460ffe4
    ctx->pc = 0x218954u;
    {
        const bool branch_taken_0x218954 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x218958u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x218954) {
            ctx->pc = 0x2188E8u;
            goto label_2188e8;
        }
    }
    ctx->pc = 0x21895Cu;
    // 0x21895c: 0x3c030091
    ctx->pc = 0x21895cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x218960: 0xa2080
    ctx->pc = 0x218960u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 10), 2));
    // 0x218964: 0x246319b0
    ctx->pc = 0x218964u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6576));
    // 0x218968: 0x641821
    ctx->pc = 0x218968u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21896c: 0xac680000
    ctx->pc = 0x21896cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x218970: 0x3c040029
    ctx->pc = 0x218970u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x218974: 0x70004628
    ctx->pc = 0x218974u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218978: 0x70001e28
    ctx->pc = 0x218978u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21897c: 0x248abe50
    ctx->pc = 0x21897cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 4), 4294950480));
label_218980:
    // 0x218980: 0x81450000
    ctx->pc = 0x218980u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x218984: 0x3c040001
    ctx->pc = 0x218984u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    // 0x218988: 0x5082a
    ctx->pc = 0x218988u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 5)));
    // 0x21898c: 0x102000b4
    ctx->pc = 0x21898Cu;
    {
        const bool branch_taken_0x21898c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x218990u;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21898c) {
            ctx->pc = 0x218C60u;
            goto label_218c60;
        }
    }
    ctx->pc = 0x218994u;
    // 0x218994: 0x28a10009
    ctx->pc = 0x218994u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 9));
    // 0x218998: 0x14200095
    ctx->pc = 0x218998u;
    {
        const bool branch_taken_0x218998 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x21899Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 5), 4294967288));
        if (branch_taken_0x218998) {
            ctx->pc = 0x218BF0u;
            goto label_218bf0;
        }
    }
    ctx->pc = 0x2189A0u;
label_2189a0:
    // 0x2189a0: 0x860c0
    ctx->pc = 0x2189a0u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 8), 3));
    // 0x2189a4: 0x19d2821
    ctx->pc = 0x2189a4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x2189a8: 0x24ab0030
    ctx->pc = 0x2189a8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 5), 48));
    // 0x2189ac: 0x3c050029
    ctx->pc = 0x2189acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)41 << 16));
    // 0x2189b0: 0x24a5af40
    ctx->pc = 0x2189b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946624));
    // 0x2189b4: 0xac2821
    ctx->pc = 0x2189b4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2189b8: 0xad640000
    ctx->pc = 0x2189b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x2189bc: 0xaca40004
    ctx->pc = 0x2189bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x2189c0: 0x84ad0000
    ctx->pc = 0x2189c0u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2189c4: 0x250c0001
    ctx->pc = 0x2189c4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 8), 1));
    // 0x2189c8: 0xc78c0
    ctx->pc = 0x2189c8u;
    SET_GPR_U32(ctx, 15, SLL32(GPR_U32(ctx, 12), 3));
    // 0x2189cc: 0x1fd6021
    ctx->pc = 0x2189ccu;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x2189d0: 0x258c0030
    ctx->pc = 0x2189d0u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 48));
    // 0x2189d4: 0x24e70008
    ctx->pc = 0x2189d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x2189d8: 0xd6880
    ctx->pc = 0x2189d8u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 2));
    // 0x2189dc: 0xcd6821
    ctx->pc = 0x2189dcu;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x2189e0: 0x8dae0000
    ctx->pc = 0x2189e0u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2189e4: 0x2405ffc0
    ctx->pc = 0x2189e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x2189e8: 0x3c0d0029
    ctx->pc = 0x2189e8u;
    SET_GPR_U32(ctx, 13, ((uint32_t)41 << 16));
    // 0x2189ec: 0x25adaf40
    ctx->pc = 0x2189ecu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4294946624));
    // 0x2189f0: 0x1af7821
    ctx->pc = 0x2189f0u;
    SET_GPR_U32(ctx, 15, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x2189f4: 0x250d0002
    ctx->pc = 0x2189f4u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 8), 2));
    // 0x2189f8: 0xd80c0
    ctx->pc = 0x2189f8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 13), 3));
    // 0x2189fc: 0x25cd003f
    ctx->pc = 0x2189fcu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 14), 63));
    // 0x218a00: 0x1a56824
    ctx->pc = 0x218a00u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x218a04: 0x8d2021
    ctx->pc = 0x218a04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x218a08: 0x248dffff
    ctx->pc = 0x218a08u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x218a0c: 0xad6d0004
    ctx->pc = 0x218a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 13));
    // 0x218a10: 0xad840000
    ctx->pc = 0x218a10u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x218a14: 0xade40004
    ctx->pc = 0x218a14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 4));
    // 0x218a18: 0x85ee0000
    ctx->pc = 0x218a18u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x218a1c: 0x21d5821
    ctx->pc = 0x218a1cu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x218a20: 0x256d0030
    ctx->pc = 0x218a20u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 11), 48));
    // 0x218a24: 0x3c0b0029
    ctx->pc = 0x218a24u;
    SET_GPR_U32(ctx, 11, ((uint32_t)41 << 16));
    // 0x218a28: 0x256baf40
    ctx->pc = 0x218a28u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294946624));
    // 0x218a2c: 0x1705821
    ctx->pc = 0x218a2cu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x218a30: 0xe7080
    ctx->pc = 0x218a30u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), 2));
    // 0x218a34: 0xce7021
    ctx->pc = 0x218a34u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x218a38: 0x8dd00000
    ctx->pc = 0x218a38u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x218a3c: 0x2610003f
    ctx->pc = 0x218a3cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 63));
    // 0x218a40: 0x2058024
    ctx->pc = 0x218a40u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x218a44: 0x902021
    ctx->pc = 0x218a44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x218a48: 0x2490ffff
    ctx->pc = 0x218a48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x218a4c: 0xad900004
    ctx->pc = 0x218a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 16));
    // 0x218a50: 0xada40000
    ctx->pc = 0x218a50u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x218a54: 0xad640004
    ctx->pc = 0x218a54u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
    // 0x218a58: 0x85700000
    ctx->pc = 0x218a58u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x218a5c: 0x250e0003
    ctx->pc = 0x218a5cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 8), 3));
    // 0x218a60: 0xe88c0
    ctx->pc = 0x218a60u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 14), 3));
    // 0x218a64: 0x23d7021
    ctx->pc = 0x218a64u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x218a68: 0x25cf0030
    ctx->pc = 0x218a68u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 14), 48));
    // 0x218a6c: 0x3c0e0029
    ctx->pc = 0x218a6cu;
    SET_GPR_U32(ctx, 14, ((uint32_t)41 << 16));
    // 0x218a70: 0x25ceaf40
    ctx->pc = 0x218a70u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 4294946624));
    // 0x218a74: 0x108080
    ctx->pc = 0x218a74u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x218a78: 0x250b0004
    ctx->pc = 0x218a78u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 8), 4));
    // 0x218a7c: 0xbc0c0
    ctx->pc = 0x218a7cu;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 11), 3));
    // 0x218a80: 0x31d5821
    ctx->pc = 0x218a80u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 29)));
    // 0x218a84: 0x256c0030
    ctx->pc = 0x218a84u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 11), 48));
    // 0x218a88: 0x3c0b0029
    ctx->pc = 0x218a88u;
    SET_GPR_U32(ctx, 11, ((uint32_t)41 << 16));
    // 0x218a8c: 0x256baf40
    ctx->pc = 0x218a8cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294946624));
    // 0x218a90: 0x1d17021
    ctx->pc = 0x218a90u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x218a94: 0xd08021
    ctx->pc = 0x218a94u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x218a98: 0x8e110000
    ctx->pc = 0x218a98u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218a9c: 0x1785821
    ctx->pc = 0x218a9cu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x218aa0: 0x25100005
    ctx->pc = 0x218aa0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 8), 5));
    // 0x218aa4: 0x10c0c0
    ctx->pc = 0x218aa4u;
    SET_GPR_U32(ctx, 24, SLL32(GPR_U32(ctx, 16), 3));
    // 0x218aa8: 0x2631003f
    ctx->pc = 0x218aa8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 63));
    // 0x218aac: 0x31d8021
    ctx->pc = 0x218aacu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 29)));
    // 0x218ab0: 0x2258824
    ctx->pc = 0x218ab0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x218ab4: 0x912021
    ctx->pc = 0x218ab4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x218ab8: 0x26190030
    ctx->pc = 0x218ab8u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 16), 48));
    // 0x218abc: 0x2490ffff
    ctx->pc = 0x218abcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x218ac0: 0xadb00004
    ctx->pc = 0x218ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 16));
    // 0x218ac4: 0xade40000
    ctx->pc = 0x218ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
    // 0x218ac8: 0xadc40004
    ctx->pc = 0x218ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 4));
    // 0x218acc: 0x85d00000
    ctx->pc = 0x218accu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x218ad0: 0x3c0d0029
    ctx->pc = 0x218ad0u;
    SET_GPR_U32(ctx, 13, ((uint32_t)41 << 16));
    // 0x218ad4: 0x25adaf40
    ctx->pc = 0x218ad4u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4294946624));
    // 0x218ad8: 0x1b86821
    ctx->pc = 0x218ad8u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
    // 0x218adc: 0x250e0006
    ctx->pc = 0x218adcu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 8), 6));
    // 0x218ae0: 0xe88c0
    ctx->pc = 0x218ae0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 14), 3));
    // 0x218ae4: 0x107080
    ctx->pc = 0x218ae4u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 16), 2));
    // 0x218ae8: 0xce7021
    ctx->pc = 0x218ae8u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x218aec: 0x8dd00000
    ctx->pc = 0x218aecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x218af0: 0x2610003f
    ctx->pc = 0x218af0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 63));
    // 0x218af4: 0x2058024
    ctx->pc = 0x218af4u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x218af8: 0x902021
    ctx->pc = 0x218af8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x218afc: 0x2490ffff
    ctx->pc = 0x218afcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x218b00: 0xadf00004
    ctx->pc = 0x218b00u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 16));
    // 0x218b04: 0xad840000
    ctx->pc = 0x218b04u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x218b08: 0xad640004
    ctx->pc = 0x218b08u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
    // 0x218b0c: 0x85700000
    ctx->pc = 0x218b0cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x218b10: 0x23d7021
    ctx->pc = 0x218b10u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x218b14: 0x25d80030
    ctx->pc = 0x218b14u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 14), 48));
    // 0x218b18: 0x3c0e0029
    ctx->pc = 0x218b18u;
    SET_GPR_U32(ctx, 14, ((uint32_t)41 << 16));
    // 0x218b1c: 0x25ceaf40
    ctx->pc = 0x218b1cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 4294946624));
    // 0x218b20: 0x1d17021
    ctx->pc = 0x218b20u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x218b24: 0x108080
    ctx->pc = 0x218b24u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x218b28: 0xd08021
    ctx->pc = 0x218b28u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x218b2c: 0x8e110000
    ctx->pc = 0x218b2cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218b30: 0x250b0007
    ctx->pc = 0x218b30u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 8), 7));
    // 0x218b34: 0xb90c0
    ctx->pc = 0x218b34u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 11), 3));
    // 0x218b38: 0x25d5821
    ctx->pc = 0x218b38u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x218b3c: 0x256f0030
    ctx->pc = 0x218b3cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 11), 48));
    // 0x218b40: 0x3c0b0029
    ctx->pc = 0x218b40u;
    SET_GPR_U32(ctx, 11, ((uint32_t)41 << 16));
    // 0x218b44: 0x2631003f
    ctx->pc = 0x218b44u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 63));
    // 0x218b48: 0x2258824
    ctx->pc = 0x218b48u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x218b4c: 0x912021
    ctx->pc = 0x218b4cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x218b50: 0x2491ffff
    ctx->pc = 0x218b50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x218b54: 0xad910004
    ctx->pc = 0x218b54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 17));
    // 0x218b58: 0xaf240000
    ctx->pc = 0x218b58u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
    // 0x218b5c: 0xada40004
    ctx->pc = 0x218b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 4));
    // 0x218b60: 0x85ac0000
    ctx->pc = 0x218b60u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x218b64: 0x256baf40
    ctx->pc = 0x218b64u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294946624));
    // 0x218b68: 0x1725821
    ctx->pc = 0x218b68u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x218b6c: 0xe9802a
    ctx->pc = 0x218b6cu;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 9)));
    // 0x218b70: 0x25080008
    ctx->pc = 0x218b70u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x218b74: 0xc6080
    ctx->pc = 0x218b74u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 2));
    // 0x218b78: 0xcc6021
    ctx->pc = 0x218b78u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x218b7c: 0x8d8c0000
    ctx->pc = 0x218b7cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x218b80: 0x258c003f
    ctx->pc = 0x218b80u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 63));
    // 0x218b84: 0x1856024
    ctx->pc = 0x218b84u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x218b88: 0x8c2021
    ctx->pc = 0x218b88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x218b8c: 0x248cffff
    ctx->pc = 0x218b8cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x218b90: 0xaf2c0004
    ctx->pc = 0x218b90u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 12));
    // 0x218b94: 0xaf040000
    ctx->pc = 0x218b94u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 4));
    // 0x218b98: 0xadc40004
    ctx->pc = 0x218b98u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 4));
    // 0x218b9c: 0x85cc0000
    ctx->pc = 0x218b9cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x218ba0: 0xc6080
    ctx->pc = 0x218ba0u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 2));
    // 0x218ba4: 0xcc6021
    ctx->pc = 0x218ba4u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x218ba8: 0x8d8c0000
    ctx->pc = 0x218ba8u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x218bac: 0x258c003f
    ctx->pc = 0x218bacu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 63));
    // 0x218bb0: 0x1856024
    ctx->pc = 0x218bb0u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x218bb4: 0x8c2021
    ctx->pc = 0x218bb4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x218bb8: 0x248cffff
    ctx->pc = 0x218bb8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x218bbc: 0xaf0c0004
    ctx->pc = 0x218bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 12));
    // 0x218bc0: 0xade40000
    ctx->pc = 0x218bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
    // 0x218bc4: 0xad640004
    ctx->pc = 0x218bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
    // 0x218bc8: 0x856b0000
    ctx->pc = 0x218bc8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x218bcc: 0xb5880
    ctx->pc = 0x218bccu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 2));
    // 0x218bd0: 0xcb5821
    ctx->pc = 0x218bd0u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x218bd4: 0x8d6b0000
    ctx->pc = 0x218bd4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x218bd8: 0x256b003f
    ctx->pc = 0x218bd8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 63));
    // 0x218bdc: 0x1652824
    ctx->pc = 0x218bdcu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x218be0: 0x852021
    ctx->pc = 0x218be0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x218be4: 0x2485ffff
    ctx->pc = 0x218be4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x218be8: 0x1600ff6d
    ctx->pc = 0x218BE8u;
    {
        const bool branch_taken_0x218be8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x218BECu;
        WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x218be8) {
            ctx->pc = 0x2189A0u;
            goto label_2189a0;
        }
    }
    ctx->pc = 0x218BF0u;
label_218bf0:
    // 0x218bf0: 0x848c0
    ctx->pc = 0x218bf0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 8), 3));
    // 0x218bf4: 0x13d2821
    ctx->pc = 0x218bf4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x218bf8: 0x24ab0030
    ctx->pc = 0x218bf8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 5), 48));
    // 0x218bfc: 0x3c050029
    ctx->pc = 0x218bfcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)41 << 16));
    // 0x218c00: 0x24a5af40
    ctx->pc = 0x218c00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946624));
    // 0x218c04: 0x814d0000
    ctx->pc = 0x218c04u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x218c08: 0x10000011
    ctx->pc = 0x218C08u;
    {
        const bool branch_taken_0x218c08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218C0Cu;
        SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        if (branch_taken_0x218c08) {
            ctx->pc = 0x218C50u;
            goto label_218c50;
        }
    }
    ctx->pc = 0x218C10u;
label_218c10:
    // 0x218c10: 0xad640000
    ctx->pc = 0x218c10u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x218c14: 0xad840004
    ctx->pc = 0x218c14u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x218c18: 0x85890000
    ctx->pc = 0x218c18u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x218c1c: 0x2405ffc0
    ctx->pc = 0x218c1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x218c20: 0x25080001
    ctx->pc = 0x218c20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x218c24: 0x24e70001
    ctx->pc = 0x218c24u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x218c28: 0x94880
    ctx->pc = 0x218c28u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 2));
    // 0x218c2c: 0xc94821
    ctx->pc = 0x218c2cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x218c30: 0x8d290000
    ctx->pc = 0x218c30u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x218c34: 0x258c0008
    ctx->pc = 0x218c34u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 8));
    // 0x218c38: 0x2529003f
    ctx->pc = 0x218c38u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 63));
    // 0x218c3c: 0x1252824
    ctx->pc = 0x218c3cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x218c40: 0x852021
    ctx->pc = 0x218c40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x218c44: 0x2485ffff
    ctx->pc = 0x218c44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x218c48: 0xad650004
    ctx->pc = 0x218c48u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
    // 0x218c4c: 0x256b0008
    ctx->pc = 0x218c4cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 8));
label_218c50:
    // 0x218c50: 0xed282a
    ctx->pc = 0x218c50u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 13)));
    // 0x218c54: 0x14a0ffee
    ctx->pc = 0x218C54u;
    {
        const bool branch_taken_0x218c54 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x218c54) {
            ctx->pc = 0x218C10u;
            goto label_218c10;
        }
    }
    ctx->pc = 0x218C5Cu;
    // 0x218c5c: 0x0
    ctx->pc = 0x218c5cu;
    // NOP
label_218c60:
    // 0x218c60: 0x24630001
    ctx->pc = 0x218c60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x218c64: 0x28640017
    ctx->pc = 0x218c64u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 23));
    // 0x218c68: 0x1480ff45
    ctx->pc = 0x218C68u;
    {
        const bool branch_taken_0x218c68 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x218C6Cu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
        if (branch_taken_0x218c68) {
            ctx->pc = 0x218980u;
            goto label_218980;
        }
    }
    ctx->pc = 0x218C70u;
    // 0x218c70: 0x3c030091
    ctx->pc = 0x218c70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x218c74: 0x24681c10
    ctx->pc = 0x218c74u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 7184));
    // 0x218c78: 0x3c030091
    ctx->pc = 0x218c78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x218c7c: 0x27ac0030
    ctx->pc = 0x218c7cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 29), 48));
    // 0x218c80: 0x70006e28
    ctx->pc = 0x218c80u;
    SET_GPR_VEC(ctx, 13, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218c84: 0x246a1a40
    ctx->pc = 0x218c84u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 3), 6720));
    // 0x218c88: 0x71805e28
    ctx->pc = 0x218c88u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x218c8c: 0x2404ffff
    ctx->pc = 0x218c8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_218c90:
    // 0x218c90: 0xad480000
    ctx->pc = 0x218c90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x218c94: 0x70007628
    ctx->pc = 0x218c94u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218c98: 0x71804e28
    ctx->pc = 0x218c98u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x218c9c: 0x0
    ctx->pc = 0x218c9cu;
    // NOP
label_218ca0:
    // 0x218ca0: 0x51ae000e
    ctx->pc = 0x218CA0u;
    {
        const bool branch_taken_0x218ca0 = (GPR_U32(ctx, 13) == GPR_U32(ctx, 14));
        if (branch_taken_0x218ca0) {
            ctx->pc = 0x218CA4u;
            SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
            ctx->pc = 0x218CDCu;
            goto label_218cdc;
        }
    }
    ctx->pc = 0x218CA8u;
    // 0x218ca8: 0x8d270004
    ctx->pc = 0x218ca8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x218cac: 0x8d660000
    ctx->pc = 0x218cacu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x218cb0: 0x8d250000
    ctx->pc = 0x218cb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x218cb4: 0x8d630004
    ctx->pc = 0x218cb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x218cb8: 0xe63023
    ctx->pc = 0x218cb8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x218cbc: 0xa31823
    ctx->pc = 0x218cbcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x218cc0: 0xc31826
    ctx->pc = 0x218cc0u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x218cc4: 0x4610004
    ctx->pc = 0x218CC4u;
    {
        const bool branch_taken_0x218cc4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x218cc4) {
            ctx->pc = 0x218CD8u;
            goto label_218cd8;
        }
    }
    ctx->pc = 0x218CCCu;
    // 0x218ccc: 0xa10e0000
    ctx->pc = 0x218cccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x218cd0: 0x25080001
    ctx->pc = 0x218cd0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x218cd4: 0x0
    ctx->pc = 0x218cd4u;
    // NOP
label_218cd8:
    // 0x218cd8: 0x25ce0001
    ctx->pc = 0x218cd8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 1));
label_218cdc:
    // 0x218cdc: 0x29c30074
    ctx->pc = 0x218cdcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 14), 116));
    // 0x218ce0: 0x1460ffef
    ctx->pc = 0x218CE0u;
    {
        const bool branch_taken_0x218ce0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x218CE4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
        if (branch_taken_0x218ce0) {
            ctx->pc = 0x218CA0u;
            goto label_218ca0;
        }
    }
    ctx->pc = 0x218CE8u;
    // 0x218ce8: 0x25ad0001
    ctx->pc = 0x218ce8u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
    // 0x218cec: 0xa1040000
    ctx->pc = 0x218cecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x218cf0: 0x29a30074
    ctx->pc = 0x218cf0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 13), 116));
    // 0x218cf4: 0x25080001
    ctx->pc = 0x218cf4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x218cf8: 0x254a0004
    ctx->pc = 0x218cf8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
    // 0x218cfc: 0x1460ffe4
    ctx->pc = 0x218CFCu;
    {
        const bool branch_taken_0x218cfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x218D00u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 8));
        if (branch_taken_0x218cfc) {
            ctx->pc = 0x218C90u;
            goto label_218c90;
        }
    }
    ctx->pc = 0x218D04u;
    // 0x218d04: 0x7bb20020
    ctx->pc = 0x218d04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218d08: 0x7bb10010
    ctx->pc = 0x218d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218d0c: 0x7bb00000
    ctx->pc = 0x218d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218d10: 0x3e00008
    ctx->pc = 0x218D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218D14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 976));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218838u: goto label_218838;
            case 0x2188E8u: goto label_2188e8;
            case 0x218980u: goto label_218980;
            case 0x2189A0u: goto label_2189a0;
            case 0x218BF0u: goto label_218bf0;
            case 0x218C10u: goto label_218c10;
            case 0x218C50u: goto label_218c50;
            case 0x218C60u: goto label_218c60;
            case 0x218C90u: goto label_218c90;
            case 0x218CA0u: goto label_218ca0;
            case 0x218CD8u: goto label_218cd8;
            case 0x218CDCu: goto label_218cdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218D18u;
}
