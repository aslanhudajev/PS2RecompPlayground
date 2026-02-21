#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: load_player
// Address: 0x22f8a8 - 0x22ff7c
void load_player_0x22f8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22f8a8u;

    // 0x22f8a8: 0x27bdff80
    ctx->pc = 0x22f8a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22f8ac: 0xffbf0070
    ctx->pc = 0x22f8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22f8b0: 0xffb50060
    ctx->pc = 0x22f8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22f8b4: 0xffb40050
    ctx->pc = 0x22f8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22f8b8: 0xffb30040
    ctx->pc = 0x22f8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22f8bc: 0xffb20030
    ctx->pc = 0x22f8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22f8c0: 0xffb10020
    ctx->pc = 0x22f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22f8c4: 0xffb00010
    ctx->pc = 0x22f8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22f8c8: 0xa0882d
    ctx->pc = 0x22f8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8cc: 0x8e220080
    ctx->pc = 0x22f8ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x22f8d0: 0x10400005
    ctx->pc = 0x22F8D0u;
    {
        const bool branch_taken_0x22f8d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F8D4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22f8d0) {
            ctx->pc = 0x22F8E8u;
            goto label_22f8e8;
        }
    }
    ctx->pc = 0x22F8D8u;
    // 0x22f8d8: 0x3c04003a
    ctx->pc = 0x22f8d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22f8dc: 0x248476e8
    ctx->pc = 0x22f8dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30440));
    // 0x22f8e0: 0xc0b49a6
    ctx->pc = 0x22F8E0u;
    SET_GPR_U32(ctx, 31, 0x22F8E8u);
    ctx->pc = 0x22F8E4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F8E8u; }
    }
    if (ctx->pc != 0x22F8E8u) { return; }
    ctx->pc = 0x22F8E8u;
label_22f8e8:
    // 0x22f8e8: 0x8e220104
    ctx->pc = 0x22f8e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x22f8ec: 0x1440000a
    ctx->pc = 0x22F8ECu;
    {
        const bool branch_taken_0x22f8ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22F8F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22f8ec) {
            ctx->pc = 0x22F918u;
            goto label_22f918;
        }
    }
    ctx->pc = 0x22F8F4u;
    // 0x22f8f4: 0x3c020032
    ctx->pc = 0x22f8f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f8f8: 0x8c42081c
    ctx->pc = 0x22f8f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2076)));
    // 0x22f8fc: 0x58400004
    ctx->pc = 0x22F8FCu;
    {
        const bool branch_taken_0x22f8fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22f8fc) {
            ctx->pc = 0x22F900u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->pc = 0x22F910u;
            goto label_22f910;
        }
    }
    ctx->pc = 0x22F904u;
    // 0x22f904: 0xc08bda0
    ctx->pc = 0x22F904u;
    SET_GPR_U32(ctx, 31, 0x22F90Cu);
    ctx->pc = 0x22F908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22F680u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_hidden_player_0x22f680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F90Cu; }
    }
    if (ctx->pc != 0x22F90Cu) { return; }
    ctx->pc = 0x22F90Cu;
    // 0x22f90c: 0x8e220104
    ctx->pc = 0x22f90cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_22f910:
    // 0x22f910: 0x10400007
    ctx->pc = 0x22F910u;
    {
        const bool branch_taken_0x22f910 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F914u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22f910) {
            ctx->pc = 0x22F930u;
            goto label_22f930;
        }
    }
    ctx->pc = 0x22F918u;
label_22f918:
    // 0x22f918: 0x220282d
    ctx->pc = 0x22f918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f91c: 0x260302d
    ctx->pc = 0x22f91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f920: 0xc08bd3e
    ctx->pc = 0x22F920u;
    SET_GPR_U32(ctx, 31, 0x22F928u);
    ctx->pc = 0x22F924u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->pc = 0x22F4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_player_model_0x22f4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F928u; }
    }
    if (ctx->pc != 0x22F928u) { return; }
    ctx->pc = 0x22F928u;
    // 0x22f928: 0x1000002a
    ctx->pc = 0x22F928u;
    {
        const bool branch_taken_0x22f928 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F92Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 1996), GPR_U32(ctx, 2));
        if (branch_taken_0x22f928) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F930u;
label_22f930:
    // 0x22f930: 0x3c020033
    ctx->pc = 0x22f930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22f934: 0x2445c7d8
    ctx->pc = 0x22f934u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294952920));
    // 0x22f938: 0x2402004c
    ctx->pc = 0x22f938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22f93c: 0x2622018
    ctx->pc = 0x22f93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22f940: 0x851021
    ctx->pc = 0x22f940u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22f944: 0x8c430000
    ctx->pc = 0x22f944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f948: 0x8e22000c
    ctx->pc = 0x22f948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22f94c: 0x54620014
    ctx->pc = 0x22F94Cu;
    {
        const bool branch_taken_0x22f94c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22f94c) {
            ctx->pc = 0x22F950u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x22F9A0u;
            goto label_22f9a0;
        }
    }
    ctx->pc = 0x22F954u;
    // 0x22f954: 0xa41021
    ctx->pc = 0x22f954u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22f958: 0x8c430004
    ctx->pc = 0x22f958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f95c: 0x8e220004
    ctx->pc = 0x22f95cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x22f960: 0x5462000f
    ctx->pc = 0x22F960u;
    {
        const bool branch_taken_0x22f960 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22f960) {
            ctx->pc = 0x22F964u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x22F9A0u;
            goto label_22f9a0;
        }
    }
    ctx->pc = 0x22F968u;
    // 0x22f968: 0xa41021
    ctx->pc = 0x22f968u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22f96c: 0x8c42000c
    ctx->pc = 0x22f96cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22f970: 0x5440000b
    ctx->pc = 0x22F970u;
    {
        const bool branch_taken_0x22f970 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22f970) {
            ctx->pc = 0x22F974u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x22F9A0u;
            goto label_22f9a0;
        }
    }
    ctx->pc = 0x22F978u;
    // 0x22f978: 0xa42021
    ctx->pc = 0x22f978u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22f97c: 0x8e232ac0
    ctx->pc = 0x22f97cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    // 0x22f980: 0x2402000a
    ctx->pc = 0x22f980u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f984: 0x62001a
    ctx->pc = 0x22f984u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x22f988: 0x1812
    ctx->pc = 0x22f988u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x22f98c: 0x50400001
    ctx->pc = 0x22F98Cu;
    {
        const bool branch_taken_0x22f98c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22f98c) {
            ctx->pc = 0x22F990u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x22F994u;
            goto label_22f994;
        }
    }
    ctx->pc = 0x22F994u;
