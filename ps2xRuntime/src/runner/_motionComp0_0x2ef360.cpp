#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _motionComp0
// Address: 0x2ef360 - 0x2ef694
void _motionComp0_0x2ef360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ef360u;

    // 0x2ef360: 0x3c02003a
    ctx->pc = 0x2ef360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ef364: 0x27bdffa0
    ctx->pc = 0x2ef364u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ef368: 0x8c433168
    ctx->pc = 0x2ef368u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12648)));
    // 0x2ef36c: 0xffb40040
    ctx->pc = 0x2ef36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ef370: 0x83001a
    ctx->pc = 0x2ef370u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2ef374: 0xffb30030
    ctx->pc = 0x2ef374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ef378: 0xffb20020
    ctx->pc = 0x2ef378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ef37c: 0xa0982d
    ctx->pc = 0x2ef37cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef380: 0xffb10010
    ctx->pc = 0x2ef380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ef384: 0xffb00000
    ctx->pc = 0x2ef384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ef388: 0xffbf0050
    ctx->pc = 0x2ef388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ef38c: 0xc0802d
    ctx->pc = 0x2ef38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef390: 0x50600001
    ctx->pc = 0x2EF390u;
    {
        const bool branch_taken_0x2ef390 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ef390) {
            ctx->pc = 0x2EF394u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2EF398u;
            goto label_2ef398;
        }
    }
    ctx->pc = 0x2EF398u;
label_2ef398:
    // 0x2ef398: 0x32140001
    ctx->pc = 0x2ef398u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 16), 1));
    // 0x2ef39c: 0x1010
    ctx->pc = 0x2ef39cu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2ef3a0: 0x9012
    ctx->pc = 0x2ef3a0u;
    SET_GPR_U32(ctx, 18, ctx->lo);
    // 0x2ef3a4: 0x40882d
    ctx->pc = 0x2ef3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef3a8: 0x122900
    ctx->pc = 0x2ef3a8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 4));
    // 0x2ef3ac: 0x12800012
    ctx->pc = 0x2EF3ACu;
    {
        const bool branch_taken_0x2ef3ac = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF3B0u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x2ef3ac) {
            ctx->pc = 0x2EF3F8u;
            goto label_2ef3f8;
        }
    }
    ctx->pc = 0x2EF3B4u;
    // 0x2ef3b4: 0x3c0f003a
    ctx->pc = 0x2ef3b4u;
    SET_GPR_U32(ctx, 15, ((uint32_t)58 << 16));
    // 0x2ef3b8: 0x3c19003a
    ctx->pc = 0x2ef3b8u;
    SET_GPR_U32(ctx, 25, ((uint32_t)58 << 16));
    // 0x2ef3bc: 0x0
    ctx->pc = 0x2ef3bcu;
    // NOP
label_2ef3c0:
    // 0x2ef3c0: 0x3c021000
    ctx->pc = 0x2ef3c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2ef3c4: 0x3442d400
    ctx->pc = 0x2ef3c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54272));
    // 0x2ef3c8: 0x8c430000
    ctx->pc = 0x2ef3c8u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2ef3cc: 0x31a02
    ctx->pc = 0x2ef3ccu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ef3d0: 0x30630001
    ctx->pc = 0x2ef3d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2ef3d4: 0x1460fffa
    ctx->pc = 0x2EF3D4u;
    {
        const bool branch_taken_0x2ef3d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ef3d4) {
            ctx->pc = 0x2EF3C0u;
            goto label_2ef3c0;
        }
    }
    ctx->pc = 0x2EF3DCu;
    // 0x2ef3dc: 0x25e23638
    ctx->pc = 0x2ef3dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 15), 13880));
    // 0x2ef3e0: 0x24040140
    ctx->pc = 0x2ef3e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ef3e4: 0x8c430280
    ctx->pc = 0x2ef3e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x2ef3e8: 0x642818
    ctx->pc = 0x2ef3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef3ec: 0xa21821
    ctx->pc = 0x2ef3ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ef3f0: 0x10000063
    ctx->pc = 0x2EF3F0u;
    {
        const bool branch_taken_0x2ef3f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF3F4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 0));
        if (branch_taken_0x2ef3f0) {
            ctx->pc = 0x2EF580u;
            goto label_2ef580;
        }
    }
    ctx->pc = 0x2EF3F8u;
