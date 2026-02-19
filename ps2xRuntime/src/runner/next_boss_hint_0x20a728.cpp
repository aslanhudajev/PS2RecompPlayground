#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: next_boss_hint
// Address: 0x20a728 - 0x20a918
void next_boss_hint_0x20a728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20a728u;

    // 0x20a728: 0x27bdff60
    ctx->pc = 0x20a728u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20a72c: 0xffbf0090
    ctx->pc = 0x20a72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x20a730: 0xffbe0080
    ctx->pc = 0x20a730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x20a734: 0xffb70070
    ctx->pc = 0x20a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x20a738: 0xffb60060
    ctx->pc = 0x20a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x20a73c: 0xffb50050
    ctx->pc = 0x20a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20a740: 0xffb40040
    ctx->pc = 0x20a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20a744: 0xffb30030
    ctx->pc = 0x20a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20a748: 0xffb20020
    ctx->pc = 0x20a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20a74c: 0xffb10010
    ctx->pc = 0x20a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20a750: 0xffb00000
    ctx->pc = 0x20a750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a754: 0xa82d
    ctx->pc = 0x20a754u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a758: 0x1480000b
    ctx->pc = 0x20A758u;
    {
        const bool branch_taken_0x20a758 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A75Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x20a758) {
            ctx->pc = 0x20A788u;
            goto label_20a788;
        }
    }
    ctx->pc = 0x20A760u;
    // 0x20a760: 0x3c020032
    ctx->pc = 0x20a760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a764: 0xac40efec
    ctx->pc = 0x20a764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963180), GPR_U32(ctx, 0));
    // 0x20a768: 0x3c020032
    ctx->pc = 0x20a768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a76c: 0x1000005e
    ctx->pc = 0x20A76Cu;
    {
        const bool branch_taken_0x20a76c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A770u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963188), GPR_U32(ctx, 0));
        if (branch_taken_0x20a76c) {
            ctx->pc = 0x20A8E8u;
            goto label_20a8e8;
        }
    }
    ctx->pc = 0x20A774u;
label_20a774:
    // 0x20a774: 0x24030001
    ctx->pc = 0x20a774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a778: 0xac83eff4
    ctx->pc = 0x20a778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963188), GPR_U32(ctx, 3));
    // 0x20a77c: 0x3c020032
    ctx->pc = 0x20a77cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a780: 0x10000032
    ctx->pc = 0x20A780u;
    {
        const bool branch_taken_0x20a780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A784u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963180), GPR_U32(ctx, 3));
        if (branch_taken_0x20a780) {
            ctx->pc = 0x20A84Cu;
            goto label_20a84c;
        }
    }
    ctx->pc = 0x20A788u;
label_20a788:
    // 0x20a788: 0x3c020032
    ctx->pc = 0x20a788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a78c: 0x8c42efec
    ctx->pc = 0x20a78cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963180)));
    // 0x20a790: 0x24430001
    ctx->pc = 0x20a790u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a794: 0x3c160032
    ctx->pc = 0x20a794u;
    SET_GPR_U32(ctx, 22, ((uint32_t)50 << 16));
    // 0x20a798: 0x24170001
    ctx->pc = 0x20a798u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a79c: 0x3c1e0032
    ctx->pc = 0x20a79cu;
    SET_GPR_U32(ctx, 30, ((uint32_t)50 << 16));
label_20a7a0:
    // 0x20a7a0: 0x72102a
    ctx->pc = 0x20a7a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 18)));
    // 0x20a7a4: 0x14400008
    ctx->pc = 0x20A7A4u;
    {
        const bool branch_taken_0x20a7a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A7A8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20a7a4) {
            ctx->pc = 0x20A7C8u;
            goto label_20a7c8;
        }
    }
    ctx->pc = 0x20A7ACu;
    // 0x20a7ac: 0x72001a
    ctx->pc = 0x20a7acu;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20a7b0: 0x1010
    ctx->pc = 0x20a7b0u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x20a7b4: 0x52400001
    ctx->pc = 0x20A7B4u;
    {
        const bool branch_taken_0x20a7b4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a7b4) {
            ctx->pc = 0x20A7B8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20A7BCu;
            goto label_20a7bc;
        }
    }
    ctx->pc = 0x20A7BCu;
