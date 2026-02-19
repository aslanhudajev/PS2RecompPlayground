#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_see_thru
// Address: 0x22c810 - 0x22ccb0
void do_see_thru_0x22c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c810u;

    // 0x22c810: 0x27bdff70
    ctx->pc = 0x22c810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22c814: 0xffbf0080
    ctx->pc = 0x22c814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22c818: 0xffb70070
    ctx->pc = 0x22c818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22c81c: 0xffb60060
    ctx->pc = 0x22c81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22c820: 0xffb50050
    ctx->pc = 0x22c820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22c824: 0xffb40040
    ctx->pc = 0x22c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22c828: 0xffb30030
    ctx->pc = 0x22c828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22c82c: 0xffb20020
    ctx->pc = 0x22c82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22c830: 0xffb10010
    ctx->pc = 0x22c830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22c834: 0xffb00000
    ctx->pc = 0x22c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c838: 0xa02d
    ctx->pc = 0x22c838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c83c: 0x3c100034
    ctx->pc = 0x22c83cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x22c840: 0x8e02cd94
    ctx->pc = 0x22c840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294954388)));
    // 0x22c844: 0x1040010f
    ctx->pc = 0x22C844u;
    {
        const bool branch_taken_0x22c844 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C848u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x22c844) {
            ctx->pc = 0x22CC84u;
            goto label_22cc84;
        }
    }
    ctx->pc = 0x22C84Cu;
    // 0x22c84c: 0xc08b15e
    ctx->pc = 0x22C84Cu;
    SET_GPR_U32(ctx, 31, 0x22C854u);
    ctx->pc = 0x22C578u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClosestChest_0x22c578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C854u; }
    }
    if (ctx->pc != 0x22C854u) { return; }
    ctx->pc = 0x22C854u;
    // 0x22c854: 0x40882d
    ctx->pc = 0x22c854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c858: 0x620000a
    ctx->pc = 0x22C858u;
    {
        const bool branch_taken_0x22c858 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x22C85Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
        if (branch_taken_0x22c858) {
            ctx->pc = 0x22C884u;
            goto label_22c884;
        }
    }
    ctx->pc = 0x22C860u;
    // 0x22c860: 0x2221018
    ctx->pc = 0x22c860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22c864: 0x8e03cd94
    ctx->pc = 0x22c864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294954388)));
    // 0x22c868: 0x43a021
    ctx->pc = 0x22c868u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c86c: 0x8e820000
    ctx->pc = 0x22c86cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22c870: 0xc44c000c
    ctx->pc = 0x22c870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22c874: 0x26840050
    ctx->pc = 0x22c874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 80));
    // 0x22c878: 0xc0b4396
    ctx->pc = 0x22C878u;
    SET_GPR_U32(ctx, 31, 0x22C880u);
    ctx->pc = 0x22C87Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x2D0E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointVisible_0x2d0e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C880u; }
    }
    if (ctx->pc != 0x22C880u) { return; }
    ctx->pc = 0x22C880u;
    // 0x22c880: 0x2a00a
    ctx->pc = 0x22c880u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
label_22c884:
    // 0x22c884: 0x128000ef
    ctx->pc = 0x22C884u;
    {
        const bool branch_taken_0x22c884 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C888u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x22c884) {
            ctx->pc = 0x22CC44u;
            goto label_22cc44;
        }
    }
    ctx->pc = 0x22C88Cu;
    // 0x22c88c: 0x869600f0
    ctx->pc = 0x22c88cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x22c890: 0x24020050
    ctx->pc = 0x22c890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x22c894: 0x2c21018
    ctx->pc = 0x22c894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22c898: 0x8c63fa60
    ctx->pc = 0x22c898u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294965856)));
    // 0x22c89c: 0x438021
    ctx->pc = 0x22c89cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c8a0: 0x8e030000
    ctx->pc = 0x22c8a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c8a4: 0x2402ffff
    ctx->pc = 0x22c8a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22c8a8: 0x14620015
    ctx->pc = 0x22C8A8u;
    {
        const bool branch_taken_0x22c8a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x22C8ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x22c8a8) {
            ctx->pc = 0x22C900u;
            goto label_22c900;
        }
    }
    ctx->pc = 0x22C8B0u;
    // 0x22c8b0: 0x3c020032
    ctx->pc = 0x22c8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22c8b4: 0x2457f9f8
    ctx->pc = 0x22c8b4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x22c8b8: 0x24150050
    ctx->pc = 0x22c8b8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 80));
    // 0x22c8bc: 0x2412ffff
    ctx->pc = 0x22c8bcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22c8c0: 0x220202d
    ctx->pc = 0x22c8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c8c4: 0x0
    ctx->pc = 0x22c8c4u;
    // NOP
