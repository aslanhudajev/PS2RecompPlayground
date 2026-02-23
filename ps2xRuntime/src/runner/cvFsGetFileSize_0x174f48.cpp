#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsGetFileSize
// Address: 0x174f48 - 0x174ff8
void cvFsGetFileSize_0x174f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsGetFileSize");


    ctx->pc = 0x174f48u;

label_174f48:
    // 0x174f48: 0x27bdfd70
    ctx->pc = 0x174f48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966640));
label_174f4c:
    // 0x174f4c: 0xffb00260
    ctx->pc = 0x174f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_174f50:
    // 0x174f50: 0xffbf0280
    ctx->pc = 0x174f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_174f54:
    // 0x174f54: 0x80802d
    ctx->pc = 0x174f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174f58:
    // 0x174f58: 0x16000004
label_174f5c:
    if (ctx->pc == 0x174F5Cu) {
        ctx->pc = 0x174F5Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
        ctx->pc = 0x174F60u;
        goto label_174f60;
    }
    ctx->pc = 0x174F58u;
    {
        const bool branch_taken_0x174f58 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x174F5Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
        if (branch_taken_0x174f58) {
            ctx->pc = 0x174F6Cu;
            goto label_174f6c;
        }
    }
    ctx->pc = 0x174F60u;
label_174f60:
    // 0x174f60: 0x3c04002c
    ctx->pc = 0x174f60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174f64:
    // 0x174f64: 0x10000019
label_174f68:
    if (ctx->pc == 0x174F68u) {
        ctx->pc = 0x174F68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944592));
        ctx->pc = 0x174F6Cu;
        goto label_174f6c;
    }
    ctx->pc = 0x174F64u;
    {
        const bool branch_taken_0x174f64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174F68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944592));
        if (branch_taken_0x174f64) {
            ctx->pc = 0x174FCCu;
            goto label_174fcc;
        }
    }
    ctx->pc = 0x174F6Cu;
label_174f6c:
    // 0x174f6c: 0x27b10130
    ctx->pc = 0x174f6cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 304));
label_174f70:
    // 0x174f70: 0x3a0202d
    ctx->pc = 0x174f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_174f74:
    // 0x174f74: 0x220282d
    ctx->pc = 0x174f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_174f78:
    // 0x174f78: 0xc05d296
label_174f7c:
    if (ctx->pc == 0x174F7Cu) {
        ctx->pc = 0x174F7Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174F80u;
        goto label_174f80;
    }
    ctx->pc = 0x174F78u;
    SET_GPR_U32(ctx, 31, 0x174F80u);
    ctx->pc = 0x174F7Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevName_0x174a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F80u; }
        else if (ctx->pc != 0x174F80u) { ctx->pc = 0x174F80u; }
    }
    if (ctx->pc != 0x174F80u) { return; }
    ctx->pc = 0x174F80u;
label_174f80:
    // 0x174f80: 0x83a20130
    ctx->pc = 0x174f80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_174f84:
    // 0x174f84: 0x14400004
label_174f88:
    if (ctx->pc == 0x174F88u) {
        ctx->pc = 0x174F88u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174F8Cu;
        goto label_174f8c;
    }
    ctx->pc = 0x174F84u;
    {
        const bool branch_taken_0x174f84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174F88u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174f84) {
            ctx->pc = 0x174F98u;
            goto label_174f98;
        }
    }
    ctx->pc = 0x174F8Cu;
label_174f8c:
    // 0x174f8c: 0x3c04002c
    ctx->pc = 0x174f8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174f90:
    // 0x174f90: 0x1000000e
label_174f94:
    if (ctx->pc == 0x174F94u) {
        ctx->pc = 0x174F94u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944592));
        ctx->pc = 0x174F98u;
        goto label_174f98;
    }
    ctx->pc = 0x174F90u;
    {
        const bool branch_taken_0x174f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174F94u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944592));
        if (branch_taken_0x174f90) {
            ctx->pc = 0x174FCCu;
            goto label_174fcc;
        }
    }
    ctx->pc = 0x174F98u;
label_174f98:
    // 0x174f98: 0x3a0202d
    ctx->pc = 0x174f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_174f9c:
    // 0x174f9c: 0xc05d208
label_174fa0:
    if (ctx->pc == 0x174FA0u) {
        ctx->pc = 0x174FA0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174FA4u;
        goto label_174fa4;
    }
    ctx->pc = 0x174F9Cu;
    SET_GPR_U32(ctx, 31, 0x174FA4u);
    ctx->pc = 0x174FA0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174820u;
    {
        const uint32_t __entryPc = ctx->pc;
        variousProc_0x174820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FA4u; }
        else if (ctx->pc != 0x174FA4u) { ctx->pc = 0x174FA4u; }
    }
    if (ctx->pc != 0x174FA4u) { return; }
    ctx->pc = 0x174FA4u;
