#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDmaSchedule
// Address: 0x2a66a0 - 0x2a68c8
void pbDmaSchedule_0x2a66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a66a0u;

    // 0x2a66a0: 0x27bdffb0
    ctx->pc = 0x2a66a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a66a4: 0xffbf0040
    ctx->pc = 0x2a66a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a66a8: 0xffbe0030
    ctx->pc = 0x2a66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x2a66ac: 0xffb00020
    ctx->pc = 0x2a66acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a66b0: 0x3a0f02d
    ctx->pc = 0x2a66b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66b4: 0xafc40000
    ctx->pc = 0x2a66b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a66b8: 0xafc50004
    ctx->pc = 0x2a66b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2a66bc: 0xafc60008
    ctx->pc = 0x2a66bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x2a66c0: 0xafc7000c
    ctx->pc = 0x2a66c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x2a66c4: 0x3c100036
    ctx->pc = 0x2a66c4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a66c8: 0x8e10dee0
    ctx->pc = 0x2a66c8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a66cc: 0x40024800
    ctx->pc = 0x2a66ccu;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2a66d0: 0x40182d
    ctx->pc = 0x2a66d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66d4: 0xafc3001c
    ctx->pc = 0x2a66d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 3));
    // 0x2a66d8: 0x8fc2001c
    ctx->pc = 0x2a66d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2a66dc: 0x3c01003a
    ctx->pc = 0x2a66dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2a66e0: 0xac222198
    ctx->pc = 0x2a66e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8600), GPR_U32(ctx, 2));
    // 0x2a66e4: 0x8fc20000
    ctx->pc = 0x2a66e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a66e8: 0x21b02
    ctx->pc = 0x2a66e8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 12));
    // 0x2a66ec: 0xafc30018
    ctx->pc = 0x2a66ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 3));
    // 0x2a66f0: 0x8fc20018
    ctx->pc = 0x2a66f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a66f4: 0x24030018
    ctx->pc = 0x2a66f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a66f8: 0x431018
    ctx->pc = 0x2a66f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a66fc: 0x2443001c
    ctx->pc = 0x2a66fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 28));
    // 0x2a6700: 0x8e020020
    ctx->pc = 0x2a6700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6704: 0x431821
    ctx->pc = 0x2a6704u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6708: 0xafc30010
    ctx->pc = 0x2a6708u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 3));
    // 0x2a670c: 0x8fc20004
    ctx->pc = 0x2a670cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6710: 0x3c037000
    ctx->pc = 0x2a6710u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x2a6714: 0x431024
    ctx->pc = 0x2a6714u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6718: 0x3c037000
    ctx->pc = 0x2a6718u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x2a671c: 0x14430005
    ctx->pc = 0x2A671Cu;
    {
        const bool branch_taken_0x2a671c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2a671c) {
            ctx->pc = 0x2A6734u;
            goto label_2a6734;
        }
    }
    ctx->pc = 0x2A6724u;
    // 0x2a6724: 0x8fc20004
    ctx->pc = 0x2a6724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6728: 0x3c038000
    ctx->pc = 0x2a6728u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x2a672c: 0x431025
    ctx->pc = 0x2a672cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6730: 0xafc20004
    ctx->pc = 0x2a6730u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a6734:
    // 0x2a6734: 0x8fc20010
    ctx->pc = 0x2a6734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6738: 0x8c440014
    ctx->pc = 0x2a6738u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a673c: 0x3c05003b
    ctx->pc = 0x2a673cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2a6740: 0x24a5eb70
    ctx->pc = 0x2a6740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962032));
    // 0x2a6744: 0xc0a9fe2
    ctx->pc = 0x2A6744u;
    SET_GPR_U32(ctx, 31, 0x2A674Cu);
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A674Cu; }
    }
    if (ctx->pc != 0x2A674Cu) { return; }
    ctx->pc = 0x2A674Cu;
    // 0x2a674c: 0x8fc20018
    ctx->pc = 0x2a674cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a6750: 0x40182d
    ctx->pc = 0x2a6750u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6754: 0x31100
    ctx->pc = 0x2a6754u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a6758: 0x3c03003c
    ctx->pc = 0x2a6758u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2a675c: 0x246347e8
    ctx->pc = 0x2a675cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18408));
    // 0x2a6760: 0x621021
    ctx->pc = 0x2a6760u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6764: 0xafc20014
    ctx->pc = 0x2a6764u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x2a6768: 0x8fc20014
    ctx->pc = 0x2a6768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a676c: 0x8c430004
    ctx->pc = 0x2a676cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a6770: 0x10600005
    ctx->pc = 0x2A6770u;
    {
        const bool branch_taken_0x2a6770 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6770) {
            ctx->pc = 0x2A6788u;
            goto label_2a6788;
        }
    }
    ctx->pc = 0x2A6778u;
    // 0x2a6778: 0x3c04003b
    ctx->pc = 0x2a6778u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a677c: 0x2484eb80
    ctx->pc = 0x2a677cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962048));
    // 0x2a6780: 0xc0b4976
    ctx->pc = 0x2A6780u;
    SET_GPR_U32(ctx, 31, 0x2A6788u);
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6788u; }
    }
    if (ctx->pc != 0x2A6788u) { return; }
    ctx->pc = 0x2A6788u;
