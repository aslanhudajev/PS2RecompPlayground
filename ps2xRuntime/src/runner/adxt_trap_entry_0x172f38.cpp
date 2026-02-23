#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_trap_entry
// Address: 0x172f38 - 0x1730bc
void adxt_trap_entry_0x172f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_trap_entry");


    ctx->pc = 0x172f38u;

label_172f38:
    // 0x172f38: 0x27bdff80
    ctx->pc = 0x172f38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_172f3c:
    // 0x172f3c: 0xffb50060
    ctx->pc = 0x172f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_172f40:
    // 0x172f40: 0xffb40050
    ctx->pc = 0x172f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_172f44:
    // 0x172f44: 0xffb30040
    ctx->pc = 0x172f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_172f48:
    // 0x172f48: 0xffb20030
    ctx->pc = 0x172f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_172f4c:
    // 0x172f4c: 0xffbf0070
    ctx->pc = 0x172f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_172f50:
    // 0x172f50: 0x80902d
    ctx->pc = 0x172f50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172f54:
    // 0x172f54: 0xffb00010
    ctx->pc = 0x172f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_172f58:
    // 0x172f58: 0xffb10020
    ctx->pc = 0x172f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_172f5c:
    // 0x172f5c: 0x8e510004
    ctx->pc = 0x172f5cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_172f60:
    // 0x172f60: 0x8e500014
    ctx->pc = 0x172f60u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_172f64:
    // 0x172f64: 0xc05ba24
label_172f68:
    if (ctx->pc == 0x172F68u) {
        ctx->pc = 0x172F68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172F6Cu;
        goto label_172f6c;
    }
    ctx->pc = 0x172F64u;
    SET_GPR_U32(ctx, 31, 0x172F6Cu);
    ctx->pc = 0x172F68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E890u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetLpStartPos_0x16e890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F6Cu; }
        else if (ctx->pc != 0x172F6Cu) { ctx->pc = 0x172F6Cu; }
    }
    if (ctx->pc != 0x172F6Cu) { return; }
    ctx->pc = 0x172F6Cu;
label_172f6c:
    // 0x172f6c: 0x40982d
    ctx->pc = 0x172f6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172f70:
    // 0x172f70: 0xc05ba2c
label_172f74:
    if (ctx->pc == 0x172F74u) {
        ctx->pc = 0x172F74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172F78u;
        goto label_172f78;
    }
    ctx->pc = 0x172F70u;
    SET_GPR_U32(ctx, 31, 0x172F78u);
    ctx->pc = 0x172F74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetLpStartOfst_0x16e8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F78u; }
        else if (ctx->pc != 0x172F78u) { ctx->pc = 0x172F78u; }
    }
    if (ctx->pc != 0x172F78u) { return; }
    ctx->pc = 0x172F78u;
label_172f78:
    // 0x172f78: 0x40a82d
    ctx->pc = 0x172f78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172f7c:
    // 0x172f7c: 0xc05ba34
label_172f80:
    if (ctx->pc == 0x172F80u) {
        ctx->pc = 0x172F80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172F84u;
        goto label_172f84;
    }
    ctx->pc = 0x172F7Cu;
    SET_GPR_U32(ctx, 31, 0x172F84u);
    ctx->pc = 0x172F80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E8D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetLpEndPos_0x16e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F84u; }
        else if (ctx->pc != 0x172F84u) { ctx->pc = 0x172F84u; }
    }
    if (ctx->pc != 0x172F84u) { return; }
    ctx->pc = 0x172F84u;
label_172f84:
    // 0x172f84: 0x40a02d
    ctx->pc = 0x172f84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172f88:
    // 0x172f88: 0x8e420008
    ctx->pc = 0x172f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_172f8c:
    // 0x172f8c: 0x54400009
label_172f90:
    if (ctx->pc == 0x172F90u) {
        ctx->pc = 0x172F90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x172F94u;
        goto label_172f94;
    }
    ctx->pc = 0x172F8Cu;
    {
        const bool branch_taken_0x172f8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x172f8c) {
            ctx->pc = 0x172F90u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x172FB4u;
            goto label_172fb4;
        }
    }
    ctx->pc = 0x172F94u;
label_172f94:
    // 0x172f94: 0x8242006c
    ctx->pc = 0x172f94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 108)));
label_172f98:
    // 0x172f98: 0x54400006
label_172f9c:
    if (ctx->pc == 0x172F9Cu) {
        ctx->pc = 0x172F9Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x172FA0u;
        goto label_172fa0;
    }
    ctx->pc = 0x172F98u;
    {
        const bool branch_taken_0x172f98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x172f98) {
            ctx->pc = 0x172F9Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x172FB4u;
            goto label_172fb4;
        }
    }
    ctx->pc = 0x172FA0u;
label_172fa0:
    // 0x172fa0: 0x8e440004
    ctx->pc = 0x172fa0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_172fa4:
    // 0x172fa4: 0xc05b9c8
label_172fa8:
    if (ctx->pc == 0x172FA8u) {
        ctx->pc = 0x172FA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x172FACu;
        goto label_172fac;
    }
    ctx->pc = 0x172FA4u;
    SET_GPR_U32(ctx, 31, 0x172FACu);
    ctx->pc = 0x172FA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x16E720u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapNumSmpl_0x16e720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172FACu; }
        else if (ctx->pc != 0x172FACu) { ctx->pc = 0x172FACu; }
    }
    if (ctx->pc != 0x172FACu) { return; }
    ctx->pc = 0x172FACu;
label_172fac:
    // 0x172fac: 0x1000003b
