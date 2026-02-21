#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTrack4
// Address: 0x222560 - 0x2227c8
void AudioTrack4_0x222560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222560u;

    // 0x222560: 0x27bdff50
    ctx->pc = 0x222560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x222564: 0xffbf00a0
    ctx->pc = 0x222564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x222568: 0xffbe0090
    ctx->pc = 0x222568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x22256c: 0xffb70080
    ctx->pc = 0x22256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x222570: 0xffb60070
    ctx->pc = 0x222570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x222574: 0xffb50060
    ctx->pc = 0x222574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x222578: 0xffb40050
    ctx->pc = 0x222578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22257c: 0xffb30040
    ctx->pc = 0x22257cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x222580: 0xffb20030
    ctx->pc = 0x222580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x222584: 0xffb10020
    ctx->pc = 0x222584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x222588: 0xffb00010
    ctx->pc = 0x222588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22258c: 0xa0a02d
    ctx->pc = 0x22258cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222590: 0xc0882d
    ctx->pc = 0x222590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222594: 0xe0b02d
    ctx->pc = 0x222594u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222598: 0x100902d
    ctx->pc = 0x222598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22259c: 0x120a82d
    ctx->pc = 0x22259cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225a0: 0x3c020032
    ctx->pc = 0x2225a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2225a4: 0x8c57fe30
    ctx->pc = 0x2225a4u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294966832)));
    // 0x2225a8: 0x3c020032
    ctx->pc = 0x2225a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2225ac: 0x8c42fe2c
    ctx->pc = 0x2225acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966828)));
    // 0x2225b0: 0x1440006b
    ctx->pc = 0x2225B0u;
    {
        const bool branch_taken_0x2225b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2225B4u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2225b0) {
            ctx->pc = 0x222760u;
            goto label_222760;
        }
    }
    ctx->pc = 0x2225B8u;
    // 0x2225b8: 0x3c020032
    ctx->pc = 0x2225b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2225bc: 0x8c42fd8c
    ctx->pc = 0x2225bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966668)));
    // 0x2225c0: 0x4400067
    ctx->pc = 0x2225C0u;
    {
        const bool branch_taken_0x2225c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2225C4u;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 20), 16));
        if (branch_taken_0x2225c0) {
            ctx->pc = 0x222760u;
            goto label_222760;
        }
    }
    ctx->pc = 0x2225C8u;
    // 0x2225c8: 0x3c020032
    ctx->pc = 0x2225c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2225cc: 0x8c42fd6c
    ctx->pc = 0x2225ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x2225d0: 0x8c430010
    ctx->pc = 0x2225d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2225d4: 0x2402002c
    ctx->pc = 0x2225d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x2225d8: 0xa21018
    ctx->pc = 0x2225d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2225dc: 0x431021
    ctx->pc = 0x2225dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2225e0: 0x9443002a
    ctx->pc = 0x2225e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x2225e4: 0x50600006
    ctx->pc = 0x2225E4u;
    {
        const bool branch_taken_0x2225e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2225e4) {
            ctx->pc = 0x2225E8u;
            SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
            ctx->pc = 0x222600u;
            goto label_222600;
        }
    }
    ctx->pc = 0x2225ECu;
    // 0x2225ec: 0x3402ffff
    ctx->pc = 0x2225ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x2225f0: 0x1462001a
    ctx->pc = 0x2225F0u;
    {
        const bool branch_taken_0x2225f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2225F4u;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 20), 4095));
        if (branch_taken_0x2225f0) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x2225F8u;
    // 0x2225f8: 0x10000067
    ctx->pc = 0x2225F8u;
    {
        const bool branch_taken_0x2225f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2225FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2225f8) {
            ctx->pc = 0x222798u;
            goto label_222798;
        }
    }
    ctx->pc = 0x222600u;
