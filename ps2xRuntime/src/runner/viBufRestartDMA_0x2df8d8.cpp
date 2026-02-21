#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufRestartDMA
// Address: 0x2df8d8 - 0x2dfc10
void viBufRestartDMA_0x2df8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df8d8u;

    // 0x2df8d8: 0x27bdff80
    ctx->pc = 0x2df8d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2df8dc: 0xffbf0070
    ctx->pc = 0x2df8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2df8e0: 0xffb60060
    ctx->pc = 0x2df8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2df8e4: 0xffb50050
    ctx->pc = 0x2df8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2df8e8: 0xffb40040
    ctx->pc = 0x2df8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2df8ec: 0xffb30030
    ctx->pc = 0x2df8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2df8f0: 0xffb20020
    ctx->pc = 0x2df8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2df8f4: 0xffb10010
    ctx->pc = 0x2df8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2df8f8: 0xffb00000
    ctx->pc = 0x2df8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df8fc: 0x80802d
    ctx->pc = 0x2df8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df900: 0x8e020038
    ctx->pc = 0x2df900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2df904: 0x3056007f
    ctx->pc = 0x2df904u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 2), 127));
    // 0x2df908: 0x21c02
    ctx->pc = 0x2df908u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 16));
    // 0x2df90c: 0x30630003
    ctx->pc = 0x2df90cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x2df910: 0x21202
    ctx->pc = 0x2df910u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x2df914: 0x3042000f
    ctx->pc = 0x2df914u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x2df918: 0x621821
    ctx->pc = 0x2df918u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df91c: 0x32100
    ctx->pc = 0x2df91cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df920: 0x8e02001c
    ctx->pc = 0x2df920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2df924: 0x44a023
    ctx->pc = 0x2df924u;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2df928: 0x8e020024
    ctx->pc = 0x2df928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2df92c: 0x629821
    ctx->pc = 0x2df92cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df930: 0x8e150020
    ctx->pc = 0x2df930u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2df934: 0x8e020028
    ctx->pc = 0x2df934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2df938: 0x34520100
    ctx->pc = 0x2df938u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 2), 256));
    // 0x2df93c: 0xc0c0d88
    ctx->pc = 0x2DF93Cu;
    SET_GPR_U32(ctx, 31, 0x2DF944u);
    ctx->pc = 0x2DF940u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF944u; }
    }
    if (ctx->pc != 0x2DF944u) { return; }
    ctx->pc = 0x2DF944u;
    // 0x2df944: 0x8e040000
    ctx->pc = 0x2df944u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2df948: 0x284102b
    ctx->pc = 0x2df948u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2df94c: 0x5040002b
    ctx->pc = 0x2DF94Cu;
    {
        const bool branch_taken_0x2df94c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2df94c) {
            ctx->pc = 0x2DF950u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DF9FCu;
            goto label_2df9fc;
        }
    }
    ctx->pc = 0x2DF954u;
    // 0x2df954: 0x949823
    ctx->pc = 0x2df954u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2df958: 0x139902
    ctx->pc = 0x2df958u;
    SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 19), 4));
    // 0x2df95c: 0x8e020008
    ctx->pc = 0x2df95cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2df960: 0x232c0
    ctx->pc = 0x2df960u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 11));
    // 0x2df964: 0x286a021
    ctx->pc = 0x2df964u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2df968: 0x8e030004
    ctx->pc = 0x2df968u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2df96c: 0x3c020fff
    ctx->pc = 0x2df96cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2df970: 0x3442ffff
    ctx->pc = 0x2df970u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2df974: 0x62a824
    ctx->pc = 0x2df974u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df978: 0x8e05001c
    ctx->pc = 0x2df978u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2df97c: 0x10a40006
    ctx->pc = 0x2DF97Cu;
    {
        const bool branch_taken_0x2df97c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        ctx->pc = 0x2DF980u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2df97c) {
            ctx->pc = 0x2DF998u;
            goto label_2df998;
        }
    }
    ctx->pc = 0x2DF984u;
    // 0x2df984: 0xc41021
    ctx->pc = 0x2df984u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2df988: 0x24030003
    ctx->pc = 0x2df988u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2df98c: 0xa21026
    ctx->pc = 0x2df98cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2df990: 0x60402d
    ctx->pc = 0x2df990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df994: 0x2400a
    ctx->pc = 0x2df994u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 0));
