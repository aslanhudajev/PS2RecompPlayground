#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__11PalMgrClassFiii
// Address: 0x203b00 - 0x203cdc
void init__11PalMgrClassFiii_0x203b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__11PalMgrClassFiii");


    ctx->pc = 0x203b00u;

    // 0x203b00: 0x27bdffb0
    ctx->pc = 0x203b00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x203b04: 0x7fbf0040
    ctx->pc = 0x203b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x203b08: 0x7fb30030
    ctx->pc = 0x203b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x203b0c: 0x7fb20020
    ctx->pc = 0x203b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x203b10: 0x7fb10010
    ctx->pc = 0x203b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x203b14: 0x7fb00000
    ctx->pc = 0x203b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203b18: 0x70a09628
    ctx->pc = 0x203b18u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x203b1c: 0xac800008
    ctx->pc = 0x203b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x203b20: 0x70809e28
    ctx->pc = 0x203b20u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x203b24: 0x3c020052
    ctx->pc = 0x203b24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x203b28: 0x70c08e28
    ctx->pc = 0x203b28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x203b2c: 0x70e08628
    ctx->pc = 0x203b2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x203b30: 0x2444c0f0
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294951152));
    // 0x203b34: 0xc06ac80
    ctx->pc = 0x203B34u;
    SET_GPR_U32(ctx, 31, 0x203B3Cu);
    ctx->pc = 0x203B38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 154));
    ctx->pc = 0x1AB200u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInitPalette_0x1ab200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B3Cu; }
        else if (ctx->pc != 0x203B3Cu) { ctx->pc = 0x203B3Cu; }
    }
    if (ctx->pc != 0x203B3Cu) { return; }
    ctx->pc = 0x203B3Cu;
    // 0x203b3c: 0x3c020052
    ctx->pc = 0x203b3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x203b40: 0x244498b0
    ctx->pc = 0x203b40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294940848));
    // 0x203b44: 0x3c020052
    ctx->pc = 0x203b44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x203b48: 0x70001e28
    ctx->pc = 0x203b48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x203b4c: 0x2445b8b0
    ctx->pc = 0x203b4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294949040));
label_203b50:
    // 0x203b50: 0xaca40000
    ctx->pc = 0x203b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x203b54: 0x24820010
    ctx->pc = 0x203b54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
    // 0x203b58: 0xaca20004
    ctx->pc = 0x203b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x203b5c: 0x24820020
    ctx->pc = 0x203b5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 32));
    // 0x203b60: 0xaca20008
    ctx->pc = 0x203b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x203b64: 0x24820030
    ctx->pc = 0x203b64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 48));
    // 0x203b68: 0xaca2000c
    ctx->pc = 0x203b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x203b6c: 0x24820040
    ctx->pc = 0x203b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 64));
    // 0x203b70: 0xaca20010
    ctx->pc = 0x203b70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x203b74: 0x24820050
    ctx->pc = 0x203b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 80));
    // 0x203b78: 0xaca20014
    ctx->pc = 0x203b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x203b7c: 0x24820060
    ctx->pc = 0x203b7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 96));
    // 0x203b80: 0xaca20018
    ctx->pc = 0x203b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x203b84: 0x24820070
    ctx->pc = 0x203b84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 112));
    // 0x203b88: 0xaca2001c
    ctx->pc = 0x203b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x203b8c: 0x24630008
    ctx->pc = 0x203b8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x203b90: 0x28620200
    ctx->pc = 0x203b90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 512));
    // 0x203b94: 0x24840080
    ctx->pc = 0x203b94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 128));
    // 0x203b98: 0x1440ffed
    ctx->pc = 0x203B98u;
    {
        const bool branch_taken_0x203b98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203B9Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x203b98) {
            ctx->pc = 0x203B50u;
            goto label_203b50;
        }
    }
    ctx->pc = 0x203BA0u;
    // 0x203ba0: 0x3c020052
    ctx->pc = 0x203ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x203ba4: 0x70002628
    ctx->pc = 0x203ba4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x203ba8: 0x2443c0b0
    ctx->pc = 0x203ba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294951088));
label_203bac:
    // 0x203bac: 0xa0600000
    ctx->pc = 0x203bacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bb0: 0xa0600001
    ctx->pc = 0x203bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bb4: 0xa0600002
    ctx->pc = 0x203bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bb8: 0xa0600003
    ctx->pc = 0x203bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bbc: 0xa0600004
    ctx->pc = 0x203bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bc0: 0xa0600005
    ctx->pc = 0x203bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bc4: 0xa0600006
    ctx->pc = 0x203bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bc8: 0xa0600007
    ctx->pc = 0x203bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bcc: 0xa0600008
    ctx->pc = 0x203bccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bd0: 0xa0600009
    ctx->pc = 0x203bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bd4: 0xa060000a
    ctx->pc = 0x203bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bd8: 0xa060000b
    ctx->pc = 0x203bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bdc: 0xa060000c
    ctx->pc = 0x203bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x203be0: 0xa060000d
    ctx->pc = 0x203be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x203be4: 0xa060000e
    ctx->pc = 0x203be4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x203be8: 0x24840008
    ctx->pc = 0x203be8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x203bec: 0xa060000f
    ctx->pc = 0x203becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x203bf0: 0x28820020
    ctx->pc = 0x203bf0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
    // 0x203bf4: 0x1440ffed
    ctx->pc = 0x203BF4u;
    {
        const bool branch_taken_0x203bf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203BF8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x203bf4) {
            ctx->pc = 0x203BACu;
            goto label_203bac;
        }
    }
    ctx->pc = 0x203BFCu;
    // 0x203bfc: 0x3c020027
    ctx->pc = 0x203bfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x203c00: 0x24452650
    ctx->pc = 0x203c00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 9808));
    // 0x203c04: 0x3c020027
    ctx->pc = 0x203c04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x203c08: 0xa6600024
    ctx->pc = 0x203c08u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x203c0c: 0x24040001
    ctx->pc = 0x203c0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x203c10: 0x70004628
    ctx->pc = 0x203c10u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x203c14: 0x72603628
    ctx->pc = 0x203c14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x203c18: 0x24472640
    ctx->pc = 0x203c18u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 9792));
