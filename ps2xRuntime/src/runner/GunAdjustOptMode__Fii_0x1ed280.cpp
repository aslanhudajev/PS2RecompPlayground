#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GunAdjustOptMode__Fii
// Address: 0x1ed280 - 0x1ed2d8
void GunAdjustOptMode__Fii_0x1ed280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GunAdjustOptMode__Fii");


    ctx->pc = 0x1ed280u;

    // 0x1ed280: 0x27bdfff0
    ctx->pc = 0x1ed280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed284: 0x24020001
    ctx->pc = 0x1ed284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed288: 0x10820008
    ctx->pc = 0x1ED288u;
    {
        const bool branch_taken_0x1ed288 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1ED28Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1ed288) {
            ctx->pc = 0x1ED2ACu;
            goto label_1ed2ac;
        }
    }
    ctx->pc = 0x1ED290u;
    // 0x1ed290: 0x10800003
    ctx->pc = 0x1ED290u;
    {
        const bool branch_taken_0x1ed290 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ed290) {
            ctx->pc = 0x1ED2A0u;
            goto label_1ed2a0;
        }
    }
    ctx->pc = 0x1ED298u;
    // 0x1ed298: 0x1000000c
    ctx->pc = 0x1ED298u;
    {
        const bool branch_taken_0x1ed298 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED29Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ed298) {
            ctx->pc = 0x1ED2CCu;
            goto label_1ed2cc;
        }
    }
    ctx->pc = 0x1ED2A0u;
label_1ed2a0:
    // 0x1ed2a0: 0xa7828b58
    ctx->pc = 0x1ed2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937432), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ed2a4: 0xc07aae4
    ctx->pc = 0x1ED2A4u;
    SET_GPR_U32(ctx, 31, 0x1ED2ACu);
    ctx->pc = 0x1ED2A8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EAB90u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitGunAdjust__Fi_0x1eab90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2ACu; }
        else if (ctx->pc != 0x1ED2ACu) { ctx->pc = 0x1ED2ACu; }
    }
    if (ctx->pc != 0x1ED2ACu) { return; }
    ctx->pc = 0x1ED2ACu;
label_1ed2ac:
    // 0x1ed2ac: 0xc07ab94
    ctx->pc = 0x1ED2ACu;
    SET_GPR_U32(ctx, 31, 0x1ED2B4u);
    ctx->pc = 0x1EAE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust_main__Fv_0x1eae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2B4u; }
        else if (ctx->pc != 0x1ED2B4u) { ctx->pc = 0x1ED2B4u; }
    }
    if (ctx->pc != 0x1ED2B4u) { return; }
    ctx->pc = 0x1ED2B4u;
    // 0x1ed2b4: 0x14400004
    ctx->pc = 0x1ED2B4u;
    {
        const bool branch_taken_0x1ed2b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ed2b4) {
            ctx->pc = 0x1ED2C8u;
            goto label_1ed2c8;
        }
    }
    ctx->pc = 0x1ED2BCu;
    // 0x1ed2bc: 0xa7808b58
    ctx->pc = 0x1ed2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937432), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ed2c0: 0x10000002
    ctx->pc = 0x1ED2C0u;
    {
        const bool branch_taken_0x1ed2c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED2C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ed2c0) {
            ctx->pc = 0x1ED2CCu;
            goto label_1ed2cc;
        }
    }
    ctx->pc = 0x1ED2C8u;
label_1ed2c8:
    // 0x1ed2c8: 0x70001628
    ctx->pc = 0x1ed2c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ed2cc:
    // 0x1ed2cc: 0x7bbf0000
    ctx->pc = 0x1ed2ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed2d0: 0x3e00008
    ctx->pc = 0x1ED2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED2D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED2A0u: goto label_1ed2a0;
            case 0x1ED2ACu: goto label_1ed2ac;
            case 0x1ED2C8u: goto label_1ed2c8;
            case 0x1ED2CCu: goto label_1ed2cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED2D8u;
}
