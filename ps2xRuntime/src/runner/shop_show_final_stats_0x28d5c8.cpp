#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: shop_show_final_stats
// Address: 0x28d5c8 - 0x28db58
void shop_show_final_stats_0x28d5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28d5c8u;

    // 0x28d5c8: 0x27bdff20
    ctx->pc = 0x28d5c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x28d5cc: 0xffbf00c0
    ctx->pc = 0x28d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x28d5d0: 0xffbe00b0
    ctx->pc = 0x28d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x28d5d4: 0xffb700a0
    ctx->pc = 0x28d5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x28d5d8: 0xffb60090
    ctx->pc = 0x28d5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x28d5dc: 0xffb50080
    ctx->pc = 0x28d5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x28d5e0: 0xffb40070
    ctx->pc = 0x28d5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x28d5e4: 0xffb30060
    ctx->pc = 0x28d5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x28d5e8: 0xffb20050
    ctx->pc = 0x28d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x28d5ec: 0xffb10040
    ctx->pc = 0x28d5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x28d5f0: 0xffb00030
    ctx->pc = 0x28d5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x28d5f4: 0xe7b400d0
    ctx->pc = 0x28d5f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x28d5f8: 0x80b02d
    ctx->pc = 0x28d5f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d5fc: 0x3c020035
    ctx->pc = 0x28d5fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28d600: 0x2442b3e0
    ctx->pc = 0x28d600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947808));
    // 0x28d604: 0x8ec30000
    ctx->pc = 0x28d604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x28d608: 0x31880
    ctx->pc = 0x28d608u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x28d60c: 0x621021
    ctx->pc = 0x28d60cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d610: 0x8c420000
    ctx->pc = 0x28d610u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28d614: 0x24420008
    ctx->pc = 0x28d614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x28d618: 0xafa20020
    ctx->pc = 0x28d618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x28d61c: 0x3c020035
    ctx->pc = 0x28d61cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28d620: 0x2442b3f0
    ctx->pc = 0x28d620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947824));
    // 0x28d624: 0x621821
    ctx->pc = 0x28d624u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d628: 0x8c740000
    ctx->pc = 0x28d628u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d62c: 0x24110020
    ctx->pc = 0x28d62cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 32));
    // 0x28d630: 0x241e0012
    ctx->pc = 0x28d630u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 18));
    // 0x28d634: 0x2413005a
    ctx->pc = 0x28d634u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 90));
    // 0x28d638: 0xafa00024
    ctx->pc = 0x28d638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x28d63c: 0x3c013ef5
    ctx->pc = 0x28d63cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16117 << 16));
    // 0x28d640: 0x3421c28f
    ctx->pc = 0x28d640u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49807));
    // 0x28d644: 0x4481a000
    ctx->pc = 0x28d644u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x28d648: 0x8ec40988
    ctx->pc = 0x28d648u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 2440)));
    // 0x28d64c: 0x3092ffff
    ctx->pc = 0x28d64cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 4), 65535));
    // 0x28d650: 0x8ec2000c
    ctx->pc = 0x28d650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x28d654: 0x2403001c
    ctx->pc = 0x28d654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x28d658: 0x431018
    ctx->pc = 0x28d658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28d65c: 0x24420b2c
    ctx->pc = 0x28d65cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2860));
    // 0x28d660: 0x2c2a821
    ctx->pc = 0x28d660u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x28d664: 0x3402efff
    ctx->pc = 0x28d664u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 61439));
    // 0x28d668: 0x52102a
    ctx->pc = 0x28d668u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
    // 0x28d66c: 0x14400005
    ctx->pc = 0x28D66Cu;
    {
        const bool branch_taken_0x28d66c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28D670u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28d66c) {
            ctx->pc = 0x28D684u;
            goto label_28d684;
        }
    }
    ctx->pc = 0x28D674u;
    // 0x28d674: 0x3c020031
    ctx->pc = 0x28d674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28d678: 0x8c42ffbc
    ctx->pc = 0x28d678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x28d67c: 0x821021
    ctx->pc = 0x28d67cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28d680: 0xaec20988
    ctx->pc = 0x28d680u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2440), GPR_U32(ctx, 2));
