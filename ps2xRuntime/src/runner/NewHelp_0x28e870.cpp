#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NewHelp
// Address: 0x28e870 - 0x28eeb4
void NewHelp_0x28e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28e870u;

    // 0x28e870: 0x27bdff50
    ctx->pc = 0x28e870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28e874: 0xffbf00a0
    ctx->pc = 0x28e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x28e878: 0xffbe0090
    ctx->pc = 0x28e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x28e87c: 0xffb70080
    ctx->pc = 0x28e87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x28e880: 0xffb60070
    ctx->pc = 0x28e880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x28e884: 0xffb50060
    ctx->pc = 0x28e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x28e888: 0xffb40050
    ctx->pc = 0x28e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28e88c: 0xffb30040
    ctx->pc = 0x28e88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x28e890: 0xffb20030
    ctx->pc = 0x28e890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28e894: 0xffb10020
    ctx->pc = 0x28e894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x28e898: 0xffb00010
    ctx->pc = 0x28e898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28e89c: 0x80982d
    ctx->pc = 0x28e89cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e8a0: 0xa0a02d
    ctx->pc = 0x28e8a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e8a4: 0xc0882d
    ctx->pc = 0x28e8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e8a8: 0x2403001c
    ctx->pc = 0x28e8a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x28e8ac: 0x2631818
    ctx->pc = 0x28e8acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28e8b0: 0x3c020035
    ctx->pc = 0x28e8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e8b4: 0x2442c578
    ctx->pc = 0x28e8b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952312));
    // 0x28e8b8: 0x6600009
    ctx->pc = 0x28E8B8u;
    {
        const bool branch_taken_0x28e8b8 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x28E8BCu;
        SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x28e8b8) {
            ctx->pc = 0x28E8E0u;
            goto label_28e8e0;
        }
    }
    ctx->pc = 0x28E8C0u;
    // 0x28e8c0: 0x3c020035
    ctx->pc = 0x28e8c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e8c4: 0x8c42e18c
    ctx->pc = 0x28e8c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959500)));
    // 0x28e8c8: 0x262102a
    ctx->pc = 0x28e8c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x28e8cc: 0x1040016d
    ctx->pc = 0x28E8CCu;
    {
        const bool branch_taken_0x28e8cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E8D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e8cc) {
            ctx->pc = 0x28EE84u;
            goto label_28ee84;
        }
    }
    ctx->pc = 0x28E8D4u;
    // 0x28e8d4: 0x8fc20010
    ctx->pc = 0x28e8d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x28e8d8: 0x4410003
    ctx->pc = 0x28E8D8u;
    {
        const bool branch_taken_0x28e8d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28E8DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x28e8d8) {
            ctx->pc = 0x28E8E8u;
            goto label_28e8e8;
        }
    }
    ctx->pc = 0x28E8E0u;
label_28e8e0:
    // 0x28e8e0: 0x10000168
    ctx->pc = 0x28E8E0u;
    {
        const bool branch_taken_0x28e8e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E8E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e8e0) {
            ctx->pc = 0x28EE84u;
            goto label_28ee84;
        }
    }
    ctx->pc = 0x28E8E8u;
label_28e8e8:
    // 0x28e8e8: 0x8c42dbac
    ctx->pc = 0x28e8e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
    // 0x28e8ec: 0x14400165
    ctx->pc = 0x28E8ECu;
    {
        const bool branch_taken_0x28e8ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28E8F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e8ec) {
            ctx->pc = 0x28EE84u;
            goto label_28ee84;
        }
    }
    ctx->pc = 0x28E8F4u;
    // 0x28e8f4: 0x3c020032
    ctx->pc = 0x28e8f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28e8f8: 0x8c430868
    ctx->pc = 0x28e8f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 2152)));
    // 0x28e8fc: 0x24100008
    ctx->pc = 0x28e8fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 8));
    // 0x28e900: 0x2402000c
    ctx->pc = 0x28e900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28e904: 0x43800b
    ctx->pc = 0x28e904u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x28e908: 0x3c020031
    ctx->pc = 0x28e908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28e90c: 0x8c42f2a4
    ctx->pc = 0x28e90cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963876)));
    // 0x28e910: 0x24040001
    ctx->pc = 0x28e910u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e914: 0x2403000e
    ctx->pc = 0x28e914u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x28e918: 0x38420001
    ctx->pc = 0x28e918u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x28e91c: 0x62800a
    ctx->pc = 0x28e91cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x28e920: 0x8fc3000c
    ctx->pc = 0x28e920u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x28e924: 0x5064000c
    ctx->pc = 0x28E924u;
    {
        const bool branch_taken_0x28e924 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x28e924) {
            ctx->pc = 0x28E928u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x28E958u;
            goto label_28e958;
        }
    }
    ctx->pc = 0x28E92Cu;
    // 0x28e92c: 0x28620002
    ctx->pc = 0x28e92cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x28e930: 0x10400005
    ctx->pc = 0x28E930u;
    {
        const bool branch_taken_0x28e930 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E934u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28e930) {
            ctx->pc = 0x28E948u;
            goto label_28e948;
        }
    }
    ctx->pc = 0x28E938u;
    // 0x28e938: 0x10600014
    ctx->pc = 0x28E938u;
    {
        const bool branch_taken_0x28e938 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E93Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e938) {
            ctx->pc = 0x28E98Cu;
            goto label_28e98c;
        }
    }
    ctx->pc = 0x28E940u;
    // 0x28e940: 0x1000000d
    ctx->pc = 0x28E940u;
    {
        const bool branch_taken_0x28e940 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28e940) {
            ctx->pc = 0x28E978u;
            goto label_28e978;
        }
    }
    ctx->pc = 0x28E948u;
label_28e948:
    // 0x28e948: 0x10620007
    ctx->pc = 0x28E948u;
    {
        const bool branch_taken_0x28e948 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28E94Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e948) {
            ctx->pc = 0x28E968u;
            goto label_28e968;
        }
    }
    ctx->pc = 0x28E950u;
    // 0x28e950: 0x10000009
    ctx->pc = 0x28E950u;
    {
        const bool branch_taken_0x28e950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28e950) {
            ctx->pc = 0x28E978u;
            goto label_28e978;
        }
    }
    ctx->pc = 0x28E958u;
