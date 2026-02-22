#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cvt
// Address: 0x12d860 - 0x12da10
void cvt_0x12d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d860u;

    // 0x12d860: 0x27bdff50
    ctx->pc = 0x12d860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12d864: 0x24020066
    ctx->pc = 0x12d864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
    // 0x12d868: 0xffbe0090
    ctx->pc = 0x12d868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x12d86c: 0xffb70080
    ctx->pc = 0x12d86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x12d870: 0x160f02d
    ctx->pc = 0x12d870u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d874: 0xffb60070
    ctx->pc = 0x12d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x12d878: 0xe0b82d
    ctx->pc = 0x12d878u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d87c: 0xffb50060
    ctx->pc = 0x12d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x12d880: 0x80b02d
    ctx->pc = 0x12d880u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d884: 0xffb40050
    ctx->pc = 0x12d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x12d888: 0x120a82d
    ctx->pc = 0x12d888u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d88c: 0xffb20030
    ctx->pc = 0x12d88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x12d890: 0xc0a02d
    ctx->pc = 0x12d890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d894: 0xffb10020
    ctx->pc = 0x12d894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x12d898: 0xa0902d
    ctx->pc = 0x12d898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d89c: 0xffb00010
    ctx->pc = 0x12d89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12d8a0: 0x140882d
    ctx->pc = 0x12d8a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8a4: 0xffbf00a0
    ctx->pc = 0x12d8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x12d8a8: 0x100802d
    ctx->pc = 0x12d8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8ac: 0x16220003
    ctx->pc = 0x12D8ACu;
    {
        const bool branch_taken_0x12d8ac = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x12D8B0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
        if (branch_taken_0x12d8ac) {
            ctx->pc = 0x12D8BCu;
            goto label_12d8bc;
        }
    }
    ctx->pc = 0x12D8B4u;
    // 0x12d8b4: 0x10000008
    ctx->pc = 0x12D8B4u;
    {
        const bool branch_taken_0x12d8b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D8B8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x12d8b4) {
            ctx->pc = 0x12D8D8u;
            goto label_12d8d8;
        }
    }
    ctx->pc = 0x12D8BCu;
label_12d8bc:
    // 0x12d8bc: 0x24020065
    ctx->pc = 0x12d8bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
    // 0x12d8c0: 0x12220003
    ctx->pc = 0x12D8C0u;
    {
        const bool branch_taken_0x12d8c0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x12D8C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 69));
        if (branch_taken_0x12d8c0) {
            ctx->pc = 0x12D8D0u;
            goto label_12d8d0;
        }
    }
    ctx->pc = 0x12D8C8u;
    // 0x12d8c8: 0x16220003
    ctx->pc = 0x12D8C8u;
    {
        const bool branch_taken_0x12d8c8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x12D8CCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x12d8c8) {
            ctx->pc = 0x12D8D8u;
            goto label_12d8d8;
        }
    }
    ctx->pc = 0x12D8D0u;
label_12d8d0:
    // 0x12d8d0: 0x26940001
    ctx->pc = 0x12d8d0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x12d8d4: 0x24130002
    ctx->pc = 0x12d8d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