label_222600:
    // 0x222600: 0x8e23fd6c
    ctx->pc = 0x222600u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294966636)));
    // 0x222604: 0x2410002c
    ctx->pc = 0x222604u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 44));
    // 0x222608: 0xb08018
    ctx->pc = 0x222608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22260c: 0x8c650010
    ctx->pc = 0x22260cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x222610: 0x2052821
    ctx->pc = 0x222610u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x222614: 0x84a60026
    ctx->pc = 0x222614u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x222618: 0x32820fff
    ctx->pc = 0x222618u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 4095));
    // 0x22261c: 0xc23021
    ctx->pc = 0x22261cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x222620: 0x2402001c
    ctx->pc = 0x222620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x222624: 0xc23018
    ctx->pc = 0x222624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222628: 0x8c620014
    ctx->pc = 0x222628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x22262c: 0x3c04003a
    ctx->pc = 0x22262cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x222630: 0x24846910
    ctx->pc = 0x222630u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26896));
    // 0x222634: 0x24a50010
    ctx->pc = 0x222634u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x222638: 0xc0b492e
    ctx->pc = 0x222638u;
    SET_GPR_U32(ctx, 31, 0x222640u);
    ctx->pc = 0x22263Cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222640u; }
    }
    if (ctx->pc != 0x222640u) { return; }
    ctx->pc = 0x222640u;
    // 0x222640: 0x8e22fd6c
    ctx->pc = 0x222640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966636)));
    // 0x222644: 0x8c420010
    ctx->pc = 0x222644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x222648: 0x2028021
    ctx->pc = 0x222648u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22264c: 0x3402ffff
    ctx->pc = 0x22264cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x222650: 0xa602002a
    ctx->pc = 0x222650u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x222654: 0x10000050
    ctx->pc = 0x222654u;
    {
        const bool branch_taken_0x222654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222658u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222654) {
            ctx->pc = 0x222798u;
            goto label_222798;
        }
    }
    ctx->pc = 0x22265Cu;
label_22265c:
    // 0x22265c: 0x4800004
    ctx->pc = 0x22265Cu;
    {
        const bool branch_taken_0x22265c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x222660u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        if (branch_taken_0x22265c) {
            ctx->pc = 0x222670u;
            goto label_222670;
        }
    }
    ctx->pc = 0x222664u;
    // 0x222664: 0x30841fff
    ctx->pc = 0x222664u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 8191));
    // 0x222668: 0x10000002
    ctx->pc = 0x222668u;
    {
        const bool branch_taken_0x222668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22266Cu;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32768));
        if (branch_taken_0x222668) {
            ctx->pc = 0x222674u;
            goto label_222674;
        }
    }
    ctx->pc = 0x222670u;
