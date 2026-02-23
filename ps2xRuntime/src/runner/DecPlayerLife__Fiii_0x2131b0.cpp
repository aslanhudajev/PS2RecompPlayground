#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DecPlayerLife__Fiii
// Address: 0x2131b0 - 0x2133e0
void DecPlayerLife__Fiii_0x2131b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DecPlayerLife__Fiii");


    ctx->pc = 0x2131b0u;

    // 0x2131b0: 0x27bdff60
    ctx->pc = 0x2131b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2131b4: 0x7fbf0090
    ctx->pc = 0x2131b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2131b8: 0x7fbe0080
    ctx->pc = 0x2131b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2131bc: 0x7fb70070
    ctx->pc = 0x2131bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2131c0: 0x7fb60060
    ctx->pc = 0x2131c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2131c4: 0x7fb50050
    ctx->pc = 0x2131c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2131c8: 0x7fb40040
    ctx->pc = 0x2131c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2131cc: 0x7fb30030
    ctx->pc = 0x2131ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2131d0: 0x7fb20020
    ctx->pc = 0x2131d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2131d4: 0x7fb10010
    ctx->pc = 0x2131d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2131d8: 0x7fb00000
    ctx->pc = 0x2131d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2131dc: 0x70a0be28
    ctx->pc = 0x2131dcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2131e0: 0x70c0f628
    ctx->pc = 0x2131e0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2131e4: 0x7080ae28
    ctx->pc = 0x2131e4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2131e8: 0x70008628
    ctx->pc = 0x2131e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2131ec: 0xc084c40
    ctx->pc = 0x2131ECu;
    SET_GPR_U32(ctx, 31, 0x2131F4u);
    ctx->pc = 0x2131F0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x213100u;
    {
        const uint32_t __entryPc = ctx->pc;
        can_DecPlayerLife__Fi_0x213100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2131F4u; }
        else if (ctx->pc != 0x2131F4u) { ctx->pc = 0x2131F4u; }
    }
    if (ctx->pc != 0x2131F4u) { return; }
    ctx->pc = 0x2131F4u;
    // 0x2131f4: 0x1440006e
    ctx->pc = 0x2131F4u;
    {
        const bool branch_taken_0x2131f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2131F8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2131f4) {
            ctx->pc = 0x2133B0u;
            goto label_2133b0;
        }
    }
    ctx->pc = 0x2131FCu;
    // 0x2131fc: 0x151080
    ctx->pc = 0x2131fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
    // 0x213200: 0x27838b70
    ctx->pc = 0x213200u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 28), 4294937456));
    // 0x213204: 0x62b021
    ctx->pc = 0x213204u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213208: 0x8ec30000
    ctx->pc = 0x213208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21320c: 0x14600067
    ctx->pc = 0x21320Cu;
    {
        const bool branch_taken_0x21320c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x213210u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x21320c) {
            ctx->pc = 0x2133ACu;
            goto label_2133ac;
        }
    }
    ctx->pc = 0x213214u;
    // 0x213214: 0x8425e504
    ctx->pc = 0x213214u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x213218: 0x24030009
    ctx->pc = 0x213218u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x21321c: 0x10a30063
    ctx->pc = 0x21321Cu;
    {
        const bool branch_taken_0x21321c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x213220u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 4));
        if (branch_taken_0x21321c) {
            ctx->pc = 0x2133ACu;
            goto label_2133ac;
        }
    }
    ctx->pc = 0x213224u;
    // 0x213224: 0x752023
    ctx->pc = 0x213224u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x213228: 0x418c0
    ctx->pc = 0x213228u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x21322c: 0x641823
    ctx->pc = 0x21322cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213230: 0x3a0c0
    ctx->pc = 0x213230u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 3), 3));
    // 0x213234: 0x3c030050
    ctx->pc = 0x213234u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x213238: 0x2463dd30
    ctx->pc = 0x213238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958384));
    // 0x21323c: 0x749821
    ctx->pc = 0x21323cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x213240: 0x8e630000
    ctx->pc = 0x213240u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x213244: 0x24720001
    ctx->pc = 0x213244u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 1));
    // 0x213248: 0x2a410005
    ctx->pc = 0x213248u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 5));
    // 0x21324c: 0x50200001
    ctx->pc = 0x21324Cu;
    {
        const bool branch_taken_0x21324c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x21324c) {
            ctx->pc = 0x213250u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 5));
            ctx->pc = 0x213254u;
            goto label_213254;
        }
    }
    ctx->pc = 0x213254u;