label_22c8c8:
    // 0x22c8c8: 0x8e050004
    ctx->pc = 0x22c8c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22c8cc: 0xc093e96
    ctx->pc = 0x22C8CCu;
    SET_GPR_U32(ctx, 31, 0x22C8D4u);
    ctx->pc = 0x22C8D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24FA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandItemIdx_0x24fa58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C8D4u; }
    }
    if (ctx->pc != 0x22C8D4u) { return; }
    ctx->pc = 0x22C8D4u;
    // 0x22c8d4: 0x21040
    ctx->pc = 0x22c8d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x22c8d8: 0x2021021
    ctx->pc = 0x22c8d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22c8dc: 0x84560008
    ctx->pc = 0x22c8dcu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22c8e0: 0x2d51818
    ctx->pc = 0x22c8e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22c8e4: 0x8ee20068
    ctx->pc = 0x22c8e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 104)));
    // 0x22c8e8: 0x628021
    ctx->pc = 0x22c8e8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c8ec: 0x8e020000
    ctx->pc = 0x22c8ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c8f0: 0x1052fff5
    ctx->pc = 0x22C8F0u;
    {
        const bool branch_taken_0x22c8f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x22C8F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22c8f0) {
            ctx->pc = 0x22C8C8u;
            goto label_22c8c8;
        }
    }
    ctx->pc = 0x22C8F8u;
    // 0x22c8f8: 0x8e030000
    ctx->pc = 0x22c8f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c8fc: 0x24020004
    ctx->pc = 0x22c8fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_22c900:
    // 0x22c900: 0x54620004
    ctx->pc = 0x22C900u;
    {
        const bool branch_taken_0x22c900 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22c900) {
            ctx->pc = 0x22C904u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x22C914u;
            goto label_22c914;
        }
    }
    ctx->pc = 0x22C908u;
    // 0x22c908: 0x3c020034
    ctx->pc = 0x22c908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22c90c: 0x1000000e
    ctx->pc = 0x22C90Cu;
    {
        const bool branch_taken_0x22c90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C910u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294954468)));
        if (branch_taken_0x22c90c) {
            ctx->pc = 0x22C948u;
            goto label_22c948;
        }
    }
    ctx->pc = 0x22C914u;
label_22c914:
    // 0x22c914: 0x24020001
    ctx->pc = 0x22c914u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c918: 0x5462000b
    ctx->pc = 0x22C918u;
    {
        const bool branch_taken_0x22c918 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22c918) {
            ctx->pc = 0x22C91Cu;
            SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->pc = 0x22C948u;
            goto label_22c948;
        }
    }
    ctx->pc = 0x22C920u;
    // 0x22c920: 0x8e030004
    ctx->pc = 0x22c920u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22c924: 0x24020002
    ctx->pc = 0x22c924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c928: 0x54620007
    ctx->pc = 0x22C928u;
    {
        const bool branch_taken_0x22c928 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22c928) {
            ctx->pc = 0x22C92Cu;
            SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->pc = 0x22C948u;
            goto label_22c948;
        }
    }
    ctx->pc = 0x22C930u;
    // 0x22c930: 0x86820100
    ctx->pc = 0x22c930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x22c934: 0x28420002
    ctx->pc = 0x22c934u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x22c938: 0x54400003
    ctx->pc = 0x22C938u;
    {
        const bool branch_taken_0x22c938 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22c938) {
            ctx->pc = 0x22C93Cu;
            SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->pc = 0x22C948u;
            goto label_22c948;
        }
    }
    ctx->pc = 0x22C940u;
    // 0x22c940: 0x3c020034
    ctx->pc = 0x22c940u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22c944: 0x8c55cde8
    ctx->pc = 0x22c944u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294954472)));
