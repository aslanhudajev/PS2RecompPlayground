#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufModifyPts
// Address: 0x2dfd48 - 0x2dfee8
void viBufModifyPts_0x2dfd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dfd48u;

    // 0x2dfd48: 0x27bdff70
    ctx->pc = 0x2dfd48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dfd4c: 0xffbf0080
    ctx->pc = 0x2dfd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2dfd50: 0xffb70070
    ctx->pc = 0x2dfd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2dfd54: 0xffb60060
    ctx->pc = 0x2dfd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2dfd58: 0xffb50050
    ctx->pc = 0x2dfd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2dfd5c: 0xffb40040
    ctx->pc = 0x2dfd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2dfd60: 0xffb30030
    ctx->pc = 0x2dfd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2dfd64: 0xffb20020
    ctx->pc = 0x2dfd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2dfd68: 0xffb10010
    ctx->pc = 0x2dfd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dfd6c: 0xffb00000
    ctx->pc = 0x2dfd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dfd70: 0x80902d
    ctx->pc = 0x2dfd70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd74: 0xa0982d
    ctx->pc = 0x2dfd74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd78: 0x8e42005c
    ctx->pc = 0x2dfd78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2dfd7c: 0x8e440058
    ctx->pc = 0x2dfd7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2dfd80: 0x448823
    ctx->pc = 0x2dfd80u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dfd84: 0x8e420054
    ctx->pc = 0x2dfd84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2dfd88: 0x2228821
    ctx->pc = 0x2dfd88u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2dfd8c: 0x222001a
    ctx->pc = 0x2dfd8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2dfd90: 0x1810
    ctx->pc = 0x2dfd90u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2dfd94: 0x50400001
    ctx->pc = 0x2DFD94u;
    {
        const bool branch_taken_0x2dfd94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dfd94) {
            ctx->pc = 0x2DFD98u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DFD9Cu;
            goto label_2dfd9c;
        }
    }
    ctx->pc = 0x2DFD9Cu;
label_2dfd9c:
    // 0x2dfd9c: 0x60882d
    ctx->pc = 0x2dfd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfda0: 0x8e420008
    ctx->pc = 0x2dfda0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2dfda4: 0x2a2c0
    ctx->pc = 0x2dfda4u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 2), 11));
    // 0x2dfda8: 0x18800043
    ctx->pc = 0x2DFDA8u;
    {
        const bool branch_taken_0x2dfda8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2DFDACu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2dfda8) {
            ctx->pc = 0x2DFEB8u;
            goto label_2dfeb8;
        }
    }
    ctx->pc = 0x2DFDB0u;
    // 0x2dfdb0: 0x24020018
    ctx->pc = 0x2dfdb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2dfdb4: 0x2221018
    ctx->pc = 0x2dfdb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2dfdb8: 0x8e430050
    ctx->pc = 0x2dfdb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2dfdbc: 0x438021
    ctx->pc = 0x2dfdbcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dfdc0: 0x8e020014
    ctx->pc = 0x2dfdc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2dfdc4: 0x1040003d
    ctx->pc = 0x2DFDC4u;
    {
        const bool branch_taken_0x2dfdc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DFDC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dfdc4) {
            ctx->pc = 0x2DFEBCu;
            goto label_2dfebc;
        }
    }
    ctx->pc = 0x2DFDCCu;
    // 0x2dfdcc: 0x8e620014
    ctx->pc = 0x2dfdccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2dfdd0: 0x10400039
    ctx->pc = 0x2DFDD0u;
    {
        const bool branch_taken_0x2dfdd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DFDD4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2dfdd0) {
            ctx->pc = 0x2DFEB8u;
            goto label_2dfeb8;
        }
    }
    ctx->pc = 0x2DFDD8u;
    // 0x2dfdd8: 0x24170018
    ctx->pc = 0x2dfdd8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2dfddc: 0x8e040010
    ctx->pc = 0x2dfddcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2dfde0:
    // 0x2dfde0: 0x8e650010
    ctx->pc = 0x2dfde0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2dfde4: 0x8e660014
    ctx->pc = 0x2dfde4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2dfde8: 0xc0b7c4c
    ctx->pc = 0x2DFDE8u;
    SET_GPR_U32(ctx, 31, 0x2DFDF0u);
    ctx->pc = 0x2DFDECu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF130u;
    {
        const uint32_t __entryPc = ctx->pc;
        IsPtsInRegion_0x2df130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFDF0u; }
    }
    if (ctx->pc != 0x2DFDF0u) { return; }
    ctx->pc = 0x2DFDF0u;
    // 0x2dfdf0: 0x50400020
    ctx->pc = 0x2DFDF0u;
    {
        const bool branch_taken_0x2dfdf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dfdf0) {
            ctx->pc = 0x2DFDF4u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DFE74u;
            goto label_2dfe74;
        }
    }
    ctx->pc = 0x2DFDF8u;
    // 0x2dfdf8: 0x8e640010
    ctx->pc = 0x2dfdf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2dfdfc: 0x8e620014
    ctx->pc = 0x2dfdfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2dfe00: 0x822021
    ctx->pc = 0x2dfe00u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dfe04: 0x8e020010
    ctx->pc = 0x2dfe04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dfe08: 0x822023
    ctx->pc = 0x2dfe08u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dfe0c: 0x8e030014
    ctx->pc = 0x2dfe0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2dfe10: 0x64102a
    ctx->pc = 0x2dfe10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x2dfe14: 0x62200b
    ctx->pc = 0x2dfe14u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2dfe18: 0x8e020010
    ctx->pc = 0x2dfe18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dfe1c: 0x821021
    ctx->pc = 0x2dfe1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dfe20: 0x54001a
    ctx->pc = 0x2dfe20u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2dfe24: 0x1010
    ctx->pc = 0x2dfe24u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2dfe28: 0x52800001
    ctx->pc = 0x2DFE28u;
    {
        const bool branch_taken_0x2dfe28 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dfe28) {
            ctx->pc = 0x2DFE2Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DFE30u;
            goto label_2dfe30;
        }
    }
    ctx->pc = 0x2DFE30u;
