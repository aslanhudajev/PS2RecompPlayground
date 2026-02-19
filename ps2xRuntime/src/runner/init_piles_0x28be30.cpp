#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_piles
// Address: 0x28be30 - 0x28c150
void init_piles_0x28be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28be30u;

    // 0x28be30: 0x27bdffc0
    ctx->pc = 0x28be30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28be34: 0xffbf0030
    ctx->pc = 0x28be34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28be38: 0xffb20020
    ctx->pc = 0x28be38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28be3c: 0xffb10010
    ctx->pc = 0x28be3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28be40: 0xffb00000
    ctx->pc = 0x28be40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28be44: 0x80902d
    ctx->pc = 0x28be44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be48: 0x24102b00
    ctx->pc = 0x28be48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28be4c: 0x2508018
    ctx->pc = 0x28be4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28be50: 0x3c020032
    ctx->pc = 0x28be50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28be54: 0x24421bc0
    ctx->pc = 0x28be54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28be58: 0x2028021
    ctx->pc = 0x28be58u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28be5c: 0x3c020035
    ctx->pc = 0x28be5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28be60: 0x3c030035
    ctx->pc = 0x28be60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28be64: 0x8c44b454
    ctx->pc = 0x28be64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947924)));
    // 0x28be68: 0x8c62b450
    ctx->pc = 0x28be68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294947920)));
    // 0x28be6c: 0x828823
    ctx->pc = 0x28be6cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28be70: 0x3c020034
    ctx->pc = 0x28be70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28be74: 0x8c44e800
    ctx->pc = 0x28be74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x28be78: 0x42200
    ctx->pc = 0x28be78u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x28be7c: 0x3c020034
    ctx->pc = 0x28be7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28be80: 0x9042e804
    ctx->pc = 0x28be80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961156)));
    // 0x28be84: 0xc0986b4
    ctx->pc = 0x28BE84u;
    SET_GPR_U32(ctx, 31, 0x28BE8Cu);
    ctx->pc = 0x28BE88u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BE8Cu; }
    }
    if (ctx->pc != 0x28BE8Cu) { return; }
    ctx->pc = 0x28BE8Cu;
    // 0x28be8c: 0x8e06000c
    ctx->pc = 0x28be8cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28be90: 0x240200b4
    ctx->pc = 0x28be90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
    // 0x28be94: 0xc21818
    ctx->pc = 0x28be94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28be98: 0x701021
    ctx->pc = 0x28be98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28be9c: 0x8e031a20
    ctx->pc = 0x28be9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
    // 0x28bea0: 0x8c421da8
    ctx->pc = 0x28bea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7592)));
    // 0x28bea4: 0x627823
    ctx->pc = 0x28bea4u;
    SET_GPR_U32(ctx, 15, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28bea8: 0x2402001c
    ctx->pc = 0x28bea8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x28beac: 0xc21018
    ctx->pc = 0x28beacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28beb0: 0x2021821
    ctx->pc = 0x28beb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28beb4: 0x60202d
    ctx->pc = 0x28beb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28beb8: 0x8c650b2c
    ctx->pc = 0x28beb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 2860)));
    // 0x28bebc: 0x8c830b3c
    ctx->pc = 0x28bebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2876)));
    // 0x28bec0: 0xa36821
    ctx->pc = 0x28bec0u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28bec4: 0x80182d
    ctx->pc = 0x28bec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bec8: 0x60102d
    ctx->pc = 0x28bec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28becc: 0x8c631bb8
    ctx->pc = 0x28beccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 7096)));
    // 0x28bed0: 0x8c421bc8
    ctx->pc = 0x28bed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7112)));
    // 0x28bed4: 0x621821
    ctx->pc = 0x28bed4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28bed8: 0x1a36823
    ctx->pc = 0x28bed8u;
    SET_GPR_U32(ctx, 13, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x28bedc: 0x24020018
    ctx->pc = 0x28bedcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28bee0: 0xc21818
    ctx->pc = 0x28bee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28bee4: 0x703021
    ctx->pc = 0x28bee4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28bee8: 0x8e031a1c
    ctx->pc = 0x28bee8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6684)));
    // 0x28beec: 0x8cc21a38
    ctx->pc = 0x28beecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 6712)));
    // 0x28bef0: 0x627023
    ctx->pc = 0x28bef0u;
    SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28bef4: 0x1f14818
    ctx->pc = 0x28bef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28bef8: 0x3c020034
    ctx->pc = 0x28bef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28befc: 0x8c42e7c8
    ctx->pc = 0x28befcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x28bf00: 0x8c4200e0
    ctx->pc = 0x28bf00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x28bf04: 0x24420001
    ctx->pc = 0x28bf04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x28bf08: 0x122001a
    ctx->pc = 0x28bf08u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x28bf0c: 0x1812
    ctx->pc = 0x28bf0cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x28bf10: 0x50400001
    ctx->pc = 0x28BF10u;
    {
        const bool branch_taken_0x28bf10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28bf10) {
            ctx->pc = 0x28BF14u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28BF18u;
            goto label_28bf18;
        }
    }
    ctx->pc = 0x28BF18u;
