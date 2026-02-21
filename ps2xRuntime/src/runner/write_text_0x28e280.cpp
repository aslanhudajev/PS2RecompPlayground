#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: write_text
// Address: 0x28e280 - 0x28e870
void write_text_0x28e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28e280u;

    // 0x28e280: 0x27bdff40
    ctx->pc = 0x28e280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x28e284: 0xffbf00b0
    ctx->pc = 0x28e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x28e288: 0xffbe00a0
    ctx->pc = 0x28e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x28e28c: 0xffb70090
    ctx->pc = 0x28e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x28e290: 0xffb60080
    ctx->pc = 0x28e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x28e294: 0xffb50070
    ctx->pc = 0x28e294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x28e298: 0xffb40060
    ctx->pc = 0x28e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x28e29c: 0xffb30050
    ctx->pc = 0x28e29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x28e2a0: 0xffb20040
    ctx->pc = 0x28e2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x28e2a4: 0xffb10030
    ctx->pc = 0x28e2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x28e2a8: 0xffb00020
    ctx->pc = 0x28e2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x28e2ac: 0x3c020035
    ctx->pc = 0x28e2acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e2b0: 0x8c43e194
    ctx->pc = 0x28e2b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959508)));
    // 0x28e2b4: 0x2402001c
    ctx->pc = 0x28e2b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x28e2b8: 0x621818
    ctx->pc = 0x28e2b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28e2bc: 0x3c020035
    ctx->pc = 0x28e2bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e2c0: 0x2442c578
    ctx->pc = 0x28e2c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952312));
    // 0x28e2c4: 0x628021
    ctx->pc = 0x28e2c4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e2c8: 0x3c020035
    ctx->pc = 0x28e2c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e2cc: 0x8c42e1a0
    ctx->pc = 0x28e2ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959520)));
    // 0x28e2d0: 0x34571000
    ctx->pc = 0x28e2d0u;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 2), 4096));
    // 0x28e2d4: 0x3c040032
    ctx->pc = 0x28e2d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x28e2d8: 0x24841bc0
    ctx->pc = 0x28e2d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7104));
    // 0x28e2dc: 0x3c020035
    ctx->pc = 0x28e2dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e2e0: 0x8c42e198
    ctx->pc = 0x28e2e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959512)));
    // 0x28e2e4: 0x24032b00
    ctx->pc = 0x28e2e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28e2e8: 0x431018
    ctx->pc = 0x28e2e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28e2ec: 0x441021
    ctx->pc = 0x28e2ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28e2f0: 0x8c54000c
    ctx->pc = 0x28e2f0u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28e2f4: 0x8c420004
    ctx->pc = 0x28e2f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e2f8: 0xafa20008
    ctx->pc = 0x28e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x28e2fc: 0x3c020031
    ctx->pc = 0x28e2fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28e300: 0x8c420018
    ctx->pc = 0x28e300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x28e304: 0x30428000
    ctx->pc = 0x28e304u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x28e308: 0x10400005
    ctx->pc = 0x28E308u;
    {
        const bool branch_taken_0x28e308 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E30Cu;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28e308) {
            ctx->pc = 0x28E320u;
            goto label_28e320;
        }
    }
    ctx->pc = 0x28E310u;
    // 0x28e310: 0x3c020035
    ctx->pc = 0x28e310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e314: 0x8c42a2d8
    ctx->pc = 0x28e314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943448)));
    // 0x28e318: 0x1440014a
    ctx->pc = 0x28E318u;
    {
        const bool branch_taken_0x28e318 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28E31Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x28e318) {
            ctx->pc = 0x28E844u;
            goto label_28e844;
        }
    }
    ctx->pc = 0x28E320u;
label_28e320:
    // 0x28e320: 0x8e020010
    ctx->pc = 0x28e320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28e324: 0x4400147
    ctx->pc = 0x28E324u;
    {
        const bool branch_taken_0x28e324 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28E328u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x28e324) {
            ctx->pc = 0x28E844u;
            goto label_28e844;
        }
    }
    ctx->pc = 0x28E32Cu;
    // 0x28e32c: 0xc0b1444
    ctx->pc = 0x28E32Cu;
    SET_GPR_U32(ctx, 31, 0x28E334u);
    ctx->pc = 0x28E330u;
    SET_GPR_U32(ctx, 4, ((uint32_t)512 << 16));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E334u; }
    }
    if (ctx->pc != 0x28E334u) { return; }
    ctx->pc = 0x28E334u;
    // 0x28e334: 0xafa2000c
    ctx->pc = 0x28e334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x28e338: 0x3c020035
    ctx->pc = 0x28e338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e33c: 0x8c43e194
    ctx->pc = 0x28e33cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959508)));
    // 0x28e340: 0x24020065
    ctx->pc = 0x28e340u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
    // 0x28e344: 0x146200c7
    ctx->pc = 0x28E344u;
    {
        const bool branch_taken_0x28e344 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28E348u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28e344) {
            ctx->pc = 0x28E664u;
            goto label_28e664;
        }
    }
    ctx->pc = 0x28E34Cu;
    // 0x28e34c: 0x3c020035
    ctx->pc = 0x28e34cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e350: 0x8c44e1ac
    ctx->pc = 0x28e350u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959532)));
    // 0x28e354: 0x2882000a
    ctx->pc = 0x28e354u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 10));
    // 0x28e358: 0x144000c2
    ctx->pc = 0x28E358u;
    {
        const bool branch_taken_0x28e358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28E35Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28e358) {
            ctx->pc = 0x28E664u;
            goto label_28e664;
        }
    }
    ctx->pc = 0x28E360u;
    // 0x28e360: 0x2402000a
    ctx->pc = 0x28e360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x28e364: 0x82001a
    ctx->pc = 0x28e364u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x28e368: 0x1812
    ctx->pc = 0x28e368u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x28e36c: 0x50400001
    ctx->pc = 0x28E36Cu;
    {
        const bool branch_taken_0x28e36c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28e36c) {
            ctx->pc = 0x28E370u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28E374u;
            goto label_28e374;
        }
    }
    ctx->pc = 0x28E374u;
