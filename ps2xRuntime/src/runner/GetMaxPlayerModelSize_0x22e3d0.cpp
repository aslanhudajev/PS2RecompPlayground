#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetMaxPlayerModelSize
// Address: 0x22e3d0 - 0x22e6a8
void GetMaxPlayerModelSize_0x22e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22e3d0u;

    // 0x22e3d0: 0x27bdffe0
    ctx->pc = 0x22e3d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22e3d4: 0xffb10010
    ctx->pc = 0x22e3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22e3d8: 0xffb00000
    ctx->pc = 0x22e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22e3dc: 0x3c020032
    ctx->pc = 0x22e3dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22e3e0: 0x8c421650
    ctx->pc = 0x22e3e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5712)));
    // 0x22e3e4: 0x144000ad
    ctx->pc = 0x22E3E4u;
    {
        const bool branch_taken_0x22e3e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22E3E8u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x22e3e4) {
            ctx->pc = 0x22E69Cu;
            goto label_22e69c;
        }
    }
    ctx->pc = 0x22E3ECu;
    // 0x22e3ec: 0x282d
    ctx->pc = 0x22e3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e3f0: 0x2411004c
    ctx->pc = 0x22e3f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22e3f4: 0x3c020033
    ctx->pc = 0x22e3f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e3f8: 0x2450c7f0
    ctx->pc = 0x22e3f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294952944));
    // 0x22e3fc: 0x3419b800
    ctx->pc = 0x22e3fcu;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 0), 47104));
    // 0x22e400: 0x3c020033
    ctx->pc = 0x22e400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e404: 0x2458c7f4
    ctx->pc = 0x22e404u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 2), 4294952948));
    // 0x22e408: 0x3c0f0004
    ctx->pc = 0x22e408u;
    SET_GPR_U32(ctx, 15, ((uint32_t)4 << 16));
    // 0x22e40c: 0x35efd800
    ctx->pc = 0x22e40cu;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), 55296));
    // 0x22e410: 0x3c020033
    ctx->pc = 0x22e410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e414: 0x244ec7f8
    ctx->pc = 0x22e414u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 2), 4294952952));
    // 0x22e418: 0x3c0d0001
    ctx->pc = 0x22e418u;
    SET_GPR_U32(ctx, 13, ((uint32_t)1 << 16));
    // 0x22e41c: 0x35ad0400
    ctx->pc = 0x22e41cu;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), 1024));
    // 0x22e420: 0x3c020033
    ctx->pc = 0x22e420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e424: 0x244cc800
    ctx->pc = 0x22e424u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 4294952960));
    // 0x22e428: 0x240b1000
    ctx->pc = 0x22e428u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x22e42c: 0x3c020033
    ctx->pc = 0x22e42cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e430: 0x244ac814
    ctx->pc = 0x22e430u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294952980));
    // 0x22e434: 0x3c090002
    ctx->pc = 0x22e434u;
    SET_GPR_U32(ctx, 9, ((uint32_t)2 << 16));
    // 0x22e438: 0x3529bc00
    ctx->pc = 0x22e438u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 48128));
    // 0x22e43c: 0x3c020033
    ctx->pc = 0x22e43cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e440: 0x2448c818
    ctx->pc = 0x22e440u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294952984));
    // 0x22e444: 0x3407c000
    ctx->pc = 0x22e444u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 49152));
    // 0x22e448: 0x3c020033
    ctx->pc = 0x22e448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e44c: 0x2446c81c
    ctx->pc = 0x22e44cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294952988));
    // 0x22e450: 0x3c040002
    ctx->pc = 0x22e450u;
    SET_GPR_U32(ctx, 4, ((uint32_t)2 << 16));
    // 0x22e454: 0x34845000
    ctx->pc = 0x22e454u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 20480));
