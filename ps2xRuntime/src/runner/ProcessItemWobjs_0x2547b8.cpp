#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ProcessItemWobjs
// Address: 0x2547b8 - 0x254e9c
void ProcessItemWobjs_0x2547b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2547b8u;

    // 0x2547b8: 0x27bdff40
    ctx->pc = 0x2547b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2547bc: 0xffbf00b0
    ctx->pc = 0x2547bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2547c0: 0xffbe00a0
    ctx->pc = 0x2547c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2547c4: 0xffb70090
    ctx->pc = 0x2547c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2547c8: 0xffb60080
    ctx->pc = 0x2547c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2547cc: 0xffb50070
    ctx->pc = 0x2547ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2547d0: 0xffb40060
    ctx->pc = 0x2547d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2547d4: 0xffb30050
    ctx->pc = 0x2547d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2547d8: 0xffb20040
    ctx->pc = 0x2547d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2547dc: 0xffb10030
    ctx->pc = 0x2547dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2547e0: 0xffb00020
    ctx->pc = 0x2547e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2547e4: 0xa82d
    ctx->pc = 0x2547e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547e8: 0x3c020034
    ctx->pc = 0x2547e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2547ec: 0x8c42d1b8
    ctx->pc = 0x2547ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955448)));
    // 0x2547f0: 0x18400197
    ctx->pc = 0x2547F0u;
    {
        const bool branch_taken_0x2547f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2547F4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x2547f0) {
            ctx->pc = 0x254E50u;
            goto label_254e50;
        }
    }
    ctx->pc = 0x2547F8u;
    // 0x2547f8: 0x3c02003c
    ctx->pc = 0x2547f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2547fc: 0x245e2850
    ctx->pc = 0x2547fcu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 10320));
    // 0x254800: 0x3c02003c
    ctx->pc = 0x254800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x254804: 0x24571ef0
    ctx->pc = 0x254804u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 7920));
    // 0x254808: 0x3c020034
    ctx->pc = 0x254808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25480c: 0x0
    ctx->pc = 0x25480cu;
    // NOP
label_254810:
    // 0x254810: 0x2442cf60
    ctx->pc = 0x254810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954848));
    // 0x254814: 0x158080
    ctx->pc = 0x254814u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 21), 2));
    // 0x254818: 0x2021021
    ctx->pc = 0x254818u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25481c: 0x8c510000
    ctx->pc = 0x25481cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254820: 0x82320016
    ctx->pc = 0x254820u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x254824: 0x82330017
    ctx->pc = 0x254824u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
    // 0x254828: 0x220202d
    ctx->pc = 0x254828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25482c: 0xc094e80
    ctx->pc = 0x25482Cu;
    SET_GPR_U32(ctx, 31, 0x254834u);
    ctx->pc = 0x254830u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x253A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        OnWobj_0x253a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254834u; }
    }
    if (ctx->pc != 0x254834u) { return; }
    ctx->pc = 0x254834u;
    // 0x254834: 0x40b02d
    ctx->pc = 0x254834u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254838: 0x8e220028
    ctx->pc = 0x254838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x25483c: 0xc4400030
    ctx->pc = 0x25483cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254840: 0xe7a00000
    ctx->pc = 0x254840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x254844: 0x8e220028
    ctx->pc = 0x254844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x254848: 0xc4400034
    ctx->pc = 0x254848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25484c: 0xe7a00004
    ctx->pc = 0x25484cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x254850: 0x8e220028
    ctx->pc = 0x254850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x254854: 0xc4400038
    ctx->pc = 0x254854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254858: 0xe7a00008
    ctx->pc = 0x254858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25485c: 0x96220014
    ctx->pc = 0x25485cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x254860: 0x304300ff
    ctx->pc = 0x254860u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x254864: 0x21e8021
    ctx->pc = 0x254864u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x254868: 0x44800800
    ctx->pc = 0x254868u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x25486c: 0xc6000000
    ctx->pc = 0x25486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254870: 0x46000836
    ctx->pc = 0x254870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254874: 0x0
    ctx->pc = 0x254874u;
    // NOP
    // 0x254878: 0x45000061
    ctx->pc = 0x254878u;
    {
        const bool branch_taken_0x254878 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25487Cu;
        SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 2), 8));
        if (branch_taken_0x254878) {
            ctx->pc = 0x254A00u;
            goto label_254a00;
        }
    }
    ctx->pc = 0x254880u;
    // 0x254880: 0x3c020035
    ctx->pc = 0x254880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x254884: 0x8c429b88
    ctx->pc = 0x254884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941576)));
    // 0x254888: 0x5440005e
    ctx->pc = 0x254888u;
    {
        const bool branch_taken_0x254888 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x254888) {
            ctx->pc = 0x25488Cu;
            WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 18));
            ctx->pc = 0x254A04u;
            goto label_254a04;
        }
    }
    ctx->pc = 0x254890u;
    // 0x254890: 0x3c040032
    ctx->pc = 0x254890u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x254894: 0x8c82080c
    ctx->pc = 0x254894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x254898: 0x5440005a
    ctx->pc = 0x254898u;
    {
        const bool branch_taken_0x254898 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x254898) {
            ctx->pc = 0x25489Cu;
            WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 18));
            ctx->pc = 0x254A04u;
            goto label_254a04;
        }
    }
    ctx->pc = 0x2548A0u;
    // 0x2548a0: 0x24020014
    ctx->pc = 0x2548a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2548a4: 0x10620003
    ctx->pc = 0x2548A4u;
    {
        const bool branch_taken_0x2548a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2548A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x2548a4) {
            ctx->pc = 0x2548B4u;
            goto label_2548b4;
        }
    }
    ctx->pc = 0x2548ACu;
    // 0x2548ac: 0x1462000f
    ctx->pc = 0x2548ACu;
    {
        const bool branch_taken_0x2548ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2548B0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x2548ac) {
            ctx->pc = 0x2548ECu;
            goto label_2548ec;
        }
    }
    ctx->pc = 0x2548B4u;