label_2df998:
    // 0x2df998: 0x8e030028
    ctx->pc = 0x2df998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2df99c: 0x3c020fff
    ctx->pc = 0x2df99cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2df9a0: 0x3442ffff
    ctx->pc = 0x2df9a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2df9a4: 0x629024
    ctx->pc = 0x2df9a4u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df9a8: 0x81700
    ctx->pc = 0x2df9a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 28));
    // 0x2df9ac: 0x2429025
    ctx->pc = 0x2df9acu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2df9b0: 0x8e030008
    ctx->pc = 0x2df9b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2df9b4: 0x8e02000c
    ctx->pc = 0x2df9b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2df9b8: 0x621023
    ctx->pc = 0x2df9b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df9bc: 0x43001a
    ctx->pc = 0x2df9bcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2df9c0: 0x2010
    ctx->pc = 0x2df9c0u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x2df9c4: 0x50600001
    ctx->pc = 0x2DF9C4u;
    {
        const bool branch_taken_0x2df9c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2df9c4) {
            ctx->pc = 0x2DF9C8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DF9CCu;
            goto label_2df9cc;
        }
    }
    ctx->pc = 0x2DF9CCu;
label_2df9cc:
    // 0x2df9cc: 0x4800007
    ctx->pc = 0x2DF9CCu;
    {
        const bool branch_taken_0x2df9cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2DF9D0u;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 256));
        if (branch_taken_0x2df9cc) {
            ctx->pc = 0x2DF9ECu;
            goto label_2df9ec;
        }
    }
    ctx->pc = 0x2DF9D4u;
    // 0x2df9d4: 0x50600001
    ctx->pc = 0x2DF9D4u;
    {
        const bool branch_taken_0x2df9d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2df9d4) {
            ctx->pc = 0x2DF9D8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DF9DCu;
            goto label_2df9dc;
        }
    }
    ctx->pc = 0x2DF9DCu;
label_2df9dc:
    // 0x2df9dc: 0x8e020010
    ctx->pc = 0x2df9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2df9e0: 0x82102a
    ctx->pc = 0x2df9e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x2df9e4: 0x54400044
    ctx->pc = 0x2DF9E4u;
    {
        const bool branch_taken_0x2df9e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2df9e4) {
            ctx->pc = 0x2DF9E8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2DFAF8u;
            goto label_2dfaf8;
        }
    }
    ctx->pc = 0x2DF9ECu;
label_2df9ec:
    // 0x2df9ec: 0x8e020008
    ctx->pc = 0x2df9ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2df9f0: 0x2442ffff
    ctx->pc = 0x2df9f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2df9f4: 0x1000003c
    ctx->pc = 0x2DF9F4u;
    {
        const bool branch_taken_0x2df9f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DF9F8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x2df9f4) {
            ctx->pc = 0x2DFAE8u;
            goto label_2dfae8;
        }
    }
    ctx->pc = 0x2DF9FCu;