label_172fb0:
    if (ctx->pc == 0x172FB0u) {
        ctx->pc = 0x172FB0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x172FB4u;
        goto label_172fb4;
    }
    ctx->pc = 0x172FACu;
    {
        const bool branch_taken_0x172fac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172FB0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x172fac) {
            ctx->pc = 0x17309Cu;
            goto label_17309c;
        }
    }
    ctx->pc = 0x172FB4u;
label_172fb4:
    // 0x172fb4: 0x200202d
    ctx->pc = 0x172fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172fb8:
    // 0x172fb8: 0x8e460050
    ctx->pc = 0x172fb8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_172fbc:
    // 0x172fbc: 0x24050001
    ctx->pc = 0x172fbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_172fc0:
    // 0x172fc0: 0x8c430018
    ctx->pc = 0x172fc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_172fc4:
    // 0x172fc4: 0x60f809
label_172fc8:
    if (ctx->pc == 0x172FC8u) {
        ctx->pc = 0x172FC8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172FCCu;
        goto label_172fcc;
    }
    ctx->pc = 0x172FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x172FCCu);
        ctx->pc = 0x172FC8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172F38u: goto label_172f38;
            case 0x172F3Cu: goto label_172f3c;
            case 0x172F40u: goto label_172f40;
            case 0x172F44u: goto label_172f44;
            case 0x172F48u: goto label_172f48;
            case 0x172F4Cu: goto label_172f4c;
            case 0x172F50u: goto label_172f50;
            case 0x172F54u: goto label_172f54;
            case 0x172F58u: goto label_172f58;
            case 0x172F5Cu: goto label_172f5c;
            case 0x172F60u: goto label_172f60;
            case 0x172F64u: goto label_172f64;
            case 0x172F68u: goto label_172f68;
            case 0x172F6Cu: goto label_172f6c;
            case 0x172F70u: goto label_172f70;
            case 0x172F74u: goto label_172f74;
            case 0x172F78u: goto label_172f78;
            case 0x172F7Cu: goto label_172f7c;
            case 0x172F80u: goto label_172f80;
            case 0x172F84u: goto label_172f84;
            case 0x172F88u: goto label_172f88;
            case 0x172F8Cu: goto label_172f8c;
            case 0x172F90u: goto label_172f90;
            case 0x172F94u: goto label_172f94;
            case 0x172F98u: goto label_172f98;
            case 0x172F9Cu: goto label_172f9c;
            case 0x172FA0u: goto label_172fa0;
            case 0x172FA4u: goto label_172fa4;
            case 0x172FA8u: goto label_172fa8;
            case 0x172FACu: goto label_172fac;
            case 0x172FB0u: goto label_172fb0;
            case 0x172FB4u: goto label_172fb4;
            case 0x172FB8u: goto label_172fb8;
            case 0x172FBCu: goto label_172fbc;
            case 0x172FC0u: goto label_172fc0;
            case 0x172FC4u: goto label_172fc4;
            case 0x172FC8u: goto label_172fc8;
            case 0x172FCCu: goto label_172fcc;
            case 0x172FD0u: goto label_172fd0;
            case 0x172FD4u: goto label_172fd4;
            case 0x172FD8u: goto label_172fd8;
            case 0x172FDCu: goto label_172fdc;
            case 0x172FE0u: goto label_172fe0;
            case 0x172FE4u: goto label_172fe4;
            case 0x172FE8u: goto label_172fe8;
            case 0x172FECu: goto label_172fec;
            case 0x172FF0u: goto label_172ff0;
            case 0x172FF4u: goto label_172ff4;
            case 0x172FF8u: goto label_172ff8;
            case 0x172FFCu: goto label_172ffc;
            case 0x173000u: goto label_173000;
            case 0x173004u: goto label_173004;
            case 0x173008u: goto label_173008;
            case 0x17300Cu: goto label_17300c;
            case 0x173010u: goto label_173010;
            case 0x173014u: goto label_173014;
            case 0x173018u: goto label_173018;
            case 0x17301Cu: goto label_17301c;
            case 0x173020u: goto label_173020;
            case 0x173024u: goto label_173024;
            case 0x173028u: goto label_173028;
            case 0x17302Cu: goto label_17302c;
            case 0x173030u: goto label_173030;
            case 0x173034u: goto label_173034;
            case 0x173038u: goto label_173038;
            case 0x17303Cu: goto label_17303c;
            case 0x173040u: goto label_173040;
            case 0x173044u: goto label_173044;
            case 0x173048u: goto label_173048;
            case 0x17304Cu: goto label_17304c;
            case 0x173050u: goto label_173050;
            case 0x173054u: goto label_173054;
            case 0x173058u: goto label_173058;
            case 0x17305Cu: goto label_17305c;
            case 0x173060u: goto label_173060;
            case 0x173064u: goto label_173064;
            case 0x173068u: goto label_173068;
            case 0x17306Cu: goto label_17306c;
            case 0x173070u: goto label_173070;
            case 0x173074u: goto label_173074;
            case 0x173078u: goto label_173078;
            case 0x17307Cu: goto label_17307c;
            case 0x173080u: goto label_173080;
            case 0x173084u: goto label_173084;
            case 0x173088u: goto label_173088;
            case 0x17308Cu: goto label_17308c;
            case 0x173090u: goto label_173090;
            case 0x173094u: goto label_173094;
            case 0x173098u: goto label_173098;
            case 0x17309Cu: goto label_17309c;
            case 0x1730A0u: goto label_1730a0;
            case 0x1730A4u: goto label_1730a4;
            case 0x1730A8u: goto label_1730a8;
            case 0x1730ACu: goto label_1730ac;
            case 0x1730B0u: goto label_1730b0;
            case 0x1730B4u: goto label_1730b4;
            case 0x1730B8u: goto label_1730b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172FCCu; }
            if (ctx->pc != 0x172FCCu) { return; }
        }
    }
    ctx->pc = 0x172FCCu;