label_2548b4:
    // 0x2548b4: 0x32430020
    ctx->pc = 0x2548b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 32));
    // 0x2548b8: 0x32620020
    ctx->pc = 0x2548b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32));
    // 0x2548bc: 0x50620051
    ctx->pc = 0x2548BCu;
    {
        const bool branch_taken_0x2548bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2548bc) {
            ctx->pc = 0x2548C0u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 18));
            ctx->pc = 0x254A04u;
            goto label_254a04;
        }
    }
    ctx->pc = 0x2548C4u;
    // 0x2548c4: 0x10600005
    ctx->pc = 0x2548C4u;
    {
        const bool branch_taken_0x2548c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2548c4) {
            ctx->pc = 0x2548DCu;
            goto label_2548dc;
        }
    }
    ctx->pc = 0x2548CCu;
    // 0x2548cc: 0xc09820c
    ctx->pc = 0x2548CCu;
    SET_GPR_U32(ctx, 31, 0x2548D4u);
    ctx->pc = 0x2548D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x260830u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioBridgeOpen_0x260830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2548D4u; }
    }
    if (ctx->pc != 0x2548D4u) { return; }
    ctx->pc = 0x2548D4u;
    // 0x2548d4: 0x1000004b
    ctx->pc = 0x2548D4u;
    {
        const bool branch_taken_0x2548d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2548D8u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 18));
        if (branch_taken_0x2548d4) {
            ctx->pc = 0x254A04u;
            goto label_254a04;
        }
    }
    ctx->pc = 0x2548DCu;
label_2548dc:
    // 0x2548dc: 0xc098226
    ctx->pc = 0x2548DCu;
    SET_GPR_U32(ctx, 31, 0x2548E4u);
    ctx->pc = 0x2548E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x260898u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioBridgeClose_0x260898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2548E4u; }
    }
    if (ctx->pc != 0x2548E4u) { return; }
    ctx->pc = 0x2548E4u;
    // 0x2548e4: 0x10000047
    ctx->pc = 0x2548E4u;
    {
        const bool branch_taken_0x2548e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2548E8u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 18));
        if (branch_taken_0x2548e4) {
            ctx->pc = 0x254A04u;
            goto label_254a04;
        }
    }
    ctx->pc = 0x2548ECu;
label_2548ec:
    // 0x2548ec: 0x5e1021
    ctx->pc = 0x2548ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2548f0: 0x3c014120
    ctx->pc = 0x2548f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2548f4: 0x44811000
    ctx->pc = 0x2548f4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2548f8: 0xc4410000
    ctx->pc = 0x2548f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2548fc: 0x46011036
    ctx->pc = 0x2548fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254900: 0x0
    ctx->pc = 0x254900u;
    // NOP
    // 0x254904: 0x45000026
    ctx->pc = 0x254904u;
    {
        const bool branch_taken_0x254904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254908u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x254904) {
            ctx->pc = 0x2549A0u;
            goto label_2549a0;
        }
    }
    ctx->pc = 0x25490Cu;
    // 0x25490c: 0x3c014130
    ctx->pc = 0x25490cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16688 << 16));
    // 0x254910: 0x44810000
    ctx->pc = 0x254910u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254914: 0x46000832
    ctx->pc = 0x254914u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254918: 0x0
    ctx->pc = 0x254918u;
    // NOP
    // 0x25491c: 0x45000011
    ctx->pc = 0x25491Cu;
    {
        const bool branch_taken_0x25491c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254920u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x25491c) {
            ctx->pc = 0x254964u;
            goto label_254964;
        }
    }
    ctx->pc = 0x254924u;
    // 0x254924: 0x10400036
    ctx->pc = 0x254924u;
    {
        const bool branch_taken_0x254924 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254928u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32));
        if (branch_taken_0x254924) {
            ctx->pc = 0x254A00u;
            goto label_254a00;
        }
    }
    ctx->pc = 0x25492Cu;
    // 0x25492c: 0x54400035
    ctx->pc = 0x25492Cu;
    {
        const bool branch_taken_0x25492c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25492c) {
            ctx->pc = 0x254930u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 18));
            ctx->pc = 0x254A04u;
            goto label_254a04;
        }
    }
    ctx->pc = 0x254934u;
    // 0x254934: 0x8e220010
    ctx->pc = 0x254934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254938: 0x3c0300c0
    ctx->pc = 0x254938u;
    SET_GPR_U32(ctx, 3, ((uint32_t)192 << 16));
    // 0x25493c: 0x431024
    ctx->pc = 0x25493cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254940: 0x50400030
    ctx->pc = 0x254940u;
    {
        const bool branch_taken_0x254940 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x254940) {
            ctx->pc = 0x254944u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 18));
            ctx->pc = 0x254A04u;
            goto label_254a04;
        }
    }
    ctx->pc = 0x254948u;
    // 0x254948: 0x46020801
    ctx->pc = 0x254948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x25494c: 0x46000064
    ctx->pc = 0x25494cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x254950: 0x44050800
    ctx->pc = 0x254950u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x254954: 0xc0981ec
    ctx->pc = 0x254954u;
    SET_GPR_U32(ctx, 31, 0x25495Cu);
    ctx->pc = 0x254958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2607B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrapSwitch_0x2607b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25495Cu; }
    }
    if (ctx->pc != 0x25495Cu) { return; }
    ctx->pc = 0x25495Cu;
    // 0x25495c: 0x10000029
    ctx->pc = 0x25495Cu;
    {
        const bool branch_taken_0x25495c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254960u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 18));
        if (branch_taken_0x25495c) {
            ctx->pc = 0x254A04u;
            goto label_254a04;
        }
    }
    ctx->pc = 0x254964u;
label_254964:
    // 0x254964: 0x32430010
    ctx->pc = 0x254964u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 16));
    // 0x254968: 0x32620010
    ctx->pc = 0x254968u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 16));
    // 0x25496c: 0x10620024
    ctx->pc = 0x25496Cu;
    {
        const bool branch_taken_0x25496c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x254970u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x25496c) {
            ctx->pc = 0x254A00u;
            goto label_254a00;
        }
    }
    ctx->pc = 0x254974u;
    // 0x254974: 0x5e1021
    ctx->pc = 0x254974u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x254978: 0xc4410000
    ctx->pc = 0x254978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25497c: 0x3c014120
    ctx->pc = 0x25497cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x254980: 0x44810000
    ctx->pc = 0x254980u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254984: 0x46000841
    ctx->pc = 0x254984u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x254988: 0x46000824
    ctx->pc = 0x254988u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x25498c: 0x44050000
    ctx->pc = 0x25498cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x254990: 0xc0981ec
    ctx->pc = 0x254990u;
    SET_GPR_U32(ctx, 31, 0x254998u);
    ctx->pc = 0x254994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2607B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrapSwitch_0x2607b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254998u; }
    }
    if (ctx->pc != 0x254998u) { return; }
    ctx->pc = 0x254998u;
    // 0x254998: 0x1000001a
    ctx->pc = 0x254998u;
    {
        const bool branch_taken_0x254998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25499Cu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 18));
        if (branch_taken_0x254998) {
            ctx->pc = 0x254A04u;
            goto label_254a04;
        }
    }
    ctx->pc = 0x2549A0u;
