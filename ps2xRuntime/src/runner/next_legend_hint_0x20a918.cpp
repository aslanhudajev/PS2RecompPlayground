#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: next_legend_hint
// Address: 0x20a918 - 0x20ab08
void next_legend_hint_0x20a918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20a918u;

    // 0x20a918: 0x27bdff60
    ctx->pc = 0x20a918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20a91c: 0xffbf0090
    ctx->pc = 0x20a91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x20a920: 0xffbe0080
    ctx->pc = 0x20a920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x20a924: 0xffb70070
    ctx->pc = 0x20a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x20a928: 0xffb60060
    ctx->pc = 0x20a928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x20a92c: 0xffb50050
    ctx->pc = 0x20a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20a930: 0xffb40040
    ctx->pc = 0x20a930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20a934: 0xffb30030
    ctx->pc = 0x20a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20a938: 0xffb20020
    ctx->pc = 0x20a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20a93c: 0xffb10010
    ctx->pc = 0x20a93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20a940: 0xffb00000
    ctx->pc = 0x20a940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a944: 0xa82d
    ctx->pc = 0x20a944u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a948: 0x1480000b
    ctx->pc = 0x20A948u;
    {
        const bool branch_taken_0x20a948 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A94Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x20a948) {
            ctx->pc = 0x20A978u;
            goto label_20a978;
        }
    }
    ctx->pc = 0x20A950u;
    // 0x20a950: 0x3c020032
    ctx->pc = 0x20a950u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a954: 0xac40eff8
    ctx->pc = 0x20a954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963192), GPR_U32(ctx, 0));
    // 0x20a958: 0x3c020032
    ctx->pc = 0x20a958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a95c: 0x1000005e
    ctx->pc = 0x20A95Cu;
    {
        const bool branch_taken_0x20a95c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A960u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963200), GPR_U32(ctx, 0));
        if (branch_taken_0x20a95c) {
            ctx->pc = 0x20AAD8u;
            goto label_20aad8;
        }
    }
    ctx->pc = 0x20A964u;
label_20a964:
    // 0x20a964: 0x24030001
    ctx->pc = 0x20a964u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a968: 0xac83f000
    ctx->pc = 0x20a968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963200), GPR_U32(ctx, 3));
    // 0x20a96c: 0x3c020032
    ctx->pc = 0x20a96cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a970: 0x10000032
    ctx->pc = 0x20A970u;
    {
        const bool branch_taken_0x20a970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A974u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963192), GPR_U32(ctx, 3));
        if (branch_taken_0x20a970) {
            ctx->pc = 0x20AA3Cu;
            goto label_20aa3c;
        }
    }
    ctx->pc = 0x20A978u;
label_20a978:
    // 0x20a978: 0x3c020032
    ctx->pc = 0x20a978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20a97c: 0x8c42eff8
    ctx->pc = 0x20a97cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963192)));
    // 0x20a980: 0x24430001
    ctx->pc = 0x20a980u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a984: 0x3c160032
    ctx->pc = 0x20a984u;
    SET_GPR_U32(ctx, 22, ((uint32_t)50 << 16));
    // 0x20a988: 0x24170001
    ctx->pc = 0x20a988u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a98c: 0x3c1e0032
    ctx->pc = 0x20a98cu;
    SET_GPR_U32(ctx, 30, ((uint32_t)50 << 16));
label_20a990:
    // 0x20a990: 0x72102a
    ctx->pc = 0x20a990u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 18)));
    // 0x20a994: 0x14400008
    ctx->pc = 0x20A994u;
    {
        const bool branch_taken_0x20a994 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A998u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20a994) {
            ctx->pc = 0x20A9B8u;
            goto label_20a9b8;
        }
    }
    ctx->pc = 0x20A99Cu;
    // 0x20a99c: 0x72001a
    ctx->pc = 0x20a99cu;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20a9a0: 0x1010
    ctx->pc = 0x20a9a0u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x20a9a4: 0x52400001
    ctx->pc = 0x20A9A4u;
    {
        const bool branch_taken_0x20a9a4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a9a4) {
            ctx->pc = 0x20A9A8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20A9ACu;
            goto label_20a9ac;
        }
    }
    ctx->pc = 0x20A9ACu;
label_20a9ac:
    // 0x20a9ac: 0x40182d
    ctx->pc = 0x20a9acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9b0: 0xaed7f000
    ctx->pc = 0x20a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294963200), GPR_U32(ctx, 23));
    // 0x20a9b4: 0x2e0802d
    ctx->pc = 0x20a9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20a9b8:
    // 0x20a9b8: 0x63800b
    ctx->pc = 0x20a9b8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x20a9bc: 0x3c020034
    ctx->pc = 0x20a9bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x20a9c0: 0x2454fb38
    ctx->pc = 0x20a9c0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294966072));
    // 0x20a9c4: 0x10000003
    ctx->pc = 0x20A9C4u;
    {
        const bool branch_taken_0x20a9c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A9C8u;
        SET_GPR_U32(ctx, 19, ((uint32_t)50 << 16));
        if (branch_taken_0x20a9c4) {
            ctx->pc = 0x20A9D4u;
            goto label_20a9d4;
        }
    }
    ctx->pc = 0x20A9CCu;
    // 0x20a9cc: 0x0
    ctx->pc = 0x20a9ccu;
    // NOP