label_172fcc:
    // 0x172fcc: 0x8fa20004
    ctx->pc = 0x172fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_172fd0:
    // 0x172fd0: 0x8e430050
    ctx->pc = 0x172fd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_172fd4:
    // 0x172fd4: 0x43102a
    ctx->pc = 0x172fd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_172fd8:
    // 0x172fd8: 0x10400003
label_172fdc:
    if (ctx->pc == 0x172FDCu) {
        ctx->pc = 0x172FDCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x172FE0u;
        goto label_172fe0;
    }
    ctx->pc = 0x172FD8u;
    {
        const bool branch_taken_0x172fd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172FDCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x172fd8) {
            ctx->pc = 0x172FE8u;
            goto label_172fe8;
        }
    }
    ctx->pc = 0x172FE0u;
label_172fe0:
    // 0x172fe0: 0xc05a854
label_172fe4:
    if (ctx->pc == 0x172FE4u) {
        ctx->pc = 0x172FE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943600));
        ctx->pc = 0x172FE8u;
        goto label_172fe8;
    }
    ctx->pc = 0x172FE0u;
    SET_GPR_U32(ctx, 31, 0x172FE8u);
    ctx->pc = 0x172FE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943600));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172FE8u; }
        else if (ctx->pc != 0x172FE8u) { ctx->pc = 0x172FE8u; }
    }
    if (ctx->pc != 0x172FE8u) { return; }
    ctx->pc = 0x172FE8u;
label_172fe8:
    // 0x172fe8: 0x8e030000
    ctx->pc = 0x172fe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_172fec:
    // 0x172fec: 0x200202d
    ctx->pc = 0x172fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172ff0:
    // 0x172ff0: 0x282d
    ctx->pc = 0x172ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172ff4:
    // 0x172ff4: 0x8c620020
    ctx->pc = 0x172ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_172ff8:
    // 0x172ff8: 0x40f809
label_172ffc:
    if (ctx->pc == 0x172FFCu) {
        ctx->pc = 0x172FFCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173000u;
        goto label_173000;
    }
    ctx->pc = 0x172FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173000u);
        ctx->pc = 0x172FFCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172F38u: goto label_172f38;
            case 0x172F3Cu: goto label_172f3c;
            case 0x172F40u: goto label_172f40;
            case 0x172F44u: goto label_172f44;
            case 0x172F48u: goto label_172f48;
            case 0x172F4Cu: goto label_172f4c;
            case 0x172F50u: goto label_172f50;
            case 0x172F54u: goto label_172f54;
            case 0x172F58u: goto label_172f58;
            case 0x172F5Cu: goto label_172f5c;
            case 0x172F60u: goto label_172f60;
            case 0x172F64u: goto label_172f64;
            case 0x172F68u: goto label_172f68;
            case 0x172F6Cu: goto label_172f6c;
            case 0x172F70u: goto label_172f70;
            case 0x172F74u: goto label_172f74;
            case 0x172F78u: goto label_172f78;
            case 0x172F7Cu: goto label_172f7c;
            case 0x172F80u: goto label_172f80;
            case 0x172F84u: goto label_172f84;
            case 0x172F88u: goto label_172f88;
            case 0x172F8Cu: goto label_172f8c;
            case 0x172F90u: goto label_172f90;
            case 0x172F94u: goto label_172f94;
            case 0x172F98u: goto label_172f98;
            case 0x172F9Cu: goto label_172f9c;
            case 0x172FA0u: goto label_172fa0;
            case 0x172FA4u: goto label_172fa4;
            case 0x172FA8u: goto label_172fa8;
            case 0x172FACu: goto label_172fac;
            case 0x172FB0u: goto label_172fb0;
            case 0x172FB4u: goto label_172fb4;
            case 0x172FB8u: goto label_172fb8;
            case 0x172FBCu: goto label_172fbc;
            case 0x172FC0u: goto label_172fc0;
            case 0x172FC4u: goto label_172fc4;
            case 0x172FC8u: goto label_172fc8;
            case 0x172FCCu: goto label_172fcc;
            case 0x172FD0u: goto label_172fd0;
            case 0x172FD4u: goto label_172fd4;
            case 0x172FD8u: goto label_172fd8;
            case 0x172FDCu: goto label_172fdc;
            case 0x172FE0u: goto label_172fe0;
            case 0x172FE4u: goto label_172fe4;
            case 0x172FE8u: goto label_172fe8;
            case 0x172FECu: goto label_172fec;
            case 0x172FF0u: goto label_172ff0;
            case 0x172FF4u: goto label_172ff4;
            case 0x172FF8u: goto label_172ff8;
            case 0x172FFCu: goto label_172ffc;
            case 0x173000u: goto label_173000;
            case 0x173004u: goto label_173004;
            case 0x173008u: goto label_173008;
            case 0x17300Cu: goto label_17300c;
            case 0x173010u: goto label_173010;
            case 0x173014u: goto label_173014;
            case 0x173018u: goto label_173018;
            case 0x17301Cu: goto label_17301c;
            case 0x173020u: goto label_173020;
            case 0x173024u: goto label_173024;
            case 0x173028u: goto label_173028;
            case 0x17302Cu: goto label_17302c;
            case 0x173030u: goto label_173030;
            case 0x173034u: goto label_173034;
            case 0x173038u: goto label_173038;
            case 0x17303Cu: goto label_17303c;
            case 0x173040u: goto label_173040;
            case 0x173044u: goto label_173044;
            case 0x173048u: goto label_173048;
            case 0x17304Cu: goto label_17304c;
            case 0x173050u: goto label_173050;
            case 0x173054u: goto label_173054;
            case 0x173058u: goto label_173058;
            case 0x17305Cu: goto label_17305c;
            case 0x173060u: goto label_173060;
            case 0x173064u: goto label_173064;
            case 0x173068u: goto label_173068;
            case 0x17306Cu: goto label_17306c;
            case 0x173070u: goto label_173070;
            case 0x173074u: goto label_173074;
            case 0x173078u: goto label_173078;
            case 0x17307Cu: goto label_17307c;
            case 0x173080u: goto label_173080;
            case 0x173084u: goto label_173084;
            case 0x173088u: goto label_173088;
            case 0x17308Cu: goto label_17308c;
            case 0x173090u: goto label_173090;
            case 0x173094u: goto label_173094;
            case 0x173098u: goto label_173098;
            case 0x17309Cu: goto label_17309c;
            case 0x1730A0u: goto label_1730a0;
            case 0x1730A4u: goto label_1730a4;
            case 0x1730A8u: goto label_1730a8;
            case 0x1730ACu: goto label_1730ac;
            case 0x1730B0u: goto label_1730b0;
            case 0x1730B4u: goto label_1730b4;
            case 0x1730B8u: goto label_1730b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173000u; }
            if (ctx->pc != 0x173000u) { return; }
        }
    }
    ctx->pc = 0x173000u;