label_22f994:
    // 0x22f994: 0x8c820008
    ctx->pc = 0x22f994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22f998: 0x10430007
    ctx->pc = 0x22F998u;
    {
        const bool branch_taken_0x22f998 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x22F99Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22f998) {
            ctx->pc = 0x22F9B8u;
            goto label_22f9b8;
        }
    }
    ctx->pc = 0x22F9A0u;
label_22f9a0:
    // 0x22f9a0: 0x220282d
    ctx->pc = 0x22f9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9a4: 0x2406ffff
    ctx->pc = 0x22f9a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f9a8: 0xc08bd3e
    ctx->pc = 0x22F9A8u;
    SET_GPR_U32(ctx, 31, 0x22F9B0u);
    ctx->pc = 0x22F9ACu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22F4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_player_model_0x22f4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9B0u; }
    }
    if (ctx->pc != 0x22F9B0u) { return; }
    ctx->pc = 0x22F9B0u;
    // 0x22f9b0: 0x10000008
    ctx->pc = 0x22F9B0u;
    {
        const bool branch_taken_0x22f9b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22F9B4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 1996), GPR_U32(ctx, 2));
        if (branch_taken_0x22f9b0) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F9B8u;
label_22f9b8:
    // 0x22f9b8: 0x3c030033
    ctx->pc = 0x22f9b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x22f9bc: 0x2463c7d8
    ctx->pc = 0x22f9bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952920));
    // 0x22f9c0: 0x2402004c
    ctx->pc = 0x22f9c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22f9c4: 0x2621018
    ctx->pc = 0x22f9c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22f9c8: 0x621821
    ctx->pc = 0x22f9c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f9cc: 0x8c620010
    ctx->pc = 0x22f9ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x22f9d0: 0xae2207cc
    ctx->pc = 0x22f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1996), GPR_U32(ctx, 2));
label_22f9d4:
    // 0x22f9d4: 0x8e350004
    ctx->pc = 0x22f9d4u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x22f9d8: 0x260202d
    ctx->pc = 0x22f9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9dc: 0x8e25000c
    ctx->pc = 0x22f9dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22f9e0: 0xc093692
    ctx->pc = 0x22F9E0u;
    SET_GPR_U32(ctx, 31, 0x22F9E8u);
    ctx->pc = 0x22F9E4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9E8u; }
    }
    if (ctx->pc != 0x22F9E8u) { return; }
    ctx->pc = 0x22F9E8u;
    // 0x22f9e8: 0x3c020034
    ctx->pc = 0x22f9e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22f9ec: 0x8c42cda8
    ctx->pc = 0x22f9ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954408)));
    // 0x22f9f0: 0x50400004
    ctx->pc = 0x22F9F0u;
    {
        const bool branch_taken_0x22f9f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22f9f0) {
            ctx->pc = 0x22F9F4u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->pc = 0x22FA04u;
            goto label_22fa04;
        }
    }
    ctx->pc = 0x22F9F8u;
    // 0x22f9f8: 0xc0a3c50
    ctx->pc = 0x22F9F8u;
    SET_GPR_U32(ctx, 31, 0x22FA00u);
    ctx->pc = 0x22F9FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28F140u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitPlayerMissiles_0x28f140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA00u; }
    }
    if (ctx->pc != 0x22FA00u) { return; }
    ctx->pc = 0x22FA00u;
    // 0x22fa00: 0x8e250104
    ctx->pc = 0x22fa00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_22fa04:
    // 0x22fa04: 0x10a00016
    ctx->pc = 0x22FA04u;
    {
        const bool branch_taken_0x22fa04 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x22FA08u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x22fa04) {
            ctx->pc = 0x22FA60u;
            goto label_22fa60;
        }
    }
    ctx->pc = 0x22FA0Cu;
    // 0x22fa0c: 0xc0bf2c1
    ctx->pc = 0x22FA0Cu;
    SET_GPR_U32(ctx, 31, 0x22FA14u);
    ctx->pc = 0x22FA10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA14u; }
    }
    if (ctx->pc != 0x22FA14u) { return; }
    ctx->pc = 0x22FA14u;
    // 0x22fa14: 0x83a20000
    ctx->pc = 0x22fa14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fa18: 0x10400018
    ctx->pc = 0x22FA18u;
    {
        const bool branch_taken_0x22fa18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22FA1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22fa18) {
            ctx->pc = 0x22FA7Cu;
            goto label_22fa7c;
        }
    }
    ctx->pc = 0x22FA20u;
    // 0x22fa20: 0x3c02003c
    ctx->pc = 0x22fa20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22fa24: 0x2446a781
    ctx->pc = 0x22fa24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294944641));
    // 0x22fa28: 0x80a40000
    ctx->pc = 0x22fa28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22fa2c: 0x0
    ctx->pc = 0x22fa2cu;
    // NOP
label_22fa30:
    // 0x22fa30: 0x861021
    ctx->pc = 0x22fa30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x22fa34: 0x90420000
    ctx->pc = 0x22fa34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fa38: 0x30420002
    ctx->pc = 0x22fa38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x22fa3c: 0x2483ffe0
    ctx->pc = 0x22fa3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x22fa40: 0x62200b
    ctx->pc = 0x22fa40u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x22fa44: 0xa0a40000
    ctx->pc = 0x22fa44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22fa48: 0x24a50001
    ctx->pc = 0x22fa48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x22fa4c: 0x80a20000
    ctx->pc = 0x22fa4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22fa50: 0x5440fff7
    ctx->pc = 0x22FA50u;
    {
        const bool branch_taken_0x22fa50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22fa50) {
            ctx->pc = 0x22FA54u;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x22FA30u;
            goto label_22fa30;
        }
    }
    ctx->pc = 0x22FA58u;
    // 0x22fa58: 0x10000009
    ctx->pc = 0x22FA58u;
    {
        const bool branch_taken_0x22fa58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22FA5Cu;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x22fa58) {
            ctx->pc = 0x22FA80u;
            goto label_22fa80;
        }
    }
    ctx->pc = 0x22FA60u;
label_22fa60:
    // 0x22fa60: 0x3c020032
    ctx->pc = 0x22fa60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22fa64: 0x24421480
    ctx->pc = 0x22fa64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5248));
    // 0x22fa68: 0x151880
    ctx->pc = 0x22fa68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
    // 0x22fa6c: 0x621821
    ctx->pc = 0x22fa6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fa70: 0x3a0202d
    ctx->pc = 0x22fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa74: 0xc0bf2c1
    ctx->pc = 0x22FA74u;
    SET_GPR_U32(ctx, 31, 0x22FA7Cu);
    ctx->pc = 0x22FA78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA7Cu; }
    }
    if (ctx->pc != 0x22FA7Cu) { return; }
    ctx->pc = 0x22FA7Cu;