label_28d684:
    // 0x28d684: 0x148023
    ctx->pc = 0x28d684u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28d688: 0x200202d
    ctx->pc = 0x28d688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d68c: 0x220282d
    ctx->pc = 0x28d68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d690: 0x3c013f0f
    ctx->pc = 0x28d690u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16143 << 16));
    // 0x28d694: 0x34215c29
    ctx->pc = 0x28d694u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 23593));
    // 0x28d698: 0x44816000
    ctx->pc = 0x28d698u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28d69c: 0x3c06003b
    ctx->pc = 0x28d69cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d6a0: 0xc080a9a
    ctx->pc = 0x28D6A0u;
    SET_GPR_U32(ctx, 31, 0x28D6A8u);
    ctx->pc = 0x28D6A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957984));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D6A8u; }
    }
    if (ctx->pc != 0x28D6A8u) { return; }
    ctx->pc = 0x28D6A8u;
    // 0x28d6a8: 0x12e0000e
    ctx->pc = 0x28D6A8u;
    {
        const bool branch_taken_0x28d6a8 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D6ACu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 28));
        if (branch_taken_0x28d6a8) {
            ctx->pc = 0x28D6E4u;
            goto label_28d6e4;
        }
    }
    ctx->pc = 0x28D6B0u;
    // 0x28d6b0: 0x272102a
    ctx->pc = 0x28d6b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
    // 0x28d6b4: 0x1040000b
    ctx->pc = 0x28D6B4u;
    {
        const bool branch_taken_0x28d6b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D6B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 60));
        if (branch_taken_0x28d6b4) {
            ctx->pc = 0x28D6E4u;
            goto label_28d6e4;
        }
    }
    ctx->pc = 0x28D6BCu;
    // 0x28d6bc: 0x242102a
    ctx->pc = 0x28d6bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x28d6c0: 0x10400008
    ctx->pc = 0x28D6C0u;
    {
        const bool branch_taken_0x28d6c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D6C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d6c0) {
            ctx->pc = 0x28D6E4u;
            goto label_28d6e4;
        }
    }
    ctx->pc = 0x28D6C8u;
    // 0x28d6c8: 0x220282d
    ctx->pc = 0x28d6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d6cc: 0x4600a306
    ctx->pc = 0x28d6ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d6d0: 0x3c06003b
    ctx->pc = 0x28d6d0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d6d4: 0xc080a9a
    ctx->pc = 0x28D6D4u;
    SET_GPR_U32(ctx, 31, 0x28D6DCu);
    ctx->pc = 0x28D6D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294958000));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D6DCu; }
    }
    if (ctx->pc != 0x28D6DCu) { return; }
    ctx->pc = 0x28D6DCu;
    // 0x28d6dc: 0x1000000b
    ctx->pc = 0x28D6DCu;
    {
        const bool branch_taken_0x28d6dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D6E0u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        if (branch_taken_0x28d6dc) {
            ctx->pc = 0x28D70Cu;
            goto label_28d70c;
        }
    }
    ctx->pc = 0x28D6E4u;
label_28d6e4:
    // 0x28d6e4: 0x142023
    ctx->pc = 0x28d6e4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28d6e8: 0x220282d
    ctx->pc = 0x28d6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d6ec: 0x24060006
    ctx->pc = 0x28d6ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d6f0: 0x3c0700ff
    ctx->pc = 0x28d6f0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d6f4: 0x34e7ffff
    ctx->pc = 0x28d6f4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d6f8: 0x4600a306
    ctx->pc = 0x28d6f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d6fc: 0x3c08003b
    ctx->pc = 0x28d6fcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28d700: 0xc080510
    ctx->pc = 0x28D700u;
    SET_GPR_U32(ctx, 31, 0x28D708u);
    ctx->pc = 0x28D704u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294958000));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D708u; }
    }
    if (ctx->pc != 0x28D708u) { return; }
    ctx->pc = 0x28D708u;
    // 0x28d708: 0x23e8821
    ctx->pc = 0x28d708u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_28d70c:
    // 0x28d70c: 0x12e0000c
    ctx->pc = 0x28D70Cu;
    {
        const bool branch_taken_0x28d70c = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D710u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
        if (branch_taken_0x28d70c) {
            ctx->pc = 0x28D740u;
            goto label_28d740;
        }
    }
    ctx->pc = 0x28D714u;
    // 0x28d714: 0x1040000a
    ctx->pc = 0x28D714u;
    {
        const bool branch_taken_0x28d714 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D718u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d714) {
            ctx->pc = 0x28D740u;
            goto label_28d740;
        }
    }
    ctx->pc = 0x28D71Cu;
    // 0x28d71c: 0x3c05003b
    ctx->pc = 0x28d71cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d720: 0x24a5d8d8
    ctx->pc = 0x28d720u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    // 0x28d724: 0xc0b6252
    ctx->pc = 0x28D724u;
    SET_GPR_U32(ctx, 31, 0x28D72Cu);
    ctx->pc = 0x28D728u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D72Cu; }
    }
    if (ctx->pc != 0x28D72Cu) { return; }
    ctx->pc = 0x28D72Cu;
    // 0x28d72c: 0x142023
    ctx->pc = 0x28d72cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28d730: 0x220282d
    ctx->pc = 0x28d730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d734: 0x4600a306
    ctx->pc = 0x28d734u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d738: 0xc080a9a
    ctx->pc = 0x28D738u;
    SET_GPR_U32(ctx, 31, 0x28D740u);
    ctx->pc = 0x28D73Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D740u; }
    }
    if (ctx->pc != 0x28D740u) { return; }
    ctx->pc = 0x28D740u;