label_2a6788:
    // 0x2a6788: 0x8fc20014
    ctx->pc = 0x2a6788u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a678c: 0x97c30000
    ctx->pc = 0x2a678cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6790: 0xa4430000
    ctx->pc = 0x2a6790u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a6794: 0x8fc20014
    ctx->pc = 0x2a6794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a6798: 0x8fc3000c
    ctx->pc = 0x2a6798u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a679c: 0xac430008
    ctx->pc = 0x2a679cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2a67a0: 0x8fc20014
    ctx->pc = 0x2a67a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a67a4: 0x8fc30004
    ctx->pc = 0x2a67a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a67a8: 0xac430004
    ctx->pc = 0x2a67a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2a67ac: 0x8fc20014
    ctx->pc = 0x2a67acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a67b0: 0x97c30008
    ctx->pc = 0x2a67b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a67b4: 0xa4430002
    ctx->pc = 0x2a67b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a67b8: 0x8fc20014
    ctx->pc = 0x2a67b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a67bc: 0xac40000c
    ctx->pc = 0x2a67bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2a67c0: 0x8fc20010
    ctx->pc = 0x2a67c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a67c4: 0x8fc30014
    ctx->pc = 0x2a67c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a67c8: 0xac430000
    ctx->pc = 0x2a67c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a67cc: 0x8fc20010
    ctx->pc = 0x2a67ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a67d0: 0x8fc30014
    ctx->pc = 0x2a67d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a67d4: 0xac430004
    ctx->pc = 0x2a67d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2a67d8: 0x8fc40014
    ctx->pc = 0x2a67d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a67dc: 0xc0a98dc
    ctx->pc = 0x2A67DCu;
    SET_GPR_U32(ctx, 31, 0x2A67E4u);
    ctx->pc = 0x2A6370u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRecordDmaStart_0x2a6370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A67E4u; }
    }
    if (ctx->pc != 0x2A67E4u) { return; }
    ctx->pc = 0x2A67E4u;
    // 0x2a67e4: 0x24020001
    ctx->pc = 0x2a67e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a67e8: 0x8fc30018
    ctx->pc = 0x2a67e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a67ec: 0x621004
    ctx->pc = 0x2a67ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2a67f0: 0x3c011001
    ctx->pc = 0x2a67f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x2a67f4: 0xac22e010
    ctx->pc = 0x2a67f4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 2)); // MMIO: 0x1000e010
    // 0x2a67f8: 0x8fc30000
    ctx->pc = 0x2a67f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a67fc: 0x30620004
    ctx->pc = 0x2a67fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
    // 0x2a6800: 0x10400008
    ctx->pc = 0x2A6800u;
    {
        const bool branch_taken_0x2a6800 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6800) {
            ctx->pc = 0x2A6824u;
            goto label_2a6824;
        }
    }
    ctx->pc = 0x2A6808u;
    // 0x2a6808: 0x8fc20010
    ctx->pc = 0x2a6808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a680c: 0x8c430010
    ctx->pc = 0x2a680cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a6810: 0x24620030
    ctx->pc = 0x2a6810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 48));
    // 0x2a6814: 0x8fc30004
    ctx->pc = 0x2a6814u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6818: 0xac430000
    ctx->pc = 0x2a6818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a681c: 0x10000006
    ctx->pc = 0x2A681Cu;
    {
        const bool branch_taken_0x2a681c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a681c) {
            ctx->pc = 0x2A6838u;
            goto label_2a6838;
        }
    }
    ctx->pc = 0x2A6824u;
