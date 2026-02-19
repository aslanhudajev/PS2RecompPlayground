#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: round
// Address: 0x2d86e8 - 0x2d8870
void round_0x2d86e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d86e8u;

    // 0x2d86e8: 0x27bdff80
    ctx->pc = 0x2d86e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d86ec: 0xffbf0070
    ctx->pc = 0x2d86ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d86f0: 0xffb50060
    ctx->pc = 0x2d86f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2d86f4: 0xffb40050
    ctx->pc = 0x2d86f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2d86f8: 0xffb30040
    ctx->pc = 0x2d86f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2d86fc: 0xffb20030
    ctx->pc = 0x2d86fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d8700: 0xffb10020
    ctx->pc = 0x2d8700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2d8704: 0xffb00010
    ctx->pc = 0x2d8704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d8708: 0x80982d
    ctx->pc = 0x2d8708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d870c: 0xa0a02d
    ctx->pc = 0x2d870cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8710: 0xc0882d
    ctx->pc = 0x2d8710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8714: 0xe0802d
    ctx->pc = 0x2d8714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8718: 0x120a82d
    ctx->pc = 0x2d8718u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d871c: 0x84600
    ctx->pc = 0x2d871cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 24));
    // 0x2d8720: 0x89603
    ctx->pc = 0x2d8720u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 8), 24));
    // 0x2d8724: 0xc0be4ba
    ctx->pc = 0x2D8724u;
    SET_GPR_U32(ctx, 31, 0x2D872Cu);
    ctx->pc = 0x2D8728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D872Cu; }
    }
    if (ctx->pc != 0x2D872Cu) { return; }
    ctx->pc = 0x2D872Cu;
    // 0x2d872c: 0x1040000a
    ctx->pc = 0x2D872Cu;
    {
        const bool branch_taken_0x2d872c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d872c) {
            ctx->pc = 0x2D8758u;
            goto label_2d8758;
        }
    }
    ctx->pc = 0x2D8734u;
    // 0x2d8734: 0x34058048
    ctx->pc = 0x2d8734u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32840));
    // 0x2d8738: 0x52bfc
    ctx->pc = 0x2d8738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2d873c: 0xc0be370
    ctx->pc = 0x2D873Cu;
    SET_GPR_U32(ctx, 31, 0x2D8744u);
    ctx->pc = 0x2D8740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8744u; }
    }
    if (ctx->pc != 0x2D8744u) { return; }
    ctx->pc = 0x2D8744u;
    // 0x2d8744: 0x40202d
    ctx->pc = 0x2d8744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8748: 0xc0b9cae
    ctx->pc = 0x2D8748u;
    SET_GPR_U32(ctx, 31, 0x2D8750u);
    ctx->pc = 0x2D874Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E72B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        modf_0x2e72b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8750u; }
    }
    if (ctx->pc != 0x2D8750u) { return; }
    ctx->pc = 0x2D8750u;
    // 0x2d8750: 0x10000004
    ctx->pc = 0x2D8750u;
    {
        const bool branch_taken_0x2d8750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8750) {
            ctx->pc = 0x2D8764u;
            goto label_2d8764;
        }
    }
    ctx->pc = 0x2D8758u;
label_2d8758:
    // 0x2d8758: 0xc0be4ce
    ctx->pc = 0x2D8758u;
    SET_GPR_U32(ctx, 31, 0x2D8760u);
    ctx->pc = 0x2D875Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4294967248));
    ctx->pc = 0x2F9338u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x2f9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8760u; }
    }
    if (ctx->pc != 0x2D8760u) { return; }
    ctx->pc = 0x2D8760u;
    // 0x2d8760: 0xffa20000
    ctx->pc = 0x2d8760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2d8764:
    // 0x2d8764: 0x34058020
    ctx->pc = 0x2d8764u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32800));
    // 0x2d8768: 0x52bfc
    ctx->pc = 0x2d8768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2d876c: 0xc0be4ba
    ctx->pc = 0x2D876Cu;
    SET_GPR_U32(ctx, 31, 0x2D8774u);
    ctx->pc = 0x2D8770u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8774u; }
    }
    if (ctx->pc != 0x2D8774u) { return; }
    ctx->pc = 0x2D8774u;
    // 0x2d8774: 0x1840001d
    ctx->pc = 0x2D8774u;
    {
        const bool branch_taken_0x2d8774 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D8778u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x2d8774) {
            ctx->pc = 0x2D87ECu;
            goto label_2d87ec;
        }
    }
    ctx->pc = 0x2D877Cu;
    // 0x2d877c: 0x10000003
    ctx->pc = 0x2D877Cu;
    {
        const bool branch_taken_0x2d877c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8780u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x2d877c) {
            ctx->pc = 0x2D878Cu;
            goto label_2d878c;
        }
    }
    ctx->pc = 0x2D8784u;
    // 0x2d8784: 0x0
    ctx->pc = 0x2d8784u;
    // NOP