label_222670:
    // 0x222670: 0x2a0202d
    ctx->pc = 0x222670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_222674:
    // 0x222674: 0x3c030032
    ctx->pc = 0x222674u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x222678: 0x24020001
    ctx->pc = 0x222678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22267c: 0xac62fe30
    ctx->pc = 0x22267cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966832), GPR_U32(ctx, 2));
    // 0x222680: 0x3c020032
    ctx->pc = 0x222680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222684: 0x8c42fd64
    ctx->pc = 0x222684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966628)));
    // 0x222688: 0x2228818
    ctx->pc = 0x222688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22268c: 0x118a03
    ctx->pc = 0x22268cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 8));
    // 0x222690: 0x3c020032
    ctx->pc = 0x222690u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222694: 0x8c43fd94
    ctx->pc = 0x222694u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966676)));
    // 0x222698: 0x2402007f
    ctx->pc = 0x222698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x22269c: 0x43900b
    ctx->pc = 0x22269cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
    // 0x2226a0: 0xafb30000
    ctx->pc = 0x2226a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x2226a4: 0x111400
    ctx->pc = 0x2226a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 16));
    // 0x2226a8: 0x3243ffff
    ctx->pc = 0x2226a8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 65535));
    // 0x2226ac: 0x431025
    ctx->pc = 0x2226acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2226b0: 0xafa20004
    ctx->pc = 0x2226b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2226b4: 0xc088912
    ctx->pc = 0x2226B4u;
    SET_GPR_U32(ctx, 31, 0x2226BCu);
    ctx->pc = 0x2226B8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x222448u;
    {
        const uint32_t __entryPc = ctx->pc;
        EmptyTempTrack_0x222448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226BCu; }
    }
    if (ctx->pc != 0x2226BCu) { return; }
    ctx->pc = 0x2226BCu;
    // 0x2226bc: 0x40802d
    ctx->pc = 0x2226bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226c0: 0x6000022
    ctx->pc = 0x2226C0u;
    {
        const bool branch_taken_0x2226c0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2226C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2226c0) {
            ctx->pc = 0x22274Cu;
            goto label_22274c;
        }
    }
    ctx->pc = 0x2226C8u;
    // 0x2226c8: 0x280282d
    ctx->pc = 0x2226c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226cc: 0x220302d
    ctx->pc = 0x2226ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226d0: 0x2c0382d
    ctx->pc = 0x2226d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226d4: 0x240402d
    ctx->pc = 0x2226d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226d8: 0xc088924
    ctx->pc = 0x2226D8u;
    SET_GPR_U32(ctx, 31, 0x2226E0u);
    ctx->pc = 0x2226DCu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222490u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTempTrackSet_0x222490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2226E0u; }
    }
    if (ctx->pc != 0x2226E0u) { return; }
    ctx->pc = 0x2226E0u;
    // 0x2226e0: 0x3c020032
    ctx->pc = 0x2226e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2226e4: 0x2446ff28
    ctx->pc = 0x2226e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967080));
    // 0x2226e8: 0x24020038
    ctx->pc = 0x2226e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
    // 0x2226ec: 0x2021818
    ctx->pc = 0x2226ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2226f0: 0x661021
    ctx->pc = 0x2226f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2226f4: 0x8c5e0014
    ctx->pc = 0x2226f4u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2226f8: 0x3c020032
    ctx->pc = 0x2226f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2226fc: 0x8c42fd58
    ctx->pc = 0x2226fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x222700: 0x14400012
    ctx->pc = 0x222700u;
    {
        const bool branch_taken_0x222700 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222704u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24));
        if (branch_taken_0x222700) {
            ctx->pc = 0x22274Cu;
            goto label_22274c;
        }
    }
    ctx->pc = 0x222708u;
    // 0x222708: 0x3a0202d
    ctx->pc = 0x222708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22270c: 0x24050003
    ctx->pc = 0x22270cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x222710: 0xc088f56
    ctx->pc = 0x222710u;
    SET_GPR_U32(ctx, 31, 0x222718u);
    ctx->pc = 0x222714u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x223D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_mput_cb_0x223d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222718u; }
    }
    if (ctx->pc != 0x222718u) { return; }
    ctx->pc = 0x222718u;
    // 0x222718: 0x1c40000a
    ctx->pc = 0x222718u;
    {
        const bool branch_taken_0x222718 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x22271Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222718) {
            ctx->pc = 0x222744u;
            goto label_222744;
        }
    }
    ctx->pc = 0x222720u;
    // 0x222720: 0x3c020032
    ctx->pc = 0x222720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222724: 0x8c43fd7c
    ctx->pc = 0x222724u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966652)));
    // 0x222728: 0x34630002
    ctx->pc = 0x222728u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x22272c: 0xac43fd7c
    ctx->pc = 0x22272cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966652), GPR_U32(ctx, 3));
    // 0x222730: 0x3c04003a
    ctx->pc = 0x222730u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x222734: 0x24846938
    ctx->pc = 0x222734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26936));
    // 0x222738: 0xc0b49a6
    ctx->pc = 0x222738u;
    SET_GPR_U32(ctx, 31, 0x222740u);
    ctx->pc = 0x22273Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222740u; }
    }
    if (ctx->pc != 0x222740u) { return; }
    ctx->pc = 0x222740u;
    // 0x222740: 0x280202d
    ctx->pc = 0x222740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_222744:
    // 0x222744: 0xc08809e
    ctx->pc = 0x222744u;
    SET_GPR_U32(ctx, 31, 0x22274Cu);
    ctx->pc = 0x222748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x220278u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_history_0x220278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22274Cu; }
    }
    if (ctx->pc != 0x22274Cu) { return; }
    ctx->pc = 0x22274Cu;