label_28e958:
    // 0x28e958: 0xc0a37ee
    ctx->pc = 0x28E958u;
    SET_GPR_U32(ctx, 31, 0x28E960u);
    ctx->pc = 0x28E95Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x28DFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        help_displayed_0x28dfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E960u; }
    }
    if (ctx->pc != 0x28E960u) { return; }
    ctx->pc = 0x28E960u;
    // 0x28e960: 0x10000008
    ctx->pc = 0x28E960u;
    {
        const bool branch_taken_0x28e960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E964u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
        if (branch_taken_0x28e960) {
            ctx->pc = 0x28E984u;
            goto label_28e984;
        }
    }
    ctx->pc = 0x28E968u;
label_28e968:
    // 0x28e968: 0xc0a37ee
    ctx->pc = 0x28E968u;
    SET_GPR_U32(ctx, 31, 0x28E970u);
    ctx->pc = 0x28E96Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28DFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        help_displayed_0x28dfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E970u; }
    }
    if (ctx->pc != 0x28E970u) { return; }
    ctx->pc = 0x28E970u;
    // 0x28e970: 0x10000004
    ctx->pc = 0x28E970u;
    {
        const bool branch_taken_0x28e970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28e970) {
            ctx->pc = 0x28E984u;
            goto label_28e984;
        }
    }
    ctx->pc = 0x28E978u;
label_28e978:
    // 0x28e978: 0xc0a37ee
    ctx->pc = 0x28E978u;
    SET_GPR_U32(ctx, 31, 0x28E980u);
    ctx->pc = 0x28E97Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x28DFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        help_displayed_0x28dfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E980u; }
    }
    if (ctx->pc != 0x28E980u) { return; }
    ctx->pc = 0x28E980u;
    // 0x28e980: 0x30420100
    ctx->pc = 0x28e980u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
label_28e984:
    // 0x28e984: 0x1440013f
    ctx->pc = 0x28E984u;
    {
        const bool branch_taken_0x28e984 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28E988u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e984) {
            ctx->pc = 0x28EE84u;
            goto label_28ee84;
        }
    }
    ctx->pc = 0x28E98Cu;
label_28e98c:
    // 0x28e98c: 0x3c020035
    ctx->pc = 0x28e98cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e990: 0x8c42e190
    ctx->pc = 0x28e990u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959504)));
    // 0x28e994: 0x1040000f
    ctx->pc = 0x28E994u;
    {
        const bool branch_taken_0x28e994 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E998u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x28e994) {
            ctx->pc = 0x28E9D4u;
            goto label_28e9d4;
        }
    }
    ctx->pc = 0x28E99Cu;
    // 0x28e99c: 0x2463c578
    ctx->pc = 0x28e99cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952312));
    // 0x28e9a0: 0x3c020035
    ctx->pc = 0x28e9a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e9a4: 0x8c42e194
    ctx->pc = 0x28e9a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959508)));
    // 0x28e9a8: 0x2404001c
    ctx->pc = 0x28e9a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    // 0x28e9ac: 0x441018
    ctx->pc = 0x28e9acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28e9b0: 0x24630008
    ctx->pc = 0x28e9b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x28e9b4: 0x431021
    ctx->pc = 0x28e9b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e9b8: 0x2642818
    ctx->pc = 0x28e9b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28e9bc: 0xa32021
    ctx->pc = 0x28e9bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28e9c0: 0x8c420000
    ctx->pc = 0x28e9c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e9c4: 0x8c830000
    ctx->pc = 0x28e9c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28e9c8: 0x43102a
    ctx->pc = 0x28e9c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x28e9cc: 0x1040012d
    ctx->pc = 0x28E9CCu;
    {
        const bool branch_taken_0x28e9cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28E9D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28e9cc) {
            ctx->pc = 0x28EE84u;
            goto label_28ee84;
        }
    }
    ctx->pc = 0x28E9D4u;
label_28e9d4:
    // 0x28e9d4: 0x2a62001d
    ctx->pc = 0x28e9d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 29));
    // 0x28e9d8: 0x1440000b
    ctx->pc = 0x28E9D8u;
    {
        const bool branch_taken_0x28e9d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28E9DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x28e9d8) {
            ctx->pc = 0x28EA08u;
            goto label_28ea08;
        }
    }
    ctx->pc = 0x28E9E0u;
    // 0x28e9e0: 0x2662ffd4
    ctx->pc = 0x28e9e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967252));
    // 0x28e9e4: 0x2c420002
    ctx->pc = 0x28e9e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x28e9e8: 0x14400007
    ctx->pc = 0x28E9E8u;
    {
        const bool branch_taken_0x28e9e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28E9ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x28e9e8) {
            ctx->pc = 0x28EA08u;
            goto label_28ea08;
        }
    }
    ctx->pc = 0x28E9F0u;
    // 0x28e9f0: 0x24020037
    ctx->pc = 0x28e9f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 55));
    // 0x28e9f4: 0x12620003
    ctx->pc = 0x28E9F4u;
    {
        const bool branch_taken_0x28e9f4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x28E9F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x28e9f4) {
            ctx->pc = 0x28EA04u;
            goto label_28ea04;
        }
    }
    ctx->pc = 0x28E9FCu;
    // 0x28e9fc: 0x1662000c
    ctx->pc = 0x28E9FCu;
    {
        const bool branch_taken_0x28e9fc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x28EA00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x28e9fc) {
            ctx->pc = 0x28EA30u;
            goto label_28ea30;
        }
    }
    ctx->pc = 0x28EA04u;