label_173000:
    // 0x173000: 0x220202d
    ctx->pc = 0x173000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173004:
    // 0x173004: 0xc05b9cc
label_173008:
    if (ctx->pc == 0x173008u) {
        ctx->pc = 0x173008u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17300Cu;
        goto label_17300c;
    }
    ctx->pc = 0x173004u;
    SET_GPR_U32(ctx, 31, 0x17300Cu);
    ctx->pc = 0x173008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E730u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapCnt_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17300Cu; }
        else if (ctx->pc != 0x17300Cu) { ctx->pc = 0x17300Cu; }
    }
    if (ctx->pc != 0x17300Cu) { return; }
    ctx->pc = 0x17300Cu;
label_17300c:
    // 0x17300c: 0x2931023
    ctx->pc = 0x17300cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_173010:
    // 0x173010: 0x220202d
    ctx->pc = 0x173010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173014:
    // 0x173014: 0x40282d
    ctx->pc = 0x173014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173018:
    // 0x173018: 0xc05b9c8
label_17301c:
    if (ctx->pc == 0x17301Cu) {
        ctx->pc = 0x17301Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->pc = 0x173020u;
        goto label_173020;
    }
    ctx->pc = 0x173018u;
    SET_GPR_U32(ctx, 31, 0x173020u);
    ctx->pc = 0x17301Cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    ctx->pc = 0x16E720u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapNumSmpl_0x16e720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173020u; }
        else if (ctx->pc != 0x173020u) { ctx->pc = 0x173020u; }
    }
    if (ctx->pc != 0x173020u) { return; }
    ctx->pc = 0x173020u;
label_173020:
    // 0x173020: 0x220202d
    ctx->pc = 0x173020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173024:
    // 0x173024: 0xc05b9d0
label_173028:
    if (ctx->pc == 0x173028u) {
        ctx->pc = 0x173028u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17302Cu;
        goto label_17302c;
    }
    ctx->pc = 0x173024u;
    SET_GPR_U32(ctx, 31, 0x17302Cu);
    ctx->pc = 0x173028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E740u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapDtLen_0x16e740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17302Cu; }
        else if (ctx->pc != 0x17302Cu) { ctx->pc = 0x17302Cu; }
    }
    if (ctx->pc != 0x17302Cu) { return; }
    ctx->pc = 0x17302Cu;
label_17302c:
    // 0x17302c: 0x220202d
    ctx->pc = 0x17302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173030:
    // 0x173030: 0xc05b9bc
label_173034:
    if (ctx->pc == 0x173034u) {
        ctx->pc = 0x173034u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173038u;
        goto label_173038;
    }
    ctx->pc = 0x173030u;
    SET_GPR_U32(ctx, 31, 0x173038u);
    ctx->pc = 0x173034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetDecPos_0x16e6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173038u; }
        else if (ctx->pc != 0x173038u) { ctx->pc = 0x173038u; }
    }
    if (ctx->pc != 0x173038u) { return; }
    ctx->pc = 0x173038u;
label_173038:
    // 0x173038: 0x82430002
    ctx->pc = 0x173038u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_17303c:
    // 0x17303c: 0x24020002
    ctx->pc = 0x17303cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_173040:
    // 0x173040: 0x54620013
label_173044:
    if (ctx->pc == 0x173044u) {
        ctx->pc = 0x173044u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->pc = 0x173048u;
        goto label_173048;
    }
    ctx->pc = 0x173040u;
    {
        const bool branch_taken_0x173040 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x173040) {
            ctx->pc = 0x173044u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->pc = 0x173090u;
            goto label_173090;
        }
    }
    ctx->pc = 0x173048u;