label_28d740:
    // 0x28d740: 0x26310002
    ctx->pc = 0x28d740u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
    // 0x28d744: 0x23e8821
    ctx->pc = 0x28d744u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x28d748: 0x2402003c
    ctx->pc = 0x28d748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x28d74c: 0x2e21018
    ctx->pc = 0x28d74cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28d750: 0x12e00016
    ctx->pc = 0x28D750u;
    {
        const bool branch_taken_0x28d750 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D754u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x28d750) {
            ctx->pc = 0x28D7ACu;
            goto label_28d7ac;
        }
    }
    ctx->pc = 0x28D758u;
    // 0x28d758: 0x272102a
    ctx->pc = 0x28d758u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
    // 0x28d75c: 0x10400013
    ctx->pc = 0x28D75Cu;
    {
        const bool branch_taken_0x28d75c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D760u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 60));
        if (branch_taken_0x28d75c) {
            ctx->pc = 0x28D7ACu;
            goto label_28d7ac;
        }
    }
    ctx->pc = 0x28D764u;
    // 0x28d764: 0x242102a
    ctx->pc = 0x28d764u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x28d768: 0x10400010
    ctx->pc = 0x28D768u;
    {
        const bool branch_taken_0x28d768 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D76Cu;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        if (branch_taken_0x28d768) {
            ctx->pc = 0x28D7ACu;
            goto label_28d7ac;
        }
    }
    ctx->pc = 0x28D770u;
    // 0x28d770: 0x200202d
    ctx->pc = 0x28d770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d774: 0x220282d
    ctx->pc = 0x28d774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d778: 0x4600a306
    ctx->pc = 0x28d778u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d77c: 0x3c06003b
    ctx->pc = 0x28d77cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d780: 0xc080a9a
    ctx->pc = 0x28D780u;
    SET_GPR_U32(ctx, 31, 0x28D788u);
    ctx->pc = 0x28D784u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294958016));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D788u; }
    }
    if (ctx->pc != 0x28D788u) { return; }
    ctx->pc = 0x28D788u;
    // 0x28d788: 0x23e8821
    ctx->pc = 0x28d788u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x28d78c: 0x200202d
    ctx->pc = 0x28d78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d790: 0x220282d
    ctx->pc = 0x28d790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d794: 0x4600a306
    ctx->pc = 0x28d794u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d798: 0x3c06003b
    ctx->pc = 0x28d798u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d79c: 0xc080a9a
    ctx->pc = 0x28D79Cu;
    SET_GPR_U32(ctx, 31, 0x28D7A4u);
    ctx->pc = 0x28D7A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294958032));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7A4u; }
    }
    if (ctx->pc != 0x28D7A4u) { return; }
    ctx->pc = 0x28D7A4u;
    // 0x28d7a4: 0x10000016
    ctx->pc = 0x28D7A4u;
    {
        const bool branch_taken_0x28d7a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D7A8u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        if (branch_taken_0x28d7a4) {
            ctx->pc = 0x28D800u;
            goto label_28d800;
        }
    }
    ctx->pc = 0x28D7ACu;
