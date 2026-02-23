#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust_W2GC1__Fi
// Address: 0x1ec2a0 - 0x1ec304
void gun_adjust_W2GC1__Fi_0x1ec2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust_W2GC1__Fi");


    ctx->pc = 0x1ec2a0u;

    // 0x1ec2a0: 0x27bdffd0
    ctx->pc = 0x1ec2a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec2a4: 0x7fbf0020
    ctx->pc = 0x1ec2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ec2a8: 0x7fb10010
    ctx->pc = 0x1ec2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec2ac: 0x7fb00000
    ctx->pc = 0x1ec2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec2b0: 0x24020001
    ctx->pc = 0x1ec2b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec2b4: 0x70808e28
    ctx->pc = 0x1ec2b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ec2b8: 0xc07b114
    ctx->pc = 0x1EC2B8u;
    SET_GPR_U32(ctx, 31, 0x1EC2C0u);
    ctx->pc = 0x1EC2BCu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 2));
    ctx->pc = 0x1EC450u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_wideGC1__Fi_0x1ec450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2C0u; }
        else if (ctx->pc != 0x1EC2C0u) { ctx->pc = 0x1EC2C0u; }
    }
    if (ctx->pc != 0x1EC2C0u) { return; }
    ctx->pc = 0x1EC2C0u;
    // 0x1ec2c0: 0x1040000a
    ctx->pc = 0x1EC2C0u;
    {
        const bool branch_taken_0x1ec2c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC2C4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ec2c0) {
            ctx->pc = 0x1EC2ECu;
            goto label_1ec2ec;
        }
    }
    ctx->pc = 0x1EC2C8u;
    // 0x1ec2c8: 0x8f858de4
    ctx->pc = 0x1ec2c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938084)));
    // 0x1ec2cc: 0x8f868de8
    ctx->pc = 0x1ec2ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1ec2d0: 0xc07b1cc
    ctx->pc = 0x1EC2D0u;
    SET_GPR_U32(ctx, 31, 0x1EC2D8u);
    ctx->pc = 0x1EC2D4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC730u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustXGC1__Fiii_0x1ec730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2D8u; }
        else if (ctx->pc != 0x1EC2D8u) { ctx->pc = 0x1EC2D8u; }
    }
    if (ctx->pc != 0x1EC2D8u) { return; }
    ctx->pc = 0x1EC2D8u;
    // 0x1ec2d8: 0x50400004
    ctx->pc = 0x1EC2D8u;
    {
        const bool branch_taken_0x1ec2d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec2d8) {
            ctx->pc = 0x1EC2DCu;
            SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1EC2ECu;
            goto label_1ec2ec;
        }
    }
    ctx->pc = 0x1EC2E0u;
    // 0x1ec2e0: 0x8f858de8
    ctx->pc = 0x1ec2e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1ec2e4: 0xc07b1f8
    ctx->pc = 0x1EC2E4u;
    SET_GPR_U32(ctx, 31, 0x1EC2ECu);
    ctx->pc = 0x1EC2E8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustYGC1__Fii_0x1ec7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2ECu; }
        else if (ctx->pc != 0x1EC2ECu) { ctx->pc = 0x1EC2ECu; }
    }
    if (ctx->pc != 0x1EC2ECu) { return; }
    ctx->pc = 0x1EC2ECu;
label_1ec2ec:
    // 0x1ec2ec: 0x72001628
    ctx->pc = 0x1ec2ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ec2f0: 0x7bbf0020
    ctx->pc = 0x1ec2f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec2f4: 0x7bb10010
    ctx->pc = 0x1ec2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec2f8: 0x7bb00000
    ctx->pc = 0x1ec2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec2fc: 0x3e00008
    ctx->pc = 0x1EC2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC300u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC2ECu: goto label_1ec2ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC304u;
}