label_173048:
    // 0x173048: 0x8e030000
    ctx->pc = 0x173048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17304c:
    // 0x17304c: 0x8c620014
    ctx->pc = 0x17304cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_173050:
    // 0x173050: 0x40f809
label_173054:
    if (ctx->pc == 0x173054u) {
        ctx->pc = 0x173054u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173058u;
        goto label_173058;
    }
    ctx->pc = 0x173050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173058u);
        ctx->pc = 0x173054u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172F38u: goto label_172f38;
            case 0x172F3Cu: goto label_172f3c;
            case 0x172F40u: goto label_172f40;
            case 0x172F44u: goto label_172f44;
            case 0x172F48u: goto label_172f48;
            case 0x172F4Cu: goto label_172f4c;
            case 0x172F50u: goto label_172f50;
            case 0x172F54u: goto label_172f54;
            case 0x172F58u: goto label_172f58;
            case 0x172F5Cu: goto label_172f5c;
            case 0x172F60u: goto label_172f60;
            case 0x172F64u: goto label_172f64;
            case 0x172F68u: goto label_172f68;
            case 0x172F6Cu: goto label_172f6c;
            case 0x172F70u: goto label_172f70;
            case 0x172F74u: goto label_172f74;
            case 0x172F78u: goto label_172f78;
            case 0x172F7Cu: goto label_172f7c;
            case 0x172F80u: goto label_172f80;
            case 0x172F84u: goto label_172f84;
            case 0x172F88u: goto label_172f88;
            case 0x172F8Cu: goto label_172f8c;
            case 0x172F90u: goto label_172f90;
            case 0x172F94u: goto label_172f94;
            case 0x172F98u: goto label_172f98;
            case 0x172F9Cu: goto label_172f9c;
            case 0x172FA0u: goto label_172fa0;
            case 0x172FA4u: goto label_172fa4;
            case 0x172FA8u: goto label_172fa8;
            case 0x172FACu: goto label_172fac;
            case 0x172FB0u: goto label_172fb0;
            case 0x172FB4u: goto label_172fb4;
            case 0x172FB8u: goto label_172fb8;
            case 0x172FBCu: goto label_172fbc;
            case 0x172FC0u: goto label_172fc0;
            case 0x172FC4u: goto label_172fc4;
            case 0x172FC8u: goto label_172fc8;
            case 0x172FCCu: goto label_172fcc;
            case 0x172FD0u: goto label_172fd0;
            case 0x172FD4u: goto label_172fd4;
            case 0x172FD8u: goto label_172fd8;
            case 0x172FDCu: goto label_172fdc;
            case 0x172FE0u: goto label_172fe0;
            case 0x172FE4u: goto label_172fe4;
            case 0x172FE8u: goto label_172fe8;
            case 0x172FECu: goto label_172fec;
            case 0x172FF0u: goto label_172ff0;
            case 0x172FF4u: goto label_172ff4;
            case 0x172FF8u: goto label_172ff8;
            case 0x172FFCu: goto label_172ffc;
            case 0x173000u: goto label_173000;
            case 0x173004u: goto label_173004;
            case 0x173008u: goto label_173008;
            case 0x17300Cu: goto label_17300c;
            case 0x173010u: goto label_173010;
            case 0x173014u: goto label_173014;
            case 0x173018u: goto label_173018;
            case 0x17301Cu: goto label_17301c;
            case 0x173020u: goto label_173020;
            case 0x173024u: goto label_173024;
            case 0x173028u: goto label_173028;
            case 0x17302Cu: goto label_17302c;
            case 0x173030u: goto label_173030;
            case 0x173034u: goto label_173034;
            case 0x173038u: goto label_173038;
            case 0x17303Cu: goto label_17303c;
            case 0x173040u: goto label_173040;
            case 0x173044u: goto label_173044;
            case 0x173048u: goto label_173048;
            case 0x17304Cu: goto label_17304c;
            case 0x173050u: goto label_173050;
            case 0x173054u: goto label_173054;
            case 0x173058u: goto label_173058;
            case 0x17305Cu: goto label_17305c;
            case 0x173060u: goto label_173060;
            case 0x173064u: goto label_173064;
            case 0x173068u: goto label_173068;
            case 0x17306Cu: goto label_17306c;
            case 0x173070u: goto label_173070;
            case 0x173074u: goto label_173074;
            case 0x173078u: goto label_173078;
            case 0x17307Cu: goto label_17307c;
            case 0x173080u: goto label_173080;
            case 0x173084u: goto label_173084;
            case 0x173088u: goto label_173088;
            case 0x17308Cu: goto label_17308c;
            case 0x173090u: goto label_173090;
            case 0x173094u: goto label_173094;
            case 0x173098u: goto label_173098;
            case 0x17309Cu: goto label_17309c;
            case 0x1730A0u: goto label_1730a0;
            case 0x1730A4u: goto label_1730a4;
            case 0x1730A8u: goto label_1730a8;
            case 0x1730ACu: goto label_1730ac;
            case 0x1730B0u: goto label_1730b0;
            case 0x1730B4u: goto label_1730b4;
            case 0x1730B8u: goto label_1730b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173058u; }
            if (ctx->pc != 0x173058u) { return; }
        }
    }
    ctx->pc = 0x173058u;
label_173058:
    // 0x173058: 0x8e030000
    ctx->pc = 0x173058u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17305c:
    // 0x17305c: 0x2a0302d
    ctx->pc = 0x17305cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_173060:
    // 0x173060: 0x200202d
    ctx->pc = 0x173060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173064:
    // 0x173064: 0x24050001
    ctx->pc = 0x173064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_173068:
    // 0x173068: 0x8c620018
    ctx->pc = 0x173068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_17306c:
    // 0x17306c: 0x40f809
