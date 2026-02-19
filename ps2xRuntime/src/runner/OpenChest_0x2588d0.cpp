#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: OpenChest
// Address: 0x2588d0 - 0x258c80
void OpenChest_0x2588d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2588d0u;

    // 0x2588d0: 0x27bdff60
    ctx->pc = 0x2588d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2588d4: 0xffbf0090
    ctx->pc = 0x2588d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2588d8: 0xffbe0080
    ctx->pc = 0x2588d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2588dc: 0xffb70070
    ctx->pc = 0x2588dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2588e0: 0xffb60060
    ctx->pc = 0x2588e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2588e4: 0xffb50050
    ctx->pc = 0x2588e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2588e8: 0xffb40040
    ctx->pc = 0x2588e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2588ec: 0xffb30030
    ctx->pc = 0x2588ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2588f0: 0xffb20020
    ctx->pc = 0x2588f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2588f4: 0xffb10010
    ctx->pc = 0x2588f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2588f8: 0xffb00000
    ctx->pc = 0x2588f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2588fc: 0x80902d
    ctx->pc = 0x2588fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258900: 0xa0982d
    ctx->pc = 0x258900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258904: 0x864400f0
    ctx->pc = 0x258904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x258908: 0x48000d1
    ctx->pc = 0x258908u;
    {
        const bool branch_taken_0x258908 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25890Cu;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x258908) {
            ctx->pc = 0x258C50u;
            goto label_258c50;
        }
    }
    ctx->pc = 0x258910u;
    // 0x258910: 0x3c030032
    ctx->pc = 0x258910u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x258914: 0x24020050
    ctx->pc = 0x258914u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x258918: 0x821018
    ctx->pc = 0x258918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25891c: 0x8c63fa60
    ctx->pc = 0x25891cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294965856)));
    // 0x258920: 0x438821
    ctx->pc = 0x258920u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258924: 0x8e230000
    ctx->pc = 0x258924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x258928: 0x2402ffff
    ctx->pc = 0x258928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25892c: 0x5462001d
    ctx->pc = 0x25892Cu;
    {
        const bool branch_taken_0x25892c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25892c) {
            ctx->pc = 0x258930u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x2589A4u;
            goto label_2589a4;
        }
    }
    ctx->pc = 0x258934u;
    // 0x258934: 0x3c1e0034
    ctx->pc = 0x258934u;
    SET_GPR_U32(ctx, 30, ((uint32_t)52 << 16));
    // 0x258938: 0x3c17f0f0
    ctx->pc = 0x258938u;
    SET_GPR_U32(ctx, 23, ((uint32_t)61680 << 16));
    // 0x25893c: 0x36f7f0f1
    ctx->pc = 0x25893cu;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), 61681));
    // 0x258940: 0x3c020032
    ctx->pc = 0x258940u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x258944: 0x2456f9f8
    ctx->pc = 0x258944u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x258948: 0x24150050
    ctx->pc = 0x258948u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 80));
    // 0x25894c: 0x2410ffff
    ctx->pc = 0x25894cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258950: 0x8fc4cd94
    ctx->pc = 0x258950u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4294954388)));
    // 0x258954: 0x0
    ctx->pc = 0x258954u;
    // NOP
