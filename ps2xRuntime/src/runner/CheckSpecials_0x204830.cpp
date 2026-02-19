#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CheckSpecials
// Address: 0x204830 - 0x204a9c
void CheckSpecials_0x204830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x204830u;

    // 0x204830: 0x27bdff40
    ctx->pc = 0x204830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x204834: 0xffbf00b0
    ctx->pc = 0x204834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x204838: 0xffbe00a0
    ctx->pc = 0x204838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x20483c: 0xffb70090
    ctx->pc = 0x20483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x204840: 0xffb60080
    ctx->pc = 0x204840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x204844: 0xffb50070
    ctx->pc = 0x204844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x204848: 0xffb40060
    ctx->pc = 0x204848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x20484c: 0xffb30050
    ctx->pc = 0x20484cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x204850: 0xffb20040
    ctx->pc = 0x204850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x204854: 0xffb10030
    ctx->pc = 0x204854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x204858: 0xffb00020
    ctx->pc = 0x204858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20485c: 0xafa40000
    ctx->pc = 0x20485cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x204860: 0xafa50004
    ctx->pc = 0x204860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x204864: 0x24030068
    ctx->pc = 0x204864u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 104));
    // 0x204868: 0x831818
    ctx->pc = 0x204868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20486c: 0x3c02003c
    ctx->pc = 0x20486cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x204870: 0x2442bde8
    ctx->pc = 0x204870u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950376));
    // 0x204874: 0x621821
    ctx->pc = 0x204874u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204878: 0xafa30008
    ctx->pc = 0x204878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x20487c: 0xafa0000c
    ctx->pc = 0x20487cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x204880: 0xf02d
    ctx->pc = 0x204880u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204884: 0x3c030031
    ctx->pc = 0x204884u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_204888:
    // 0x204888: 0x24630f24
    ctx->pc = 0x204888u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3876));
    // 0x20488c: 0x600013
    ctx->pc = 0x20488cu;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x204890: 0x240300c8
    ctx->pc = 0x204890u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 200));
    // 0x204894: 0x73c31000
    ctx->pc = 0x204894u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x204898: 0x8c430000
    ctx->pc = 0x204898u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20489c: 0x8fa40004
    ctx->pc = 0x20489cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2048a0: 0x308200ff
    ctx->pc = 0x2048a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 255));
    // 0x2048a4: 0x80b02d
    ctx->pc = 0x2048a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048a8: 0x43b00b
    ctx->pc = 0x2048a8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 2));
    // 0x2048ac: 0x1eb8c0
    ctx->pc = 0x2048acu;
    SET_GPR_U32(ctx, 23, SLL32(GPR_U32(ctx, 30), 3));
    // 0x2048b0: 0x8fa20008
    ctx->pc = 0x2048b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2048b4: 0x2e2a021
    ctx->pc = 0x2048b4u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2048b8: 0x240300c8
    ctx->pc = 0x2048b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 200));
    // 0x2048bc: 0x3c3a818
    ctx->pc = 0x2048bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2048c0: 0x3c040031
    ctx->pc = 0x2048c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x2048c4: 0x24840f20
    ctx->pc = 0x2048c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3872));
    // 0x2048c8: 0x2a42021
    ctx->pc = 0x2048c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2048cc: 0xafa40010
    ctx->pc = 0x2048ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2048d0:
    // 0x2048d0: 0x8e910000
    ctx->pc = 0x2048d0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2048d4: 0x2403000c
    ctx->pc = 0x2048d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2048d8: 0x2231818
    ctx->pc = 0x2048d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2048dc: 0x751021
    ctx->pc = 0x2048dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2048e0: 0x3c040031
    ctx->pc = 0x2048e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x2048e4: 0x24840f28
    ctx->pc = 0x2048e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3880));
    // 0x2048e8: 0x441021
    ctx->pc = 0x2048e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2048ec: 0x8c500000
    ctx->pc = 0x2048ecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2048f0: 0x1093c3
    ctx->pc = 0x2048f0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 16), 15));
    // 0x2048f4: 0x32520001
    ctx->pc = 0x2048f4u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), 1));
    // 0x2048f8: 0x109b83
    ctx->pc = 0x2048f8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 16), 14));
    // 0x2048fc: 0x3c02ffff
    ctx->pc = 0x2048fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x204900: 0x34427fff
    ctx->pc = 0x204900u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32767));
    // 0x204904: 0x2028024
    ctx->pc = 0x204904u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x204908: 0x2a220010
    ctx->pc = 0x204908u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x20490c: 0x14400007
    ctx->pc = 0x20490Cu;
    {
        const bool branch_taken_0x20490c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x204910u;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x20490c) {
            ctx->pc = 0x20492Cu;
            goto label_20492c;
        }
    }
    ctx->pc = 0x204914u;
    // 0x204914: 0x3c04003a
    ctx->pc = 0x204914u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x204918: 0x24844978
    ctx->pc = 0x204918u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18808));
    // 0x20491c: 0x3c0282d
    ctx->pc = 0x20491cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204920: 0x220302d
    ctx->pc = 0x204920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204924: 0xc0b4976
    ctx->pc = 0x204924u;
    SET_GPR_U32(ctx, 31, 0x20492Cu);
    ctx->pc = 0x204928u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20492Cu; }
    }
    if (ctx->pc != 0x20492Cu) { return; }
    ctx->pc = 0x20492Cu;