label_2df9fc:
    // 0x2df9fc: 0xc0b7c54
    ctx->pc = 0x2DF9FCu;
    SET_GPR_U32(ctx, 31, 0x2DFA04u);
    ctx->pc = 0x2DFA00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x2DF150u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x2df150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA04u; }
    }
    if (ctx->pc != 0x2DFA04u) { return; }
    ctx->pc = 0x2DFA04u;
    // 0x2dfa04: 0x40882d
    ctx->pc = 0x2dfa04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa08: 0x200202d
    ctx->pc = 0x2dfa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa0c: 0xc0b7c54
    ctx->pc = 0x2DFA0Cu;
    SET_GPR_U32(ctx, 31, 0x2DFA14u);
    ctx->pc = 0x2DFA10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF150u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x2df150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA14u; }
    }
    if (ctx->pc != 0x2DFA14u) { return; }
    ctx->pc = 0x2DFA14u;
    // 0x2dfa14: 0x40482d
    ctx->pc = 0x2dfa14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa18: 0x12290036
    ctx->pc = 0x2DFA18u;
    {
        const bool branch_taken_0x2dfa18 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 9));
        ctx->pc = 0x2DFA1Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x2dfa18) {
            ctx->pc = 0x2DFAF4u;
            goto label_2dfaf4;
        }
    }
    ctx->pc = 0x2DFA20u;
    // 0x2dfa20: 0x8e020004
    ctx->pc = 0x2dfa20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2dfa24: 0x62a821
    ctx->pc = 0x2dfa24u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dfa28: 0x3c060fff
    ctx->pc = 0x2dfa28u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4095 << 16));
    // 0x2dfa2c: 0x34c6ffff
    ctx->pc = 0x2dfa2cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
    // 0x2dfa30: 0x2a6a824
    ctx->pc = 0x2dfa30u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x2dfa34: 0x1112c0
    ctx->pc = 0x2dfa34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 11));
    // 0x2dfa38: 0x8e040000
    ctx->pc = 0x2dfa38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfa3c: 0x449821
    ctx->pc = 0x2dfa3cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dfa40: 0x2749823
    ctx->pc = 0x2dfa40u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2dfa44: 0x8e03001c
    ctx->pc = 0x2dfa44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2dfa48: 0x641823
    ctx->pc = 0x2dfa48u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dfa4c: 0x8e070008
    ctx->pc = 0x2dfa4cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2dfa50: 0x712c0
    ctx->pc = 0x2dfa50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 11));
    // 0x2dfa54: 0x62001b
    ctx->pc = 0x2dfa54u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x2dfa58: 0x1810
    ctx->pc = 0x2dfa58u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2dfa5c: 0x50400001
    ctx->pc = 0x2DFA5Cu;
    {
        const bool branch_taken_0x2dfa5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dfa5c) {
            ctx->pc = 0x2DFA60u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DFA64u;
            goto label_2dfa64;
        }
    }
    ctx->pc = 0x2DFA64u;
label_2dfa64:
    // 0x2dfa64: 0x641821
    ctx->pc = 0x2dfa64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dfa68: 0x8e05000c
    ctx->pc = 0x2dfa68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2dfa6c: 0x8e0a0010
    ctx->pc = 0x2dfa6cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dfa70: 0xaa1021
    ctx->pc = 0x2dfa70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2dfa74: 0x47001a
    ctx->pc = 0x2dfa74u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2dfa78: 0x1010
    ctx->pc = 0x2dfa78u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2dfa7c: 0x50e00001
    ctx->pc = 0x2DFA7Cu;
    {
        const bool branch_taken_0x2dfa7c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dfa7c) {
            ctx->pc = 0x2DFA80u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DFA84u;
            goto label_2dfa84;
        }
    }
    ctx->pc = 0x2DFA84u;