label_22e458:
    // 0x22e458: 0xb11818
    ctx->pc = 0x22e458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e45c: 0x701021
    ctx->pc = 0x22e45cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22e460: 0xac590000
    ctx->pc = 0x22e460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 25));
    // 0x22e464: 0x781021
    ctx->pc = 0x22e464u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x22e468: 0xac4f0000
    ctx->pc = 0x22e468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 15));
    // 0x22e46c: 0x6e1021
    ctx->pc = 0x22e46cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x22e470: 0xac4d0000
    ctx->pc = 0x22e470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x22e474: 0x6c1021
    ctx->pc = 0x22e474u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x22e478: 0xac4b0000
    ctx->pc = 0x22e478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x22e47c: 0x6a1021
    ctx->pc = 0x22e47cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x22e480: 0xac490000
    ctx->pc = 0x22e480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x22e484: 0x681021
    ctx->pc = 0x22e484u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x22e488: 0xac470000
    ctx->pc = 0x22e488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x22e48c: 0x661821
    ctx->pc = 0x22e48cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22e490: 0x24a50001
    ctx->pc = 0x22e490u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x22e494: 0x28a20004
    ctx->pc = 0x22e494u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x22e498: 0x1440ffef
    ctx->pc = 0x22E498u;
    {
        const bool branch_taken_0x22e498 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22E49Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x22e498) {
            ctx->pc = 0x22E458u;
            goto label_22e458;
        }
    }
    ctx->pc = 0x22E4A0u;
    // 0x22e4a0: 0x24050001
    ctx->pc = 0x22e4a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e4a4: 0x3c070033
    ctx->pc = 0x22e4a4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)51 << 16));
    // 0x22e4a8: 0xe0102d
    ctx->pc = 0x22e4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4ac: 0x2448c7d8
    ctx->pc = 0x22e4acu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294952920));
    // 0x22e4b0: 0x2406004c
    ctx->pc = 0x22e4b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22e4b4: 0x3c020033
    ctx->pc = 0x22e4b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e4b8: 0x244dc7f0
    ctx->pc = 0x22e4b8u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 2), 4294952944));
    // 0x22e4bc: 0x3c020033
    ctx->pc = 0x22e4bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e4c0: 0x244cc7f4
    ctx->pc = 0x22e4c0u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 4294952948));
    // 0x22e4c4: 0x3c020033
    ctx->pc = 0x22e4c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e4c8: 0x244bc7f8
    ctx->pc = 0x22e4c8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 4294952952));
    // 0x22e4cc: 0x3c020033
    ctx->pc = 0x22e4ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e4d0: 0x244ac800
    ctx->pc = 0x22e4d0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294952960));
    // 0x22e4d4: 0x3c020033
    ctx->pc = 0x22e4d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e4d8: 0x2449c814
    ctx->pc = 0x22e4d8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294952980));
    // 0x22e4dc: 0x3c020033
    ctx->pc = 0x22e4dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e4e0: 0x244ec818
    ctx->pc = 0x22e4e0u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 2), 4294952984));
    // 0x22e4e4: 0x3c020033
    ctx->pc = 0x22e4e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e4e8: 0x244fc81c
    ctx->pc = 0x22e4e8u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 2), 4294952988));
    // 0x22e4ec: 0xa61818
    ctx->pc = 0x22e4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22e4f0:
    // 0x22e4f0: 0x6d1021
    ctx->pc = 0x22e4f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x22e4f4: 0x8c430000
    ctx->pc = 0x22e4f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e4f8: 0x8d020018
    ctx->pc = 0x22e4f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x22e4fc: 0x43102a
    ctx->pc = 0x22e4fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x22e500: 0x54400001
    ctx->pc = 0x22E500u;
    {
        const bool branch_taken_0x22e500 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e500) {
            ctx->pc = 0x22E504u;
            WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
            ctx->pc = 0x22E508u;
            goto label_22e508;
        }
    }
    ctx->pc = 0x22E508u;
label_22e508:
    // 0x22e508: 0x24e4c7d8
    ctx->pc = 0x22e508u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294952920));
    // 0x22e50c: 0xa61818
    ctx->pc = 0x22e50cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e510: 0x6c1021
    ctx->pc = 0x22e510u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x22e514: 0x8c430000
    ctx->pc = 0x22e514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e518: 0x8c82001c
    ctx->pc = 0x22e518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x22e51c: 0x43102a
    ctx->pc = 0x22e51cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x22e520: 0x54400002
    ctx->pc = 0x22E520u;
    {
        const bool branch_taken_0x22e520 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e520) {
            ctx->pc = 0x22E524u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
            ctx->pc = 0x22E52Cu;
            goto label_22e52c;
        }
    }
    ctx->pc = 0x22E528u;
    // 0x22e528: 0x24e4c7d8
    ctx->pc = 0x22e528u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294952920));
