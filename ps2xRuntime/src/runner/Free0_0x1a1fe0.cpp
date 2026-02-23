#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Free0
// Address: 0x1a1fe0 - 0x1a225c
void Free0_0x1a1fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Free0");


    ctx->pc = 0x1a1fe0u;

    // 0x1a1fe0: 0x8f888928
    ctx->pc = 0x1a1fe0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x1a1fe4: 0x8c87fff4
    ctx->pc = 0x1a1fe4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4294967284)));
    // 0x1a1fe8: 0x3c030051
    ctx->pc = 0x1a1fe8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1a1fec: 0x2486fff4
    ctx->pc = 0x1a1fecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x1a1ff0: 0x24655040
    ctx->pc = 0x1a1ff0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 20544));
    // 0x1a1ff4: 0xc51823
    ctx->pc = 0x1a1ff4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a1ff8: 0x1073821
    ctx->pc = 0x1a1ff8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1a1ffc: 0xaf878928
    ctx->pc = 0x1a1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 7));
    // 0x1a2000: 0x8c87fff0
    ctx->pc = 0x1a2000u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x1a2004: 0x4e00020
    ctx->pc = 0x1A2004u;
    {
        const bool branch_taken_0x1a2004 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1A2008u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x1a2004) {
            ctx->pc = 0x1A2088u;
            goto label_1a2088;
        }
    }
    ctx->pc = 0x1A200Cu;
    // 0x1a200c: 0x8cc40000
    ctx->pc = 0x1a200cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2010: 0x42080
    ctx->pc = 0x1a2010u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a2014: 0xc42021
    ctx->pc = 0x1a2014u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a2018: 0x8c840000
    ctx->pc = 0x1a2018u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a201c: 0x480001a
    ctx->pc = 0x1A201Cu;
    {
        const bool branch_taken_0x1a201c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1a201c) {
            ctx->pc = 0x1A2088u;
            goto label_1a2088;
        }
    }
    ctx->pc = 0x1A2024u;
    // 0x1a2024: 0x8f87892c
    ctx->pc = 0x1a2024u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
    // 0x1a2028: 0x3c040051
    ctx->pc = 0x1a2028u;
    SET_GPR_U32(ctx, 4, ((uint32_t)81 << 16));
    // 0x1a202c: 0x3c010051
    ctx->pc = 0x1a202cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a2030: 0x24845048
    ctx->pc = 0x1a2030u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20552));
    // 0x1a2034: 0x24e70001
    ctx->pc = 0x1a2034u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a2038: 0xaf87892c
    ctx->pc = 0x1a2038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 7));
    // 0x1a203c: 0x8cc70000
    ctx->pc = 0x1a203cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2040: 0x73823
    ctx->pc = 0x1a2040u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x1a2044: 0xacc70000
    ctx->pc = 0x1a2044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1a2048: 0x8cc80000
    ctx->pc = 0x1a2048u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a204c: 0x83823
    ctx->pc = 0x1a204cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x1a2050: 0x73880
    ctx->pc = 0x1a2050u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a2054: 0xe63821
    ctx->pc = 0x1a2054u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a2058: 0xace8fffc
    ctx->pc = 0x1a2058u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967292), GPR_U32(ctx, 8));
    // 0x1a205c: 0x8c275044
    ctx->pc = 0x1a205cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 20548)));
    // 0x1a2060: 0xacc70004
    ctx->pc = 0x1a2060u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x1a2064: 0xacc00008
    ctx->pc = 0x1a2064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1a2068: 0x3c010051
    ctx->pc = 0x1a2068u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a206c: 0x8c275044
    ctx->pc = 0x1a206cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 20548)));
    // 0x1a2070: 0x73880
    ctx->pc = 0x1a2070u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a2074: 0x872021
    ctx->pc = 0x1a2074u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1a2078: 0xac830000
    ctx->pc = 0x1a2078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a207c: 0x3c010051
    ctx->pc = 0x1a207cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a2080: 0x10000058
    ctx->pc = 0x1A2080u;
    {
        const bool branch_taken_0x1a2080 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2084u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20548), GPR_U32(ctx, 3));
        if (branch_taken_0x1a2080) {
            ctx->pc = 0x1A21E4u;
            goto label_1a21e4;
        }
    }
    ctx->pc = 0x1A2088u;
