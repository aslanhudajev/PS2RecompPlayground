#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exponent
// Address: 0x12da10 - 0x12daf0
void exponent_0x12da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12da10u;

    // 0x12da10: 0x27bdfec0
    ctx->pc = 0x12da10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x12da14: 0x4a10006
    ctx->pc = 0x12DA14u;
    {
        const bool branch_taken_0x12da14 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x12DA18u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x12da14) {
            ctx->pc = 0x12DA30u;
            goto label_12da30;
        }
    }
    ctx->pc = 0x12DA1Cu;
    // 0x12da1c: 0x2402002d
    ctx->pc = 0x12da1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
    // 0x12da20: 0x52823
    ctx->pc = 0x12da20u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x12da24: 0xa0820001
    ctx->pc = 0x12da24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x12da28: 0x10000004
    ctx->pc = 0x12DA28u;
    {
        const bool branch_taken_0x12da28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DA2Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x12da28) {
            ctx->pc = 0x12DA3Cu;
            goto label_12da3c;
        }
    }
    ctx->pc = 0x12DA30u;
label_12da30:
    // 0x12da30: 0x2402002b
    ctx->pc = 0x12da30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
    // 0x12da34: 0x24880002
    ctx->pc = 0x12da34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 2));
    // 0x12da38: 0xa0820001
    ctx->pc = 0x12da38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_12da3c:
    // 0x12da3c: 0x27a60134
    ctx->pc = 0x12da3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 308));
    // 0x12da40: 0x28a2000a
    ctx->pc = 0x12da40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 10));
    // 0x12da44: 0x14400021
    ctx->pc = 0x12DA44u;
    {
        const bool branch_taken_0x12da44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12DA48u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12da44) {
            ctx->pc = 0x12DACCu;
            goto label_12dacc;
        }
    }
    ctx->pc = 0x12DA4Cu;
    // 0x12da4c: 0x2407000a
    ctx->pc = 0x12da4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    // 0x12da50: 0x482d
    ctx->pc = 0x12da50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da54: 0xa7001a
    ctx->pc = 0x12da54u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_12da58:
    // 0x12da58: 0x50e90001
    ctx->pc = 0x12DA58u;
    {
        const bool branch_taken_0x12da58 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 9));
        if (branch_taken_0x12da58) {
            ctx->pc = 0x12DA5Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12DA60u;
            goto label_12da60;
        }
    }
    ctx->pc = 0x12DA60u;
label_12da60:
    // 0x12da60: 0x24c6ffff
    ctx->pc = 0x12da60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12da64: 0x1010
    ctx->pc = 0x12da64u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x12da68: 0x1812
    ctx->pc = 0x12da68u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x12da6c: 0x24420030
    ctx->pc = 0x12da6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
    // 0x12da70: 0x60282d
    ctx->pc = 0x12da70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da74: 0xa0c20000
    ctx->pc = 0x12da74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12da78: 0x28a3000a
    ctx->pc = 0x12da78u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 10));
    // 0x12da7c: 0x50e90001
    ctx->pc = 0x12DA7Cu;
    {
        const bool branch_taken_0x12da7c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 9));
        if (branch_taken_0x12da7c) {
            ctx->pc = 0x12DA80u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12DA84u;
            goto label_12da84;
        }
    }
    ctx->pc = 0x12DA84u;
label_12da84:
    // 0x12da84: 0x5060fff4
    ctx->pc = 0x12DA84u;
    {
        const bool branch_taken_0x12da84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x12da84) {
            ctx->pc = 0x12DA88u;
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
            ctx->pc = 0x12DA58u;
            goto label_12da58;
        }
    }
    ctx->pc = 0x12DA8Cu;
    // 0x12da8c: 0x24c6ffff
    ctx->pc = 0x12da8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12da90: 0x24a30030
    ctx->pc = 0x12da90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 48));
    // 0x12da94: 0xca102b
    ctx->pc = 0x12da94u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x12da98: 0x10400012
    ctx->pc = 0x12DA98u;
    {
        const bool branch_taken_0x12da98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DA9Cu;
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x12da98) {
            ctx->pc = 0x12DAE4u;
            goto label_12dae4;
        }
    }
    ctx->pc = 0x12DAA0u;
    // 0x12daa0: 0x140282d
    ctx->pc = 0x12daa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12daa4: 0x0
    ctx->pc = 0x12daa4u;
    // NOP
label_12daa8:
    // 0x12daa8: 0x90c20000
    ctx->pc = 0x12daa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12daac: 0x24c60001
    ctx->pc = 0x12daacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x12dab0: 0xa1020000
    ctx->pc = 0x12dab0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12dab4: 0xc5182b
    ctx->pc = 0x12dab4u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x12dab8: 0x25080001
    ctx->pc = 0x12dab8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x12dabc: 0x1460fffa
    ctx->pc = 0x12DABCu;
    {
        const bool branch_taken_0x12dabc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x12dabc) {
            ctx->pc = 0x12DAA8u;
            goto label_12daa8;
        }
    }
    ctx->pc = 0x12DAC4u;
    // 0x12dac4: 0x10000008
    ctx->pc = 0x12DAC4u;
    {
        const bool branch_taken_0x12dac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12DAC8u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        if (branch_taken_0x12dac4) {
            ctx->pc = 0x12DAE8u;
            goto label_12dae8;
        }
    }
    ctx->pc = 0x12DACCu;
label_12dacc:
    // 0x12dacc: 0x24020030
    ctx->pc = 0x12daccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x12dad0: 0x24a30030
    ctx->pc = 0x12dad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 48));
    // 0x12dad4: 0xa1020000
    ctx->pc = 0x12dad4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12dad8: 0x25080001
    ctx->pc = 0x12dad8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x12dadc: 0xa1030000
    ctx->pc = 0x12dadcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x12dae0: 0x25080001
    ctx->pc = 0x12dae0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_12dae4:
    // 0x12dae4: 0x1041023
    ctx->pc = 0x12dae4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_12dae8:
    // 0x12dae8: 0x3e00008
    ctx->pc = 0x12DAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DAECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DA30u: goto label_12da30;
            case 0x12DA3Cu: goto label_12da3c;
            case 0x12DA58u: goto label_12da58;
            case 0x12DA60u: goto label_12da60;
            case 0x12DA84u: goto label_12da84;
            case 0x12DAA8u: goto label_12daa8;
            case 0x12DACCu: goto label_12dacc;
            case 0x12DAE4u: goto label_12dae4;
            case 0x12DAE8u: goto label_12dae8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DAF0u;
}