label_28ea04:
    // 0x28ea04: 0x3c020031
    ctx->pc = 0x28ea04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_28ea08:
    // 0x28ea08: 0x8c430018
    ctx->pc = 0x28ea08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x28ea0c: 0x34028006
    ctx->pc = 0x28ea0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32774));
    // 0x28ea10: 0x10620006
    ctx->pc = 0x28EA10u;
    {
        const bool branch_taken_0x28ea10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28EA14u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32771));
        if (branch_taken_0x28ea10) {
            ctx->pc = 0x28EA2Cu;
            goto label_28ea2c;
        }
    }
    ctx->pc = 0x28EA18u;
    // 0x28ea18: 0x10620004
    ctx->pc = 0x28EA18u;
    {
        const bool branch_taken_0x28ea18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28EA1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28ea18) {
            ctx->pc = 0x28EA2Cu;
            goto label_28ea2c;
        }
    }
    ctx->pc = 0x28EA20u;
    // 0x28ea20: 0x8c42e1b0
    ctx->pc = 0x28ea20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959536)));
    // 0x28ea24: 0x1c400117
    ctx->pc = 0x28EA24u;
    {
        const bool branch_taken_0x28ea24 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28EA28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28ea24) {
            ctx->pc = 0x28EE84u;
            goto label_28ee84;
        }
    }
    ctx->pc = 0x28EA2Cu;
label_28ea2c:
    // 0x28ea2c: 0x24020004
    ctx->pc = 0x28ea2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_28ea30:
    // 0x28ea30: 0x2403ffff
    ctx->pc = 0x28ea30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ea34: 0x74182a
    ctx->pc = 0x28ea34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 20)));
    // 0x28ea38: 0x283100b
    ctx->pc = 0x28ea38u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 20));
    // 0x28ea3c: 0xafa20008
    ctx->pc = 0x28ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x28ea40: 0x3a00a
    ctx->pc = 0x28ea40u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
    // 0x28ea44: 0x3c020035
    ctx->pc = 0x28ea44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28ea48: 0x12200009
    ctx->pc = 0x28EA48u;
    {
        const bool branch_taken_0x28ea48 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EA4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959548), GPR_U32(ctx, 0));
        if (branch_taken_0x28ea48) {
            ctx->pc = 0x28EA70u;
            goto label_28ea70;
        }
    }
    ctx->pc = 0x28EA50u;
    // 0x28ea50: 0x202d
    ctx->pc = 0x28ea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea54: 0x3a0282d
    ctx->pc = 0x28ea54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea58: 0x27a60004
    ctx->pc = 0x28ea58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x28ea5c: 0xc09cfe0
    ctx->pc = 0x28EA5Cu;
    SET_GPR_U32(ctx, 31, 0x28EA64u);
    ctx->pc = 0x28EA60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x273F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_text_pos_0x273f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA64u; }
    }
    if (ctx->pc != 0x28EA64u) { return; }
    ctx->pc = 0x28EA64u;
    // 0x28ea64: 0x8fa20004
    ctx->pc = 0x28ea64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28ea68: 0x1000000d
    ctx->pc = 0x28EA68u;
    {
        const bool branch_taken_0x28ea68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EA6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967234));
        if (branch_taken_0x28ea68) {
            ctx->pc = 0x28EAA0u;
            goto label_28eaa0;
        }
    }
    ctx->pc = 0x28EA70u;
label_28ea70:
    // 0x28ea70: 0x6800008
    ctx->pc = 0x28EA70u;
    {
        const bool branch_taken_0x28ea70 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x28EA74u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x28ea70) {
            ctx->pc = 0x28EA94u;
            goto label_28ea94;
        }
    }
    ctx->pc = 0x28EA78u;
    // 0x28ea78: 0x246315d8
    ctx->pc = 0x28ea78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5592));
    // 0x28ea7c: 0x141040
    ctx->pc = 0x28ea7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
    // 0x28ea80: 0x431021
    ctx->pc = 0x28ea80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28ea84: 0x94420000
    ctx->pc = 0x28ea84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ea88: 0xafa20000
    ctx->pc = 0x28ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x28ea8c: 0x10000004
    ctx->pc = 0x28EA8Cu;
    {
        const bool branch_taken_0x28ea8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EA90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 250));
        if (branch_taken_0x28ea8c) {
            ctx->pc = 0x28EAA0u;
            goto label_28eaa0;
        }
    }
    ctx->pc = 0x28EA94u;
label_28ea94:
    // 0x28ea94: 0x24020100
    ctx->pc = 0x28ea94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x28ea98: 0xafa20000
    ctx->pc = 0x28ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x28ea9c: 0x240200c0
    ctx->pc = 0x28ea9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 192));
label_28eaa0:
    // 0x28eaa0: 0xafa20004
    ctx->pc = 0x28eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x28eaa4: 0x8fc20014
    ctx->pc = 0x28eaa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x28eaa8: 0x4410005
    ctx->pc = 0x28EAA8u;
    {
        const bool branch_taken_0x28eaa8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28EAACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28eaa8) {
            ctx->pc = 0x28EAC0u;
            goto label_28eac0;
        }
    }
    ctx->pc = 0x28EAB0u;
    // 0x28eab0: 0xc080a84
    ctx->pc = 0x28EAB0u;
    SET_GPR_U32(ctx, 31, 0x28EAB8u);
    ctx->pc = 0x28EAB4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    ctx->pc = 0x202A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextNum_0x202a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EAB8u; }
    }
    if (ctx->pc != 0x28EAB8u) { return; }
    ctx->pc = 0x28EAB8u;
    // 0x28eab8: 0x10000002
    ctx->pc = 0x28EAB8u;
    {
        const bool branch_taken_0x28eab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EABCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x28eab8) {
            ctx->pc = 0x28EAC4u;
            goto label_28eac4;
        }
    }
    ctx->pc = 0x28EAC0u;