label_20a9d0:
    // 0x20a9d0: 0x26100001
    ctx->pc = 0x20a9d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_20a9d4:
    // 0x20a9d4: 0x212102a
    ctx->pc = 0x20a9d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x20a9d8: 0x1040000d
    ctx->pc = 0x20A9D8u;
    {
        const bool branch_taken_0x20a9d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A9DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x20a9d8) {
            ctx->pc = 0x20AA10u;
            goto label_20aa10;
        }
    }
    ctx->pc = 0x20A9E0u;
    // 0x20a9e0: 0x541021
    ctx->pc = 0x20a9e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x20a9e4: 0x8c510000
    ctx->pc = 0x20a9e4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a9e8: 0xc09dd74
    ctx->pc = 0x20A9E8u;
    SET_GPR_U32(ctx, 31, 0x20A9F0u);
    ctx->pc = 0x20A9ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2775D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldOpen_0x2775d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A9F0u; }
    }
    if (ctx->pc != 0x20A9F0u) { return; }
    ctx->pc = 0x20A9F0u;
    // 0x20a9f0: 0x1040fff7
    ctx->pc = 0x20A9F0u;
    {
        const bool branch_taken_0x20a9f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A9F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294963200)));
        if (branch_taken_0x20a9f0) {
            ctx->pc = 0x20A9D0u;
            goto label_20a9d0;
        }
    }
    ctx->pc = 0x20A9F8u;
    // 0x20a9f8: 0x14400005
    ctx->pc = 0x20A9F8u;
    {
        const bool branch_taken_0x20a9f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A9FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20a9f8) {
            ctx->pc = 0x20AA10u;
            goto label_20aa10;
        }
    }
    ctx->pc = 0x20AA00u;
    // 0x20aa00: 0xc09dad6
    ctx->pc = 0x20AA00u;
    SET_GPR_U32(ctx, 31, 0x20AA08u);
    ctx->pc = 0x20AA04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x276B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasLegendItem_0x276b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AA08u; }
    }
    if (ctx->pc != 0x20AA08u) { return; }
    ctx->pc = 0x20AA08u;
    // 0x20aa08: 0x5440fff2
    ctx->pc = 0x20AA08u;
    {
        const bool branch_taken_0x20aa08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20aa08) {
            ctx->pc = 0x20AA0Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x20A9D4u;
            goto label_20a9d4;
        }
    }
    ctx->pc = 0x20AA10u;
label_20aa10:
    // 0x20aa10: 0x5612000a
    ctx->pc = 0x20AA10u;
    {
        const bool branch_taken_0x20aa10 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 18));
        if (branch_taken_0x20aa10) {
            ctx->pc = 0x20AA14u;
            WRITE32(ADD32(GPR_U32(ctx, 30), 4294963192), GPR_U32(ctx, 16));
            ctx->pc = 0x20AA3Cu;
            goto label_20aa3c;
        }
    }
    ctx->pc = 0x20AA18u;
    // 0x20aa18: 0x3c040032
    ctx->pc = 0x20aa18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20aa1c: 0x8c82f000
    ctx->pc = 0x20aa1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294963200)));
    // 0x20aa20: 0x28420002
    ctx->pc = 0x20aa20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x20aa24: 0x1040ffcf
    ctx->pc = 0x20AA24u;
    {
        const bool branch_taken_0x20aa24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AA28u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294963200)));
        if (branch_taken_0x20aa24) {
            ctx->pc = 0x20A964u;
            goto label_20a964;
        }
    }
    ctx->pc = 0x20AA2Cu;
    // 0x20aa2c: 0x24420001
    ctx->pc = 0x20aa2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20aa30: 0xaec2f000
    ctx->pc = 0x20aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294963200), GPR_U32(ctx, 2));
    // 0x20aa34: 0x1000ffd6
    ctx->pc = 0x20AA34u;
    {
        const bool branch_taken_0x20aa34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AA38u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20aa34) {
            ctx->pc = 0x20A990u;
            goto label_20a990;
        }
    }
    ctx->pc = 0x20AA3Cu;
