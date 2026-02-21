#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: shop_show_stats
// Address: 0x28c7c8 - 0x28cc54
void shop_show_stats_0x28c7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28c7c8u;

    // 0x28c7c8: 0x27bdff60
    ctx->pc = 0x28c7c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28c7cc: 0xffbf0090
    ctx->pc = 0x28c7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28c7d0: 0xffbe0080
    ctx->pc = 0x28c7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x28c7d4: 0xffb70070
    ctx->pc = 0x28c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x28c7d8: 0xffb60060
    ctx->pc = 0x28c7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x28c7dc: 0xffb50050
    ctx->pc = 0x28c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28c7e0: 0xffb40040
    ctx->pc = 0x28c7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28c7e4: 0xffb30030
    ctx->pc = 0x28c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28c7e8: 0xffb20020
    ctx->pc = 0x28c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c7ec: 0xffb10010
    ctx->pc = 0x28c7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c7f0: 0xffb00000
    ctx->pc = 0x28c7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c7f4: 0x80a02d
    ctx->pc = 0x28c7f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7f8: 0x8e83000c
    ctx->pc = 0x28c7f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x28c7fc: 0x24110018
    ctx->pc = 0x28c7fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28c800: 0x718818
    ctx->pc = 0x28c800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c804: 0x26311a38
    ctx->pc = 0x28c804u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 6712));
    // 0x28c808: 0x2918821
    ctx->pc = 0x28c808u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x28c80c: 0x240200b4
    ctx->pc = 0x28c80cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
    // 0x28c810: 0x621818
    ctx->pc = 0x28c810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c814: 0x24631d78
    ctx->pc = 0x28c814u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7544));
    // 0x28c818: 0x283b821
    ctx->pc = 0x28c818u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x28c81c: 0x3c020035
    ctx->pc = 0x28c81cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28c820: 0x2442b3e0
    ctx->pc = 0x28c820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947808));
    // 0x28c824: 0x8e830000
    ctx->pc = 0x28c824u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28c828: 0x31880
    ctx->pc = 0x28c828u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x28c82c: 0x621021
    ctx->pc = 0x28c82cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c830: 0x8c420000
    ctx->pc = 0x28c830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c834: 0x24520006
    ctx->pc = 0x28c834u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 6));
    // 0x28c838: 0x3c020035
    ctx->pc = 0x28c838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28c83c: 0x2442b3f0
    ctx->pc = 0x28c83cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947824));
    // 0x28c840: 0x621821
    ctx->pc = 0x28c840u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c844: 0x8c700000
    ctx->pc = 0x28c844u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c848: 0x108023
    ctx->pc = 0x28c848u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x28c84c: 0x200202d
    ctx->pc = 0x28c84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c850: 0x24050038
    ctx->pc = 0x28c850u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 56));
    // 0x28c854: 0x302d
    ctx->pc = 0x28c854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c858: 0x3c0700ff
    ctx->pc = 0x28c858u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28c85c: 0x34e7ffff
    ctx->pc = 0x28c85cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28c860: 0x3c08003b
    ctx->pc = 0x28c860u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28c864: 0xc0804c8
    ctx->pc = 0x28C864u;
    SET_GPR_U32(ctx, 31, 0x28C86Cu);
    ctx->pc = 0x28C868u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957640));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C86Cu; }
    }
    if (ctx->pc != 0x28C86Cu) { return; }
    ctx->pc = 0x28C86Cu;
    // 0x28c86c: 0x200202d
    ctx->pc = 0x28c86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c870: 0x24050040
    ctx->pc = 0x28c870u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    // 0x28c874: 0x302d
    ctx->pc = 0x28c874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c878: 0x3c0700ff
    ctx->pc = 0x28c878u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28c87c: 0x34e7ffff
    ctx->pc = 0x28c87cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28c880: 0x3c08003b
    ctx->pc = 0x28c880u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28c884: 0xc0804c8
    ctx->pc = 0x28C884u;
    SET_GPR_U32(ctx, 31, 0x28C88Cu);
    ctx->pc = 0x28C888u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957656));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C88Cu; }
    }
    if (ctx->pc != 0x28C88Cu) { return; }
    ctx->pc = 0x28C88Cu;
    // 0x28c88c: 0x240202d
    ctx->pc = 0x28c88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c890: 0x24050050
    ctx->pc = 0x28c890u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 80));
    // 0x28c894: 0x302d
    ctx->pc = 0x28c894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c898: 0x3c0700ff
    ctx->pc = 0x28c898u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28c89c: 0x34e7ffff
    ctx->pc = 0x28c89cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28c8a0: 0x3c08003b
    ctx->pc = 0x28c8a0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28c8a4: 0xc0804c8
    ctx->pc = 0x28C8A4u;
    SET_GPR_U32(ctx, 31, 0x28C8ACu);
    ctx->pc = 0x28C8A8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957672));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8ACu; }
    }
    if (ctx->pc != 0x28C8ACu) { return; }
    ctx->pc = 0x28C8ACu;
    // 0x28c8ac: 0xc6200004
    ctx->pc = 0x28c8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c8b0: 0xc6811a10
    ctx->pc = 0x28c8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c8b4: 0x240202d
    ctx->pc = 0x28c8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8b8: 0x24050058
    ctx->pc = 0x28c8b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 88));
    // 0x28c8bc: 0x302d
    ctx->pc = 0x28c8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8c0: 0x3c0700ff
    ctx->pc = 0x28c8c0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28c8c4: 0x34e7ffff
    ctx->pc = 0x28c8c4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28c8c8: 0x3c08003b
    ctx->pc = 0x28c8c8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28c8cc: 0x460000a4
    ctx->pc = 0x28c8ccu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x28c8d0: 0x44091000
    ctx->pc = 0x28c8d0u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x28c8d4: 0x46000824
    ctx->pc = 0x28c8d4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x28c8d8: 0x440a0000
    ctx->pc = 0x28c8d8u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x28c8dc: 0xc0804c8
    ctx->pc = 0x28C8DCu;
    SET_GPR_U32(ctx, 31, 0x28C8E4u);
    ctx->pc = 0x28C8E0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957688));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8E4u; }
    }
    if (ctx->pc != 0x28C8E4u) { return; }
    ctx->pc = 0x28C8E4u;
    // 0x28c8e4: 0x240202d
    ctx->pc = 0x28c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8e8: 0x24050060
    ctx->pc = 0x28c8e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 96));
    // 0x28c8ec: 0x302d
    ctx->pc = 0x28c8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8f0: 0x3c0700ff
    ctx->pc = 0x28c8f0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28c8f4: 0x34e7ffff
    ctx->pc = 0x28c8f4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28c8f8: 0x3c08003b
    ctx->pc = 0x28c8f8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28c8fc: 0x2508da88
    ctx->pc = 0x28c8fcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957704));
    // 0x28c900: 0x8ee90030
    ctx->pc = 0x28c900u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x28c904: 0xc0804c8
    ctx->pc = 0x28C904u;
    SET_GPR_U32(ctx, 31, 0x28C90Cu);
    ctx->pc = 0x28C908u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 20), 6688)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C90Cu; }
    }
    if (ctx->pc != 0x28C90Cu) { return; }
    ctx->pc = 0x28C90Cu;
    // 0x28c90c: 0x240202d
    ctx->pc = 0x28c90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c910: 0x24050068
    ctx->pc = 0x28c910u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 104));
    // 0x28c914: 0x302d
    ctx->pc = 0x28c914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c918: 0x3c0700ff
    ctx->pc = 0x28c918u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28c91c: 0x34e7ffff
    ctx->pc = 0x28c91cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28c920: 0x3c08003b
    ctx->pc = 0x28c920u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28c924: 0x2508da98
    ctx->pc = 0x28c924u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957720));
    // 0x28c928: 0x8e290000
    ctx->pc = 0x28c928u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28c92c: 0xc0804c8
    ctx->pc = 0x28C92Cu;
    SET_GPR_U32(ctx, 31, 0x28C934u);
    ctx->pc = 0x28C930u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 20), 6684)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C934u; }
    }
    if (ctx->pc != 0x28C934u) { return; }
    ctx->pc = 0x28C934u;
    // 0x28c934: 0x3c020032
    ctx->pc = 0x28c934u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28c938: 0x8c4a0828
    ctx->pc = 0x28c938u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 2088)));
    // 0x28c93c: 0x24020e10
    ctx->pc = 0x28c93cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3600));
    // 0x28c940: 0x142001a
    ctx->pc = 0x28c940u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x28c944: 0x4812
    ctx->pc = 0x28c944u;
    SET_GPR_U32(ctx, 9, ctx->lo);
    // 0x28c948: 0x50400001
    ctx->pc = 0x28C948u;
    {
        const bool branch_taken_0x28c948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28c948) {
            ctx->pc = 0x28C94Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28C950u;
            goto label_28c950;
        }
    }
    ctx->pc = 0x28C950u;