label_2549a0:
    // 0x2549a0: 0x1040000d
    ctx->pc = 0x2549A0u;
    {
        const bool branch_taken_0x2549a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2549A4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2549a0) {
            ctx->pc = 0x2549D8u;
            goto label_2549d8;
        }
    }
    ctx->pc = 0x2549A8u;
    // 0x2549a8: 0x54400016
    ctx->pc = 0x2549A8u;
    {
        const bool branch_taken_0x2549a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2549a8) {
            ctx->pc = 0x2549ACu;
            WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 18));
            ctx->pc = 0x254A04u;
            goto label_254a04;
        }
    }
    ctx->pc = 0x2549B0u;
    // 0x2549b0: 0x151080
    ctx->pc = 0x2549b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
    // 0x2549b4: 0x5e1021
    ctx->pc = 0x2549b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2549b8: 0xc4400000
    ctx->pc = 0x2549b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2549bc: 0x202d
    ctx->pc = 0x2549bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549c0: 0x46000064
    ctx->pc = 0x2549c0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2549c4: 0x44060800
    ctx->pc = 0x2549c4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x2549c8: 0xc098046
    ctx->pc = 0x2549C8u;
    SET_GPR_U32(ctx, 31, 0x2549D0u);
    ctx->pc = 0x2549CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x260118u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioElevator_0x260118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2549D0u; }
    }
    if (ctx->pc != 0x2549D0u) { return; }
    ctx->pc = 0x2549D0u;
    // 0x2549d0: 0x1000000b
    ctx->pc = 0x2549D0u;
    {
        const bool branch_taken_0x2549d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2549D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2549d0) {
            ctx->pc = 0x254A00u;
            goto label_254a00;
        }
    }
    ctx->pc = 0x2549D8u;
label_2549d8:
    // 0x2549d8: 0x32620010
    ctx->pc = 0x2549d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 16));
    // 0x2549dc: 0x10400008
    ctx->pc = 0x2549DCu;
    {
        const bool branch_taken_0x2549dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2549E0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x2549dc) {
            ctx->pc = 0x254A00u;
            goto label_254a00;
        }
    }
    ctx->pc = 0x2549E4u;
    // 0x2549e4: 0x5e1021
    ctx->pc = 0x2549e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2549e8: 0xc4400000
    ctx->pc = 0x2549e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2549ec: 0x24040002
    ctx->pc = 0x2549ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2549f0: 0x46000064
    ctx->pc = 0x2549f0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2549f4: 0x44060800
    ctx->pc = 0x2549f4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x2549f8: 0xc098046
    ctx->pc = 0x2549F8u;
    SET_GPR_U32(ctx, 31, 0x254A00u);
    ctx->pc = 0x2549FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x260118u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioElevator_0x260118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254A00u; }
    }
    if (ctx->pc != 0x254A00u) { return; }
    ctx->pc = 0x254A00u;
label_254a00:
    // 0x254a00: 0xa2320017
    ctx->pc = 0x254a00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 18));
label_254a04:
    // 0x254a04: 0xa2200035
    ctx->pc = 0x254a04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x254a08: 0x8e220010
    ctx->pc = 0x254a08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254a0c: 0x30420800
    ctx->pc = 0x254a0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x254a10: 0x1040000b
    ctx->pc = 0x254A10u;
    {
        const bool branch_taken_0x254a10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254A14u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x254a10) {
            ctx->pc = 0x254A40u;
            goto label_254a40;
        }
    }
    ctx->pc = 0x254A18u;
    // 0x254a18: 0x10400005
    ctx->pc = 0x254A18u;
    {
        const bool branch_taken_0x254a18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254A1Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x254a18) {
            ctx->pc = 0x254A30u;
            goto label_254a30;
        }
    }
    ctx->pc = 0x254A20u;
    // 0x254a20: 0xc086eee
    ctx->pc = 0x254A20u;
    SET_GPR_U32(ctx, 31, 0x254A28u);
    ctx->pc = 0x254A24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21BBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldPsysActivate_0x21bbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254A28u; }
    }
    if (ctx->pc != 0x254A28u) { return; }
    ctx->pc = 0x254A28u;
    // 0x254a28: 0x100000e8
    ctx->pc = 0x254A28u;
    {
        const bool branch_taken_0x254a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x254a28) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254A30u;
label_254a30:
    // 0x254a30: 0xc086f38
    ctx->pc = 0x254A30u;
    SET_GPR_U32(ctx, 31, 0x254A38u);
    ctx->pc = 0x254A34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21BCE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldPsysDeActivate_0x21bce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254A38u; }
    }
    if (ctx->pc != 0x254A38u) { return; }
    ctx->pc = 0x254A38u;
    // 0x254a38: 0x100000e4
    ctx->pc = 0x254A38u;
    {
        const bool branch_taken_0x254a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x254a38) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254A40u;
label_254a40:
    // 0x254a40: 0x32820010
    ctx->pc = 0x254a40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 16));
    // 0x254a44: 0x1040004c
    ctx->pc = 0x254A44u;
    {
        const bool branch_taken_0x254a44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254A48u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 32));
        if (branch_taken_0x254a44) {
            ctx->pc = 0x254B78u;
            goto label_254b78;
        }
    }
    ctx->pc = 0x254A4Cu;
    // 0x254a4c: 0x10400003
    ctx->pc = 0x254A4Cu;
    {
        const bool branch_taken_0x254a4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254A50u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 47));
        if (branch_taken_0x254a4c) {
            ctx->pc = 0x254A5Cu;
            goto label_254a5c;
        }
    }
    ctx->pc = 0x254A54u;
    // 0x254a54: 0x10000003
    ctx->pc = 0x254A54u;
    {
        const bool branch_taken_0x254a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254A58u;
        SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x254a54) {
            ctx->pc = 0x254A64u;
            goto label_254a64;
        }
    }
    ctx->pc = 0x254A5Cu;