label_1a2088:
    // 0x1a2088: 0x4e1002d
    ctx->pc = 0x1A2088u;
    {
        const bool branch_taken_0x1a2088 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x1a2088) {
            ctx->pc = 0x1A2140u;
            goto label_1a2140;
        }
    }
    ctx->pc = 0x1A2090u;
    // 0x1a2090: 0x8cc40000
    ctx->pc = 0x1a2090u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2094: 0x42080
    ctx->pc = 0x1a2094u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a2098: 0xc42021
    ctx->pc = 0x1a2098u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a209c: 0x8c840000
    ctx->pc = 0x1a209cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a20a0: 0x4810027
    ctx->pc = 0x1A20A0u;
    {
        const bool branch_taken_0x1a20a0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1a20a0) {
            ctx->pc = 0x1A2140u;
            goto label_1a2140;
        }
    }
    ctx->pc = 0x1A20A8u;
    // 0x1a20a8: 0x8f87892c
    ctx->pc = 0x1a20a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
    // 0x1a20ac: 0x3c030051
    ctx->pc = 0x1a20acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1a20b0: 0x24645048
    ctx->pc = 0x1a20b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 20552));
    // 0x1a20b4: 0x3c030051
    ctx->pc = 0x1a20b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1a20b8: 0x24635044
    ctx->pc = 0x1a20b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20548));
    // 0x1a20bc: 0x24e7ffff
    ctx->pc = 0x1a20bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a20c0: 0xaf87892c
    ctx->pc = 0x1a20c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 7));
    // 0x1a20c4: 0x8cc70000
    ctx->pc = 0x1a20c4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a20c8: 0x73880
    ctx->pc = 0x1a20c8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a20cc: 0xc74821
    ctx->pc = 0x1a20ccu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1a20d0: 0x8d270004
    ctx->pc = 0x1a20d0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1a20d4: 0x8d280008
    ctx->pc = 0x1a20d4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1a20d8: 0x73880
    ctx->pc = 0x1a20d8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a20dc: 0x872021
    ctx->pc = 0x1a20dcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1a20e0: 0xac880000
    ctx->pc = 0x1a20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1a20e4: 0x8d240008
    ctx->pc = 0x1a20e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1a20e8: 0x8d270004
    ctx->pc = 0x1a20e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1a20ec: 0x42080
    ctx->pc = 0x1a20ecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a20f0: 0x641821
    ctx->pc = 0x1a20f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a20f4: 0xac670000
    ctx->pc = 0x1a20f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a20f8: 0x8cc3fffc
    ctx->pc = 0x1a20f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x1a20fc: 0x8cc70000
    ctx->pc = 0x1a20fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2100: 0x31880
    ctx->pc = 0x1a2100u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2104: 0xc34021
    ctx->pc = 0x1a2104u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2108: 0x71880
    ctx->pc = 0x1a2108u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a210c: 0xc31821
    ctx->pc = 0x1a210cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2110: 0x8c640000
    ctx->pc = 0x1a2110u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2114: 0x71003628
    ctx->pc = 0x1a2114u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1a2118: 0x8d030000
    ctx->pc = 0x1a2118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a211c: 0x872023
    ctx->pc = 0x1a211cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1a2120: 0x641821
    ctx->pc = 0x1a2120u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a2124: 0xad030000
    ctx->pc = 0x1a2124u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1a2128: 0x8d040000
    ctx->pc = 0x1a2128u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a212c: 0x41823
    ctx->pc = 0x1a212cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1a2130: 0x31880
    ctx->pc = 0x1a2130u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2134: 0x681821
    ctx->pc = 0x1a2134u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a2138: 0x1000002a
    ctx->pc = 0x1A2138u;
    {
        const bool branch_taken_0x1a2138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A213Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
        if (branch_taken_0x1a2138) {
            ctx->pc = 0x1A21E4u;
            goto label_1a21e4;
        }
    }
    ctx->pc = 0x1A2140u;
label_1a2140:
    // 0x1a2140: 0x8cc80000
    ctx->pc = 0x1a2140u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2144: 0x82080
    ctx->pc = 0x1a2144u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a2148: 0xc44821
    ctx->pc = 0x1a2148u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a214c: 0x8d240000
    ctx->pc = 0x1a214cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a2150: 0x4810019
    ctx->pc = 0x1A2150u;
    {
        const bool branch_taken_0x1a2150 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1a2150) {
            ctx->pc = 0x1A21B8u;
            goto label_1a21b8;
        }
    }
    ctx->pc = 0x1A2158u;
    // 0x1a2158: 0x882023
    ctx->pc = 0x1a2158u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1a215c: 0xacc40000
    ctx->pc = 0x1a215cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1a2160: 0x8cca0000
    ctx->pc = 0x1a2160u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2164: 0x3c040051
    ctx->pc = 0x1a2164u;
    SET_GPR_U32(ctx, 4, ((uint32_t)81 << 16));
    // 0x1a2168: 0x24875048
    ctx->pc = 0x1a2168u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 20552));
    // 0x1a216c: 0x3c040051
    ctx->pc = 0x1a216cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)81 << 16));
    // 0x1a2170: 0x24845044
    ctx->pc = 0x1a2170u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20548));
    // 0x1a2174: 0xa4023
    ctx->pc = 0x1a2174u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x1a2178: 0x84080
    ctx->pc = 0x1a2178u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a217c: 0x1064021
    ctx->pc = 0x1a217cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1a2180: 0xad0afffc
    ctx->pc = 0x1a2180u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294967292), GPR_U32(ctx, 10));
    // 0x1a2184: 0x8d280004
    ctx->pc = 0x1a2184u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1a2188: 0x84080
    ctx->pc = 0x1a2188u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a218c: 0xe83821
    ctx->pc = 0x1a218cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a2190: 0xace30000
    ctx->pc = 0x1a2190u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1a2194: 0x8d270008
    ctx->pc = 0x1a2194u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1a2198: 0x73880
    ctx->pc = 0x1a2198u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a219c: 0x872021
    ctx->pc = 0x1a219cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1a21a0: 0xac830000
    ctx->pc = 0x1a21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a21a4: 0x8d230004
    ctx->pc = 0x1a21a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1a21a8: 0xacc30004
    ctx->pc = 0x1a21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1a21ac: 0x8d230008
    ctx->pc = 0x1a21acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1a21b0: 0x1000000c
    ctx->pc = 0x1A21B0u;
    {
        const bool branch_taken_0x1a21b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A21B4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x1a21b0) {
            ctx->pc = 0x1A21E4u;
            goto label_1a21e4;
        }
    }
    ctx->pc = 0x1A21B8u;
