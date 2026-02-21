#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lshift
// Address: 0x302808 - 0x302980
void _lshift_0x302808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x302808u;

    // 0x302808: 0x27bdff80
    ctx->pc = 0x302808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x30280c: 0xffb60060
    ctx->pc = 0x30280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x302810: 0xffb40040
    ctx->pc = 0x302810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x302814: 0x80b02d
    ctx->pc = 0x302814u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302818: 0xffb10010
    ctx->pc = 0x302818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x30281c: 0x6a143
    ctx->pc = 0x30281cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 5));
    // 0x302820: 0xffb00000
    ctx->pc = 0x302820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302824: 0xa0882d
    ctx->pc = 0x302824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302828: 0xffbf0070
    ctx->pc = 0x302828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x30282c: 0xffb50050
    ctx->pc = 0x30282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x302830: 0xffb30030
    ctx->pc = 0x302830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x302834: 0xffb20020
    ctx->pc = 0x302834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x302838: 0x8e230010
    ctx->pc = 0x302838u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x30283c: 0x8e270008
    ctx->pc = 0x30283cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x302840: 0x2831821
    ctx->pc = 0x302840u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x302844: 0x24700001
    ctx->pc = 0x302844u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 1));
    // 0x302848: 0xf0102a
    ctx->pc = 0x302848u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x30284c: 0x1040000d
    ctx->pc = 0x30284Cu;
    {
        const bool branch_taken_0x30284c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x302850u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        if (branch_taken_0x30284c) {
            ctx->pc = 0x302884u;
            goto label_302884;
        }
    }
    ctx->pc = 0x302854u;
    // 0x302854: 0x30d3001f
    ctx->pc = 0x302854u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 6), 31));
    // 0x302858: 0x26320014
    ctx->pc = 0x302858u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 20));
    // 0x30285c: 0x0
    ctx->pc = 0x30285cu;
    // NOP
label_302860:
    // 0x302860: 0x73840
    ctx->pc = 0x302860u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x302864: 0x24a50001
    ctx->pc = 0x302864u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x302868: 0xf0102a
    ctx->pc = 0x302868u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x30286c: 0x0
    ctx->pc = 0x30286cu;
    // NOP
    // 0x302870: 0x0
    ctx->pc = 0x302870u;
    // NOP
    // 0x302874: 0x1440fffa
    ctx->pc = 0x302874u;
    {
        const bool branch_taken_0x302874 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x302874) {
            ctx->pc = 0x302860u;
            goto label_302860;
        }
    }
    ctx->pc = 0x30287Cu;
    // 0x30287c: 0x10000003
    ctx->pc = 0x30287Cu;
    {
        const bool branch_taken_0x30287c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x30287c) {
            ctx->pc = 0x30288Cu;
            goto label_30288c;
        }
    }
    ctx->pc = 0x302884u;
label_302884:
    // 0x302884: 0x30d3001f
    ctx->pc = 0x302884u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 6), 31));
    // 0x302888: 0x26320014
    ctx->pc = 0x302888u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 20));
label_30288c:
    // 0x30288c: 0xc0c0808
    ctx->pc = 0x30288Cu;
    SET_GPR_U32(ctx, 31, 0x302894u);
    ctx->pc = 0x302890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302020u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x302020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302894u; }
    }
    if (ctx->pc != 0x302894u) { return; }
    ctx->pc = 0x302894u;
    // 0x302894: 0x40a82d
    ctx->pc = 0x302894u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302898: 0x1a80000a
    ctx->pc = 0x302898u;
    {
        const bool branch_taken_0x302898 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x30289Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 20));
        if (branch_taken_0x302898) {
            ctx->pc = 0x3028C4u;
            goto label_3028c4;
        }
    }
    ctx->pc = 0x3028A0u;
    // 0x3028a0: 0x280382d
    ctx->pc = 0x3028a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3028a4: 0x0
    ctx->pc = 0x3028a4u;
    // NOP
label_3028a8:
    // 0x3028a8: 0xacc00000
    ctx->pc = 0x3028a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x3028ac: 0x24e7ffff
    ctx->pc = 0x3028acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3028b0: 0x24c60004
    ctx->pc = 0x3028b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x3028b4: 0x0
    ctx->pc = 0x3028b4u;
    // NOP
    // 0x3028b8: 0x0
    ctx->pc = 0x3028b8u;
    // NOP
    // 0x3028bc: 0x14e0fffa
    ctx->pc = 0x3028BCu;
    {
        const bool branch_taken_0x3028bc = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x3028bc) {
            ctx->pc = 0x3028A8u;
            goto label_3028a8;
        }
    }
    ctx->pc = 0x3028C4u;
