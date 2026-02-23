#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: orgAddTrig__11GunMgrClassFi
// Address: 0x1ee460 - 0x1ee684
void orgAddTrig__11GunMgrClassFi_0x1ee460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("orgAddTrig__11GunMgrClassFi");


    ctx->pc = 0x1ee460u;

    // 0x1ee460: 0x27bdffb0
    ctx->pc = 0x1ee460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ee464: 0x7fbf0040
    ctx->pc = 0x1ee464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1ee468: 0x7fb30030
    ctx->pc = 0x1ee468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ee46c: 0x7fb20020
    ctx->pc = 0x1ee46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ee470: 0x51880
    ctx->pc = 0x1ee470u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ee474: 0x70a09628
    ctx->pc = 0x1ee474u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ee478: 0x653021
    ctx->pc = 0x1ee478u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ee47c: 0x62880
    ctx->pc = 0x1ee47cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ee480: 0x7fb10010
    ctx->pc = 0x1ee480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee484: 0xc52821
    ctx->pc = 0x1ee484u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1ee488: 0x7fb00000
    ctx->pc = 0x1ee488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee48c: 0x52880
    ctx->pc = 0x1ee48cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ee490: 0x858021
    ctx->pc = 0x1ee490u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ee494: 0x3c010050
    ctx->pc = 0x1ee494u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ee498: 0x70809e28
    ctx->pc = 0x1ee498u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ee49c: 0x8425e504
    ctx->pc = 0x1ee49cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1ee4a0: 0x2404000a
    ctx->pc = 0x1ee4a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ee4a4: 0x14a40070
    ctx->pc = 0x1EE4A4u;
    {
        const bool branch_taken_0x1ee4a4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        if (branch_taken_0x1ee4a4) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE4ACu;
    // 0x1ee4ac: 0x8f858bcc
    ctx->pc = 0x1ee4acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1ee4b0: 0x24040001
    ctx->pc = 0x1ee4b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee4b4: 0x14a4006c
    ctx->pc = 0x1EE4B4u;
    {
        const bool branch_taken_0x1ee4b4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        if (branch_taken_0x1ee4b4) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE4BCu;
    // 0x1ee4bc: 0x8f848cb0
    ctx->pc = 0x1ee4bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1ee4c0: 0x30840010
    ctx->pc = 0x1ee4c0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 16));
    // 0x1ee4c4: 0x14800068
    ctx->pc = 0x1EE4C4u;
    {
        const bool branch_taken_0x1ee4c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ee4c4) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE4CCu;
    // 0x1ee4cc: 0x8f848b68
    ctx->pc = 0x1ee4ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x1ee4d0: 0x10800065
    ctx->pc = 0x1EE4D0u;
    {
        const bool branch_taken_0x1ee4d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee4d0) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE4D8u;
    // 0x1ee4d8: 0x122100
    ctx->pc = 0x1ee4d8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ee4dc: 0x922823
    ctx->pc = 0x1ee4dcu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1ee4e0: 0x520c0
    ctx->pc = 0x1ee4e0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ee4e4: 0x852023
    ctx->pc = 0x1ee4e4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ee4e8: 0x488c0
    ctx->pc = 0x1ee4e8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ee4ec: 0x3c040050
    ctx->pc = 0x1ee4ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
    // 0x1ee4f0: 0x2484dd24
    ctx->pc = 0x1ee4f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958372));
    // 0x1ee4f4: 0x912021
    ctx->pc = 0x1ee4f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1ee4f8: 0x8c850000
    ctx->pc = 0x1ee4f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee4fc: 0x24040008
    ctx->pc = 0x1ee4fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ee500: 0x14a40003
    ctx->pc = 0x1EE500u;
    {
        const bool branch_taken_0x1ee500 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        if (branch_taken_0x1ee500) {
            ctx->pc = 0x1EE510u;
            goto label_1ee510;
        }
    }
    ctx->pc = 0x1EE508u;
    // 0x1ee508: 0x10000058
    ctx->pc = 0x1EE508u;
    {
        const bool branch_taken_0x1ee508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE50Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1ee508) {
            ctx->pc = 0x1EE66Cu;
            goto label_1ee66c;
        }
    }
    ctx->pc = 0x1EE510u;
