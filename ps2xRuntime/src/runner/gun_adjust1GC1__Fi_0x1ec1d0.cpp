#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust1GC1__Fi
// Address: 0x1ec1d0 - 0x1ec22c
void gun_adjust1GC1__Fi_0x1ec1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust1GC1__Fi");


    ctx->pc = 0x1ec1d0u;

    // 0x1ec1d0: 0x27bdffd0
    ctx->pc = 0x1ec1d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec1d4: 0x7fbf0020
    ctx->pc = 0x1ec1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ec1d8: 0x7fb10010
    ctx->pc = 0x1ec1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec1dc: 0x70808e28
    ctx->pc = 0x1ec1dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ec1e0: 0xc07b0d4
    ctx->pc = 0x1EC1E0u;
    SET_GPR_U32(ctx, 31, 0x1EC1E8u);
    ctx->pc = 0x1EC1E4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1EC350u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_centerGC1__Fi_0x1ec350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC1E8u; }
        else if (ctx->pc != 0x1EC1E8u) { ctx->pc = 0x1EC1E8u; }
    }
    if (ctx->pc != 0x1EC1E8u) { return; }
    ctx->pc = 0x1EC1E8u;
    // 0x1ec1e8: 0x1040000a
    ctx->pc = 0x1EC1E8u;
    {
        const bool branch_taken_0x1ec1e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC1ECu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ec1e8) {
            ctx->pc = 0x1EC214u;
            goto label_1ec214;
        }
    }
    ctx->pc = 0x1EC1F0u;
    // 0x1ec1f0: 0x8f858de4
    ctx->pc = 0x1ec1f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938084)));
    // 0x1ec1f4: 0x8f868de8
    ctx->pc = 0x1ec1f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1ec1f8: 0xc07b1cc
    ctx->pc = 0x1EC1F8u;
    SET_GPR_U32(ctx, 31, 0x1EC200u);
    ctx->pc = 0x1EC1FCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC730u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustXGC1__Fiii_0x1ec730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC200u; }
        else if (ctx->pc != 0x1EC200u) { ctx->pc = 0x1EC200u; }
    }
    if (ctx->pc != 0x1EC200u) { return; }
    ctx->pc = 0x1EC200u;
    // 0x1ec200: 0x50400004
    ctx->pc = 0x1EC200u;
    {
        const bool branch_taken_0x1ec200 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec200) {
            ctx->pc = 0x1EC204u;
            SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1EC214u;
            goto label_1ec214;
        }
    }
    ctx->pc = 0x1EC208u;
    // 0x1ec208: 0x8f858de8
    ctx->pc = 0x1ec208u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1ec20c: 0xc07b1f8
    ctx->pc = 0x1EC20Cu;
    SET_GPR_U32(ctx, 31, 0x1EC214u);
    ctx->pc = 0x1EC210u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustYGC1__Fii_0x1ec7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC214u; }
        else if (ctx->pc != 0x1EC214u) { ctx->pc = 0x1EC214u; }
    }
    if (ctx->pc != 0x1EC214u) { return; }
    ctx->pc = 0x1EC214u;
label_1ec214:
    // 0x1ec214: 0x72001628
    ctx->pc = 0x1ec214u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ec218: 0x7bbf0020
    ctx->pc = 0x1ec218u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec21c: 0x7bb10010
    ctx->pc = 0x1ec21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec220: 0x7bb00000
    ctx->pc = 0x1ec220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec224: 0x3e00008
    ctx->pc = 0x1EC224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC228u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC214u: goto label_1ec214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC22Cu;
}