label_28e374:
    // 0x28e374: 0x24020063
    ctx->pc = 0x28e374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x28e378: 0x14820007
    ctx->pc = 0x28E378u;
    {
        const bool branch_taken_0x28e378 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x28E37Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x28e378) {
            ctx->pc = 0x28E398u;
            goto label_28e398;
        }
    }
    ctx->pc = 0x28E380u;
    // 0x28e380: 0x24040015
    ctx->pc = 0x28e380u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    // 0x28e384: 0x282d
    ctx->pc = 0x28e384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e388: 0xc08065e
    ctx->pc = 0x28E388u;
    SET_GPR_U32(ctx, 31, 0x28E390u);
    ctx->pc = 0x28E38Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E390u; }
    }
    if (ctx->pc != 0x28E390u) { return; }
    ctx->pc = 0x28E390u;
    // 0x28e390: 0x10000008
    ctx->pc = 0x28E390u;
    {
        const bool branch_taken_0x28e390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E394u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e390) {
            ctx->pc = 0x28E3B4u;
            goto label_28e3b4;
        }
    }
    ctx->pc = 0x28E398u;
label_28e398:
    // 0x28e398: 0x202d
    ctx->pc = 0x28e398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e39c: 0x280282d
    ctx->pc = 0x28e39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3a0: 0x8fa20010
    ctx->pc = 0x28e3a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e3a4: 0x23043
    ctx->pc = 0x28e3a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28e3a8: 0xc0806a8
    ctx->pc = 0x28E3A8u;
    SET_GPR_U32(ctx, 31, 0x28E3B0u);
    ctx->pc = 0x28E3ACu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringListText_0x201aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3B0u; }
    }
    if (ctx->pc != 0x28E3B0u) { return; }
    ctx->pc = 0x28E3B0u;
    // 0x28e3b0: 0x40a82d
    ctx->pc = 0x28e3b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e3b4:
    // 0x28e3b4: 0x24040002
    ctx->pc = 0x28e3b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x28e3b8: 0x8fa50008
    ctx->pc = 0x28e3b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28e3bc: 0xc08065e
    ctx->pc = 0x28E3BCu;
    SET_GPR_U32(ctx, 31, 0x28E3C4u);
    ctx->pc = 0x28E3C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3C4u; }
    }
    if (ctx->pc != 0x28E3C4u) { return; }
    ctx->pc = 0x28E3C4u;
    // 0x28e3c4: 0x40982d
    ctx->pc = 0x28e3c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3c8: 0x24040003
    ctx->pc = 0x28e3c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x28e3cc: 0x280282d
    ctx->pc = 0x28e3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3d0: 0xc08065e
    ctx->pc = 0x28E3D0u;
    SET_GPR_U32(ctx, 31, 0x28E3D8u);
    ctx->pc = 0x28E3D4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3D8u; }
    }
    if (ctx->pc != 0x28E3D8u) { return; }
    ctx->pc = 0x28E3D8u;
    // 0x28e3d8: 0x40902d
    ctx->pc = 0x28e3d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3dc: 0x24040018
    ctx->pc = 0x28e3dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e3e0: 0x282d
    ctx->pc = 0x28e3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3e4: 0x3c013f80
    ctx->pc = 0x28e3e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e3e8: 0x44816000
    ctx->pc = 0x28e3e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e3ec: 0xc080a62
    ctx->pc = 0x28E3ECu;
    SET_GPR_U32(ctx, 31, 0x28E3F4u);
    ctx->pc = 0x28E3F0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202988u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextHeight_0x202988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3F4u; }
    }
    if (ctx->pc != 0x28E3F4u) { return; }
    ctx->pc = 0x28E3F4u;
    // 0x28e3f4: 0x3c2f021
    ctx->pc = 0x28e3f4u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x28e3f8: 0x3c020031
    ctx->pc = 0x28e3f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28e3fc: 0x8c43f2a4
    ctx->pc = 0x28e3fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963876)));
    // 0x28e400: 0x24020001
    ctx->pc = 0x28e400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e404: 0x14620077
    ctx->pc = 0x28E404u;
    {
        const bool branch_taken_0x28e404 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28E408u;
        SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
        if (branch_taken_0x28e404) {
            ctx->pc = 0x28E5E4u;
            goto label_28e5e4;
        }
    }
    ctx->pc = 0x28E40Cu;
    // 0x28e40c: 0x24040002
    ctx->pc = 0x28e40cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x28e410: 0x3c013f80
    ctx->pc = 0x28e410u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e414: 0x44816000
    ctx->pc = 0x28e414u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e418: 0xc0809f2
    ctx->pc = 0x28E418u;
    SET_GPR_U32(ctx, 31, 0x28E420u);
    ctx->pc = 0x28E41Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E420u; }
    }
    if (ctx->pc != 0x28E420u) { return; }
    ctx->pc = 0x28E420u;
    // 0x28e420: 0x40b02d
    ctx->pc = 0x28e420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e424: 0x24040003
    ctx->pc = 0x28e424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x28e428: 0x3c013f80
    ctx->pc = 0x28e428u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e42c: 0x44816000
    ctx->pc = 0x28e42cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e430: 0xc0809f2
    ctx->pc = 0x28E430u;
    SET_GPR_U32(ctx, 31, 0x28E438u);
    ctx->pc = 0x28E434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E438u; }
    }
    if (ctx->pc != 0x28E438u) { return; }
    ctx->pc = 0x28E438u;
    // 0x28e438: 0x40982d
    ctx->pc = 0x28e438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e43c: 0x24040018
    ctx->pc = 0x28e43cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e440: 0x3c013f80
    ctx->pc = 0x28e440u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e444: 0x44816000
    ctx->pc = 0x28e444u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e448: 0xc0809f2
    ctx->pc = 0x28E448u;
    SET_GPR_U32(ctx, 31, 0x28E450u);
    ctx->pc = 0x28E44Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E450u; }
    }
    if (ctx->pc != 0x28E450u) { return; }
    ctx->pc = 0x28E450u;
    // 0x28e450: 0x2673000a
    ctx->pc = 0x28e450u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 10));
    // 0x28e454: 0x2d32021
    ctx->pc = 0x28e454u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x28e458: 0x2442000a
    ctx->pc = 0x28e458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10));
    // 0x28e45c: 0x822021
    ctx->pc = 0x28e45cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28e460: 0x417c2
    ctx->pc = 0x28e460u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 31));
    // 0x28e464: 0x821021
    ctx->pc = 0x28e464u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28e468: 0x21043
    ctx->pc = 0x28e468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28e46c: 0x3c040035
    ctx->pc = 0x28e46cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28e470: 0x8c83e19c
    ctx->pc = 0x28e470u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294959516)));
    // 0x28e474: 0x62a823
    ctx->pc = 0x28e474u;
    SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e478: 0x2fe8823
    ctx->pc = 0x28e478u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
    // 0x28e47c: 0x3c120035
    ctx->pc = 0x28e47cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)53 << 16));
    // 0x28e480: 0x2a0202d
    ctx->pc = 0x28e480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e484: 0x220282d
    ctx->pc = 0x28e484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e488: 0x2406ffff
    ctx->pc = 0x28e488u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e48c: 0x8e47e1a4
    ctx->pc = 0x28e48cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4294959524)));
    // 0x28e490: 0x24080002
    ctx->pc = 0x28e490u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    // 0x28e494: 0xc0807a8
    ctx->pc = 0x28E494u;
    SET_GPR_U32(ctx, 31, 0x28E49Cu);
    ctx->pc = 0x28E498u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E49Cu; }
    }
    if (ctx->pc != 0x28E49Cu) { return; }
    ctx->pc = 0x28E49Cu;
    // 0x28e49c: 0x2b68021
    ctx->pc = 0x28e49cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x28e4a0: 0x2604000a
    ctx->pc = 0x28e4a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10));
    // 0x28e4a4: 0x220282d
    ctx->pc = 0x28e4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4a8: 0x2406ffff
    ctx->pc = 0x28e4a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e4ac: 0x8e47e1a4
    ctx->pc = 0x28e4acu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4294959524)));
    // 0x28e4b0: 0x24080003
    ctx->pc = 0x28e4b0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 3));
    // 0x28e4b4: 0xc0807a8
    ctx->pc = 0x28E4B4u;
    SET_GPR_U32(ctx, 31, 0x28E4BCu);
    ctx->pc = 0x28E4B8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E4BCu; }
    }
    if (ctx->pc != 0x28E4BCu) { return; }
    ctx->pc = 0x28E4BCu;
    // 0x28e4bc: 0x2138021
    ctx->pc = 0x28e4bcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x28e4c0: 0x2604000a
    ctx->pc = 0x28e4c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10));
    // 0x28e4c4: 0x220282d
    ctx->pc = 0x28e4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4c8: 0x2406ffff
    ctx->pc = 0x28e4c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e4cc: 0x8e47e1a4
    ctx->pc = 0x28e4ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4294959524)));
    // 0x28e4d0: 0x24080018
    ctx->pc = 0x28e4d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e4d4: 0xc0807a8
    ctx->pc = 0x28E4D4u;
    SET_GPR_U32(ctx, 31, 0x28E4DCu);
    ctx->pc = 0x28E4D8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E4DCu; }
    }
    if (ctx->pc != 0x28E4DCu) { return; }
    ctx->pc = 0x28E4DCu;
    // 0x28e4dc: 0x3c020035
    ctx->pc = 0x28e4dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e4e0: 0x8c44e19c
    ctx->pc = 0x28e4e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959516)));
    // 0x28e4e4: 0x3c100035
    ctx->pc = 0x28e4e4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x28e4e8: 0x42023
    ctx->pc = 0x28e4e8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28e4ec: 0x2e0282d
    ctx->pc = 0x28e4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4f0: 0x2406ffff
    ctx->pc = 0x28e4f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e4f4: 0x8e47e1a4
    ctx->pc = 0x28e4f4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4294959524)));
    // 0x28e4f8: 0x24080018
    ctx->pc = 0x28e4f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e4fc: 0x24090001
    ctx->pc = 0x28e4fcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e500: 0xc0807a8
    ctx->pc = 0x28E500u;
    SET_GPR_U32(ctx, 31, 0x28E508u);
    ctx->pc = 0x28E504u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 4294959532)));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E508u; }
    }
    if (ctx->pc != 0x28E508u) { return; }
    ctx->pc = 0x28E508u;
    // 0x28e508: 0x8e03e1ac
    ctx->pc = 0x28e508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294959532)));
    // 0x28e50c: 0x24020063
    ctx->pc = 0x28e50cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x28e510: 0x14620004
    ctx->pc = 0x28E510u;
    {
        const bool branch_taken_0x28e510 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28E514u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e510) {
            ctx->pc = 0x28E524u;
            goto label_28e524;
        }
    }
    ctx->pc = 0x28E518u;
    // 0x28e518: 0x24130015
    ctx->pc = 0x28e518u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 21));
    // 0x28e51c: 0x10000006
    ctx->pc = 0x28E51Cu;
    {
        const bool branch_taken_0x28e51c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E520u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e51c) {
            ctx->pc = 0x28E538u;
            goto label_28e538;
        }
    }
    ctx->pc = 0x28E524u;
