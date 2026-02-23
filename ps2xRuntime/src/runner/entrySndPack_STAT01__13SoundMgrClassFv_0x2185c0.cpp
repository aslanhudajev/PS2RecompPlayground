#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entrySndPack_STAT01__13SoundMgrClassFv
// Address: 0x2185c0 - 0x21866c
void entrySndPack_STAT01__13SoundMgrClassFv_0x2185c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entrySndPack_STAT01__13SoundMgrClassFv");


    ctx->pc = 0x2185c0u;

    // 0x2185c0: 0x27bdffb0
    ctx->pc = 0x2185c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2185c4: 0x7fbf0040
    ctx->pc = 0x2185c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2185c8: 0x7fb30030
    ctx->pc = 0x2185c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2185cc: 0x7fb20020
    ctx->pc = 0x2185ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2185d0: 0x7fb10010
    ctx->pc = 0x2185d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2185d4: 0x7fb00000
    ctx->pc = 0x2185d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2185d8: 0x70808628
    ctx->pc = 0x2185d8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2185dc: 0x8e050268
    ctx->pc = 0x2185dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x2185e0: 0xc06b4c0
    ctx->pc = 0x2185E0u;
    SET_GPR_U32(ctx, 31, 0x2185E8u);
    ctx->pc = 0x2185E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 524));
    ctx->pc = 0x1AD300u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndPackLoad_0x1ad300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185E8u; }
        else if (ctx->pc != 0x2185E8u) { ctx->pc = 0x2185E8u; }
    }
    if (ctx->pc != 0x2185E8u) { return; }
    ctx->pc = 0x2185E8u;
    // 0x2185e8: 0x10400003
    ctx->pc = 0x2185E8u;
    {
        const bool branch_taken_0x2185e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2185ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
        if (branch_taken_0x2185e8) {
            ctx->pc = 0x2185F8u;
            goto label_2185f8;
        }
    }
    ctx->pc = 0x2185F0u;
    // 0x2185f0: 0x10000017
    ctx->pc = 0x2185F0u;
    {
        const bool branch_taken_0x2185f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2185F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2185f0) {
            ctx->pc = 0x218650u;
            goto label_218650;
        }
    }
    ctx->pc = 0x2185F8u;
label_2185f8:
    // 0x2185f8: 0x8e040208
    ctx->pc = 0x2185f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x2185fc: 0x3c020029
    ctx->pc = 0x2185fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x218600: 0x2445af40
    ctx->pc = 0x218600u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294946624));
    // 0x218604: 0x3c020029
    ctx->pc = 0x218604u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x218608: 0x2443af42
    ctx->pc = 0x218608u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294946626));
    // 0x21860c: 0x3c020029
    ctx->pc = 0x21860cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x218610: 0x8c860008
    ctx->pc = 0x218610u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x218614: 0x2442af44
    ctx->pc = 0x218614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946628));
    // 0x218618: 0x630c0
    ctx->pc = 0x218618u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 3));
    // 0x21861c: 0xa62821
    ctx->pc = 0x21861cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x218620: 0x661821
    ctx->pc = 0x218620u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x218624: 0x461021
    ctx->pc = 0x218624u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x218628: 0x84b10000
    ctx->pc = 0x218628u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21862c: 0x84720000
    ctx->pc = 0x21862cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218630: 0x8c530000
    ctx->pc = 0x218630u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218634: 0xc05ae0c
    ctx->pc = 0x218634u;
    SET_GPR_U32(ctx, 31, 0x21863Cu);
    ctx->pc = 0x218638u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 592)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21863Cu; }
        else if (ctx->pc != 0x21863Cu) { ctx->pc = 0x21863Cu; }
    }
    if (ctx->pc != 0x21863Cu) { return; }
    ctx->pc = 0x21863Cu;
    // 0x21863c: 0x1110c0
    ctx->pc = 0x21863cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 3));
    // 0x218640: 0x501021
    ctx->pc = 0x218640u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x218644: 0xac530004
    ctx->pc = 0x218644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x218648: 0xa4520002
    ctx->pc = 0x218648u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x21864c: 0x2402ffff
    ctx->pc = 0x21864cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_218650:
    // 0x218650: 0x7bbf0040
    ctx->pc = 0x218650u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218654: 0x7bb30030
    ctx->pc = 0x218654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218658: 0x7bb20020
    ctx->pc = 0x218658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21865c: 0x7bb10010
    ctx->pc = 0x21865cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218660: 0x7bb00000
    ctx->pc = 0x218660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218664: 0x3e00008
    ctx->pc = 0x218664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218668u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2185F8u: goto label_2185f8;
            case 0x218650u: goto label_218650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21866Cu;
}