label_2dfa84:
    // 0x2dfa84: 0x212c0
    ctx->pc = 0x2dfa84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x2dfa88: 0x441021
    ctx->pc = 0x2dfa88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dfa8c: 0x24040003
    ctx->pc = 0x2dfa8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dfa90: 0x621826
    ctx->pc = 0x2dfa90u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dfa94: 0x80402d
    ctx->pc = 0x2dfa94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa98: 0x3400a
    ctx->pc = 0x2dfa98u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 0));
    // 0x2dfa9c: 0x8e020028
    ctx->pc = 0x2dfa9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2dfaa0: 0x469024
    ctx->pc = 0x2dfaa0u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2dfaa4: 0x81700
    ctx->pc = 0x2dfaa4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 28));
    // 0x2dfaa8: 0x2429025
    ctx->pc = 0x2dfaa8u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2dfaac: 0x36520100
    ctx->pc = 0x2dfaacu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 256));
    // 0x2dfab0: 0x1271021
    ctx->pc = 0x2dfab0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2dfab4: 0x451023
    ctx->pc = 0x2dfab4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2dfab8: 0x47001a
    ctx->pc = 0x2dfab8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2dfabc: 0x1010
    ctx->pc = 0x2dfabcu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2dfac0: 0x50e00001
    ctx->pc = 0x2DFAC0u;
    {
        const bool branch_taken_0x2dfac0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dfac0) {
            ctx->pc = 0x2DFAC4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DFAC8u;
            goto label_2dfac8;
        }
    }
    ctx->pc = 0x2DFAC8u;
label_2dfac8:
    // 0x2dfac8: 0x4400006
    ctx->pc = 0x2DFAC8u;
    {
        const bool branch_taken_0x2dfac8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2DFACCu;
        SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x2dfac8) {
            ctx->pc = 0x2DFAE4u;
            goto label_2dfae4;
        }
    }
    ctx->pc = 0x2DFAD0u;
    // 0x2dfad0: 0x50e00001
    ctx->pc = 0x2DFAD0u;
    {
        const bool branch_taken_0x2dfad0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dfad0) {
            ctx->pc = 0x2DFAD4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DFAD8u;
            goto label_2dfad8;
        }
    }
    ctx->pc = 0x2DFAD8u;
label_2dfad8:
    // 0x2dfad8: 0x4a102a
    ctx->pc = 0x2dfad8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 10)));
    // 0x2dfadc: 0x54400006
    ctx->pc = 0x2DFADCu;
    {
        const bool branch_taken_0x2dfadc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dfadc) {
            ctx->pc = 0x2DFAE0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2DFAF8u;
            goto label_2dfaf8;
        }
    }
    ctx->pc = 0x2DFAE4u;
label_2dfae4:
    // 0x2dfae4: 0xae09000c
    ctx->pc = 0x2dfae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
label_2dfae8:
    // 0x2dfae8: 0x8e020010
    ctx->pc = 0x2dfae8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dfaec: 0x24420001
    ctx->pc = 0x2dfaecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dfaf0: 0xae020010
    ctx->pc = 0x2dfaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2dfaf4:
    // 0x2dfaf4: 0x8e03002c
    ctx->pc = 0x2dfaf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2dfaf8:
    // 0x2dfaf8: 0x5060000e
    ctx->pc = 0x2DFAF8u;
    {
        const bool branch_taken_0x2dfaf8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dfaf8) {
            ctx->pc = 0x2DFAFCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2DFB34u;
            goto label_2dfb34;
        }
    }
    ctx->pc = 0x2DFB00u;
    // 0x2dfb00: 0x8e020030
    ctx->pc = 0x2dfb00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2dfb04: 0x1040000a
    ctx->pc = 0x2DFB04u;
    {
        const bool branch_taken_0x2dfb04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DFB08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2dfb04) {
            ctx->pc = 0x2DFB30u;
            goto label_2dfb30;
        }
    }
    ctx->pc = 0x2DFB0Cu;
    // 0x2dfb0c: 0x3442b010
    ctx->pc = 0x2dfb0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45072));
    // 0x2dfb10: 0xac430000
    ctx->pc = 0x2dfb10u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x2dfb14: 0x3c031000
    ctx->pc = 0x2dfb14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2dfb18: 0x3463b020
    ctx->pc = 0x2dfb18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45088));
    // 0x2dfb1c: 0x8e020030
    ctx->pc = 0x2dfb1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2dfb20: 0xac620000
    ctx->pc = 0x2dfb20u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2dfb24: 0x8e040034
    ctx->pc = 0x2dfb24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2dfb28: 0xc0b7c64
    ctx->pc = 0x2DFB28u;
    SET_GPR_U32(ctx, 31, 0x2DFB30u);
    ctx->pc = 0x2DFB2Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 256));
    ctx->pc = 0x2DF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR_0x2df190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB30u; }
    }
    if (ctx->pc != 0x2DFB30u) { return; }
    ctx->pc = 0x2DFB30u;