label_12d8d8:
    // 0x12d8d8: 0x240102d
    ctx->pc = 0x12d8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8dc: 0x2103f
    ctx->pc = 0x12d8dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d8e0: 0x4430007
    ctx->pc = 0x12D8E0u;
    {
        const bool branch_taken_0x12d8e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12d8e0) {
            ctx->pc = 0x12D8E4u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x12D900u;
            goto label_12d900;
        }
    }
    ctx->pc = 0x12D8E8u;
    // 0x12d8e8: 0x240282d
    ctx->pc = 0x12d8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8ec: 0xc04a31e
    ctx->pc = 0x12D8ECu;
    SET_GPR_U32(ctx, 31, 0x12D8F4u);
    ctx->pc = 0x12D8F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D8F4u; }
    }
    if (ctx->pc != 0x12D8F4u) { return; }
    ctx->pc = 0x12D8F4u;
    // 0x12d8f4: 0x2403002d
    ctx->pc = 0x12d8f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 45));
    // 0x12d8f8: 0x40902d
    ctx->pc = 0x12d8f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8fc: 0xa2030000
    ctx->pc = 0x12d8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_12d900:
    // 0x12d900: 0x260302d
    ctx->pc = 0x12d900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d904: 0x2c0202d
    ctx->pc = 0x12d904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d908: 0x240282d
    ctx->pc = 0x12d908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d90c: 0x280382d
    ctx->pc = 0x12d90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d910: 0x2a0402d
    ctx->pc = 0x12d910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d914: 0x3a0482d
    ctx->pc = 0x12d914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d918: 0xc04b7ca
    ctx->pc = 0x12D918u;
    SET_GPR_U32(ctx, 31, 0x12D920u);
    ctx->pc = 0x12D91Cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)4);
    ctx->pc = 0x12DF28u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dtoa_r_0x12df28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D920u; }
    }
    if (ctx->pc != 0x12D920u) { return; }
    ctx->pc = 0x12D920u;
    // 0x12d920: 0x40982d
    ctx->pc = 0x12d920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d924: 0x24020067
    ctx->pc = 0x12d924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
    // 0x12d928: 0x12220003
    ctx->pc = 0x12D928u;
    {
        const bool branch_taken_0x12d928 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x12D92Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        if (branch_taken_0x12d928) {
            ctx->pc = 0x12D938u;
            goto label_12d938;
        }
    }
    ctx->pc = 0x12D930u;
    // 0x12d930: 0x16220004
    ctx->pc = 0x12D930u;
    {
        const bool branch_taken_0x12d930 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x12D934u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
        if (branch_taken_0x12d930) {
            ctx->pc = 0x12D944u;
            goto label_12d944;
        }
    }
    ctx->pc = 0x12D938u;
label_12d938:
    // 0x12d938: 0x32e20001
    ctx->pc = 0x12d938u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 1));
    // 0x12d93c: 0x10400024
    ctx->pc = 0x12D93Cu;
    {
        const bool branch_taken_0x12d93c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D940u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
        if (branch_taken_0x12d93c) {
            ctx->pc = 0x12D9D0u;
            goto label_12d9d0;
        }
    }
    ctx->pc = 0x12D944u;
label_12d944:
    // 0x12d944: 0x1622000e
    ctx->pc = 0x12D944u;
    {
        const bool branch_taken_0x12d944 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x12D948u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        if (branch_taken_0x12d944) {
            ctx->pc = 0x12D980u;
            goto label_12d980;
        }
    }
    ctx->pc = 0x12D94Cu;
    // 0x12d94c: 0x82630000
    ctx->pc = 0x12d94cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12d950: 0x24020030
    ctx->pc = 0x12d950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x12d954: 0x54620009
    ctx->pc = 0x12D954u;
    {
        const bool branch_taken_0x12d954 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x12d954) {
            ctx->pc = 0x12D958u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->pc = 0x12D97Cu;
            goto label_12d97c;
        }
    }
    ctx->pc = 0x12D95Cu;
    // 0x12d95c: 0x240202d
    ctx->pc = 0x12d95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d960: 0xc04a482
    ctx->pc = 0x12D960u;
    SET_GPR_U32(ctx, 31, 0x12D968u);
    ctx->pc = 0x12D964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D968u; }
    }
    if (ctx->pc != 0x12D968u) { return; }
    ctx->pc = 0x12D968u;
    // 0x12d968: 0x10400003
    ctx->pc = 0x12D968u;
    {
        const bool branch_taken_0x12d968 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D96Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        if (branch_taken_0x12d968) {
            ctx->pc = 0x12D978u;
            goto label_12d978;
        }
    }
    ctx->pc = 0x12D970u;
    // 0x12d970: 0x24420001
    ctx->pc = 0x12d970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d974: 0xaea20000
    ctx->pc = 0x12d974u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_12d978:
    // 0x12d978: 0x8ea20000
    ctx->pc = 0x12d978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_12d97c:
    // 0x12d97c: 0x2028021
    ctx->pc = 0x12d97cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_12d980:
    // 0x12d980: 0x240202d
    ctx->pc = 0x12d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d984: 0xc04a482
    ctx->pc = 0x12D984u;
    SET_GPR_U32(ctx, 31, 0x12D98Cu);
    ctx->pc = 0x12D988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D98Cu; }
    }
    if (ctx->pc != 0x12D98Cu) { return; }
    ctx->pc = 0x12D98Cu;
    // 0x12d98c: 0x50400001
    ctx->pc = 0x12D98Cu;
    {
        const bool branch_taken_0x12d98c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12d98c) {
            ctx->pc = 0x12D990u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
            ctx->pc = 0x12D994u;
            goto label_12d994;
        }
    }
    ctx->pc = 0x12D994u;