label_20a7bc:
    // 0x20a7bc: 0x40182d
    ctx->pc = 0x20a7bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7c0: 0xaed7eff4
    ctx->pc = 0x20a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294963188), GPR_U32(ctx, 23));
    // 0x20a7c4: 0x2e0802d
    ctx->pc = 0x20a7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20a7c8:
    // 0x20a7c8: 0x63800b
    ctx->pc = 0x20a7c8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x20a7cc: 0x3c020034
    ctx->pc = 0x20a7ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x20a7d0: 0x2454fb38
    ctx->pc = 0x20a7d0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294966072));
    // 0x20a7d4: 0x10000003
    ctx->pc = 0x20A7D4u;
    {
        const bool branch_taken_0x20a7d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A7D8u;
        SET_GPR_U32(ctx, 19, ((uint32_t)50 << 16));
        if (branch_taken_0x20a7d4) {
            ctx->pc = 0x20A7E4u;
            goto label_20a7e4;
        }
    }
    ctx->pc = 0x20A7DCu;
    // 0x20a7dc: 0x0
    ctx->pc = 0x20a7dcu;
    // NOP
label_20a7e0:
    // 0x20a7e0: 0x26100001
    ctx->pc = 0x20a7e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_20a7e4:
    // 0x20a7e4: 0x212102a
    ctx->pc = 0x20a7e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x20a7e8: 0x1040000d
    ctx->pc = 0x20A7E8u;
    {
        const bool branch_taken_0x20a7e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A7ECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x20a7e8) {
            ctx->pc = 0x20A820u;
            goto label_20a820;
        }
    }
    ctx->pc = 0x20A7F0u;
    // 0x20a7f0: 0x541021
    ctx->pc = 0x20a7f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x20a7f4: 0x8c510000
    ctx->pc = 0x20a7f4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a7f8: 0xc09dd74
    ctx->pc = 0x20A7F8u;
    SET_GPR_U32(ctx, 31, 0x20A800u);
    ctx->pc = 0x20A7FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2775D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldOpen_0x2775d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A800u; }
    }
    if (ctx->pc != 0x20A800u) { return; }
    ctx->pc = 0x20A800u;
    // 0x20a800: 0x1040fff7
    ctx->pc = 0x20A800u;
    {
        const bool branch_taken_0x20a800 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A804u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294963188)));
        if (branch_taken_0x20a800) {
            ctx->pc = 0x20A7E0u;
            goto label_20a7e0;
        }
    }
    ctx->pc = 0x20A808u;
    // 0x20a808: 0x14400005
    ctx->pc = 0x20A808u;
    {
        const bool branch_taken_0x20a808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A80Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20a808) {
            ctx->pc = 0x20A820u;
            goto label_20a820;
        }
    }
    ctx->pc = 0x20A810u;
    // 0x20a810: 0xc09da6e
    ctx->pc = 0x20A810u;
    SET_GPR_U32(ctx, 31, 0x20A818u);
    ctx->pc = 0x20A814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2769B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasShard_0x2769b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A818u; }
    }
    if (ctx->pc != 0x20A818u) { return; }
    ctx->pc = 0x20A818u;
    // 0x20a818: 0x5440fff2
    ctx->pc = 0x20A818u;
    {
        const bool branch_taken_0x20a818 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20a818) {
            ctx->pc = 0x20A81Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x20A7E4u;
            goto label_20a7e4;
        }
    }
    ctx->pc = 0x20A820u;
label_20a820:
    // 0x20a820: 0x5612000a
    ctx->pc = 0x20A820u;
    {
        const bool branch_taken_0x20a820 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 18));
        if (branch_taken_0x20a820) {
            ctx->pc = 0x20A824u;
            WRITE32(ADD32(GPR_U32(ctx, 30), 4294963180), GPR_U32(ctx, 16));
            ctx->pc = 0x20A84Cu;
            goto label_20a84c;
        }
    }
    ctx->pc = 0x20A828u;
    // 0x20a828: 0x3c040032
    ctx->pc = 0x20a828u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20a82c: 0x8c82eff4
    ctx->pc = 0x20a82cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294963188)));
    // 0x20a830: 0x28420002
    ctx->pc = 0x20a830u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x20a834: 0x1040ffcf
    ctx->pc = 0x20A834u;
    {
        const bool branch_taken_0x20a834 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A838u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294963188)));
        if (branch_taken_0x20a834) {
            ctx->pc = 0x20A774u;
            goto label_20a774;
        }
    }
    ctx->pc = 0x20A83Cu;
    // 0x20a83c: 0x24420001
    ctx->pc = 0x20a83cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a840: 0xaec2eff4
    ctx->pc = 0x20a840u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294963188), GPR_U32(ctx, 2));
    // 0x20a844: 0x1000ffd6
    ctx->pc = 0x20A844u;
    {
        const bool branch_taken_0x20a844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A848u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20a844) {
            ctx->pc = 0x20A7A0u;
            goto label_20a7a0;
        }
    }
    ctx->pc = 0x20A84Cu;