label_28e524:
    // 0x28e524: 0xc08068c
    ctx->pc = 0x28E524u;
    SET_GPR_U32(ctx, 31, 0x28E52Cu);
    ctx->pc = 0x28E528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringListMsg_0x201a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E52Cu; }
    }
    if (ctx->pc != 0x28E52Cu) { return; }
    ctx->pc = 0x28E52Cu;
    // 0x28e52c: 0x40982d
    ctx->pc = 0x28e52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e530: 0x8fa40010
    ctx->pc = 0x28e530u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e534: 0x49043
    ctx->pc = 0x28e534u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 1));
label_28e538:
    // 0x28e538: 0x260202d
    ctx->pc = 0x28e538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e53c: 0x3c013fa0
    ctx->pc = 0x28e53cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16288 << 16));
    // 0x28e540: 0x44816000
    ctx->pc = 0x28e540u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e544: 0xc0809f2
    ctx->pc = 0x28E544u;
    SET_GPR_U32(ctx, 31, 0x28E54Cu);
    ctx->pc = 0x28E548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E54Cu; }
    }
    if (ctx->pc != 0x28E54Cu) { return; }
    ctx->pc = 0x28E54Cu;
    // 0x28e54c: 0x40b02d
    ctx->pc = 0x28e54cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e550: 0x24040018
    ctx->pc = 0x28e550u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e554: 0x3c013f80
    ctx->pc = 0x28e554u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e558: 0x44816000
    ctx->pc = 0x28e558u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e55c: 0xc0809f2
    ctx->pc = 0x28E55Cu;
    SET_GPR_U32(ctx, 31, 0x28E564u);
    ctx->pc = 0x28E560u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E564u; }
    }
    if (ctx->pc != 0x28E564u) { return; }
    ctx->pc = 0x28E564u;
    // 0x28e564: 0x24420010
    ctx->pc = 0x28e564u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x28e568: 0x2c22021
    ctx->pc = 0x28e568u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x28e56c: 0x3c030035
    ctx->pc = 0x28e56cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28e570: 0x417c2
    ctx->pc = 0x28e570u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 31));
    // 0x28e574: 0x821021
    ctx->pc = 0x28e574u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28e578: 0x21043
    ctx->pc = 0x28e578u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28e57c: 0x8c63e19c
    ctx->pc = 0x28e57cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294959516)));
    // 0x28e580: 0x3c013fa0
    ctx->pc = 0x28e580u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16288 << 16));
    // 0x28e584: 0x44816000
    ctx->pc = 0x28e584u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e588: 0xc080750
    ctx->pc = 0x28E588u;
    SET_GPR_U32(ctx, 31, 0x28E590u);
    ctx->pc = 0x28E58Cu;
    SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x201D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetDrawStringScale_0x201d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E590u; }
    }
    if (ctx->pc != 0x28E590u) { return; }
    ctx->pc = 0x28E590u;
    // 0x28e590: 0x2fe8021
    ctx->pc = 0x28e590u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
    // 0x28e594: 0x3c110035
    ctx->pc = 0x28e594u;
    SET_GPR_U32(ctx, 17, ((uint32_t)53 << 16));
    // 0x28e598: 0x2a0202d
    ctx->pc = 0x28e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e59c: 0x26050002
    ctx->pc = 0x28e59cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2));
    // 0x28e5a0: 0x8fa60000
    ctx->pc = 0x28e5a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e5a4: 0x8e27e1a4
    ctx->pc = 0x28e5a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4294959524)));
    // 0x28e5a8: 0x260402d
    ctx->pc = 0x28e5a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5ac: 0xc0807a8
    ctx->pc = 0x28E5ACu;
    SET_GPR_U32(ctx, 31, 0x28E5B4u);
    ctx->pc = 0x28E5B0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5B4u; }
    }
    if (ctx->pc != 0x28E5B4u) { return; }
    ctx->pc = 0x28E5B4u;
    // 0x28e5b4: 0xc080756
    ctx->pc = 0x28E5B4u;
    SET_GPR_U32(ctx, 31, 0x28E5BCu);
    ctx->pc = 0x201D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        RestoreDrawStringScale_0x201d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5BCu; }
    }
    if (ctx->pc != 0x28E5BCu) { return; }
    ctx->pc = 0x28E5BCu;
    // 0x28e5bc: 0x2b62021
    ctx->pc = 0x28e5bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x28e5c0: 0x24840010
    ctx->pc = 0x28e5c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x28e5c4: 0x200282d
    ctx->pc = 0x28e5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5c8: 0x2406ffff
    ctx->pc = 0x28e5c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e5cc: 0x8e27e1a4
    ctx->pc = 0x28e5ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4294959524)));
    // 0x28e5d0: 0x24080018
    ctx->pc = 0x28e5d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e5d4: 0xc0807a8
    ctx->pc = 0x28E5D4u;
    SET_GPR_U32(ctx, 31, 0x28E5DCu);
    ctx->pc = 0x28E5D8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5DCu; }
    }
    if (ctx->pc != 0x28E5DCu) { return; }
    ctx->pc = 0x28E5DCu;
    // 0x28e5dc: 0x10000096
    ctx->pc = 0x28E5DCu;
    {
        const bool branch_taken_0x28e5dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28e5dc) {
            ctx->pc = 0x28E838u;
            goto label_28e838;
        }
    }
    ctx->pc = 0x28E5E4u;