label_258958:
    // 0x258958: 0x2442023
    ctx->pc = 0x258958u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x25895c: 0x972018
    ctx->pc = 0x25895cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x258960: 0x42103
    ctx->pc = 0x258960u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x258964: 0x8e250004
    ctx->pc = 0x258964u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258968: 0xc093e96
    ctx->pc = 0x258968u;
    SET_GPR_U32(ctx, 31, 0x258970u);
    ctx->pc = 0x25896Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24FA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandItemIdx_0x24fa58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258970u; }
    }
    if (ctx->pc != 0x258970u) { return; }
    ctx->pc = 0x258970u;
    // 0x258970: 0x21040
    ctx->pc = 0x258970u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x258974: 0x2221021
    ctx->pc = 0x258974u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x258978: 0x94420008
    ctx->pc = 0x258978u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25897c: 0xa64200f0
    ctx->pc = 0x25897cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 240), (uint16_t)GPR_U32(ctx, 2));
    // 0x258980: 0x21400
    ctx->pc = 0x258980u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x258984: 0x21403
    ctx->pc = 0x258984u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x258988: 0x551018
    ctx->pc = 0x258988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25898c: 0x8ec30068
    ctx->pc = 0x25898cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x258990: 0x438821
    ctx->pc = 0x258990u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258994: 0x8e220000
    ctx->pc = 0x258994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x258998: 0x1050ffef
    ctx->pc = 0x258998u;
    {
        const bool branch_taken_0x258998 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x25899Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4294954388)));
        if (branch_taken_0x258998) {
            ctx->pc = 0x258958u;
            goto label_258958;
        }
    }
    ctx->pc = 0x2589A0u;
    // 0x2589a0: 0x8e830004
    ctx->pc = 0x2589a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2589a4:
    // 0x2589a4: 0x24020030
    ctx->pc = 0x2589a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2589a8: 0x54620021
    ctx->pc = 0x2589A8u;
    {
        const bool branch_taken_0x2589a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2589a8) {
            ctx->pc = 0x2589ACu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x258A30u;
            goto label_258a30;
        }
    }
    ctx->pc = 0x2589B0u;
    // 0x2589b0: 0x8e230000
    ctx->pc = 0x2589b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2589b4: 0x24020001
    ctx->pc = 0x2589b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2589b8: 0x5462001d
    ctx->pc = 0x2589B8u;
    {
        const bool branch_taken_0x2589b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2589b8) {
            ctx->pc = 0x2589BCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x258A30u;
            goto label_258a30;
        }
    }
    ctx->pc = 0x2589C0u;
    // 0x2589c0: 0x8e220004
    ctx->pc = 0x2589c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2589c4: 0x5443001a
    ctx->pc = 0x2589C4u;
    {
        const bool branch_taken_0x2589c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2589c4) {
            ctx->pc = 0x2589C8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x258A30u;
            goto label_258a30;
        }
    }
    ctx->pc = 0x2589CCu;
    // 0x2589cc: 0x3c020034
    ctx->pc = 0x2589ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2589d0: 0x8c42cde0
    ctx->pc = 0x2589d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954464)));
    // 0x2589d4: 0x10400012
    ctx->pc = 0x2589D4u;
    {
        const bool branch_taken_0x2589d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2589D8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2589d4) {
            ctx->pc = 0x258A20u;
            goto label_258a20;
        }
    }
    ctx->pc = 0x2589DCu;
    // 0x2589dc: 0x8e420080
    ctx->pc = 0x2589dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2589e0: 0x50400004
    ctx->pc = 0x2589E0u;
    {
        const bool branch_taken_0x2589e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2589e0) {
            ctx->pc = 0x2589E4u;
            SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 2048));
            ctx->pc = 0x2589F4u;
            goto label_2589f4;
        }
    }
    ctx->pc = 0x2589E8u;
    // 0x2589e8: 0xc08496c
    ctx->pc = 0x2589E8u;
    SET_GPR_U32(ctx, 31, 0x2589F0u);
    ctx->pc = 0x2589ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 128));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589F0u; }
    }
    if (ctx->pc != 0x2589F0u) { return; }
    ctx->pc = 0x2589F0u;
    // 0x2589f0: 0x36100800
    ctx->pc = 0x2589f0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 2048));