label_2dfe30:
    // 0x2dfe30: 0xae020010
    ctx->pc = 0x2dfe30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2dfe34: 0x60102d
    ctx->pc = 0x2dfe34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe38: 0x441023
    ctx->pc = 0x2dfe38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dfe3c: 0x1440000d
    ctx->pc = 0x2DFE3Cu;
    {
        const bool branch_taken_0x2dfe3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DFE40u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2dfe3c) {
            ctx->pc = 0x2DFE74u;
            goto label_2dfe74;
        }
    }
    ctx->pc = 0x2DFE44u;
    // 0x2dfe44: 0xde020000
    ctx->pc = 0x2dfe44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfe48: 0x4420006
    ctx->pc = 0x2DFE48u;
    {
        const bool branch_taken_0x2dfe48 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2dfe48) {
            ctx->pc = 0x2DFE4Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->pc = 0x2DFE64u;
            goto label_2dfe64;
        }
    }
    ctx->pc = 0x2DFE50u;
    // 0x2dfe50: 0xfe150000
    ctx->pc = 0x2dfe50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 21));
    // 0x2dfe54: 0xfe150008
    ctx->pc = 0x2dfe54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 21));
    // 0x2dfe58: 0xae000010
    ctx->pc = 0x2dfe58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2dfe5c: 0xae000014
    ctx->pc = 0x2dfe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2dfe60: 0x8e420058
    ctx->pc = 0x2dfe60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_2dfe64:
    // 0x2dfe64: 0x2442ffff
    ctx->pc = 0x2dfe64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2dfe68: 0x2a2182a
    ctx->pc = 0x2dfe68u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 2)));
    // 0x2dfe6c: 0x3100a
    ctx->pc = 0x2dfe6cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x2dfe70: 0xae420058
    ctx->pc = 0x2dfe70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_2dfe74:
    // 0x2dfe74: 0x26230001
    ctx->pc = 0x2dfe74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dfe78: 0x8e420054
    ctx->pc = 0x2dfe78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2dfe7c: 0x62001a
    ctx->pc = 0x2dfe7cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2dfe80: 0x1810
    ctx->pc = 0x2dfe80u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2dfe84: 0x50400001
    ctx->pc = 0x2DFE84u;
    {
        const bool branch_taken_0x2dfe84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dfe84) {
            ctx->pc = 0x2DFE88u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DFE8Cu;
            goto label_2dfe8c;
        }
    }
    ctx->pc = 0x2DFE8Cu;
label_2dfe8c:
    // 0x2dfe8c: 0x12c0000a
    ctx->pc = 0x2DFE8Cu;
    {
        const bool branch_taken_0x2dfe8c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DFE90u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dfe8c) {
            ctx->pc = 0x2DFEB8u;
            goto label_2dfeb8;
        }
    }
    ctx->pc = 0x2DFE94u;
    // 0x2dfe94: 0x2371018
    ctx->pc = 0x2dfe94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2dfe98: 0x8e430050
    ctx->pc = 0x2dfe98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2dfe9c: 0x438021
    ctx->pc = 0x2dfe9cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dfea0: 0x8e020014
    ctx->pc = 0x2dfea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2dfea4: 0x10400005
    ctx->pc = 0x2DFEA4u;
    {
        const bool branch_taken_0x2dfea4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DFEA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dfea4) {
            ctx->pc = 0x2DFEBCu;
            goto label_2dfebc;
        }
    }
    ctx->pc = 0x2DFEACu;
    // 0x2dfeac: 0x8e620014
    ctx->pc = 0x2dfeacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2dfeb0: 0x5440ffcb
    ctx->pc = 0x2DFEB0u;
    {
        const bool branch_taken_0x2dfeb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dfeb0) {
            ctx->pc = 0x2DFEB4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2DFDE0u;
            goto label_2dfde0;
        }
    }
    ctx->pc = 0x2DFEB8u;
label_2dfeb8:
    // 0x2dfeb8: 0x102d
    ctx->pc = 0x2dfeb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfebc:
    // 0x2dfebc: 0xdfbf0080
    ctx->pc = 0x2dfebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dfec0: 0xdfb70070
    ctx->pc = 0x2dfec0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dfec4: 0xdfb60060
    ctx->pc = 0x2dfec4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dfec8: 0xdfb50050
    ctx->pc = 0x2dfec8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dfecc: 0xdfb40040
    ctx->pc = 0x2dfeccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfed0: 0xdfb30030
    ctx->pc = 0x2dfed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dfed4: 0xdfb20020
    ctx->pc = 0x2dfed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfed8: 0xdfb10010
    ctx->pc = 0x2dfed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfedc: 0xdfb00000
    ctx->pc = 0x2dfedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfee0: 0x3e00008
    ctx->pc = 0x2DFEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFEE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DFD9Cu: goto label_2dfd9c;
            case 0x2DFDE0u: goto label_2dfde0;
            case 0x2DFE30u: goto label_2dfe30;
            case 0x2DFE64u: goto label_2dfe64;
            case 0x2DFE74u: goto label_2dfe74;
            case 0x2DFE8Cu: goto label_2dfe8c;
            case 0x2DFEB8u: goto label_2dfeb8;
            case 0x2DFEBCu: goto label_2dfebc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DFEE8u;
}