label_203c1c:
    // 0x203c1c: 0x2041024
    ctx->pc = 0x203c1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x203c20: 0x1040000e
    ctx->pc = 0x203C20u;
    {
        const bool branch_taken_0x203c20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203C24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x203c20) {
            ctx->pc = 0x203C5Cu;
            goto label_203c5c;
        }
    }
    ctx->pc = 0x203C28u;
    // 0x203c28: 0x86630024
    ctx->pc = 0x203c28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x203c2c: 0x8ca20000
    ctx->pc = 0x203c2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203c30: 0x14400002
    ctx->pc = 0x203C30u;
    {
        const bool branch_taken_0x203c30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203C34u;
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x203c30) {
            ctx->pc = 0x203C3Cu;
            goto label_203c3c;
        }
    }
    ctx->pc = 0x203C38u;
    // 0x203c38: 0x1cd
    ctx->pc = 0x203c38u;
    runtime->handleBreak(rdram, ctx);
label_203c3c:
    // 0x203c3c: 0x1012
    ctx->pc = 0x203c3cu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x203c40: 0xa4c20014
    ctx->pc = 0x203c40u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x203c44: 0x84e30000
    ctx->pc = 0x203c44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x203c48: 0x86620024
    ctx->pc = 0x203c48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x203c4c: 0x431021
    ctx->pc = 0x203c4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203c50: 0x10000003
    ctx->pc = 0x203C50u;
    {
        const bool branch_taken_0x203c50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203C54u;
        WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x203c50) {
            ctx->pc = 0x203C60u;
            goto label_203c60;
        }
    }
    ctx->pc = 0x203C58u;
    // 0x203c58: 0x2402ffff
    ctx->pc = 0x203c58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_203c5c:
    // 0x203c5c: 0xa4c20014
    ctx->pc = 0x203c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 2));
label_203c60:
    // 0x203c60: 0x24020001
    ctx->pc = 0x203c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x203c64: 0xa4c2001c
    ctx->pc = 0x203c64u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x203c68: 0x25080001
    ctx->pc = 0x203c68u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x203c6c: 0x29020004
    ctx->pc = 0x203c6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 4));
    // 0x203c70: 0x42040
    ctx->pc = 0x203c70u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x203c74: 0x24a50004
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x203c78: 0x24c60002
    ctx->pc = 0x203c78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
    // 0x203c7c: 0x1440ffe7
    ctx->pc = 0x203C7Cu;
    {
        const bool branch_taken_0x203c7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203C80u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x203c7c) {
            ctx->pc = 0x203C1Cu;
            goto label_203c1c;
        }
    }
    ctx->pc = 0x203C84u;
    // 0x203c84: 0xc080f94
    ctx->pc = 0x203C84u;
    SET_GPR_U32(ctx, 31, 0x203C8Cu);
    ctx->pc = 0x203C88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x203E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        getLMBlock__11PalMgrClassFv_0x203e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203C8Cu; }
        else if (ctx->pc != 0x203C8Cu) { ctx->pc = 0x203C8Cu; }
    }
    if (ctx->pc != 0x203C8Cu) { return; }
    ctx->pc = 0x203C8Cu;
    // 0x203c8c: 0xae620004
    ctx->pc = 0x203c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x203c90: 0xae620000
    ctx->pc = 0x203c90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x203c94: 0x8e640000
    ctx->pc = 0x203c94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x203c98: 0x2403ffff
    ctx->pc = 0x203c98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203c9c: 0xac920008
    ctx->pc = 0x203c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
    // 0x203ca0: 0x8e640000
    ctx->pc = 0x203ca0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x203ca4: 0xac91000c
    ctx->pc = 0x203ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
    // 0x203ca8: 0x8e640000
    ctx->pc = 0x203ca8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x203cac: 0xac800000
    ctx->pc = 0x203cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x203cb0: 0x8e640000
    ctx->pc = 0x203cb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x203cb4: 0xac800004
    ctx->pc = 0x203cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x203cb8: 0xae63000c
    ctx->pc = 0x203cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x203cbc: 0xae600010
    ctx->pc = 0x203cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x203cc0: 0x7bbf0040
    ctx->pc = 0x203cc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203cc4: 0x7bb30030
    ctx->pc = 0x203cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203cc8: 0x7bb20020
    ctx->pc = 0x203cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203ccc: 0x7bb10010
    ctx->pc = 0x203cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203cd0: 0x7bb00000
    ctx->pc = 0x203cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203cd4: 0x3e00008
    ctx->pc = 0x203CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203CD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203B50u: goto label_203b50;
            case 0x203BACu: goto label_203bac;
            case 0x203C1Cu: goto label_203c1c;
            case 0x203C3Cu: goto label_203c3c;
            case 0x203C5Cu: goto label_203c5c;
            case 0x203C60u: goto label_203c60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203CDCu;
}