label_28eac0:
    // 0x28eac0: 0xafa2000c
    ctx->pc = 0x28eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_28eac4:
    // 0x28eac4: 0x8fc40010
    ctx->pc = 0x28eac4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x28eac8: 0x8fc50014
    ctx->pc = 0x28eac8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x28eacc: 0x3c013f80
    ctx->pc = 0x28eaccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28ead0: 0x44816000
    ctx->pc = 0x28ead0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28ead4: 0xc080a62
    ctx->pc = 0x28EAD4u;
    SET_GPR_U32(ctx, 31, 0x28EADCu);
    ctx->pc = 0x28EAD8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202988u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextHeight_0x202988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EADCu; }
    }
    if (ctx->pc != 0x28EADCu) { return; }
    ctx->pc = 0x28EADCu;
    // 0x28eadc: 0x24570010
    ctx->pc = 0x28eadcu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 16));
    // 0x28eae0: 0x171043
    ctx->pc = 0x28eae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 1));
    // 0x28eae4: 0x8fa30004
    ctx->pc = 0x28eae4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28eae8: 0x628823
    ctx->pc = 0x28eae8u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28eaec: 0x2a220002
    ctx->pc = 0x28eaecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
    // 0x28eaf0: 0x10400005
    ctx->pc = 0x28EAF0u;
    {
        const bool branch_taken_0x28eaf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EAF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x28eaf0) {
            ctx->pc = 0x28EB08u;
            goto label_28eb08;
        }
    }
    ctx->pc = 0x28EAF8u;
    // 0x28eaf8: 0x511023
    ctx->pc = 0x28eaf8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28eafc: 0xafa20004
    ctx->pc = 0x28eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x28eb00: 0x1000000b
    ctx->pc = 0x28EB00u;
    {
        const bool branch_taken_0x28eb00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EB04u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28eb00) {
            ctx->pc = 0x28EB30u;
            goto label_28eb30;
        }
    }
    ctx->pc = 0x28EB08u;
label_28eb08:
    // 0x28eb08: 0x2371821
    ctx->pc = 0x28eb08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x28eb0c: 0x28620131
    ctx->pc = 0x28eb0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 305));
    // 0x28eb10: 0x14400008
    ctx->pc = 0x28EB10u;
    {
        const bool branch_taken_0x28eb10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28EB14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28eb10) {
            ctx->pc = 0x28EB34u;
            goto label_28eb34;
        }
    }
    ctx->pc = 0x28EB18u;
    // 0x28eb18: 0x8fa20004
    ctx->pc = 0x28eb18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28eb1c: 0x24420130
    ctx->pc = 0x28eb1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 304));
    // 0x28eb20: 0x431023
    ctx->pc = 0x28eb20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28eb24: 0xafa20004
    ctx->pc = 0x28eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x28eb28: 0x24020130
    ctx->pc = 0x28eb28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 304));
    // 0x28eb2c: 0x578823
    ctx->pc = 0x28eb2cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_28eb30:
    // 0x28eb30: 0x3c020035
    ctx->pc = 0x28eb30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28eb34:
    // 0x28eb34: 0x8fa30004
    ctx->pc = 0x28eb34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28eb38: 0xac43e1a0
    ctx->pc = 0x28eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959520), GPR_U32(ctx, 3));
    // 0x28eb3c: 0x280202d
    ctx->pc = 0x28eb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb40: 0xc0a3826
    ctx->pc = 0x28EB40u;
    SET_GPR_U32(ctx, 31, 0x28EB48u);
    ctx->pc = 0x28EB44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E098u;
    {
        const uint32_t __entryPc = ctx->pc;
        msg_width_0x28e098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB48u; }
    }
    if (ctx->pc != 0x28EB48u) { return; }
    ctx->pc = 0x28EB48u;
    // 0x28eb48: 0x24550040
    ctx->pc = 0x28eb48u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 64));
    // 0x28eb4c: 0x151043
    ctx->pc = 0x28eb4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x28eb50: 0x8fa30000
    ctx->pc = 0x28eb50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eb54: 0x628023
    ctx->pc = 0x28eb54u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28eb58: 0x6030005
    ctx->pc = 0x28EB58u;
    {
        const bool branch_taken_0x28eb58 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x28eb58) {
            ctx->pc = 0x28EB5Cu;
            SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
            ctx->pc = 0x28EB70u;
            goto label_28eb70;
        }
    }
    ctx->pc = 0x28EB60u;
    // 0x28eb60: 0x701023
    ctx->pc = 0x28eb60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28eb64: 0xafa20000
    ctx->pc = 0x28eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x28eb68: 0x1000000a
    ctx->pc = 0x28EB68u;
    {
        const bool branch_taken_0x28eb68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EB6Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28eb68) {
            ctx->pc = 0x28EB94u;
            goto label_28eb94;
        }
    }
    ctx->pc = 0x28EB70u;