label_22e52c:
    // 0x22e52c: 0xa61818
    ctx->pc = 0x22e52cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e530: 0x6b1021
    ctx->pc = 0x22e530u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x22e534: 0x8c430000
    ctx->pc = 0x22e534u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e538: 0x8c820020
    ctx->pc = 0x22e538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x22e53c: 0x43102a
    ctx->pc = 0x22e53cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x22e540: 0x54400001
    ctx->pc = 0x22E540u;
    {
        const bool branch_taken_0x22e540 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e540) {
            ctx->pc = 0x22E544u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
            ctx->pc = 0x22E548u;
            goto label_22e548;
        }
    }
    ctx->pc = 0x22E548u;
label_22e548:
    // 0x22e548: 0x24e4c7d8
    ctx->pc = 0x22e548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294952920));
    // 0x22e54c: 0xa61818
    ctx->pc = 0x22e54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e550: 0x6a1021
    ctx->pc = 0x22e550u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x22e554: 0x8c430000
    ctx->pc = 0x22e554u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e558: 0x8c820028
    ctx->pc = 0x22e558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x22e55c: 0x43102a
    ctx->pc = 0x22e55cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x22e560: 0x54400002
    ctx->pc = 0x22E560u;
    {
        const bool branch_taken_0x22e560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e560) {
            ctx->pc = 0x22E564u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
            ctx->pc = 0x22E56Cu;
            goto label_22e56c;
        }
    }
    ctx->pc = 0x22E568u;
    // 0x22e568: 0x24e4c7d8
    ctx->pc = 0x22e568u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294952920));
label_22e56c:
    // 0x22e56c: 0xa61818
    ctx->pc = 0x22e56cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e570: 0x691021
    ctx->pc = 0x22e570u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x22e574: 0x8c430000
    ctx->pc = 0x22e574u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e578: 0x8c82003c
    ctx->pc = 0x22e578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x22e57c: 0x43102a
    ctx->pc = 0x22e57cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x22e580: 0x54400001
    ctx->pc = 0x22E580u;
    {
        const bool branch_taken_0x22e580 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e580) {
            ctx->pc = 0x22E584u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
            ctx->pc = 0x22E588u;
            goto label_22e588;
        }
    }
    ctx->pc = 0x22E588u;
label_22e588:
    // 0x22e588: 0x24e4c7d8
    ctx->pc = 0x22e588u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294952920));
    // 0x22e58c: 0xa61818
    ctx->pc = 0x22e58cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e590: 0x6e1021
    ctx->pc = 0x22e590u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x22e594: 0x8c430000
    ctx->pc = 0x22e594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e598: 0x8c820040
    ctx->pc = 0x22e598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x22e59c: 0x43102a
    ctx->pc = 0x22e59cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x22e5a0: 0x54400002
    ctx->pc = 0x22E5A0u;
    {
        const bool branch_taken_0x22e5a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e5a0) {
            ctx->pc = 0x22E5A4u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
            ctx->pc = 0x22E5ACu;
            goto label_22e5ac;
        }
    }
    ctx->pc = 0x22E5A8u;
    // 0x22e5a8: 0x24e4c7d8
    ctx->pc = 0x22e5a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294952920));
label_22e5ac:
    // 0x22e5ac: 0xa61818
    ctx->pc = 0x22e5acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e5b0: 0x6f1021
    ctx->pc = 0x22e5b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x22e5b4: 0x8c430000
    ctx->pc = 0x22e5b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e5b8: 0x8c820044
    ctx->pc = 0x22e5b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x22e5bc: 0x43102a
    ctx->pc = 0x22e5bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x22e5c0: 0x54400001
    ctx->pc = 0x22E5C0u;
    {
        const bool branch_taken_0x22e5c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e5c0) {
            ctx->pc = 0x22E5C4u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
            ctx->pc = 0x22E5C8u;
            goto label_22e5c8;
        }
    }
    ctx->pc = 0x22E5C8u;