label_20492c:
    // 0x20492c: 0x24020fff
    ctx->pc = 0x20492cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4095));
    // 0x204930: 0x1202001a
    ctx->pc = 0x204930u;
    {
        const bool branch_taken_0x204930 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x204934u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x204930) {
            ctx->pc = 0x20499Cu;
            goto label_20499c;
        }
    }
    ctx->pc = 0x204938u;
    // 0x204938: 0x12d0000a
    ctx->pc = 0x204938u;
    {
        const bool branch_taken_0x204938 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 16));
        ctx->pc = 0x20493Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x204938) {
            ctx->pc = 0x204964u;
            goto label_204964;
        }
    }
    ctx->pc = 0x204940u;
    // 0x204940: 0x12400003
    ctx->pc = 0x204940u;
    {
        const bool branch_taken_0x204940 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x204944u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        if (branch_taken_0x204940) {
            ctx->pc = 0x204950u;
            goto label_204950;
        }
    }
    ctx->pc = 0x204948u;
    // 0x204948: 0x14400007
    ctx->pc = 0x204948u;
    {
        const bool branch_taken_0x204948 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20494Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 3872));
        if (branch_taken_0x204948) {
            ctx->pc = 0x204968u;
            goto label_204968;
        }
    }
    ctx->pc = 0x204950u;
label_204950:
    // 0x204950: 0x12600028
    ctx->pc = 0x204950u;
    {
        const bool branch_taken_0x204950 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x204954u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        if (branch_taken_0x204950) {
            ctx->pc = 0x2049F4u;
            goto label_2049f4;
        }
    }
    ctx->pc = 0x204958u;
    // 0x204958: 0x14400027
    ctx->pc = 0x204958u;
    {
        const bool branch_taken_0x204958 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20495Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x204958) {
            ctx->pc = 0x2049F8u;
            goto label_2049f8;
        }
    }
    ctx->pc = 0x204960u;
    // 0x204960: 0x3c030031
    ctx->pc = 0x204960u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_204964:
    // 0x204964: 0x24650f20
    ctx->pc = 0x204964u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 3872));