label_254a5c:
    // 0x254a5c: 0x3244000f
    ctx->pc = 0x254a5cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 18), 15));
    // 0x254a60: 0x2c840001
    ctx->pc = 0x254a60u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), 1));
label_254a64:
    // 0x254a64: 0x10800003
    ctx->pc = 0x254A64u;
    {
        const bool branch_taken_0x254a64 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x254A68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x254a64) {
            ctx->pc = 0x254A74u;
            goto label_254a74;
        }
    }
    ctx->pc = 0x254A6Cu;
    // 0x254a6c: 0x10000002
    ctx->pc = 0x254A6Cu;
    {
        const bool branch_taken_0x254a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254A70u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x254a6c) {
            ctx->pc = 0x254A78u;
            goto label_254a78;
        }
    }
    ctx->pc = 0x254A74u;
label_254a74:
    // 0x254a74: 0xa2200035
    ctx->pc = 0x254a74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 0));
label_254a78:
    // 0x254a78: 0x8e230028
    ctx->pc = 0x254a78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x254a7c: 0x106000d3
    ctx->pc = 0x254A7Cu;
    {
        const bool branch_taken_0x254a7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x254A80u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x254a7c) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254A84u;
    // 0x254a84: 0x8c620060
    ctx->pc = 0x254a84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x254a88: 0x30420200
    ctx->pc = 0x254a88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x254a8c: 0x10400004
    ctx->pc = 0x254A8Cu;
    {
        const bool branch_taken_0x254a8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254A90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x254a8c) {
            ctx->pc = 0x254AA0u;
            goto label_254aa0;
        }
    }
    ctx->pc = 0x254A94u;
    // 0x254a94: 0x90630053
    ctx->pc = 0x254a94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 83)));
    // 0x254a98: 0x10000002
    ctx->pc = 0x254A98u;
    {
        const bool branch_taken_0x254a98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254A9Cu;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x254a98) {
            ctx->pc = 0x254AA4u;
            goto label_254aa4;
        }
    }
    ctx->pc = 0x254AA0u;
label_254aa0:
    // 0x254aa0: 0x802d
    ctx->pc = 0x254aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254aa4:
    // 0x254aa4: 0x1080001d
    ctx->pc = 0x254AA4u;
    {
        const bool branch_taken_0x254aa4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x254AA8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 255));
        if (branch_taken_0x254aa4) {
            ctx->pc = 0x254B1Cu;
            goto label_254b1c;
        }
    }
    ctx->pc = 0x254AACu;
    // 0x254aac: 0x104000c7
    ctx->pc = 0x254AACu;
    {
        const bool branch_taken_0x254aac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254AB0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x254aac) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254AB4u;
    // 0x254ab4: 0x8c62080c
    ctx->pc = 0x254ab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2060)));
    // 0x254ab8: 0x10400003
    ctx->pc = 0x254AB8u;
    {
        const bool branch_taken_0x254ab8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254ABCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x254ab8) {
            ctx->pc = 0x254AC8u;
            goto label_254ac8;
        }
    }
    ctx->pc = 0x254AC0u;
    // 0x254ac0: 0x10000004
    ctx->pc = 0x254AC0u;
    {
        const bool branch_taken_0x254ac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254AC4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x254ac0) {
            ctx->pc = 0x254AD4u;
            goto label_254ad4;
        }
    }
    ctx->pc = 0x254AC8u;
label_254ac8:
    // 0x254ac8: 0x8c42ffbc
    ctx->pc = 0x254ac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x254acc: 0x210c0
    ctx->pc = 0x254accu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x254ad0: 0x2028021
    ctx->pc = 0x254ad0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_254ad4:
    // 0x254ad4: 0x2a0200f8
    ctx->pc = 0x254ad4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 248));
    // 0x254ad8: 0x14400007
    ctx->pc = 0x254AD8u;
    {
        const bool branch_taken_0x254ad8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254ADCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
        if (branch_taken_0x254ad8) {
            ctx->pc = 0x254AF8u;
            goto label_254af8;
        }
    }
    ctx->pc = 0x254AE0u;
    // 0x254ae0: 0x24050002
    ctx->pc = 0x254ae0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x254ae4: 0xc0b41b8
    ctx->pc = 0x254AE4u;
    SET_GPR_U32(ctx, 31, 0x254AECu);
    ctx->pc = 0x254AE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254AECu; }
    }
    if (ctx->pc != 0x254AECu) { return; }
    ctx->pc = 0x254AECu;
    // 0x254aec: 0x8e240028
    ctx->pc = 0x254aecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x254af0: 0x1000001d
    ctx->pc = 0x254AF0u;
    {
        const bool branch_taken_0x254af0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254AF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x254af0) {
            ctx->pc = 0x254B68u;
            goto label_254b68;
        }
    }
    ctx->pc = 0x254AF8u;
label_254af8:
    // 0x254af8: 0x24050002
    ctx->pc = 0x254af8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x254afc: 0xc0b41e4
    ctx->pc = 0x254AFCu;
    SET_GPR_U32(ctx, 31, 0x254B04u);
    ctx->pc = 0x254B00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B04u; }
    }
    if (ctx->pc != 0x254B04u) { return; }
    ctx->pc = 0x254B04u;
    // 0x254b04: 0x8e240028
    ctx->pc = 0x254b04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x254b08: 0x200282d
    ctx->pc = 0x254b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b0c: 0xc0b40c0
    ctx->pc = 0x254B0Cu;
    SET_GPR_U32(ctx, 31, 0x254B14u);
    ctx->pc = 0x254B10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B14u; }
    }
    if (ctx->pc != 0x254B14u) { return; }
    ctx->pc = 0x254B14u;
    // 0x254b14: 0x100000ad
    ctx->pc = 0x254B14u;
    {
        const bool branch_taken_0x254b14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254B18u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x254b14) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254B1Cu;