label_2d8788:
    // 0x2d8788: 0x2610ffff
    ctx->pc = 0x2d8788u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_2d878c:
    // 0x2d878c: 0x82020000
    ctx->pc = 0x2d878cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8790: 0x2603ffff
    ctx->pc = 0x2d8790u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d8794: 0x3842002e
    ctx->pc = 0x2d8794u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 46));
    // 0x2d8798: 0x62800a
    ctx->pc = 0x2d8798u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x2d879c: 0x92020000
    ctx->pc = 0x2d879cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d87a0: 0x24420001
    ctx->pc = 0x2d87a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d87a4: 0xa2020000
    ctx->pc = 0x2d87a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d87a8: 0x21600
    ctx->pc = 0x2d87a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x2d87ac: 0x21603
    ctx->pc = 0x2d87acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2d87b0: 0x2842003a
    ctx->pc = 0x2d87b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 58));
    // 0x2d87b4: 0x54400025
    ctx->pc = 0x2D87B4u;
    {
        const bool branch_taken_0x2d87b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d87b4) {
            ctx->pc = 0x2D87B8u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2D884Cu;
            goto label_2d884c;
        }
    }
    ctx->pc = 0x2D87BCu;
    // 0x2d87bc: 0x1611fff2
    ctx->pc = 0x2D87BCu;
    {
        const bool branch_taken_0x2d87bc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        ctx->pc = 0x2D87C0u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x2d87bc) {
            ctx->pc = 0x2D8788u;
            goto label_2d8788;
        }
    }
    ctx->pc = 0x2D87C4u;
    // 0x2d87c4: 0x16800004
    ctx->pc = 0x2D87C4u;
    {
        const bool branch_taken_0x2d87c4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D87C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x2d87c4) {
            ctx->pc = 0x2D87D8u;
            goto label_2d87d8;
        }
    }
    ctx->pc = 0x2D87CCu;
    // 0x2d87cc: 0xa205ffff
    ctx->pc = 0x2d87ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d87d0: 0x1000001d
    ctx->pc = 0x2D87D0u;
    {
        const bool branch_taken_0x2d87d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D87D4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x2d87d0) {
            ctx->pc = 0x2D8848u;
            goto label_2d8848;
        }
    }
    ctx->pc = 0x2D87D8u;
label_2d87d8:
    // 0x2d87d8: 0xa2220000
    ctx->pc = 0x2d87d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d87dc: 0x8e820000
    ctx->pc = 0x2d87dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d87e0: 0x24420001
    ctx->pc = 0x2d87e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d87e4: 0x10000018
    ctx->pc = 0x2D87E4u;
    {
        const bool branch_taken_0x2d87e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D87E8u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2d87e4) {
            ctx->pc = 0x2D8848u;
            goto label_2d8848;
        }
    }
    ctx->pc = 0x2D87ECu;
label_2d87ec:
    // 0x2d87ec: 0x82a30000
    ctx->pc = 0x2d87ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d87f0: 0x2402002d
    ctx->pc = 0x2d87f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
    // 0x2d87f4: 0x14620015
    ctx->pc = 0x2D87F4u;
    {
        const bool branch_taken_0x2d87f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D87F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d87f4) {
            ctx->pc = 0x2D884Cu;
            goto label_2d884c;
        }
    }
    ctx->pc = 0x2D87FCu;
    // 0x2d87fc: 0x82040000
    ctx->pc = 0x2d87fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8800: 0x2603ffff
    ctx->pc = 0x2d8800u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d8804: 0x3882002e
    ctx->pc = 0x2d8804u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 46));
    // 0x2d8808: 0x62800a
    ctx->pc = 0x2d8808u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x2d880c: 0x82030000
    ctx->pc = 0x2d880cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8810: 0x24020030
    ctx->pc = 0x2d8810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d8814: 0x1462000d
    ctx->pc = 0x2D8814u;
    {
        const bool branch_taken_0x2d8814 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D8818u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d8814) {
            ctx->pc = 0x2D884Cu;
            goto label_2d884c;
        }
    }
    ctx->pc = 0x2D881Cu;
    // 0x2d881c: 0x24050030
    ctx->pc = 0x2d881cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
label_2d8820:
    // 0x2d8820: 0x52110001
    ctx->pc = 0x2D8820u;
    {
        const bool branch_taken_0x2d8820 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 17));
        if (branch_taken_0x2d8820) {
            ctx->pc = 0x2D8824u;
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2D8828u;
            goto label_2d8828;
        }
    }
    ctx->pc = 0x2D8828u;
label_2d8828:
    // 0x2d8828: 0x2610ffff
    ctx->pc = 0x2d8828u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d882c: 0x82040000
    ctx->pc = 0x2d882cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8830: 0x2602ffff
    ctx->pc = 0x2d8830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d8834: 0x3883002e
    ctx->pc = 0x2d8834u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), 46));
    // 0x2d8838: 0x43800a
    ctx->pc = 0x2d8838u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x2d883c: 0x82020000
    ctx->pc = 0x2d883cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8840: 0x1045fff7
    ctx->pc = 0x2D8840u;
    {
        const bool branch_taken_0x2d8840 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x2d8840) {
            ctx->pc = 0x2D8820u;
            goto label_2d8820;
        }
    }
    ctx->pc = 0x2D8848u;
label_2d8848:
    // 0x2d8848: 0x220102d
    ctx->pc = 0x2d8848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d884c:
    // 0x2d884c: 0xdfbf0070
    ctx->pc = 0x2d884cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d8850: 0xdfb50060
    ctx->pc = 0x2d8850u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8854: 0xdfb40050
    ctx->pc = 0x2d8854u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8858: 0xdfb30040
    ctx->pc = 0x2d8858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d885c: 0xdfb20030
    ctx->pc = 0x2d885cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8860: 0xdfb10020
    ctx->pc = 0x2d8860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8864: 0xdfb00010
    ctx->pc = 0x2d8864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8868: 0x3e00008
    ctx->pc = 0x2D8868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D886Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D8758u: goto label_2d8758;
            case 0x2D8764u: goto label_2d8764;
            case 0x2D8788u: goto label_2d8788;
            case 0x2D878Cu: goto label_2d878c;
            case 0x2D87D8u: goto label_2d87d8;
            case 0x2D87ECu: goto label_2d87ec;
            case 0x2D8820u: goto label_2d8820;
            case 0x2D8828u: goto label_2d8828;
            case 0x2D8848u: goto label_2d8848;
            case 0x2D884Cu: goto label_2d884c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D8870u;
}
