#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sequenceExtension
// Address: 0x1207b0 - 0x120914
void _sequenceExtension_0x1207b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1207b0u;

    // 0x1207b0: 0x27bdffa0
    ctx->pc = 0x1207b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1207b4: 0x3c020017
    ctx->pc = 0x1207b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1207b8: 0xffb00000
    ctx->pc = 0x1207b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1207bc: 0x202d
    ctx->pc = 0x1207bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1207c0: 0x24100001
    ctx->pc = 0x1207c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1207c4: 0xffb40040
    ctx->pc = 0x1207c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1207c8: 0xffb30030
    ctx->pc = 0x1207c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1207cc: 0xffb20020
    ctx->pc = 0x1207ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1207d0: 0xffb10010
    ctx->pc = 0x1207d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1207d4: 0xffbf0050
    ctx->pc = 0x1207d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1207d8: 0xc0489e2
    ctx->pc = 0x1207D8u;
    SET_GPR_U32(ctx, 31, 0x1207E0u);
    ctx->pc = 0x1207DCu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8368), GPR_U32(ctx, 16));
    ctx->pc = 0x122788u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x122788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1207E0u; }
    }
    if (ctx->pc != 0x1207E0u) { return; }
    ctx->pc = 0x1207E0u;
    // 0x1207e0: 0xc048fdc
    ctx->pc = 0x1207E0u;
    SET_GPR_U32(ctx, 31, 0x1207E8u);
    ctx->pc = 0x1207E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1207E8u; }
    }
    if (ctx->pc != 0x1207E8u) { return; }
    ctx->pc = 0x1207E8u;
    // 0x1207e8: 0x40882d
    ctx->pc = 0x1207e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1207ec: 0x3c050017
    ctx->pc = 0x1207ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x1207f0: 0x111842
    ctx->pc = 0x1207f0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 17), 1));
    // 0x1207f4: 0x111442
    ctx->pc = 0x1207f4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), 17));
    // 0x1207f8: 0x30740fff
    ctx->pc = 0x1207f8u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), 4095));
    // 0x1207fc: 0x30420003
    ctx->pc = 0x1207fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x120800: 0x112342
    ctx->pc = 0x120800u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 13));
    // 0x120804: 0x111bc2
    ctx->pc = 0x120804u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 17), 15));
    // 0x120808: 0x30930003
    ctx->pc = 0x120808u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 4), 3));
    // 0x12080c: 0x30720003
    ctx->pc = 0x12080cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 3), 3));
    // 0x120810: 0x10500004
    ctx->pc = 0x120810u;
    {
        const bool branch_taken_0x120810 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x120814u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 6476), GPR_U32(ctx, 2));
        if (branch_taken_0x120810) {
            ctx->pc = 0x120824u;
            goto label_120824;
        }
    }
    ctx->pc = 0x120818u;
    // 0x120818: 0x3c040017
    ctx->pc = 0x120818u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x12081c: 0xc048006
    ctx->pc = 0x12081Cu;
    SET_GPR_U32(ctx, 31, 0x120824u);
    ctx->pc = 0x120820u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19712));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120824u; }
    }
    if (ctx->pc != 0x120824u) { return; }
    ctx->pc = 0x120824u;
