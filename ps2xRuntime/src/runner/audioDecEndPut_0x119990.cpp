#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecEndPut
// Address: 0x119990 - 0x119aac
void audioDecEndPut_0x119990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119990u;

    // 0x119990: 0x27bdffa0
    ctx->pc = 0x119990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x119994: 0xffb10030
    ctx->pc = 0x119994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x119998: 0xffb00020
    ctx->pc = 0x119998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11999c: 0xffbf0050
    ctx->pc = 0x11999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1199a0: 0x80802d
    ctx->pc = 0x1199a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199a4: 0xffb20040
    ctx->pc = 0x1199a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1199a8: 0x8e020000
    ctx->pc = 0x1199a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1199ac: 0x1440002b
    ctx->pc = 0x1199ACu;
    {
        const bool branch_taken_0x1199ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1199B0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1199ac) {
            ctx->pc = 0x119A5Cu;
            goto label_119a5c;
        }
    }
    ctx->pc = 0x1199B4u;
    // 0x1199b4: 0x8e04002c
    ctx->pc = 0x1199b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1199b8: 0x24020028
    ctx->pc = 0x1199b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
    // 0x1199bc: 0x441023
    ctx->pc = 0x1199bcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1199c0: 0x51182b
    ctx->pc = 0x1199c0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1199c4: 0x40902d
    ctx->pc = 0x1199c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199c8: 0x223900a
    ctx->pc = 0x1199c8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 17));
    // 0x1199cc: 0x922021
    ctx->pc = 0x1199ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1199d0: 0x2c820028
    ctx->pc = 0x1199d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 40));
    // 0x1199d4: 0x14400020
    ctx->pc = 0x1199D4u;
    {
        const bool branch_taken_0x1199d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1199D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        if (branch_taken_0x1199d4) {
            ctx->pc = 0x119A58u;
            goto label_119a58;
        }
    }
    ctx->pc = 0x1199DCu;
    // 0x1199dc: 0x24020001
    ctx->pc = 0x1199dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1199e0: 0x3c040017
    ctx->pc = 0x1199e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1199e4: 0xae020000
    ctx->pc = 0x1199e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1199e8: 0xc04ace4
    ctx->pc = 0x1199E8u;
    SET_GPR_U32(ctx, 31, 0x1199F0u);
    ctx->pc = 0x1199ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17600));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199F0u; }
    }
    if (ctx->pc != 0x1199F0u) { return; }
    ctx->pc = 0x1199F0u;
    // 0x1199f0: 0x8e0d0014
    ctx->pc = 0x1199f0u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1199f4: 0x3c040017
    ctx->pc = 0x1199f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1199f8: 0x8e0c0018
    ctx->pc = 0x1199f8u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1199fc: 0x248444f8
    ctx->pc = 0x1199fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17656));
    // 0x119a00: 0x8e02001c
    ctx->pc = 0x119a00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x119a04: 0x8e030020
    ctx->pc = 0x119a04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x119a08: 0x8e0a000c
    ctx->pc = 0x119a08u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x119a0c: 0x8e0b0010
    ctx->pc = 0x119a0cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x119a10: 0x82050004
    ctx->pc = 0x119a10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x119a14: 0x82060005
    ctx->pc = 0x119a14u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x119a18: 0x82070006
    ctx->pc = 0x119a18u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x119a1c: 0x82080007
    ctx->pc = 0x119a1cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x119a20: 0x8e090008
    ctx->pc = 0x119a20u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119a24: 0xafad0000
    ctx->pc = 0x119a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x119a28: 0xafac0008
    ctx->pc = 0x119a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x119a2c: 0xafa20010
    ctx->pc = 0x119a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x119a30: 0xc04ace4
    ctx->pc = 0x119A30u;
    SET_GPR_U32(ctx, 31, 0x119A38u);
    ctx->pc = 0x119A34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A38u; }
    }
    if (ctx->pc != 0x119A38u) { return; }
    ctx->pc = 0x119A38u;
    // 0x119a38: 0x3c040017
    ctx->pc = 0x119a38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x119a3c: 0x82050024
    ctx->pc = 0x119a3cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x119a40: 0x82060025
    ctx->pc = 0x119a40u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x119a44: 0x24844638
    ctx->pc = 0x119a44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17976));
    // 0x119a48: 0x82070026
    ctx->pc = 0x119a48u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x119a4c: 0x82080027
    ctx->pc = 0x119a4cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
    // 0x119a50: 0xc04ace4
    ctx->pc = 0x119A50u;
    SET_GPR_U32(ctx, 31, 0x119A58u);
    ctx->pc = 0x119A54u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A58u; }
    }
    if (ctx->pc != 0x119A58u) { return; }
    ctx->pc = 0x119A58u;
label_119a58:
    // 0x119a58: 0x2328823
    ctx->pc = 0x119a58u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_119a5c:
    // 0x119a5c: 0x8e020034
    ctx->pc = 0x119a5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x119a60: 0x8e03003c
    ctx->pc = 0x119a60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x119a64: 0x511021
    ctx->pc = 0x119a64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119a68: 0x43001a
    ctx->pc = 0x119a68u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x119a6c: 0x50600001
    ctx->pc = 0x119A6Cu;
    {
        const bool branch_taken_0x119a6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x119a6c) {
            ctx->pc = 0x119A70u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x119A74u;
            goto label_119a74;
        }
    }
    ctx->pc = 0x119A74u;
label_119a74:
    // 0x119a74: 0x8e020038
    ctx->pc = 0x119a74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x119a78: 0x8e030040
    ctx->pc = 0x119a78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x119a7c: 0x511021
    ctx->pc = 0x119a7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119a80: 0xdfbf0050
    ctx->pc = 0x119a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119a84: 0x711821
    ctx->pc = 0x119a84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x119a88: 0xae020038
    ctx->pc = 0x119a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x119a8c: 0xae030040
    ctx->pc = 0x119a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x119a90: 0xdfb20040
    ctx->pc = 0x119a90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119a94: 0xdfb10030
    ctx->pc = 0x119a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119a98: 0x2010
    ctx->pc = 0x119a98u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x119a9c: 0xae040034
    ctx->pc = 0x119a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x119aa0: 0xdfb00020
    ctx->pc = 0x119aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119aa4: 0x3e00008
    ctx->pc = 0x119AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119AA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119A58u: goto label_119a58;
            case 0x119A5Cu: goto label_119a5c;
            case 0x119A74u: goto label_119a74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119AACu;
}