label_22e5c8:
    // 0x22e5c8: 0x24a50001
    ctx->pc = 0x22e5c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x22e5cc: 0x28a20004
    ctx->pc = 0x22e5ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x22e5d0: 0x1440ffc7
    ctx->pc = 0x22E5D0u;
    {
        const bool branch_taken_0x22e5d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22E5D4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22e5d0) {
            ctx->pc = 0x22E4F0u;
            goto label_22e4f0;
        }
    }
    ctx->pc = 0x22E5D8u;
    // 0x22e5d8: 0x24050001
    ctx->pc = 0x22e5d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e5dc: 0x3c020033
    ctx->pc = 0x22e5dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e5e0: 0x2446c7d8
    ctx->pc = 0x22e5e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294952920));
    // 0x22e5e4: 0x240e004c
    ctx->pc = 0x22e5e4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22e5e8: 0x3c020033
    ctx->pc = 0x22e5e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e5ec: 0x244dc7f0
    ctx->pc = 0x22e5ecu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 2), 4294952944));
    // 0x22e5f0: 0x3c020033
    ctx->pc = 0x22e5f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e5f4: 0x244cc7f4
    ctx->pc = 0x22e5f4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 4294952948));
    // 0x22e5f8: 0x3c020033
    ctx->pc = 0x22e5f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e5fc: 0x244bc7f8
    ctx->pc = 0x22e5fcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 4294952952));
    // 0x22e600: 0x3c020033
    ctx->pc = 0x22e600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e604: 0x244ac800
    ctx->pc = 0x22e604u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294952960));
    // 0x22e608: 0x3c020033
    ctx->pc = 0x22e608u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e60c: 0x2449c814
    ctx->pc = 0x22e60cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294952980));
    // 0x22e610: 0x3c020033
    ctx->pc = 0x22e610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e614: 0x2448c818
    ctx->pc = 0x22e614u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294952984));
    // 0x22e618: 0x3c020033
    ctx->pc = 0x22e618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e61c: 0x2447c81c
    ctx->pc = 0x22e61cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294952988));
    // 0x22e620: 0xae2018
    ctx->pc = 0x22e620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e624: 0x0
    ctx->pc = 0x22e624u;
    // NOP
label_22e628:
    // 0x22e628: 0x8d1821
    ctx->pc = 0x22e628u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x22e62c: 0x8cc20018
    ctx->pc = 0x22e62cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x22e630: 0xac620000
    ctx->pc = 0x22e630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22e634: 0x8c1821
    ctx->pc = 0x22e634u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x22e638: 0x8cc2001c
    ctx->pc = 0x22e638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x22e63c: 0xac620000
    ctx->pc = 0x22e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22e640: 0x8b1821
    ctx->pc = 0x22e640u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x22e644: 0x8cc20020
    ctx->pc = 0x22e644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x22e648: 0xac620000
    ctx->pc = 0x22e648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22e64c: 0x8a1821
    ctx->pc = 0x22e64cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x22e650: 0x8cc20028
    ctx->pc = 0x22e650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x22e654: 0xac620000
    ctx->pc = 0x22e654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22e658: 0x891821
    ctx->pc = 0x22e658u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x22e65c: 0x8cc2003c
    ctx->pc = 0x22e65cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x22e660: 0xac620000
    ctx->pc = 0x22e660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22e664: 0x881821
    ctx->pc = 0x22e664u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x22e668: 0x8cc20040
    ctx->pc = 0x22e668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x22e66c: 0xac620000
    ctx->pc = 0x22e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22e670: 0x872021
    ctx->pc = 0x22e670u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x22e674: 0x8cc20044
    ctx->pc = 0x22e674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x22e678: 0xac820000
    ctx->pc = 0x22e678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22e67c: 0x24a50001
    ctx->pc = 0x22e67cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x22e680: 0x28a20004
    ctx->pc = 0x22e680u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x22e684: 0x1440ffe8
    ctx->pc = 0x22E684u;
    {
        const bool branch_taken_0x22e684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22E688u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22e684) {
            ctx->pc = 0x22E628u;
            goto label_22e628;
        }
    }
    ctx->pc = 0x22E68Cu;
    // 0x22e68c: 0x3c030032
    ctx->pc = 0x22e68cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22e690: 0x24020001
    ctx->pc = 0x22e690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e694: 0xac621650
    ctx->pc = 0x22e694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5712), GPR_U32(ctx, 2));
    // 0x22e698: 0xdfb10010
    ctx->pc = 0x22e698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22e69c:
    // 0x22e69c: 0xdfb00000
    ctx->pc = 0x22e69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e6a0: 0x3e00008
    ctx->pc = 0x22E6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E6A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E458u: goto label_22e458;
            case 0x22E4F0u: goto label_22e4f0;
            case 0x22E508u: goto label_22e508;
            case 0x22E52Cu: goto label_22e52c;
            case 0x22E548u: goto label_22e548;
            case 0x22E56Cu: goto label_22e56c;
            case 0x22E588u: goto label_22e588;
            case 0x22E5ACu: goto label_22e5ac;
            case 0x22E5C8u: goto label_22e5c8;
            case 0x22E628u: goto label_22e628;
            case 0x22E69Cu: goto label_22e69c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E6A8u;
}
