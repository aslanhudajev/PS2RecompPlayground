#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_AringGetWrite
// Address: 0x192330 - 0x1924e4
void SFBUF_AringGetWrite_0x192330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_AringGetWrite");


    ctx->pc = 0x192330u;

    // 0x192330: 0x24020388
    ctx->pc = 0x192330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x192334: 0x27bdff40
    ctx->pc = 0x192334u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x192338: 0xa22818
    ctx->pc = 0x192338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x19233c: 0xffb50070
    ctx->pc = 0x19233cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x192340: 0xffbf00b0
    ctx->pc = 0x192340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x192344: 0x24830d34
    ctx->pc = 0x192344u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3380));
    // 0x192348: 0xffbe00a0
    ctx->pc = 0x192348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x19234c: 0xffb70090
    ctx->pc = 0x19234cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x192350: 0xffb60080
    ctx->pc = 0x192350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x192354: 0x651821
    ctx->pc = 0x192354u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x192358: 0xffb40060
    ctx->pc = 0x192358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x19235c: 0xffb30050
    ctx->pc = 0x19235cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x192360: 0xffb20040
    ctx->pc = 0x192360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x192364: 0xffb10030
    ctx->pc = 0x192364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x192368: 0xffb00020
    ctx->pc = 0x192368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19236c: 0x8c620004
    ctx->pc = 0x19236cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x192370: 0x14400006
    ctx->pc = 0x192370u;
    {
        const bool branch_taken_0x192370 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x192374u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192370) {
            ctx->pc = 0x19238Cu;
            goto label_19238c;
        }
    }
    ctx->pc = 0x192378u;
    // 0x192378: 0x3c05ff00
    ctx->pc = 0x192378u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19237c: 0xc064ea0
    ctx->pc = 0x19237Cu;
    SET_GPR_U32(ctx, 31, 0x192384u);
    ctx->pc = 0x192380u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1025));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192384u; }
        else if (ctx->pc != 0x192384u) { ctx->pc = 0x192384u; }
    }
    if (ctx->pc != 0x192384u) { return; }
    ctx->pc = 0x192384u;
    // 0x192384: 0x1000004c
    ctx->pc = 0x192384u;
    {
        const bool branch_taken_0x192384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192388u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x192384) {
            ctx->pc = 0x1924B8u;
            goto label_1924b8;
        }
    }
    ctx->pc = 0x19238Cu;
label_19238c:
    // 0x19238c: 0x24700010
    ctx->pc = 0x19238cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 16));
    // 0x192390: 0xc064f3a
    ctx->pc = 0x192390u;
    SET_GPR_U32(ctx, 31, 0x192398u);
    ctx->pc = 0x192394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192398u; }
        else if (ctx->pc != 0x192398u) { ctx->pc = 0x192398u; }
    }
    if (ctx->pc != 0x192398u) { return; }
    ctx->pc = 0x192398u;
    // 0x192398: 0x8e02001c
    ctx->pc = 0x192398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19239c: 0x3a0202d
    ctx->pc = 0x19239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1923a0: 0x8e17000c
    ctx->pc = 0x1923a0u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1923a4: 0xafa20004
    ctx->pc = 0x1923a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1923a8: 0x8e030024
    ctx->pc = 0x1923a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1923ac: 0x8e1e0014
    ctx->pc = 0x1923acu;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1923b0: 0x8e050018
    ctx->pc = 0x1923b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1923b4: 0x8e160020
    ctx->pc = 0x1923b4u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1923b8: 0xafa30008
    ctx->pc = 0x1923b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1923bc: 0x8e14002c
    ctx->pc = 0x1923bcu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1923c0: 0x8e130028
    ctx->pc = 0x1923c0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1923c4: 0x8e110008
    ctx->pc = 0x1923c4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1923c8: 0x8e120010
    ctx->pc = 0x1923c8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1923cc: 0xc064f44
    ctx->pc = 0x1923CCu;
    SET_GPR_U32(ctx, 31, 0x1923D4u);
    ctx->pc = 0x1923D0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1923D4u; }
        else if (ctx->pc != 0x1923D4u) { ctx->pc = 0x1923D4u; }
    }
    if (ctx->pc != 0x1923D4u) { return; }
    ctx->pc = 0x1923D4u;
    // 0x1923d4: 0x8fa30004
    ctx->pc = 0x1923d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1923d8: 0xaeb10000
    ctx->pc = 0x1923d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x1923dc: 0xaeb20008
    ctx->pc = 0x1923dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x1923e0: 0x2831021
    ctx->pc = 0x1923e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1923e4: 0xaeb70004
    ctx->pc = 0x1923e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
    // 0x1923e8: 0x262102a
    ctx->pc = 0x1923e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x1923ec: 0xaeb30024
    ctx->pc = 0x1923ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 19));
    // 0x1923f0: 0xaeb40028
    ctx->pc = 0x1923f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 20));
    // 0x1923f4: 0x14400006
    ctx->pc = 0x1923F4u;
    {
        const bool branch_taken_0x1923f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1923F8u;
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1923f4) {
            ctx->pc = 0x192410u;
            goto label_192410;
        }
    }
    ctx->pc = 0x1923FCu;
    // 0x1923fc: 0xaea00020
    ctx->pc = 0x1923fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x192400: 0xaea0000c
    ctx->pc = 0x192400u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x192404: 0xaea00014
    ctx->pc = 0x192404u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x192408: 0x10000014
    ctx->pc = 0x192408u;
    {
        const bool branch_taken_0x192408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19240Cu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x192408) {
            ctx->pc = 0x19245Cu;
            goto label_19245c;
        }
    }
    ctx->pc = 0x192410u;