label_22c948:
    // 0x22c948: 0x182d
    ctx->pc = 0x22c948u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c94c: 0x3c020034
    ctx->pc = 0x22c94cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22c950: 0x2444cf30
    ctx->pc = 0x22c950u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954800));
    // 0x22c954: 0x0
    ctx->pc = 0x22c954u;
    // NOP
label_22c958:
    // 0x22c958: 0x10730005
    ctx->pc = 0x22C958u;
    {
        const bool branch_taken_0x22c958 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        ctx->pc = 0x22C95Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x22c958) {
            ctx->pc = 0x22C970u;
            goto label_22c970;
        }
    }
    ctx->pc = 0x22C960u;
    // 0x22c960: 0x441021
    ctx->pc = 0x22c960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22c964: 0x8c420000
    ctx->pc = 0x22c964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c968: 0x541026
    ctx->pc = 0x22c968u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x22c96c: 0x2a80a
    ctx->pc = 0x22c96cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 0));
label_22c970:
    // 0x22c970: 0x24630001
    ctx->pc = 0x22c970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x22c974: 0x28620004
    ctx->pc = 0x22c974u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x22c978: 0x1440fff7
    ctx->pc = 0x22C978u;
    {
        const bool branch_taken_0x22c978 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22c978) {
            ctx->pc = 0x22C958u;
            goto label_22c958;
        }
    }
    ctx->pc = 0x22C980u;
    // 0x22c980: 0x12a000b0
    ctx->pc = 0x22C980u;
    {
        const bool branch_taken_0x22c980 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C984u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x22c980) {
            ctx->pc = 0x22CC44u;
            goto label_22cc44;
        }
    }
    ctx->pc = 0x22C988u;
    // 0x22c988: 0x2442cf30
    ctx->pc = 0x22c988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954800));
    // 0x22c98c: 0x138880
    ctx->pc = 0x22c98cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 19), 2));
    // 0x22c990: 0x2229021
    ctx->pc = 0x22c990u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22c994: 0x8e440000
    ctx->pc = 0x22c994u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c998: 0x10940043
    ctx->pc = 0x22C998u;
    {
        const bool branch_taken_0x22c998 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 20));
        ctx->pc = 0x22C99Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22c998) {
            ctx->pc = 0x22CAA8u;
            goto label_22caa8;
        }
    }
    ctx->pc = 0x22C9A0u;
    // 0x22c9a0: 0x1080001e
    ctx->pc = 0x22C9A0u;
    {
        const bool branch_taken_0x22c9a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C9A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x22c9a0) {
            ctx->pc = 0x22CA1Cu;
            goto label_22ca1c;
        }
    }
    ctx->pc = 0x22C9A8u;
    // 0x22c9a8: 0x8c840070
    ctx->pc = 0x22c9a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x22c9ac: 0x1080001a
    ctx->pc = 0x22C9ACu;
    {
        const bool branch_taken_0x22c9ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C9B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954784));
        if (branch_taken_0x22c9ac) {
            ctx->pc = 0x22CA18u;
            goto label_22ca18;
        }
    }
    ctx->pc = 0x22C9B4u;
    // 0x22c9b4: 0x2221021
    ctx->pc = 0x22c9b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22c9b8: 0xc0b3f94
    ctx->pc = 0x22C9B8u;
    SET_GPR_U32(ctx, 31, 0x22C9C0u);
    ctx->pc = 0x22C9BCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C9C0u; }
    }
    if (ctx->pc != 0x22C9C0u) { return; }
    ctx->pc = 0x22C9C0u;
    // 0x22c9c0: 0x3c100034
    ctx->pc = 0x22c9c0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x22c9c4: 0x2610cf10
    ctx->pc = 0x22c9c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294954768));
    // 0x22c9c8: 0x2308021
    ctx->pc = 0x22c9c8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22c9cc: 0x8e420000
    ctx->pc = 0x22c9ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c9d0: 0x8e040000
    ctx->pc = 0x22c9d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c9d4: 0xc0b549e
    ctx->pc = 0x22C9D4u;
    SET_GPR_U32(ctx, 31, 0x22C9DCu);
    ctx->pc = 0x22C9D8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C9DCu; }
    }
    if (ctx->pc != 0x22C9DCu) { return; }
    ctx->pc = 0x22C9DCu;
    // 0x22c9dc: 0x8e420000
    ctx->pc = 0x22c9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c9e0: 0x8c430070
    ctx->pc = 0x22c9e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x22c9e4: 0x8e020000
    ctx->pc = 0x22c9e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c9e8: 0xc4400030
    ctx->pc = 0x22c9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c9ec: 0xe4600030
    ctx->pc = 0x22c9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x22c9f0: 0x8e420000
    ctx->pc = 0x22c9f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c9f4: 0x8c430070
    ctx->pc = 0x22c9f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x22c9f8: 0x8e020000
    ctx->pc = 0x22c9f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c9fc: 0xc4400034
    ctx->pc = 0x22c9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ca00: 0xe4600034
    ctx->pc = 0x22ca00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x22ca04: 0x8e420000
    ctx->pc = 0x22ca04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22ca08: 0x8c430070
    ctx->pc = 0x22ca08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x22ca0c: 0x8e020000
    ctx->pc = 0x22ca0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ca10: 0xc4400038
    ctx->pc = 0x22ca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ca14: 0xe4600038
    ctx->pc = 0x22ca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_22ca18:
    // 0x22ca18: 0x3c020034
    ctx->pc = 0x22ca18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_22ca1c:
    // 0x22ca1c: 0x2442cf20
    ctx->pc = 0x22ca1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x22ca20: 0x138880
    ctx->pc = 0x22ca20u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 19), 2));
    // 0x22ca24: 0x2221021
    ctx->pc = 0x22ca24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22ca28: 0x8e830070
    ctx->pc = 0x22ca28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x22ca2c: 0x8c650074
    ctx->pc = 0x22ca2cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x22ca30: 0xac450000
    ctx->pc = 0x22ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x22ca34: 0x3c100034
    ctx->pc = 0x22ca34u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x22ca38: 0x2610cf10
    ctx->pc = 0x22ca38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294954768));
    // 0x22ca3c: 0x2308021
    ctx->pc = 0x22ca3cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22ca40: 0xc0b3f94
    ctx->pc = 0x22CA40u;
    SET_GPR_U32(ctx, 31, 0x22CA48u);
    ctx->pc = 0x22CA44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CA48u; }
    }
    if (ctx->pc != 0x22CA48u) { return; }
    ctx->pc = 0x22CA48u;
    // 0x22ca48: 0x8e840070
    ctx->pc = 0x22ca48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x22ca4c: 0xc0b549e
    ctx->pc = 0x22CA4Cu;
    SET_GPR_U32(ctx, 31, 0x22CA54u);
    ctx->pc = 0x22CA50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CA54u; }
    }
    if (ctx->pc != 0x22CA54u) { return; }
    ctx->pc = 0x22CA54u;
    // 0x22ca54: 0x8e030000
    ctx->pc = 0x22ca54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ca58: 0x8e820070
    ctx->pc = 0x22ca58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x22ca5c: 0xc4400030
    ctx->pc = 0x22ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ca60: 0xe4600030
    ctx->pc = 0x22ca60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x22ca64: 0x8e030000
    ctx->pc = 0x22ca64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ca68: 0x8e820070
    ctx->pc = 0x22ca68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x22ca6c: 0xc4400034
    ctx->pc = 0x22ca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ca70: 0xe4600034
    ctx->pc = 0x22ca70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x22ca74: 0x8e030000
    ctx->pc = 0x22ca74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ca78: 0x8e820070
    ctx->pc = 0x22ca78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x22ca7c: 0xc4400038
    ctx->pc = 0x22ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ca80: 0xe4600038
    ctx->pc = 0x22ca80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x22ca84: 0x3c04003a
    ctx->pc = 0x22ca84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22ca88: 0x24842550
    ctx->pc = 0x22ca88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x22ca8c: 0xc0b5494
    ctx->pc = 0x22CA8Cu;
    SET_GPR_U32(ctx, 31, 0x22CA94u);
    ctx->pc = 0x22CA90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CA94u; }
    }
    if (ctx->pc != 0x22CA94u) { return; }
    ctx->pc = 0x22CA94u;
    // 0x22ca94: 0x3c020034
    ctx->pc = 0x22ca94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22ca98: 0x2442cf30
    ctx->pc = 0x22ca98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954800));
    // 0x22ca9c: 0x2228821
    ctx->pc = 0x22ca9cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22caa0: 0xae340000
    ctx->pc = 0x22caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x22caa4: 0x24050001
    ctx->pc = 0x22caa4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_22caa8:
    // 0x22caa8: 0x10a00008
    ctx->pc = 0x22CAA8u;
    {
        const bool branch_taken_0x22caa8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CAACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x22caa8) {
            ctx->pc = 0x22CACCu;
            goto label_22cacc;
        }
    }
    ctx->pc = 0x22CAB0u;
    // 0x22cab0: 0x2463cdf0
    ctx->pc = 0x22cab0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954480));
    // 0x22cab4: 0x24020048
    ctx->pc = 0x22cab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x22cab8: 0x2621018
    ctx->pc = 0x22cab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22cabc: 0x431021
    ctx->pc = 0x22cabcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cac0: 0x8c420000
    ctx->pc = 0x22cac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cac4: 0x10400008
    ctx->pc = 0x22CAC4u;
    {
        const bool branch_taken_0x22cac4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CAC8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x22cac4) {
            ctx->pc = 0x22CAE8u;
            goto label_22cae8;
        }
    }
    ctx->pc = 0x22CACCu;