label_28d7ac:
    // 0x28d7ac: 0x148023
    ctx->pc = 0x28d7acu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28d7b0: 0x200202d
    ctx->pc = 0x28d7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7b4: 0x220282d
    ctx->pc = 0x28d7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7b8: 0x24060006
    ctx->pc = 0x28d7b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d7bc: 0x3c0700ff
    ctx->pc = 0x28d7bcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d7c0: 0x34e7ffff
    ctx->pc = 0x28d7c0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d7c4: 0x4600a306
    ctx->pc = 0x28d7c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d7c8: 0x3c08003b
    ctx->pc = 0x28d7c8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28d7cc: 0xc080510
    ctx->pc = 0x28D7CCu;
    SET_GPR_U32(ctx, 31, 0x28D7D4u);
    ctx->pc = 0x28D7D0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294958016));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7D4u; }
    }
    if (ctx->pc != 0x28D7D4u) { return; }
    ctx->pc = 0x28D7D4u;
    // 0x28d7d4: 0x23e8821
    ctx->pc = 0x28d7d4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x28d7d8: 0x200202d
    ctx->pc = 0x28d7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7dc: 0x220282d
    ctx->pc = 0x28d7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7e0: 0x24060006
    ctx->pc = 0x28d7e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d7e4: 0x3c0700ff
    ctx->pc = 0x28d7e4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d7e8: 0x34e7ffff
    ctx->pc = 0x28d7e8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d7ec: 0x4600a306
    ctx->pc = 0x28d7ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d7f0: 0x3c08003b
    ctx->pc = 0x28d7f0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28d7f4: 0xc080510
    ctx->pc = 0x28D7F4u;
    SET_GPR_U32(ctx, 31, 0x28D7FCu);
    ctx->pc = 0x28D7F8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294958032));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7FCu; }
    }
    if (ctx->pc != 0x28D7FCu) { return; }
    ctx->pc = 0x28D7FCu;
    // 0x28d7fc: 0x23e8821
    ctx->pc = 0x28d7fcu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_28d800:
    // 0x28d800: 0x12e0000c
    ctx->pc = 0x28D800u;
    {
        const bool branch_taken_0x28d800 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D804u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
        if (branch_taken_0x28d800) {
            ctx->pc = 0x28D834u;
            goto label_28d834;
        }
    }
    ctx->pc = 0x28D808u;
    // 0x28d808: 0x1040000a
    ctx->pc = 0x28D808u;
    {
        const bool branch_taken_0x28d808 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D80Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d808) {
            ctx->pc = 0x28D834u;
            goto label_28d834;
        }
    }
    ctx->pc = 0x28D810u;
    // 0x28d810: 0x3c05003b
    ctx->pc = 0x28d810u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d814: 0x24a5d8d8
    ctx->pc = 0x28d814u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    // 0x28d818: 0xc0b6252
    ctx->pc = 0x28D818u;
    SET_GPR_U32(ctx, 31, 0x28D820u);
    ctx->pc = 0x28D81Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 16)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D820u; }
    }
    if (ctx->pc != 0x28D820u) { return; }
    ctx->pc = 0x28D820u;
    // 0x28d820: 0x142023
    ctx->pc = 0x28d820u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28d824: 0x220282d
    ctx->pc = 0x28d824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d828: 0x4600a306
    ctx->pc = 0x28d828u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d82c: 0xc080a9a
    ctx->pc = 0x28D82Cu;
    SET_GPR_U32(ctx, 31, 0x28D834u);
    ctx->pc = 0x28D830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D834u; }
    }
    if (ctx->pc != 0x28D834u) { return; }
    ctx->pc = 0x28D834u;
label_28d834:
    // 0x28d834: 0x26310002
    ctx->pc = 0x28d834u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
    // 0x28d838: 0x23e8821
    ctx->pc = 0x28d838u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x28d83c: 0x2402003c
    ctx->pc = 0x28d83cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x28d840: 0x2e21018
    ctx->pc = 0x28d840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28d844: 0x12e0000e
    ctx->pc = 0x28D844u;
    {
        const bool branch_taken_0x28d844 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D848u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x28d844) {
            ctx->pc = 0x28D880u;
            goto label_28d880;
        }
    }
    ctx->pc = 0x28D84Cu;
    // 0x28d84c: 0x272102a
    ctx->pc = 0x28d84cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
    // 0x28d850: 0x1040000b
    ctx->pc = 0x28D850u;
    {
        const bool branch_taken_0x28d850 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D854u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 60));
        if (branch_taken_0x28d850) {
            ctx->pc = 0x28D880u;
            goto label_28d880;
        }
    }
    ctx->pc = 0x28D858u;
    // 0x28d858: 0x242102a
    ctx->pc = 0x28d858u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x28d85c: 0x10400008
    ctx->pc = 0x28D85Cu;
    {
        const bool branch_taken_0x28d85c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D860u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        if (branch_taken_0x28d85c) {
            ctx->pc = 0x28D880u;
            goto label_28d880;
        }
    }
    ctx->pc = 0x28D864u;
    // 0x28d864: 0x220282d
    ctx->pc = 0x28d864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d868: 0x4600a306
    ctx->pc = 0x28d868u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d86c: 0x3c06003b
    ctx->pc = 0x28d86cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d870: 0xc080a9a
    ctx->pc = 0x28D870u;
    SET_GPR_U32(ctx, 31, 0x28D878u);
    ctx->pc = 0x28D874u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294958048));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D878u; }
    }
    if (ctx->pc != 0x28D878u) { return; }
    ctx->pc = 0x28D878u;
    // 0x28d878: 0x1000000b
    ctx->pc = 0x28D878u;
    {
        const bool branch_taken_0x28d878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D87Cu;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        if (branch_taken_0x28d878) {
            ctx->pc = 0x28D8A8u;
            goto label_28d8a8;
        }
    }
    ctx->pc = 0x28D880u;