label_28c950:
    // 0x28c950: 0x1221018
    ctx->pc = 0x28c950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c954: 0x1425023
    ctx->pc = 0x28c954u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x28c958: 0x2402003c
    ctx->pc = 0x28c958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x28c95c: 0x142001a
    ctx->pc = 0x28c95cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x28c960: 0x5012
    ctx->pc = 0x28c960u;
    SET_GPR_U32(ctx, 10, ctx->lo);
    // 0x28c964: 0x50400001
    ctx->pc = 0x28C964u;
    {
        const bool branch_taken_0x28c964 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28c964) {
            ctx->pc = 0x28C968u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28C96Cu;
            goto label_28c96c;
        }
    }
    ctx->pc = 0x28C96Cu;
label_28c96c:
    // 0x28c96c: 0x240202d
    ctx->pc = 0x28c96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c970: 0x24050078
    ctx->pc = 0x28c970u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 120));
    // 0x28c974: 0x302d
    ctx->pc = 0x28c974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c978: 0x3c0700ff
    ctx->pc = 0x28c978u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28c97c: 0x34e7ffff
    ctx->pc = 0x28c97cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28c980: 0x3c08003b
    ctx->pc = 0x28c980u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28c984: 0xc0804c8
    ctx->pc = 0x28C984u;
    SET_GPR_U32(ctx, 31, 0x28C98Cu);
    ctx->pc = 0x28C988u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957736));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C98Cu; }
    }
    if (ctx->pc != 0x28C98Cu) { return; }
    ctx->pc = 0x28C98Cu;
    // 0x28c98c: 0x24110012
    ctx->pc = 0x28c98cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 18));
    // 0x28c990: 0x240202d
    ctx->pc = 0x28c990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c994: 0x24050088
    ctx->pc = 0x28c994u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 136));
    // 0x28c998: 0x302d
    ctx->pc = 0x28c998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c99c: 0x3c0700ff
    ctx->pc = 0x28c99cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28c9a0: 0x34e7ffff
    ctx->pc = 0x28c9a0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28c9a4: 0x3c08003b
    ctx->pc = 0x28c9a4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28c9a8: 0xc0804c8
    ctx->pc = 0x28C9A8u;
    SET_GPR_U32(ctx, 31, 0x28C9B0u);
    ctx->pc = 0x28C9ACu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957752));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C9B0u; }
    }
    if (ctx->pc != 0x28C9B0u) { return; }
    ctx->pc = 0x28C9B0u;
    // 0x28c9b0: 0x802d
    ctx->pc = 0x28c9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c9b4: 0x26f3001e
    ctx->pc = 0x28c9b4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 23), 30));
    // 0x28c9b8: 0x3c020034
    ctx->pc = 0x28c9b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28c9bc: 0x2456fa90
    ctx->pc = 0x28c9bcu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x28c9c0: 0x3c020034
    ctx->pc = 0x28c9c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28c9c4: 0x2455fab8
    ctx->pc = 0x28c9c4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294965944));
    // 0x28c9c8: 0x102040
    ctx->pc = 0x28c9c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 1));
    // 0x28c9cc: 0x0
    ctx->pc = 0x28c9ccu;
    // NOP