label_2a6824:
    // 0x2a6824: 0x8fc20010
    ctx->pc = 0x2a6824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6828: 0x8c430010
    ctx->pc = 0x2a6828u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a682c: 0x24620010
    ctx->pc = 0x2a682cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a6830: 0x8fc30004
    ctx->pc = 0x2a6830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6834: 0xac430000
    ctx->pc = 0x2a6834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a6838:
    // 0x2a6838: 0x8fc20010
    ctx->pc = 0x2a6838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a683c: 0x8c430010
    ctx->pc = 0x2a683cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a6840: 0x24620020
    ctx->pc = 0x2a6840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a6844: 0x8fc30008
    ctx->pc = 0x2a6844u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6848: 0xac430000
    ctx->pc = 0x2a6848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a684c: 0x8fc30010
    ctx->pc = 0x2a684cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6850: 0x8c620010
    ctx->pc = 0x2a6850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a6854: 0x8fc30000
    ctx->pc = 0x2a6854u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6858: 0x306401ff
    ctx->pc = 0x2a6858u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 511));
    // 0x2a685c: 0xac440000
    ctx->pc = 0x2a685cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a6860: 0x40024800
    ctx->pc = 0x2a6860u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2a6864: 0x40182d
    ctx->pc = 0x2a6864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6868: 0xafc3001c
    ctx->pc = 0x2a6868u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 3));
    // 0x2a686c: 0x8fc2001c
    ctx->pc = 0x2a686cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2a6870: 0x3c03003a
    ctx->pc = 0x2a6870u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2a6874: 0x8c632198
    ctx->pc = 0x2a6874u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8600)));
    // 0x2a6878: 0x431023
    ctx->pc = 0x2a6878u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a687c: 0xafc2001c
    ctx->pc = 0x2a687cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x2a6880: 0x3c02003a
    ctx->pc = 0x2a6880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2a6884: 0x8c422190
    ctx->pc = 0x2a6884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8592)));
    // 0x2a6888: 0x8fc3001c
    ctx->pc = 0x2a6888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2a688c: 0x431021
    ctx->pc = 0x2a688cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6890: 0x3c01003a
    ctx->pc = 0x2a6890u;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2a6894: 0xac222190
    ctx->pc = 0x2a6894u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8592), GPR_U32(ctx, 2));
    // 0x2a6898: 0x3c02003a
    ctx->pc = 0x2a6898u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2a689c: 0x8c422194
    ctx->pc = 0x2a689cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8596)));
    // 0x2a68a0: 0x24430001
    ctx->pc = 0x2a68a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a68a4: 0x3c01003a
    ctx->pc = 0x2a68a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2a68a8: 0xac232194
    ctx->pc = 0x2a68a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8596), GPR_U32(ctx, 3));
    // 0x2a68ac: 0x3c0e82d
    ctx->pc = 0x2a68acu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a68b0: 0xdfbf0040
    ctx->pc = 0x2a68b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a68b4: 0xdfbe0030
    ctx->pc = 0x2a68b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a68b8: 0xdfb00020
    ctx->pc = 0x2a68b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a68bc: 0x27bd0050
    ctx->pc = 0x2a68bcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a68c0: 0x3e00008
    ctx->pc = 0x2A68C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6734u: goto label_2a6734;
            case 0x2A6788u: goto label_2a6788;
            case 0x2A6824u: goto label_2a6824;
            case 0x2A6838u: goto label_2a6838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A68C8u;
}
