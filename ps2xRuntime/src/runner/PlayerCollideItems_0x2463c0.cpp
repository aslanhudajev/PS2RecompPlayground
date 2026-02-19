#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerCollideItems
// Address: 0x2463c0 - 0x2465d0
void PlayerCollideItems_0x2463c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2463c0u;

    // 0x2463c0: 0x27bdff20
    ctx->pc = 0x2463c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2463c4: 0xffbf00a0
    ctx->pc = 0x2463c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2463c8: 0xffbe0090
    ctx->pc = 0x2463c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2463cc: 0xffb70080
    ctx->pc = 0x2463ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2463d0: 0xffb60070
    ctx->pc = 0x2463d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2463d4: 0xffb50060
    ctx->pc = 0x2463d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2463d8: 0xffb40050
    ctx->pc = 0x2463d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2463dc: 0xffb30040
    ctx->pc = 0x2463dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2463e0: 0xffb20030
    ctx->pc = 0x2463e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2463e4: 0xffb10020
    ctx->pc = 0x2463e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2463e8: 0xffb00010
    ctx->pc = 0x2463e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2463ec: 0xe7b800d0
    ctx->pc = 0x2463ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2463f0: 0xe7b700c8
    ctx->pc = 0x2463f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2463f4: 0xe7b600c0
    ctx->pc = 0x2463f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2463f8: 0xe7b500b8
    ctx->pc = 0x2463f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2463fc: 0xe7b400b0
    ctx->pc = 0x2463fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x246400: 0x80982d
    ctx->pc = 0x246400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246404: 0xa0f02d
    ctx->pc = 0x246404u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246408: 0xc0a02d
    ctx->pc = 0x246408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24640c: 0xe0882d
    ctx->pc = 0x24640cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246410: 0x46006546
    ctx->pc = 0x246410u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x246414: 0x46006dc6
    ctx->pc = 0x246414u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x246418: 0x100a82d
    ctx->pc = 0x246418u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24641c: 0x120b82d
    ctx->pc = 0x24641cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246420: 0xb02d
    ctx->pc = 0x246420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246424: 0x4480b000
    ctx->pc = 0x246424u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x246428: 0x3c020036
    ctx->pc = 0x246428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x24642c: 0x8c42d934
    ctx->pc = 0x24642cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x246430: 0x2442ffd6
    ctx->pc = 0x246430u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967254));
    // 0x246434: 0x2c420002
    ctx->pc = 0x246434u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x246438: 0x10400008
    ctx->pc = 0x246438u;
    {
        const bool branch_taken_0x246438 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24643Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x246438) {
            ctx->pc = 0x24645Cu;
            goto label_24645c;
        }
    }
    ctx->pc = 0x246440u;
    // 0x246440: 0x3c014248
    ctx->pc = 0x246440u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x246444: 0x44816000
    ctx->pc = 0x246444u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x246448: 0x280202d
    ctx->pc = 0x246448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24644c: 0xc0a0120
    ctx->pc = 0x24644Cu;
    SET_GPR_U32(ctx, 31, 0x246454u);
    ctx->pc = 0x246450u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246454u; }
    }
    if (ctx->pc != 0x246454u) { return; }
    ctx->pc = 0x246454u;
    // 0x246454: 0x10000004
    ctx->pc = 0x246454u;
    {
        const bool branch_taken_0x246454 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x246454) {
            ctx->pc = 0x246468u;
            goto label_246468;
        }
    }
    ctx->pc = 0x24645Cu;
label_24645c:
    // 0x24645c: 0x280202d
    ctx->pc = 0x24645cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246460: 0xc0a0120
    ctx->pc = 0x246460u;
    SET_GPR_U32(ctx, 31, 0x246468u);
    ctx->pc = 0x246464u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246468u; }
    }
    if (ctx->pc != 0x246468u) { return; }
    ctx->pc = 0x246468u;
label_246468:
    // 0x246468: 0x4480c000
    ctx->pc = 0x246468u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 0);
    // 0x24646c: 0x1000003e
    ctx->pc = 0x24646Cu;
    {
        const bool branch_taken_0x24646c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x24646c) {
            ctx->pc = 0x246568u;
            goto label_246568;
        }
    }
    ctx->pc = 0x246474u;
    // 0x246474: 0x0
    ctx->pc = 0x246474u;
    // NOP