label_120824:
    // 0x120824: 0x112502
    ctx->pc = 0x120824u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 20));
    // 0x120828: 0x3c100017
    ctx->pc = 0x120828u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x12082c: 0x1114c2
    ctx->pc = 0x12082cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), 19));
    // 0x120830: 0xae041944
    ctx->pc = 0x120830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6468), GPR_U32(ctx, 4));
    // 0x120834: 0x30420001
    ctx->pc = 0x120834u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x120838: 0x3c030017
    ctx->pc = 0x120838u;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x12083c: 0xac621948
    ctx->pc = 0x12083cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6472), GPR_U32(ctx, 2));
    // 0x120840: 0xc048fdc
    ctx->pc = 0x120840u;
    SET_GPR_U32(ctx, 31, 0x120848u);
    ctx->pc = 0x120844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120848u; }
    }
    if (ctx->pc != 0x120848u) { return; }
    ctx->pc = 0x120848u;
    // 0x120848: 0x40882d
    ctx->pc = 0x120848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12084c: 0x3c060017
    ctx->pc = 0x12084cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
    // 0x120850: 0x3222001f
    ctx->pc = 0x120850u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 31));
    // 0x120854: 0x111942
    ctx->pc = 0x120854u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 17), 5));
    // 0x120858: 0x1121c2
    ctx->pc = 0x120858u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 7));
    // 0x12085c: 0x8e081944
    ctx->pc = 0x12085cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 6468)));
    // 0x120860: 0x30630003
    ctx->pc = 0x120860u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x120864: 0x30840001
    ctx->pc = 0x120864u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x120868: 0x3c050017
    ctx->pc = 0x120868u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x12086c: 0x3c070017
    ctx->pc = 0x12086cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)23 << 16));
    // 0x120870: 0xacc21958
    ctx->pc = 0x120870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6488), GPR_U32(ctx, 2));
    // 0x120874: 0x118202
    ctx->pc = 0x120874u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 17), 8));
    // 0x120878: 0xaca31954
    ctx->pc = 0x120878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6484), GPR_U32(ctx, 3));
    // 0x12087c: 0x24020048
    ctx->pc = 0x12087cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x120880: 0x11020006
    ctx->pc = 0x120880u;
    {
        const bool branch_taken_0x120880 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x120884u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 6480), GPR_U32(ctx, 4));
        if (branch_taken_0x120880) {
            ctx->pc = 0x12089Cu;
            goto label_12089c;
        }
    }
    ctx->pc = 0x120888u;
    // 0x120888: 0x24020058
    ctx->pc = 0x120888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 88));
    // 0x12088c: 0x11020003
    ctx->pc = 0x12088Cu;
    {
        const bool branch_taken_0x12088c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x120890u;
        SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x12088c) {
            ctx->pc = 0x12089Cu;
            goto label_12089c;
        }
    }
    ctx->pc = 0x120894u;
    // 0x120894: 0xc048006
    ctx->pc = 0x120894u;
    SET_GPR_U32(ctx, 31, 0x12089Cu);
    ctx->pc = 0x120898u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19752));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12089Cu; }
    }
    if (ctx->pc != 0x12089Cu) { return; }
    ctx->pc = 0x12089Cu;
label_12089c:
    // 0x12089c: 0x3c0c0017
    ctx->pc = 0x12089cu;
    SET_GPR_U32(ctx, 12, ((uint32_t)23 << 16));
    // 0x1208a0: 0x3c0d0017
    ctx->pc = 0x1208a0u;
    SET_GPR_U32(ctx, 13, ((uint32_t)23 << 16));
    // 0x1208a4: 0x8d851920
    ctx->pc = 0x1208a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 12), 6432)));
    // 0x1208a8: 0x3c0b0017
    ctx->pc = 0x1208a8u;
    SET_GPR_U32(ctx, 11, ((uint32_t)23 << 16));
    // 0x1208ac: 0x8da31924
    ctx->pc = 0x1208acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 6436)));
    // 0x1208b0: 0x3c0a0017
    ctx->pc = 0x1208b0u;
    SET_GPR_U32(ctx, 10, ((uint32_t)23 << 16));
    // 0x1208b4: 0x8d671938
    ctx->pc = 0x1208b4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 11), 6456)));
    // 0x1208b8: 0x144480
    ctx->pc = 0x1208b8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 20), 18));
    // 0x1208bc: 0x8d46193c
    ctx->pc = 0x1208bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 6460)));
    // 0x1208c0: 0x104a80
    ctx->pc = 0x1208c0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 16), 10));
    // 0x1208c4: 0x122300
    ctx->pc = 0x1208c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 12));
    // 0x1208c8: 0x30a50fff
    ctx->pc = 0x1208c8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 4095));
    // 0x1208cc: 0x131300
    ctx->pc = 0x1208ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 12));
    // 0x1208d0: 0x30630fff
    ctx->pc = 0x1208d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x1208d4: 0x852025
    ctx->pc = 0x1208d4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1208d8: 0x431025
    ctx->pc = 0x1208d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1208dc: 0xe83821
    ctx->pc = 0x1208dcu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1208e0: 0xc93021
    ctx->pc = 0x1208e0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1208e4: 0xdfbf0050
    ctx->pc = 0x1208e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1208e8: 0xdfb40040
    ctx->pc = 0x1208e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1208ec: 0xdfb30030
    ctx->pc = 0x1208ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1208f0: 0xdfb20020
    ctx->pc = 0x1208f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1208f4: 0xdfb10010
    ctx->pc = 0x1208f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1208f8: 0xdfb00000
    ctx->pc = 0x1208f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208fc: 0xad841920
    ctx->pc = 0x1208fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 6432), GPR_U32(ctx, 4));
    // 0x120900: 0xada21924
    ctx->pc = 0x120900u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 6436), GPR_U32(ctx, 2));
    // 0x120904: 0xad671938
    ctx->pc = 0x120904u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 6456), GPR_U32(ctx, 7));
    // 0x120908: 0xad46193c
    ctx->pc = 0x120908u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 6460), GPR_U32(ctx, 6));
    // 0x12090c: 0x3e00008
    ctx->pc = 0x12090Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120824u: goto label_120824;
            case 0x12089Cu: goto label_12089c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120914u;
}
