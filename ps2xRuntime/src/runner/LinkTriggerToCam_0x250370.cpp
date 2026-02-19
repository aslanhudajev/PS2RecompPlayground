#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LinkTriggerToCam
// Address: 0x250370 - 0x2505d4
void LinkTriggerToCam_0x250370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x250370u;

    // 0x250370: 0x27bdff70
    ctx->pc = 0x250370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x250374: 0xffbf0080
    ctx->pc = 0x250374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x250378: 0xffb70070
    ctx->pc = 0x250378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x25037c: 0xffb60060
    ctx->pc = 0x25037cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x250380: 0xffb50050
    ctx->pc = 0x250380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x250384: 0xffb40040
    ctx->pc = 0x250384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x250388: 0xffb30030
    ctx->pc = 0x250388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25038c: 0xffb20020
    ctx->pc = 0x25038cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x250390: 0xffb10010
    ctx->pc = 0x250390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x250394: 0xffb00000
    ctx->pc = 0x250394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250398: 0x80982d
    ctx->pc = 0x250398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25039c: 0x3c020034
    ctx->pc = 0x25039cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2503a0: 0x8c43e7f0
    ctx->pc = 0x2503a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x2503a4: 0x2402000d
    ctx->pc = 0x2503a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x2503a8: 0x1462005f
    ctx->pc = 0x2503A8u;
    {
        const bool branch_taken_0x2503a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2503ACu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2503a8) {
            ctx->pc = 0x250528u;
            goto label_250528;
        }
    }
    ctx->pc = 0x2503B0u;
    // 0x2503b0: 0x2a4200c9
    ctx->pc = 0x2503b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 201));
    // 0x2503b4: 0x14400047
    ctx->pc = 0x2503B4u;
    {
        const bool branch_taken_0x2503b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2503B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 198));
        if (branch_taken_0x2503b4) {
            ctx->pc = 0x2504D4u;
            goto label_2504d4;
        }
    }
    ctx->pc = 0x2503BCu;
    // 0x2503bc: 0x240200c9
    ctx->pc = 0x2503bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 201));
    // 0x2503c0: 0x16420008
    ctx->pc = 0x2503C0u;
    {
        const bool branch_taken_0x2503c0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2503C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 202));
        if (branch_taken_0x2503c0) {
            ctx->pc = 0x2503E4u;
            goto label_2503e4;
        }
    }
    ctx->pc = 0x2503C8u;
    // 0x2503c8: 0x3c040034
    ctx->pc = 0x2503c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x2503cc: 0x131980
    ctx->pc = 0x2503ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 6));
    // 0x2503d0: 0x3c020033
    ctx->pc = 0x2503d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2503d4: 0x24424b70
    ctx->pc = 0x2503d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x2503d8: 0x621821
    ctx->pc = 0x2503d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2503dc: 0xac83d210
    ctx->pc = 0x2503dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955536), GPR_U32(ctx, 3));
    // 0x2503e0: 0x240200ca
    ctx->pc = 0x2503e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 202));
label_2503e4:
    // 0x2503e4: 0x16420008
    ctx->pc = 0x2503E4u;
    {
        const bool branch_taken_0x2503e4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2503E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 203));
        if (branch_taken_0x2503e4) {
            ctx->pc = 0x250408u;
            goto label_250408;
        }
    }
    ctx->pc = 0x2503ECu;
    // 0x2503ec: 0x3c040034
    ctx->pc = 0x2503ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x2503f0: 0x131980
    ctx->pc = 0x2503f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 6));
    // 0x2503f4: 0x3c020033
    ctx->pc = 0x2503f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2503f8: 0x24424b70
    ctx->pc = 0x2503f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x2503fc: 0x621821
    ctx->pc = 0x2503fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250400: 0xac83d220
    ctx->pc = 0x250400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955552), GPR_U32(ctx, 3));
    // 0x250404: 0x240200cb
    ctx->pc = 0x250404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 203));
