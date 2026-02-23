#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: deleteExec__11SystemTask2Fv
// Address: 0x1a3f80 - 0x1a402c
void deleteExec__11SystemTask2Fv_0x1a3f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("deleteExec__11SystemTask2Fv");


    ctx->pc = 0x1a3f80u;

label_1a3f80:
    // 0x1a3f80: 0x27bdffd0
    ctx->pc = 0x1a3f80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3f84:
    // 0x1a3f84: 0x7fbf0020
    ctx->pc = 0x1a3f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1a3f88:
    // 0x1a3f88: 0x7fb10010
    ctx->pc = 0x1a3f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a3f8c:
    // 0x1a3f8c: 0x7fb00000
    ctx->pc = 0x1a3f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3f90:
    // 0x1a3f90: 0x8c830038
    ctx->pc = 0x1a3f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1a3f94:
    // 0x1a3f94: 0x8c820034
    ctx->pc = 0x1a3f94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1a3f98:
    // 0x1a3f98: 0x1462000d
label_1a3f9c:
    if (ctx->pc == 0x1A3F9Cu) {
        ctx->pc = 0x1A3F9Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A3FA0u;
        goto label_1a3fa0;
    }
    ctx->pc = 0x1A3F98u;
    {
        const bool branch_taken_0x1a3f98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A3F9Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a3f98) {
            ctx->pc = 0x1A3FD0u;
            goto label_1a3fd0;
        }
    }
    ctx->pc = 0x1A3FA0u;
label_1a3fa0:
    // 0x1a3fa0: 0x8c620010
    ctx->pc = 0x1a3fa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a3fa4:
    // 0x1a3fa4: 0x14400003
label_1a3fa8:
    if (ctx->pc == 0x1A3FA8u) {
        ctx->pc = 0x1A3FACu;
        goto label_1a3fac;
    }
    ctx->pc = 0x1A3FA4u;
    {
        const bool branch_taken_0x1a3fa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3fa4) {
            ctx->pc = 0x1A3FB4u;
            goto label_1a3fb4;
        }
    }
    ctx->pc = 0x1A3FACu;
label_1a3fac:
    // 0x1a3fac: 0xc06898c
label_1a3fb0:
    if (ctx->pc == 0x1A3FB0u) {
        ctx->pc = 0x1A3FB4u;
        goto label_1a3fb4;
    }
    ctx->pc = 0x1A3FACu;
    SET_GPR_U32(ctx, 31, 0x1A3FB4u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FB4u; }
        else if (ctx->pc != 0x1A3FB4u) { ctx->pc = 0x1A3FB4u; }
    }
    if (ctx->pc != 0x1A3FB4u) { return; }
    ctx->pc = 0x1A3FB4u;
label_1a3fb4:
    // 0x1a3fb4: 0x8e020038
    ctx->pc = 0x1a3fb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1a3fb8:
    // 0x1a3fb8: 0x8c420010
    ctx->pc = 0x1a3fb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1a3fbc:
    // 0x1a3fbc: 0xae020034
    ctx->pc = 0x1a3fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1a3fc0:
    // 0x1a3fc0: 0xc0687c0
label_1a3fc4:
    if (ctx->pc == 0x1A3FC4u) {
        ctx->pc = 0x1A3FC4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x1A3FC8u;
        goto label_1a3fc8;
    }
    ctx->pc = 0x1A3FC0u;
    SET_GPR_U32(ctx, 31, 0x1A3FC8u);
    ctx->pc = 0x1A3FC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FC8u; }
        else if (ctx->pc != 0x1A3FC8u) { ctx->pc = 0x1A3FC8u; }
    }
    if (ctx->pc != 0x1A3FC8u) { return; }
    ctx->pc = 0x1A3FC8u;
label_1a3fc8:
    // 0x1a3fc8: 0xc068b1c
label_1a3fcc:
    if (ctx->pc == 0x1A3FCCu) {
        ctx->pc = 0x1A3FD0u;
        goto label_1a3fd0;
    }
    ctx->pc = 0x1A3FC8u;
    SET_GPR_U32(ctx, 31, 0x1A3FD0u);
    ctx->pc = 0x1A2C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        RetryReturn_0x1a2c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FD0u; }
        else if (ctx->pc != 0x1A3FD0u) { ctx->pc = 0x1A3FD0u; }
    }
    if (ctx->pc != 0x1A3FD0u) { return; }
    ctx->pc = 0x1A3FD0u;
