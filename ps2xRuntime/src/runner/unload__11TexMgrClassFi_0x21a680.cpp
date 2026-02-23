#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: unload__11TexMgrClassFi
// Address: 0x21a680 - 0x21a6f8
void unload__11TexMgrClassFi_0x21a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("unload__11TexMgrClassFi");


    ctx->pc = 0x21a680u;

    // 0x21a680: 0x510c0
    ctx->pc = 0x21a680u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x21a684: 0x27bdffd0
    ctx->pc = 0x21a684u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a688: 0x451023
    ctx->pc = 0x21a688u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21a68c: 0x7fbf0020
    ctx->pc = 0x21a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21a690: 0x21880
    ctx->pc = 0x21a690u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a694: 0x7fb10010
    ctx->pc = 0x21a694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a698: 0x3c020092
    ctx->pc = 0x21a698u;
    SET_GPR_U32(ctx, 2, ((uint32_t)146 << 16));
    // 0x21a69c: 0x7fb00000
    ctx->pc = 0x21a69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a6a0: 0x24424d00
    ctx->pc = 0x21a6a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19712));
    // 0x21a6a4: 0x438021
    ctx->pc = 0x21a6a4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a6a8: 0x8e050008
    ctx->pc = 0x21a6a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21a6ac: 0x14a00003
    ctx->pc = 0x21A6ACu;
    {
        const bool branch_taken_0x21a6ac = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A6B0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a6ac) {
            ctx->pc = 0x21A6BCu;
            goto label_21a6bc;
        }
    }
    ctx->pc = 0x21A6B4u;
    // 0x21a6b4: 0x1000000b
    ctx->pc = 0x21A6B4u;
    {
        const bool branch_taken_0x21a6b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A6B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x21a6b4) {
            ctx->pc = 0x21A6E4u;
            goto label_21a6e4;
        }
    }
    ctx->pc = 0x21A6BCu;
label_21a6bc:
    // 0x21a6bc: 0x8e030018
    ctx->pc = 0x21a6bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21a6c0: 0x24020001
    ctx->pc = 0x21a6c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a6c4: 0x30630001
    ctx->pc = 0x21a6c4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x21a6c8: 0x10620003
    ctx->pc = 0x21A6C8u;
    {
        const bool branch_taken_0x21a6c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21a6c8) {
            ctx->pc = 0x21A6D8u;
            goto label_21a6d8;
        }
    }
    ctx->pc = 0x21A6D0u;
    // 0x21a6d0: 0xc0868f4
    ctx->pc = 0x21A6D0u;
    SET_GPR_U32(ctx, 31, 0x21A6D8u);
    ctx->pc = 0x21A3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        free__14TexBufMgrClassFP10TexSurface_0x21a3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A6D8u; }
        else if (ctx->pc != 0x21A6D8u) { ctx->pc = 0x21A6D8u; }
    }
    if (ctx->pc != 0x21A6D8u) { return; }
    ctx->pc = 0x21A6D8u;
label_21a6d8:
    // 0x21a6d8: 0xae000008
    ctx->pc = 0x21a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x21a6dc: 0x8e220008
    ctx->pc = 0x21a6dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21a6e0: 0x0
    ctx->pc = 0x21a6e0u;
    // NOP
label_21a6e4:
    // 0x21a6e4: 0x7bbf0020
    ctx->pc = 0x21a6e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a6e8: 0x7bb10010
    ctx->pc = 0x21a6e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a6ec: 0x7bb00000
    ctx->pc = 0x21a6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a6f0: 0x3e00008
    ctx->pc = 0x21A6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A6F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A6BCu: goto label_21a6bc;
            case 0x21A6D8u: goto label_21a6d8;
            case 0x21A6E4u: goto label_21a6e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A6F8u;
}