label_22fa7c:
    // 0x22fa7c: 0x143080
    ctx->pc = 0x22fa7cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 20), 2));
label_22fa80:
    // 0x22fa80: 0x3c020032
    ctx->pc = 0x22fa80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22fa84: 0x24521428
    ctx->pc = 0x22fa84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 5160));
    // 0x22fa88: 0x3c10003c
    ctx->pc = 0x22fa88u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x22fa8c: 0x26041b48
    ctx->pc = 0x22fa8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fa90: 0x3c05003a
    ctx->pc = 0x22fa90u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22fa94: 0x24a57718
    ctx->pc = 0x22fa94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30488));
    // 0x22fa98: 0xd23021
    ctx->pc = 0x22fa98u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x22fa9c: 0xc0b6252
    ctx->pc = 0x22FA9Cu;
    SET_GPR_U32(ctx, 31, 0x22FAA4u);
    ctx->pc = 0x22FAA0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FAA4u; }
    }
    if (ctx->pc != 0x22FAA4u) { return; }
    ctx->pc = 0x22FAA4u;
    // 0x22faa4: 0x26240698
    ctx->pc = 0x22faa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1688));
    // 0x22faa8: 0x26051b48
    ctx->pc = 0x22faa8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22faac: 0xc0bf42e
    ctx->pc = 0x22FAACu;
    SET_GPR_U32(ctx, 31, 0x22FAB4u);
    ctx->pc = 0x22FAB0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FAB4u; }
    }
    if (ctx->pc != 0x22FAB4u) { return; }
    ctx->pc = 0x22FAB4u;
    // 0x22fab4: 0x3c020033
    ctx->pc = 0x22fab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22fab8: 0x8c44c7c0
    ctx->pc = 0x22fab8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294952896)));
    // 0x22fabc: 0x3c05003a
    ctx->pc = 0x22fabcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22fac0: 0x24a52550
    ctx->pc = 0x22fac0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x22fac4: 0xc0b3ec0
    ctx->pc = 0x22FAC4u;
    SET_GPR_U32(ctx, 31, 0x22FACCu);
    ctx->pc = 0x22FAC8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FACCu; }
    }
    if (ctx->pc != 0x22FACCu) { return; }
    ctx->pc = 0x22FACCu;
    // 0x22facc: 0xae220080
    ctx->pc = 0x22faccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x22fad0: 0xae200084
    ctx->pc = 0x22fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x22fad4: 0x3c030033
    ctx->pc = 0x22fad4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x22fad8: 0x2463c7d8
    ctx->pc = 0x22fad8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952920));
    // 0x22fadc: 0x2402004c
    ctx->pc = 0x22fadcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22fae0: 0x2621018
    ctx->pc = 0x22fae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22fae4: 0x621821
    ctx->pc = 0x22fae4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fae8: 0x8e250008
    ctx->pc = 0x22fae8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22faec: 0x52880
    ctx->pc = 0x22faecu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x22faf0: 0x8c640024
    ctx->pc = 0x22faf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x22faf4: 0xb22821
    ctx->pc = 0x22faf4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x22faf8: 0x26260090
    ctx->pc = 0x22faf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 144));
    // 0x22fafc: 0x26071b48
    ctx->pc = 0x22fafcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fb00: 0xc084832
    ctx->pc = 0x22FB00u;
    SET_GPR_U32(ctx, 31, 0x22FB08u);
    ctx->pc = 0x22FB04u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x2120C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeListInit_0x2120c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB08u; }
    }
    if (ctx->pc != 0x22FB08u) { return; }
    ctx->pc = 0x22FB08u;
    // 0x22fb08: 0x14400007
    ctx->pc = 0x22FB08u;
    {
        const bool branch_taken_0x22fb08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22FB0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
        if (branch_taken_0x22fb08) {
            ctx->pc = 0x22FB28u;
            goto label_22fb28;
        }
    }
    ctx->pc = 0x22FB10u;
    // 0x22fb10: 0x8e250008
    ctx->pc = 0x22fb10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22fb14: 0x52880
    ctx->pc = 0x22fb14u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x22fb18: 0x3c04003a
    ctx->pc = 0x22fb18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22fb1c: 0x24847720
    ctx->pc = 0x22fb1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30496));
    // 0x22fb20: 0xc0b4976
    ctx->pc = 0x22FB20u;
    SET_GPR_U32(ctx, 31, 0x22FB28u);
    ctx->pc = 0x22FB24u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB28u; }
    }
    if (ctx->pc != 0x22FB28u) { return; }
    ctx->pc = 0x22FB28u;
label_22fb28:
    // 0x22fb28: 0x8e220090
    ctx->pc = 0x22fb28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x22fb2c: 0x8c440000
    ctx->pc = 0x22fb2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fb30: 0xc0b3f94
    ctx->pc = 0x22FB30u;
    SET_GPR_U32(ctx, 31, 0x22FB38u);
    ctx->pc = 0x22FB34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 128)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB38u; }
    }
    if (ctx->pc != 0x22FB38u) { return; }
    ctx->pc = 0x22FB38u;
    // 0x22fb38: 0x26240090
    ctx->pc = 0x22fb38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 144));
    // 0x22fb3c: 0x262501e8
    ctx->pc = 0x22fb3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 488));
    // 0x22fb40: 0x3c060034
    ctx->pc = 0x22fb40u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x22fb44: 0xc09de38
    ctx->pc = 0x22FB44u;
    SET_GPR_U32(ctx, 31, 0x22FB4Cu);
    ctx->pc = 0x22FB48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294966496));
    ctx->pc = 0x2778E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitActions_0x2778e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB4Cu; }
    }
    if (ctx->pc != 0x22FB4Cu) { return; }
    ctx->pc = 0x22FB4Cu;
    // 0x22fb4c: 0x3c020031
    ctx->pc = 0x22fb4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22fb50: 0x8c430018
    ctx->pc = 0x22fb50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22fb54: 0x24024012
    ctx->pc = 0x22fb54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
    // 0x22fb58: 0x1062000a
    ctx->pc = 0x22FB58u;
    {
        const bool branch_taken_0x22fb58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22FB5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        if (branch_taken_0x22fb58) {
            ctx->pc = 0x22FB84u;
            goto label_22fb84;
        }
    }
    ctx->pc = 0x22FB60u;
    // 0x22fb60: 0x10620008
    ctx->pc = 0x22FB60u;
    {
        const bool branch_taken_0x22fb60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22FB64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16399));
        if (branch_taken_0x22fb60) {
            ctx->pc = 0x22FB84u;
            goto label_22fb84;
        }
    }
    ctx->pc = 0x22FB68u;
    // 0x22fb68: 0x10620006
    ctx->pc = 0x22FB68u;
    {
        const bool branch_taken_0x22fb68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22FB6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
        if (branch_taken_0x22fb68) {
            ctx->pc = 0x22FB84u;
            goto label_22fb84;
        }
    }
    ctx->pc = 0x22FB70u;
    // 0x22fb70: 0x10620004
    ctx->pc = 0x22FB70u;
    {
        const bool branch_taken_0x22fb70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22FB74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22fb70) {
            ctx->pc = 0x22FB84u;
            goto label_22fb84;
        }
    }
    ctx->pc = 0x22FB78u;
    // 0x22fb78: 0x8e25000c
    ctx->pc = 0x22fb78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22fb7c: 0xc093692
    ctx->pc = 0x22FB7Cu;
    SET_GPR_U32(ctx, 31, 0x22FB84u);
    ctx->pc = 0x22FB80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FB84u; }
    }
    if (ctx->pc != 0x22FB84u) { return; }
    ctx->pc = 0x22FB84u;