label_28c9d0:
    // 0x28c9d0: 0x8e82000c
    ctx->pc = 0x28c9d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x28c9d4: 0x240300b4
    ctx->pc = 0x28c9d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 180));
    // 0x28c9d8: 0x431018
    ctx->pc = 0x28c9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c9dc: 0x821021
    ctx->pc = 0x28c9dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28c9e0: 0x2821021
    ctx->pc = 0x28c9e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x28c9e4: 0x844b0d0a
    ctx->pc = 0x28c9e4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3338)));
    // 0x28c9e8: 0x2642021
    ctx->pc = 0x28c9e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x28c9ec: 0x84820000
    ctx->pc = 0x28c9ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28c9f0: 0x51620028
    ctx->pc = 0x28C9F0u;
    {
        const bool branch_taken_0x28c9f0 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 2));
        if (branch_taken_0x28c9f0) {
            ctx->pc = 0x28C9F4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x28CA94u;
            goto label_28ca94;
        }
    }
    ctx->pc = 0x28C9F8u;
    // 0x28c9f8: 0x5600005
    ctx->pc = 0x28C9F8u;
    {
        const bool branch_taken_0x28c9f8 = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x28C9FCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x28c9f8) {
            ctx->pc = 0x28CA10u;
            goto label_28ca10;
        }
    }
    ctx->pc = 0x28CA00u;
    // 0x28ca00: 0x561021
    ctx->pc = 0x28ca00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28ca04: 0x8c420000
    ctx->pc = 0x28ca04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ca08: 0x15620014
    ctx->pc = 0x28CA08u;
    {
        const bool branch_taken_0x28ca08 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 2));
        ctx->pc = 0x28CA0Cu;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
        if (branch_taken_0x28ca08) {
            ctx->pc = 0x28CA5Cu;
            goto label_28ca5c;
        }
    }
    ctx->pc = 0x28CA10u;