label_28e5e4:
    // 0x28e5e4: 0x8e04e19c
    ctx->pc = 0x28e5e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294959516)));
    // 0x28e5e8: 0x3c110035
    ctx->pc = 0x28e5e8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)53 << 16));
    // 0x28e5ec: 0x42023
    ctx->pc = 0x28e5ecu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28e5f0: 0x2fe2823
    ctx->pc = 0x28e5f0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
    // 0x28e5f4: 0x2406ffff
    ctx->pc = 0x28e5f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e5f8: 0x8e27e1a4
    ctx->pc = 0x28e5f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4294959524)));
    // 0x28e5fc: 0x24080018
    ctx->pc = 0x28e5fcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e600: 0x482d
    ctx->pc = 0x28e600u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e604: 0x260502d
    ctx->pc = 0x28e604u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e608: 0xc0807a8
    ctx->pc = 0x28E608u;
    SET_GPR_U32(ctx, 31, 0x28E610u);
    ctx->pc = 0x28E60Cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E610u; }
    }
    if (ctx->pc != 0x28E610u) { return; }
    ctx->pc = 0x28E610u;
    // 0x28e610: 0x8e04e19c
    ctx->pc = 0x28e610u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294959516)));
    // 0x28e614: 0x42023
    ctx->pc = 0x28e614u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28e618: 0x2e0282d
    ctx->pc = 0x28e618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e61c: 0x2406ffff
    ctx->pc = 0x28e61cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e620: 0x8e27e1a4
    ctx->pc = 0x28e620u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4294959524)));
    // 0x28e624: 0x24080018
    ctx->pc = 0x28e624u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e628: 0xc0807a8
    ctx->pc = 0x28E628u;
    SET_GPR_U32(ctx, 31, 0x28E630u);
    ctx->pc = 0x28E62Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E630u; }
    }
    if (ctx->pc != 0x28E630u) { return; }
    ctx->pc = 0x28E630u;
    // 0x28e630: 0x8e04e19c
    ctx->pc = 0x28e630u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294959516)));
    // 0x28e634: 0x3c020035
    ctx->pc = 0x28e634u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e638: 0x42023
    ctx->pc = 0x28e638u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28e63c: 0x2fe2821
    ctx->pc = 0x28e63cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
    // 0x28e640: 0x2406ffff
    ctx->pc = 0x28e640u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e644: 0x8e27e1a4
    ctx->pc = 0x28e644u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4294959524)));
    // 0x28e648: 0x24080018
    ctx->pc = 0x28e648u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e64c: 0x24090002
    ctx->pc = 0x28e64cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
    // 0x28e650: 0x8c4ae1ac
    ctx->pc = 0x28e650u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4294959532)));
    // 0x28e654: 0xc0807a8
    ctx->pc = 0x28E654u;
    SET_GPR_U32(ctx, 31, 0x28E65Cu);
    ctx->pc = 0x28E658u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E65Cu; }
    }
    if (ctx->pc != 0x28E65Cu) { return; }
    ctx->pc = 0x28E65Cu;
    // 0x28e65c: 0x10000076
    ctx->pc = 0x28E65Cu;
    {
        const bool branch_taken_0x28e65c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28e65c) {
            ctx->pc = 0x28E838u;
            goto label_28e838;
        }
    }
    ctx->pc = 0x28E664u;