label_246478:
    // 0x246478: 0x441818
    ctx->pc = 0x246478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24647c: 0x3c040034
    ctx->pc = 0x24647cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x246480: 0x8c82cd94
    ctx->pc = 0x246480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294954388)));
    // 0x246484: 0x628021
    ctx->pc = 0x246484u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246488: 0xc0918d4
    ctx->pc = 0x246488u;
    SET_GPR_U32(ctx, 31, 0x246490u);
    ctx->pc = 0x24648Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x246350u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerSkipItem_0x246350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246490u; }
    }
    if (ctx->pc != 0x246490u) { return; }
    ctx->pc = 0x246490u;
    // 0x246490: 0x14400035
    ctx->pc = 0x246490u;
    {
        const bool branch_taken_0x246490 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x246494u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x246490) {
            ctx->pc = 0x246568u;
            goto label_246568;
        }
    }
    ctx->pc = 0x246498u;
    // 0x246498: 0x3c0282d
    ctx->pc = 0x246498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24649c: 0x280302d
    ctx->pc = 0x24649cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2464a0: 0x3a0382d
    ctx->pc = 0x2464a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2464a4: 0x4600ab06
    ctx->pc = 0x2464a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2464a8: 0xc095e6c
    ctx->pc = 0x2464A8u;
    SET_GPR_U32(ctx, 31, 0x2464B0u);
    ctx->pc = 0x2464ACu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2579B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollSub_0x2579b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2464B0u; }
    }
    if (ctx->pc != 0x2464B0u) { return; }
    ctx->pc = 0x2464B0u;
    // 0x2464b0: 0x46000506
    ctx->pc = 0x2464b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2464b4: 0x4614c036
    ctx->pc = 0x2464b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2464b8: 0x0
    ctx->pc = 0x2464b8u;
    // NOP
    // 0x2464bc: 0x4500002a
    ctx->pc = 0x2464BCu;
    {
        const bool branch_taken_0x2464bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2464C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2464bc) {
            ctx->pc = 0x246568u;
            goto label_246568;
        }
    }
    ctx->pc = 0x2464C4u;
    // 0x2464c4: 0xc0965cc
    ctx->pc = 0x2464C4u;
    SET_GPR_U32(ctx, 31, 0x2464CCu);
    ctx->pc = 0x2464C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x259730u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerItemCollision_0x259730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2464CCu; }
    }
    if (ctx->pc != 0x2464CCu) { return; }
    ctx->pc = 0x2464CCu;
    // 0x2464cc: 0x40202d
    ctx->pc = 0x2464ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2464d0: 0x1080000b
    ctx->pc = 0x2464D0u;
    {
        const bool branch_taken_0x2464d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2464D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2464d0) {
            ctx->pc = 0x246500u;
            goto label_246500;
        }
    }
    ctx->pc = 0x2464D8u;
    // 0x2464d8: 0x38820001
    ctx->pc = 0x2464d8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 1));
    // 0x2464dc: 0x62900a
    ctx->pc = 0x2464dcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
    // 0x2464e0: 0x8e020000
    ctx->pc = 0x2464e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2464e4: 0x8c430000
    ctx->pc = 0x2464e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2464e8: 0x24020009
    ctx->pc = 0x2464e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2464ec: 0x10620003
    ctx->pc = 0x2464ECu;
    {
        const bool branch_taken_0x2464ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2464F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x2464ec) {
            ctx->pc = 0x2464FCu;
            goto label_2464fc;
        }
    }
    ctx->pc = 0x2464F4u;
    // 0x2464f4: 0x14620002
    ctx->pc = 0x2464F4u;
    {
        const bool branch_taken_0x2464f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2464f4) {
            ctx->pc = 0x246500u;
            goto label_246500;
        }
    }
    ctx->pc = 0x2464FCu;
label_2464fc:
    // 0x2464fc: 0xae700884
    ctx->pc = 0x2464fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2180), GPR_U32(ctx, 16));