label_174fa4:
    // 0x174fa4: 0x40802d
    ctx->pc = 0x174fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174fa8:
    // 0x174fa8: 0x56000005
label_174fac:
    if (ctx->pc == 0x174FACu) {
        ctx->pc = 0x174FACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x174FB0u;
        goto label_174fb0;
    }
    ctx->pc = 0x174FA8u;
    {
        const bool branch_taken_0x174fa8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x174fa8) {
            ctx->pc = 0x174FACu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x174FC0u;
            goto label_174fc0;
        }
    }
    ctx->pc = 0x174FB0u;
label_174fb0:
    // 0x174fb0: 0x3c04002c
    ctx->pc = 0x174fb0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174fb4:
    // 0x174fb4: 0xc05d076
label_174fb8:
    if (ctx->pc == 0x174FB8u) {
        ctx->pc = 0x174FB8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944672));
        ctx->pc = 0x174FBCu;
        goto label_174fbc;
    }
    ctx->pc = 0x174FB4u;
    SET_GPR_U32(ctx, 31, 0x174FBCu);
    ctx->pc = 0x174FB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944672));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FBCu; }
        else if (ctx->pc != 0x174FBCu) { ctx->pc = 0x174FBCu; }
    }
    if (ctx->pc != 0x174FBCu) { return; }
    ctx->pc = 0x174FBCu;
label_174fbc:
    // 0x174fbc: 0x8e020008
    ctx->pc = 0x174fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_174fc0:
    // 0x174fc0: 0x14400006
label_174fc4:
    if (ctx->pc == 0x174FC4u) {
        ctx->pc = 0x174FC4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x174FC8u;
        goto label_174fc8;
    }
    ctx->pc = 0x174FC0u;
    {
        const bool branch_taken_0x174fc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174FC4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x174fc0) {
            ctx->pc = 0x174FDCu;
            goto label_174fdc;
        }
    }
    ctx->pc = 0x174FC8u;
label_174fc8:
    // 0x174fc8: 0x2484a7c8
    ctx->pc = 0x174fc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944712));
label_174fcc:
    // 0x174fcc: 0xc05d076
label_174fd0:
    if (ctx->pc == 0x174FD0u) {
        ctx->pc = 0x174FD4u;
        goto label_174fd4;
    }
    ctx->pc = 0x174FCCu;
    SET_GPR_U32(ctx, 31, 0x174FD4u);
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FD4u; }
        else if (ctx->pc != 0x174FD4u) { ctx->pc = 0x174FD4u; }
    }
    if (ctx->pc != 0x174FD4u) { return; }
    ctx->pc = 0x174FD4u;
label_174fd4:
    // 0x174fd4: 0x10000003
label_174fd8:
    if (ctx->pc == 0x174FD8u) {
        ctx->pc = 0x174FD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174FDCu;
        goto label_174fdc;
    }
    ctx->pc = 0x174FD4u;
    {
        const bool branch_taken_0x174fd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174FD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174fd4) {
            ctx->pc = 0x174FE4u;
            goto label_174fe4;
        }
    }
    ctx->pc = 0x174FDCu;
label_174fdc:
    // 0x174fdc: 0x40f809
