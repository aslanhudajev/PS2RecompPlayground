#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: threadCtrl__11SystemTask2Fv
// Address: 0x1a3d70 - 0x1a3db8
void threadCtrl__11SystemTask2Fv_0x1a3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("threadCtrl__11SystemTask2Fv");


    ctx->pc = 0x1a3d70u;

label_1a3d70:
    // 0x1a3d70: 0x27bdffd0
    ctx->pc = 0x1a3d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3d74:
    // 0x1a3d74: 0x7fbf0020
    ctx->pc = 0x1a3d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1a3d78:
    // 0x1a3d78: 0x7fb10010
    ctx->pc = 0x1a3d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a3d7c:
    // 0x1a3d7c: 0x7fb00000
    ctx->pc = 0x1a3d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3d80:
    // 0x1a3d80: 0x8c900034
    ctx->pc = 0x1a3d80u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1a3d84:
    // 0x1a3d84: 0x70808e28
    ctx->pc = 0x1a3d84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1a3d88:
    // 0x1a3d88: 0xae300038
    ctx->pc = 0x1a3d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
label_1a3d8c:
    // 0x1a3d8c: 0x8e020000
    ctx->pc = 0x1a3d8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3d90:
    // 0x1a3d90: 0x40f809
label_1a3d94:
    if (ctx->pc == 0x1A3D94u) {
        ctx->pc = 0x1A3D94u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1A3D98u;
        goto label_1a3d98;
    }
    ctx->pc = 0x1A3D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3D98u);
        ctx->pc = 0x1A3D94u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3D70u: goto label_1a3d70;
            case 0x1A3D74u: goto label_1a3d74;
            case 0x1A3D78u: goto label_1a3d78;
            case 0x1A3D7Cu: goto label_1a3d7c;
            case 0x1A3D80u: goto label_1a3d80;
            case 0x1A3D84u: goto label_1a3d84;
            case 0x1A3D88u: goto label_1a3d88;
            case 0x1A3D8Cu: goto label_1a3d8c;
            case 0x1A3D90u: goto label_1a3d90;
            case 0x1A3D94u: goto label_1a3d94;
            case 0x1A3D98u: goto label_1a3d98;
            case 0x1A3D9Cu: goto label_1a3d9c;
            case 0x1A3DA0u: goto label_1a3da0;
            case 0x1A3DA4u: goto label_1a3da4;
            case 0x1A3DA8u: goto label_1a3da8;
            case 0x1A3DACu: goto label_1a3dac;
            case 0x1A3DB0u: goto label_1a3db0;
            case 0x1A3DB4u: goto label_1a3db4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A3D98u; }
            if (ctx->pc != 0x1A3D98u) { return; }
        }
    }
    ctx->pc = 0x1A3D98u;
label_1a3d98:
    // 0x1a3d98: 0x8e100010
    ctx->pc = 0x1a3d98u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3d9c:
    // 0x1a3d9c: 0x1600fffa
label_1a3da0:
    if (ctx->pc == 0x1A3DA0u) {
        ctx->pc = 0x1A3DA4u;
        goto label_1a3da4;
    }
    ctx->pc = 0x1A3D9Cu;
    {
        const bool branch_taken_0x1a3d9c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3d9c) {
            ctx->pc = 0x1A3D88u;
            goto label_1a3d88;
        }
    }
    ctx->pc = 0x1A3DA4u;
label_1a3da4:
    // 0x1a3da4: 0x7bbf0020
    ctx->pc = 0x1a3da4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3da8:
    // 0x1a3da8: 0x7bb10010
    ctx->pc = 0x1a3da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3dac:
    // 0x1a3dac: 0x7bb00000
    ctx->pc = 0x1a3dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3db0:
    // 0x1a3db0: 0x3e00008
label_1a3db4:
    if (ctx->pc == 0x1A3DB4u) {
        ctx->pc = 0x1A3DB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A3DB8u;
        goto label_fallthrough_0x1a3db0;
    }
    ctx->pc = 0x1A3DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3DB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3D70u: goto label_1a3d70;
            case 0x1A3D74u: goto label_1a3d74;
            case 0x1A3D78u: goto label_1a3d78;
            case 0x1A3D7Cu: goto label_1a3d7c;
            case 0x1A3D80u: goto label_1a3d80;
            case 0x1A3D84u: goto label_1a3d84;
            case 0x1A3D88u: goto label_1a3d88;
            case 0x1A3D8Cu: goto label_1a3d8c;
            case 0x1A3D90u: goto label_1a3d90;
            case 0x1A3D94u: goto label_1a3d94;
            case 0x1A3D98u: goto label_1a3d98;
            case 0x1A3D9Cu: goto label_1a3d9c;
            case 0x1A3DA0u: goto label_1a3da0;
            case 0x1A3DA4u: goto label_1a3da4;
            case 0x1A3DA8u: goto label_1a3da8;
            case 0x1A3DACu: goto label_1a3dac;
            case 0x1A3DB0u: goto label_1a3db0;
            case 0x1A3DB4u: goto label_1a3db4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a3db0:
    ctx->pc = 0x1A3DB8u;
}