label_213254:
    // 0x213254: 0x2403000a
    ctx->pc = 0x213254u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x213258: 0x14a30013
    ctx->pc = 0x213258u;
    {
        const bool branch_taken_0x213258 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x21325Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x213258) {
            ctx->pc = 0x2132A8u;
            goto label_2132a8;
        }
    }
    ctx->pc = 0x213260u;
    // 0x213260: 0x8f838bcc
    ctx->pc = 0x213260u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x213264: 0x14700010
    ctx->pc = 0x213264u;
    {
        const bool branch_taken_0x213264 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 16));
        ctx->pc = 0x213268u;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x213264) {
            ctx->pc = 0x2132A8u;
            goto label_2132a8;
        }
    }
    ctx->pc = 0x21326Cu;
    // 0x21326c: 0x2463fc81
    ctx->pc = 0x21326cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966401));
    // 0x213270: 0x621021
    ctx->pc = 0x213270u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213274: 0x80430000
    ctx->pc = 0x213274u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213278: 0x2402001b
    ctx->pc = 0x213278u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
    // 0x21327c: 0x1462000a
    ctx->pc = 0x21327Cu;
    {
        const bool branch_taken_0x21327c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x21327c) {
            ctx->pc = 0x2132A8u;
            goto label_2132a8;
        }
    }
    ctx->pc = 0x213284u;
    // 0x213284: 0xc069fb8
    ctx->pc = 0x213284u;
    SET_GPR_U32(ctx, 31, 0x21328Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21328Cu; }
        else if (ctx->pc != 0x21328Cu) { ctx->pc = 0x21328Cu; }
    }
    if (ctx->pc != 0x21328Cu) { return; }
    ctx->pc = 0x21328Cu;
    // 0x21328c: 0x16400002
    ctx->pc = 0x21328Cu;
    {
        const bool branch_taken_0x21328c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x213290u;
        { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x21328c) {
            ctx->pc = 0x213298u;
            goto label_213298;
        }
    }
    ctx->pc = 0x213294u;
    // 0x213294: 0x1cd
    ctx->pc = 0x213294u;
    runtime->handleBreak(rdram, ctx);
label_213298:
    // 0x213298: 0x1010
    ctx->pc = 0x213298u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x21329c: 0x14400002
    ctx->pc = 0x21329Cu;
    {
        const bool branch_taken_0x21329c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21329c) {
            ctx->pc = 0x2132A8u;
            goto label_2132a8;
        }
    }
    ctx->pc = 0x2132A4u;
    // 0x2132a4: 0x24110001
    ctx->pc = 0x2132a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_2132a8:
    // 0x2132a8: 0x16200006
    ctx->pc = 0x2132A8u;
    {
        const bool branch_taken_0x2132a8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2132a8) {
            ctx->pc = 0x2132C4u;
            goto label_2132c4;
        }
    }
    ctx->pc = 0x2132B0u;
    // 0x2132b0: 0x8e630000
    ctx->pc = 0x2132b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2132b4: 0x24020001
    ctx->pc = 0x2132b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2132b8: 0x2463ffff
    ctx->pc = 0x2132b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2132bc: 0xae630000
    ctx->pc = 0x2132bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2132c0: 0xa3828b88
    ctx->pc = 0x2132c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937480), (uint8_t)GPR_U32(ctx, 2));
label_2132c4:
    // 0x2132c4: 0x8f838b8c
    ctx->pc = 0x2132c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937484)));
    // 0x2132c8: 0x24020002
    ctx->pc = 0x2132c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2132cc: 0x14620005
    ctx->pc = 0x2132CCu;
    {
        const bool branch_taken_0x2132cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2132cc) {
            ctx->pc = 0x2132E4u;
            goto label_2132e4;
        }
    }
    ctx->pc = 0x2132D4u;
    // 0x2132d4: 0x8f828bc4
    ctx->pc = 0x2132d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937540)));
    // 0x2132d8: 0x2442ffff
    ctx->pc = 0x2132d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2132dc: 0x10000007
    ctx->pc = 0x2132DCu;
    {
        const bool branch_taken_0x2132dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2132E0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), GPR_U32(ctx, 2));
        if (branch_taken_0x2132dc) {
            ctx->pc = 0x2132FCu;
            goto label_2132fc;
        }
    }
    ctx->pc = 0x2132E4u;
label_2132e4:
    // 0x2132e4: 0x8f828bc4
    ctx->pc = 0x2132e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937540)));
    // 0x2132e8: 0x2442ffff
    ctx->pc = 0x2132e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2132ec: 0xaf828bc4
    ctx->pc = 0x2132ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), GPR_U32(ctx, 2));
    // 0x2132f0: 0x8f828bc4
    ctx->pc = 0x2132f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937540)));
    // 0x2132f4: 0x2442ffff
    ctx->pc = 0x2132f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2132f8: 0xaf828bc4
    ctx->pc = 0x2132f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), GPR_U32(ctx, 2));