label_28bf18:
    // 0x28bf18: 0x60482d
    ctx->pc = 0x28bf18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf1c: 0x29220040
    ctx->pc = 0x28bf1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 64));
    // 0x28bf20: 0x54400004
    ctx->pc = 0x28BF20u;
    {
        const bool branch_taken_0x28bf20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28bf20) {
            ctx->pc = 0x28BF24u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
            ctx->pc = 0x28BF34u;
            goto label_28bf34;
        }
    }
    ctx->pc = 0x28BF28u;
    // 0x28bf28: 0x229102a
    ctx->pc = 0x28bf28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 9)));
    // 0x28bf2c: 0x220182d
    ctx->pc = 0x28bf2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf30: 0x122180a
    ctx->pc = 0x28bf30u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 9));
label_28bf34:
    // 0x28bf34: 0x60482d
    ctx->pc = 0x28bf34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf38: 0x1b15018
    ctx->pc = 0x28bf38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28bf3c: 0x3c020034
    ctx->pc = 0x28bf3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28bf40: 0x8c42e7c8
    ctx->pc = 0x28bf40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x28bf44: 0x8c4200e4
    ctx->pc = 0x28bf44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x28bf48: 0x24420001
    ctx->pc = 0x28bf48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x28bf4c: 0x142001a
    ctx->pc = 0x28bf4cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x28bf50: 0x1812
    ctx->pc = 0x28bf50u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x28bf54: 0x50400001
    ctx->pc = 0x28BF54u;
    {
        const bool branch_taken_0x28bf54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28bf54) {
            ctx->pc = 0x28BF58u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28BF5Cu;
            goto label_28bf5c;
        }
    }
    ctx->pc = 0x28BF5Cu;
label_28bf5c:
    // 0x28bf5c: 0x60502d
    ctx->pc = 0x28bf5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf60: 0x29420040
    ctx->pc = 0x28bf60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 64));
    // 0x28bf64: 0x54400004
    ctx->pc = 0x28BF64u;
    {
        const bool branch_taken_0x28bf64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28bf64) {
            ctx->pc = 0x28BF68u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
            ctx->pc = 0x28BF78u;
            goto label_28bf78;
        }
    }
    ctx->pc = 0x28BF6Cu;
    // 0x28bf6c: 0x22a102a
    ctx->pc = 0x28bf6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 10)));
    // 0x28bf70: 0x220182d
    ctx->pc = 0x28bf70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf74: 0x142180a
    ctx->pc = 0x28bf74u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 10));
label_28bf78:
    // 0x28bf78: 0x60502d
    ctx->pc = 0x28bf78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf7c: 0x1d14018
    ctx->pc = 0x28bf7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28bf80: 0x3c020034
    ctx->pc = 0x28bf80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28bf84: 0x8c42e7c8
    ctx->pc = 0x28bf84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x28bf88: 0x8c4200e8
    ctx->pc = 0x28bf88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x28bf8c: 0x24420001
    ctx->pc = 0x28bf8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x28bf90: 0x102001a
    ctx->pc = 0x28bf90u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x28bf94: 0x1812
    ctx->pc = 0x28bf94u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x28bf98: 0x50400001
    ctx->pc = 0x28BF98u;
    {
        const bool branch_taken_0x28bf98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28bf98) {
            ctx->pc = 0x28BF9Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28BFA0u;
            goto label_28bfa0;
        }
    }
    ctx->pc = 0x28BFA0u;
label_28bfa0:
    // 0x28bfa0: 0x60402d
    ctx->pc = 0x28bfa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bfa4: 0x29020040
    ctx->pc = 0x28bfa4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 64));
    // 0x28bfa8: 0x54400004
    ctx->pc = 0x28BFA8u;
    {
        const bool branch_taken_0x28bfa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28bfa8) {
            ctx->pc = 0x28BFACu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
            ctx->pc = 0x28BFBCu;
            goto label_28bfbc;
        }
    }
    ctx->pc = 0x28BFB0u;
    // 0x28bfb0: 0x228102a
    ctx->pc = 0x28bfb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 8)));
    // 0x28bfb4: 0x220182d
    ctx->pc = 0x28bfb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bfb8: 0x102180a
    ctx->pc = 0x28bfb8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 8));