label_22fb84:
    // 0x22fb84: 0xae20071c
    ctx->pc = 0x22fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1820), GPR_U32(ctx, 0));
    // 0x22fb88: 0x3c020032
    ctx->pc = 0x22fb88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22fb8c: 0x24421500
    ctx->pc = 0x22fb8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5376));
    // 0x22fb90: 0x141880
    ctx->pc = 0x22fb90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
    // 0x22fb94: 0x621821
    ctx->pc = 0x22fb94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fb98: 0x3c10003c
    ctx->pc = 0x22fb98u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x22fb9c: 0x26041b48
    ctx->pc = 0x22fb9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fba0: 0x3c05003a
    ctx->pc = 0x22fba0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22fba4: 0x24a57740
    ctx->pc = 0x22fba4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30528));
    // 0x22fba8: 0x26260698
    ctx->pc = 0x22fba8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1688));
    // 0x22fbac: 0xc0b6252
    ctx->pc = 0x22FBACu;
    SET_GPR_U32(ctx, 31, 0x22FBB4u);
    ctx->pc = 0x22FBB0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FBB4u; }
    }
    if (ctx->pc != 0x22FBB4u) { return; }
    ctx->pc = 0x22FBB4u;
    // 0x22fbb4: 0x26041b48
    ctx->pc = 0x22fbb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fbb8: 0x8e2507cc
    ctx->pc = 0x22fbb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1996)));
    // 0x22fbbc: 0xa0302d
    ctx->pc = 0x22fbbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fbc0: 0xc0b19fe
    ctx->pc = 0x22FBC0u;
    SET_GPR_U32(ctx, 31, 0x22FBC8u);
    ctx->pc = 0x22FBC4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FBC8u; }
    }
    if (ctx->pc != 0x22FBC8u) { return; }
    ctx->pc = 0x22FBC8u;
    // 0x22fbc8: 0x8e240090
    ctx->pc = 0x22fbc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x22fbcc: 0xc084982
    ctx->pc = 0x22FBCCu;
    SET_GPR_U32(ctx, 31, 0x22FBD4u);
    ctx->pc = 0x22FBD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212608u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindMbidxNode_0x212608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FBD4u; }
    }
    if (ctx->pc != 0x22FBD4u) { return; }
    ctx->pc = 0x22FBD4u;
    // 0x22fbd4: 0x40202d
    ctx->pc = 0x22fbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fbd8: 0x50800003
    ctx->pc = 0x22FBD8u;
    {
        const bool branch_taken_0x22fbd8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22fbd8) {
            ctx->pc = 0x22FBDCu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 0));
            ctx->pc = 0x22FBE8u;
            goto label_22fbe8;
        }
    }
    ctx->pc = 0x22FBE0u;
    // 0x22fbe0: 0x8c820000
    ctx->pc = 0x22fbe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22fbe4: 0xae2206a8
    ctx->pc = 0x22fbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 2));
label_22fbe8:
    // 0x22fbe8: 0x3c020032
    ctx->pc = 0x22fbe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22fbec: 0x244214c0
    ctx->pc = 0x22fbecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5312));
    // 0x22fbf0: 0x141880
    ctx->pc = 0x22fbf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
    // 0x22fbf4: 0x621821
    ctx->pc = 0x22fbf4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fbf8: 0x3c10003c
    ctx->pc = 0x22fbf8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x22fbfc: 0x26041b48
    ctx->pc = 0x22fbfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fc00: 0x3c05003a
    ctx->pc = 0x22fc00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22fc04: 0x24a57740
    ctx->pc = 0x22fc04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30528));
    // 0x22fc08: 0x26260698
    ctx->pc = 0x22fc08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1688));
    // 0x22fc0c: 0xc0b6252
    ctx->pc = 0x22FC0Cu;
    SET_GPR_U32(ctx, 31, 0x22FC14u);
    ctx->pc = 0x22FC10u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC14u; }
    }
    if (ctx->pc != 0x22FC14u) { return; }
    ctx->pc = 0x22FC14u;
    // 0x22fc14: 0x26041b48
    ctx->pc = 0x22fc14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fc18: 0x8e2507cc
    ctx->pc = 0x22fc18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1996)));
    // 0x22fc1c: 0xa0302d
    ctx->pc = 0x22fc1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc20: 0xc0b19fe
    ctx->pc = 0x22FC20u;
    SET_GPR_U32(ctx, 31, 0x22FC28u);
    ctx->pc = 0x22FC24u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC28u; }
    }
    if (ctx->pc != 0x22FC28u) { return; }
    ctx->pc = 0x22FC28u;
    // 0x22fc28: 0x8e240090
    ctx->pc = 0x22fc28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x22fc2c: 0xc084982
    ctx->pc = 0x22FC2Cu;
    SET_GPR_U32(ctx, 31, 0x22FC34u);
    ctx->pc = 0x22FC30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212608u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindMbidxNode_0x212608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC34u; }
    }
    if (ctx->pc != 0x22FC34u) { return; }
    ctx->pc = 0x22FC34u;
    // 0x22fc34: 0x40202d
    ctx->pc = 0x22fc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc38: 0x50800003
    ctx->pc = 0x22FC38u;
    {
        const bool branch_taken_0x22fc38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22fc38) {
            ctx->pc = 0x22FC3Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 1700), GPR_U32(ctx, 0));
            ctx->pc = 0x22FC48u;
            goto label_22fc48;
        }
    }
    ctx->pc = 0x22FC40u;
    // 0x22fc40: 0x8c820000
    ctx->pc = 0x22fc40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22fc44: 0xae2206a4
    ctx->pc = 0x22fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1700), GPR_U32(ctx, 2));