label_28eb70:
    // 0x28eb70: 0x28620200
    ctx->pc = 0x28eb70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 512));
    // 0x28eb74: 0x54400008
    ctx->pc = 0x28EB74u;
    {
        const bool branch_taken_0x28eb74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28eb74) {
            ctx->pc = 0x28EB78u;
            SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
            ctx->pc = 0x28EB98u;
            goto label_28eb98;
        }
    }
    ctx->pc = 0x28EB7Cu;
    // 0x28eb7c: 0x8fa20000
    ctx->pc = 0x28eb7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eb80: 0x244201ff
    ctx->pc = 0x28eb80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 511));
    // 0x28eb84: 0x431023
    ctx->pc = 0x28eb84u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28eb88: 0xafa20000
    ctx->pc = 0x28eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x28eb8c: 0x240201ff
    ctx->pc = 0x28eb8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 511));
    // 0x28eb90: 0x558023
    ctx->pc = 0x28eb90u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_28eb94:
    // 0x28eb94: 0x3c030035
    ctx->pc = 0x28eb94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_28eb98:
    // 0x28eb98: 0x8fa20000
    ctx->pc = 0x28eb98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eb9c: 0xac62e19c
    ctx->pc = 0x28eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959516), GPR_U32(ctx, 2));
    // 0x28eba0: 0x3c020035
    ctx->pc = 0x28eba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28eba4: 0x2456e178
    ctx->pc = 0x28eba4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294959480));
    // 0x28eba8: 0x3c120035
    ctx->pc = 0x28eba8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)53 << 16));
    // 0x28ebac: 0x8e42e1bc
    ctx->pc = 0x28ebacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294959548)));
    // 0x28ebb0: 0x21080
    ctx->pc = 0x28ebb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28ebb4: 0x561021
    ctx->pc = 0x28ebb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28ebb8: 0x8c440000
    ctx->pc = 0x28ebb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ebbc: 0x10800008
    ctx->pc = 0x28EBBCu;
    {
        const bool branch_taken_0x28ebbc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EBC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28ebbc) {
            ctx->pc = 0x28EBE0u;
            goto label_28ebe0;
        }
    }
    ctx->pc = 0x28EBC4u;
    // 0x28ebc4: 0xc0b0b38
    ctx->pc = 0x28EBC4u;
    SET_GPR_U32(ctx, 31, 0x28EBCCu);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EBCCu; }
    }
    if (ctx->pc != 0x28EBCCu) { return; }
    ctx->pc = 0x28EBCCu;
    // 0x28ebcc: 0x8e42e1bc
    ctx->pc = 0x28ebccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294959548)));
    // 0x28ebd0: 0x21080
    ctx->pc = 0x28ebd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28ebd4: 0x561021
    ctx->pc = 0x28ebd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28ebd8: 0xac400000
    ctx->pc = 0x28ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28ebdc: 0x3c020035
    ctx->pc = 0x28ebdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28ebe0:
    // 0x28ebe0: 0x2442c548
    ctx->pc = 0x28ebe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952264));
    // 0x28ebe4: 0x8fa30008
    ctx->pc = 0x28ebe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28ebe8: 0x39080
    ctx->pc = 0x28ebe8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 3), 2));
    // 0x28ebec: 0x2421021
    ctx->pc = 0x28ebecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28ebf0: 0x8c440000
    ctx->pc = 0x28ebf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ebf4: 0x200282d
    ctx->pc = 0x28ebf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebf8: 0xc0b0c08
    ctx->pc = 0x28EBF8u;
    SET_GPR_U32(ctx, 31, 0x28EC00u);
    ctx->pc = 0x28EBFCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC00u; }
    }
    if (ctx->pc != 0x28EC00u) { return; }
    ctx->pc = 0x28EC00u;
    // 0x28ec00: 0x3c100035
    ctx->pc = 0x28ec00u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x28ec04: 0x2610e178
    ctx->pc = 0x28ec04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294959480));
    // 0x28ec08: 0x3c110035
    ctx->pc = 0x28ec08u;
    SET_GPR_U32(ctx, 17, ((uint32_t)53 << 16));
    // 0x28ec0c: 0x8e23e1bc
    ctx->pc = 0x28ec0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294959548)));
    // 0x28ec10: 0x31880
    ctx->pc = 0x28ec10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x28ec14: 0x701821
    ctx->pc = 0x28ec14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28ec18: 0xac620000
    ctx->pc = 0x28ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28ec1c: 0x40202d
    ctx->pc = 0x28ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec20: 0x2a0282d
    ctx->pc = 0x28ec20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec24: 0xc0b0cf6
    ctx->pc = 0x28EC24u;
    SET_GPR_U32(ctx, 31, 0x28EC2Cu);
    ctx->pc = 0x28EC28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC2Cu; }
    }
    if (ctx->pc != 0x28EC2Cu) { return; }
    ctx->pc = 0x28EC2Cu;
    // 0x28ec2c: 0x8e22e1bc
    ctx->pc = 0x28ec2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294959548)));
    // 0x28ec30: 0x21080
    ctx->pc = 0x28ec30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28ec34: 0x501021
    ctx->pc = 0x28ec34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28ec38: 0x8c440000
    ctx->pc = 0x28ec38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ec3c: 0xc0b0f52
    ctx->pc = 0x28EC3Cu;
    SET_GPR_U32(ctx, 31, 0x28EC44u);
    ctx->pc = 0x28EC40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC44u; }
    }
    if (ctx->pc != 0x28EC44u) { return; }
    ctx->pc = 0x28EC44u;
    // 0x28ec44: 0x8e22e1bc
    ctx->pc = 0x28ec44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294959548)));
    // 0x28ec48: 0x21080
    ctx->pc = 0x28ec48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28ec4c: 0x501021
    ctx->pc = 0x28ec4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28ec50: 0x8c440000
    ctx->pc = 0x28ec50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ec54: 0xc0b0ce8
    ctx->pc = 0x28EC54u;
    SET_GPR_U32(ctx, 31, 0x28EC5Cu);
    ctx->pc = 0x28EC58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC5Cu; }
    }
    if (ctx->pc != 0x28EC5Cu) { return; }
    ctx->pc = 0x28EC5Cu;
    // 0x28ec5c: 0x3c020035
    ctx->pc = 0x28ec5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28ec60: 0x24100001
    ctx->pc = 0x28ec60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ec64: 0xac50e1a8
    ctx->pc = 0x28ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959528), GPR_U32(ctx, 16));
    // 0x28ec68: 0x3c030035
    ctx->pc = 0x28ec68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28ec6c: 0x3c020035
    ctx->pc = 0x28ec6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28ec70: 0x2442c560
    ctx->pc = 0x28ec70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952288));
    // 0x28ec74: 0x2429021
    ctx->pc = 0x28ec74u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28ec78: 0x8e420000
    ctx->pc = 0x28ec78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28ec7c: 0xac62e1a4
    ctx->pc = 0x28ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959524), GPR_U32(ctx, 2));
    // 0x28ec80: 0x3c020035
    ctx->pc = 0x28ec80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28ec84: 0xac54e198
    ctx->pc = 0x28ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959512), GPR_U32(ctx, 20));
    // 0x28ec88: 0x3c020035
    ctx->pc = 0x28ec88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28ec8c: 0xac53e194
    ctx->pc = 0x28ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959508), GPR_U32(ctx, 19));
    // 0x28ec90: 0x3c040035
    ctx->pc = 0x28ec90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28ec94: 0x3c030032
    ctx->pc = 0x28ec94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x28ec98: 0x24631bc0
    ctx->pc = 0x28ec98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x28ec9c: 0x24022b00
    ctx->pc = 0x28ec9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28eca0: 0x2821018
    ctx->pc = 0x28eca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28eca4: 0x431021
    ctx->pc = 0x28eca4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28eca8: 0x8c422ac0
    ctx->pc = 0x28eca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10944)));
    // 0x28ecac: 0xac82e1ac
    ctx->pc = 0x28ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294959532), GPR_U32(ctx, 2));
    // 0x28ecb0: 0x3c020035
    ctx->pc = 0x28ecb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28ecb4: 0xc0a38a0
    ctx->pc = 0x28ECB4u;
    SET_GPR_U32(ctx, 31, 0x28ECBCu);
    ctx->pc = 0x28ECB8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959504), GPR_U32(ctx, 16));
    ctx->pc = 0x28E280u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_text_0x28e280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ECBCu; }
    }
    if (ctx->pc != 0x28ECBCu) { return; }
    ctx->pc = 0x28ECBCu;
    // 0x28ecbc: 0x3c030035
    ctx->pc = 0x28ecbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28ecc0: 0x2402003c
    ctx->pc = 0x28ecc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x28ecc4: 0x8fa4000c
    ctx->pc = 0x28ecc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x28ecc8: 0x821018
    ctx->pc = 0x28ecc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28eccc: 0x2442001e
    ctx->pc = 0x28ecccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x28ecd0: 0xac62e188
    ctx->pc = 0x28ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959496), GPR_U32(ctx, 2));
    // 0x28ecd4: 0x8fc3000c
    ctx->pc = 0x28ecd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x28ecd8: 0x1070000b
    ctx->pc = 0x28ECD8u;
    {
        const bool branch_taken_0x28ecd8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 16));
        ctx->pc = 0x28ECDCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x28ecd8) {
            ctx->pc = 0x28ED08u;
            goto label_28ed08;
        }
    }
    ctx->pc = 0x28ECE0u;
    // 0x28ece0: 0x14400007
    ctx->pc = 0x28ECE0u;
    {
        const bool branch_taken_0x28ece0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28ECE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28ece0) {
            ctx->pc = 0x28ED00u;
            goto label_28ed00;
        }
    }
    ctx->pc = 0x28ECE8u;
    // 0x28ece8: 0x14620008
    ctx->pc = 0x28ECE8u;
    {
        const bool branch_taken_0x28ece8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28ECECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28ece8) {
            ctx->pc = 0x28ED0Cu;
            goto label_28ed0c;
        }
    }
    ctx->pc = 0x28ECF0u;
    // 0x28ecf0: 0xc0a380a
    ctx->pc = 0x28ECF0u;
    SET_GPR_U32(ctx, 31, 0x28ECF8u);
    ctx->pc = 0x28ECF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E028u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_help_displayed_0x28e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ECF8u; }
    }
    if (ctx->pc != 0x28ECF8u) { return; }
    ctx->pc = 0x28ECF8u;
    // 0x28ecf8: 0x10000007
    ctx->pc = 0x28ECF8u;
    {
        const bool branch_taken_0x28ecf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ECFCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
        if (branch_taken_0x28ecf8) {
            ctx->pc = 0x28ED18u;
            goto label_28ed18;
        }
    }
    ctx->pc = 0x28ED00u;