label_250408:
    // 0x250408: 0x16420008
    ctx->pc = 0x250408u;
    {
        const bool branch_taken_0x250408 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x25040Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 204));
        if (branch_taken_0x250408) {
            ctx->pc = 0x25042Cu;
            goto label_25042c;
        }
    }
    ctx->pc = 0x250410u;
    // 0x250410: 0x3c040034
    ctx->pc = 0x250410u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x250414: 0x131980
    ctx->pc = 0x250414u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 6));
    // 0x250418: 0x3c020033
    ctx->pc = 0x250418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x25041c: 0x24424b70
    ctx->pc = 0x25041cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x250420: 0x621821
    ctx->pc = 0x250420u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250424: 0xac83d214
    ctx->pc = 0x250424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955540), GPR_U32(ctx, 3));
    // 0x250428: 0x240200cc
    ctx->pc = 0x250428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 204));
label_25042c:
    // 0x25042c: 0x16420008
    ctx->pc = 0x25042Cu;
    {
        const bool branch_taken_0x25042c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x250430u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 205));
        if (branch_taken_0x25042c) {
            ctx->pc = 0x250450u;
            goto label_250450;
        }
    }
    ctx->pc = 0x250434u;
    // 0x250434: 0x3c040034
    ctx->pc = 0x250434u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x250438: 0x131980
    ctx->pc = 0x250438u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 6));
    // 0x25043c: 0x3c020033
    ctx->pc = 0x25043cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x250440: 0x24424b70
    ctx->pc = 0x250440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x250444: 0x621821
    ctx->pc = 0x250444u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250448: 0xac83d224
    ctx->pc = 0x250448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955556), GPR_U32(ctx, 3));
    // 0x25044c: 0x240200cd
    ctx->pc = 0x25044cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 205));
label_250450:
    // 0x250450: 0x16420008
    ctx->pc = 0x250450u;
    {
        const bool branch_taken_0x250450 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x250454u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4294967056));
        if (branch_taken_0x250450) {
            ctx->pc = 0x250474u;
            goto label_250474;
        }
    }
    ctx->pc = 0x250458u;
    // 0x250458: 0x3c040034
    ctx->pc = 0x250458u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x25045c: 0x131980
    ctx->pc = 0x25045cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 6));
    // 0x250460: 0x3c020033
    ctx->pc = 0x250460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x250464: 0x24424b70
    ctx->pc = 0x250464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x250468: 0x621821
    ctx->pc = 0x250468u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25046c: 0xac83d218
    ctx->pc = 0x25046cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955544), GPR_U32(ctx, 3));
    // 0x250470: 0x2644ff10
    ctx->pc = 0x250470u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4294967056));
