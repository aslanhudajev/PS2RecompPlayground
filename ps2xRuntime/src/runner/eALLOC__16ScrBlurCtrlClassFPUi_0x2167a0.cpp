#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eALLOC__16ScrBlurCtrlClassFPUi
// Address: 0x2167a0 - 0x216818
void eALLOC__16ScrBlurCtrlClassFPUi_0x2167a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eALLOC__16ScrBlurCtrlClassFPUi");


    ctx->pc = 0x2167a0u;

    // 0x2167a0: 0x27bdffd0
    ctx->pc = 0x2167a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2167a4: 0x7fbf0020
    ctx->pc = 0x2167a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2167a8: 0x7fb10010
    ctx->pc = 0x2167a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2167ac: 0x7fb00000
    ctx->pc = 0x2167acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2167b0: 0x8ca20008
    ctx->pc = 0x2167b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2167b4: 0x70808e28
    ctx->pc = 0x2167b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2167b8: 0x1040000b
    ctx->pc = 0x2167B8u;
    {
        const bool branch_taken_0x2167b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2167BCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 12));
        if (branch_taken_0x2167b8) {
            ctx->pc = 0x2167E8u;
            goto label_2167e8;
        }
    }
    ctx->pc = 0x2167C0u;
    // 0x2167c0: 0x8e220014
    ctx->pc = 0x2167c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2167c4: 0x1440000f
    ctx->pc = 0x2167C4u;
    {
        const bool branch_taken_0x2167c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2167C8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2167c4) {
            ctx->pc = 0x216804u;
            goto label_216804;
        }
    }
    ctx->pc = 0x2167CCu;
    // 0x2167cc: 0x3c020050
    ctx->pc = 0x2167ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2167d0: 0x2444e540
    ctx->pc = 0x2167d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x2167d4: 0x3c050005
    ctx->pc = 0x2167d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)5 << 16));
    // 0x2167d8: 0xc086850
    ctx->pc = 0x2167D8u;
    SET_GPR_U32(ctx, 31, 0x2167E0u);
    ctx->pc = 0x2167DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x21A140u;
    {
        const uint32_t __entryPc = ctx->pc;
        alloc__14TexBufMgrClassFii_0x21a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2167E0u; }
        else if (ctx->pc != 0x2167E0u) { ctx->pc = 0x2167E0u; }
    }
    if (ctx->pc != 0x2167E0u) { return; }
    ctx->pc = 0x2167E0u;
    // 0x2167e0: 0x10000007
    ctx->pc = 0x2167E0u;
    {
        const bool branch_taken_0x2167e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2167E4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2167e0) {
            ctx->pc = 0x216800u;
            goto label_216800;
        }
    }
    ctx->pc = 0x2167E8u;
label_2167e8:
    // 0x2167e8: 0x8e250014
    ctx->pc = 0x2167e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2167ec: 0x10a00004
    ctx->pc = 0x2167ECu;
    {
        const bool branch_taken_0x2167ec = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2167F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x2167ec) {
            ctx->pc = 0x216800u;
            goto label_216800;
        }
    }
    ctx->pc = 0x2167F4u;
    // 0x2167f4: 0xc0868f4
    ctx->pc = 0x2167F4u;
    SET_GPR_U32(ctx, 31, 0x2167FCu);
    ctx->pc = 0x2167F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    ctx->pc = 0x21A3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        free__14TexBufMgrClassFP10TexSurface_0x21a3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2167FCu; }
        else if (ctx->pc != 0x2167FCu) { ctx->pc = 0x2167FCu; }
    }
    if (ctx->pc != 0x2167FCu) { return; }
    ctx->pc = 0x2167FCu;
    // 0x2167fc: 0xae200014
    ctx->pc = 0x2167fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_216800:
    // 0x216800: 0x72001628
    ctx->pc = 0x216800u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_216804:
    // 0x216804: 0x7bbf0020
    ctx->pc = 0x216804u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216808: 0x7bb10010
    ctx->pc = 0x216808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21680c: 0x7bb00000
    ctx->pc = 0x21680cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216810: 0x3e00008
    ctx->pc = 0x216810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216814u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2167E8u: goto label_2167e8;
            case 0x216800u: goto label_216800;
            case 0x216804u: goto label_216804;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216818u;
}