label_22fc48:
    // 0x22fc48: 0x3c10003c
    ctx->pc = 0x22fc48u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x22fc4c: 0x26041b48
    ctx->pc = 0x22fc4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fc50: 0x3c05003a
    ctx->pc = 0x22fc50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22fc54: 0x24a57748
    ctx->pc = 0x22fc54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30536));
    // 0x22fc58: 0xc0b6252
    ctx->pc = 0x22FC58u;
    SET_GPR_U32(ctx, 31, 0x22FC60u);
    ctx->pc = 0x22FC5Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1688));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC60u; }
    }
    if (ctx->pc != 0x22FC60u) { return; }
    ctx->pc = 0x22FC60u;
    // 0x22fc60: 0x26041b48
    ctx->pc = 0x22fc60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fc64: 0x8e2507cc
    ctx->pc = 0x22fc64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1996)));
    // 0x22fc68: 0xa0302d
    ctx->pc = 0x22fc68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc6c: 0xc0b19fe
    ctx->pc = 0x22FC6Cu;
    SET_GPR_U32(ctx, 31, 0x22FC74u);
    ctx->pc = 0x22FC70u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC74u; }
    }
    if (ctx->pc != 0x22FC74u) { return; }
    ctx->pc = 0x22FC74u;
    // 0x22fc74: 0x4420005
    ctx->pc = 0x22FC74u;
    {
        const bool branch_taken_0x22fc74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22fc74) {
            ctx->pc = 0x22FC78u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x22FC8Cu;
            goto label_22fc8c;
        }
    }
    ctx->pc = 0x22FC7Cu;
    // 0x22fc7c: 0x8e240090
    ctx->pc = 0x22fc7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x22fc80: 0xc084982
    ctx->pc = 0x22FC80u;
    SET_GPR_U32(ctx, 31, 0x22FC88u);
    ctx->pc = 0x22FC84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212608u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindMbidxNode_0x212608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FC88u; }
    }
    if (ctx->pc != 0x22FC88u) { return; }
    ctx->pc = 0x22FC88u;
    // 0x22fc88: 0x40202d
    ctx->pc = 0x22fc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22fc8c:
    // 0x22fc8c: 0x5080000a
    ctx->pc = 0x22FC8Cu;
    {
        const bool branch_taken_0x22fc8c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22fc8c) {
            ctx->pc = 0x22FC90u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 0));
            ctx->pc = 0x22FCB8u;
            goto label_22fcb8;
        }
    }
    ctx->pc = 0x22FC94u;
    // 0x22fc94: 0x8c820000
    ctx->pc = 0x22fc94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22fc98: 0xae2206b0
    ctx->pc = 0x22fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 2));
    // 0x22fc9c: 0x8c840000
    ctx->pc = 0x22fc9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22fca0: 0x3c050080
    ctx->pc = 0x22fca0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x22fca4: 0x34a50810
    ctx->pc = 0x22fca4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 2064));
    // 0x22fca8: 0xc0b41b8
    ctx->pc = 0x22FCA8u;
    SET_GPR_U32(ctx, 31, 0x22FCB0u);
    ctx->pc = 0x22FCACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCB0u; }
    }
    if (ctx->pc != 0x22FCB0u) { return; }
    ctx->pc = 0x22FCB0u;
    // 0x22fcb0: 0x10000002
    ctx->pc = 0x22FCB0u;
    {
        const bool branch_taken_0x22fcb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22FCB4u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x22fcb0) {
            ctx->pc = 0x22FCBCu;
            goto label_22fcbc;
        }
    }
    ctx->pc = 0x22FCB8u;
label_22fcb8:
    // 0x22fcb8: 0x3c10003c
    ctx->pc = 0x22fcb8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_22fcbc:
    // 0x22fcbc: 0x26041b48
    ctx->pc = 0x22fcbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fcc0: 0x3c05003a
    ctx->pc = 0x22fcc0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22fcc4: 0x24a57758
    ctx->pc = 0x22fcc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30552));
    // 0x22fcc8: 0xc0b6252
    ctx->pc = 0x22FCC8u;
    SET_GPR_U32(ctx, 31, 0x22FCD0u);
    ctx->pc = 0x22FCCCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1688));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCD0u; }
    }
    if (ctx->pc != 0x22FCD0u) { return; }
    ctx->pc = 0x22FCD0u;
    // 0x22fcd0: 0x26041b48
    ctx->pc = 0x22fcd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fcd4: 0x8e2507cc
    ctx->pc = 0x22fcd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1996)));
    // 0x22fcd8: 0xa0302d
    ctx->pc = 0x22fcd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcdc: 0xc0b19fe
    ctx->pc = 0x22FCDCu;
    SET_GPR_U32(ctx, 31, 0x22FCE4u);
    ctx->pc = 0x22FCE0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCE4u; }
    }
    if (ctx->pc != 0x22FCE4u) { return; }
    ctx->pc = 0x22FCE4u;
    // 0x22fce4: 0x8e240090
    ctx->pc = 0x22fce4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x22fce8: 0xc084982
    ctx->pc = 0x22FCE8u;
    SET_GPR_U32(ctx, 31, 0x22FCF0u);
    ctx->pc = 0x22FCECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212608u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindMbidxNode_0x212608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FCF0u; }
    }
    if (ctx->pc != 0x22FCF0u) { return; }
    ctx->pc = 0x22FCF0u;
    // 0x22fcf0: 0x40202d
    ctx->pc = 0x22fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcf4: 0x50800003
    ctx->pc = 0x22FCF4u;
    {
        const bool branch_taken_0x22fcf4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22fcf4) {
            ctx->pc = 0x22FCF8u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 1708), GPR_U32(ctx, 0));
            ctx->pc = 0x22FD04u;
            goto label_22fd04;
        }
    }
    ctx->pc = 0x22FCFCu;
    // 0x22fcfc: 0x8c820000
    ctx->pc = 0x22fcfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22fd00: 0xae2206ac
    ctx->pc = 0x22fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1708), GPR_U32(ctx, 2));