label_254b1c:
    // 0x254b1c: 0x8e240028
    ctx->pc = 0x254b1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x254b20: 0x24050002
    ctx->pc = 0x254b20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x254b24: 0xc0b41e4
    ctx->pc = 0x254B24u;
    SET_GPR_U32(ctx, 31, 0x254B2Cu);
    ctx->pc = 0x254B28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B2Cu; }
    }
    if (ctx->pc != 0x254B2Cu) { return; }
    ctx->pc = 0x254B2Cu;
    // 0x254b2c: 0x120000a7
    ctx->pc = 0x254B2Cu;
    {
        const bool branch_taken_0x254b2c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x254B30u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x254b2c) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254B34u;
    // 0x254b34: 0x8c82080c
    ctx->pc = 0x254b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x254b38: 0x10400003
    ctx->pc = 0x254B38u;
    {
        const bool branch_taken_0x254b38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254B3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x254b38) {
            ctx->pc = 0x254B48u;
            goto label_254b48;
        }
    }
    ctx->pc = 0x254B40u;
    // 0x254b40: 0x10000004
    ctx->pc = 0x254B40u;
    {
        const bool branch_taken_0x254b40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254B44u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x254b40) {
            ctx->pc = 0x254B54u;
            goto label_254b54;
        }
    }
    ctx->pc = 0x254B48u;
label_254b48:
    // 0x254b48: 0x8c42ffbc
    ctx->pc = 0x254b48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x254b4c: 0x210c0
    ctx->pc = 0x254b4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x254b50: 0x2028023
    ctx->pc = 0x254b50u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_254b54:
    // 0x254b54: 0x6010002
    ctx->pc = 0x254B54u;
    {
        const bool branch_taken_0x254b54 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x254B58u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x254b54) {
            ctx->pc = 0x254B60u;
            goto label_254b60;
        }
    }
    ctx->pc = 0x254B5Cu;
    // 0x254b5c: 0x802d
    ctx->pc = 0x254b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254b60:
    // 0x254b60: 0x8e240028
    ctx->pc = 0x254b60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x254b64: 0x200282d
    ctx->pc = 0x254b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_254b68:
    // 0x254b68: 0xc0b40c0
    ctx->pc = 0x254B68u;
    SET_GPR_U32(ctx, 31, 0x254B70u);
    ctx->pc = 0x254B6Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254B70u; }
    }
    if (ctx->pc != 0x254B70u) { return; }
    ctx->pc = 0x254B70u;
    // 0x254b70: 0x10000096
    ctx->pc = 0x254B70u;
    {
        const bool branch_taken_0x254b70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x254b70) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254B78u;
label_254b78:
    // 0x254b78: 0x8e230010
    ctx->pc = 0x254b78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254b7c: 0x3c020200
    ctx->pc = 0x254b7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
    // 0x254b80: 0x621024
    ctx->pc = 0x254b80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254b84: 0x1040003c
    ctx->pc = 0x254B84u;
    {
        const bool branch_taken_0x254b84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254B88u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x254b84) {
            ctx->pc = 0x254C78u;
            goto label_254c78;
        }
    }
    ctx->pc = 0x254B8Cu;
    // 0x254b8c: 0x1440000b
    ctx->pc = 0x254B8Cu;
    {
        const bool branch_taken_0x254b8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254B90u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 32));
        if (branch_taken_0x254b8c) {
            ctx->pc = 0x254BBCu;
            goto label_254bbc;
        }
    }
    ctx->pc = 0x254B94u;
    // 0x254b94: 0x2ac20002
    ctx->pc = 0x254b94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 2));
    // 0x254b98: 0x14400008
    ctx->pc = 0x254B98u;
    {
        const bool branch_taken_0x254b98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254B9Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 32));
        if (branch_taken_0x254b98) {
            ctx->pc = 0x254BBCu;
            goto label_254bbc;
        }
    }
    ctx->pc = 0x254BA0u;
    // 0x254ba0: 0x3c020030
    ctx->pc = 0x254ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x254ba4: 0x621025
    ctx->pc = 0x254ba4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254ba8: 0xae220010
    ctx->pc = 0x254ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x254bac: 0x92220016
    ctx->pc = 0x254bacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x254bb0: 0x304200ef
    ctx->pc = 0x254bb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 239));
    // 0x254bb4: 0x100000a0
    ctx->pc = 0x254BB4u;
    {
        const bool branch_taken_0x254bb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254BB8u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x254bb4) {
            ctx->pc = 0x254E38u;
            goto label_254e38;
        }
    }
    ctx->pc = 0x254BBCu;
label_254bbc:
    // 0x254bbc: 0x10400015
    ctx->pc = 0x254BBCu;
    {
        const bool branch_taken_0x254bbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254BC0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x254bbc) {
            ctx->pc = 0x254C14u;
            goto label_254c14;
        }
    }
    ctx->pc = 0x254BC4u;
    // 0x254bc4: 0x3242000f
    ctx->pc = 0x254bc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 15));
    // 0x254bc8: 0x50400008
    ctx->pc = 0x254BC8u;
    {
        const bool branch_taken_0x254bc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x254bc8) {
            ctx->pc = 0x254BCCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->pc = 0x254BECu;
            goto label_254bec;
        }
    }
    ctx->pc = 0x254BD0u;
    // 0x254bd0: 0x8e220010
    ctx->pc = 0x254bd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254bd4: 0x3c03ffcf
    ctx->pc = 0x254bd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65487 << 16));
    // 0x254bd8: 0x3463ffff
    ctx->pc = 0x254bd8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x254bdc: 0x431024
    ctx->pc = 0x254bdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254be0: 0xae220010
    ctx->pc = 0x254be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x254be4: 0x10000079
    ctx->pc = 0x254BE4u;
    {
        const bool branch_taken_0x254be4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254BE8u;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 48));
        if (branch_taken_0x254be4) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254BECu;