label_2132fc:
    // 0x2132fc: 0x72a02628
    ctx->pc = 0x2132fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x213300: 0xc084d14
    ctx->pc = 0x213300u;
    SET_GPR_U32(ctx, 31, 0x213308u);
    ctx->pc = 0x213304u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967196));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213308u; }
        else if (ctx->pc != 0x213308u) { ctx->pc = 0x213308u; }
    }
    if (ctx->pc != 0x213308u) { return; }
    ctx->pc = 0x213308u;
    // 0x213308: 0x1220000b
    ctx->pc = 0x213308u;
    {
        const bool branch_taken_0x213308 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x21330Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x213308) {
            ctx->pc = 0x213338u;
            goto label_213338;
        }
    }
    ctx->pc = 0x213310u;
    // 0x213310: 0x2442dddc
    ctx->pc = 0x213310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958556));
    // 0x213314: 0x24030001
    ctx->pc = 0x213314u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x213318: 0x541021
    ctx->pc = 0x213318u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21331c: 0xac430000
    ctx->pc = 0x21331cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x213320: 0x3c020050
    ctx->pc = 0x213320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x213324: 0x2442dde0
    ctx->pc = 0x213324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958560));
    // 0x213328: 0x2403000b
    ctx->pc = 0x213328u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x21332c: 0x541021
    ctx->pc = 0x21332cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x213330: 0x1000000c
    ctx->pc = 0x213330u;
    {
        const bool branch_taken_0x213330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213334u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x213330) {
            ctx->pc = 0x213364u;
            goto label_213364;
        }
    }
    ctx->pc = 0x213338u;
label_213338:
    // 0x213338: 0x12e0000b
    ctx->pc = 0x213338u;
    {
        const bool branch_taken_0x213338 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x21333Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 75));
        if (branch_taken_0x213338) {
            ctx->pc = 0x213368u;
            goto label_213368;
        }
    }
    ctx->pc = 0x213340u;
    // 0x213340: 0x3c020050
    ctx->pc = 0x213340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x213344: 0x2442dddc
    ctx->pc = 0x213344u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958556));
    // 0x213348: 0x24030001
    ctx->pc = 0x213348u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21334c: 0x541021
    ctx->pc = 0x21334cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x213350: 0xac430000
    ctx->pc = 0x213350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x213354: 0x3c020050
    ctx->pc = 0x213354u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x213358: 0x2442dde0
    ctx->pc = 0x213358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958560));
    // 0x21335c: 0x541021
    ctx->pc = 0x21335cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x213360: 0xac5e0000
    ctx->pc = 0x213360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_213364:
    // 0x213364: 0x2402004b
    ctx->pc = 0x213364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 75));
label_213368:
    // 0x213368: 0xaec20000
    ctx->pc = 0x213368u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x21336c: 0x8f858c48
    ctx->pc = 0x21336cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x213370: 0x24020002
    ctx->pc = 0x213370u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x213374: 0x8ca40004
    ctx->pc = 0x213374u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x213378: 0x41840
    ctx->pc = 0x213378u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x21337c: 0x641821
    ctx->pc = 0x21337cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213380: 0x31880
    ctx->pc = 0x213380u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x213384: 0x641821
    ctx->pc = 0x213384u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213388: 0x31900
    ctx->pc = 0x213388u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x21338c: 0x651821
    ctx->pc = 0x21338cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x213390: 0x806300d2
    ctx->pc = 0x213390u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 210)));
    // 0x213394: 0x10620005
    ctx->pc = 0x213394u;
    {
        const bool branch_taken_0x213394 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x213394) {
            ctx->pc = 0x2133ACu;
            goto label_2133ac;
        }
    }
    ctx->pc = 0x21339Cu;
    // 0x21339c: 0x8e620000
    ctx->pc = 0x21339cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2133a0: 0x1c400002
    ctx->pc = 0x2133A0u;
    {
        const bool branch_taken_0x2133a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2133A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2133a0) {
            ctx->pc = 0x2133ACu;
            goto label_2133ac;
        }
    }
    ctx->pc = 0x2133A8u;
    // 0x2133a8: 0xae620000
    ctx->pc = 0x2133a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2133ac:
    // 0x2133ac: 0x72001628
    ctx->pc = 0x2133acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2133b0:
    // 0x2133b0: 0x7bbf0090
    ctx->pc = 0x2133b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2133b4: 0x7bbe0080
    ctx->pc = 0x2133b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2133b8: 0x7bb70070
    ctx->pc = 0x2133b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2133bc: 0x7bb60060
    ctx->pc = 0x2133bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2133c0: 0x7bb50050
    ctx->pc = 0x2133c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2133c4: 0x7bb40040
    ctx->pc = 0x2133c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2133c8: 0x7bb30030
    ctx->pc = 0x2133c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2133cc: 0x7bb20020
    ctx->pc = 0x2133ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2133d0: 0x7bb10010
    ctx->pc = 0x2133d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2133d4: 0x7bb00000
    ctx->pc = 0x2133d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2133d8: 0x3e00008
    ctx->pc = 0x2133D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2133DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213254u: goto label_213254;
            case 0x213298u: goto label_213298;
            case 0x2132A8u: goto label_2132a8;
            case 0x2132C4u: goto label_2132c4;
            case 0x2132E4u: goto label_2132e4;
            case 0x2132FCu: goto label_2132fc;
            case 0x213338u: goto label_213338;
            case 0x213364u: goto label_213364;
            case 0x213368u: goto label_213368;
            case 0x2133ACu: goto label_2133ac;
            case 0x2133B0u: goto label_2133b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2133E0u;
}