label_28ca10:
    // 0x28ca10: 0x1128c0
    ctx->pc = 0x28ca10u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x28ca14: 0x26310001
    ctx->pc = 0x28ca14u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28ca18: 0x3c08003b
    ctx->pc = 0x28ca18u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28ca1c: 0x1048c0
    ctx->pc = 0x28ca1cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 16), 3));
    // 0x28ca20: 0x101840
    ctx->pc = 0x28ca20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 1));
    // 0x28ca24: 0x2631821
    ctx->pc = 0x28ca24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28ca28: 0x101080
    ctx->pc = 0x28ca28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x28ca2c: 0x561021
    ctx->pc = 0x28ca2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28ca30: 0x240202d
    ctx->pc = 0x28ca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca34: 0x302d
    ctx->pc = 0x28ca34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca38: 0x3c0700ff
    ctx->pc = 0x28ca38u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28ca3c: 0x34e7ffff
    ctx->pc = 0x28ca3cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28ca40: 0x2508dac8
    ctx->pc = 0x28ca40u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957768));
    // 0x28ca44: 0x1354821
    ctx->pc = 0x28ca44u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x28ca48: 0x846a0000
    ctx->pc = 0x28ca48u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28ca4c: 0xc0804c8
    ctx->pc = 0x28CA4Cu;
    SET_GPR_U32(ctx, 31, 0x28CA54u);
    ctx->pc = 0x28CA50u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA54u; }
    }
    if (ctx->pc != 0x28CA54u) { return; }
    ctx->pc = 0x28CA54u;
    // 0x28ca54: 0x1000000f
    ctx->pc = 0x28CA54u;
    {
        const bool branch_taken_0x28ca54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28CA58u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x28ca54) {
            ctx->pc = 0x28CA94u;
            goto label_28ca94;
        }
    }
    ctx->pc = 0x28CA5Cu;