label_2ef3f8:
    // 0x2ef3f8: 0x24e2ffff
    ctx->pc = 0x2ef3f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ef3fc: 0x2c420003
    ctx->pc = 0x2ef3fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x2ef400: 0x1440000a
    ctx->pc = 0x2EF400u;
    {
        const bool branch_taken_0x2ef400 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ef400) {
            ctx->pc = 0x2EF42Cu;
            goto label_2ef42c;
        }
    }
    ctx->pc = 0x2EF408u;
    // 0x2ef408: 0x3c04003c
    ctx->pc = 0x2ef408u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2ef40c: 0xe0282d
    ctx->pc = 0x2ef40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef410: 0xc0bba4a
    ctx->pc = 0x2EF410u;
    SET_GPR_U32(ctx, 31, 0x2EF418u);
    ctx->pc = 0x2EF414u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942432));
    ctx->pc = 0x2EE928u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x2ee928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF418u; }
    }
    if (ctx->pc != 0x2EF418u) { return; }
    ctx->pc = 0x2EF418u;
    // 0x2ef418: 0x24020001
    ctx->pc = 0x2ef418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef41c: 0x3c03003a
    ctx->pc = 0x2ef41cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2ef420: 0xac623148
    ctx->pc = 0x2ef420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12616), GPR_U32(ctx, 2));
    // 0x2ef424: 0x10000093
    ctx->pc = 0x2EF424u;
    {
        const bool branch_taken_0x2ef424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF428u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ef424) {
            ctx->pc = 0x2EF674u;
            goto label_2ef674;
        }
    }
    ctx->pc = 0x2EF42Cu;
label_2ef42c:
    // 0x2ef42c: 0xc0bbda6
    ctx->pc = 0x2EF42Cu;
    SET_GPR_U32(ctx, 31, 0x2EF434u);
    ctx->pc = 0x2EF430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EF698u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getAllRefs_0x2ef698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF434u; }
    }
    if (ctx->pc != 0x2EF434u) { return; }
    ctx->pc = 0x2EF434u;
    // 0x2ef434: 0x3c031000
    ctx->pc = 0x2ef434u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2ef438: 0x3c18003a
    ctx->pc = 0x2ef438u;
    SET_GPR_U32(ctx, 24, ((uint32_t)58 << 16));
    // 0x2ef43c: 0x3c0f003a
    ctx->pc = 0x2ef43cu;
    SET_GPR_U32(ctx, 15, ((uint32_t)58 << 16));
    // 0x2ef440: 0x3c19003a
    ctx->pc = 0x2ef440u;
    SET_GPR_U32(ctx, 25, ((uint32_t)58 << 16));
    // 0x2ef444: 0x3463d400
    ctx->pc = 0x2ef444u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 54272));
label_2ef448:
    // 0x2ef448: 0x8c620000
    ctx->pc = 0x2ef448u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2ef44c: 0x21202
    ctx->pc = 0x2ef44cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ef450: 0x30420001
    ctx->pc = 0x2ef450u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2ef454: 0x0
    ctx->pc = 0x2ef454u;
    // NOP
    // 0x2ef458: 0x0
    ctx->pc = 0x2ef458u;
    // NOP
    // 0x2ef45c: 0x1440fffa
    ctx->pc = 0x2EF45Cu;
    {
        const bool branch_taken_0x2ef45c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ef45c) {
            ctx->pc = 0x2EF448u;
            goto label_2ef448;
        }
    }
    ctx->pc = 0x2EF464u;
    // 0x2ef464: 0x25e63638
    ctx->pc = 0x2ef464u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 15), 13880));
    // 0x2ef468: 0x24070140
    ctx->pc = 0x2ef468u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ef46c: 0x8cc40280
    ctx->pc = 0x2ef46cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x2ef470: 0x3c020fff
    ctx->pc = 0x2ef470u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2ef474: 0x8f03301c
    ctx->pc = 0x2ef474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 12316)));
    // 0x2ef478: 0x3442ffff
    ctx->pc = 0x2ef478u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ef47c: 0x872818
    ctx->pc = 0x2ef47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef480: 0x582d
    ctx->pc = 0x2ef480u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef484: 0x621824
    ctx->pc = 0x2ef484u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ef488: 0xa62021
    ctx->pc = 0x2ef488u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ef48c: 0x3c052000
    ctx->pc = 0x2ef48cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)8192 << 16));
    // 0x2ef490: 0x8c8d012c
    ctx->pc = 0x2ef490u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x2ef494: 0x19a00022
    ctx->pc = 0x2EF494u;
    {
        const bool branch_taken_0x2ef494 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x2EF498u;
        SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x2ef494) {
            ctx->pc = 0x2EF520u;
            goto label_2ef520;
        }
    }
    ctx->pc = 0x2EF49Cu;
    // 0x2ef49c: 0x25aeffff
    ctx->pc = 0x2ef49cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 13), 4294967295));