label_2dfb30:
    // 0x2dfb30: 0x8e020010
    ctx->pc = 0x2dfb30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2dfb34:
    // 0x2dfb34: 0x10400015
    ctx->pc = 0x2DFB34u;
    {
        const bool branch_taken_0x2dfb34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DFB38u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
        if (branch_taken_0x2dfb34) {
            ctx->pc = 0x2DFB8Cu;
            goto label_2dfb8c;
        }
    }
    ctx->pc = 0x2DFB3Cu;
    // 0x2dfb3c: 0x34632010
    ctx->pc = 0x2dfb3cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
label_2dfb40:
    // 0x2dfb40: 0x8c620000
    ctx->pc = 0x2dfb40u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2dfb44: 0x0
    ctx->pc = 0x2dfb44u;
    // NOP
    // 0x2dfb48: 0x0
    ctx->pc = 0x2dfb48u;
    // NOP
    // 0x2dfb4c: 0x0
    ctx->pc = 0x2dfb4cu;
    // NOP
    // 0x2dfb50: 0x0
    ctx->pc = 0x2dfb50u;
    // NOP
    // 0x2dfb54: 0x440fffa
    ctx->pc = 0x2DFB54u;
    {
        const bool branch_taken_0x2dfb54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2dfb54) {
            ctx->pc = 0x2DFB40u;
            goto label_2dfb40;
        }
    }
    ctx->pc = 0x2DFB5Cu;
    // 0x2dfb5c: 0x3c021000
    ctx->pc = 0x2dfb5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2dfb60: 0x34422000
    ctx->pc = 0x2dfb60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x2dfb64: 0xac560000
    ctx->pc = 0x2dfb64u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22)); // MMIO: 0x10000000
    // 0x2dfb68: 0x3c031000
    ctx->pc = 0x2dfb68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2dfb6c: 0x34632010
    ctx->pc = 0x2dfb6cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
label_2dfb70:
    // 0x2dfb70: 0x8c620000
    ctx->pc = 0x2dfb70u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2dfb74: 0x0
    ctx->pc = 0x2dfb74u;
    // NOP
    // 0x2dfb78: 0x0
    ctx->pc = 0x2dfb78u;
    // NOP
    // 0x2dfb7c: 0x0
    ctx->pc = 0x2dfb7cu;
    // NOP
    // 0x2dfb80: 0x0
    ctx->pc = 0x2dfb80u;
    // NOP
    // 0x2dfb84: 0x440fffa
    ctx->pc = 0x2DFB84u;
    {
        const bool branch_taken_0x2dfb84 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2dfb84) {
            ctx->pc = 0x2DFB70u;
            goto label_2dfb70;
        }
    }
    ctx->pc = 0x2DFB8Cu;