label_22cacc:
    // 0x22cacc: 0x3c020034
    ctx->pc = 0x22caccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22cad0: 0x2442cf40
    ctx->pc = 0x22cad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954816));
    // 0x22cad4: 0x131880
    ctx->pc = 0x22cad4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x22cad8: 0x621821
    ctx->pc = 0x22cad8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22cadc: 0x8c620000
    ctx->pc = 0x22cadcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22cae0: 0x12c2002a
    ctx->pc = 0x22CAE0u;
    {
        const bool branch_taken_0x22cae0 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 2));
        ctx->pc = 0x22CAE4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x22cae0) {
            ctx->pc = 0x22CB8Cu;
            goto label_22cb8c;
        }
    }
    ctx->pc = 0x22CAE8u;
label_22cae8:
    // 0x22cae8: 0x2463cf40
    ctx->pc = 0x22cae8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954816));
    // 0x22caec: 0x131080
    ctx->pc = 0x22caecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x22caf0: 0x431021
    ctx->pc = 0x22caf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22caf4: 0xac560000
    ctx->pc = 0x22caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x22caf8: 0x3c030034
    ctx->pc = 0x22caf8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x22cafc: 0x2463cdf0
    ctx->pc = 0x22cafcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954480));
    // 0x22cb00: 0x24020048
    ctx->pc = 0x22cb00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x22cb04: 0x2621018
    ctx->pc = 0x22cb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22cb08: 0x432021
    ctx->pc = 0x22cb08u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cb0c: 0x8c820000
    ctx->pc = 0x22cb0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22cb10: 0x10400003
    ctx->pc = 0x22CB10u;
    {
        const bool branch_taken_0x22cb10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CB14u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 72));
        if (branch_taken_0x22cb10) {
            ctx->pc = 0x22CB20u;
            goto label_22cb20;
        }
    }
    ctx->pc = 0x22CB18u;
    // 0x22cb18: 0xc08496c
    ctx->pc = 0x22CB18u;
    SET_GPR_U32(ctx, 31, 0x22CB20u);
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB20u; }
    }
    if (ctx->pc != 0x22CB20u) { return; }
    ctx->pc = 0x22CB20u;