label_22fd04:
    // 0x22fd04: 0x3c10003c
    ctx->pc = 0x22fd04u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x22fd08: 0x26041b48
    ctx->pc = 0x22fd08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fd0c: 0x3c05003a
    ctx->pc = 0x22fd0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22fd10: 0x24a57760
    ctx->pc = 0x22fd10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30560));
    // 0x22fd14: 0xc0b6252
    ctx->pc = 0x22FD14u;
    SET_GPR_U32(ctx, 31, 0x22FD1Cu);
    ctx->pc = 0x22FD18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1688));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD1Cu; }
    }
    if (ctx->pc != 0x22FD1Cu) { return; }
    ctx->pc = 0x22FD1Cu;
    // 0x22fd1c: 0x26041b48
    ctx->pc = 0x22fd1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6984));
    // 0x22fd20: 0x8e2507cc
    ctx->pc = 0x22fd20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1996)));
    // 0x22fd24: 0xa0302d
    ctx->pc = 0x22fd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd28: 0xc0b19fe
    ctx->pc = 0x22FD28u;
    SET_GPR_U32(ctx, 31, 0x22FD30u);
    ctx->pc = 0x22FD2Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD30u; }
    }
    if (ctx->pc != 0x22FD30u) { return; }
    ctx->pc = 0x22FD30u;
    // 0x22fd30: 0x8e240090
    ctx->pc = 0x22fd30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x22fd34: 0xc084982
    ctx->pc = 0x22FD34u;
    SET_GPR_U32(ctx, 31, 0x22FD3Cu);
    ctx->pc = 0x22FD38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212608u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindMbidxNode_0x212608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FD3Cu; }
    }
    if (ctx->pc != 0x22FD3Cu) { return; }
    ctx->pc = 0x22FD3Cu;
    // 0x22fd3c: 0x40202d
    ctx->pc = 0x22fd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fd40: 0x50800003
    ctx->pc = 0x22FD40u;
    {
        const bool branch_taken_0x22fd40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22fd40) {
            ctx->pc = 0x22FD44u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 0));
            ctx->pc = 0x22FD50u;
            goto label_22fd50;
        }
    }
    ctx->pc = 0x22FD48u;
    // 0x22fd48: 0x8c820000
    ctx->pc = 0x22fd48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22fd4c: 0xae2206b4
    ctx->pc = 0x22fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 2));
label_22fd50:
    // 0x22fd50: 0x3c020034
    ctx->pc = 0x22fd50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22fd54: 0x8c42cda8
    ctx->pc = 0x22fd54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954408)));
    // 0x22fd58: 0x5040004e
    ctx->pc = 0x22FD58u;
    {
        const bool branch_taken_0x22fd58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22fd58) {
            ctx->pc = 0x22FD5Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 1800), GPR_U32(ctx, 0));
            ctx->pc = 0x22FE94u;
            goto label_22fe94;
        }
    }
    ctx->pc = 0x22FD60u;
    // 0x22fd60: 0x8e222ac0
    ctx->pc = 0x22fd60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    // 0x22fd64: 0x28420032
    ctx->pc = 0x22fd64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 50));
    // 0x22fd68: 0x54400003
    ctx->pc = 0x22FD68u;
    {
        const bool branch_taken_0x22fd68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22fd68) {
            ctx->pc = 0x22FD6Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
            ctx->pc = 0x22FD78u;
            goto label_22fd78;
        }
    }
    ctx->pc = 0x22FD70u;
    // 0x22fd70: 0x10000003
    ctx->pc = 0x22FD70u;
    {
        const bool branch_taken_0x22fd70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22FD74u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x22fd70) {
            ctx->pc = 0x22FD80u;
            goto label_22fd80;
        }
    }
    ctx->pc = 0x22FD78u;
label_22fd78:
    // 0x22fd78: 0x2842000a
    ctx->pc = 0x22fd78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 10));
    // 0x22fd7c: 0x38470001
    ctx->pc = 0x22fd7cu;
    SET_GPR_U32(ctx, 7, XOR32(GPR_U32(ctx, 2), 1));
label_22fd80:
    // 0x22fd80: 0x3c020032
    ctx->pc = 0x22fd80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22fd84: 0x24421610
    ctx->pc = 0x22fd84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5648));
    // 0x22fd88: 0x8e24000c
    ctx->pc = 0x22fd88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22fd8c: 0x41880
    ctx->pc = 0x22fd8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x22fd90: 0x621821
    ctx->pc = 0x22fd90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fd94: 0x8c620000
    ctx->pc = 0x22fd94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fd98: 0x54400007
    ctx->pc = 0x22FD98u;
    {
        const bool branch_taken_0x22fd98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22fd98) {
            ctx->pc = 0x22FD9Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
            ctx->pc = 0x22FDB8u;
            goto label_22fdb8;
        }
    }
    ctx->pc = 0x22FDA0u;
    // 0x22fda0: 0x28820008
    ctx->pc = 0x22fda0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x22fda4: 0x10400004
    ctx->pc = 0x22FDA4u;
    {
        const bool branch_taken_0x22fda4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22FDA8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x22fda4) {
            ctx->pc = 0x22FDB8u;
            goto label_22fdb8;
        }
    }
    ctx->pc = 0x22FDACu;
    // 0x22fdac: 0x8e220104
    ctx->pc = 0x22fdacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x22fdb0: 0x10400007
    ctx->pc = 0x22FDB0u;
    {
        const bool branch_taken_0x22fdb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22FDB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22fdb0) {
            ctx->pc = 0x22FDD0u;
            goto label_22fdd0;
        }
    }
    ctx->pc = 0x22FDB8u;
label_22fdb8:
    // 0x22fdb8: 0x24841b48
    ctx->pc = 0x22fdb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x22fdbc: 0x3c05003a
    ctx->pc = 0x22fdbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22fdc0: 0xc0b6252
    ctx->pc = 0x22FDC0u;
    SET_GPR_U32(ctx, 31, 0x22FDC8u);
    ctx->pc = 0x22FDC4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30568));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FDC8u; }
    }
    if (ctx->pc != 0x22FDC8u) { return; }
    ctx->pc = 0x22FDC8u;
    // 0x22fdc8: 0x1000000c
    ctx->pc = 0x22FDC8u;
    {
        const bool branch_taken_0x22fdc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22FDCCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x22fdc8) {
            ctx->pc = 0x22FDFCu;
            goto label_22fdfc;
        }
    }
    ctx->pc = 0x22FDD0u;