label_28d880:
    // 0x28d880: 0x142023
    ctx->pc = 0x28d880u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28d884: 0x220282d
    ctx->pc = 0x28d884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d888: 0x24060006
    ctx->pc = 0x28d888u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d88c: 0x3c0700ff
    ctx->pc = 0x28d88cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d890: 0x34e7ffff
    ctx->pc = 0x28d890u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d894: 0x4600a306
    ctx->pc = 0x28d894u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d898: 0x3c08003b
    ctx->pc = 0x28d898u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28d89c: 0xc080510
    ctx->pc = 0x28D89Cu;
    SET_GPR_U32(ctx, 31, 0x28D8A4u);
    ctx->pc = 0x28D8A0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294958048));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D8A4u; }
    }
    if (ctx->pc != 0x28D8A4u) { return; }
    ctx->pc = 0x28D8A4u;
    // 0x28d8a4: 0x23e8821
    ctx->pc = 0x28d8a4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_28d8a8:
    // 0x28d8a8: 0x12e0000c
    ctx->pc = 0x28D8A8u;
    {
        const bool branch_taken_0x28d8a8 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D8ACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
        if (branch_taken_0x28d8a8) {
            ctx->pc = 0x28D8DCu;
            goto label_28d8dc;
        }
    }
    ctx->pc = 0x28D8B0u;
    // 0x28d8b0: 0x1040000a
    ctx->pc = 0x28D8B0u;
    {
        const bool branch_taken_0x28d8b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D8B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d8b0) {
            ctx->pc = 0x28D8DCu;
            goto label_28d8dc;
        }
    }
    ctx->pc = 0x28D8B8u;
    // 0x28d8b8: 0x3c05003b
    ctx->pc = 0x28d8b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d8bc: 0x24a5d8d8
    ctx->pc = 0x28d8bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957272));
    // 0x28d8c0: 0xc0b6252
    ctx->pc = 0x28D8C0u;
    SET_GPR_U32(ctx, 31, 0x28D8C8u);
    ctx->pc = 0x28D8C4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D8C8u; }
    }
    if (ctx->pc != 0x28D8C8u) { return; }
    ctx->pc = 0x28D8C8u;
    // 0x28d8c8: 0x142023
    ctx->pc = 0x28d8c8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28d8cc: 0x220282d
    ctx->pc = 0x28d8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8d0: 0x4600a306
    ctx->pc = 0x28d8d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d8d4: 0xc080a9a
    ctx->pc = 0x28D8D4u;
    SET_GPR_U32(ctx, 31, 0x28D8DCu);
    ctx->pc = 0x28D8D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D8DCu; }
    }
    if (ctx->pc != 0x28D8DCu) { return; }
    ctx->pc = 0x28D8DCu;
label_28d8dc:
    // 0x28d8dc: 0x26310002
    ctx->pc = 0x28d8dcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
    // 0x28d8e0: 0x23e8821
    ctx->pc = 0x28d8e0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x28d8e4: 0x2402003c
    ctx->pc = 0x28d8e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x28d8e8: 0x2e21018
    ctx->pc = 0x28d8e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28d8ec: 0x12e0000e
    ctx->pc = 0x28D8ECu;
    {
        const bool branch_taken_0x28d8ec = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D8F0u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x28d8ec) {
            ctx->pc = 0x28D928u;
            goto label_28d928;
        }
    }
    ctx->pc = 0x28D8F4u;
    // 0x28d8f4: 0x272102a
    ctx->pc = 0x28d8f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
    // 0x28d8f8: 0x1040000b
    ctx->pc = 0x28D8F8u;
    {
        const bool branch_taken_0x28d8f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D8FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 60));
        if (branch_taken_0x28d8f8) {
            ctx->pc = 0x28D928u;
            goto label_28d928;
        }
    }
    ctx->pc = 0x28D900u;
    // 0x28d900: 0x242102a
    ctx->pc = 0x28d900u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x28d904: 0x10400008
    ctx->pc = 0x28D904u;
    {
        const bool branch_taken_0x28d904 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D908u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        if (branch_taken_0x28d904) {
            ctx->pc = 0x28D928u;
            goto label_28d928;
        }
    }
    ctx->pc = 0x28D90Cu;
    // 0x28d90c: 0x220282d
    ctx->pc = 0x28d90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d910: 0x4600a306
    ctx->pc = 0x28d910u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d914: 0x3c06003b
    ctx->pc = 0x28d914u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28d918: 0xc080a9a
    ctx->pc = 0x28D918u;
    SET_GPR_U32(ctx, 31, 0x28D920u);
    ctx->pc = 0x28D91Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294958064));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D920u; }
    }
    if (ctx->pc != 0x28D920u) { return; }
    ctx->pc = 0x28D920u;
    // 0x28d920: 0x1000000b
    ctx->pc = 0x28D920u;
    {
        const bool branch_taken_0x28d920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D924u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        if (branch_taken_0x28d920) {
            ctx->pc = 0x28D950u;
            goto label_28d950;
        }
    }
    ctx->pc = 0x28D928u;