label_28e664:
    // 0x28e664: 0x8c43e194
    ctx->pc = 0x28e664u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959508)));
    // 0x28e668: 0x24020022
    ctx->pc = 0x28e668u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
    // 0x28e66c: 0x1462000f
    ctx->pc = 0x28E66Cu;
    {
        const bool branch_taken_0x28e66c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28E670u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28e66c) {
            ctx->pc = 0x28E6ACu;
            goto label_28e6ac;
        }
    }
    ctx->pc = 0x28E674u;
    // 0x28e674: 0x3c020035
    ctx->pc = 0x28e674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e678: 0x8c44e19c
    ctx->pc = 0x28e678u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959516)));
    // 0x28e67c: 0x3c020035
    ctx->pc = 0x28e67cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e680: 0x3c030035
    ctx->pc = 0x28e680u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28e684: 0x42023
    ctx->pc = 0x28e684u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28e688: 0x2e0282d
    ctx->pc = 0x28e688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e68c: 0x3c0302d
    ctx->pc = 0x28e68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e690: 0x2407ffff
    ctx->pc = 0x28e690u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e694: 0x8c48e1a4
    ctx->pc = 0x28e694u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294959524)));
    // 0x28e698: 0x8e090010
    ctx->pc = 0x28e698u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28e69c: 0xc0808f4
    ctx->pc = 0x28E69Cu;
    SET_GPR_U32(ctx, 31, 0x28E6A4u);
    ctx->pc = 0x28E6A0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 4294959532)));
    ctx->pc = 0x2023D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringTextMLines_0x2023d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E6A4u; }
    }
    if (ctx->pc != 0x28E6A4u) { return; }
    ctx->pc = 0x28E6A4u;
    // 0x28e6a4: 0x10000064
    ctx->pc = 0x28E6A4u;
    {
        const bool branch_taken_0x28e6a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28e6a4) {
            ctx->pc = 0x28E838u;
            goto label_28e838;
        }
    }
    ctx->pc = 0x28E6ACu;
