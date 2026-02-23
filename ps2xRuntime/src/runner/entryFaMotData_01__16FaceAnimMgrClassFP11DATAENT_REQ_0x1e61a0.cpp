#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryFaMotData_01__16FaceAnimMgrClassFP11DATAENT_REQ
// Address: 0x1e61a0 - 0x1e6254
void entryFaMotData_01__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e61a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryFaMotData_01__16FaceAnimMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e61a0u;

    // 0x1e61a0: 0x27bdffd0
    ctx->pc = 0x1e61a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e61a4: 0x7fbf0020
    ctx->pc = 0x1e61a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e61a8: 0x7fb10010
    ctx->pc = 0x1e61a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e61ac: 0x7fb00000
    ctx->pc = 0x1e61acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e61b0: 0x70a08628
    ctx->pc = 0x1e61b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e61b4: 0x8f858b30
    ctx->pc = 0x1e61b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1e61b8: 0x3c020050
    ctx->pc = 0x1e61b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e61bc: 0x244308b0
    ctx->pc = 0x1e61bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2224));
    // 0x1e61c0: 0x2402fffe
    ctx->pc = 0x1e61c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e61c4: 0x52080
    ctx->pc = 0x1e61c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e61c8: 0x642021
    ctx->pc = 0x1e61c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e61cc: 0x8c830000
    ctx->pc = 0x1e61ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e61d0: 0x14620004
    ctx->pc = 0x1E61D0u;
    {
        const bool branch_taken_0x1e61d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1E61D4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1e61d0) {
            ctx->pc = 0x1E61E4u;
            goto label_1e61e4;
        }
    }
    ctx->pc = 0x1E61D8u;
    // 0x1e61d8: 0xac800000
    ctx->pc = 0x1e61d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e61dc: 0x10000018
    ctx->pc = 0x1E61DCu;
    {
        const bool branch_taken_0x1e61dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E61E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1e61dc) {
            ctx->pc = 0x1E6240u;
            goto label_1e6240;
        }
    }
    ctx->pc = 0x1E61E4u;
label_1e61e4:
    // 0x1e61e4: 0x451021
    ctx->pc = 0x1e61e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e61e8: 0x21880
    ctx->pc = 0x1e61e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e61ec: 0x3c020027
    ctx->pc = 0x1e61ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e61f0: 0x2442b7a4
    ctx->pc = 0x1e61f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948772));
    // 0x1e61f4: 0x431021
    ctx->pc = 0x1e61f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e61f8: 0x8c510000
    ctx->pc = 0x1e61f8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e61fc: 0x1220000e
    ctx->pc = 0x1E61FCu;
    {
        const bool branch_taken_0x1e61fc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6200u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1e61fc) {
            ctx->pc = 0x1E6238u;
            goto label_1e6238;
        }
    }
    ctx->pc = 0x1E6204u;
    // 0x1e6204: 0x1112c0
    ctx->pc = 0x1e6204u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 11));
    // 0x1e6208: 0xc06878c
    ctx->pc = 0x1E6208u;
    SET_GPR_U32(ctx, 31, 0x1E6210u);
    ctx->pc = 0x1E620Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6210u; }
        else if (ctx->pc != 0x1E6210u) { ctx->pc = 0x1E6210u; }
    }
    if (ctx->pc != 0x1E6210u) { return; }
    ctx->pc = 0x1E6210u;
    // 0x1e6210: 0xaf828b34
    ctx->pc = 0x1e6210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937396), GPR_U32(ctx, 2));
    // 0x1e6214: 0x8f838b34
    ctx->pc = 0x1e6214u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x1e6218: 0x3c010050
    ctx->pc = 0x1e6218u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e621c: 0x8c240c7c
    ctx->pc = 0x1e621cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    // 0x1e6220: 0x2402ffc0
    ctx->pc = 0x1e6220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e6224: 0x72202e28
    ctx->pc = 0x1e6224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e6228: 0x2463003f
    ctx->pc = 0x1e6228u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1e622c: 0xc05aeba
    ctx->pc = 0x1E622Cu;
    SET_GPR_U32(ctx, 31, 0x1E6234u);
    ctx->pc = 0x1E6230u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6234u; }
        else if (ctx->pc != 0x1E6234u) { ctx->pc = 0x1E6234u; }
    }
    if (ctx->pc != 0x1E6234u) { return; }
    ctx->pc = 0x1E6234u;
    // 0x1e6234: 0x24020002
    ctx->pc = 0x1e6234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1e6238:
    // 0x1e6238: 0xae02000c
    ctx->pc = 0x1e6238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e623c: 0x24020001
    ctx->pc = 0x1e623cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1e6240:
    // 0x1e6240: 0x7bbf0020
    ctx->pc = 0x1e6240u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6244: 0x7bb10010
    ctx->pc = 0x1e6244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6248: 0x7bb00000
    ctx->pc = 0x1e6248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e624c: 0x3e00008
    ctx->pc = 0x1E624Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6250u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E61E4u: goto label_1e61e4;
            case 0x1E6238u: goto label_1e6238;
            case 0x1E6240u: goto label_1e6240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6254u;
}