label_204968:
    // 0x204968: 0x2404000c
    ctx->pc = 0x204968u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x20496c: 0x2241018
    ctx->pc = 0x20496cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x204970: 0x240300c8
    ctx->pc = 0x204970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 200));
    // 0x204974: 0x3c32018
    ctx->pc = 0x204974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x204978: 0x441021
    ctx->pc = 0x204978u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20497c: 0x3c030031
    ctx->pc = 0x20497cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x204980: 0x24630f30
    ctx->pc = 0x204980u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3888));
    // 0x204984: 0x431021
    ctx->pc = 0x204984u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204988: 0x8c430000
    ctx->pc = 0x204988u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20498c: 0x2402ffff
    ctx->pc = 0x20498cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204990: 0x54620005
    ctx->pc = 0x204990u;
    {
        const bool branch_taken_0x204990 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x204990) {
            ctx->pc = 0x204994u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->pc = 0x2049A8u;
            goto label_2049a8;
        }
    }
    ctx->pc = 0x204998u;
    // 0x204998: 0x851021
    ctx->pc = 0x204998u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20499c:
    // 0x20499c: 0x8c420000
    ctx->pc = 0x20499cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2049a0: 0x10000027
    ctx->pc = 0x2049A0u;
    {
        const bool branch_taken_0x2049a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2049A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x2049a0) {
            ctx->pc = 0x204A40u;
            goto label_204a40;
        }
    }
    ctx->pc = 0x2049A8u;
label_2049a8:
    // 0x2049a8: 0x2e42821
    ctx->pc = 0x2049a8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x2049ac: 0x8ca40004
    ctx->pc = 0x2049acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2049b0: 0x24840001
    ctx->pc = 0x2049b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2049b4: 0xaca40004
    ctx->pc = 0x2049b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x2049b8: 0x2403000c
    ctx->pc = 0x2049b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2049bc: 0x2231818
    ctx->pc = 0x2049bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2049c0: 0x751021
    ctx->pc = 0x2049c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2049c4: 0x3c030031
    ctx->pc = 0x2049c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2049c8: 0x24630f30
    ctx->pc = 0x2049c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3888));
    // 0x2049cc: 0x431021
    ctx->pc = 0x2049ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2049d0: 0x8c420000
    ctx->pc = 0x2049d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2049d4: 0x24030006
    ctx->pc = 0x2049d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2049d8: 0x62100a
    ctx->pc = 0x2049d8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x2049dc: 0x44102a
    ctx->pc = 0x2049dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2049e0: 0x10400018
    ctx->pc = 0x2049E0u;
    {
        const bool branch_taken_0x2049e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2049E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x2049e0) {
            ctx->pc = 0x204A44u;
            goto label_204a44;
        }
    }
    ctx->pc = 0x2049E8u;
    // 0x2049e8: 0xaca00000
    ctx->pc = 0x2049e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2049ec: 0x10000014
    ctx->pc = 0x2049ECu;
    {
        const bool branch_taken_0x2049ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2049F0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x2049ec) {
            ctx->pc = 0x204A40u;
            goto label_204a40;
        }
    }
    ctx->pc = 0x2049F4u;
label_2049f4:
    // 0x2049f4: 0x8fa20008
    ctx->pc = 0x2049f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2049f8:
    // 0x2049f8: 0x2e22021
    ctx->pc = 0x2049f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2049fc: 0x2403000c
    ctx->pc = 0x2049fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x204a00: 0x2231818
    ctx->pc = 0x204a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x204a04: 0x751021
    ctx->pc = 0x204a04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x204a08: 0x3c030031
    ctx->pc = 0x204a08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x204a0c: 0x24630f2c
    ctx->pc = 0x204a0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3884));
    // 0x204a10: 0x431021
    ctx->pc = 0x204a10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204a14: 0x8c830004
    ctx->pc = 0x204a14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204a18: 0x8c420000
    ctx->pc = 0x204a18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204a1c: 0x62182a
    ctx->pc = 0x204a1cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x204a20: 0x54600006
    ctx->pc = 0x204A20u;
    {
        const bool branch_taken_0x204a20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x204a20) {
            ctx->pc = 0x204A24u;
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x204A3Cu;
            goto label_204a3c;
        }
    }
    ctx->pc = 0x204A28u;
    // 0x204a28: 0x8c820000
    ctx->pc = 0x204a28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204a2c: 0x24420001
    ctx->pc = 0x204a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x204a30: 0xac820000
    ctx->pc = 0x204a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x204a34: 0x1000ffa6
    ctx->pc = 0x204A34u;
    {
        const bool branch_taken_0x204a34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x204A38u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x204a34) {
            ctx->pc = 0x2048D0u;
            goto label_2048d0;
        }
    }
    ctx->pc = 0x204A3Cu;
