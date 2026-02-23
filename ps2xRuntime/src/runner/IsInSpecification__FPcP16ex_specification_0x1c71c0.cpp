#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IsInSpecification__FPcP16ex_specification
// Address: 0x1c71c0 - 0x1c7284
void IsInSpecification__FPcP16ex_specification_0x1c71c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IsInSpecification__FPcP16ex_specification");


    ctx->pc = 0x1c71c0u;

    // 0x1c71c0: 0x27bdffa0
    ctx->pc = 0x1c71c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c71c4: 0x7fbf0040
    ctx->pc = 0x1c71c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1c71c8: 0x7fb30030
    ctx->pc = 0x1c71c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c71cc: 0x7fb20020
    ctx->pc = 0x1c71ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c71d0: 0x7fb10010
    ctx->pc = 0x1c71d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c71d4: 0x7fb00000
    ctx->pc = 0x1c71d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c71d8: 0x8cb0000c
    ctx->pc = 0x1c71d8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1c71dc: 0x70809e28
    ctx->pc = 0x1c71dcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c71e0: 0x70a09628
    ctx->pc = 0x1c71e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c71e4: 0x1000001c
    ctx->pc = 0x1C71E4u;
    {
        const bool branch_taken_0x1c71e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C71E8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c71e4) {
            ctx->pc = 0x1C7258u;
            goto label_1c7258;
        }
    }
    ctx->pc = 0x1C71ECu;
label_1c71ec:
    // 0x1c71ec: 0x10000002
    ctx->pc = 0x1C71ECu;
    {
        const bool branch_taken_0x1c71ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C71F0u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c71ec) {
            ctx->pc = 0x1C71F8u;
            goto label_1c71f8;
        }
    }
    ctx->pc = 0x1C71F4u;
    // 0x1c71f4: 0x24630001
    ctx->pc = 0x1c71f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1c71f8:
    // 0x1c71f8: 0x30620003
    ctx->pc = 0x1c71f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x1c71fc: 0x5440fffe
    ctx->pc = 0x1C71FCu;
    {
        const bool branch_taken_0x1c71fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c71fc) {
            ctx->pc = 0x1C7200u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x1C71F8u;
            goto label_1c71f8;
        }
    }
    ctx->pc = 0x1C7204u;
    // 0x1c7204: 0x90670001
    ctx->pc = 0x1c7204u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1c7208: 0x90650002
    ctx->pc = 0x1c7208u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1c720c: 0x90660000
    ctx->pc = 0x1c720cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7210: 0x27a2005c
    ctx->pc = 0x1c7210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c7214: 0x72602628
    ctx->pc = 0x1c7214u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1c7218: 0x73a00
    ctx->pc = 0x1c7218u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x1c721c: 0x52c00
    ctx->pc = 0x1c721cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x1c7220: 0x90630003
    ctx->pc = 0x1c7220u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c7224: 0xc73025
    ctx->pc = 0x1c7224u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c7228: 0xa62825
    ctx->pc = 0x1c7228u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c722c: 0x31e00
    ctx->pc = 0x1c722cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c7230: 0x651825
    ctx->pc = 0x1c7230u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c7234: 0xac430000
    ctx->pc = 0x1c7234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c7238: 0x8fa5005c
    ctx->pc = 0x1c7238u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c723c: 0xc071d90
    ctx->pc = 0x1C723Cu;
    SET_GPR_U32(ctx, 31, 0x1C7244u);
    ctx->pc = 0x1C7240u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1C7640u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___throw_catch_compare_0x1c7640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7244u; }
        else if (ctx->pc != 0x1C7244u) { ctx->pc = 0x1C7244u; }
    }
    if (ctx->pc != 0x1C7244u) { return; }
    ctx->pc = 0x1C7244u;
    // 0x1c7244: 0x50400003
    ctx->pc = 0x1C7244u;
    {
        const bool branch_taken_0x1c7244 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c7244) {
            ctx->pc = 0x1C7248u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
            ctx->pc = 0x1C7254u;
            goto label_1c7254;
        }
    }
    ctx->pc = 0x1C724Cu;
    // 0x1c724c: 0x10000006
    ctx->pc = 0x1C724Cu;
    {
        const bool branch_taken_0x1c724c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7250u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c724c) {
            ctx->pc = 0x1C7268u;
            goto label_1c7268;
        }
    }
    ctx->pc = 0x1C7254u;
label_1c7254:
    // 0x1c7254: 0x26310001
    ctx->pc = 0x1c7254u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1c7258:
    // 0x1c7258: 0x8e420000
    ctx->pc = 0x1c7258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c725c: 0x222102b
    ctx->pc = 0x1c725cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c7260: 0x1440ffe2
    ctx->pc = 0x1C7260u;
    {
        const bool branch_taken_0x1c7260 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7264u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c7260) {
            ctx->pc = 0x1C71ECu;
            goto label_1c71ec;
        }
    }
    ctx->pc = 0x1C7268u;
label_1c7268:
    // 0x1c7268: 0x7bbf0040
    ctx->pc = 0x1c7268u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c726c: 0x7bb30030
    ctx->pc = 0x1c726cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7270: 0x7bb20020
    ctx->pc = 0x1c7270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7274: 0x7bb10010
    ctx->pc = 0x1c7274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7278: 0x7bb00000
    ctx->pc = 0x1c7278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c727c: 0x3e00008
    ctx->pc = 0x1C727Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7280u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C71ECu: goto label_1c71ec;
            case 0x1C71F8u: goto label_1c71f8;
            case 0x1C7254u: goto label_1c7254;
            case 0x1C7258u: goto label_1c7258;
            case 0x1C7268u: goto label_1c7268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7284u;
}