label_2589f4:
    // 0x2589f4: 0x8e870038
    ctx->pc = 0x2589f4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x2589f8: 0x3c020034
    ctx->pc = 0x2589f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2589fc: 0x8c44cde0
    ctx->pc = 0x2589fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954464)));
    // 0x258a00: 0x26450080
    ctx->pc = 0x258a00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 128));
    // 0x258a04: 0x302d
    ctx->pc = 0x258a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a08: 0xc08476a
    ctx->pc = 0x258A08u;
    SET_GPR_U32(ctx, 31, 0x258A10u);
    ctx->pc = 0x258A0Cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A10u; }
    }
    if (ctx->pc != 0x258A10u) { return; }
    ctx->pc = 0x258A10u;
    // 0x258a10: 0xae420080
    ctx->pc = 0x258a10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x258a14: 0x8c440000
    ctx->pc = 0x258a14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258a18: 0xc0b3f94
    ctx->pc = 0x258A18u;
    SET_GPR_U32(ctx, 31, 0x258A20u);
    ctx->pc = 0x258A1Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A20u; }
    }
    if (ctx->pc != 0x258A20u) { return; }
    ctx->pc = 0x258A20u;
label_258a20:
    // 0x258a20: 0x3c020034
    ctx->pc = 0x258a20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x258a24: 0x8c42cdec
    ctx->pc = 0x258a24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954476)));
    // 0x258a28: 0x10000004
    ctx->pc = 0x258A28u;
    {
        const bool branch_taken_0x258a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258A2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x258a28) {
            ctx->pc = 0x258A3Cu;
            goto label_258a3c;
        }
    }
    ctx->pc = 0x258A30u;
label_258a30:
    // 0x258a30: 0x2402002f
    ctx->pc = 0x258a30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x258a34: 0x54620004
    ctx->pc = 0x258A34u;
    {
        const bool branch_taken_0x258a34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x258a34) {
            ctx->pc = 0x258A38u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x258A48u;
            goto label_258a48;
        }
    }
    ctx->pc = 0x258A3Cu;
label_258a3c:
    // 0x258a3c: 0x86220040
    ctx->pc = 0x258a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x258a40: 0x10000083
    ctx->pc = 0x258A40u;
    {
        const bool branch_taken_0x258a40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258A44u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 2));
        if (branch_taken_0x258a40) {
            ctx->pc = 0x258C50u;
            goto label_258c50;
        }
    }
    ctx->pc = 0x258A48u;
label_258a48:
    // 0x258a48: 0x2402002c
    ctx->pc = 0x258a48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x258a4c: 0x54620007
    ctx->pc = 0x258A4Cu;
    {
        const bool branch_taken_0x258a4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x258a4c) {
            ctx->pc = 0x258A50u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x258A6Cu;
            goto label_258a6c;
        }
    }
    ctx->pc = 0x258A54u;
    // 0x258a54: 0x964200d8
    ctx->pc = 0x258a54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x258a58: 0x34420040
    ctx->pc = 0x258a58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
    // 0x258a5c: 0xc097f92
    ctx->pc = 0x258A5Cu;
    SET_GPR_U32(ctx, 31, 0x258A64u);
    ctx->pc = 0x258A60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x25FE48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTimeBomb_0x25fe48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A64u; }
    }
    if (ctx->pc != 0x258A64u) { return; }
    ctx->pc = 0x258A64u;
    // 0x258a64: 0x1000007b
    ctx->pc = 0x258A64u;
    {
        const bool branch_taken_0x258a64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258A68u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x258a64) {
            ctx->pc = 0x258C54u;
            goto label_258c54;
        }
    }
    ctx->pc = 0x258A6Cu;