label_173070:
    if (ctx->pc == 0x173070u) {
        ctx->pc = 0x173070u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173074u;
        goto label_173074;
    }
    ctx->pc = 0x17306Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173074u);
        ctx->pc = 0x173070u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172F38u: goto label_172f38;
            case 0x172F3Cu: goto label_172f3c;
            case 0x172F40u: goto label_172f40;
            case 0x172F44u: goto label_172f44;
            case 0x172F48u: goto label_172f48;
            case 0x172F4Cu: goto label_172f4c;
            case 0x172F50u: goto label_172f50;
            case 0x172F54u: goto label_172f54;
            case 0x172F58u: goto label_172f58;
            case 0x172F5Cu: goto label_172f5c;
            case 0x172F60u: goto label_172f60;
            case 0x172F64u: goto label_172f64;
            case 0x172F68u: goto label_172f68;
            case 0x172F6Cu: goto label_172f6c;
            case 0x172F70u: goto label_172f70;
            case 0x172F74u: goto label_172f74;
            case 0x172F78u: goto label_172f78;
            case 0x172F7Cu: goto label_172f7c;
            case 0x172F80u: goto label_172f80;
            case 0x172F84u: goto label_172f84;
            case 0x172F88u: goto label_172f88;
            case 0x172F8Cu: goto label_172f8c;
            case 0x172F90u: goto label_172f90;
            case 0x172F94u: goto label_172f94;
            case 0x172F98u: goto label_172f98;
            case 0x172F9Cu: goto label_172f9c;
            case 0x172FA0u: goto label_172fa0;
            case 0x172FA4u: goto label_172fa4;
            case 0x172FA8u: goto label_172fa8;
            case 0x172FACu: goto label_172fac;
            case 0x172FB0u: goto label_172fb0;
            case 0x172FB4u: goto label_172fb4;
            case 0x172FB8u: goto label_172fb8;
            case 0x172FBCu: goto label_172fbc;
            case 0x172FC0u: goto label_172fc0;
            case 0x172FC4u: goto label_172fc4;
            case 0x172FC8u: goto label_172fc8;
            case 0x172FCCu: goto label_172fcc;
            case 0x172FD0u: goto label_172fd0;
            case 0x172FD4u: goto label_172fd4;
            case 0x172FD8u: goto label_172fd8;
            case 0x172FDCu: goto label_172fdc;
            case 0x172FE0u: goto label_172fe0;
            case 0x172FE4u: goto label_172fe4;
            case 0x172FE8u: goto label_172fe8;
            case 0x172FECu: goto label_172fec;
            case 0x172FF0u: goto label_172ff0;
            case 0x172FF4u: goto label_172ff4;
            case 0x172FF8u: goto label_172ff8;
            case 0x172FFCu: goto label_172ffc;
            case 0x173000u: goto label_173000;
            case 0x173004u: goto label_173004;
            case 0x173008u: goto label_173008;
            case 0x17300Cu: goto label_17300c;
            case 0x173010u: goto label_173010;
            case 0x173014u: goto label_173014;
            case 0x173018u: goto label_173018;
            case 0x17301Cu: goto label_17301c;
            case 0x173020u: goto label_173020;
            case 0x173024u: goto label_173024;
            case 0x173028u: goto label_173028;
            case 0x17302Cu: goto label_17302c;
            case 0x173030u: goto label_173030;
            case 0x173034u: goto label_173034;
            case 0x173038u: goto label_173038;
            case 0x17303Cu: goto label_17303c;
            case 0x173040u: goto label_173040;
            case 0x173044u: goto label_173044;
            case 0x173048u: goto label_173048;
            case 0x17304Cu: goto label_17304c;
            case 0x173050u: goto label_173050;
            case 0x173054u: goto label_173054;
            case 0x173058u: goto label_173058;
            case 0x17305Cu: goto label_17305c;
            case 0x173060u: goto label_173060;
            case 0x173064u: goto label_173064;
            case 0x173068u: goto label_173068;
            case 0x17306Cu: goto label_17306c;
            case 0x173070u: goto label_173070;
            case 0x173074u: goto label_173074;
            case 0x173078u: goto label_173078;
            case 0x17307Cu: goto label_17307c;
            case 0x173080u: goto label_173080;
            case 0x173084u: goto label_173084;
            case 0x173088u: goto label_173088;
            case 0x17308Cu: goto label_17308c;
            case 0x173090u: goto label_173090;
            case 0x173094u: goto label_173094;
            case 0x173098u: goto label_173098;
            case 0x17309Cu: goto label_17309c;
            case 0x1730A0u: goto label_1730a0;
            case 0x1730A4u: goto label_1730a4;
            case 0x1730A8u: goto label_1730a8;
            case 0x1730ACu: goto label_1730ac;
            case 0x1730B0u: goto label_1730b0;
            case 0x1730B4u: goto label_1730b4;
            case 0x1730B8u: goto label_1730b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173074u; }
            if (ctx->pc != 0x173074u) { return; }
        }
    }
    ctx->pc = 0x173074u;
label_173074:
    // 0x173074: 0x8e030000
    ctx->pc = 0x173074u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_173078:
    // 0x173078: 0x200202d
    ctx->pc = 0x173078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17307c:
    // 0x17307c: 0x282d
    ctx->pc = 0x17307cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173080:
    // 0x173080: 0x8c620020
    ctx->pc = 0x173080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_173084:
    // 0x173084: 0x40f809