label_28e6ac:
    // 0x28e6ac: 0x8c43e194
    ctx->pc = 0x28e6acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959508)));
    // 0x28e6b0: 0x24020032
    ctx->pc = 0x28e6b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
    // 0x28e6b4: 0x10620005
    ctx->pc = 0x28E6B4u;
    {
        const bool branch_taken_0x28e6b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28E6B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 89));
        if (branch_taken_0x28e6b4) {
            ctx->pc = 0x28E6CCu;
            goto label_28e6cc;
        }
    }
    ctx->pc = 0x28E6BCu;
    // 0x28e6bc: 0x10620003
    ctx->pc = 0x28E6BCu;
    {
        const bool branch_taken_0x28e6bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28E6C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 93));
        if (branch_taken_0x28e6bc) {
            ctx->pc = 0x28E6CCu;
            goto label_28e6cc;
        }
    }
    ctx->pc = 0x28E6C4u;
    // 0x28e6c4: 0x54620047
    ctx->pc = 0x28E6C4u;
    {
        const bool branch_taken_0x28e6c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x28e6c4) {
            ctx->pc = 0x28E6C8u;
            SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x28E7E4u;
            goto label_28e7e4;
        }
    }
    ctx->pc = 0x28E6CCu;
label_28e6cc:
    // 0x28e6cc: 0x24040002
    ctx->pc = 0x28e6ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x28e6d0: 0x8fa50008
    ctx->pc = 0x28e6d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28e6d4: 0xc08065e
    ctx->pc = 0x28E6D4u;
    SET_GPR_U32(ctx, 31, 0x28E6DCu);
    ctx->pc = 0x28E6D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E6DCu; }
    }
    if (ctx->pc != 0x28E6DCu) { return; }
    ctx->pc = 0x28E6DCu;
    // 0x28e6dc: 0x40982d
    ctx->pc = 0x28e6dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6e0: 0x24040003
    ctx->pc = 0x28e6e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x28e6e4: 0x280282d
    ctx->pc = 0x28e6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6e8: 0xc08065e
    ctx->pc = 0x28E6E8u;
    SET_GPR_U32(ctx, 31, 0x28E6F0u);
    ctx->pc = 0x28E6ECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E6F0u; }
    }
    if (ctx->pc != 0x28E6F0u) { return; }
    ctx->pc = 0x28E6F0u;
    // 0x28e6f0: 0x40902d
    ctx->pc = 0x28e6f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6f4: 0x8e040010
    ctx->pc = 0x28e6f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28e6f8: 0x282d
    ctx->pc = 0x28e6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e6fc: 0x3c013f80
    ctx->pc = 0x28e6fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28e700: 0x44816000
    ctx->pc = 0x28e700u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28e704: 0xc080a62
    ctx->pc = 0x28E704u;
    SET_GPR_U32(ctx, 31, 0x28E70Cu);
    ctx->pc = 0x28E708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202988u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextHeight_0x202988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E70Cu; }
    }
    if (ctx->pc != 0x28E70Cu) { return; }
    ctx->pc = 0x28E70Cu;
    // 0x28e70c: 0x3c2f021
    ctx->pc = 0x28e70cu;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x28e710: 0x3c040032
    ctx->pc = 0x28e710u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x28e714: 0x24841bc0
    ctx->pc = 0x28e714u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7104));
    // 0x28e718: 0x3c020035
    ctx->pc = 0x28e718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e71c: 0x8c42e198
    ctx->pc = 0x28e71cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959512)));
    // 0x28e720: 0x24032b00
    ctx->pc = 0x28e720u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28e724: 0x431018
    ctx->pc = 0x28e724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28e728: 0x441021
    ctx->pc = 0x28e728u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28e72c: 0x8c420138
    ctx->pc = 0x28e72cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x28e730: 0x30420400
    ctx->pc = 0x28e730u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x28e734: 0x10400011
    ctx->pc = 0x28E734u;
    {
        const bool branch_taken_0x28e734 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E738u;
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 30), 1));
        if (branch_taken_0x28e734) {
            ctx->pc = 0x28E77Cu;
            goto label_28e77c;
        }
    }
    ctx->pc = 0x28E73Cu;
    // 0x28e73c: 0x3c020035
    ctx->pc = 0x28e73cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e740: 0x8c43e194
    ctx->pc = 0x28e740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959508)));
    // 0x28e744: 0x2402005d
    ctx->pc = 0x28e744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 93));
    // 0x28e748: 0x1062000c
    ctx->pc = 0x28E748u;
    {
        const bool branch_taken_0x28e748 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28E74Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28e748) {
            ctx->pc = 0x28E77Cu;
            goto label_28e77c;
        }
    }
    ctx->pc = 0x28E750u;
    // 0x28e750: 0x8c44e19c
    ctx->pc = 0x28e750u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959516)));
    // 0x28e754: 0x3c020035
    ctx->pc = 0x28e754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e758: 0x42023
    ctx->pc = 0x28e758u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28e75c: 0x2fe2823
    ctx->pc = 0x28e75cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
    // 0x28e760: 0x2406ffff
    ctx->pc = 0x28e760u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e764: 0x8c47e1a4
    ctx->pc = 0x28e764u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294959524)));
    // 0x28e768: 0x24080004
    ctx->pc = 0x28e768u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    // 0x28e76c: 0xc0807a8
    ctx->pc = 0x28E76Cu;
    SET_GPR_U32(ctx, 31, 0x28E774u);
    ctx->pc = 0x28E770u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E774u; }
    }
    if (ctx->pc != 0x28E774u) { return; }
    ctx->pc = 0x28E774u;
    // 0x28e774: 0x1000000f
    ctx->pc = 0x28E774u;
    {
        const bool branch_taken_0x28e774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E778u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28e774) {
            ctx->pc = 0x28E7B4u;
            goto label_28e7b4;
        }
    }
    ctx->pc = 0x28E77Cu;