label_28bfbc:
    // 0x28bfbc: 0x60402d
    ctx->pc = 0x28bfbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bfc0: 0x128102a
    ctx->pc = 0x28bfc0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x28bfc4: 0x1440000d
    ctx->pc = 0x28BFC4u;
    {
        const bool branch_taken_0x28bfc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28BFC8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
        if (branch_taken_0x28bfc4) {
            ctx->pc = 0x28BFFCu;
            goto label_28bffc;
        }
    }
    ctx->pc = 0x28BFCCu;
    // 0x28bfcc: 0x12a102a
    ctx->pc = 0x28bfccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 10)));
    // 0x28bfd0: 0x1440000a
    ctx->pc = 0x28BFD0u;
    {
        const bool branch_taken_0x28bfd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28BFD4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
        if (branch_taken_0x28bfd0) {
            ctx->pc = 0x28BFFCu;
            goto label_28bffc;
        }
    }
    ctx->pc = 0x28BFD8u;
    // 0x28bfd8: 0x10a102a
    ctx->pc = 0x28bfd8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 10)));
    // 0x28bfdc: 0x14400004
    ctx->pc = 0x28BFDCu;
    {
        const bool branch_taken_0x28bfdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28BFE0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28bfdc) {
            ctx->pc = 0x28BFF0u;
            goto label_28bff0;
        }
    }
    ctx->pc = 0x28BFE4u;
    // 0x28bfe4: 0x24060001
    ctx->pc = 0x28bfe4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bfe8: 0x10000018
    ctx->pc = 0x28BFE8u;
    {
        const bool branch_taken_0x28bfe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28BFECu;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28bfe8) {
            ctx->pc = 0x28C04Cu;
            goto label_28c04c;
        }
    }
    ctx->pc = 0x28BFF0u;
label_28bff0:
    // 0x28bff0: 0x240b0001
    ctx->pc = 0x28bff0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bff4: 0x10000015
    ctx->pc = 0x28BFF4u;
    {
        const bool branch_taken_0x28bff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28BFF8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28bff4) {
            ctx->pc = 0x28C04Cu;
            goto label_28c04c;
        }
    }
    ctx->pc = 0x28BFFCu;
label_28bffc:
    // 0x28bffc: 0x1440000c
    ctx->pc = 0x28BFFCu;
    {
        const bool branch_taken_0x28bffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28C000u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
        if (branch_taken_0x28bffc) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28C004u;
    // 0x28c004: 0x10a102a
    ctx->pc = 0x28c004u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 10)));
    // 0x28c008: 0x14400009
    ctx->pc = 0x28C008u;
    {
        const bool branch_taken_0x28c008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28C00Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
        if (branch_taken_0x28c008) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28C010u;
    // 0x28c010: 0x12a102a
    ctx->pc = 0x28c010u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 10)));
    // 0x28c014: 0x14400004
    ctx->pc = 0x28C014u;
    {
        const bool branch_taken_0x28c014 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28C018u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28c014) {
            ctx->pc = 0x28C028u;
            goto label_28c028;
        }
    }
    ctx->pc = 0x28C01Cu;
    // 0x28c01c: 0x24070001
    ctx->pc = 0x28c01cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c020: 0x1000000a
    ctx->pc = 0x28C020u;
    {
        const bool branch_taken_0x28c020 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C024u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28c020) {
            ctx->pc = 0x28C04Cu;
            goto label_28c04c;
        }
    }
    ctx->pc = 0x28C028u;
label_28c028:
    // 0x28c028: 0x10000007
    ctx->pc = 0x28C028u;
    {
        const bool branch_taken_0x28c028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C02Cu;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28c028) {
            ctx->pc = 0x28C048u;
            goto label_28c048;
        }
    }
    ctx->pc = 0x28C030u;
label_28c030:
    // 0x28c030: 0x14400004
    ctx->pc = 0x28C030u;
    {
        const bool branch_taken_0x28c030 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28C034u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28c030) {
            ctx->pc = 0x28C044u;
            goto label_28c044;
        }
    }
    ctx->pc = 0x28C038u;
    // 0x28c038: 0x24070001
    ctx->pc = 0x28c038u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c03c: 0x10000003
    ctx->pc = 0x28C03Cu;
    {
        const bool branch_taken_0x28c03c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C040u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x28c03c) {
            ctx->pc = 0x28C04Cu;
            goto label_28c04c;
        }
    }
    ctx->pc = 0x28C044u;
label_28c044:
    // 0x28c044: 0x24060001
    ctx->pc = 0x28c044u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_28c048:
    // 0x28c048: 0x24070002
    ctx->pc = 0x28c048u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