label_254bec:
    // 0x254bec: 0x3c020080
    ctx->pc = 0x254becu;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x254bf0: 0x621024
    ctx->pc = 0x254bf0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254bf4: 0x10400075
    ctx->pc = 0x254BF4u;
    {
        const bool branch_taken_0x254bf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254BF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
        if (branch_taken_0x254bf4) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254BFCu;
    // 0x254bfc: 0x621025
    ctx->pc = 0x254bfcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254c00: 0xae220010
    ctx->pc = 0x254c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x254c04: 0x2402ffcf
    ctx->pc = 0x254c04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x254c08: 0x2429024
    ctx->pc = 0x254c08u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_254c0c:
    // 0x254c0c: 0x1000006f
    ctx->pc = 0x254C0Cu;
    {
        const bool branch_taken_0x254c0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254C10u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x254c0c) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254C14u;
label_254c14:
    // 0x254c14: 0x32420020
    ctx->pc = 0x254c14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 32));
    // 0x254c18: 0x10400006
    ctx->pc = 0x254C18u;
    {
        const bool branch_taken_0x254c18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254C1Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
        if (branch_taken_0x254c18) {
            ctx->pc = 0x254C34u;
            goto label_254c34;
        }
    }
    ctx->pc = 0x254C20u;
    // 0x254c20: 0x8e220010
    ctx->pc = 0x254c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254c24: 0x431025
    ctx->pc = 0x254c24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254c28: 0x3c03ffef
    ctx->pc = 0x254c28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65519 << 16));
    // 0x254c2c: 0x10000006
    ctx->pc = 0x254C2Cu;
    {
        const bool branch_taken_0x254c2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254C30u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
        if (branch_taken_0x254c2c) {
            ctx->pc = 0x254C48u;
            goto label_254c48;
        }
    }
    ctx->pc = 0x254C34u;
label_254c34:
    // 0x254c34: 0x8e220010
    ctx->pc = 0x254c34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254c38: 0x3c030010
    ctx->pc = 0x254c38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x254c3c: 0x431025
    ctx->pc = 0x254c3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254c40: 0x3c03ffdf
    ctx->pc = 0x254c40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65503 << 16));
    // 0x254c44: 0x3463ffff
    ctx->pc = 0x254c44u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_254c48:
    // 0x254c48: 0x431024
    ctx->pc = 0x254c48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254c4c: 0xae220010
    ctx->pc = 0x254c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x254c50: 0x8e240010
    ctx->pc = 0x254c50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254c54: 0x3c030050
    ctx->pc = 0x254c54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x254c58: 0x831024
    ctx->pc = 0x254c58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254c5c: 0x1043ffeb
    ctx->pc = 0x254C5Cu;
    {
        const bool branch_taken_0x254c5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x254C60u;
        SET_GPR_U32(ctx, 3, ((uint32_t)160 << 16));
        if (branch_taken_0x254c5c) {
            ctx->pc = 0x254C0Cu;
            goto label_254c0c;
        }
    }
    ctx->pc = 0x254C64u;
    // 0x254c64: 0x831024
    ctx->pc = 0x254c64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254c68: 0x14430058
    ctx->pc = 0x254C68u;
    {
        const bool branch_taken_0x254c68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x254c68) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254C70u;
    // 0x254c70: 0x10000056
    ctx->pc = 0x254C70u;
    {
        const bool branch_taken_0x254c70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254C74u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x254c70) {
            ctx->pc = 0x254DCCu;
            goto label_254dcc;
        }
    }
    ctx->pc = 0x254C78u;
label_254c78:
    // 0x254c78: 0x1440000f
    ctx->pc = 0x254C78u;
    {
        const bool branch_taken_0x254c78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254C7Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x254c78) {
            ctx->pc = 0x254CB8u;
            goto label_254cb8;
        }
    }
    ctx->pc = 0x254C80u;
    // 0x254c80: 0x2ac20002
    ctx->pc = 0x254c80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 2));
    // 0x254c84: 0x1440000c
    ctx->pc = 0x254C84u;
    {
        const bool branch_taken_0x254c84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254C88u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x254c84) {
            ctx->pc = 0x254CB8u;
            goto label_254cb8;
        }
    }
    ctx->pc = 0x254C8Cu;
    // 0x254c8c: 0x151080
    ctx->pc = 0x254c8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
    // 0x254c90: 0x3c04003c
    ctx->pc = 0x254c90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x254c94: 0x24842148
    ctx->pc = 0x254c94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8520));
    // 0x254c98: 0x441821
    ctx->pc = 0x254c98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x254c9c: 0x571021
    ctx->pc = 0x254c9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x254ca0: 0xc4610000
    ctx->pc = 0x254ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254ca4: 0xc4400000
    ctx->pc = 0x254ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254ca8: 0x46000840
    ctx->pc = 0x254ca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x254cac: 0x8e220028
    ctx->pc = 0x254cacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x254cb0: 0x10000061
    ctx->pc = 0x254CB0u;
    {
        const bool branch_taken_0x254cb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254CB4u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        if (branch_taken_0x254cb0) {
            ctx->pc = 0x254E38u;
            goto label_254e38;
        }
    }
    ctx->pc = 0x254CB8u;
label_254cb8:
    // 0x254cb8: 0x10400003
    ctx->pc = 0x254CB8u;
    {
        const bool branch_taken_0x254cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254CBCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x254cb8) {
            ctx->pc = 0x254CC8u;
            goto label_254cc8;
        }
    }
    ctx->pc = 0x254CC0u;
    // 0x254cc0: 0x10000003
    ctx->pc = 0x254CC0u;
    {
        const bool branch_taken_0x254cc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254CC4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9720));
        if (branch_taken_0x254cc0) {
            ctx->pc = 0x254CD0u;
            goto label_254cd0;
        }
    }
    ctx->pc = 0x254CC8u;
label_254cc8:
    // 0x254cc8: 0x3c03003c
    ctx->pc = 0x254cc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x254ccc: 0x246323a0
    ctx->pc = 0x254cccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9120));
label_254cd0:
    // 0x254cd0: 0x151080
    ctx->pc = 0x254cd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
    // 0x254cd4: 0x431821
    ctx->pc = 0x254cd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254cd8: 0x571021
    ctx->pc = 0x254cd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x254cdc: 0xc4610000
    ctx->pc = 0x254cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254ce0: 0xc4400000
    ctx->pc = 0x254ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254ce4: 0x46000881
    ctx->pc = 0x254ce4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x254ce8: 0x3c020031
    ctx->pc = 0x254ce8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x254cec: 0xc441ffa8
    ctx->pc = 0x254cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254cf0: 0x3c014080
    ctx->pc = 0x254cf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x254cf4: 0x44810000
    ctx->pc = 0x254cf4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254cf8: 0x46000842
    ctx->pc = 0x254cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x254cfc: 0x3c013a83
    ctx->pc = 0x254cfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x254d00: 0x3421126f
    ctx->pc = 0x254d00u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x254d04: 0x44810000
    ctx->pc = 0x254d04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254d08: 0x46020034
    ctx->pc = 0x254d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254d0c: 0x0
    ctx->pc = 0x254d0cu;
    // NOP
    // 0x254d10: 0x45000004
    ctx->pc = 0x254D10u;
    {
        const bool branch_taken_0x254d10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254D14u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x254d10) {
            ctx->pc = 0x254D24u;
            goto label_254d24;
        }
    }
    ctx->pc = 0x254D18u;
    // 0x254d18: 0x46020834
    ctx->pc = 0x254d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254d1c: 0x1000000b
    ctx->pc = 0x254D1Cu;
    {
        const bool branch_taken_0x254d1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x254d1c) {
            ctx->pc = 0x254D4Cu;
            goto label_254d4c;
        }
    }
    ctx->pc = 0x254D24u;