label_28e77c:
    // 0x28e77c: 0x3c020035
    ctx->pc = 0x28e77cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e780: 0x8c44e19c
    ctx->pc = 0x28e780u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959516)));
    // 0x28e784: 0x3c020035
    ctx->pc = 0x28e784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e788: 0x3c030035
    ctx->pc = 0x28e788u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28e78c: 0x42023
    ctx->pc = 0x28e78cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28e790: 0x2fe2823
    ctx->pc = 0x28e790u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
    // 0x28e794: 0x8c46e1a8
    ctx->pc = 0x28e794u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294959528)));
    // 0x28e798: 0x8c67e1a4
    ctx->pc = 0x28e798u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294959524)));
    // 0x28e79c: 0x8e080010
    ctx->pc = 0x28e79cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28e7a0: 0x482d
    ctx->pc = 0x28e7a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e7a4: 0x260502d
    ctx->pc = 0x28e7a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e7a8: 0xc0807a8
    ctx->pc = 0x28E7A8u;
    SET_GPR_U32(ctx, 31, 0x28E7B0u);
    ctx->pc = 0x28E7ACu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7B0u; }
    }
    if (ctx->pc != 0x28E7B0u) { return; }
    ctx->pc = 0x28E7B0u;
    // 0x28e7b0: 0x3c020035
    ctx->pc = 0x28e7b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28e7b4:
    // 0x28e7b4: 0x8c44e19c
    ctx->pc = 0x28e7b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959516)));
    // 0x28e7b8: 0x3c020035
    ctx->pc = 0x28e7b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e7bc: 0x3c030035
    ctx->pc = 0x28e7bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28e7c0: 0x42023
    ctx->pc = 0x28e7c0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28e7c4: 0x2fe2821
    ctx->pc = 0x28e7c4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
    // 0x28e7c8: 0x8c46e1a8
    ctx->pc = 0x28e7c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294959528)));
    // 0x28e7cc: 0x8c67e1a4
    ctx->pc = 0x28e7ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294959524)));
    // 0x28e7d0: 0x8e080010
    ctx->pc = 0x28e7d0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28e7d4: 0xc0807a8
    ctx->pc = 0x28E7D4u;
    SET_GPR_U32(ctx, 31, 0x28E7DCu);
    ctx->pc = 0x28E7D8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7DCu; }
    }
    if (ctx->pc != 0x28E7DCu) { return; }
    ctx->pc = 0x28E7DCu;
    // 0x28e7dc: 0x10000016
    ctx->pc = 0x28E7DCu;
    {
        const bool branch_taken_0x28e7dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28e7dc) {
            ctx->pc = 0x28E838u;
            goto label_28e838;
        }
    }
    ctx->pc = 0x28E7E4u;