label_20a84c:
    // 0x20a84c: 0x802d
    ctx->pc = 0x20a84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a850: 0x24062b00
    ctx->pc = 0x20a850u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x20a854: 0x3c020032
    ctx->pc = 0x20a854u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a858: 0x24491bc0
    ctx->pc = 0x20a858u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x20a85c: 0x3c030034
    ctx->pc = 0x20a85cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x20a860: 0x2463fb38
    ctx->pc = 0x20a860u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966072));
    // 0x20a864: 0x3c020032
    ctx->pc = 0x20a864u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a868: 0x8c42efec
    ctx->pc = 0x20a868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963180)));
    // 0x20a86c: 0x21080
    ctx->pc = 0x20a86cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a870: 0x431021
    ctx->pc = 0x20a870u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a874: 0x8c510000
    ctx->pc = 0x20a874u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a878: 0x240300b4
    ctx->pc = 0x20a878u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 180));
    // 0x20a87c: 0x24050001
    ctx->pc = 0x20a87cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a880: 0x24040002
    ctx->pc = 0x20a880u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a884: 0x2061018
    ctx->pc = 0x20a884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20a888:
    // 0x20a888: 0x16a00009
    ctx->pc = 0x20A888u;
    {
        const bool branch_taken_0x20a888 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A88Cu;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        if (branch_taken_0x20a888) {
            ctx->pc = 0x20A8B0u;
            goto label_20a8b0;
        }
    }
    ctx->pc = 0x20A890u;
    // 0x20a890: 0x8d02000c
    ctx->pc = 0x20a890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x20a894: 0x433818
    ctx->pc = 0x20a894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a898: 0xe81021
    ctx->pc = 0x20a898u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20a89c: 0x94420d00
    ctx->pc = 0x20a89cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3328)));
    // 0x20a8a0: 0x2221007
    ctx->pc = 0x20a8a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x20a8a4: 0x30420001
    ctx->pc = 0x20a8a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20a8a8: 0xa0a82d
    ctx->pc = 0x20a8a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8ac: 0x2a80a
    ctx->pc = 0x20a8acu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 0));
label_20a8b0:
    // 0x20a8b0: 0x8d02000c
    ctx->pc = 0x20a8b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x20a8b4: 0x433818
    ctx->pc = 0x20a8b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a8b8: 0xe81021
    ctx->pc = 0x20a8b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20a8bc: 0x94420d02
    ctx->pc = 0x20a8bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3330)));
    // 0x20a8c0: 0x2221007
    ctx->pc = 0x20a8c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x20a8c4: 0x30420001
    ctx->pc = 0x20a8c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20a8c8: 0x82a80b
    ctx->pc = 0x20a8c8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 4));
    // 0x20a8cc: 0x26100001
    ctx->pc = 0x20a8ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a8d0: 0x2a020004
    ctx->pc = 0x20a8d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x20a8d4: 0x1440ffec
    ctx->pc = 0x20A8D4u;
    {
        const bool branch_taken_0x20a8d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A8D8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x20a8d4) {
            ctx->pc = 0x20A888u;
            goto label_20a888;
        }
    }
    ctx->pc = 0x20A8DCu;
    // 0x20a8dc: 0x3c030032
    ctx->pc = 0x20a8dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20a8e0: 0x26a20001
    ctx->pc = 0x20a8e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 1));
    // 0x20a8e4: 0xac62eff0
    ctx->pc = 0x20a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963184), GPR_U32(ctx, 2));
label_20a8e8:
    // 0x20a8e8: 0xdfbf0090
    ctx->pc = 0x20a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20a8ec: 0xdfbe0080
    ctx->pc = 0x20a8ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20a8f0: 0xdfb70070
    ctx->pc = 0x20a8f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20a8f4: 0xdfb60060
    ctx->pc = 0x20a8f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20a8f8: 0xdfb50050
    ctx->pc = 0x20a8f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20a8fc: 0xdfb40040
    ctx->pc = 0x20a8fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20a900: 0xdfb30030
    ctx->pc = 0x20a900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a904: 0xdfb20020
    ctx->pc = 0x20a904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a908: 0xdfb10010
    ctx->pc = 0x20a908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a90c: 0xdfb00000
    ctx->pc = 0x20a90cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a910: 0x3e00008
    ctx->pc = 0x20A910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A914u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A774u: goto label_20a774;
            case 0x20A788u: goto label_20a788;
            case 0x20A7A0u: goto label_20a7a0;
            case 0x20A7BCu: goto label_20a7bc;
            case 0x20A7C8u: goto label_20a7c8;
            case 0x20A7E0u: goto label_20a7e0;
            case 0x20A7E4u: goto label_20a7e4;
            case 0x20A820u: goto label_20a820;
            case 0x20A84Cu: goto label_20a84c;
            case 0x20A888u: goto label_20a888;
            case 0x20A8B0u: goto label_20a8b0;
            case 0x20A8E8u: goto label_20a8e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A918u;
}