label_1ee510:
    // 0x1ee510: 0x3c040050
    ctx->pc = 0x1ee510u;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
    // 0x1ee514: 0x2484fc80
    ctx->pc = 0x1ee514u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966400));
    // 0x1ee518: 0x831821
    ctx->pc = 0x1ee518u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ee51c: 0x80640000
    ctx->pc = 0x1ee51cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee520: 0x2403000b
    ctx->pc = 0x1ee520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ee524: 0x10830004
    ctx->pc = 0x1EE524u;
    {
        const bool branch_taken_0x1ee524 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ee524) {
            ctx->pc = 0x1EE538u;
            goto label_1ee538;
        }
    }
    ctx->pc = 0x1EE52Cu;
    // 0x1ee52c: 0x2403000d
    ctx->pc = 0x1ee52cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ee530: 0x1483004c
    ctx->pc = 0x1EE530u;
    {
        const bool branch_taken_0x1ee530 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ee530) {
            ctx->pc = 0x1EE664u;
            goto label_1ee664;
        }
    }
    ctx->pc = 0x1EE538u;
label_1ee538:
    // 0x1ee538: 0x8203000e
    ctx->pc = 0x1ee538u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ee53c: 0x10600004
    ctx->pc = 0x1EE53Cu;
    {
        const bool branch_taken_0x1ee53c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE540u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee53c) {
            ctx->pc = 0x1EE550u;
            goto label_1ee550;
        }
    }
    ctx->pc = 0x1EE544u;
    // 0x1ee544: 0x10000048
    ctx->pc = 0x1EE544u;
    {
        const bool branch_taken_0x1ee544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE548u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1ee544) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE54Cu;
    // 0x1ee54c: 0x72402628
    ctx->pc = 0x1ee54cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1ee550:
    // 0x1ee550: 0xc080988
    ctx->pc = 0x1EE550u;
    SET_GPR_U32(ctx, 31, 0x1EE558u);
    ctx->pc = 0x202620u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PullTriggerNow__Fi_0x202620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE558u; }
        else if (ctx->pc != 0x1EE558u) { ctx->pc = 0x1EE558u; }
    }
    if (ctx->pc != 0x1EE558u) { return; }
    ctx->pc = 0x1EE558u;
    // 0x1ee558: 0x10400005
    ctx->pc = 0x1EE558u;
    {
        const bool branch_taken_0x1ee558 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee558) {
            ctx->pc = 0x1EE570u;
            goto label_1ee570;
        }
    }
    ctx->pc = 0x1EE560u;
    // 0x1ee560: 0x8202000f
    ctx->pc = 0x1ee560u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x1ee564: 0x24420001
    ctx->pc = 0x1ee564u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ee568: 0x10000002
    ctx->pc = 0x1EE568u;
    {
        const bool branch_taken_0x1ee568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE56Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1ee568) {
            ctx->pc = 0x1EE574u;
            goto label_1ee574;
        }
    }
    ctx->pc = 0x1EE570u;
label_1ee570:
    // 0x1ee570: 0xa200000f
    ctx->pc = 0x1ee570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