label_1a3fd0:
    // 0x1a3fd0: 0x8e020038
    ctx->pc = 0x1a3fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1a3fd4:
    // 0x1a3fd4: 0x10000002
label_1a3fd8:
    if (ctx->pc == 0x1A3FD8u) {
        ctx->pc = 0x1A3FD8u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x1A3FDCu;
        goto label_1a3fdc;
    }
    ctx->pc = 0x1A3FD4u;
    {
        const bool branch_taken_0x1a3fd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3FD8u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 52)));
        if (branch_taken_0x1a3fd4) {
            ctx->pc = 0x1A3FE0u;
            goto label_1a3fe0;
        }
    }
    ctx->pc = 0x1A3FDCu;
label_1a3fdc:
    // 0x1a3fdc: 0x70808e28
    ctx->pc = 0x1a3fdcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1a3fe0:
    // 0x1a3fe0: 0x8e240010
    ctx->pc = 0x1a3fe0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a3fe4:
    // 0x1a3fe4: 0x0
    ctx->pc = 0x1a3fe4u;
    // NOP
label_1a3fe8:
    // 0x1a3fe8: 0x0
    ctx->pc = 0x1a3fe8u;
    // NOP
label_1a3fec:
    // 0x1a3fec: 0x0
    ctx->pc = 0x1a3fecu;
    // NOP
label_1a3ff0:
    // 0x1a3ff0: 0x1482fffa
label_1a3ff4:
    if (ctx->pc == 0x1A3FF4u) {
        ctx->pc = 0x1A3FF8u;
        goto label_1a3ff8;
    }
    ctx->pc = 0x1A3FF0u;
    {
        const bool branch_taken_0x1a3ff0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a3ff0) {
            ctx->pc = 0x1A3FDCu;
            goto label_1a3fdc;
        }
    }
    ctx->pc = 0x1A3FF8u;
label_1a3ff8:
    // 0x1a3ff8: 0x8c820010
    ctx->pc = 0x1a3ff8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1a3ffc:
    // 0x1a3ffc: 0xc0687c0
label_1a4000:
    if (ctx->pc == 0x1A4000u) {
        ctx->pc = 0x1A4000u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1A4004u;
        goto label_1a4004;
    }
    ctx->pc = 0x1A3FFCu;
    SET_GPR_U32(ctx, 31, 0x1A4004u);
    ctx->pc = 0x1A4000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4004u; }
        else if (ctx->pc != 0x1A4004u) { ctx->pc = 0x1A4004u; }
    }
    if (ctx->pc != 0x1A4004u) { return; }
    ctx->pc = 0x1A4004u;
label_1a4004:
    // 0x1a4004: 0xae110038
    ctx->pc = 0x1a4004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
label_1a4008:
    // 0x1a4008: 0x8e190030
    ctx->pc = 0x1a4008u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1a400c:
    // 0x1a400c: 0x8f39000c
    ctx->pc = 0x1a400cu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1a4010:
    // 0x1a4010: 0x320f809
label_1a4014:
    if (ctx->pc == 0x1A4014u) {
        ctx->pc = 0x1A4014u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A4018u;
        goto label_1a4018;
    }
    ctx->pc = 0x1A4010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4018u);
        ctx->pc = 0x1A4014u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3F80u: goto label_1a3f80;
            case 0x1A3F84u: goto label_1a3f84;
            case 0x1A3F88u: goto label_1a3f88;
            case 0x1A3F8Cu: goto label_1a3f8c;
            case 0x1A3F90u: goto label_1a3f90;
            case 0x1A3F94u: goto label_1a3f94;
            case 0x1A3F98u: goto label_1a3f98;
            case 0x1A3F9Cu: goto label_1a3f9c;
            case 0x1A3FA0u: goto label_1a3fa0;
            case 0x1A3FA4u: goto label_1a3fa4;
            case 0x1A3FA8u: goto label_1a3fa8;
            case 0x1A3FACu: goto label_1a3fac;
            case 0x1A3FB0u: goto label_1a3fb0;
            case 0x1A3FB4u: goto label_1a3fb4;
            case 0x1A3FB8u: goto label_1a3fb8;
            case 0x1A3FBCu: goto label_1a3fbc;
            case 0x1A3FC0u: goto label_1a3fc0;
            case 0x1A3FC4u: goto label_1a3fc4;
            case 0x1A3FC8u: goto label_1a3fc8;
            case 0x1A3FCCu: goto label_1a3fcc;
            case 0x1A3FD0u: goto label_1a3fd0;
            case 0x1A3FD4u: goto label_1a3fd4;
            case 0x1A3FD8u: goto label_1a3fd8;
            case 0x1A3FDCu: goto label_1a3fdc;
            case 0x1A3FE0u: goto label_1a3fe0;
            case 0x1A3FE4u: goto label_1a3fe4;
            case 0x1A3FE8u: goto label_1a3fe8;
            case 0x1A3FECu: goto label_1a3fec;
            case 0x1A3FF0u: goto label_1a3ff0;
            case 0x1A3FF4u: goto label_1a3ff4;
            case 0x1A3FF8u: goto label_1a3ff8;
            case 0x1A3FFCu: goto label_1a3ffc;
            case 0x1A4000u: goto label_1a4000;
            case 0x1A4004u: goto label_1a4004;
            case 0x1A4008u: goto label_1a4008;
            case 0x1A400Cu: goto label_1a400c;
            case 0x1A4010u: goto label_1a4010;
            case 0x1A4014u: goto label_1a4014;
            case 0x1A4018u: goto label_1a4018;
            case 0x1A401Cu: goto label_1a401c;
            case 0x1A4020u: goto label_1a4020;
            case 0x1A4024u: goto label_1a4024;
            case 0x1A4028u: goto label_1a4028;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4018u; }
            if (ctx->pc != 0x1A4018u) { return; }
        }
    }
    ctx->pc = 0x1A4018u;