label_258a6c:
    // 0x258a6c: 0x24020001
    ctx->pc = 0x258a6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x258a70: 0x14620035
    ctx->pc = 0x258A70u;
    {
        const bool branch_taken_0x258a70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x258A74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x258a70) {
            ctx->pc = 0x258B48u;
            goto label_258b48;
        }
    }
    ctx->pc = 0x258A78u;
    // 0x258a78: 0x8e230004
    ctx->pc = 0x258a78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258a7c: 0x24020002
    ctx->pc = 0x258a7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x258a80: 0x54620010
    ctx->pc = 0x258A80u;
    {
        const bool branch_taken_0x258a80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x258a80) {
            ctx->pc = 0x258A84u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x258AC4u;
            goto label_258ac4;
        }
    }
    ctx->pc = 0x258A88u;
    // 0x258a88: 0x86420100
    ctx->pc = 0x258a88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x258a8c: 0x28420002
    ctx->pc = 0x258a8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x258a90: 0x5440000c
    ctx->pc = 0x258A90u;
    {
        const bool branch_taken_0x258a90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x258a90) {
            ctx->pc = 0x258A94u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x258AC4u;
            goto label_258ac4;
        }
    }
    ctx->pc = 0x258A98u;
    // 0x258a98: 0x24040001
    ctx->pc = 0x258a98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x258a9c: 0x24050002
    ctx->pc = 0x258a9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x258aa0: 0x3c06003b
    ctx->pc = 0x258aa0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x258aa4: 0xc094e02
    ctx->pc = 0x258AA4u;
    SET_GPR_U32(ctx, 31, 0x258AACu);
    ctx->pc = 0x258AA8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294935752));
    ctx->pc = 0x253808u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindInfoIndex_0x253808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258AACu; }
    }
    if (ctx->pc != 0x258AACu) { return; }
    ctx->pc = 0x258AACu;
    // 0x258aac: 0x3c040032
    ctx->pc = 0x258aacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x258ab0: 0x24030050
    ctx->pc = 0x258ab0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
    // 0x258ab4: 0x431018
    ctx->pc = 0x258ab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x258ab8: 0x8c83fa60
    ctx->pc = 0x258ab8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294965856)));
    // 0x258abc: 0x438821
    ctx->pc = 0x258abcu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258ac0: 0x8e230000
    ctx->pc = 0x258ac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258ac4:
    // 0x258ac4: 0x24020001
    ctx->pc = 0x258ac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x258ac8: 0x1462001f
    ctx->pc = 0x258AC8u;
    {
        const bool branch_taken_0x258ac8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x258ACCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x258ac8) {
            ctx->pc = 0x258B48u;
            goto label_258b48;
        }
    }
    ctx->pc = 0x258AD0u;
    // 0x258ad0: 0x8e4200f8
    ctx->pc = 0x258ad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x258ad4: 0x1040001c
    ctx->pc = 0x258AD4u;
    {
        const bool branch_taken_0x258ad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x258ad4) {
            ctx->pc = 0x258B48u;
            goto label_258b48;
        }
    }
    ctx->pc = 0x258ADCu;
    // 0x258adc: 0xc094e34
    ctx->pc = 0x258ADCu;
    SET_GPR_U32(ctx, 31, 0x258AE4u);
    ctx->pc = 0x258AE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2538D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItemSub_0x2538d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258AE4u; }
    }
    if (ctx->pc != 0x258AE4u) { return; }
    ctx->pc = 0x258AE4u;
    // 0x258ae4: 0x40802d
    ctx->pc = 0x258ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258ae8: 0x8e040070
    ctx->pc = 0x258ae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x258aec: 0xc0b3f94
    ctx->pc = 0x258AECu;
    SET_GPR_U32(ctx, 31, 0x258AF4u);
    ctx->pc = 0x258AF0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 248)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258AF4u; }
    }
    if (ctx->pc != 0x258AF4u) { return; }
    ctx->pc = 0x258AF4u;
    // 0x258af4: 0xae5000fc
    ctx->pc = 0x258af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 16));
    // 0x258af8: 0x12600003
    ctx->pc = 0x258AF8u;
    {
        const bool branch_taken_0x258af8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x258AFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 18));
        if (branch_taken_0x258af8) {
            ctx->pc = 0x258B08u;
            goto label_258b08;
        }
    }
    ctx->pc = 0x258B00u;
    // 0x258b00: 0x10000002
    ctx->pc = 0x258B00u;
    {
        const bool branch_taken_0x258b00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258B04u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        if (branch_taken_0x258b00) {
            ctx->pc = 0x258B0Cu;
            goto label_258b0c;
        }
    }
    ctx->pc = 0x258B08u;