label_2ef4a0:
    // 0x2ef4a0: 0x25e63638
    ctx->pc = 0x2ef4a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 15), 13880));
    // 0x2ef4a4: 0x24040140
    ctx->pc = 0x2ef4a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ef4a8: 0x8cc20280
    ctx->pc = 0x2ef4a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x2ef4ac: 0xb1880
    ctx->pc = 0x2ef4acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 11), 2));
    // 0x2ef4b0: 0x3c070fff
    ctx->pc = 0x2ef4b0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4095 << 16));
    // 0x2ef4b4: 0x16e4026
    ctx->pc = 0x2ef4b4u;
    SET_GPR_U32(ctx, 8, XOR32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x2ef4b8: 0x441018
    ctx->pc = 0x2ef4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef4bc: 0x34e7ffff
    ctx->pc = 0x2ef4bcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2ef4c0: 0x24050003
    ctx->pc = 0x2ef4c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ef4c4: 0x3c0a3000
    ctx->pc = 0x2ef4c4u;
    SET_GPR_U32(ctx, 10, ((uint32_t)12288 << 16));
    // 0x2ef4c8: 0x354a0030
    ctx->pc = 0x2ef4c8u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 48));
    // 0x2ef4cc: 0x8280a
    ctx->pc = 0x2ef4ccu;
    if (GPR_U32(ctx, 8) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x2ef4d0: 0x24090030
    ctx->pc = 0x2ef4d0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ef4d4: 0x52f38
    ctx->pc = 0x2ef4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x2ef4d8: 0x256b0001
    ctx->pc = 0x2ef4d8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x2ef4dc: 0x621821
    ctx->pc = 0x2ef4dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ef4e0: 0x16d402a
    ctx->pc = 0x2ef4e0u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 13)));
    // 0x2ef4e4: 0xc32021
    ctx->pc = 0x2ef4e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ef4e8: 0x80302d
    ctx->pc = 0x2ef4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef4ec: 0x8c820018
    ctx->pc = 0x2ef4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ef4f0: 0x8cc30008
    ctx->pc = 0x2ef4f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ef4f4: 0x471024
    ctx->pc = 0x2ef4f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ef4f8: 0x671824
    ctx->pc = 0x2ef4f8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ef4fc: 0x2103c
    ctx->pc = 0x2ef4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef500: 0x451025
    ctx->pc = 0x2ef500u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ef504: 0x3183c
    ctx->pc = 0x2ef504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ef508: 0x6a1825
    ctx->pc = 0x2ef508u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2ef50c: 0x491025
    ctx->pc = 0x2ef50cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ef510: 0xfd830000
    ctx->pc = 0x2ef510u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x2ef514: 0xfd820010
    ctx->pc = 0x2ef514u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x2ef518: 0x1500ffe1
    ctx->pc = 0x2EF518u;
    {
        const bool branch_taken_0x2ef518 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EF51Cu;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 32));
        if (branch_taken_0x2ef518) {
            ctx->pc = 0x2EF4A0u;
            goto label_2ef4a0;
        }
    }
    ctx->pc = 0x2EF520u;