label_1a21b8:
    // 0x1a21b8: 0x4e1000a
    ctx->pc = 0x1A21B8u;
    {
        const bool branch_taken_0x1a21b8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1A21BCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x1a21b8) {
            ctx->pc = 0x1A21E4u;
            goto label_1a21e4;
        }
    }
    ctx->pc = 0x1A21C0u;
    // 0x1a21c0: 0xc33021
    ctx->pc = 0x1a21c0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a21c4: 0x8cc30000
    ctx->pc = 0x1a21c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a21c8: 0x681823
    ctx->pc = 0x1a21c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a21cc: 0xacc30000
    ctx->pc = 0x1a21ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1a21d0: 0x8cc40000
    ctx->pc = 0x1a21d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a21d4: 0x41823
    ctx->pc = 0x1a21d4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1a21d8: 0x31880
    ctx->pc = 0x1a21d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a21dc: 0x661821
    ctx->pc = 0x1a21dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a21e0: 0xac64fffc
    ctx->pc = 0x1a21e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
label_1a21e4:
    // 0x1a21e4: 0x8cc70004
    ctx->pc = 0x1a21e4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a21e8: 0xc51823
    ctx->pc = 0x1a21e8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a21ec: 0x8cc80008
    ctx->pc = 0x1a21ecu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a21f0: 0x34883
    ctx->pc = 0x1a21f0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a21f4: 0x3c030051
    ctx->pc = 0x1a21f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1a21f8: 0x24655048
    ctx->pc = 0x1a21f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 20552));
    // 0x1a21fc: 0x73880
    ctx->pc = 0x1a21fcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a2200: 0xa72821
    ctx->pc = 0x1a2200u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1a2204: 0xaca80000
    ctx->pc = 0x1a2204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1a2208: 0x8cc50008
    ctx->pc = 0x1a2208u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a220c: 0x3c030051
    ctx->pc = 0x1a220cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1a2210: 0x8cc70004
    ctx->pc = 0x1a2210u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a2214: 0x24645044
    ctx->pc = 0x1a2214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 20548));
    // 0x1a2218: 0x3c030051
    ctx->pc = 0x1a2218u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1a221c: 0x3c010051
    ctx->pc = 0x1a221cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a2220: 0x52880
    ctx->pc = 0x1a2220u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a2224: 0x852021
    ctx->pc = 0x1a2224u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a2228: 0xac870000
    ctx->pc = 0x1a2228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1a222c: 0xacc00004
    ctx->pc = 0x1a222cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1a2230: 0x8c245048
    ctx->pc = 0x1a2230u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 20552)));
    // 0x1a2234: 0x24635044
    ctx->pc = 0x1a2234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20548));
    // 0x1a2238: 0xacc40008
    ctx->pc = 0x1a2238u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1a223c: 0x3c010051
    ctx->pc = 0x1a223cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a2240: 0x8c245048
    ctx->pc = 0x1a2240u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 20552)));
    // 0x1a2244: 0x42080
    ctx->pc = 0x1a2244u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a2248: 0x641821
    ctx->pc = 0x1a2248u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a224c: 0xac690000
    ctx->pc = 0x1a224cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x1a2250: 0x3c010051
    ctx->pc = 0x1a2250u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a2254: 0x3e00008
    ctx->pc = 0x1A2254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2258u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 20552), GPR_U32(ctx, 9));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2088u: goto label_1a2088;
            case 0x1A2140u: goto label_1a2140;
            case 0x1A21B8u: goto label_1a21b8;
            case 0x1A21E4u: goto label_1a21e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A225Cu;
}