label_28ed00:
    // 0x28ed00: 0x50600005
    ctx->pc = 0x28ED00u;
    {
        const bool branch_taken_0x28ed00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x28ed00) {
            ctx->pc = 0x28ED04u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
            ctx->pc = 0x28ED18u;
            goto label_28ed18;
        }
    }
    ctx->pc = 0x28ED08u;
label_28ed08:
    // 0x28ed08: 0x260202d
    ctx->pc = 0x28ed08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28ed0c:
    // 0x28ed0c: 0xc0a380a
    ctx->pc = 0x28ED0Cu;
    SET_GPR_U32(ctx, 31, 0x28ED14u);
    ctx->pc = 0x28ED10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x28E028u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_help_displayed_0x28e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED14u; }
    }
    if (ctx->pc != 0x28ED14u) { return; }
    ctx->pc = 0x28ED14u;
    // 0x28ed14: 0x8fc40004
    ctx->pc = 0x28ed14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_28ed18:
    // 0x28ed18: 0x3c020031
    ctx->pc = 0x28ed18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28ed1c: 0x8c430018
    ctx->pc = 0x28ed1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x28ed20: 0x34028003
    ctx->pc = 0x28ed20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32771));
    // 0x28ed24: 0x10620004
    ctx->pc = 0x28ED24u;
    {
        const bool branch_taken_0x28ed24 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28ED28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28ed24) {
            ctx->pc = 0x28ED38u;
            goto label_28ed38;
        }
    }
    ctx->pc = 0x28ED2Cu;
    // 0x28ed2c: 0x8c42e1b8
    ctx->pc = 0x28ed2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959544)));
    // 0x28ed30: 0x10400003
    ctx->pc = 0x28ED30u;
    {
        const bool branch_taken_0x28ed30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ED34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x28ed30) {
            ctx->pc = 0x28ED40u;
            goto label_28ed40;
        }
    }
    ctx->pc = 0x28ED38u;
label_28ed38:
    // 0x28ed38: 0x2404ffff
    ctx->pc = 0x28ed38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ed3c: 0x2402ffff
    ctx->pc = 0x28ed3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_28ed40:
    // 0x28ed40: 0x10820008
    ctx->pc = 0x28ED40u;
    {
        const bool branch_taken_0x28ed40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x28ED44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28ed40) {
            ctx->pc = 0x28ED64u;
            goto label_28ed64;
        }
    }
    ctx->pc = 0x28ED48u;
    // 0x28ed48: 0x10820003
    ctx->pc = 0x28ED48u;
    {
        const bool branch_taken_0x28ed48 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x28ED4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x28ed48) {
            ctx->pc = 0x28ED58u;
            goto label_28ed58;
        }
    }
    ctx->pc = 0x28ED50u;
    // 0x28ed50: 0x10000007
    ctx->pc = 0x28ED50u;
    {
        const bool branch_taken_0x28ed50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ED54u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x28ed50) {
            ctx->pc = 0x28ED70u;
            goto label_28ed70;
        }
    }
    ctx->pc = 0x28ED58u;
label_28ed58:
    // 0x28ed58: 0x3c030031
    ctx->pc = 0x28ed58u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x28ed5c: 0x10000003
    ctx->pc = 0x28ED5Cu;
    {
        const bool branch_taken_0x28ed5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ED60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x28ed5c) {
            ctx->pc = 0x28ED6Cu;
            goto label_28ed6c;
        }
    }
    ctx->pc = 0x28ED64u;