label_3028c4:
    // 0x3028c4: 0x8e220010
    ctx->pc = 0x3028c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3028c8: 0x240202d
    ctx->pc = 0x3028c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3028cc: 0x21080
    ctx->pc = 0x3028ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x3028d0: 0x12600013
    ctx->pc = 0x3028D0u;
    {
        const bool branch_taken_0x3028d0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x3028D4u;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x3028d0) {
            ctx->pc = 0x302920u;
            goto label_302920;
        }
    }
    ctx->pc = 0x3028D8u;
    // 0x3028d8: 0x24020020
    ctx->pc = 0x3028d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x3028dc: 0x182d
    ctx->pc = 0x3028dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3028e0: 0x532823
    ctx->pc = 0x3028e0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3028e4: 0x26080001
    ctx->pc = 0x3028e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 1));
label_3028e8:
    // 0x3028e8: 0x8c820000
    ctx->pc = 0x3028e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3028ec: 0x2621004
    ctx->pc = 0x3028ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x3028f0: 0x431025
    ctx->pc = 0x3028f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3028f4: 0xacc20000
    ctx->pc = 0x3028f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3028f8: 0x24c60004
    ctx->pc = 0x3028f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x3028fc: 0x8c830000
    ctx->pc = 0x3028fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x302900: 0x24840004
    ctx->pc = 0x302900u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x302904: 0x87102b
    ctx->pc = 0x302904u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x302908: 0x1440fff7
    ctx->pc = 0x302908u;
    {
        const bool branch_taken_0x302908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x30290Cu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x302908) {
            ctx->pc = 0x3028E8u;
            goto label_3028e8;
        }
    }
    ctx->pc = 0x302910u;
    // 0x302910: 0x103800b
    ctx->pc = 0x302910u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 8));
    // 0x302914: 0xacc30000
    ctx->pc = 0x302914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x302918: 0x1000000a
    ctx->pc = 0x302918u;
    {
        const bool branch_taken_0x302918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x30291Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x302918) {
            ctx->pc = 0x302944u;
            goto label_302944;
        }
    }
    ctx->pc = 0x302920u;
label_302920:
    // 0x302920: 0x2605ffff
    ctx->pc = 0x302920u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x302924: 0x0
    ctx->pc = 0x302924u;
    // NOP
label_302928:
    // 0x302928: 0x8c820000
    ctx->pc = 0x302928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30292c: 0x24840004
    ctx->pc = 0x30292cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x302930: 0xacc20000
    ctx->pc = 0x302930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x302934: 0x87182b
    ctx->pc = 0x302934u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x302938: 0x24c60004
    ctx->pc = 0x302938u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x30293c: 0x1460fffa
    ctx->pc = 0x30293Cu;
    {
        const bool branch_taken_0x30293c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x30293c) {
            ctx->pc = 0x302928u;
            goto label_302928;
        }
    }
    ctx->pc = 0x302944u;
label_302944:
    // 0x302944: 0xaea50010
    ctx->pc = 0x302944u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 5));
    // 0x302948: 0x2c0202d
    ctx->pc = 0x302948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30294c: 0xc0c0832
    ctx->pc = 0x30294Cu;
    SET_GPR_U32(ctx, 31, 0x302954u);
    ctx->pc = 0x302950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x3020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302954u; }
    }
    if (ctx->pc != 0x302954u) { return; }
    ctx->pc = 0x302954u;
    // 0x302954: 0x2a0102d
    ctx->pc = 0x302954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302958: 0xdfbf0070
    ctx->pc = 0x302958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30295c: 0xdfb60060
    ctx->pc = 0x30295cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x302960: 0xdfb50050
    ctx->pc = 0x302960u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x302964: 0xdfb40040
    ctx->pc = 0x302964u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302968: 0xdfb30030
    ctx->pc = 0x302968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30296c: 0xdfb20020
    ctx->pc = 0x30296cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302970: 0xdfb10010
    ctx->pc = 0x302970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302974: 0xdfb00000
    ctx->pc = 0x302974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302978: 0x3e00008
    ctx->pc = 0x302978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30297Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302860u: goto label_302860;
            case 0x302884u: goto label_302884;
            case 0x30288Cu: goto label_30288c;
            case 0x3028A8u: goto label_3028a8;
            case 0x3028C4u: goto label_3028c4;
            case 0x3028E8u: goto label_3028e8;
            case 0x302920u: goto label_302920;
            case 0x302928u: goto label_302928;
            case 0x302944u: goto label_302944;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302980u;
}