label_22fdd0:
    // 0x22fdd0: 0x24421480
    ctx->pc = 0x22fdd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5248));
    // 0x22fdd4: 0x151880
    ctx->pc = 0x22fdd4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
    // 0x22fdd8: 0x621821
    ctx->pc = 0x22fdd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fddc: 0x3c04003c
    ctx->pc = 0x22fddcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x22fde0: 0x24841b48
    ctx->pc = 0x22fde0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x22fde4: 0x3c05003a
    ctx->pc = 0x22fde4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22fde8: 0x24a57778
    ctx->pc = 0x22fde8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30584));
    // 0x22fdec: 0x8c660000
    ctx->pc = 0x22fdecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fdf0: 0xc0b6252
    ctx->pc = 0x22FDF0u;
    SET_GPR_U32(ctx, 31, 0x22FDF8u);
    ctx->pc = 0x22FDF4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FDF8u; }
    }
    if (ctx->pc != 0x22FDF8u) { return; }
    ctx->pc = 0x22FDF8u;
    // 0x22fdf8: 0x3c04003c
    ctx->pc = 0x22fdf8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_22fdfc:
    // 0x22fdfc: 0x24841b48
    ctx->pc = 0x22fdfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x22fe00: 0x8e2507cc
    ctx->pc = 0x22fe00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1996)));
    // 0x22fe04: 0xa0302d
    ctx->pc = 0x22fe04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe08: 0xc0b19fe
    ctx->pc = 0x22FE08u;
    SET_GPR_U32(ctx, 31, 0x22FE10u);
    ctx->pc = 0x22FE0Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FE10u; }
    }
    if (ctx->pc != 0x22FE10u) { return; }
    ctx->pc = 0x22FE10u;
    // 0x22fe10: 0x40202d
    ctx->pc = 0x22fe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe14: 0x282d
    ctx->pc = 0x22fe14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe18: 0x8e2606a8
    ctx->pc = 0x22fe18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 1704)));
    // 0x22fe1c: 0xc0b2236
    ctx->pc = 0x22FE1Cu;
    SET_GPR_U32(ctx, 31, 0x22FE24u);
    ctx->pc = 0x22FE20u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2064));
    ctx->pc = 0x2C88D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewObject_0x2c88d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FE24u; }
    }
    if (ctx->pc != 0x22FE24u) { return; }
    ctx->pc = 0x22FE24u;
    // 0x22fe24: 0x40202d
    ctx->pc = 0x22fe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe28: 0xae2406b8
    ctx->pc = 0x22fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 4));
    // 0x22fe2c: 0x2402ffff
    ctx->pc = 0x22fe2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fe30: 0xae2207d0
    ctx->pc = 0x22fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2000), GPR_U32(ctx, 2));
    // 0x22fe34: 0x8e230008
    ctx->pc = 0x22fe34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22fe38: 0x24020007
    ctx->pc = 0x22fe38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x22fe3c: 0x54620015
    ctx->pc = 0x22FE3Cu;
    {
        const bool branch_taken_0x22fe3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22fe3c) {
            ctx->pc = 0x22FE40u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 1800), GPR_U32(ctx, 0));
            ctx->pc = 0x22FE94u;
            goto label_22fe94;
        }
    }
    ctx->pc = 0x22FE44u;
    // 0x22fe44: 0x8c820060
    ctx->pc = 0x22fe44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x22fe48: 0x3c030400
    ctx->pc = 0x22fe48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
    // 0x22fe4c: 0x431025
    ctx->pc = 0x22fe4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fe50: 0xac820060
    ctx->pc = 0x22fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x22fe54: 0x3c030033
    ctx->pc = 0x22fe54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x22fe58: 0x2463c7d8
    ctx->pc = 0x22fe58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952920));
    // 0x22fe5c: 0x2402004c
    ctx->pc = 0x22fe5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22fe60: 0x2621018
    ctx->pc = 0x22fe60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22fe64: 0x621821
    ctx->pc = 0x22fe64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fe68: 0x8e2407cc
    ctx->pc = 0x22fe68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 1996)));
    // 0x22fe6c: 0x3c05003a
    ctx->pc = 0x22fe6cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22fe70: 0x24a57788
    ctx->pc = 0x22fe70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30600));
    // 0x22fe74: 0x8c660034
    ctx->pc = 0x22fe74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x22fe78: 0x3c07003a
    ctx->pc = 0x22fe78u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x22fe7c: 0x24e77790
    ctx->pc = 0x22fe7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 30608));
    // 0x22fe80: 0x24080005
    ctx->pc = 0x22fe80u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
    // 0x22fe84: 0xc08445c
    ctx->pc = 0x22FE84u;
    SET_GPR_U32(ctx, 31, 0x22FE8Cu);
    ctx->pc = 0x22FE88u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211170u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddSpecialTexmod_0x211170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FE8Cu; }
    }
    if (ctx->pc != 0x22FE8Cu) { return; }
    ctx->pc = 0x22FE8Cu;
    // 0x22fe8c: 0xae2207d0
    ctx->pc = 0x22fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2000), GPR_U32(ctx, 2));
    // 0x22fe90: 0xae200708
    ctx->pc = 0x22fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1800), GPR_U32(ctx, 0));