label_250474:
    // 0x250474: 0x2c82000e
    ctx->pc = 0x250474u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 14));
    // 0x250478: 0x10400009
    ctx->pc = 0x250478u;
    {
        const bool branch_taken_0x250478 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25047Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x250478) {
            ctx->pc = 0x2504A0u;
            goto label_2504a0;
        }
    }
    ctx->pc = 0x250480u;
    // 0x250480: 0x2442d228
    ctx->pc = 0x250480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955560));
    // 0x250484: 0x42080
    ctx->pc = 0x250484u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x250488: 0x822021
    ctx->pc = 0x250488u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25048c: 0x131980
    ctx->pc = 0x25048cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 6));
    // 0x250490: 0x3c020033
    ctx->pc = 0x250490u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x250494: 0x24424b70
    ctx->pc = 0x250494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x250498: 0x621821
    ctx->pc = 0x250498u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25049c: 0xac830000
    ctx->pc = 0x25049cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2504a0:
    // 0x2504a0: 0x2645ff24
    ctx->pc = 0x2504a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4294967076));
    // 0x2504a4: 0x2ca2000e
    ctx->pc = 0x2504a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 14));
    // 0x2504a8: 0x1040003f
    ctx->pc = 0x2504A8u;
    {
        const bool branch_taken_0x2504a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2504ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x2504a8) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2504B0u;
    // 0x2504b0: 0x2484d228
    ctx->pc = 0x2504b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955560));
    // 0x2504b4: 0x51080
    ctx->pc = 0x2504b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2504b8: 0x822021
    ctx->pc = 0x2504b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2504bc: 0x131980
    ctx->pc = 0x2504bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 6));
    // 0x2504c0: 0x3c020033
    ctx->pc = 0x2504c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2504c4: 0x24424b70
    ctx->pc = 0x2504c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x2504c8: 0x621821
    ctx->pc = 0x2504c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2504cc: 0x10000036
    ctx->pc = 0x2504CCu;
    {
        const bool branch_taken_0x2504cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2504D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        if (branch_taken_0x2504cc) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2504D4u;
label_2504d4:
    // 0x2504d4: 0x16420008
    ctx->pc = 0x2504D4u;
    {
        const bool branch_taken_0x2504d4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2504D8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294967126));
        if (branch_taken_0x2504d4) {
            ctx->pc = 0x2504F8u;
            goto label_2504f8;
        }
    }
    ctx->pc = 0x2504DCu;
    // 0x2504dc: 0x3c040033
    ctx->pc = 0x2504dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x2504e0: 0x131980
    ctx->pc = 0x2504e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 6));
    // 0x2504e4: 0x3c020033
    ctx->pc = 0x2504e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2504e8: 0x24424b70
    ctx->pc = 0x2504e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x2504ec: 0x621821
    ctx->pc = 0x2504ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2504f0: 0x1000002d
    ctx->pc = 0x2504F0u;
    {
        const bool branch_taken_0x2504f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2504F4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 18808), GPR_U32(ctx, 3));
        if (branch_taken_0x2504f0) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x2504F8u;
label_2504f8:
    // 0x2504f8: 0x2c62000e
    ctx->pc = 0x2504f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
    // 0x2504fc: 0x1040000a
    ctx->pc = 0x2504FCu;
    {
        const bool branch_taken_0x2504fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x250500u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x2504fc) {
            ctx->pc = 0x250528u;
            goto label_250528;
        }
    }
    ctx->pc = 0x250504u;
    // 0x250504: 0x2484d228
    ctx->pc = 0x250504u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955560));
    // 0x250508: 0x31080
    ctx->pc = 0x250508u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x25050c: 0x822021
    ctx->pc = 0x25050cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250510: 0x131980
    ctx->pc = 0x250510u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 6));
    // 0x250514: 0x3c020033
    ctx->pc = 0x250514u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x250518: 0x24424b70
    ctx->pc = 0x250518u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x25051c: 0x621821
    ctx->pc = 0x25051cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250520: 0x10000021
    ctx->pc = 0x250520u;
    {
        const bool branch_taken_0x250520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250524u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
        if (branch_taken_0x250520) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250528u;
label_250528:
    // 0x250528: 0x3c020034
    ctx->pc = 0x250528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25052c: 0x8c50cd94
    ctx->pc = 0x25052cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x250530: 0x3c020034
    ctx->pc = 0x250530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x250534: 0x8c42cd98
    ctx->pc = 0x250534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x250538: 0x1840001b
    ctx->pc = 0x250538u;
    {
        const bool branch_taken_0x250538 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25053Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x250538) {
            ctx->pc = 0x2505A8u;
            goto label_2505a8;
        }
    }
    ctx->pc = 0x250540u;
    // 0x250540: 0x2417ffff
    ctx->pc = 0x250540u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x250544: 0x24160005
    ctx->pc = 0x250544u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 5));
    // 0x250548: 0x3c15003b
    ctx->pc = 0x250548u;
    SET_GPR_U32(ctx, 21, ((uint32_t)59 << 16));
    // 0x25054c: 0x3c140034
    ctx->pc = 0x25054cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