label_1a4018:
    // 0x1a4018: 0x7bbf0020
    ctx->pc = 0x1a4018u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a401c:
    // 0x1a401c: 0x7bb10010
    ctx->pc = 0x1a401cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4020:
    // 0x1a4020: 0x7bb00000
    ctx->pc = 0x1a4020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4024:
    // 0x1a4024: 0x3e00008
label_1a4028:
    if (ctx->pc == 0x1A4028u) {
        ctx->pc = 0x1A4028u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A402Cu;
        goto label_fallthrough_0x1a4024;
    }
    ctx->pc = 0x1A4024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4028u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3F80u: goto label_1a3f80;
            case 0x1A3F84u: goto label_1a3f84;
            case 0x1A3F88u: goto label_1a3f88;
            case 0x1A3F8Cu: goto label_1a3f8c;
            case 0x1A3F90u: goto label_1a3f90;
            case 0x1A3F94u: goto label_1a3f94;
            case 0x1A3F98u: goto label_1a3f98;
            case 0x1A3F9Cu: goto label_1a3f9c;
            case 0x1A3FA0u: goto label_1a3fa0;
            case 0x1A3FA4u: goto label_1a3fa4;
            case 0x1A3FA8u: goto label_1a3fa8;
            case 0x1A3FACu: goto label_1a3fac;
            case 0x1A3FB0u: goto label_1a3fb0;
            case 0x1A3FB4u: goto label_1a3fb4;
            case 0x1A3FB8u: goto label_1a3fb8;
            case 0x1A3FBCu: goto label_1a3fbc;
            case 0x1A3FC0u: goto label_1a3fc0;
            case 0x1A3FC4u: goto label_1a3fc4;
            case 0x1A3FC8u: goto label_1a3fc8;
            case 0x1A3FCCu: goto label_1a3fcc;
            case 0x1A3FD0u: goto label_1a3fd0;
            case 0x1A3FD4u: goto label_1a3fd4;
            case 0x1A3FD8u: goto label_1a3fd8;
            case 0x1A3FDCu: goto label_1a3fdc;
            case 0x1A3FE0u: goto label_1a3fe0;
            case 0x1A3FE4u: goto label_1a3fe4;
            case 0x1A3FE8u: goto label_1a3fe8;
            case 0x1A3FECu: goto label_1a3fec;
            case 0x1A3FF0u: goto label_1a3ff0;
            case 0x1A3FF4u: goto label_1a3ff4;
            case 0x1A3FF8u: goto label_1a3ff8;
            case 0x1A3FFCu: goto label_1a3ffc;
            case 0x1A4000u: goto label_1a4000;
            case 0x1A4004u: goto label_1a4004;
            case 0x1A4008u: goto label_1a4008;
            case 0x1A400Cu: goto label_1a400c;
            case 0x1A4010u: goto label_1a4010;
            case 0x1A4014u: goto label_1a4014;
            case 0x1A4018u: goto label_1a4018;
            case 0x1A401Cu: goto label_1a401c;
            case 0x1A4020u: goto label_1a4020;
            case 0x1A4024u: goto label_1a4024;
            case 0x1A4028u: goto label_1a4028;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a4024:
    ctx->pc = 0x1A402Cu;
}