label_28d928:
    // 0x28d928: 0x142023
    ctx->pc = 0x28d928u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28d92c: 0x220282d
    ctx->pc = 0x28d92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d930: 0x24060006
    ctx->pc = 0x28d930u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d934: 0x3c0700ff
    ctx->pc = 0x28d934u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28d938: 0x34e7ffff
    ctx->pc = 0x28d938u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28d93c: 0x4600a306
    ctx->pc = 0x28d93cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d940: 0x3c08003b
    ctx->pc = 0x28d940u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28d944: 0xc080510
    ctx->pc = 0x28D944u;
    SET_GPR_U32(ctx, 31, 0x28D94Cu);
    ctx->pc = 0x28D948u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294958064));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D94Cu; }
    }
    if (ctx->pc != 0x28D94Cu) { return; }
    ctx->pc = 0x28D94Cu;
    // 0x28d94c: 0x23e8821
    ctx->pc = 0x28d94cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_28d950:
    // 0x28d950: 0xc6a10018
    ctx->pc = 0x28d950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d954: 0x3c014a9e
    ctx->pc = 0x28d954u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19102 << 16));
    // 0x28d958: 0x34213400
    ctx->pc = 0x28d958u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13312));
    // 0x28d95c: 0x44811000
    ctx->pc = 0x28d95cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x28d960: 0x0
    ctx->pc = 0x28d960u;
    // NOP
    // 0x28d964: 0x0
    ctx->pc = 0x28d964u;
    // NOP
    // 0x28d968: 0x46020803
    ctx->pc = 0x28d968u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
    // 0x28d96c: 0x460000e4
    ctx->pc = 0x28d96cu;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x28d970: 0x44061800
    ctx->pc = 0x28d970u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[3]);
    // 0x28d974: 0x44860000
    ctx->pc = 0x28d974u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x28d978: 0x46800020
    ctx->pc = 0x28d978u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x28d97c: 0x46020002
    ctx->pc = 0x28d97cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28d980: 0x46000841
    ctx->pc = 0x28d980u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d984: 0x3c014852
    ctx->pc = 0x28d984u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18514 << 16));
    // 0x28d988: 0x3421f000
    ctx->pc = 0x28d988u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 61440));
    // 0x28d98c: 0x44811000
    ctx->pc = 0x28d98cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x28d990: 0x0
    ctx->pc = 0x28d990u;
    // NOP
    // 0x28d994: 0x0
    ctx->pc = 0x28d994u;
    // NOP
    // 0x28d998: 0x46020803
    ctx->pc = 0x28d998u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
    // 0x28d99c: 0x460000e4
    ctx->pc = 0x28d99cu;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x28d9a0: 0x44151800
    ctx->pc = 0x28d9a0u;
    SET_GPR_U32(ctx, 21, *(uint32_t*)&ctx->f[3]);
    // 0x28d9a4: 0x44950000
    ctx->pc = 0x28d9a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 21);
    // 0x28d9a8: 0x46800020
    ctx->pc = 0x28d9a8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x28d9ac: 0x46020002
    ctx->pc = 0x28d9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28d9b0: 0x46000841
    ctx->pc = 0x28d9b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d9b4: 0x3c014561
    ctx->pc = 0x28d9b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17761 << 16));
    // 0x28d9b8: 0x44810000
    ctx->pc = 0x28d9b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x28d9bc: 0x0
    ctx->pc = 0x28d9bcu;
    // NOP
    // 0x28d9c0: 0x0
    ctx->pc = 0x28d9c0u;
    // NOP
    // 0x28d9c4: 0x46000843
    ctx->pc = 0x28d9c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x28d9c8: 0x46000824
    ctx->pc = 0x28d9c8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x28d9cc: 0xe7a00028
    ctx->pc = 0x28d9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28d9d0: 0x12e00022
    ctx->pc = 0x28D9D0u;
    {
        const bool branch_taken_0x28d9d0 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D9D4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
        if (branch_taken_0x28d9d0) {
            ctx->pc = 0x28DA5Cu;
            goto label_28da5c;
        }
    }
    ctx->pc = 0x28D9D8u;
    // 0x28d9d8: 0x10400020
    ctx->pc = 0x28D9D8u;
    {
        const bool branch_taken_0x28d9d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28D9DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28d9d8) {
            ctx->pc = 0x28DA5Cu;
            goto label_28da5c;
        }
    }
    ctx->pc = 0x28D9E0u;
    // 0x28d9e0: 0x3c05003b
    ctx->pc = 0x28d9e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28d9e4: 0xc0b6252
    ctx->pc = 0x28D9E4u;
    SET_GPR_U32(ctx, 31, 0x28D9ECu);
    ctx->pc = 0x28D9E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958080));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D9ECu; }
    }
    if (ctx->pc != 0x28D9ECu) { return; }
    ctx->pc = 0x28D9ECu;
    // 0x28d9ec: 0x148023
    ctx->pc = 0x28d9ecu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28d9f0: 0x200202d
    ctx->pc = 0x28d9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9f4: 0x220282d
    ctx->pc = 0x28d9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9f8: 0x4600a306
    ctx->pc = 0x28d9f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d9fc: 0xc080a9a
    ctx->pc = 0x28D9FCu;
    SET_GPR_U32(ctx, 31, 0x28DA04u);
    ctx->pc = 0x28DA00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA04u; }
    }
    if (ctx->pc != 0x28DA04u) { return; }
    ctx->pc = 0x28DA04u;
    // 0x28da04: 0x23e8821
    ctx->pc = 0x28da04u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x28da08: 0x3a0202d
    ctx->pc = 0x28da08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da0c: 0x3c05003b
    ctx->pc = 0x28da0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28da10: 0x24a5dc08
    ctx->pc = 0x28da10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958088));
    // 0x28da14: 0xc0b6252
    ctx->pc = 0x28DA14u;
    SET_GPR_U32(ctx, 31, 0x28DA1Cu);
    ctx->pc = 0x28DA18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA1Cu; }
    }
    if (ctx->pc != 0x28DA1Cu) { return; }
    ctx->pc = 0x28DA1Cu;
    // 0x28da1c: 0x200202d
    ctx->pc = 0x28da1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da20: 0x220282d
    ctx->pc = 0x28da20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da24: 0x4600a306
    ctx->pc = 0x28da24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28da28: 0xc080a9a
    ctx->pc = 0x28DA28u;
    SET_GPR_U32(ctx, 31, 0x28DA30u);
    ctx->pc = 0x28DA2Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA30u; }
    }
    if (ctx->pc != 0x28DA30u) { return; }
    ctx->pc = 0x28DA30u;
    // 0x28da30: 0x23e8821
    ctx->pc = 0x28da30u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x28da34: 0x3a0202d
    ctx->pc = 0x28da34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da38: 0x3c05003b
    ctx->pc = 0x28da38u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28da3c: 0x24a5dc18
    ctx->pc = 0x28da3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958104));
    // 0x28da40: 0xc0b6252
    ctx->pc = 0x28DA40u;
    SET_GPR_U32(ctx, 31, 0x28DA48u);
    ctx->pc = 0x28DA44u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA48u; }
    }
    if (ctx->pc != 0x28DA48u) { return; }
    ctx->pc = 0x28DA48u;
    // 0x28da48: 0x200202d
    ctx->pc = 0x28da48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da4c: 0x220282d
    ctx->pc = 0x28da4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da50: 0x4600a306
    ctx->pc = 0x28da50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28da54: 0xc080a9a
    ctx->pc = 0x28DA54u;
    SET_GPR_U32(ctx, 31, 0x28DA5Cu);
    ctx->pc = 0x28DA58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DA5Cu; }
    }
    if (ctx->pc != 0x28DA5Cu) { return; }
    ctx->pc = 0x28DA5Cu;