label_1ee574:
    // 0x1ee574: 0xc07bf9c
    ctx->pc = 0x1EE574u;
    SET_GPR_U32(ctx, 31, 0x1EE57Cu);
    ctx->pc = 0x1EE578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE57Cu; }
        else if (ctx->pc != 0x1EE57Cu) { ctx->pc = 0x1EE57Cu; }
    }
    if (ctx->pc != 0x1EE57Cu) { return; }
    ctx->pc = 0x1EE57Cu;
    // 0x1ee57c: 0x24030003
    ctx->pc = 0x1ee57cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ee580: 0x10430025
    ctx->pc = 0x1EE580u;
    {
        const bool branch_taken_0x1ee580 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EE584u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee580) {
            ctx->pc = 0x1EE618u;
            goto label_1ee618;
        }
    }
    ctx->pc = 0x1EE588u;
    // 0x1ee588: 0x24030002
    ctx->pc = 0x1ee588u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee58c: 0x1043000e
    ctx->pc = 0x1EE58Cu;
    {
        const bool branch_taken_0x1ee58c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EE590u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee58c) {
            ctx->pc = 0x1EE5C8u;
            goto label_1ee5c8;
        }
    }
    ctx->pc = 0x1EE594u;
    // 0x1ee594: 0x24050001
    ctx->pc = 0x1ee594u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee598: 0x10450003
    ctx->pc = 0x1EE598u;
    {
        const bool branch_taken_0x1ee598 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x1ee598) {
            ctx->pc = 0x1EE5A8u;
            goto label_1ee5a8;
        }
    }
    ctx->pc = 0x1EE5A0u;
    // 0x1ee5a0: 0x10000031
    ctx->pc = 0x1EE5A0u;
    {
        const bool branch_taken_0x1ee5a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee5a0) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE5A8u;