label_28c04c:
    // 0x28c04c: 0x3c05003c
    ctx->pc = 0x28c04cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x28c050: 0x24a53e80
    ctx->pc = 0x28c050u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16000));
    // 0x28c054: 0x71080
    ctx->pc = 0x28c054u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x28c058: 0x2404000c
    ctx->pc = 0x28c058u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28c05c: 0x2442018
    ctx->pc = 0x28c05cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c060: 0x441021
    ctx->pc = 0x28c060u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28c064: 0x451021
    ctx->pc = 0x28c064u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28c068: 0xac400000
    ctx->pc = 0x28c068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28c06c: 0x61080
    ctx->pc = 0x28c06cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x28c070: 0x441021
    ctx->pc = 0x28c070u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28c074: 0x451021
    ctx->pc = 0x28c074u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28c078: 0x24030002
    ctx->pc = 0x28c078u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x28c07c: 0xac430000
    ctx->pc = 0x28c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c080: 0xb1080
    ctx->pc = 0x28c080u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), 2));
    // 0x28c084: 0x441021
    ctx->pc = 0x28c084u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28c088: 0x451021
    ctx->pc = 0x28c088u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28c08c: 0x24030001
    ctx->pc = 0x28c08cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c090: 0xac430000
    ctx->pc = 0x28c090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c094: 0x182d
    ctx->pc = 0x28c094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c098: 0x3c02003c
    ctx->pc = 0x28c098u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28c09c: 0x244c3e20
    ctx->pc = 0x28c09cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 15904));
    // 0x28c0a0: 0x2402000c
    ctx->pc = 0x28c0a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28c0a4: 0x2422818
    ctx->pc = 0x28c0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c0a8: 0x3c020035
    ctx->pc = 0x28c0a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28c0ac: 0x8c44b458
    ctx->pc = 0x28c0acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947928)));
label_28c0b0:
    // 0x28c0b0: 0x31080
    ctx->pc = 0x28c0b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x28c0b4: 0x451021
    ctx->pc = 0x28c0b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28c0b8: 0x4c1021
    ctx->pc = 0x28c0b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x28c0bc: 0xac440000
    ctx->pc = 0x28c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x28c0c0: 0x24630001
    ctx->pc = 0x28c0c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x28c0c4: 0x28620003
    ctx->pc = 0x28c0c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x28c0c8: 0x1440fff9
    ctx->pc = 0x28C0C8u;
    {
        const bool branch_taken_0x28c0c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28c0c8) {
            ctx->pc = 0x28C0B0u;
            goto label_28c0b0;
        }
    }
    ctx->pc = 0x28C0D0u;
    // 0x28c0d0: 0x3c03003c
    ctx->pc = 0x28c0d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x28c0d4: 0x24633df0
    ctx->pc = 0x28c0d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15856));
    // 0x28c0d8: 0x73880
    ctx->pc = 0x28c0d8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x28c0dc: 0x2405000c
    ctx->pc = 0x28c0dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28c0e0: 0x2452818
    ctx->pc = 0x28c0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c0e4: 0xe53821
    ctx->pc = 0x28c0e4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x28c0e8: 0xe31021
    ctx->pc = 0x28c0e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x28c0ec: 0xac490000
    ctx->pc = 0x28c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x28c0f0: 0x63080
    ctx->pc = 0x28c0f0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x28c0f4: 0xc53021
    ctx->pc = 0x28c0f4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x28c0f8: 0xc31021
    ctx->pc = 0x28c0f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x28c0fc: 0xac480000
    ctx->pc = 0x28c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x28c100: 0xb2080
    ctx->pc = 0x28c100u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 11), 2));
    // 0x28c104: 0x852021
    ctx->pc = 0x28c104u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28c108: 0x831821
    ctx->pc = 0x28c108u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28c10c: 0xac6a0000
    ctx->pc = 0x28c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x28c110: 0x3c02003c
    ctx->pc = 0x28c110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28c114: 0x24423e50
    ctx->pc = 0x28c114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15952));
    // 0x28c118: 0xe23821
    ctx->pc = 0x28c118u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x28c11c: 0xacef0000
    ctx->pc = 0x28c11cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 15));
    // 0x28c120: 0xc23021
    ctx->pc = 0x28c120u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28c124: 0xacce0000
    ctx->pc = 0x28c124u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 14));
    // 0x28c128: 0x822021
    ctx->pc = 0x28c128u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28c12c: 0xac8d0000
    ctx->pc = 0x28c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 13));
    // 0x28c130: 0x3c020034
    ctx->pc = 0x28c130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28c134: 0x8c44e7d4
    ctx->pc = 0x28c134u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
    // 0x28c138: 0xdfbf0030
    ctx->pc = 0x28c138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c13c: 0xdfb20020
    ctx->pc = 0x28c13cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c140: 0xdfb10010
    ctx->pc = 0x28c140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c144: 0xdfb00000
    ctx->pc = 0x28c144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c148: 0x80986b4
    ctx->pc = 0x28C148u;
    ctx->pc = 0x28C14Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x261AD0u;
    LoadWorldData_0x261ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x28C150u;
}