label_28da5c:
    // 0x28da5c: 0x2402003c
    ctx->pc = 0x28da5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x28da60: 0x2e21018
    ctx->pc = 0x28da60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28da64: 0x539821
    ctx->pc = 0x28da64u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x28da68: 0x253182a
    ctx->pc = 0x28da68u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x28da6c: 0x24020001
    ctx->pc = 0x28da6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28da70: 0x8fa40024
    ctx->pc = 0x28da70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x28da74: 0x43200a
    ctx->pc = 0x28da74u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x28da78: 0x1080001f
    ctx->pc = 0x28DA78u;
    {
        const bool branch_taken_0x28da78 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DA7Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x28da78) {
            ctx->pc = 0x28DAF8u;
            goto label_28daf8;
        }
    }
    ctx->pc = 0x28DA80u;
    // 0x28da80: 0x24631b90
    ctx->pc = 0x28da80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x28da84: 0x8ec20000
    ctx->pc = 0x28da84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x28da88: 0x2404003c
    ctx->pc = 0x28da88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x28da8c: 0x441018
    ctx->pc = 0x28da8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28da90: 0x621821
    ctx->pc = 0x28da90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28da94: 0x8c620008
    ctx->pc = 0x28da94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28da98: 0x3c030200
    ctx->pc = 0x28da98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x28da9c: 0x431024
    ctx->pc = 0x28da9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28daa0: 0x10400006
    ctx->pc = 0x28DAA0u;
    {
        const bool branch_taken_0x28daa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DAA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x28daa0) {
            ctx->pc = 0x28DABCu;
            goto label_28dabc;
        }
    }
    ctx->pc = 0x28DAA8u;
    // 0x28daa8: 0xc0981a6
    ctx->pc = 0x28DAA8u;
    SET_GPR_U32(ctx, 31, 0x28DAB0u);
    ctx->pc = 0x260698u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorSelect_0x260698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DAB0u; }
    }
    if (ctx->pc != 0x28DAB0u) { return; }
    ctx->pc = 0x28DAB0u;
    // 0x28dab0: 0xaec00988
    ctx->pc = 0x28dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2440), GPR_U32(ctx, 0));
    // 0x28dab4: 0x1000001b
    ctx->pc = 0x28DAB4u;
    {
        const bool branch_taken_0x28dab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DAB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28dab4) {
            ctx->pc = 0x28DB24u;
            goto label_28db24;
        }
    }
    ctx->pc = 0x28DABCu;