label_28ed64:
    // 0x28ed64: 0x3c030031
    ctx->pc = 0x28ed64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x28ed68: 0x2402003c
    ctx->pc = 0x28ed68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_28ed6c:
    // 0x28ed6c: 0xac620024
    ctx->pc = 0x28ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_28ed70:
    // 0x28ed70: 0x8fc20018
    ctx->pc = 0x28ed70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x28ed74: 0x10400042
    ctx->pc = 0x28ED74u;
    {
        const bool branch_taken_0x28ed74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28ED78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
        if (branch_taken_0x28ed74) {
            ctx->pc = 0x28EE80u;
            goto label_28ee80;
        }
    }
    ctx->pc = 0x28ED7Cu;
    // 0x28ed7c: 0x1662001a
    ctx->pc = 0x28ED7Cu;
    {
        const bool branch_taken_0x28ed7c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x28ED80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28ed7c) {
            ctx->pc = 0x28EDE8u;
            goto label_28ede8;
        }
    }
    ctx->pc = 0x28ED84u;
    // 0x28ed84: 0x3c020035
    ctx->pc = 0x28ed84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28ed88: 0x8c43e1ac
    ctx->pc = 0x28ed88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959532)));
    // 0x28ed8c: 0x2862000a
    ctx->pc = 0x28ed8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 10));
    // 0x28ed90: 0x54400016
    ctx->pc = 0x28ED90u;
    {
        const bool branch_taken_0x28ed90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28ed90) {
            ctx->pc = 0x28ED94u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 24)));
            ctx->pc = 0x28EDECu;
            goto label_28edec;
        }
    }
    ctx->pc = 0x28ED98u;
    // 0x28ed98: 0x28620063
    ctx->pc = 0x28ed98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 99));
    // 0x28ed9c: 0x14400007
    ctx->pc = 0x28ED9Cu;
    {
        const bool branch_taken_0x28ed9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28EDA0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x28ed9c) {
            ctx->pc = 0x28EDBCu;
            goto label_28edbc;
        }
    }
    ctx->pc = 0x28EDA4u;
    // 0x28eda4: 0x280202d
    ctx->pc = 0x28eda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eda8: 0x282d
    ctx->pc = 0x28eda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28edac: 0xc0982d2
    ctx->pc = 0x28EDACu;
    SET_GPR_U32(ctx, 31, 0x28EDB4u);
    ctx->pc = 0x28EDB0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 99));
    ctx->pc = 0x260B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioExp_0x260b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EDB4u; }
    }
    if (ctx->pc != 0x28EDB4u) { return; }
    ctx->pc = 0x28EDB4u;
    // 0x28edb4: 0x10000010
    ctx->pc = 0x28EDB4u;
    {
        const bool branch_taken_0x28edb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EDB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x28edb4) {
            ctx->pc = 0x28EDF8u;
            goto label_28edf8;
        }
    }
    ctx->pc = 0x28EDBCu;
label_28edbc:
    // 0x28edbc: 0x24631bc0
    ctx->pc = 0x28edbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x28edc0: 0x24022b00
    ctx->pc = 0x28edc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28edc4: 0x2821018
    ctx->pc = 0x28edc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28edc8: 0x431021
    ctx->pc = 0x28edc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28edcc: 0x3c030035
    ctx->pc = 0x28edccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28edd0: 0x280202d
    ctx->pc = 0x28edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28edd4: 0x8c45000c
    ctx->pc = 0x28edd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28edd8: 0xc0982d2
    ctx->pc = 0x28EDD8u;
    SET_GPR_U32(ctx, 31, 0x28EDE0u);
    ctx->pc = 0x28EDDCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294959532)));
    ctx->pc = 0x260B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioExp_0x260b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EDE0u; }
    }
    if (ctx->pc != 0x28EDE0u) { return; }
    ctx->pc = 0x28EDE0u;
    // 0x28ede0: 0x10000005
    ctx->pc = 0x28EDE0u;
    {
        const bool branch_taken_0x28ede0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EDE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x28ede0) {
            ctx->pc = 0x28EDF8u;
            goto label_28edf8;
        }
    }
    ctx->pc = 0x28EDE8u;
label_28ede8:
    // 0x28ede8: 0x8fc50018
    ctx->pc = 0x28ede8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_28edec:
    // 0x28edec: 0xc0982f6
    ctx->pc = 0x28EDECu;
    SET_GPR_U32(ctx, 31, 0x28EDF4u);
    ctx->pc = 0x28EDF0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x260BD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioHelp_0x260bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EDF4u; }
    }
    if (ctx->pc != 0x28EDF4u) { return; }
    ctx->pc = 0x28EDF4u;
    // 0x28edf4: 0x3c020031
    ctx->pc = 0x28edf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_28edf8:
    // 0x28edf8: 0xdc420e28
    ctx->pc = 0x28edf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x28edfc: 0x30420010
    ctx->pc = 0x28edfcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x28ee00: 0x1440001e
    ctx->pc = 0x28EE00u;
    {
        const bool branch_taken_0x28ee00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28EE04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28ee00) {
            ctx->pc = 0x28EE7Cu;
            goto label_28ee7c;
        }
    }
    ctx->pc = 0x28EE08u;
    // 0x28ee08: 0x3c020031
    ctx->pc = 0x28ee08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28ee0c: 0x8c430018
    ctx->pc = 0x28ee0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x28ee10: 0x34028003
    ctx->pc = 0x28ee10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32771));
    // 0x28ee14: 0x10620003
    ctx->pc = 0x28EE14u;
    {
        const bool branch_taken_0x28ee14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28EE18u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32774));
        if (branch_taken_0x28ee14) {
            ctx->pc = 0x28EE24u;
            goto label_28ee24;
        }
    }
    ctx->pc = 0x28EE1Cu;
    // 0x28ee1c: 0x14620005
    ctx->pc = 0x28EE1Cu;
    {
        const bool branch_taken_0x28ee1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28EE20u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        if (branch_taken_0x28ee1c) {
            ctx->pc = 0x28EE34u;
            goto label_28ee34;
        }
    }
    ctx->pc = 0x28EE24u;