label_246500:
    // 0x246500: 0x52c0000d
    ctx->pc = 0x246500u;
    {
        const bool branch_taken_0x246500 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x246500) {
            ctx->pc = 0x246504u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x246538u;
            goto label_246538;
        }
    }
    ctx->pc = 0x246508u;
    // 0x246508: 0x4616a034
    ctx->pc = 0x246508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24650c: 0x0
    ctx->pc = 0x24650cu;
    // NOP
    // 0x246510: 0x45030009
    ctx->pc = 0x246510u;
    {
        const bool branch_taken_0x246510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246510) {
            ctx->pc = 0x246514u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x246538u;
            goto label_246538;
        }
    }
    ctx->pc = 0x246518u;
    // 0x246518: 0x10800013
    ctx->pc = 0x246518u;
    {
        const bool branch_taken_0x246518 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x246518) {
            ctx->pc = 0x246568u;
            goto label_246568;
        }
    }
    ctx->pc = 0x246520u;
    // 0x246520: 0x8e020000
    ctx->pc = 0x246520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246524: 0x8c430000
    ctx->pc = 0x246524u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246528: 0x2402000a
    ctx->pc = 0x246528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x24652c: 0x1462000e
    ctx->pc = 0x24652Cu;
    {
        const bool branch_taken_0x24652c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x24652c) {
            ctx->pc = 0x246568u;
            goto label_246568;
        }
    }
    ctx->pc = 0x246534u;
    // 0x246534: 0x200b02d
    ctx->pc = 0x246534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246538:
    // 0x246538: 0x12200007
    ctx->pc = 0x246538u;
    {
        const bool branch_taken_0x246538 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x24653Cu;
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x246538) {
            ctx->pc = 0x246558u;
            goto label_246558;
        }
    }
    ctx->pc = 0x246540u;
    // 0x246540: 0xc7a00000
    ctx->pc = 0x246540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246544: 0xe6200000
    ctx->pc = 0x246544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x246548: 0xc7a00004
    ctx->pc = 0x246548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24654c: 0xe6200004
    ctx->pc = 0x24654cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x246550: 0xc7a00008
    ctx->pc = 0x246550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246554: 0xe6200008
    ctx->pc = 0x246554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_246558:
    // 0x246558: 0x12a00003
    ctx->pc = 0x246558u;
    {
        const bool branch_taken_0x246558 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x246558) {
            ctx->pc = 0x246568u;
            goto label_246568;
        }
    }
    ctx->pc = 0x246560u;
    // 0x246560: 0x16400005
    ctx->pc = 0x246560u;
    {
        const bool branch_taken_0x246560 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x246560) {
            ctx->pc = 0x246578u;
            goto label_246578;
        }
    }
    ctx->pc = 0x246568u;
label_246568:
    // 0x246568: 0xc0a015a
    ctx->pc = 0x246568u;
    SET_GPR_U32(ctx, 31, 0x246570u);
    ctx->pc = 0x280568u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridItem_0x280568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246570u; }
    }
    if (ctx->pc != 0x246570u) { return; }
    ctx->pc = 0x246570u;
    // 0x246570: 0x441ffc1
    ctx->pc = 0x246570u;
    {
        const bool branch_taken_0x246570 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x246574u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 272));
        if (branch_taken_0x246570) {
            ctx->pc = 0x246478u;
            goto label_246478;
        }
    }
    ctx->pc = 0x246578u;
label_246578:
    // 0x246578: 0x52a00001
    ctx->pc = 0x246578u;
    {
        const bool branch_taken_0x246578 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x246578) {
            ctx->pc = 0x24657Cu;
            WRITE32(ADD32(GPR_U32(ctx, 19), 2176), GPR_U32(ctx, 22));
            ctx->pc = 0x246580u;
            goto label_246580;
        }
    }
    ctx->pc = 0x246580u;
label_246580:
    // 0x246580: 0x56e00001
    ctx->pc = 0x246580u;
    {
        const bool branch_taken_0x246580 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        if (branch_taken_0x246580) {
            ctx->pc = 0x246584u;
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 22));
            ctx->pc = 0x246588u;
            goto label_246588;
        }
    }
    ctx->pc = 0x246588u;
label_246588:
    // 0x246588: 0x240102d
    ctx->pc = 0x246588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24658c: 0xdfbf00a0
    ctx->pc = 0x24658cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x246590: 0xdfbe0090
    ctx->pc = 0x246590u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x246594: 0xdfb70080
    ctx->pc = 0x246594u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x246598: 0xdfb60070
    ctx->pc = 0x246598u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24659c: 0xdfb50060
    ctx->pc = 0x24659cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2465a0: 0xdfb40050
    ctx->pc = 0x2465a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2465a4: 0xdfb30040
    ctx->pc = 0x2465a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2465a8: 0xdfb20030
    ctx->pc = 0x2465a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2465ac: 0xdfb10020
    ctx->pc = 0x2465acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2465b0: 0xdfb00010
    ctx->pc = 0x2465b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2465b4: 0xc7b800d0
    ctx->pc = 0x2465b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2465b8: 0xc7b700c8
    ctx->pc = 0x2465b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2465bc: 0xc7b600c0
    ctx->pc = 0x2465bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2465c0: 0xc7b500b8
    ctx->pc = 0x2465c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2465c4: 0xc7b400b0
    ctx->pc = 0x2465c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2465c8: 0x3e00008
    ctx->pc = 0x2465C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2465CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24645Cu: goto label_24645c;
            case 0x246468u: goto label_246468;
            case 0x246478u: goto label_246478;
            case 0x2464FCu: goto label_2464fc;
            case 0x246500u: goto label_246500;
            case 0x246538u: goto label_246538;
            case 0x246558u: goto label_246558;
            case 0x246568u: goto label_246568;
            case 0x246578u: goto label_246578;
            case 0x246580u: goto label_246580;
            case 0x246588u: goto label_246588;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2465D0u;
}