label_1ee5a8:
    // 0x1ee5a8: 0x8204000f
    ctx->pc = 0x1ee5a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x1ee5ac: 0x24030004
    ctx->pc = 0x1ee5acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee5b0: 0x1483002d
    ctx->pc = 0x1EE5B0u;
    {
        const bool branch_taken_0x1ee5b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ee5b0) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE5B8u;
    // 0x1ee5b8: 0xa205000e
    ctx->pc = 0x1ee5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ee5bc: 0x1000002a
    ctx->pc = 0x1EE5BCu;
    {
        const bool branch_taken_0x1ee5bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE5C0u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1ee5bc) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE5C4u;
    // 0x1ee5c4: 0x72402628
    ctx->pc = 0x1ee5c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1ee5c8:
    // 0x1ee5c8: 0xc080988
    ctx->pc = 0x1EE5C8u;
    SET_GPR_U32(ctx, 31, 0x1EE5D0u);
    ctx->pc = 0x202620u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PullTriggerNow__Fi_0x202620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5D0u; }
        else if (ctx->pc != 0x1EE5D0u) { ctx->pc = 0x1EE5D0u; }
    }
    if (ctx->pc != 0x1EE5D0u) { return; }
    ctx->pc = 0x1EE5D0u;
    // 0x1ee5d0: 0x10400025
    ctx->pc = 0x1EE5D0u;
    {
        const bool branch_taken_0x1ee5d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee5d0) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE5D8u;
    // 0x1ee5d8: 0x926300cd
    ctx->pc = 0x1ee5d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 205)));
    // 0x1ee5dc: 0x14600022
    ctx->pc = 0x1EE5DCu;
    {
        const bool branch_taken_0x1ee5dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ee5dc) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE5E4u;
    // 0x1ee5e4: 0x3c030050
    ctx->pc = 0x1ee5e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ee5e8: 0x2463dd6c
    ctx->pc = 0x1ee5e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958444));
    // 0x1ee5ec: 0x711821
    ctx->pc = 0x1ee5ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ee5f0: 0x8c630000
    ctx->pc = 0x1ee5f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee5f4: 0x1860001c
    ctx->pc = 0x1EE5F4u;
    {
        const bool branch_taken_0x1ee5f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ee5f4) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE5FCu;
    // 0x1ee5fc: 0xc07ba88
    ctx->pc = 0x1EE5FCu;
    SET_GPR_U32(ctx, 31, 0x1EE604u);
    ctx->pc = 0x1EE600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EEA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReqGunFlash__Fi_0x1eea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE604u; }
        else if (ctx->pc != 0x1EE604u) { ctx->pc = 0x1EE604u; }
    }
    if (ctx->pc != 0x1EE604u) { return; }
    ctx->pc = 0x1EE604u;
    // 0x1ee604: 0x24030004
    ctx->pc = 0x1ee604u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee608: 0xa2030010
    ctx->pc = 0x1ee608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ee60c: 0x10000016
    ctx->pc = 0x1EE60Cu;
    {
        const bool branch_taken_0x1ee60c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE610u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1ee60c) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE614u;
    // 0x1ee614: 0x72402628
    ctx->pc = 0x1ee614u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1ee618:
    // 0x1ee618: 0xc080988
    ctx->pc = 0x1EE618u;
    SET_GPR_U32(ctx, 31, 0x1EE620u);
    ctx->pc = 0x202620u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PullTriggerNow__Fi_0x202620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE620u; }
        else if (ctx->pc != 0x1EE620u) { ctx->pc = 0x1EE620u; }
    }
    if (ctx->pc != 0x1EE620u) { return; }
    ctx->pc = 0x1EE620u;
    // 0x1ee620: 0x10400011
    ctx->pc = 0x1EE620u;
    {
        const bool branch_taken_0x1ee620 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee620) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE628u;
    // 0x1ee628: 0x926300cd
    ctx->pc = 0x1ee628u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 205)));
    // 0x1ee62c: 0x1460000e
    ctx->pc = 0x1EE62Cu;
    {
        const bool branch_taken_0x1ee62c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ee62c) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE634u;
    // 0x1ee634: 0x3c030050
    ctx->pc = 0x1ee634u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ee638: 0x2463dd6c
    ctx->pc = 0x1ee638u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958444));
    // 0x1ee63c: 0x711821
    ctx->pc = 0x1ee63cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ee640: 0x8c630000
    ctx->pc = 0x1ee640u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee644: 0x18600008
    ctx->pc = 0x1EE644u;
    {
        const bool branch_taken_0x1ee644 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ee644) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE64Cu;
    // 0x1ee64c: 0xc07ba88
    ctx->pc = 0x1EE64Cu;
    SET_GPR_U32(ctx, 31, 0x1EE654u);
    ctx->pc = 0x1EE650u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EEA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReqGunFlash__Fi_0x1eea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE654u; }
        else if (ctx->pc != 0x1EE654u) { ctx->pc = 0x1EE654u; }
    }
    if (ctx->pc != 0x1EE654u) { return; }
    ctx->pc = 0x1EE654u;
    // 0x1ee654: 0xc07b64c
    ctx->pc = 0x1EE654u;
    SET_GPR_U32(ctx, 31, 0x1EE65Cu);
    ctx->pc = 0x1EE658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ED930u;
    {
        const uint32_t __entryPc = ctx->pc;
        force_Refire_GC2__Fi_0x1ed930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE65Cu; }
        else if (ctx->pc != 0x1EE65Cu) { ctx->pc = 0x1EE65Cu; }
    }
    if (ctx->pc != 0x1EE65Cu) { return; }
    ctx->pc = 0x1EE65Cu;
    // 0x1ee65c: 0x10000002
    ctx->pc = 0x1EE65Cu;
    {
        const bool branch_taken_0x1ee65c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE660u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1ee65c) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE664u;
label_1ee664:
    // 0x1ee664: 0xa200000f
    ctx->pc = 0x1ee664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
label_1ee668:
    // 0x1ee668: 0x7bbf0040
    ctx->pc = 0x1ee668u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee66c:
    // 0x1ee66c: 0x7bb30030
    ctx->pc = 0x1ee66cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee670: 0x7bb20020
    ctx->pc = 0x1ee670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee674: 0x7bb10010
    ctx->pc = 0x1ee674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee678: 0x7bb00000
    ctx->pc = 0x1ee678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee67c: 0x3e00008
    ctx->pc = 0x1EE67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE510u: goto label_1ee510;
            case 0x1EE538u: goto label_1ee538;
            case 0x1EE550u: goto label_1ee550;
            case 0x1EE570u: goto label_1ee570;
            case 0x1EE574u: goto label_1ee574;
            case 0x1EE5A8u: goto label_1ee5a8;
            case 0x1EE5C8u: goto label_1ee5c8;
            case 0x1EE618u: goto label_1ee618;
            case 0x1EE664u: goto label_1ee664;
            case 0x1EE668u: goto label_1ee668;
            case 0x1EE66Cu: goto label_1ee66c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE684u;
}