label_28ee24:
    // 0x28ee24: 0x3c030035
    ctx->pc = 0x28ee24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28ee28: 0x2402003c
    ctx->pc = 0x28ee28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x28ee2c: 0x10000014
    ctx->pc = 0x28EE2Cu;
    {
        const bool branch_taken_0x28ee2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EE30u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959536), GPR_U32(ctx, 2));
        if (branch_taken_0x28ee2c) {
            ctx->pc = 0x28EE80u;
            goto label_28ee80;
        }
    }
    ctx->pc = 0x28EE34u;
label_28ee34:
    // 0x28ee34: 0x3c030035
    ctx->pc = 0x28ee34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28ee38: 0x2463c530
    ctx->pc = 0x28ee38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952240));
    // 0x28ee3c: 0x3c060035
    ctx->pc = 0x28ee3cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)53 << 16));
    // 0x28ee40: 0x8cc5e1b4
    ctx->pc = 0x28ee40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4294959540)));
    // 0x28ee44: 0x51080
    ctx->pc = 0x28ee44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x28ee48: 0x431021
    ctx->pc = 0x28ee48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28ee4c: 0x8c420000
    ctx->pc = 0x28ee4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ee50: 0xac82e1b0
    ctx->pc = 0x28ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294959536), GPR_U32(ctx, 2));
    // 0x28ee54: 0x24a50001
    ctx->pc = 0x28ee54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x28ee58: 0xacc5e1b4
    ctx->pc = 0x28ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294959540), GPR_U32(ctx, 5));
    // 0x28ee5c: 0x51080
    ctx->pc = 0x28ee5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x28ee60: 0x431021
    ctx->pc = 0x28ee60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28ee64: 0x8c420000
    ctx->pc = 0x28ee64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ee68: 0x4410006
    ctx->pc = 0x28EE68u;
    {
        const bool branch_taken_0x28ee68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28EE6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x28ee68) {
            ctx->pc = 0x28EE84u;
            goto label_28ee84;
        }
    }
    ctx->pc = 0x28EE70u;
    // 0x28ee70: 0x24a2ffff
    ctx->pc = 0x28ee70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28ee74: 0x10000002
    ctx->pc = 0x28EE74u;
    {
        const bool branch_taken_0x28ee74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EE78u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294959540), GPR_U32(ctx, 2));
        if (branch_taken_0x28ee74) {
            ctx->pc = 0x28EE80u;
            goto label_28ee80;
        }
    }
    ctx->pc = 0x28EE7Cu;
label_28ee7c:
    // 0x28ee7c: 0xac40e1b0
    ctx->pc = 0x28ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959536), GPR_U32(ctx, 0));
label_28ee80:
    // 0x28ee80: 0x2402ffff
    ctx->pc = 0x28ee80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_28ee84:
    // 0x28ee84: 0xdfbf00a0
    ctx->pc = 0x28ee84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28ee88: 0xdfbe0090
    ctx->pc = 0x28ee88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ee8c: 0xdfb70080
    ctx->pc = 0x28ee8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ee90: 0xdfb60070
    ctx->pc = 0x28ee90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28ee94: 0xdfb50060
    ctx->pc = 0x28ee94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ee98: 0xdfb40050
    ctx->pc = 0x28ee98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ee9c: 0xdfb30040
    ctx->pc = 0x28ee9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28eea0: 0xdfb20030
    ctx->pc = 0x28eea0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28eea4: 0xdfb10020
    ctx->pc = 0x28eea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28eea8: 0xdfb00010
    ctx->pc = 0x28eea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eeac: 0x3e00008
    ctx->pc = 0x28EEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EEB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28E8E0u: goto label_28e8e0;
            case 0x28E8E8u: goto label_28e8e8;
            case 0x28E948u: goto label_28e948;
            case 0x28E958u: goto label_28e958;
            case 0x28E968u: goto label_28e968;
            case 0x28E978u: goto label_28e978;
            case 0x28E984u: goto label_28e984;
            case 0x28E98Cu: goto label_28e98c;
            case 0x28E9D4u: goto label_28e9d4;
            case 0x28EA04u: goto label_28ea04;
            case 0x28EA08u: goto label_28ea08;
            case 0x28EA2Cu: goto label_28ea2c;
            case 0x28EA30u: goto label_28ea30;
            case 0x28EA70u: goto label_28ea70;
            case 0x28EA94u: goto label_28ea94;
            case 0x28EAA0u: goto label_28eaa0;
            case 0x28EAC0u: goto label_28eac0;
            case 0x28EAC4u: goto label_28eac4;
            case 0x28EB08u: goto label_28eb08;
            case 0x28EB30u: goto label_28eb30;
            case 0x28EB34u: goto label_28eb34;
            case 0x28EB70u: goto label_28eb70;
            case 0x28EB94u: goto label_28eb94;
            case 0x28EB98u: goto label_28eb98;
            case 0x28EBE0u: goto label_28ebe0;
            case 0x28ED00u: goto label_28ed00;
            case 0x28ED08u: goto label_28ed08;
            case 0x28ED0Cu: goto label_28ed0c;
            case 0x28ED18u: goto label_28ed18;
            case 0x28ED38u: goto label_28ed38;
            case 0x28ED40u: goto label_28ed40;
            case 0x28ED58u: goto label_28ed58;
            case 0x28ED64u: goto label_28ed64;
            case 0x28ED6Cu: goto label_28ed6c;
            case 0x28ED70u: goto label_28ed70;
            case 0x28EDBCu: goto label_28edbc;
            case 0x28EDE8u: goto label_28ede8;
            case 0x28EDECu: goto label_28edec;
            case 0x28EDF8u: goto label_28edf8;
            case 0x28EE24u: goto label_28ee24;
            case 0x28EE34u: goto label_28ee34;
            case 0x28EE7Cu: goto label_28ee7c;
            case 0x28EE80u: goto label_28ee80;
            case 0x28EE84u: goto label_28ee84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28EEB4u;
}