label_258b08:
    // 0x258b08: 0x2402ffff
    ctx->pc = 0x258b08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_258b0c:
    // 0x258b0c: 0xa20200df
    ctx->pc = 0x258b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 223), (uint8_t)GPR_U32(ctx, 2));
    // 0x258b10: 0x8e040070
    ctx->pc = 0x258b10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x258b14: 0x24050008
    ctx->pc = 0x258b14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x258b18: 0xc0b41b8
    ctx->pc = 0x258B18u;
    SET_GPR_U32(ctx, 31, 0x258B20u);
    ctx->pc = 0x258B1Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B20u; }
    }
    if (ctx->pc != 0x258B20u) { return; }
    ctx->pc = 0x258B20u;
    // 0x258b20: 0x8e020070
    ctx->pc = 0x258b20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x258b24: 0x3c013e4c
    ctx->pc = 0x258b24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x258b28: 0x3421cccd
    ctx->pc = 0x258b28u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x258b2c: 0x44810000
    ctx->pc = 0x258b2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x258b30: 0xe4400040
    ctx->pc = 0x258b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x258b34: 0x8e020070
    ctx->pc = 0x258b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x258b38: 0xe4400044
    ctx->pc = 0x258b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x258b3c: 0x8e020070
    ctx->pc = 0x258b3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x258b40: 0x10000013
    ctx->pc = 0x258B40u;
    {
        const bool branch_taken_0x258b40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258B44u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
        if (branch_taken_0x258b40) {
            ctx->pc = 0x258B90u;
            goto label_258b90;
        }
    }
    ctx->pc = 0x258B48u;
label_258b48:
    // 0x258b48: 0xc094e34
    ctx->pc = 0x258B48u;
    SET_GPR_U32(ctx, 31, 0x258B50u);
    ctx->pc = 0x258B4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x2538D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItemSub_0x2538d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B50u; }
    }
    if (ctx->pc != 0x258B50u) { return; }
    ctx->pc = 0x258B50u;
    // 0x258b50: 0x40802d
    ctx->pc = 0x258b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b54: 0x8e830004
    ctx->pc = 0x258b54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x258b58: 0x2402002b
    ctx->pc = 0x258b58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
    // 0x258b5c: 0x54620005
    ctx->pc = 0x258B5Cu;
    {
        const bool branch_taken_0x258b5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x258b5c) {
            ctx->pc = 0x258B60u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x258B74u;
            goto label_258b74;
        }
    }
    ctx->pc = 0x258B64u;
    // 0x258b64: 0x12600009
    ctx->pc = 0x258B64u;
    {
        const bool branch_taken_0x258b64 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x258B68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x258b64) {
            ctx->pc = 0x258B8Cu;
            goto label_258b8c;
        }
    }
    ctx->pc = 0x258B6Cu;
    // 0x258b6c: 0x10000007
    ctx->pc = 0x258B6Cu;
    {
        const bool branch_taken_0x258b6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258B70u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        if (branch_taken_0x258b6c) {
            ctx->pc = 0x258B8Cu;
            goto label_258b8c;
        }
    }
    ctx->pc = 0x258B74u;
label_258b74:
    // 0x258b74: 0x24020001
    ctx->pc = 0x258b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x258b78: 0x50620001
    ctx->pc = 0x258B78u;
    {
        const bool branch_taken_0x258b78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x258b78) {
            ctx->pc = 0x258B7Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 18));
            ctx->pc = 0x258B80u;
            goto label_258b80;
        }
    }
    ctx->pc = 0x258B80u;
label_258b80:
    // 0x258b80: 0x12600002
    ctx->pc = 0x258B80u;
    {
        const bool branch_taken_0x258b80 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x258B84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x258b80) {
            ctx->pc = 0x258B8Cu;
            goto label_258b8c;
        }
    }
    ctx->pc = 0x258B88u;
    // 0x258b88: 0x92620000
    ctx->pc = 0x258b88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_258b8c:
    // 0x258b8c: 0xa20200df
    ctx->pc = 0x258b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 223), (uint8_t)GPR_U32(ctx, 2));