label_22fe94:
    // 0x22fe94: 0xae200704
    ctx->pc = 0x22fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1796), GPR_U32(ctx, 0));
    // 0x22fe98: 0xae20070c
    ctx->pc = 0x22fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1804), GPR_U32(ctx, 0));
    // 0x22fe9c: 0xae200720
    ctx->pc = 0x22fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1824), GPR_U32(ctx, 0));
    // 0x22fea0: 0xae200768
    ctx->pc = 0x22fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 0));
    // 0x22fea4: 0xae2006bc
    ctx->pc = 0x22fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1724), GPR_U32(ctx, 0));
    // 0x22fea8: 0xae200714
    ctx->pc = 0x22fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1812), GPR_U32(ctx, 0));
    // 0x22feac: 0x2402ffff
    ctx->pc = 0x22feacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22feb0: 0xae220710
    ctx->pc = 0x22feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1808), GPR_U32(ctx, 2));
    // 0x22feb4: 0xae200718
    ctx->pc = 0x22feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1816), GPR_U32(ctx, 0));
    // 0x22feb8: 0x3c04003a
    ctx->pc = 0x22feb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22febc: 0x24847798
    ctx->pc = 0x22febcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30616));
    // 0x22fec0: 0x8e2507cc
    ctx->pc = 0x22fec0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1996)));
    // 0x22fec4: 0xa0302d
    ctx->pc = 0x22fec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fec8: 0xc0b19fe
    ctx->pc = 0x22FEC8u;
    SET_GPR_U32(ctx, 31, 0x22FED0u);
    ctx->pc = 0x22FECCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FED0u; }
    }
    if (ctx->pc != 0x22FED0u) { return; }
    ctx->pc = 0x22FED0u;
    // 0x22fed0: 0x40202d
    ctx->pc = 0x22fed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fed4: 0x3c05003a
    ctx->pc = 0x22fed4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22fed8: 0x24a52550
    ctx->pc = 0x22fed8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x22fedc: 0x302d
    ctx->pc = 0x22fedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fee0: 0xc0b2236
    ctx->pc = 0x22FEE0u;
    SET_GPR_U32(ctx, 31, 0x22FEE8u);
    ctx->pc = 0x22FEE4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x2C88D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewObject_0x2c88d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FEE8u; }
    }
    if (ctx->pc != 0x22FEE8u) { return; }
    ctx->pc = 0x22FEE8u;
    // 0x22fee8: 0xae2206a0
    ctx->pc = 0x22fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1696), GPR_U32(ctx, 2));
    // 0x22feec: 0x2403ffdc
    ctx->pc = 0x22feecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967260));
    // 0x22fef0: 0xa4430068
    ctx->pc = 0x22fef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x22fef4: 0xae2007d4
    ctx->pc = 0x22fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2004), GPR_U32(ctx, 0));
    // 0x22fef8: 0xc08ac2c
    ctx->pc = 0x22FEF8u;
    SET_GPR_U32(ctx, 31, 0x22FF00u);
    ctx->pc = 0x22FEFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetDebugNode_0x22b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF00u; }
    }
    if (ctx->pc != 0x22FF00u) { return; }
    ctx->pc = 0x22FF00u;
    // 0x22ff00: 0x8e240080
    ctx->pc = 0x22ff00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x22ff04: 0x24050002
    ctx->pc = 0x22ff04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ff08: 0xc0b41b8
    ctx->pc = 0x22FF08u;
    SET_GPR_U32(ctx, 31, 0x22FF10u);
    ctx->pc = 0x22FF0Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF10u; }
    }
    if (ctx->pc != 0x22FF10u) { return; }
    ctx->pc = 0x22FF10u;
    // 0x22ff10: 0x8e2406a0
    ctx->pc = 0x22ff10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
    // 0x22ff14: 0x10800010
    ctx->pc = 0x22FF14u;
    {
        const bool branch_taken_0x22ff14 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22FF18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x22ff14) {
            ctx->pc = 0x22FF58u;
            goto label_22ff58;
        }
    }
    ctx->pc = 0x22FF1Cu;
    // 0x22ff1c: 0x8c43e7f0
    ctx->pc = 0x22ff1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x22ff20: 0x2402000c
    ctx->pc = 0x22ff20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ff24: 0x1462000a
    ctx->pc = 0x22FF24u;
    {
        const bool branch_taken_0x22ff24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x22FF28u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x22ff24) {
            ctx->pc = 0x22FF50u;
            goto label_22ff50;
        }
    }
    ctx->pc = 0x22FF2Cu;
    // 0x22ff2c: 0x3c020034
    ctx->pc = 0x22ff2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22ff30: 0x8c43e7f4
    ctx->pc = 0x22ff30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961140)));
    // 0x22ff34: 0x24020008
    ctx->pc = 0x22ff34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x22ff38: 0x14620005
    ctx->pc = 0x22FF38u;
    {
        const bool branch_taken_0x22ff38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22ff38) {
            ctx->pc = 0x22FF50u;
            goto label_22ff50;
        }
    }
    ctx->pc = 0x22FF40u;
    // 0x22ff40: 0xc0b41b8
    ctx->pc = 0x22FF40u;
    SET_GPR_U32(ctx, 31, 0x22FF48u);
    ctx->pc = 0x22FF44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF48u; }
    }
    if (ctx->pc != 0x22FF48u) { return; }
    ctx->pc = 0x22FF48u;
    // 0x22ff48: 0x10000004
    ctx->pc = 0x22FF48u;
    {
        const bool branch_taken_0x22ff48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22FF4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x22ff48) {
            ctx->pc = 0x22FF5Cu;
            goto label_22ff5c;
        }
    }
    ctx->pc = 0x22FF50u;
label_22ff50:
    // 0x22ff50: 0xc0b41b8
    ctx->pc = 0x22FF50u;
    SET_GPR_U32(ctx, 31, 0x22FF58u);
    ctx->pc = 0x22FF54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FF58u; }
    }
    if (ctx->pc != 0x22FF58u) { return; }
    ctx->pc = 0x22FF58u;
label_22ff58:
    // 0x22ff58: 0xdfbf0070
    ctx->pc = 0x22ff58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22ff5c:
    // 0x22ff5c: 0xdfb50060
    ctx->pc = 0x22ff5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ff60: 0xdfb40050
    ctx->pc = 0x22ff60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ff64: 0xdfb30040
    ctx->pc = 0x22ff64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ff68: 0xdfb20030
    ctx->pc = 0x22ff68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ff6c: 0xdfb10020
    ctx->pc = 0x22ff6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ff70: 0xdfb00010
    ctx->pc = 0x22ff70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ff74: 0x3e00008
    ctx->pc = 0x22FF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FF78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F8E8u: goto label_22f8e8;
            case 0x22F910u: goto label_22f910;
            case 0x22F918u: goto label_22f918;
            case 0x22F930u: goto label_22f930;
            case 0x22F994u: goto label_22f994;
            case 0x22F9A0u: goto label_22f9a0;
            case 0x22F9B8u: goto label_22f9b8;
            case 0x22F9D4u: goto label_22f9d4;
            case 0x22FA04u: goto label_22fa04;
            case 0x22FA30u: goto label_22fa30;
            case 0x22FA60u: goto label_22fa60;
            case 0x22FA7Cu: goto label_22fa7c;
            case 0x22FA80u: goto label_22fa80;
            case 0x22FB28u: goto label_22fb28;
            case 0x22FB84u: goto label_22fb84;
            case 0x22FBE8u: goto label_22fbe8;
            case 0x22FC48u: goto label_22fc48;
            case 0x22FC8Cu: goto label_22fc8c;
            case 0x22FCB8u: goto label_22fcb8;
            case 0x22FCBCu: goto label_22fcbc;
            case 0x22FD04u: goto label_22fd04;
            case 0x22FD50u: goto label_22fd50;
            case 0x22FD78u: goto label_22fd78;
            case 0x22FD80u: goto label_22fd80;
            case 0x22FDB8u: goto label_22fdb8;
            case 0x22FDD0u: goto label_22fdd0;
            case 0x22FDFCu: goto label_22fdfc;
            case 0x22FE94u: goto label_22fe94;
            case 0x22FF50u: goto label_22ff50;
            case 0x22FF58u: goto label_22ff58;
            case 0x22FF5Cu: goto label_22ff5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22FF7Cu;
}