label_22274c:
    // 0x22274c: 0x16e00012
    ctx->pc = 0x22274Cu;
    {
        const bool branch_taken_0x22274c = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x222750u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 65535));
        if (branch_taken_0x22274c) {
            ctx->pc = 0x222798u;
            goto label_222798;
        }
    }
    ctx->pc = 0x222754u;
    // 0x222754: 0x3c020032
    ctx->pc = 0x222754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222758: 0x1000000e
    ctx->pc = 0x222758u;
    {
        const bool branch_taken_0x222758 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22275Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966832), GPR_U32(ctx, 0));
        if (branch_taken_0x222758) {
            ctx->pc = 0x222794u;
            goto label_222794;
        }
    }
    ctx->pc = 0x222760u;
label_222760:
    // 0x222760: 0x481000d
    ctx->pc = 0x222760u;
    {
        const bool branch_taken_0x222760 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x222764u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 65535));
        if (branch_taken_0x222760) {
            ctx->pc = 0x222798u;
            goto label_222798;
        }
    }
    ctx->pc = 0x222768u;
    // 0x222768: 0x16c0000c
    ctx->pc = 0x222768u;
    {
        const bool branch_taken_0x222768 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x22276Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x222768) {
            ctx->pc = 0x22279Cu;
            goto label_22279c;
        }
    }
    ctx->pc = 0x222770u;
    // 0x222770: 0x280202d
    ctx->pc = 0x222770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222774: 0x220282d
    ctx->pc = 0x222774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222778: 0x240302d
    ctx->pc = 0x222778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22277c: 0x3c01bf80
    ctx->pc = 0x22277cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x222780: 0x44816000
    ctx->pc = 0x222780u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x222784: 0x3c014000
    ctx->pc = 0x222784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x222788: 0x44816800
    ctx->pc = 0x222788u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x22278c: 0xc088c86
    ctx->pc = 0x22278Cu;
    SET_GPR_U32(ctx, 31, 0x222794u);
    ctx->pc = 0x222790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x223218u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueAdd4_0x223218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222794u; }
    }
    if (ctx->pc != 0x222794u) { return; }
    ctx->pc = 0x222794u;
label_222794:
    // 0x222794: 0x33c2ffff
    ctx->pc = 0x222794u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 65535));
label_222798:
    // 0x222798: 0xdfbf00a0
    ctx->pc = 0x222798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_22279c:
    // 0x22279c: 0xdfbe0090
    ctx->pc = 0x22279cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2227a0: 0xdfb70080
    ctx->pc = 0x2227a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2227a4: 0xdfb60070
    ctx->pc = 0x2227a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2227a8: 0xdfb50060
    ctx->pc = 0x2227a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2227ac: 0xdfb40050
    ctx->pc = 0x2227acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2227b0: 0xdfb30040
    ctx->pc = 0x2227b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2227b4: 0xdfb20030
    ctx->pc = 0x2227b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2227b8: 0xdfb10020
    ctx->pc = 0x2227b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2227bc: 0xdfb00010
    ctx->pc = 0x2227bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2227c0: 0x3e00008
    ctx->pc = 0x2227C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2227C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222600u: goto label_222600;
            case 0x22265Cu: goto label_22265c;
            case 0x222670u: goto label_222670;
            case 0x222674u: goto label_222674;
            case 0x222744u: goto label_222744;
            case 0x22274Cu: goto label_22274c;
            case 0x222760u: goto label_222760;
            case 0x222794u: goto label_222794;
            case 0x222798u: goto label_222798;
            case 0x22279Cu: goto label_22279c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2227C8u;
}
