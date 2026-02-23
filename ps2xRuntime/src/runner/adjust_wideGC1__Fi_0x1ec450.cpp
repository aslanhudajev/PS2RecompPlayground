#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adjust_wideGC1__Fi
// Address: 0x1ec450 - 0x1ec5a4
void adjust_wideGC1__Fi_0x1ec450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adjust_wideGC1__Fi");


    ctx->pc = 0x1ec450u;

    // 0x1ec450: 0x41080
    ctx->pc = 0x1ec450u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec454: 0x441821
    ctx->pc = 0x1ec454u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ec458: 0x27bdffc0
    ctx->pc = 0x1ec458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec45c: 0x31080
    ctx->pc = 0x1ec45cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec460: 0x7fbf0030
    ctx->pc = 0x1ec460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ec464: 0x7fb20020
    ctx->pc = 0x1ec464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec468: 0x7fb10010
    ctx->pc = 0x1ec468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec46c: 0x621021
    ctx->pc = 0x1ec46cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec470: 0x21880
    ctx->pc = 0x1ec470u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec474: 0x3c020050
    ctx->pc = 0x1ec474u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ec478: 0x70809628
    ctx->pc = 0x1ec478u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ec47c: 0x7fb00000
    ctx->pc = 0x1ec47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec480: 0x2442db70
    ctx->pc = 0x1ec480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957936));
    // 0x1ec484: 0x438021
    ctx->pc = 0x1ec484u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec488: 0x24040055
    ctx->pc = 0x1ec488u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 85));
    // 0x1ec48c: 0x24050069
    ctx->pc = 0x1ec48cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 105));
    // 0x1ec490: 0xc07b2c8
    ctx->pc = 0x1EC490u;
    SET_GPR_U32(ctx, 31, 0x1EC498u);
    ctx->pc = 0x1EC494u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ECB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_adjust_line__Fii_0x1ecb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC498u; }
        else if (ctx->pc != 0x1EC498u) { ctx->pc = 0x1EC498u; }
    }
    if (ctx->pc != 0x1EC498u) { return; }
    ctx->pc = 0x1EC498u;
    // 0x1ec498: 0x8202000e
    ctx->pc = 0x1ec498u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ec49c: 0x10400008
    ctx->pc = 0x1EC49Cu;
    {
        const bool branch_taken_0x1ec49c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC4A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x1ec49c) {
            ctx->pc = 0x1EC4C0u;
            goto label_1ec4c0;
        }
    }
    ctx->pc = 0x1EC4A4u;
    // 0x1ec4a4: 0x244434f0
    ctx->pc = 0x1ec4a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1ec4a8: 0x3c020002
    ctx->pc = 0x1ec4a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1ec4ac: 0x3445000c
    ctx->pc = 0x1ec4acu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 12));
    // 0x1ec4b0: 0x70003628
    ctx->pc = 0x1ec4b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ec4b4: 0x70003e28
    ctx->pc = 0x1ec4b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ec4b8: 0xc086018
    ctx->pc = 0x1EC4B8u;
    SET_GPR_U32(ctx, 31, 0x1EC4C0u);
    ctx->pc = 0x1EC4BCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4C0u; }
        else if (ctx->pc != 0x1EC4C0u) { ctx->pc = 0x1EC4C0u; }
    }
    if (ctx->pc != 0x1EC4C0u) { return; }
    ctx->pc = 0x1EC4C0u;