label_250550:
    // 0x250550: 0x860200d8
    ctx->pc = 0x250550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x250554: 0x50570010
    ctx->pc = 0x250554u;
    {
        const bool branch_taken_0x250554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 23));
        if (branch_taken_0x250554) {
            ctx->pc = 0x250558u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x250598u;
            goto label_250598;
        }
    }
    ctx->pc = 0x25055Cu;
    // 0x25055c: 0x8e020000
    ctx->pc = 0x25055cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250560: 0x8c420000
    ctx->pc = 0x250560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250564: 0x5456000c
    ctx->pc = 0x250564u;
    {
        const bool branch_taken_0x250564 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        if (branch_taken_0x250564) {
            ctx->pc = 0x250568u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x250598u;
            goto label_250598;
        }
    }
    ctx->pc = 0x25056Cu;
    // 0x25056c: 0x820200f6
    ctx->pc = 0x25056cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
    // 0x250570: 0x54520009
    ctx->pc = 0x250570u;
    {
        const bool branch_taken_0x250570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x250570) {
            ctx->pc = 0x250574u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x250598u;
            goto label_250598;
        }
    }
    ctx->pc = 0x250578u;
    // 0x250578: 0x86060102
    ctx->pc = 0x250578u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x25057c: 0x4c00004
    ctx->pc = 0x25057Cu;
    {
        const bool branch_taken_0x25057c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x250580u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294935864));
        if (branch_taken_0x25057c) {
            ctx->pc = 0x250590u;
            goto label_250590;
        }
    }
    ctx->pc = 0x250584u;
    // 0x250584: 0x220282d
    ctx->pc = 0x250584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250588: 0xc0b492e
    ctx->pc = 0x250588u;
    SET_GPR_U32(ctx, 31, 0x250590u);
    ctx->pc = 0x25058Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250590u; }
    }
    if (ctx->pc != 0x250590u) { return; }
    ctx->pc = 0x250590u;
label_250590:
    // 0x250590: 0xa6130102
    ctx->pc = 0x250590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 19));
    // 0x250594: 0x26310001
    ctx->pc = 0x250594u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_250598:
    // 0x250598: 0x8e82cd98
    ctx->pc = 0x250598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294954392)));
    // 0x25059c: 0x222102a
    ctx->pc = 0x25059cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2505a0: 0x1440ffeb
    ctx->pc = 0x2505A0u;
    {
        const bool branch_taken_0x2505a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2505A4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 272));
        if (branch_taken_0x2505a0) {
            ctx->pc = 0x250550u;
            goto label_250550;
        }
    }
    ctx->pc = 0x2505A8u;
label_2505a8:
    // 0x2505a8: 0xdfbf0080
    ctx->pc = 0x2505a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2505ac: 0xdfb70070
    ctx->pc = 0x2505acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2505b0: 0xdfb60060
    ctx->pc = 0x2505b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2505b4: 0xdfb50050
    ctx->pc = 0x2505b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2505b8: 0xdfb40040
    ctx->pc = 0x2505b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2505bc: 0xdfb30030
    ctx->pc = 0x2505bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2505c0: 0xdfb20020
    ctx->pc = 0x2505c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2505c4: 0xdfb10010
    ctx->pc = 0x2505c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2505c8: 0xdfb00000
    ctx->pc = 0x2505c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2505cc: 0x3e00008
    ctx->pc = 0x2505CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2505D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2503E4u: goto label_2503e4;
            case 0x250408u: goto label_250408;
            case 0x25042Cu: goto label_25042c;
            case 0x250450u: goto label_250450;
            case 0x250474u: goto label_250474;
            case 0x2504A0u: goto label_2504a0;
            case 0x2504D4u: goto label_2504d4;
            case 0x2504F8u: goto label_2504f8;
            case 0x250528u: goto label_250528;
            case 0x250550u: goto label_250550;
            case 0x250590u: goto label_250590;
            case 0x250598u: goto label_250598;
            case 0x2505A8u: goto label_2505a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2505D4u;
}