label_28dabc:
    // 0x28dabc: 0x8c44b154
    ctx->pc = 0x28dabcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
    // 0x28dac0: 0x8fa20020
    ctx->pc = 0x28dac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dac4: 0x24450008
    ctx->pc = 0x28dac4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
    // 0x28dac8: 0x24060118
    ctx->pc = 0x28dac8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 280));
    // 0x28dacc: 0x24070010
    ctx->pc = 0x28daccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x28dad0: 0xc0b0c6a
    ctx->pc = 0x28DAD0u;
    SET_GPR_U32(ctx, 31, 0x28DAD8u);
    ctx->pc = 0x28DAD4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DAD8u; }
    }
    if (ctx->pc != 0x28DAD8u) { return; }
    ctx->pc = 0x28DAD8u;
    // 0x28dad8: 0x8fa20020
    ctx->pc = 0x28dad8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dadc: 0x24440020
    ctx->pc = 0x28dadcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 32));
    // 0x28dae0: 0x24050118
    ctx->pc = 0x28dae0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 280));
    // 0x28dae4: 0x3c013f00
    ctx->pc = 0x28dae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x28dae8: 0x44816000
    ctx->pc = 0x28dae8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28daec: 0x3c06003b
    ctx->pc = 0x28daecu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28daf0: 0xc080a9a
    ctx->pc = 0x28DAF0u;
    SET_GPR_U32(ctx, 31, 0x28DAF8u);
    ctx->pc = 0x28DAF4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957968));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DAF8u; }
    }
    if (ctx->pc != 0x28DAF8u) { return; }
    ctx->pc = 0x28DAF8u;
label_28daf8:
    // 0x28daf8: 0x142023
    ctx->pc = 0x28daf8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28dafc: 0x24050008
    ctx->pc = 0x28dafcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x28db00: 0x24060006
    ctx->pc = 0x28db00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28db04: 0x382d
    ctx->pc = 0x28db04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db08: 0x3c013ee6
    ctx->pc = 0x28db08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16102 << 16));
    // 0x28db0c: 0x34216666
    ctx->pc = 0x28db0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x28db10: 0x44816000
    ctx->pc = 0x28db10u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28db14: 0x3c08003b
    ctx->pc = 0x28db14u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28db18: 0xc080510
    ctx->pc = 0x28DB18u;
    SET_GPR_U32(ctx, 31, 0x28DB20u);
    ctx->pc = 0x28DB1Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957632));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DB20u; }
    }
    if (ctx->pc != 0x28DB20u) { return; }
    ctx->pc = 0x28DB20u;
    // 0x28db20: 0x102d
    ctx->pc = 0x28db20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28db24:
    // 0x28db24: 0xdfbf00c0
    ctx->pc = 0x28db24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28db28: 0xdfbe00b0
    ctx->pc = 0x28db28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28db2c: 0xdfb700a0
    ctx->pc = 0x28db2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28db30: 0xdfb60090
    ctx->pc = 0x28db30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28db34: 0xdfb50080
    ctx->pc = 0x28db34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28db38: 0xdfb40070
    ctx->pc = 0x28db38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28db3c: 0xdfb30060
    ctx->pc = 0x28db3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28db40: 0xdfb20050
    ctx->pc = 0x28db40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28db44: 0xdfb10040
    ctx->pc = 0x28db44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28db48: 0xdfb00030
    ctx->pc = 0x28db48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28db4c: 0xc7b400d0
    ctx->pc = 0x28db4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28db50: 0x3e00008
    ctx->pc = 0x28DB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D684u: goto label_28d684;
            case 0x28D6E4u: goto label_28d6e4;
            case 0x28D70Cu: goto label_28d70c;
            case 0x28D740u: goto label_28d740;
            case 0x28D7ACu: goto label_28d7ac;
            case 0x28D800u: goto label_28d800;
            case 0x28D834u: goto label_28d834;
            case 0x28D880u: goto label_28d880;
            case 0x28D8A8u: goto label_28d8a8;
            case 0x28D8DCu: goto label_28d8dc;
            case 0x28D928u: goto label_28d928;
            case 0x28D950u: goto label_28d950;
            case 0x28DA5Cu: goto label_28da5c;
            case 0x28DABCu: goto label_28dabc;
            case 0x28DAF8u: goto label_28daf8;
            case 0x28DB24u: goto label_28db24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28DB58u;
}