label_173088:
    if (ctx->pc == 0x173088u) {
        ctx->pc = 0x173088u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17308Cu;
        goto label_17308c;
    }
    ctx->pc = 0x173084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17308Cu);
        ctx->pc = 0x173088u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172F38u: goto label_172f38;
            case 0x172F3Cu: goto label_172f3c;
            case 0x172F40u: goto label_172f40;
            case 0x172F44u: goto label_172f44;
            case 0x172F48u: goto label_172f48;
            case 0x172F4Cu: goto label_172f4c;
            case 0x172F50u: goto label_172f50;
            case 0x172F54u: goto label_172f54;
            case 0x172F58u: goto label_172f58;
            case 0x172F5Cu: goto label_172f5c;
            case 0x172F60u: goto label_172f60;
            case 0x172F64u: goto label_172f64;
            case 0x172F68u: goto label_172f68;
            case 0x172F6Cu: goto label_172f6c;
            case 0x172F70u: goto label_172f70;
            case 0x172F74u: goto label_172f74;
            case 0x172F78u: goto label_172f78;
            case 0x172F7Cu: goto label_172f7c;
            case 0x172F80u: goto label_172f80;
            case 0x172F84u: goto label_172f84;
            case 0x172F88u: goto label_172f88;
            case 0x172F8Cu: goto label_172f8c;
            case 0x172F90u: goto label_172f90;
            case 0x172F94u: goto label_172f94;
            case 0x172F98u: goto label_172f98;
            case 0x172F9Cu: goto label_172f9c;
            case 0x172FA0u: goto label_172fa0;
            case 0x172FA4u: goto label_172fa4;
            case 0x172FA8u: goto label_172fa8;
            case 0x172FACu: goto label_172fac;
            case 0x172FB0u: goto label_172fb0;
            case 0x172FB4u: goto label_172fb4;
            case 0x172FB8u: goto label_172fb8;
            case 0x172FBCu: goto label_172fbc;
            case 0x172FC0u: goto label_172fc0;
            case 0x172FC4u: goto label_172fc4;
            case 0x172FC8u: goto label_172fc8;
            case 0x172FCCu: goto label_172fcc;
            case 0x172FD0u: goto label_172fd0;
            case 0x172FD4u: goto label_172fd4;
            case 0x172FD8u: goto label_172fd8;
            case 0x172FDCu: goto label_172fdc;
            case 0x172FE0u: goto label_172fe0;
            case 0x172FE4u: goto label_172fe4;
            case 0x172FE8u: goto label_172fe8;
            case 0x172FECu: goto label_172fec;
            case 0x172FF0u: goto label_172ff0;
            case 0x172FF4u: goto label_172ff4;
            case 0x172FF8u: goto label_172ff8;
            case 0x172FFCu: goto label_172ffc;
            case 0x173000u: goto label_173000;
            case 0x173004u: goto label_173004;
            case 0x173008u: goto label_173008;
            case 0x17300Cu: goto label_17300c;
            case 0x173010u: goto label_173010;
            case 0x173014u: goto label_173014;
            case 0x173018u: goto label_173018;
            case 0x17301Cu: goto label_17301c;
            case 0x173020u: goto label_173020;
            case 0x173024u: goto label_173024;
            case 0x173028u: goto label_173028;
            case 0x17302Cu: goto label_17302c;
            case 0x173030u: goto label_173030;
            case 0x173034u: goto label_173034;
            case 0x173038u: goto label_173038;
            case 0x17303Cu: goto label_17303c;
            case 0x173040u: goto label_173040;
            case 0x173044u: goto label_173044;
            case 0x173048u: goto label_173048;
            case 0x17304Cu: goto label_17304c;
            case 0x173050u: goto label_173050;
            case 0x173054u: goto label_173054;
            case 0x173058u: goto label_173058;
            case 0x17305Cu: goto label_17305c;
            case 0x173060u: goto label_173060;
            case 0x173064u: goto label_173064;
            case 0x173068u: goto label_173068;
            case 0x17306Cu: goto label_17306c;
            case 0x173070u: goto label_173070;
            case 0x173074u: goto label_173074;
            case 0x173078u: goto label_173078;
            case 0x17307Cu: goto label_17307c;
            case 0x173080u: goto label_173080;
            case 0x173084u: goto label_173084;
            case 0x173088u: goto label_173088;
            case 0x17308Cu: goto label_17308c;
            case 0x173090u: goto label_173090;
            case 0x173094u: goto label_173094;
            case 0x173098u: goto label_173098;
            case 0x17309Cu: goto label_17309c;
            case 0x1730A0u: goto label_1730a0;
            case 0x1730A4u: goto label_1730a4;
            case 0x1730A8u: goto label_1730a8;
            case 0x1730ACu: goto label_1730ac;
            case 0x1730B0u: goto label_1730b0;
            case 0x1730B4u: goto label_1730b4;
            case 0x1730B8u: goto label_1730b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17308Cu; }
            if (ctx->pc != 0x17308Cu) { return; }
        }
    }
    ctx->pc = 0x17308Cu;