label_2ef520:
    // 0x2ef520: 0xf
    ctx->pc = 0x2ef520u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2ef524: 0x25e93638
    ctx->pc = 0x2ef524u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 15), 13880));
    // 0x2ef528: 0x24020140
    ctx->pc = 0x2ef528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ef52c: 0x8d240280
    ctx->pc = 0x2ef52cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 640)));
    // 0x2ef530: 0x3c071000
    ctx->pc = 0x2ef530u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x2ef534: 0x34e7d480
    ctx->pc = 0x2ef534u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 54400));
    // 0x2ef538: 0x3c081000
    ctx->pc = 0x2ef538u;
    SET_GPR_U32(ctx, 8, ((uint32_t)4096 << 16));
    // 0x2ef53c: 0x822018
    ctx->pc = 0x2ef53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef540: 0x3508d430
    ctx->pc = 0x2ef540u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 54320));
    // 0x2ef544: 0x3c051000
    ctx->pc = 0x2ef544u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2ef548: 0x3c061000
    ctx->pc = 0x2ef548u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x2ef54c: 0x34a5d420
    ctx->pc = 0x2ef54cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 54304));
    // 0x2ef550: 0x34c6d400
    ctx->pc = 0x2ef550u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 54272));
    // 0x2ef554: 0x240a0105
    ctx->pc = 0x2ef554u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 261));
    // 0x2ef558: 0x240b0001
    ctx->pc = 0x2ef558u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef55c: 0x891821
    ctx->pc = 0x2ef55cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2ef560: 0x8c620000
    ctx->pc = 0x2ef560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ef564: 0x1244821
    ctx->pc = 0x2ef564u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2ef568: 0xace20000
    ctx->pc = 0x2ef568u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2ef56c: 0x8f03301c
    ctx->pc = 0x2ef56cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 12316)));
    // 0x2ef570: 0xad030000
    ctx->pc = 0x2ef570u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2ef574: 0xaca00000
    ctx->pc = 0x2ef574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ef578: 0xacca0000
    ctx->pc = 0x2ef578u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x2ef57c: 0xad2b0138
    ctx->pc = 0x2ef57cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 312), GPR_U32(ctx, 11));
label_2ef580:
    // 0x2ef580: 0x24020001
    ctx->pc = 0x2ef580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef584: 0x1662000a
    ctx->pc = 0x2EF584u;
    {
        const bool branch_taken_0x2ef584 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2EF588u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 15), 13880));
        if (branch_taken_0x2ef584) {
            ctx->pc = 0x2EF5B0u;
            goto label_2ef5b0;
        }
    }
    ctx->pc = 0x2EF58Cu;
    // 0x2ef58c: 0x32020002
    ctx->pc = 0x2ef58cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2));
    // 0x2ef590: 0x10400007
    ctx->pc = 0x2EF590u;
    {
        const bool branch_taken_0x2ef590 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF594u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 15), 13880));
        if (branch_taken_0x2ef590) {
            ctx->pc = 0x2EF5B0u;
            goto label_2ef5b0;
        }
    }
    ctx->pc = 0x2EF598u;
    // 0x2ef598: 0x24040140
    ctx->pc = 0x2ef598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ef59c: 0x8c430280
    ctx->pc = 0x2ef59cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x2ef5a0: 0x642818
    ctx->pc = 0x2ef5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef5a4: 0xa21821
    ctx->pc = 0x2ef5a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ef5a8: 0x10000006
    ctx->pc = 0x2EF5A8u;
    {
        const bool branch_taken_0x2ef5a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF5ACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 19));
        if (branch_taken_0x2ef5a8) {
            ctx->pc = 0x2EF5C4u;
            goto label_2ef5c4;
        }
    }
    ctx->pc = 0x2EF5B0u;
label_2ef5b0:
    // 0x2ef5b0: 0x24040140
    ctx->pc = 0x2ef5b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ef5b4: 0x8c430280
    ctx->pc = 0x2ef5b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x2ef5b8: 0x642818
    ctx->pc = 0x2ef5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef5bc: 0xa21821
    ctx->pc = 0x2ef5bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ef5c0: 0xac600134
    ctx->pc = 0x2ef5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
label_2ef5c4:
    // 0x2ef5c4: 0x25e73638
    ctx->pc = 0x2ef5c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 15), 13880));
    // 0x2ef5c8: 0x24080140
    ctx->pc = 0x2ef5c8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ef5cc: 0x8ce20280
    ctx->pc = 0x2ef5ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x2ef5d0: 0x24030003
    ctx->pc = 0x2ef5d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ef5d4: 0x8f2431ec
    ctx->pc = 0x2ef5d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 25), 12780)));
    // 0x2ef5d8: 0x482818
    ctx->pc = 0x2ef5d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef5dc: 0xa71021
    ctx->pc = 0x2ef5dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2ef5e0: 0x1483000f
    ctx->pc = 0x2EF5E0u;
    {
        const bool branch_taken_0x2ef5e0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x2EF5E4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 20));
        if (branch_taken_0x2ef5e0) {
            ctx->pc = 0x2EF620u;
            goto label_2ef620;
        }
    }
    ctx->pc = 0x2EF5E8u;
    // 0x2ef5e8: 0x3c02003a
    ctx->pc = 0x2ef5e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ef5ec: 0x8ce40280
    ctx->pc = 0x2ef5ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x2ef5f0: 0x8c453284
    ctx->pc = 0x2ef5f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12932)));
    // 0x2ef5f4: 0x24060180
    ctx->pc = 0x2ef5f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 384));
    // 0x2ef5f8: 0x881018
    ctx->pc = 0x2ef5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef5fc: 0x8ca30000
    ctx->pc = 0x2ef5fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ef600: 0x472021
    ctx->pc = 0x2ef600u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ef604: 0x8ca20010
    ctx->pc = 0x2ef604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ef608: 0x2222818
    ctx->pc = 0x2ef608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef60c: 0xb21021
    ctx->pc = 0x2ef60cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2ef610: 0x461018
    ctx->pc = 0x2ef610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef614: 0x621821
    ctx->pc = 0x2ef614u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ef618: 0x10000015
    ctx->pc = 0x2EF618u;
    {
        const bool branch_taken_0x2ef618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF61Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 3));
        if (branch_taken_0x2ef618) {
            ctx->pc = 0x2EF670u;
            goto label_2ef670;
        }
    }
    ctx->pc = 0x2EF620u;