label_174fe0:
    if (ctx->pc == 0x174FE0u) {
        ctx->pc = 0x174FE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174FE4u;
        goto label_174fe4;
    }
    ctx->pc = 0x174FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174FE4u);
        ctx->pc = 0x174FE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174F48u: goto label_174f48;
            case 0x174F4Cu: goto label_174f4c;
            case 0x174F50u: goto label_174f50;
            case 0x174F54u: goto label_174f54;
            case 0x174F58u: goto label_174f58;
            case 0x174F5Cu: goto label_174f5c;
            case 0x174F60u: goto label_174f60;
            case 0x174F64u: goto label_174f64;
            case 0x174F68u: goto label_174f68;
            case 0x174F6Cu: goto label_174f6c;
            case 0x174F70u: goto label_174f70;
            case 0x174F74u: goto label_174f74;
            case 0x174F78u: goto label_174f78;
            case 0x174F7Cu: goto label_174f7c;
            case 0x174F80u: goto label_174f80;
            case 0x174F84u: goto label_174f84;
            case 0x174F88u: goto label_174f88;
            case 0x174F8Cu: goto label_174f8c;
            case 0x174F90u: goto label_174f90;
            case 0x174F94u: goto label_174f94;
            case 0x174F98u: goto label_174f98;
            case 0x174F9Cu: goto label_174f9c;
            case 0x174FA0u: goto label_174fa0;
            case 0x174FA4u: goto label_174fa4;
            case 0x174FA8u: goto label_174fa8;
            case 0x174FACu: goto label_174fac;
            case 0x174FB0u: goto label_174fb0;
            case 0x174FB4u: goto label_174fb4;
            case 0x174FB8u: goto label_174fb8;
            case 0x174FBCu: goto label_174fbc;
            case 0x174FC0u: goto label_174fc0;
            case 0x174FC4u: goto label_174fc4;
            case 0x174FC8u: goto label_174fc8;
            case 0x174FCCu: goto label_174fcc;
            case 0x174FD0u: goto label_174fd0;
            case 0x174FD4u: goto label_174fd4;
            case 0x174FD8u: goto label_174fd8;
            case 0x174FDCu: goto label_174fdc;
            case 0x174FE0u: goto label_174fe0;
            case 0x174FE4u: goto label_174fe4;
            case 0x174FE8u: goto label_174fe8;
            case 0x174FECu: goto label_174fec;
            case 0x174FF0u: goto label_174ff0;
            case 0x174FF4u: goto label_174ff4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174FE4u; }
            if (ctx->pc != 0x174FE4u) { return; }
        }
    }
    ctx->pc = 0x174FE4u;
label_174fe4:
    // 0x174fe4: 0xdfbf0280
    ctx->pc = 0x174fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_174fe8:
    // 0x174fe8: 0xdfb10270
    ctx->pc = 0x174fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_174fec:
    // 0x174fec: 0xdfb00260
    ctx->pc = 0x174fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_174ff0:
    // 0x174ff0: 0x3e00008
label_174ff4:
    if (ctx->pc == 0x174FF4u) {
        ctx->pc = 0x174FF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x174FF8u;
        goto label_fallthrough_0x174ff0;
    }
    ctx->pc = 0x174FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174FF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174F48u: goto label_174f48;
            case 0x174F4Cu: goto label_174f4c;
            case 0x174F50u: goto label_174f50;
            case 0x174F54u: goto label_174f54;
            case 0x174F58u: goto label_174f58;
            case 0x174F5Cu: goto label_174f5c;
            case 0x174F60u: goto label_174f60;
            case 0x174F64u: goto label_174f64;
            case 0x174F68u: goto label_174f68;
            case 0x174F6Cu: goto label_174f6c;
            case 0x174F70u: goto label_174f70;
            case 0x174F74u: goto label_174f74;
            case 0x174F78u: goto label_174f78;
            case 0x174F7Cu: goto label_174f7c;
            case 0x174F80u: goto label_174f80;
            case 0x174F84u: goto label_174f84;
            case 0x174F88u: goto label_174f88;
            case 0x174F8Cu: goto label_174f8c;
            case 0x174F90u: goto label_174f90;
            case 0x174F94u: goto label_174f94;
            case 0x174F98u: goto label_174f98;
            case 0x174F9Cu: goto label_174f9c;
            case 0x174FA0u: goto label_174fa0;
            case 0x174FA4u: goto label_174fa4;
            case 0x174FA8u: goto label_174fa8;
            case 0x174FACu: goto label_174fac;
            case 0x174FB0u: goto label_174fb0;
            case 0x174FB4u: goto label_174fb4;
            case 0x174FB8u: goto label_174fb8;
            case 0x174FBCu: goto label_174fbc;
            case 0x174FC0u: goto label_174fc0;
            case 0x174FC4u: goto label_174fc4;
            case 0x174FC8u: goto label_174fc8;
            case 0x174FCCu: goto label_174fcc;
            case 0x174FD0u: goto label_174fd0;
            case 0x174FD4u: goto label_174fd4;
            case 0x174FD8u: goto label_174fd8;
            case 0x174FDCu: goto label_174fdc;
            case 0x174FE0u: goto label_174fe0;
            case 0x174FE4u: goto label_174fe4;
            case 0x174FE8u: goto label_174fe8;
            case 0x174FECu: goto label_174fec;
            case 0x174FF0u: goto label_174ff0;
            case 0x174FF4u: goto label_174ff4;
            default: break;
        }
        return;
    }
label_fallthrough_0x174ff0:
    ctx->pc = 0x174FF8u;
}