label_22cb20:
    // 0x22cb20: 0x2708018
    ctx->pc = 0x22cb20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22cb24: 0x3c020034
    ctx->pc = 0x22cb24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22cb28: 0x2442cdf0
    ctx->pc = 0x22cb28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954480));
    // 0x22cb2c: 0x2028021
    ctx->pc = 0x22cb2cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22cb30: 0x2a0202d
    ctx->pc = 0x22cb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb34: 0x200282d
    ctx->pc = 0x22cb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb38: 0x302d
    ctx->pc = 0x22cb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb3c: 0xc08476a
    ctx->pc = 0x22CB3Cu;
    SET_GPR_U32(ctx, 31, 0x22CB44u);
    ctx->pc = 0x22CB40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB44u; }
    }
    if (ctx->pc != 0x22CB44u) { return; }
    ctx->pc = 0x22CB44u;
    // 0x22cb44: 0xae020000
    ctx->pc = 0x22cb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22cb48: 0x8c440000
    ctx->pc = 0x22cb48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cb4c: 0x24050008
    ctx->pc = 0x22cb4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x22cb50: 0xc0b41b8
    ctx->pc = 0x22CB50u;
    SET_GPR_U32(ctx, 31, 0x22CB58u);
    ctx->pc = 0x22CB54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB58u; }
    }
    if (ctx->pc != 0x22CB58u) { return; }
    ctx->pc = 0x22CB58u;
    // 0x22cb58: 0x8e020000
    ctx->pc = 0x22cb58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cb5c: 0x8c420000
    ctx->pc = 0x22cb5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cb60: 0x3c013f26
    ctx->pc = 0x22cb60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16166 << 16));
    // 0x22cb64: 0x34216666
    ctx->pc = 0x22cb64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x22cb68: 0x44810000
    ctx->pc = 0x22cb68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22cb6c: 0xe4400040
    ctx->pc = 0x22cb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x22cb70: 0x8e020000
    ctx->pc = 0x22cb70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cb74: 0x8c420000
    ctx->pc = 0x22cb74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cb78: 0xe4400044
    ctx->pc = 0x22cb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x22cb7c: 0x8e020000
    ctx->pc = 0x22cb7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cb80: 0x8c420000
    ctx->pc = 0x22cb80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cb84: 0xe4400048
    ctx->pc = 0x22cb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x22cb88: 0x24050001
    ctx->pc = 0x22cb88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_22cb8c:
    // 0x22cb8c: 0x10a00023
    ctx->pc = 0x22CB8Cu;
    {
        const bool branch_taken_0x22cb8c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CB90u;
        SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
        if (branch_taken_0x22cb8c) {
            ctx->pc = 0x22CC1Cu;
            goto label_22cc1c;
        }
    }
    ctx->pc = 0x22CB94u;
    // 0x22cb94: 0x2652cf50
    ctx->pc = 0x22cb94u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294954832));
    // 0x22cb98: 0x138080
    ctx->pc = 0x22cb98u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 2));
    // 0x22cb9c: 0x2129021
    ctx->pc = 0x22cb9cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x22cba0: 0x8e440000
    ctx->pc = 0x22cba0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22cba4: 0xc0b3f94
    ctx->pc = 0x22CBA4u;
    SET_GPR_U32(ctx, 31, 0x22CBACu);
    ctx->pc = 0x22CBA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBACu; }
    }
    if (ctx->pc != 0x22CBACu) { return; }
    ctx->pc = 0x22CBACu;
    // 0x22cbac: 0x3c110034
    ctx->pc = 0x22cbacu;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x22cbb0: 0x2631cf30
    ctx->pc = 0x22cbb0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294954800));
    // 0x22cbb4: 0x2118821
    ctx->pc = 0x22cbb4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22cbb8: 0x8e220000
    ctx->pc = 0x22cbb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22cbbc: 0x8c440070
    ctx->pc = 0x22cbbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x22cbc0: 0xc0b3f94
    ctx->pc = 0x22CBC0u;
    SET_GPR_U32(ctx, 31, 0x22CBC8u);
    ctx->pc = 0x22CBC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBC8u; }
    }
    if (ctx->pc != 0x22CBC8u) { return; }
    ctx->pc = 0x22CBC8u;
    // 0x22cbc8: 0x3c030034
    ctx->pc = 0x22cbc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x22cbcc: 0x2463cdf0
    ctx->pc = 0x22cbccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954480));
    // 0x22cbd0: 0x24020048
    ctx->pc = 0x22cbd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x22cbd4: 0x2621018
    ctx->pc = 0x22cbd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22cbd8: 0x431021
    ctx->pc = 0x22cbd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cbdc: 0x8c430000
    ctx->pc = 0x22cbdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cbe0: 0x3c020034
    ctx->pc = 0x22cbe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22cbe4: 0x2442cf10
    ctx->pc = 0x22cbe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954768));
    // 0x22cbe8: 0x2028021
    ctx->pc = 0x22cbe8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22cbec: 0x8c640000
    ctx->pc = 0x22cbecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22cbf0: 0xc0b3f94
    ctx->pc = 0x22CBF0u;
    SET_GPR_U32(ctx, 31, 0x22CBF8u);
    ctx->pc = 0x22CBF4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBF8u; }
    }
    if (ctx->pc != 0x22CBF8u) { return; }
    ctx->pc = 0x22CBF8u;
    // 0x22cbf8: 0x8e440000
    ctx->pc = 0x22cbf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22cbfc: 0xc0b3f94
    ctx->pc = 0x22CBFCu;
    SET_GPR_U32(ctx, 31, 0x22CC04u);
    ctx->pc = 0x22CC00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC04u; }
    }
    if (ctx->pc != 0x22CC04u) { return; }
    ctx->pc = 0x22CC04u;
    // 0x22cc04: 0x8e220000
    ctx->pc = 0x22cc04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22cc08: 0x8c440070
    ctx->pc = 0x22cc08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x22cc0c: 0xc0b3f94
    ctx->pc = 0x22CC0Cu;
    SET_GPR_U32(ctx, 31, 0x22CC14u);
    ctx->pc = 0x22CC10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC14u; }
    }
    if (ctx->pc != 0x22CC14u) { return; }
    ctx->pc = 0x22CC14u;
    // 0x22cc14: 0xc097b86
    ctx->pc = 0x22CC14u;
    SET_GPR_U32(ctx, 31, 0x22CC1Cu);
    ctx->pc = 0x22CC18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25EE18u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerXray_0x25ee18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC1Cu; }
    }
    if (ctx->pc != 0x22CC1Cu) { return; }
    ctx->pc = 0x22CC1Cu;