label_1ec4c0:
    // 0x1ec4c0: 0x8202000e
    ctx->pc = 0x1ec4c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ec4c4: 0x10400028
    ctx->pc = 0x1EC4C4u;
    {
        const bool branch_taken_0x1ec4c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec4c4) {
            ctx->pc = 0x1EC568u;
            goto label_1ec568;
        }
    }
    ctx->pc = 0x1EC4CCu;
    // 0x1ec4cc: 0x96030000
    ctx->pc = 0x1ec4ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec4d0: 0x3402ffff
    ctx->pc = 0x1ec4d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1ec4d4: 0x10620024
    ctx->pc = 0x1EC4D4u;
    {
        const bool branch_taken_0x1ec4d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EC4D8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1ec4d4) {
            ctx->pc = 0x1EC568u;
            goto label_1ec568;
        }
    }
    ctx->pc = 0x1EC4DCu;
    // 0x1ec4dc: 0x521021
    ctx->pc = 0x1ec4dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec4e0: 0x21080
    ctx->pc = 0x1ec4e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec4e4: 0x521021
    ctx->pc = 0x1ec4e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec4e8: 0x21840
    ctx->pc = 0x1ec4e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ec4ec: 0x3c020050
    ctx->pc = 0x1ec4ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ec4f0: 0x2442dc4a
    ctx->pc = 0x1ec4f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958154));
    // 0x1ec4f4: 0x431021
    ctx->pc = 0x1ec4f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec4f8: 0x84450000
    ctx->pc = 0x1ec4f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec4fc: 0x8f848de4
    ctx->pc = 0x1ec4fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938084)));
    // 0x1ec500: 0x3c020050
    ctx->pc = 0x1ec500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ec504: 0x2442dc4c
    ctx->pc = 0x1ec504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958156));
    // 0x1ec508: 0x852023
    ctx->pc = 0x1ec508u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ec50c: 0x431821
    ctx->pc = 0x1ec50cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec510: 0xaf848df0
    ctx->pc = 0x1ec510u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938096), GPR_U32(ctx, 4));
    // 0x1ec514: 0x8f828de8
    ctx->pc = 0x1ec514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1ec518: 0x84630000
    ctx->pc = 0x1ec518u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec51c: 0x8f848df0
    ctx->pc = 0x1ec51cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938096)));
    // 0x1ec520: 0x431023
    ctx->pc = 0x1ec520u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec524: 0xaf828df4
    ctx->pc = 0x1ec524u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938100), GPR_U32(ctx, 2));
    // 0x1ec528: 0x28820040
    ctx->pc = 0x1ec528u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 64));
    // 0x1ec52c: 0x1440000e
    ctx->pc = 0x1EC52Cu;
    {
        const bool branch_taken_0x1ec52c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ec52c) {
            ctx->pc = 0x1EC568u;
            goto label_1ec568;
        }
    }
    ctx->pc = 0x1EC534u;
    // 0x1ec534: 0x8f838df4
    ctx->pc = 0x1ec534u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938100)));
    // 0x1ec538: 0x28620020
    ctx->pc = 0x1ec538u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
    // 0x1ec53c: 0x1440000a
    ctx->pc = 0x1EC53Cu;
    {
        const bool branch_taken_0x1ec53c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EC540u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1ec53c) {
            ctx->pc = 0x1EC568u;
            goto label_1ec568;
        }
    }
    ctx->pc = 0x1EC544u;
    // 0x1ec544: 0x122940
    ctx->pc = 0x1ec544u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 5));
    // 0x1ec548: 0x24420dc8
    ctx->pc = 0x1ec548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3528));
    // 0x1ec54c: 0x451021
    ctx->pc = 0x1ec54cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ec550: 0xac440000
    ctx->pc = 0x1ec550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1ec554: 0x3c020050
    ctx->pc = 0x1ec554u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ec558: 0x24420dcc
    ctx->pc = 0x1ec558u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3532));
    // 0x1ec55c: 0x451021
    ctx->pc = 0x1ec55cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ec560: 0xac430000
    ctx->pc = 0x1ec560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ec564: 0x24110001
    ctx->pc = 0x1ec564u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_1ec568:
    // 0x1ec568: 0x16200008
    ctx->pc = 0x1EC568u;
    {
        const bool branch_taken_0x1ec568 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EC56Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ec568) {
            ctx->pc = 0x1EC58Cu;
            goto label_1ec58c;
        }
    }
    ctx->pc = 0x1EC570u;
    // 0x1ec570: 0x8202000e
    ctx->pc = 0x1ec570u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ec574: 0x10400004
    ctx->pc = 0x1EC574u;
    {
        const bool branch_taken_0x1ec574 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec574) {
            ctx->pc = 0x1EC588u;
            goto label_1ec588;
        }
    }
    ctx->pc = 0x1EC57Cu;
    // 0x1ec57c: 0x8f828df8
    ctx->pc = 0x1ec57cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938104)));
    // 0x1ec580: 0x24420001
    ctx->pc = 0x1ec580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ec584: 0xaf828df8
    ctx->pc = 0x1ec584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 2));
label_1ec588:
    // 0x1ec588: 0x72201628
    ctx->pc = 0x1ec588u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1ec58c:
    // 0x1ec58c: 0x7bbf0030
    ctx->pc = 0x1ec58cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec590: 0x7bb20020
    ctx->pc = 0x1ec590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec594: 0x7bb10010
    ctx->pc = 0x1ec594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec598: 0x7bb00000
    ctx->pc = 0x1ec598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec59c: 0x3e00008
    ctx->pc = 0x1EC59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC5A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC4C0u: goto label_1ec4c0;
            case 0x1EC568u: goto label_1ec568;
            case 0x1EC588u: goto label_1ec588;
            case 0x1EC58Cu: goto label_1ec58c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC5A4u;
}
