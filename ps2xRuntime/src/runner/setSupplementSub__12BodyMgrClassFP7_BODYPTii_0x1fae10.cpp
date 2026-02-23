#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setSupplementSub__12BodyMgrClassFP7_BODYPTii
// Address: 0x1fae10 - 0x1faf0c
void setSupplementSub__12BodyMgrClassFP7_BODYPTii_0x1fae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setSupplementSub__12BodyMgrClassFP7_BODYPTii");


    ctx->pc = 0x1fae10u;

label_1fae10:
    // 0x1fae10: 0x27bdff90
    ctx->pc = 0x1fae10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fae14: 0x7fbf0060
    ctx->pc = 0x1fae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1fae18: 0x7fb50050
    ctx->pc = 0x1fae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fae1c: 0x7fb40040
    ctx->pc = 0x1fae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fae20: 0x7fb30030
    ctx->pc = 0x1fae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fae24: 0x7fb20020
    ctx->pc = 0x1fae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fae28: 0x7fb10010
    ctx->pc = 0x1fae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fae2c: 0x7fb00000
    ctx->pc = 0x1fae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fae30: 0x70a09628
    ctx->pc = 0x1fae30u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fae34: 0x8c830000
    ctx->pc = 0x1fae34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fae38: 0x84a50020
    ctx->pc = 0x1fae38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1fae3c: 0x70809e28
    ctx->pc = 0x1fae3cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fae40: 0x70c08e28
    ctx->pc = 0x1fae40u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1fae44: 0x52100
    ctx->pc = 0x1fae44u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fae48: 0x852023
    ctx->pc = 0x1fae48u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fae4c: 0x42100
    ctx->pc = 0x1fae4cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fae50: 0x643021
    ctx->pc = 0x1fae50u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fae54: 0x84c300c0
    ctx->pc = 0x1fae54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x1fae58: 0x14710015
    ctx->pc = 0x1FAE58u;
    {
        const bool branch_taken_0x1fae58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 17));
        ctx->pc = 0x1FAE5Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fae58) {
            ctx->pc = 0x1FAEB0u;
            goto label_1faeb0;
        }
    }
    ctx->pc = 0x1FAE60u;
    // 0x1fae60: 0x8cc40004
    ctx->pc = 0x1fae60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1fae64: 0x101880
    ctx->pc = 0x1fae64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fae68: 0x731821
    ctx->pc = 0x1fae68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1fae6c: 0xacc40010
    ctx->pc = 0x1fae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x1fae70: 0x8cc40008
    ctx->pc = 0x1fae70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fae74: 0xacc40014
    ctx->pc = 0x1fae74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
    // 0x1fae78: 0x8cc4000c
    ctx->pc = 0x1fae78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fae7c: 0xacc40018
    ctx->pc = 0x1fae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 4));
    // 0x1fae80: 0x86450020
    ctx->pc = 0x1fae80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1fae84: 0x8c630064
    ctx->pc = 0x1fae84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1fae88: 0x52040
    ctx->pc = 0x1fae88u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fae8c: 0x852021
    ctx->pc = 0x1fae8cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fae90: 0x42040
    ctx->pc = 0x1fae90u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1fae94: 0x642021
    ctx->pc = 0x1fae94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fae98: 0x8483000c
    ctx->pc = 0x1fae98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fae9c: 0xacc3001c
    ctx->pc = 0x1fae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1faea0: 0x8483000e
    ctx->pc = 0x1faea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1faea4: 0xacc30020
    ctx->pc = 0x1faea4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1faea8: 0x84830010
    ctx->pc = 0x1faea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1faeac: 0xacc30024
    ctx->pc = 0x1faeacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
label_1faeb0:
    // 0x1faeb0: 0x7000a628
    ctx->pc = 0x1faeb0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1faeb4: 0x10000008
    ctx->pc = 0x1FAEB4u;
    {
        const bool branch_taken_0x1faeb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FAEB8u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1faeb4) {
            ctx->pc = 0x1FAED8u;
            goto label_1faed8;
        }
    }
    ctx->pc = 0x1FAEBCu;
label_1faebc:
    // 0x1faebc: 0x8ea50024
    ctx->pc = 0x1faebcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x1faec0: 0x72602628
    ctx->pc = 0x1faec0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1faec4: 0x72203628
    ctx->pc = 0x1faec4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1faec8: 0xc07eb84
    ctx->pc = 0x1FAEC8u;
    SET_GPR_U32(ctx, 31, 0x1FAED0u);
    ctx->pc = 0x1FAECCu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FAE10u;
    goto label_1fae10;
    ctx->pc = 0x1FAED0u;
label_1faed0:
    // 0x1faed0: 0x26b50004
    ctx->pc = 0x1faed0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4));
    // 0x1faed4: 0x26940001
    ctx->pc = 0x1faed4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_1faed8:
    // 0x1faed8: 0x86430022
    ctx->pc = 0x1faed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x1faedc: 0x283182a
    ctx->pc = 0x1faedcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x1faee0: 0x1460fff6
    ctx->pc = 0x1FAEE0u;
    {
        const bool branch_taken_0x1faee0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1faee0) {
            ctx->pc = 0x1FAEBCu;
            goto label_1faebc;
        }
    }
    ctx->pc = 0x1FAEE8u;
    // 0x1faee8: 0x7bbf0060
    ctx->pc = 0x1faee8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1faeec: 0x7bb50050
    ctx->pc = 0x1faeecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1faef0: 0x7bb40040
    ctx->pc = 0x1faef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1faef4: 0x7bb30030
    ctx->pc = 0x1faef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faef8: 0x7bb20020
    ctx->pc = 0x1faef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1faefc: 0x7bb10010
    ctx->pc = 0x1faefcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faf00: 0x7bb00000
    ctx->pc = 0x1faf00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faf04: 0x3e00008
    ctx->pc = 0x1FAF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAF08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FAE10u: goto label_1fae10;
            case 0x1FAEB0u: goto label_1faeb0;
            case 0x1FAEBCu: goto label_1faebc;
            case 0x1FAED0u: goto label_1faed0;
            case 0x1FAED8u: goto label_1faed8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FAF0Cu;
}