label_12d994:
    // 0x12d994: 0x8fa30004
    ctx->pc = 0x12d994u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12d998: 0x70102b
    ctx->pc = 0x12d998u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12d99c: 0x1040000d
    ctx->pc = 0x12D99Cu;
    {
        const bool branch_taken_0x12d99c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D9A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12d99c) {
            ctx->pc = 0x12D9D4u;
            goto label_12d9d4;
        }
    }
    ctx->pc = 0x12D9A4u;
    // 0x12d9a4: 0x24050030
    ctx->pc = 0x12d9a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
label_12d9a8:
    // 0x12d9a8: 0x24820001
    ctx->pc = 0x12d9a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x12d9ac: 0xa0850000
    ctx->pc = 0x12d9acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x12d9b0: 0x40182d
    ctx->pc = 0x12d9b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9b4: 0xafa20004
    ctx->pc = 0x12d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x12d9b8: 0x60202d
    ctx->pc = 0x12d9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9bc: 0x70102b
    ctx->pc = 0x12d9bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12d9c0: 0x1440fff9
    ctx->pc = 0x12D9C0u;
    {
        const bool branch_taken_0x12d9c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12d9c0) {
            ctx->pc = 0x12D9A8u;
            goto label_12d9a8;
        }
    }
    ctx->pc = 0x12D9C8u;
    // 0x12d9c8: 0x10000003
    ctx->pc = 0x12D9C8u;
    {
        const bool branch_taken_0x12d9c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D9CCu;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        if (branch_taken_0x12d9c8) {
            ctx->pc = 0x12D9D8u;
            goto label_12d9d8;
        }
    }
    ctx->pc = 0x12D9D0u;
label_12d9d0:
    // 0x12d9d0: 0x8fa30004
    ctx->pc = 0x12d9d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12d9d4:
    // 0x12d9d4: 0x731823
    ctx->pc = 0x12d9d4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_12d9d8:
    // 0x12d9d8: 0x260102d
    ctx->pc = 0x12d9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9dc: 0xafc30000
    ctx->pc = 0x12d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x12d9e0: 0xdfbf00a0
    ctx->pc = 0x12d9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12d9e4: 0xdfbe0090
    ctx->pc = 0x12d9e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d9e8: 0xdfb70080
    ctx->pc = 0x12d9e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12d9ec: 0xdfb60070
    ctx->pc = 0x12d9ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12d9f0: 0xdfb50060
    ctx->pc = 0x12d9f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12d9f4: 0xdfb40050
    ctx->pc = 0x12d9f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d9f8: 0xdfb30040
    ctx->pc = 0x12d9f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d9fc: 0xdfb20030
    ctx->pc = 0x12d9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12da00: 0xdfb10020
    ctx->pc = 0x12da00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12da04: 0xdfb00010
    ctx->pc = 0x12da04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12da08: 0x3e00008
    ctx->pc = 0x12DA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DA0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D8BCu: goto label_12d8bc;
            case 0x12D8D0u: goto label_12d8d0;
            case 0x12D8D8u: goto label_12d8d8;
            case 0x12D900u: goto label_12d900;
            case 0x12D938u: goto label_12d938;
            case 0x12D944u: goto label_12d944;
            case 0x12D978u: goto label_12d978;
            case 0x12D97Cu: goto label_12d97c;
            case 0x12D980u: goto label_12d980;
            case 0x12D994u: goto label_12d994;
            case 0x12D9A8u: goto label_12d9a8;
            case 0x12D9D0u: goto label_12d9d0;
            case 0x12D9D4u: goto label_12d9d4;
            case 0x12D9D8u: goto label_12d9d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DA10u;
}
