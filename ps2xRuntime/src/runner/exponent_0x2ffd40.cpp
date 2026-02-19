#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exponent
// Address: 0x2ffd40 - 0x2ffe20
void exponent_0x2ffd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ffd40u;

    // 0x2ffd40: 0x27bdfec0
    ctx->pc = 0x2ffd40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2ffd44: 0x4a10006
    ctx->pc = 0x2FFD44u;
    {
        const bool branch_taken_0x2ffd44 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2FFD48u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x2ffd44) {
            ctx->pc = 0x2FFD60u;
            goto label_2ffd60;
        }
    }
    ctx->pc = 0x2FFD4Cu;
    // 0x2ffd4c: 0x2402002d
    ctx->pc = 0x2ffd4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
    // 0x2ffd50: 0x52823
    ctx->pc = 0x2ffd50u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2ffd54: 0xa0820001
    ctx->pc = 0x2ffd54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ffd58: 0x10000004
    ctx->pc = 0x2FFD58u;
    {
        const bool branch_taken_0x2ffd58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFD5Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x2ffd58) {
            ctx->pc = 0x2FFD6Cu;
            goto label_2ffd6c;
        }
    }
    ctx->pc = 0x2FFD60u;
label_2ffd60:
    // 0x2ffd60: 0x2402002b
    ctx->pc = 0x2ffd60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
    // 0x2ffd64: 0x24880002
    ctx->pc = 0x2ffd64u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 2));
    // 0x2ffd68: 0xa0820001
    ctx->pc = 0x2ffd68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_2ffd6c:
    // 0x2ffd6c: 0x27a60134
    ctx->pc = 0x2ffd6cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 308));
    // 0x2ffd70: 0x28a2000a
    ctx->pc = 0x2ffd70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 10));
    // 0x2ffd74: 0x14400021
    ctx->pc = 0x2FFD74u;
    {
        const bool branch_taken_0x2ffd74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FFD78u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd74) {
            ctx->pc = 0x2FFDFCu;
            goto label_2ffdfc;
        }
    }
    ctx->pc = 0x2FFD7Cu;
    // 0x2ffd7c: 0x2407000a
    ctx->pc = 0x2ffd7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ffd80: 0x482d
    ctx->pc = 0x2ffd80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd84: 0xa7001a
    ctx->pc = 0x2ffd84u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_2ffd88:
    // 0x2ffd88: 0x50e90001
    ctx->pc = 0x2FFD88u;
    {
        const bool branch_taken_0x2ffd88 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 9));
        if (branch_taken_0x2ffd88) {
            ctx->pc = 0x2FFD8Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2FFD90u;
            goto label_2ffd90;
        }
    }
    ctx->pc = 0x2FFD90u;
label_2ffd90:
    // 0x2ffd90: 0x24c6ffff
    ctx->pc = 0x2ffd90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ffd94: 0x1010
    ctx->pc = 0x2ffd94u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2ffd98: 0x1812
    ctx->pc = 0x2ffd98u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x2ffd9c: 0x24420030
    ctx->pc = 0x2ffd9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
    // 0x2ffda0: 0x60282d
    ctx->pc = 0x2ffda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffda4: 0xa0c20000
    ctx->pc = 0x2ffda4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ffda8: 0x28a3000a
    ctx->pc = 0x2ffda8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 10));
    // 0x2ffdac: 0x50e90001
    ctx->pc = 0x2FFDACu;
    {
        const bool branch_taken_0x2ffdac = (GPR_U32(ctx, 7) == GPR_U32(ctx, 9));
        if (branch_taken_0x2ffdac) {
            ctx->pc = 0x2FFDB0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2FFDB4u;
            goto label_2ffdb4;
        }
    }
    ctx->pc = 0x2FFDB4u;
label_2ffdb4:
    // 0x2ffdb4: 0x5060fff4
    ctx->pc = 0x2FFDB4u;
    {
        const bool branch_taken_0x2ffdb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ffdb4) {
            ctx->pc = 0x2FFDB8u;
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
            ctx->pc = 0x2FFD88u;
            goto label_2ffd88;
        }
    }
    ctx->pc = 0x2FFDBCu;
    // 0x2ffdbc: 0x24c6ffff
    ctx->pc = 0x2ffdbcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ffdc0: 0x24a30030
    ctx->pc = 0x2ffdc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 48));
    // 0x2ffdc4: 0xca102b
    ctx->pc = 0x2ffdc4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2ffdc8: 0x10400012
    ctx->pc = 0x2FFDC8u;
    {
        const bool branch_taken_0x2ffdc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFDCCu;
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x2ffdc8) {
            ctx->pc = 0x2FFE14u;
            goto label_2ffe14;
        }
    }
    ctx->pc = 0x2FFDD0u;
    // 0x2ffdd0: 0x140282d
    ctx->pc = 0x2ffdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffdd4: 0x0
    ctx->pc = 0x2ffdd4u;
    // NOP
label_2ffdd8:
    // 0x2ffdd8: 0x90c20000
    ctx->pc = 0x2ffdd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ffddc: 0x24c60001
    ctx->pc = 0x2ffddcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ffde0: 0xa1020000
    ctx->pc = 0x2ffde0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ffde4: 0xc5182b
    ctx->pc = 0x2ffde4u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ffde8: 0x25080001
    ctx->pc = 0x2ffde8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ffdec: 0x1460fffa
    ctx->pc = 0x2FFDECu;
    {
        const bool branch_taken_0x2ffdec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ffdec) {
            ctx->pc = 0x2FFDD8u;
            goto label_2ffdd8;
        }
    }
    ctx->pc = 0x2FFDF4u;
    // 0x2ffdf4: 0x10000008
    ctx->pc = 0x2FFDF4u;
    {
        const bool branch_taken_0x2ffdf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFDF8u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        if (branch_taken_0x2ffdf4) {
            ctx->pc = 0x2FFE18u;
            goto label_2ffe18;
        }
    }
    ctx->pc = 0x2FFDFCu;
label_2ffdfc:
    // 0x2ffdfc: 0x24020030
    ctx->pc = 0x2ffdfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ffe00: 0x24a30030
    ctx->pc = 0x2ffe00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 48));
    // 0x2ffe04: 0xa1020000
    ctx->pc = 0x2ffe04u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ffe08: 0x25080001
    ctx->pc = 0x2ffe08u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ffe0c: 0xa1030000
    ctx->pc = 0x2ffe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ffe10: 0x25080001
    ctx->pc = 0x2ffe10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_2ffe14:
    // 0x2ffe14: 0x1041023
    ctx->pc = 0x2ffe14u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_2ffe18:
    // 0x2ffe18: 0x3e00008
    ctx->pc = 0x2FFE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFE1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FFD60u: goto label_2ffd60;
            case 0x2FFD6Cu: goto label_2ffd6c;
            case 0x2FFD88u: goto label_2ffd88;
            case 0x2FFD90u: goto label_2ffd90;
            case 0x2FFDB4u: goto label_2ffdb4;
            case 0x2FFDD8u: goto label_2ffdd8;
            case 0x2FFDFCu: goto label_2ffdfc;
            case 0x2FFE14u: goto label_2ffe14;
            case 0x2FFE18u: goto label_2ffe18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FFE20u;
}
