#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setDivNumSub__12BodyMgrClassFiiP7_BODYPTi
// Address: 0x1fb070 - 0x1fb138
void setDivNumSub__12BodyMgrClassFiiP7_BODYPTi_0x1fb070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setDivNumSub__12BodyMgrClassFiiP7_BODYPTi");


    ctx->pc = 0x1fb070u;

label_1fb070:
    // 0x1fb070: 0x27bdff80
    ctx->pc = 0x1fb070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fb074: 0x7fbf0070
    ctx->pc = 0x1fb074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1fb078: 0x7fb60060
    ctx->pc = 0x1fb078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1fb07c: 0x7fb50050
    ctx->pc = 0x1fb07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fb080: 0x7fb40040
    ctx->pc = 0x1fb080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fb084: 0x7fb30030
    ctx->pc = 0x1fb084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fb088: 0x7fb20020
    ctx->pc = 0x1fb088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fb08c: 0x7fb10010
    ctx->pc = 0x1fb08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fb090: 0x7fb00000
    ctx->pc = 0x1fb090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fb094: 0x70a0ae28
    ctx->pc = 0x1fb094u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fb098: 0x84e50020
    ctx->pc = 0x1fb098u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1fb09c: 0x7080b628
    ctx->pc = 0x1fb09cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fb0a0: 0x70c0a628
    ctx->pc = 0x1fb0a0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1fb0a4: 0x71009628
    ctx->pc = 0x1fb0a4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1fb0a8: 0x14b50002
    ctx->pc = 0x1FB0A8u;
    {
        const bool branch_taken_0x1fb0a8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 21));
        ctx->pc = 0x1FB0ACu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fb0a8) {
            ctx->pc = 0x1FB0B4u;
            goto label_1fb0b4;
        }
    }
    ctx->pc = 0x1FB0B0u;
    // 0x1fb0b0: 0x24120001
    ctx->pc = 0x1fb0b0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_1fb0b4:
    // 0x1fb0b4: 0x24030001
    ctx->pc = 0x1fb0b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb0b8: 0x16430007
    ctx->pc = 0x1FB0B8u;
    {
        const bool branch_taken_0x1fb0b8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 3));
        ctx->pc = 0x1FB0BCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fb0b8) {
            ctx->pc = 0x1FB0D8u;
            goto label_1fb0d8;
        }
    }
    ctx->pc = 0x1FB0C0u;
    // 0x1fb0c0: 0x8ec40000
    ctx->pc = 0x1fb0c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1fb0c4: 0x51900
    ctx->pc = 0x1fb0c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fb0c8: 0x651823
    ctx->pc = 0x1fb0c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fb0cc: 0x31900
    ctx->pc = 0x1fb0ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb0d0: 0x641821
    ctx->pc = 0x1fb0d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb0d4: 0xa47400c0
    ctx->pc = 0x1fb0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 192), (uint16_t)GPR_U32(ctx, 20));
label_1fb0d8:
    // 0x1fb0d8: 0x10000009
    ctx->pc = 0x1FB0D8u;
    {
        const bool branch_taken_0x1fb0d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB0DCu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fb0d8) {
            ctx->pc = 0x1FB100u;
            goto label_1fb100;
        }
    }
    ctx->pc = 0x1FB0E0u;
label_1fb0e0:
    // 0x1fb0e0: 0x8e270024
    ctx->pc = 0x1fb0e0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1fb0e4: 0x72c02628
    ctx->pc = 0x1fb0e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1fb0e8: 0x72a02e28
    ctx->pc = 0x1fb0e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1fb0ec: 0x72803628
    ctx->pc = 0x1fb0ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1fb0f0: 0xc07ec1c
    ctx->pc = 0x1FB0F0u;
    SET_GPR_U32(ctx, 31, 0x1FB0F8u);
    ctx->pc = 0x1FB0F4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB070u;
    goto label_1fb070;
    ctx->pc = 0x1FB0F8u;
label_1fb0f8:
    // 0x1fb0f8: 0x26310004
    ctx->pc = 0x1fb0f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1fb0fc: 0x26100001
    ctx->pc = 0x1fb0fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1fb100:
    // 0x1fb100: 0x86630022
    ctx->pc = 0x1fb100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x1fb104: 0x203182a
    ctx->pc = 0x1fb104u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1fb108: 0x1460fff5
    ctx->pc = 0x1FB108u;
    {
        const bool branch_taken_0x1fb108 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fb108) {
            ctx->pc = 0x1FB0E0u;
            goto label_1fb0e0;
        }
    }
    ctx->pc = 0x1FB110u;
    // 0x1fb110: 0x7bbf0070
    ctx->pc = 0x1fb110u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fb114: 0x7bb60060
    ctx->pc = 0x1fb114u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fb118: 0x7bb50050
    ctx->pc = 0x1fb118u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fb11c: 0x7bb40040
    ctx->pc = 0x1fb11cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb120: 0x7bb30030
    ctx->pc = 0x1fb120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb124: 0x7bb20020
    ctx->pc = 0x1fb124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb128: 0x7bb10010
    ctx->pc = 0x1fb128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb12c: 0x7bb00000
    ctx->pc = 0x1fb12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb130: 0x3e00008
    ctx->pc = 0x1FB130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FB070u: goto label_1fb070;
            case 0x1FB0B4u: goto label_1fb0b4;
            case 0x1FB0D8u: goto label_1fb0d8;
            case 0x1FB0E0u: goto label_1fb0e0;
            case 0x1FB0F8u: goto label_1fb0f8;
            case 0x1FB100u: goto label_1fb100;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FB138u;
}