label_2ef620:
    // 0x2ef620: 0x24020002
    ctx->pc = 0x2ef620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef624: 0x54820004
    ctx->pc = 0x2EF624u;
    {
        const bool branch_taken_0x2ef624 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x2ef624) {
            ctx->pc = 0x2EF628u;
            SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
            ctx->pc = 0x2EF638u;
            goto label_2ef638;
        }
    }
    ctx->pc = 0x2EF62Cu;
    // 0x2ef62c: 0x3c02003a
    ctx->pc = 0x2ef62cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ef630: 0x10000002
    ctx->pc = 0x2EF630u;
    {
        const bool branch_taken_0x2ef630 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF634u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12940)));
        if (branch_taken_0x2ef630) {
            ctx->pc = 0x2EF63Cu;
            goto label_2ef63c;
        }
    }
    ctx->pc = 0x2EF638u;
label_2ef638:
    // 0x2ef638: 0x8c423288
    ctx->pc = 0x2ef638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12936)));
label_2ef63c:
    // 0x2ef63c: 0x8c440010
    ctx->pc = 0x2ef63cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ef640: 0x25e63638
    ctx->pc = 0x2ef640u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 15), 13880));
    // 0x2ef644: 0x8cc50280
    ctx->pc = 0x2ef644u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x2ef648: 0x24070180
    ctx->pc = 0x2ef648u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 384));
    // 0x2ef64c: 0x2241818
    ctx->pc = 0x2ef64cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef650: 0x8c420000
    ctx->pc = 0x2ef650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef654: 0x722021
    ctx->pc = 0x2ef654u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2ef658: 0x24030140
    ctx->pc = 0x2ef658u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ef65c: 0x872018
    ctx->pc = 0x2ef65cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef660: 0xa34018
    ctx->pc = 0x2ef660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ef664: 0x441021
    ctx->pc = 0x2ef664u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ef668: 0x1062821
    ctx->pc = 0x2ef668u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2ef66c: 0xaca20128
    ctx->pc = 0x2ef66cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 2));
label_2ef670:
    // 0x2ef670: 0x24020001
    ctx->pc = 0x2ef670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2ef674:
    // 0x2ef674: 0xdfbf0050
    ctx->pc = 0x2ef674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef678: 0xdfb40040
    ctx->pc = 0x2ef678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef67c: 0xdfb30030
    ctx->pc = 0x2ef67cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef680: 0xdfb20020
    ctx->pc = 0x2ef680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef684: 0xdfb10010
    ctx->pc = 0x2ef684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef688: 0xdfb00000
    ctx->pc = 0x2ef688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef68c: 0x3e00008
    ctx->pc = 0x2EF68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF690u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EF398u: goto label_2ef398;
            case 0x2EF3C0u: goto label_2ef3c0;
            case 0x2EF3F8u: goto label_2ef3f8;
            case 0x2EF42Cu: goto label_2ef42c;
            case 0x2EF448u: goto label_2ef448;
            case 0x2EF4A0u: goto label_2ef4a0;
            case 0x2EF520u: goto label_2ef520;
            case 0x2EF580u: goto label_2ef580;
            case 0x2EF5B0u: goto label_2ef5b0;
            case 0x2EF5C4u: goto label_2ef5c4;
            case 0x2EF620u: goto label_2ef620;
            case 0x2EF638u: goto label_2ef638;
            case 0x2EF63Cu: goto label_2ef63c;
            case 0x2EF670u: goto label_2ef670;
            case 0x2EF674u: goto label_2ef674;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EF694u;
}