label_28e7e4:
    // 0x28e7e4: 0x520000b
    ctx->pc = 0x28E7E4u;
    {
        const bool branch_taken_0x28e7e4 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x28E7E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28e7e4) {
            ctx->pc = 0x28E814u;
            goto label_28e814;
        }
    }
    ctx->pc = 0x28E7ECu;
    // 0x28e7ec: 0x8c44e19c
    ctx->pc = 0x28e7ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959516)));
    // 0x28e7f0: 0x3c020035
    ctx->pc = 0x28e7f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e7f4: 0x42023
    ctx->pc = 0x28e7f4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28e7f8: 0x2e0282d
    ctx->pc = 0x28e7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e7fc: 0x2406ffff
    ctx->pc = 0x28e7fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e800: 0x8c47e1a4
    ctx->pc = 0x28e800u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294959524)));
    // 0x28e804: 0xc0807a8
    ctx->pc = 0x28E804u;
    SET_GPR_U32(ctx, 31, 0x28E80Cu);
    ctx->pc = 0x28E808u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E80Cu; }
    }
    if (ctx->pc != 0x28E80Cu) { return; }
    ctx->pc = 0x28E80Cu;
    // 0x28e80c: 0x1000000a
    ctx->pc = 0x28E80Cu;
    {
        const bool branch_taken_0x28e80c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28e80c) {
            ctx->pc = 0x28E838u;
            goto label_28e838;
        }
    }
    ctx->pc = 0x28E814u;
label_28e814:
    // 0x28e814: 0x8c44e19c
    ctx->pc = 0x28e814u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959516)));
    // 0x28e818: 0x3c020035
    ctx->pc = 0x28e818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e81c: 0x42023
    ctx->pc = 0x28e81cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28e820: 0x2e0282d
    ctx->pc = 0x28e820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e824: 0x3c0302d
    ctx->pc = 0x28e824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e828: 0x2407ffff
    ctx->pc = 0x28e828u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e82c: 0x8c48e1a4
    ctx->pc = 0x28e82cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294959524)));
    // 0x28e830: 0xc08088c
    ctx->pc = 0x28E830u;
    SET_GPR_U32(ctx, 31, 0x28E838u);
    ctx->pc = 0x28E834u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x202230u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringTextMulti_0x202230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E838u; }
    }
    if (ctx->pc != 0x28E838u) { return; }
    ctx->pc = 0x28E838u;
label_28e838:
    // 0x28e838: 0xc0b1444
    ctx->pc = 0x28E838u;
    SET_GPR_U32(ctx, 31, 0x28E840u);
    ctx->pc = 0x28E83Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->pc = 0x2C5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontFlags_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E840u; }
    }
    if (ctx->pc != 0x28E840u) { return; }
    ctx->pc = 0x28E840u;
    // 0x28e840: 0xdfbf00b0
    ctx->pc = 0x28e840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_28e844:
    // 0x28e844: 0xdfbe00a0
    ctx->pc = 0x28e844u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28e848: 0xdfb70090
    ctx->pc = 0x28e848u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e84c: 0xdfb60080
    ctx->pc = 0x28e84cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e850: 0xdfb50070
    ctx->pc = 0x28e850u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e854: 0xdfb40060
    ctx->pc = 0x28e854u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e858: 0xdfb30050
    ctx->pc = 0x28e858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e85c: 0xdfb20040
    ctx->pc = 0x28e85cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e860: 0xdfb10030
    ctx->pc = 0x28e860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e864: 0xdfb00020
    ctx->pc = 0x28e864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e868: 0x3e00008
    ctx->pc = 0x28E868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E86Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28E320u: goto label_28e320;
            case 0x28E374u: goto label_28e374;
            case 0x28E398u: goto label_28e398;
            case 0x28E3B4u: goto label_28e3b4;
            case 0x28E524u: goto label_28e524;
            case 0x28E538u: goto label_28e538;
            case 0x28E5E4u: goto label_28e5e4;
            case 0x28E664u: goto label_28e664;
            case 0x28E6ACu: goto label_28e6ac;
            case 0x28E6CCu: goto label_28e6cc;
            case 0x28E77Cu: goto label_28e77c;
            case 0x28E7B4u: goto label_28e7b4;
            case 0x28E7E4u: goto label_28e7e4;
            case 0x28E814u: goto label_28e814;
            case 0x28E838u: goto label_28e838;
            case 0x28E844u: goto label_28e844;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28E870u;
}