label_28ca5c:
    // 0x28ca5c: 0x26310001
    ctx->pc = 0x28ca5cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28ca60: 0x3c08003b
    ctx->pc = 0x28ca60u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28ca64: 0x1048c0
    ctx->pc = 0x28ca64u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 16), 3));
    // 0x28ca68: 0x101040
    ctx->pc = 0x28ca68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x28ca6c: 0x2621021
    ctx->pc = 0x28ca6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28ca70: 0x240202d
    ctx->pc = 0x28ca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca74: 0x302d
    ctx->pc = 0x28ca74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca78: 0x3c0700ff
    ctx->pc = 0x28ca78u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28ca7c: 0x34e7ffff
    ctx->pc = 0x28ca7cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28ca80: 0x2508dad8
    ctx->pc = 0x28ca80u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957784));
    // 0x28ca84: 0x1354821
    ctx->pc = 0x28ca84u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x28ca88: 0xc0804c8
    ctx->pc = 0x28CA88u;
    SET_GPR_U32(ctx, 31, 0x28CA90u);
    ctx->pc = 0x28CA8Cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA90u; }
    }
    if (ctx->pc != 0x28CA90u) { return; }
    ctx->pc = 0x28CA90u;
    // 0x28ca90: 0x26100001
    ctx->pc = 0x28ca90u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_28ca94:
    // 0x28ca94: 0x2a020009
    ctx->pc = 0x28ca94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 9));
    // 0x28ca98: 0x1440ffcd
    ctx->pc = 0x28CA98u;
    {
        const bool branch_taken_0x28ca98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28CA9Cu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x28ca98) {
            ctx->pc = 0x28C9D0u;
            goto label_28c9d0;
        }
    }
    ctx->pc = 0x28CAA0u;
    // 0x28caa0: 0x26310001
    ctx->pc = 0x28caa0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28caa4: 0x1128c0
    ctx->pc = 0x28caa4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x28caa8: 0x26310001
    ctx->pc = 0x28caa8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28caac: 0x240202d
    ctx->pc = 0x28caacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cab0: 0x302d
    ctx->pc = 0x28cab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cab4: 0x3c0700ff
    ctx->pc = 0x28cab4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28cab8: 0x34e7ffff
    ctx->pc = 0x28cab8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28cabc: 0x3c08003b
    ctx->pc = 0x28cabcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28cac0: 0xc0804c8
    ctx->pc = 0x28CAC0u;
    SET_GPR_U32(ctx, 31, 0x28CAC8u);
    ctx->pc = 0x28CAC4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957800));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CAC8u; }
    }
    if (ctx->pc != 0x28CAC8u) { return; }
    ctx->pc = 0x28CAC8u;
    // 0x28cac8: 0x802d
    ctx->pc = 0x28cac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cacc: 0x241e00b4
    ctx->pc = 0x28caccu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 180));
    // 0x28cad0: 0x26950d04
    ctx->pc = 0x28cad0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 3332));
    // 0x28cad4: 0x26f30018
    ctx->pc = 0x28cad4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 23), 24));
    // 0x28cad8: 0x3c020034
    ctx->pc = 0x28cad8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28cadc: 0x2457fb00
    ctx->pc = 0x28cadcu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x28cae0: 0x3c020034
    ctx->pc = 0x28cae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28cae4: 0x2456fb10
    ctx->pc = 0x28cae4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294966032));
    // 0x28cae8: 0x101840
    ctx->pc = 0x28cae8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 1));
    // 0x28caec: 0x0
    ctx->pc = 0x28caecu;
    // NOP