label_258b90:
    // 0x258b90: 0x8e230000
    ctx->pc = 0x258b90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x258b94: 0x24020001
    ctx->pc = 0x258b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x258b98: 0x10620005
    ctx->pc = 0x258B98u;
    {
        const bool branch_taken_0x258b98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x258B9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x258b98) {
            ctx->pc = 0x258BB0u;
            goto label_258bb0;
        }
    }
    ctx->pc = 0x258BA0u;
    // 0x258ba0: 0x10620013
    ctx->pc = 0x258BA0u;
    {
        const bool branch_taken_0x258ba0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x258BA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x258ba0) {
            ctx->pc = 0x258BF0u;
            goto label_258bf0;
        }
    }
    ctx->pc = 0x258BA8u;
    // 0x258ba8: 0x1000002b
    ctx->pc = 0x258BA8u;
    {
        const bool branch_taken_0x258ba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258BACu;
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x258ba8) {
            ctx->pc = 0x258C58u;
            goto label_258c58;
        }
    }
    ctx->pc = 0x258BB0u;
label_258bb0:
    // 0x258bb0: 0x8e230004
    ctx->pc = 0x258bb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x258bb4: 0x24020002
    ctx->pc = 0x258bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x258bb8: 0x10620005
    ctx->pc = 0x258BB8u;
    {
        const bool branch_taken_0x258bb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x258BBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x258bb8) {
            ctx->pc = 0x258BD0u;
            goto label_258bd0;
        }
    }
    ctx->pc = 0x258BC0u;
    // 0x258bc0: 0x14620009
    ctx->pc = 0x258BC0u;
    {
        const bool branch_taken_0x258bc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x258BC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x258bc0) {
            ctx->pc = 0x258BE8u;
            goto label_258be8;
        }
    }
    ctx->pc = 0x258BC8u;
    // 0x258bc8: 0x10000005
    ctx->pc = 0x258BC8u;
    {
        const bool branch_taken_0x258bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258BCCu;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
        if (branch_taken_0x258bc8) {
            ctx->pc = 0x258BE0u;
            goto label_258be0;
        }
    }
    ctx->pc = 0x258BD0u;
label_258bd0:
    // 0x258bd0: 0x86420100
    ctx->pc = 0x258bd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x258bd4: 0x1c400003
    ctx->pc = 0x258BD4u;
    {
        const bool branch_taken_0x258bd4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x258BD8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        if (branch_taken_0x258bd4) {
            ctx->pc = 0x258BE4u;
            goto label_258be4;
        }
    }
    ctx->pc = 0x258BDCu;
    // 0x258bdc: 0x24020001
    ctx->pc = 0x258bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_258be0:
    // 0x258be0: 0xae0200f4
    ctx->pc = 0x258be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_258be4:
    // 0x258be4: 0x2402001e
    ctx->pc = 0x258be4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_258be8:
    // 0x258be8: 0x10000019
    ctx->pc = 0x258BE8u;
    {
        const bool branch_taken_0x258be8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258BECu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 256), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x258be8) {
            ctx->pc = 0x258C50u;
            goto label_258c50;
        }
    }
    ctx->pc = 0x258BF0u;