label_22cc1c:
    // 0x22cc1c: 0x3c030034
    ctx->pc = 0x22cc1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x22cc20: 0x2463cf50
    ctx->pc = 0x22cc20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954832));
    // 0x22cc24: 0x131080
    ctx->pc = 0x22cc24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x22cc28: 0x431021
    ctx->pc = 0x22cc28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cc2c: 0x8c440000
    ctx->pc = 0x22cc2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cc30: 0x24050001
    ctx->pc = 0x22cc30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cc34: 0xc0b41e4
    ctx->pc = 0x22CC34u;
    SET_GPR_U32(ctx, 31, 0x22CC3Cu);
    ctx->pc = 0x22CC38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC3Cu; }
    }
    if (ctx->pc != 0x22CC3Cu) { return; }
    ctx->pc = 0x22CC3Cu;
    // 0x22cc3c: 0x10000008
    ctx->pc = 0x22CC3Cu;
    {
        const bool branch_taken_0x22cc3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CC40u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x22cc3c) {
            ctx->pc = 0x22CC60u;
            goto label_22cc60;
        }
    }
    ctx->pc = 0x22CC44u;
label_22cc44:
    // 0x22cc44: 0x3c020034
    ctx->pc = 0x22cc44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22cc48: 0x2442cf40
    ctx->pc = 0x22cc48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954816));
    // 0x22cc4c: 0x131880
    ctx->pc = 0x22cc4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x22cc50: 0x621821
    ctx->pc = 0x22cc50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22cc54: 0x2402ffff
    ctx->pc = 0x22cc54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cc58: 0xac620000
    ctx->pc = 0x22cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22cc5c: 0x3c030034
    ctx->pc = 0x22cc5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_22cc60:
    // 0x22cc60: 0x2463cf40
    ctx->pc = 0x22cc60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954816));
    // 0x22cc64: 0x131080
    ctx->pc = 0x22cc64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x22cc68: 0x431021
    ctx->pc = 0x22cc68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cc6c: 0x8c430000
    ctx->pc = 0x22cc6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cc70: 0x2402ffff
    ctx->pc = 0x22cc70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cc74: 0x14620004
    ctx->pc = 0x22CC74u;
    {
        const bool branch_taken_0x22cc74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x22CC78u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x22cc74) {
            ctx->pc = 0x22CC88u;
            goto label_22cc88;
        }
    }
    ctx->pc = 0x22CC7Cu;
    // 0x22cc7c: 0xc08b1bc
    ctx->pc = 0x22CC7Cu;
    SET_GPR_U32(ctx, 31, 0x22CC84u);
    ctx->pc = 0x22CC80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22C6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_see_thru_0x22c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC84u; }
    }
    if (ctx->pc != 0x22CC84u) { return; }
    ctx->pc = 0x22CC84u;