label_2dfb8c:
    // 0x2dfb8c: 0x3c021000
    ctx->pc = 0x2dfb8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2dfb90: 0x3442b410
    ctx->pc = 0x2dfb90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x2dfb94: 0xac540000
    ctx->pc = 0x2dfb94u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x2dfb98: 0x3c021000
    ctx->pc = 0x2dfb98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2dfb9c: 0x3442b430
    ctx->pc = 0x2dfb9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46128));
    // 0x2dfba0: 0xac550000
    ctx->pc = 0x2dfba0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21)); // MMIO: 0x10000000
    // 0x2dfba4: 0x3c021000
    ctx->pc = 0x2dfba4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2dfba8: 0x3442b420
    ctx->pc = 0x2dfba8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x2dfbac: 0xac530000
    ctx->pc = 0x2dfbacu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19)); // MMIO: 0x10000000
    // 0x2dfbb0: 0x8e020010
    ctx->pc = 0x2dfbb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dfbb4: 0x10400004
    ctx->pc = 0x2DFBB4u;
    {
        const bool branch_taken_0x2dfbb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DFBB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2dfbb4) {
            ctx->pc = 0x2DFBC8u;
            goto label_2dfbc8;
        }
    }
    ctx->pc = 0x2DFBBCu;
    // 0x2dfbbc: 0xc0b7c80
    ctx->pc = 0x2DFBBCu;
    SET_GPR_U32(ctx, 31, 0x2DFBC4u);
    ctx->pc = 0x2DFBC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF200u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x2df200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBC4u; }
    }
    if (ctx->pc != 0x2DFBC4u) { return; }
    ctx->pc = 0x2DFBC4u;
    // 0x2dfbc4: 0x3c021000
    ctx->pc = 0x2dfbc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2dfbc8:
    // 0x2dfbc8: 0x34422010
    ctx->pc = 0x2dfbc8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2dfbcc: 0x8e03003c
    ctx->pc = 0x2dfbccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2dfbd0: 0xac430000
    ctx->pc = 0x2dfbd0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x2dfbd4: 0x24020001
    ctx->pc = 0x2dfbd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfbd8: 0xae020044
    ctx->pc = 0x2dfbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x2dfbdc: 0xc0c0d80
    ctx->pc = 0x2DFBDCu;
    SET_GPR_U32(ctx, 31, 0x2DFBE4u);
    ctx->pc = 0x2DFBE0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBE4u; }
    }
    if (ctx->pc != 0x2DFBE4u) { return; }
    ctx->pc = 0x2DFBE4u;
    // 0x2dfbe4: 0x24020001
    ctx->pc = 0x2dfbe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfbe8: 0xdfbf0070
    ctx->pc = 0x2dfbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dfbec: 0xdfb60060
    ctx->pc = 0x2dfbecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dfbf0: 0xdfb50050
    ctx->pc = 0x2dfbf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dfbf4: 0xdfb40040
    ctx->pc = 0x2dfbf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfbf8: 0xdfb30030
    ctx->pc = 0x2dfbf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dfbfc: 0xdfb20020
    ctx->pc = 0x2dfbfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfc00: 0xdfb10010
    ctx->pc = 0x2dfc00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfc04: 0xdfb00000
    ctx->pc = 0x2dfc04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfc08: 0x3e00008
    ctx->pc = 0x2DFC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFC0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF998u: goto label_2df998;
            case 0x2DF9CCu: goto label_2df9cc;
            case 0x2DF9DCu: goto label_2df9dc;
            case 0x2DF9ECu: goto label_2df9ec;
            case 0x2DF9FCu: goto label_2df9fc;
            case 0x2DFA64u: goto label_2dfa64;
            case 0x2DFA84u: goto label_2dfa84;
            case 0x2DFAC8u: goto label_2dfac8;
            case 0x2DFAD8u: goto label_2dfad8;
            case 0x2DFAE4u: goto label_2dfae4;
            case 0x2DFAE8u: goto label_2dfae8;
            case 0x2DFAF4u: goto label_2dfaf4;
            case 0x2DFAF8u: goto label_2dfaf8;
            case 0x2DFB30u: goto label_2dfb30;
            case 0x2DFB34u: goto label_2dfb34;
            case 0x2DFB40u: goto label_2dfb40;
            case 0x2DFB70u: goto label_2dfb70;
            case 0x2DFB8Cu: goto label_2dfb8c;
            case 0x2DFBC8u: goto label_2dfbc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DFC10u;
}