label_204a3c:
    // 0x204a3c: 0xae800004
    ctx->pc = 0x204a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_204a40:
    // 0x204a40: 0x8fa4000c
    ctx->pc = 0x204a40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_204a44:
    // 0x204a44: 0x14800006
    ctx->pc = 0x204A44u;
    {
        const bool branch_taken_0x204a44 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x204A48u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
        if (branch_taken_0x204a44) {
            ctx->pc = 0x204A60u;
            goto label_204a60;
        }
    }
    ctx->pc = 0x204A4Cu;
    // 0x204a4c: 0x2fc2000d
    ctx->pc = 0x204a4cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 30), 13));
    // 0x204a50: 0x1440ff8d
    ctx->pc = 0x204A50u;
    {
        const bool branch_taken_0x204a50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x204A54u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x204a50) {
            ctx->pc = 0x204888u;
            goto label_204888;
        }
    }
    ctx->pc = 0x204A58u;
    // 0x204a58: 0x10800004
    ctx->pc = 0x204A58u;
    {
        const bool branch_taken_0x204a58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x204A5Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x204a58) {
            ctx->pc = 0x204A6Cu;
            goto label_204a6c;
        }
    }
    ctx->pc = 0x204A60u;
label_204a60:
    // 0x204a60: 0xc0811f8
    ctx->pc = 0x204A60u;
    SET_GPR_U32(ctx, 31, 0x204A68u);
    ctx->pc = 0x204A64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2047E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitSpecialMoves_0x2047e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A68u; }
    }
    if (ctx->pc != 0x204A68u) { return; }
    ctx->pc = 0x204A68u;
    // 0x204a68: 0x8fa2000c
    ctx->pc = 0x204a68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_204a6c:
    // 0x204a6c: 0xdfbf00b0
    ctx->pc = 0x204a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x204a70: 0xdfbe00a0
    ctx->pc = 0x204a70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x204a74: 0xdfb70090
    ctx->pc = 0x204a74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x204a78: 0xdfb60080
    ctx->pc = 0x204a78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x204a7c: 0xdfb50070
    ctx->pc = 0x204a7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x204a80: 0xdfb40060
    ctx->pc = 0x204a80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x204a84: 0xdfb30050
    ctx->pc = 0x204a84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x204a88: 0xdfb20040
    ctx->pc = 0x204a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204a8c: 0xdfb10030
    ctx->pc = 0x204a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204a90: 0xdfb00020
    ctx->pc = 0x204a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204a94: 0x3e00008
    ctx->pc = 0x204A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204A98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204888u: goto label_204888;
            case 0x2048D0u: goto label_2048d0;
            case 0x20492Cu: goto label_20492c;
            case 0x204950u: goto label_204950;
            case 0x204964u: goto label_204964;
            case 0x204968u: goto label_204968;
            case 0x20499Cu: goto label_20499c;
            case 0x2049A8u: goto label_2049a8;
            case 0x2049F4u: goto label_2049f4;
            case 0x2049F8u: goto label_2049f8;
            case 0x204A3Cu: goto label_204a3c;
            case 0x204A40u: goto label_204a40;
            case 0x204A44u: goto label_204a44;
            case 0x204A60u: goto label_204a60;
            case 0x204A6Cu: goto label_204a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x204A9Cu;
}