label_22cc84:
    // 0x22cc84: 0xdfbf0080
    ctx->pc = 0x22cc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22cc88:
    // 0x22cc88: 0xdfb70070
    ctx->pc = 0x22cc88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22cc8c: 0xdfb60060
    ctx->pc = 0x22cc8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22cc90: 0xdfb50050
    ctx->pc = 0x22cc90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cc94: 0xdfb40040
    ctx->pc = 0x22cc94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cc98: 0xdfb30030
    ctx->pc = 0x22cc98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cc9c: 0xdfb20020
    ctx->pc = 0x22cc9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cca0: 0xdfb10010
    ctx->pc = 0x22cca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cca4: 0xdfb00000
    ctx->pc = 0x22cca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cca8: 0x3e00008
    ctx->pc = 0x22CCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CCACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C884u: goto label_22c884;
            case 0x22C8C8u: goto label_22c8c8;
            case 0x22C900u: goto label_22c900;
            case 0x22C914u: goto label_22c914;
            case 0x22C948u: goto label_22c948;
            case 0x22C958u: goto label_22c958;
            case 0x22C970u: goto label_22c970;
            case 0x22CA18u: goto label_22ca18;
            case 0x22CA1Cu: goto label_22ca1c;
            case 0x22CAA8u: goto label_22caa8;
            case 0x22CACCu: goto label_22cacc;
            case 0x22CAE8u: goto label_22cae8;
            case 0x22CB20u: goto label_22cb20;
            case 0x22CB8Cu: goto label_22cb8c;
            case 0x22CC1Cu: goto label_22cc1c;
            case 0x22CC44u: goto label_22cc44;
            case 0x22CC60u: goto label_22cc60;
            case 0x22CC84u: goto label_22cc84;
            case 0x22CC88u: goto label_22cc88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22CCB0u;
}