label_254d24:
    // 0x254d24: 0x3c01ba83
    ctx->pc = 0x254d24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)47747 << 16));
    // 0x254d28: 0x3421126f
    ctx->pc = 0x254d28u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x254d2c: 0x44810000
    ctx->pc = 0x254d2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254d30: 0x46001034
    ctx->pc = 0x254d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254d34: 0x0
    ctx->pc = 0x254d34u;
    // NOP
    // 0x254d38: 0x45000008
    ctx->pc = 0x254D38u;
    {
        const bool branch_taken_0x254d38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254D3Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 32));
        if (branch_taken_0x254d38) {
            ctx->pc = 0x254D5Cu;
            goto label_254d5c;
        }
    }
    ctx->pc = 0x254D40u;
    // 0x254d40: 0x46000847
    ctx->pc = 0x254d40u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x254d44: 0x46011034
    ctx->pc = 0x254d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254d48: 0x0
    ctx->pc = 0x254d48u;
    // NOP
label_254d4c:
    // 0x254d4c: 0x45030006
    ctx->pc = 0x254D4Cu;
    {
        const bool branch_taken_0x254d4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x254d4c) {
            ctx->pc = 0x254D50u;
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x254D68u;
            goto label_254d68;
        }
    }
    ctx->pc = 0x254D54u;
    // 0x254d54: 0x10000004
    ctx->pc = 0x254D54u;
    {
        const bool branch_taken_0x254d54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x254d54) {
            ctx->pc = 0x254D68u;
            goto label_254d68;
        }
    }
    ctx->pc = 0x254D5Cu;
label_254d5c:
    // 0x254d5c: 0x50400002
    ctx->pc = 0x254D5Cu;
    {
        const bool branch_taken_0x254d5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x254d5c) {
            ctx->pc = 0x254D60u;
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x254D68u;
            goto label_254d68;
        }
    }
    ctx->pc = 0x254D64u;
    // 0x254d64: 0x3a520020
    ctx->pc = 0x254d64u;
    SET_GPR_U32(ctx, 18, XOR32(GPR_U32(ctx, 18), 32));
label_254d68:
    // 0x254d68: 0x12600009
    ctx->pc = 0x254D68u;
    {
        const bool branch_taken_0x254d68 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x254D6Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x254d68) {
            ctx->pc = 0x254D90u;
            goto label_254d90;
        }
    }
    ctx->pc = 0x254D70u;
    // 0x254d70: 0x571021
    ctx->pc = 0x254d70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x254d74: 0xc4400000
    ctx->pc = 0x254d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254d78: 0x46001000
    ctx->pc = 0x254d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x254d7c: 0xe4400000
    ctx->pc = 0x254d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x254d80: 0x8e220010
    ctx->pc = 0x254d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254d84: 0x3c030800
    ctx->pc = 0x254d84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
    // 0x254d88: 0x10000005
    ctx->pc = 0x254D88u;
    {
        const bool branch_taken_0x254d88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254D8Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x254d88) {
            ctx->pc = 0x254DA0u;
            goto label_254da0;
        }
    }
    ctx->pc = 0x254D90u;
label_254d90:
    // 0x254d90: 0x8e220010
    ctx->pc = 0x254d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254d94: 0x3c03f7ff
    ctx->pc = 0x254d94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)63487 << 16));
    // 0x254d98: 0x3463ffff
    ctx->pc = 0x254d98u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x254d9c: 0x431024
    ctx->pc = 0x254d9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_254da0:
    // 0x254da0: 0xae220010
    ctx->pc = 0x254da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x254da4: 0x151080
    ctx->pc = 0x254da4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
    // 0x254da8: 0x3c04003c
    ctx->pc = 0x254da8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x254dac: 0x24842148
    ctx->pc = 0x254dacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8520));
    // 0x254db0: 0x441821
    ctx->pc = 0x254db0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x254db4: 0x571021
    ctx->pc = 0x254db4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x254db8: 0xc4610000
    ctx->pc = 0x254db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254dbc: 0xc4400000
    ctx->pc = 0x254dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254dc0: 0x46000840
    ctx->pc = 0x254dc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x254dc4: 0x8e220028
    ctx->pc = 0x254dc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x254dc8: 0xe4410034
    ctx->pc = 0x254dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_254dcc:
    // 0x254dcc: 0x1260000b
    ctx->pc = 0x254DCCu;
    {
        const bool branch_taken_0x254dcc = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x254DD0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x254dcc) {
            ctx->pc = 0x254DFCu;
            goto label_254dfc;
        }
    }
    ctx->pc = 0x254DD4u;
    // 0x254dd4: 0x14400003
    ctx->pc = 0x254DD4u;
    {
        const bool branch_taken_0x254dd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254DD8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x254dd4) {
            ctx->pc = 0x254DE4u;
            goto label_254de4;
        }
    }
    ctx->pc = 0x254DDCu;
    // 0x254ddc: 0x24020001
    ctx->pc = 0x254ddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x254de0: 0xa2220035
    ctx->pc = 0x254de0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 2));
label_254de4:
    // 0x254de4: 0x36420010
    ctx->pc = 0x254de4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 18), 16));
    // 0x254de8: 0x43900a
    ctx->pc = 0x254de8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
    // 0x254dec: 0x8e220010
    ctx->pc = 0x254decu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254df0: 0x3c032000
    ctx->pc = 0x254df0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x254df4: 0x10000007
    ctx->pc = 0x254DF4u;
    {
        const bool branch_taken_0x254df4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254DF8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x254df4) {
            ctx->pc = 0x254E14u;
            goto label_254e14;
        }
    }
    ctx->pc = 0x254DFCu;