label_20aa3c:
    // 0x20aa3c: 0x802d
    ctx->pc = 0x20aa3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa40: 0x24062b00
    ctx->pc = 0x20aa40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x20aa44: 0x3c020032
    ctx->pc = 0x20aa44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20aa48: 0x24491bc0
    ctx->pc = 0x20aa48u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x20aa4c: 0x3c030034
    ctx->pc = 0x20aa4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x20aa50: 0x2463fb38
    ctx->pc = 0x20aa50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966072));
    // 0x20aa54: 0x3c020032
    ctx->pc = 0x20aa54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20aa58: 0x8c42eff8
    ctx->pc = 0x20aa58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963192)));
    // 0x20aa5c: 0x21080
    ctx->pc = 0x20aa5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20aa60: 0x431021
    ctx->pc = 0x20aa60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20aa64: 0x8c510000
    ctx->pc = 0x20aa64u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20aa68: 0x240300b4
    ctx->pc = 0x20aa68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 180));
    // 0x20aa6c: 0x24050001
    ctx->pc = 0x20aa6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aa70: 0x24040002
    ctx->pc = 0x20aa70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20aa74: 0x2061018
    ctx->pc = 0x20aa74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20aa78:
    // 0x20aa78: 0x16a00009
    ctx->pc = 0x20AA78u;
    {
        const bool branch_taken_0x20aa78 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AA7Cu;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        if (branch_taken_0x20aa78) {
            ctx->pc = 0x20AAA0u;
            goto label_20aaa0;
        }
    }
    ctx->pc = 0x20AA80u;
    // 0x20aa80: 0x8d02000c
    ctx->pc = 0x20aa80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x20aa84: 0x433818
    ctx->pc = 0x20aa84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20aa88: 0xe81021
    ctx->pc = 0x20aa88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20aa8c: 0x94420cfc
    ctx->pc = 0x20aa8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3324)));
    // 0x20aa90: 0x2221007
    ctx->pc = 0x20aa90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x20aa94: 0x30420001
    ctx->pc = 0x20aa94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20aa98: 0xa0a82d
    ctx->pc = 0x20aa98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa9c: 0x2a80a
    ctx->pc = 0x20aa9cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 0));
label_20aaa0:
    // 0x20aaa0: 0x8d02000c
    ctx->pc = 0x20aaa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x20aaa4: 0x433818
    ctx->pc = 0x20aaa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20aaa8: 0xe81021
    ctx->pc = 0x20aaa8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20aaac: 0x94420cfe
    ctx->pc = 0x20aaacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3326)));
    // 0x20aab0: 0x2221007
    ctx->pc = 0x20aab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x20aab4: 0x30420001
    ctx->pc = 0x20aab4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20aab8: 0x82a80b
    ctx->pc = 0x20aab8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 4));
    // 0x20aabc: 0x26100001
    ctx->pc = 0x20aabcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x20aac0: 0x2a020004
    ctx->pc = 0x20aac0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x20aac4: 0x1440ffec
    ctx->pc = 0x20AAC4u;
    {
        const bool branch_taken_0x20aac4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AAC8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x20aac4) {
            ctx->pc = 0x20AA78u;
            goto label_20aa78;
        }
    }
    ctx->pc = 0x20AACCu;
    // 0x20aacc: 0x3c030032
    ctx->pc = 0x20aaccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20aad0: 0x26a20001
    ctx->pc = 0x20aad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 1));
    // 0x20aad4: 0xac62effc
    ctx->pc = 0x20aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963196), GPR_U32(ctx, 2));
label_20aad8:
    // 0x20aad8: 0xdfbf0090
    ctx->pc = 0x20aad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20aadc: 0xdfbe0080
    ctx->pc = 0x20aadcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20aae0: 0xdfb70070
    ctx->pc = 0x20aae0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20aae4: 0xdfb60060
    ctx->pc = 0x20aae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20aae8: 0xdfb50050
    ctx->pc = 0x20aae8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20aaec: 0xdfb40040
    ctx->pc = 0x20aaecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20aaf0: 0xdfb30030
    ctx->pc = 0x20aaf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20aaf4: 0xdfb20020
    ctx->pc = 0x20aaf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20aaf8: 0xdfb10010
    ctx->pc = 0x20aaf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20aafc: 0xdfb00000
    ctx->pc = 0x20aafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ab00: 0x3e00008
    ctx->pc = 0x20AB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AB04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A964u: goto label_20a964;
            case 0x20A978u: goto label_20a978;
            case 0x20A990u: goto label_20a990;
            case 0x20A9ACu: goto label_20a9ac;
            case 0x20A9B8u: goto label_20a9b8;
            case 0x20A9D0u: goto label_20a9d0;
            case 0x20A9D4u: goto label_20a9d4;
            case 0x20AA10u: goto label_20aa10;
            case 0x20AA3Cu: goto label_20aa3c;
            case 0x20AA78u: goto label_20aa78;
            case 0x20AAA0u: goto label_20aaa0;
            case 0x20AAD8u: goto label_20aad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20AB08u;
}