label_17308c:
    // 0x17308c: 0x8e42004c
    ctx->pc = 0x17308cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_173090:
    // 0x173090: 0x24420001
    ctx->pc = 0x173090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_173094:
    // 0x173094: 0xae42004c
    ctx->pc = 0x173094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_173098:
    // 0x173098: 0xdfbf0070
    ctx->pc = 0x173098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17309c:
    // 0x17309c: 0xdfb50060
    ctx->pc = 0x17309cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1730a0:
    // 0x1730a0: 0xdfb40050
    ctx->pc = 0x1730a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1730a4:
    // 0x1730a4: 0xdfb30040
    ctx->pc = 0x1730a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1730a8:
    // 0x1730a8: 0xdfb20030
    ctx->pc = 0x1730a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1730ac:
    // 0x1730ac: 0xdfb10020
    ctx->pc = 0x1730acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1730b0:
    // 0x1730b0: 0xdfb00010
    ctx->pc = 0x1730b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1730b4:
    // 0x1730b4: 0x3e00008
label_1730b8:
    if (ctx->pc == 0x1730B8u) {
        ctx->pc = 0x1730B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1730BCu;
        goto label_fallthrough_0x1730b4;
    }
    ctx->pc = 0x1730B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1730B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172F38u: goto label_172f38;
            case 0x172F3Cu: goto label_172f3c;
            case 0x172F40u: goto label_172f40;
            case 0x172F44u: goto label_172f44;
            case 0x172F48u: goto label_172f48;
            case 0x172F4Cu: goto label_172f4c;
            case 0x172F50u: goto label_172f50;
            case 0x172F54u: goto label_172f54;
            case 0x172F58u: goto label_172f58;
            case 0x172F5Cu: goto label_172f5c;
            case 0x172F60u: goto label_172f60;
            case 0x172F64u: goto label_172f64;
            case 0x172F68u: goto label_172f68;
            case 0x172F6Cu: goto label_172f6c;
            case 0x172F70u: goto label_172f70;
            case 0x172F74u: goto label_172f74;
            case 0x172F78u: goto label_172f78;
            case 0x172F7Cu: goto label_172f7c;
            case 0x172F80u: goto label_172f80;
            case 0x172F84u: goto label_172f84;
            case 0x172F88u: goto label_172f88;
            case 0x172F8Cu: goto label_172f8c;
            case 0x172F90u: goto label_172f90;
            case 0x172F94u: goto label_172f94;
            case 0x172F98u: goto label_172f98;
            case 0x172F9Cu: goto label_172f9c;
            case 0x172FA0u: goto label_172fa0;
            case 0x172FA4u: goto label_172fa4;
            case 0x172FA8u: goto label_172fa8;
            case 0x172FACu: goto label_172fac;
            case 0x172FB0u: goto label_172fb0;
            case 0x172FB4u: goto label_172fb4;
            case 0x172FB8u: goto label_172fb8;
            case 0x172FBCu: goto label_172fbc;
            case 0x172FC0u: goto label_172fc0;
            case 0x172FC4u: goto label_172fc4;
            case 0x172FC8u: goto label_172fc8;
            case 0x172FCCu: goto label_172fcc;
            case 0x172FD0u: goto label_172fd0;
            case 0x172FD4u: goto label_172fd4;
            case 0x172FD8u: goto label_172fd8;
            case 0x172FDCu: goto label_172fdc;
            case 0x172FE0u: goto label_172fe0;
            case 0x172FE4u: goto label_172fe4;
            case 0x172FE8u: goto label_172fe8;
            case 0x172FECu: goto label_172fec;
            case 0x172FF0u: goto label_172ff0;
            case 0x172FF4u: goto label_172ff4;
            case 0x172FF8u: goto label_172ff8;
            case 0x172FFCu: goto label_172ffc;
            case 0x173000u: goto label_173000;
            case 0x173004u: goto label_173004;
            case 0x173008u: goto label_173008;
            case 0x17300Cu: goto label_17300c;
            case 0x173010u: goto label_173010;
            case 0x173014u: goto label_173014;
            case 0x173018u: goto label_173018;
            case 0x17301Cu: goto label_17301c;
            case 0x173020u: goto label_173020;
            case 0x173024u: goto label_173024;
            case 0x173028u: goto label_173028;
            case 0x17302Cu: goto label_17302c;
            case 0x173030u: goto label_173030;
            case 0x173034u: goto label_173034;
            case 0x173038u: goto label_173038;
            case 0x17303Cu: goto label_17303c;
            case 0x173040u: goto label_173040;
            case 0x173044u: goto label_173044;
            case 0x173048u: goto label_173048;
            case 0x17304Cu: goto label_17304c;
            case 0x173050u: goto label_173050;
            case 0x173054u: goto label_173054;
            case 0x173058u: goto label_173058;
            case 0x17305Cu: goto label_17305c;
            case 0x173060u: goto label_173060;
            case 0x173064u: goto label_173064;
            case 0x173068u: goto label_173068;
            case 0x17306Cu: goto label_17306c;
            case 0x173070u: goto label_173070;
            case 0x173074u: goto label_173074;
            case 0x173078u: goto label_173078;
            case 0x17307Cu: goto label_17307c;
            case 0x173080u: goto label_173080;
            case 0x173084u: goto label_173084;
            case 0x173088u: goto label_173088;
            case 0x17308Cu: goto label_17308c;
            case 0x173090u: goto label_173090;
            case 0x173094u: goto label_173094;
            case 0x173098u: goto label_173098;
            case 0x17309Cu: goto label_17309c;
            case 0x1730A0u: goto label_1730a0;
            case 0x1730A4u: goto label_1730a4;
            case 0x1730A8u: goto label_1730a8;
            case 0x1730ACu: goto label_1730ac;
            case 0x1730B0u: goto label_1730b0;
            case 0x1730B4u: goto label_1730b4;
            case 0x1730B8u: goto label_1730b8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1730b4:
    ctx->pc = 0x1730BCu;
}