label_254dfc:
    // 0x254dfc: 0x2402ffef
    ctx->pc = 0x254dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x254e00: 0x2429024
    ctx->pc = 0x254e00u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x254e04: 0x8e220010
    ctx->pc = 0x254e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x254e08: 0x3c03dfff
    ctx->pc = 0x254e08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)57343 << 16));
    // 0x254e0c: 0x3463ffff
    ctx->pc = 0x254e0cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x254e10: 0x431024
    ctx->pc = 0x254e10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_254e14:
    // 0x254e14: 0xae220010
    ctx->pc = 0x254e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x254e18: 0x32820047
    ctx->pc = 0x254e18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 71));
    // 0x254e1c: 0x54400006
    ctx->pc = 0x254E1Cu;
    {
        const bool branch_taken_0x254e1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x254e1c) {
            ctx->pc = 0x254E20u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 18));
            ctx->pc = 0x254E38u;
            goto label_254e38;
        }
    }
    ctx->pc = 0x254E24u;
    // 0x254e24: 0x32820010
    ctx->pc = 0x254e24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 16));
    // 0x254e28: 0x14400002
    ctx->pc = 0x254E28u;
    {
        const bool branch_taken_0x254e28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254E2Cu;
        if (GPR_U32(ctx, 22) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 0));
        if (branch_taken_0x254e28) {
            ctx->pc = 0x254E34u;
            goto label_254e34;
        }
    }
    ctx->pc = 0x254E30u;
    // 0x254e30: 0x902d
    ctx->pc = 0x254e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254e34:
    // 0x254e34: 0xa2320016
    ctx->pc = 0x254e34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 18));
label_254e38:
    // 0x254e38: 0x26b50001
    ctx->pc = 0x254e38u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x254e3c: 0x3c020034
    ctx->pc = 0x254e3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x254e40: 0x8c42d1b8
    ctx->pc = 0x254e40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955448)));
    // 0x254e44: 0x2a2102a
    ctx->pc = 0x254e44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 2)));
    // 0x254e48: 0x1440fe71
    ctx->pc = 0x254E48u;
    {
        const bool branch_taken_0x254e48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254E4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x254e48) {
            ctx->pc = 0x254810u;
            goto label_254810;
        }
    }
    ctx->pc = 0x254E50u;
label_254e50:
    // 0x254e50: 0x8fa20010
    ctx->pc = 0x254e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254e54: 0x14400006
    ctx->pc = 0x254E54u;
    {
        const bool branch_taken_0x254e54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254E58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x254e54) {
            ctx->pc = 0x254E70u;
            goto label_254e70;
        }
    }
    ctx->pc = 0x254E5Cu;
    // 0x254e5c: 0x2404ffff
    ctx->pc = 0x254e5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254e60: 0x282d
    ctx->pc = 0x254e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e64: 0xc098046
    ctx->pc = 0x254E64u;
    SET_GPR_U32(ctx, 31, 0x254E6Cu);
    ctx->pc = 0x254E68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x260118u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioElevator_0x260118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E6Cu; }
    }
    if (ctx->pc != 0x254E6Cu) { return; }
    ctx->pc = 0x254E6Cu;
    // 0x254e6c: 0xdfbf00b0
    ctx->pc = 0x254e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_254e70:
    // 0x254e70: 0xdfbe00a0
    ctx->pc = 0x254e70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x254e74: 0xdfb70090
    ctx->pc = 0x254e74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x254e78: 0xdfb60080
    ctx->pc = 0x254e78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x254e7c: 0xdfb50070
    ctx->pc = 0x254e7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x254e80: 0xdfb40060
    ctx->pc = 0x254e80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x254e84: 0xdfb30050
    ctx->pc = 0x254e84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254e88: 0xdfb20040
    ctx->pc = 0x254e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254e8c: 0xdfb10030
    ctx->pc = 0x254e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254e90: 0xdfb00020
    ctx->pc = 0x254e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254e94: 0x3e00008
    ctx->pc = 0x254E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254E98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254810u: goto label_254810;
            case 0x2548B4u: goto label_2548b4;
            case 0x2548DCu: goto label_2548dc;
            case 0x2548ECu: goto label_2548ec;
            case 0x254964u: goto label_254964;
            case 0x2549A0u: goto label_2549a0;
            case 0x2549D8u: goto label_2549d8;
            case 0x254A00u: goto label_254a00;
            case 0x254A04u: goto label_254a04;
            case 0x254A30u: goto label_254a30;
            case 0x254A40u: goto label_254a40;
            case 0x254A5Cu: goto label_254a5c;
            case 0x254A64u: goto label_254a64;
            case 0x254A74u: goto label_254a74;
            case 0x254A78u: goto label_254a78;
            case 0x254AA0u: goto label_254aa0;
            case 0x254AA4u: goto label_254aa4;
            case 0x254AC8u: goto label_254ac8;
            case 0x254AD4u: goto label_254ad4;
            case 0x254AF8u: goto label_254af8;
            case 0x254B1Cu: goto label_254b1c;
            case 0x254B48u: goto label_254b48;
            case 0x254B54u: goto label_254b54;
            case 0x254B60u: goto label_254b60;
            case 0x254B68u: goto label_254b68;
            case 0x254B78u: goto label_254b78;
            case 0x254BBCu: goto label_254bbc;
            case 0x254BECu: goto label_254bec;
            case 0x254C0Cu: goto label_254c0c;
            case 0x254C14u: goto label_254c14;
            case 0x254C34u: goto label_254c34;
            case 0x254C48u: goto label_254c48;
            case 0x254C78u: goto label_254c78;
            case 0x254CB8u: goto label_254cb8;
            case 0x254CC8u: goto label_254cc8;
            case 0x254CD0u: goto label_254cd0;
            case 0x254D24u: goto label_254d24;
            case 0x254D4Cu: goto label_254d4c;
            case 0x254D5Cu: goto label_254d5c;
            case 0x254D68u: goto label_254d68;
            case 0x254D90u: goto label_254d90;
            case 0x254DA0u: goto label_254da0;
            case 0x254DCCu: goto label_254dcc;
            case 0x254DE4u: goto label_254de4;
            case 0x254DFCu: goto label_254dfc;
            case 0x254E14u: goto label_254e14;
            case 0x254E34u: goto label_254e34;
            case 0x254E38u: goto label_254e38;
            case 0x254E50u: goto label_254e50;
            case 0x254E70u: goto label_254e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x254E9Cu;
}