label_192410:
    // 0x192410: 0x8fa30008
    ctx->pc = 0x192410u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192414: 0x2c3102a
    ctx->pc = 0x192414u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 3)));
    // 0x192418: 0x50400013
    ctx->pc = 0x192418u;
    {
        const bool branch_taken_0x192418 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x192418) {
            ctx->pc = 0x19241Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->pc = 0x192468u;
            goto label_192468;
        }
    }
    ctx->pc = 0x192420u;
    // 0x192420: 0x761023
    ctx->pc = 0x192420u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x192424: 0x2ae30009
    ctx->pc = 0x192424u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), 9));
    // 0x192428: 0xaea2000c
    ctx->pc = 0x192428u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x19242c: 0x14600003
    ctx->pc = 0x19242Cu;
    {
        const bool branch_taken_0x19242c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x192430u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
        if (branch_taken_0x19242c) {
            ctx->pc = 0x19243Cu;
            goto label_19243c;
        }
    }
    ctx->pc = 0x192434u;
    // 0x192434: 0x161040
    ctx->pc = 0x192434u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x192438: 0x3c21021
    ctx->pc = 0x192438u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_19243c:
    // 0x19243c: 0x10600003
    ctx->pc = 0x19243Cu;
    {
        const bool branch_taken_0x19243c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x192440u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x19243c) {
            ctx->pc = 0x19244Cu;
            goto label_19244c;
        }
    }
    ctx->pc = 0x192444u;
    // 0x192444: 0x10000003
    ctx->pc = 0x192444u;
    {
        const bool branch_taken_0x192444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192448u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        if (branch_taken_0x192444) {
            ctx->pc = 0x192454u;
            goto label_192454;
        }
    }
    ctx->pc = 0x19244Cu;
label_19244c:
    // 0x19244c: 0x161040
    ctx->pc = 0x19244cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x192450: 0xa21021
    ctx->pc = 0x192450u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_192454:
    // 0x192454: 0xaea20018
    ctx->pc = 0x192454u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x192458: 0xaea00020
    ctx->pc = 0x192458u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_19245c:
    // 0x19245c: 0xaea00010
    ctx->pc = 0x19245cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x192460: 0x10000013
    ctx->pc = 0x192460u;
    {
        const bool branch_taken_0x192460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192464u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        if (branch_taken_0x192460) {
            ctx->pc = 0x1924B0u;
            goto label_1924b0;
        }
    }
    ctx->pc = 0x192468u;
label_192468:
    // 0x192468: 0x761023
    ctx->pc = 0x192468u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x19246c: 0x2ae30009
    ctx->pc = 0x19246cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), 9));
    // 0x192470: 0xaea2000c
    ctx->pc = 0x192470u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x192474: 0x14600003
    ctx->pc = 0x192474u;
    {
        const bool branch_taken_0x192474 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x192478u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
        if (branch_taken_0x192474) {
            ctx->pc = 0x192484u;
            goto label_192484;
        }
    }
    ctx->pc = 0x19247Cu;
    // 0x19247c: 0x161040
    ctx->pc = 0x19247cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x192480: 0x3c21021
    ctx->pc = 0x192480u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_192484:
    // 0x192484: 0x10600003
    ctx->pc = 0x192484u;
    {
        const bool branch_taken_0x192484 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x192488u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x192484) {
            ctx->pc = 0x192494u;
            goto label_192494;
        }
    }
    ctx->pc = 0x19248Cu;
    // 0x19248c: 0x10000003
    ctx->pc = 0x19248Cu;
    {
        const bool branch_taken_0x19248c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192490u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        if (branch_taken_0x19248c) {
            ctx->pc = 0x19249Cu;
            goto label_19249c;
        }
    }
    ctx->pc = 0x192494u;
label_192494:
    // 0x192494: 0x161040
    ctx->pc = 0x192494u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x192498: 0xa21021
    ctx->pc = 0x192498u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_19249c:
    // 0x19249c: 0xaea50020
    ctx->pc = 0x19249cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 5));
    // 0x1924a0: 0xaea20018
    ctx->pc = 0x1924a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1924a4: 0x8fa20008
    ctx->pc = 0x1924a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1924a8: 0xaebe001c
    ctx->pc = 0x1924a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 30));
    // 0x1924ac: 0xaea20010
    ctx->pc = 0x1924acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_1924b0:
    // 0x1924b0: 0x102d
    ctx->pc = 0x1924b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1924b4: 0xdfbf00b0
    ctx->pc = 0x1924b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1924b8:
    // 0x1924b8: 0xdfbe00a0
    ctx->pc = 0x1924b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1924bc: 0xdfb70090
    ctx->pc = 0x1924bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1924c0: 0xdfb60080
    ctx->pc = 0x1924c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1924c4: 0xdfb50070
    ctx->pc = 0x1924c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1924c8: 0xdfb40060
    ctx->pc = 0x1924c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1924cc: 0xdfb30050
    ctx->pc = 0x1924ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1924d0: 0xdfb20040
    ctx->pc = 0x1924d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1924d4: 0xdfb10030
    ctx->pc = 0x1924d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1924d8: 0xdfb00020
    ctx->pc = 0x1924d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1924dc: 0x3e00008
    ctx->pc = 0x1924DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1924E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19238Cu: goto label_19238c;
            case 0x192410u: goto label_192410;
            case 0x19243Cu: goto label_19243c;
            case 0x19244Cu: goto label_19244c;
            case 0x192454u: goto label_192454;
            case 0x19245Cu: goto label_19245c;
            case 0x192468u: goto label_192468;
            case 0x192484u: goto label_192484;
            case 0x192494u: goto label_192494;
            case 0x19249Cu: goto label_19249c;
            case 0x1924B0u: goto label_1924b0;
            case 0x1924B8u: goto label_1924b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1924E4u;
}