label_28caf0:
    // 0x28caf0: 0x8e82000c
    ctx->pc = 0x28caf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x28caf4: 0x5e1018
    ctx->pc = 0x28caf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28caf8: 0x621021
    ctx->pc = 0x28caf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28cafc: 0x2a21021
    ctx->pc = 0x28cafcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28cb00: 0x844b0000
    ctx->pc = 0x28cb00u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28cb04: 0x2631821
    ctx->pc = 0x28cb04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28cb08: 0x84620000
    ctx->pc = 0x28cb08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28cb0c: 0x51620015
    ctx->pc = 0x28CB0Cu;
    {
        const bool branch_taken_0x28cb0c = (GPR_U32(ctx, 11) == GPR_U32(ctx, 2));
        if (branch_taken_0x28cb0c) {
            ctx->pc = 0x28CB10u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x28CB64u;
            goto label_28cb64;
        }
    }
    ctx->pc = 0x28CB14u;
    // 0x28cb14: 0x5610004
    ctx->pc = 0x28CB14u;
    {
        const bool branch_taken_0x28cb14 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x28CB18u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
        if (branch_taken_0x28cb14) {
            ctx->pc = 0x28CB28u;
            goto label_28cb28;
        }
    }
    ctx->pc = 0x28CB1Cu;
    // 0x28cb1c: 0x101080
    ctx->pc = 0x28cb1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x28cb20: 0x571021
    ctx->pc = 0x28cb20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x28cb24: 0x8c4b0000
    ctx->pc = 0x28cb24u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28cb28:
    // 0x28cb28: 0x26310001
    ctx->pc = 0x28cb28u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28cb2c: 0x3c08003b
    ctx->pc = 0x28cb2cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28cb30: 0x2409000c
    ctx->pc = 0x28cb30u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28cb34: 0x101040
    ctx->pc = 0x28cb34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x28cb38: 0x2621021
    ctx->pc = 0x28cb38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28cb3c: 0x240202d
    ctx->pc = 0x28cb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb40: 0x302d
    ctx->pc = 0x28cb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb44: 0x3c0700ff
    ctx->pc = 0x28cb44u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28cb48: 0x34e7ffff
    ctx->pc = 0x28cb48u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28cb4c: 0x2508daf8
    ctx->pc = 0x28cb4cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957816));
    // 0x28cb50: 0x2091818
    ctx->pc = 0x28cb50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28cb54: 0x764821
    ctx->pc = 0x28cb54u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x28cb58: 0xc0804c8
    ctx->pc = 0x28CB58u;
    SET_GPR_U32(ctx, 31, 0x28CB60u);
    ctx->pc = 0x28CB5Cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB60u; }
    }
    if (ctx->pc != 0x28CB60u) { return; }
    ctx->pc = 0x28CB60u;
    // 0x28cb60: 0x26100001
    ctx->pc = 0x28cb60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_28cb64:
    // 0x28cb64: 0x2a020003
    ctx->pc = 0x28cb64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
    // 0x28cb68: 0x1440ffe1
    ctx->pc = 0x28CB68u;
    {
        const bool branch_taken_0x28cb68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28CB6Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x28cb68) {
            ctx->pc = 0x28CAF0u;
            goto label_28caf0;
        }
    }
    ctx->pc = 0x28CB70u;
    // 0x28cb70: 0x26310001
    ctx->pc = 0x28cb70u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28cb74: 0x1128c0
    ctx->pc = 0x28cb74u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x28cb78: 0x26310001
    ctx->pc = 0x28cb78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28cb7c: 0x3c020032
    ctx->pc = 0x28cb7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28cb80: 0x240202d
    ctx->pc = 0x28cb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb84: 0x302d
    ctx->pc = 0x28cb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb88: 0x3c0700ff
    ctx->pc = 0x28cb88u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28cb8c: 0x34e7ffff
    ctx->pc = 0x28cb8cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28cb90: 0x3c08003b
    ctx->pc = 0x28cb90u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28cb94: 0x2508db08
    ctx->pc = 0x28cb94u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957832));
    // 0x28cb98: 0xc0804c8
    ctx->pc = 0x28CB98u;
    SET_GPR_U32(ctx, 31, 0x28CBA0u);
    ctx->pc = 0x28CB9Cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 4294964424)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CBA0u; }
    }
    if (ctx->pc != 0x28CBA0u) { return; }
    ctx->pc = 0x28CBA0u;
    // 0x28cba0: 0x1128c0
    ctx->pc = 0x28cba0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x28cba4: 0x26310001
    ctx->pc = 0x28cba4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28cba8: 0x3c020032
    ctx->pc = 0x28cba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28cbac: 0x240202d
    ctx->pc = 0x28cbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cbb0: 0x302d
    ctx->pc = 0x28cbb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cbb4: 0x3c0700ff
    ctx->pc = 0x28cbb4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28cbb8: 0x34e7ffff
    ctx->pc = 0x28cbb8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28cbbc: 0x3c08003b
    ctx->pc = 0x28cbbcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28cbc0: 0x2508db18
    ctx->pc = 0x28cbc0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957848));
    // 0x28cbc4: 0xc0804c8
    ctx->pc = 0x28CBC4u;
    SET_GPR_U32(ctx, 31, 0x28CBCCu);
    ctx->pc = 0x28CBC8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 4294964428)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CBCCu; }
    }
    if (ctx->pc != 0x28CBCCu) { return; }
    ctx->pc = 0x28CBCCu;
    // 0x28cbcc: 0x1128c0
    ctx->pc = 0x28cbccu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x28cbd0: 0x26310001
    ctx->pc = 0x28cbd0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28cbd4: 0x3c020037
    ctx->pc = 0x28cbd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x28cbd8: 0x8c492980
    ctx->pc = 0x28cbd8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 10624)));
    // 0x28cbdc: 0x240202d
    ctx->pc = 0x28cbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cbe0: 0x302d
    ctx->pc = 0x28cbe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cbe4: 0x3c0700ff
    ctx->pc = 0x28cbe4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28cbe8: 0x34e7ffff
    ctx->pc = 0x28cbe8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28cbec: 0x3c08003b
    ctx->pc = 0x28cbecu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28cbf0: 0x2508db28
    ctx->pc = 0x28cbf0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957864));
    // 0x28cbf4: 0xc0804c8
    ctx->pc = 0x28CBF4u;
    SET_GPR_U32(ctx, 31, 0x28CBFCu);
    ctx->pc = 0x28CBF8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 10));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CBFCu; }
    }
    if (ctx->pc != 0x28CBFCu) { return; }
    ctx->pc = 0x28CBFCu;
    // 0x28cbfc: 0x3c020037
    ctx->pc = 0x28cbfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x28cc00: 0x8c49296c
    ctx->pc = 0x28cc00u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 10604)));
    // 0x28cc04: 0x240202d
    ctx->pc = 0x28cc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc08: 0x1128c0
    ctx->pc = 0x28cc08u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x28cc0c: 0x302d
    ctx->pc = 0x28cc0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc10: 0x3c0700ff
    ctx->pc = 0x28cc10u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28cc14: 0x34e7ffff
    ctx->pc = 0x28cc14u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28cc18: 0x3c08003b
    ctx->pc = 0x28cc18u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28cc1c: 0x2508db38
    ctx->pc = 0x28cc1cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957880));
    // 0x28cc20: 0x94a83
    ctx->pc = 0x28cc20u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 10));
    // 0x28cc24: 0xdfbf0090
    ctx->pc = 0x28cc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28cc28: 0xdfbe0080
    ctx->pc = 0x28cc28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28cc2c: 0xdfb70070
    ctx->pc = 0x28cc2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28cc30: 0xdfb60060
    ctx->pc = 0x28cc30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28cc34: 0xdfb50050
    ctx->pc = 0x28cc34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28cc38: 0xdfb40040
    ctx->pc = 0x28cc38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28cc3c: 0xdfb30030
    ctx->pc = 0x28cc3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28cc40: 0xdfb20020
    ctx->pc = 0x28cc40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cc44: 0xdfb10010
    ctx->pc = 0x28cc44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cc48: 0xdfb00000
    ctx->pc = 0x28cc48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cc4c: 0x80804c8
    ctx->pc = 0x28CC4Cu;
    ctx->pc = 0x28CC50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x201320u;
    DrawText_0x201320(rdram, ctx, runtime); return;
    ctx->pc = 0x28CC54u;
}