label_258bf0:
    // 0x258bf0: 0x8e0200f8
    ctx->pc = 0x258bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x258bf4: 0x34420001
    ctx->pc = 0x258bf4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x258bf8: 0xae0200f8
    ctx->pc = 0x258bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x258bfc: 0x860300f0
    ctx->pc = 0x258bfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x258c00: 0x2402001e
    ctx->pc = 0x258c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x258c04: 0x14620011
    ctx->pc = 0x258C04u;
    {
        const bool branch_taken_0x258c04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x258C08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x258c04) {
            ctx->pc = 0x258C4Cu;
            goto label_258c4c;
        }
    }
    ctx->pc = 0x258C0Cu;
    // 0x258c0c: 0x3c020033
    ctx->pc = 0x258c0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x258c10: 0x8c423c80
    ctx->pc = 0x258c10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15488)));
    // 0x258c14: 0x1040000c
    ctx->pc = 0x258C14u;
    {
        const bool branch_taken_0x258c14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x258C18u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x258c14) {
            ctx->pc = 0x258C48u;
            goto label_258c48;
        }
    }
    ctx->pc = 0x258C1Cu;
    // 0x258c1c: 0x8e020080
    ctx->pc = 0x258c1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x258c20: 0x8c440000
    ctx->pc = 0x258c20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258c24: 0xc0b41b8
    ctx->pc = 0x258C24u;
    SET_GPR_U32(ctx, 31, 0x258C2Cu);
    ctx->pc = 0x258C28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258C2Cu; }
    }
    if (ctx->pc != 0x258C2Cu) { return; }
    ctx->pc = 0x258C2Cu;
    // 0x258c2c: 0x86420100
    ctx->pc = 0x258c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x258c30: 0x10400005
    ctx->pc = 0x258C30u;
    {
        const bool branch_taken_0x258c30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x258C34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x258c30) {
            ctx->pc = 0x258C48u;
            goto label_258c48;
        }
    }
    ctx->pc = 0x258C38u;
    // 0x258c38: 0xa20200f2
    ctx->pc = 0x258c38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 242), (uint8_t)GPR_U32(ctx, 2));
    // 0x258c3c: 0x3c020033
    ctx->pc = 0x258c3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x258c40: 0x9042dc88
    ctx->pc = 0x258c40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958216)));
    // 0x258c44: 0xa20200f3
    ctx->pc = 0x258c44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 243), (uint8_t)GPR_U32(ctx, 2));
label_258c48:
    // 0x258c48: 0x2402ffff
    ctx->pc = 0x258c48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_258c4c:
    // 0x258c4c: 0xa6020102
    ctx->pc = 0x258c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
label_258c50:
    // 0x258c50: 0xdfbf0090
    ctx->pc = 0x258c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_258c54:
    // 0x258c54: 0xdfbe0080
    ctx->pc = 0x258c54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_258c58:
    // 0x258c58: 0xdfb70070
    ctx->pc = 0x258c58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x258c5c: 0xdfb60060
    ctx->pc = 0x258c5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x258c60: 0xdfb50050
    ctx->pc = 0x258c60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258c64: 0xdfb40040
    ctx->pc = 0x258c64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258c68: 0xdfb30030
    ctx->pc = 0x258c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258c6c: 0xdfb20020
    ctx->pc = 0x258c6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258c70: 0xdfb10010
    ctx->pc = 0x258c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258c74: 0xdfb00000
    ctx->pc = 0x258c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258c78: 0x3e00008
    ctx->pc = 0x258C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258C7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258958u: goto label_258958;
            case 0x2589A4u: goto label_2589a4;
            case 0x2589F4u: goto label_2589f4;
            case 0x258A20u: goto label_258a20;
            case 0x258A30u: goto label_258a30;
            case 0x258A3Cu: goto label_258a3c;
            case 0x258A48u: goto label_258a48;
            case 0x258A6Cu: goto label_258a6c;
            case 0x258AC4u: goto label_258ac4;
            case 0x258B08u: goto label_258b08;
            case 0x258B0Cu: goto label_258b0c;
            case 0x258B48u: goto label_258b48;
            case 0x258B74u: goto label_258b74;
            case 0x258B80u: goto label_258b80;
            case 0x258B8Cu: goto label_258b8c;
            case 0x258B90u: goto label_258b90;
            case 0x258BB0u: goto label_258bb0;
            case 0x258BD0u: goto label_258bd0;
            case 0x258BE0u: goto label_258be0;
            case 0x258BE4u: goto label_258be4;
            case 0x258BE8u: goto label_258be8;
            case 0x258BF0u: goto label_258bf0;
            case 0x258C48u: goto label_258c48;
            case 0x258C4Cu: goto label_258c4c;
            case 0x258C50u: goto label_258c50;
            case 0x258C54u: goto label_258c54;
            case 0x258C58u: goto label_258c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x258C80u;
}
