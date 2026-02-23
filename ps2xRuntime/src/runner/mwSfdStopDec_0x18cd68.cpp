#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdStopDec
// Address: 0x18cd68 - 0x18ce10
void mwSfdStopDec_0x18cd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdStopDec");


    ctx->pc = 0x18cd68u;

label_18cd68:
    // 0x18cd68: 0x27bdffd0
    ctx->pc = 0x18cd68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_18cd6c:
    // 0x18cd6c: 0xffb00000
    ctx->pc = 0x18cd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18cd70:
    // 0x18cd70: 0xffbf0020
    ctx->pc = 0x18cd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18cd74:
    // 0x18cd74: 0x80802d
    ctx->pc = 0x18cd74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18cd78:
    // 0x18cd78: 0xffb10010
    ctx->pc = 0x18cd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_18cd7c:
    // 0x18cd7c: 0x8e110030
    ctx->pc = 0x18cd7cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18cd80:
    // 0x18cd80: 0x1220001f
label_18cd84:
    if (ctx->pc == 0x18CD84u) {
        ctx->pc = 0x18CD84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x18CD88u;
        goto label_18cd88;
    }
    ctx->pc = 0x18CD80u;
    {
        const bool branch_taken_0x18cd80 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x18CD84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18cd80) {
            ctx->pc = 0x18CE00u;
            goto label_18ce00;
        }
    }
    ctx->pc = 0x18CD88u;
label_18cd88:
    // 0x18cd88: 0xc063762
label_18cd8c:
    if (ctx->pc == 0x18CD8Cu) {
        ctx->pc = 0x18CD90u;
        goto label_18cd90;
    }
    ctx->pc = 0x18CD88u;
    SET_GPR_U32(ctx, 31, 0x18CD90u);
    ctx->pc = 0x18DD88u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwlSfdSleepDecSvr_0x18dd88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CD90u; }
        else if (ctx->pc != 0x18CD90u) { ctx->pc = 0x18CD90u; }
    }
    if (ctx->pc != 0x18CD90u) { return; }
    ctx->pc = 0x18CD90u;
label_18cd90:
    // 0x18cd90: 0xc063188
label_18cd94:
    if (ctx->pc == 0x18CD94u) {
        ctx->pc = 0x18CD98u;
        goto label_18cd98;
    }
    ctx->pc = 0x18CD90u;
    SET_GPR_U32(ctx, 31, 0x18CD98u);
    ctx->pc = 0x18C620u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyLock_0x18c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CD98u; }
        else if (ctx->pc != 0x18CD98u) { ctx->pc = 0x18CD98u; }
    }
    if (ctx->pc != 0x18CD98u) { return; }
    ctx->pc = 0x18CD98u;
label_18cd98:
    // 0x18cd98: 0xae000008
    ctx->pc = 0x18cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_18cd9c:
    // 0x18cd9c: 0xc063190
label_18cda0:
    if (ctx->pc == 0x18CDA0u) {
        ctx->pc = 0x18CDA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18CDA4u;
        goto label_18cda4;
    }
    ctx->pc = 0x18CD9Cu;
    SET_GPR_U32(ctx, 31, 0x18CDA4u);
    ctx->pc = 0x18CDA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C640u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyUnlock_0x18c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDA4u; }
        else if (ctx->pc != 0x18CDA4u) { ctx->pc = 0x18CDA4u; }
    }
    if (ctx->pc != 0x18CDA4u) { return; }
    ctx->pc = 0x18CDA4u;
label_18cda4:
    // 0x18cda4: 0xc066f00
label_18cda8:
    if (ctx->pc == 0x18CDA8u) {
        ctx->pc = 0x18CDA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18CDACu;
        goto label_18cdac;
    }
    ctx->pc = 0x18CDA4u;
    SET_GPR_U32(ctx, 31, 0x18CDACu);
    ctx->pc = 0x18CDA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_Stop_0x19bc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDACu; }
        else if (ctx->pc != 0x18CDACu) { ctx->pc = 0x18CDACu; }
    }
    if (ctx->pc != 0x18CDACu) { return; }
    ctx->pc = 0x18CDACu;
label_18cdac:
    // 0x18cdac: 0x50400007
label_18cdb0:
    if (ctx->pc == 0x18CDB0u) {
        ctx->pc = 0x18CDB0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x18CDB4u;
        goto label_18cdb4;
    }
    ctx->pc = 0x18CDACu;
    {
        const bool branch_taken_0x18cdac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18cdac) {
            ctx->pc = 0x18CDB0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->pc = 0x18CDCCu;
            goto label_18cdcc;
        }
    }
    ctx->pc = 0x18CDB4u;
label_18cdb4:
    // 0x18cdb4: 0xc0633b4
label_18cdb8:
    if (ctx->pc == 0x18CDB8u) {
        ctx->pc = 0x18CDB8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966988));
        ctx->pc = 0x18CDBCu;
        goto label_18cdbc;
    }
    ctx->pc = 0x18CDB4u;
    SET_GPR_U32(ctx, 31, 0x18CDBCu);
    ctx->pc = 0x18CDB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966988));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDBCu; }
        else if (ctx->pc != 0x18CDBCu) { ctx->pc = 0x18CDBCu; }
    }
    if (ctx->pc != 0x18CDBCu) { return; }
    ctx->pc = 0x18CDBCu;
label_18cdbc:
    // 0x18cdbc: 0x3c04002c
    ctx->pc = 0x18cdbcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_18cdc0:
    // 0x18cdc0: 0xc063dda
label_18cdc4:
    if (ctx->pc == 0x18CDC4u) {
        ctx->pc = 0x18CDC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954240));
        ctx->pc = 0x18CDC8u;
        goto label_18cdc8;
    }
    ctx->pc = 0x18CDC0u;
    SET_GPR_U32(ctx, 31, 0x18CDC8u);
    ctx->pc = 0x18CDC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954240));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDC8u; }
        else if (ctx->pc != 0x18CDC8u) { ctx->pc = 0x18CDC8u; }
    }
    if (ctx->pc != 0x18CDC8u) { return; }
    ctx->pc = 0x18CDC8u;
label_18cdc8:
    // 0x18cdc8: 0x8e040034
    ctx->pc = 0x18cdc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_18cdcc:
    // 0x18cdcc: 0x50800005
label_18cdd0:
    if (ctx->pc == 0x18CDD0u) {
        ctx->pc = 0x18CDD0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x18CDD4u;
        goto label_18cdd4;
    }
    ctx->pc = 0x18CDCCu;
    {
        const bool branch_taken_0x18cdcc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x18cdcc) {
            ctx->pc = 0x18CDD0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->pc = 0x18CDE4u;
            goto label_18cde4;
        }
    }
    ctx->pc = 0x18CDD4u;
label_18cdd4:
    // 0x18cdd4: 0xc063e18
label_18cdd8:
    if (ctx->pc == 0x18CDD8u) {
        ctx->pc = 0x18CDDCu;
        goto label_18cddc;
    }
    ctx->pc = 0x18CDD4u;
    SET_GPR_U32(ctx, 31, 0x18CDDCu);
    ctx->pc = 0x18F860u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_Close_0x18f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDDCu; }
        else if (ctx->pc != 0x18CDDCu) { ctx->pc = 0x18CDDCu; }
    }
    if (ctx->pc != 0x18CDDCu) { return; }
    ctx->pc = 0x18CDDCu;
label_18cddc:
    // 0x18cddc: 0xae000034
    ctx->pc = 0x18cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_18cde0:
    // 0x18cde0: 0x8e040038
    ctx->pc = 0x18cde0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_18cde4:
    // 0x18cde4: 0x10800006
label_18cde8:
    if (ctx->pc == 0x18CDE8u) {
        ctx->pc = 0x18CDE8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x18CDECu;
        goto label_18cdec;
    }
    ctx->pc = 0x18CDE4u;
    {
        const bool branch_taken_0x18cde4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18CDE8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18cde4) {
            ctx->pc = 0x18CE00u;
            goto label_18ce00;
        }
    }
    ctx->pc = 0x18CDECu;
label_18cdec:
    // 0x18cdec: 0x8c830000
    ctx->pc = 0x18cdecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18cdf0:
    // 0x18cdf0: 0x8c620014
    ctx->pc = 0x18cdf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18cdf4:
    // 0x18cdf4: 0x40f809
label_18cdf8:
    if (ctx->pc == 0x18CDF8u) {
        ctx->pc = 0x18CDFCu;
        goto label_18cdfc;
    }
    ctx->pc = 0x18CDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CDFCu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CD68u: goto label_18cd68;
            case 0x18CD6Cu: goto label_18cd6c;
            case 0x18CD70u: goto label_18cd70;
            case 0x18CD74u: goto label_18cd74;
            case 0x18CD78u: goto label_18cd78;
            case 0x18CD7Cu: goto label_18cd7c;
            case 0x18CD80u: goto label_18cd80;
            case 0x18CD84u: goto label_18cd84;
            case 0x18CD88u: goto label_18cd88;
            case 0x18CD8Cu: goto label_18cd8c;
            case 0x18CD90u: goto label_18cd90;
            case 0x18CD94u: goto label_18cd94;
            case 0x18CD98u: goto label_18cd98;
            case 0x18CD9Cu: goto label_18cd9c;
            case 0x18CDA0u: goto label_18cda0;
            case 0x18CDA4u: goto label_18cda4;
            case 0x18CDA8u: goto label_18cda8;
            case 0x18CDACu: goto label_18cdac;
            case 0x18CDB0u: goto label_18cdb0;
            case 0x18CDB4u: goto label_18cdb4;
            case 0x18CDB8u: goto label_18cdb8;
            case 0x18CDBCu: goto label_18cdbc;
            case 0x18CDC0u: goto label_18cdc0;
            case 0x18CDC4u: goto label_18cdc4;
            case 0x18CDC8u: goto label_18cdc8;
            case 0x18CDCCu: goto label_18cdcc;
            case 0x18CDD0u: goto label_18cdd0;
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CDD8u: goto label_18cdd8;
            case 0x18CDDCu: goto label_18cddc;
            case 0x18CDE0u: goto label_18cde0;
            case 0x18CDE4u: goto label_18cde4;
            case 0x18CDE8u: goto label_18cde8;
            case 0x18CDECu: goto label_18cdec;
            case 0x18CDF0u: goto label_18cdf0;
            case 0x18CDF4u: goto label_18cdf4;
            case 0x18CDF8u: goto label_18cdf8;
            case 0x18CDFCu: goto label_18cdfc;
            case 0x18CE00u: goto label_18ce00;
            case 0x18CE04u: goto label_18ce04;
            case 0x18CE08u: goto label_18ce08;
            case 0x18CE0Cu: goto label_18ce0c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18CDFCu; }
            if (ctx->pc != 0x18CDFCu) { return; }
        }
    }
    ctx->pc = 0x18CDFCu;
label_18cdfc:
    // 0x18cdfc: 0xdfbf0020
    ctx->pc = 0x18cdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18ce00:
    // 0x18ce00: 0xdfb10010
    ctx->pc = 0x18ce00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18ce04:
    // 0x18ce04: 0xdfb00000
    ctx->pc = 0x18ce04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ce08:
    // 0x18ce08: 0x3e00008
label_18ce0c:
    if (ctx->pc == 0x18CE0Cu) {
        ctx->pc = 0x18CE0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x18CE10u;
        goto label_fallthrough_0x18ce08;
    }
    ctx->pc = 0x18CE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CE0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CD68u: goto label_18cd68;
            case 0x18CD6Cu: goto label_18cd6c;
            case 0x18CD70u: goto label_18cd70;
            case 0x18CD74u: goto label_18cd74;
            case 0x18CD78u: goto label_18cd78;
            case 0x18CD7Cu: goto label_18cd7c;
            case 0x18CD80u: goto label_18cd80;
            case 0x18CD84u: goto label_18cd84;
            case 0x18CD88u: goto label_18cd88;
            case 0x18CD8Cu: goto label_18cd8c;
            case 0x18CD90u: goto label_18cd90;
            case 0x18CD94u: goto label_18cd94;
            case 0x18CD98u: goto label_18cd98;
            case 0x18CD9Cu: goto label_18cd9c;
            case 0x18CDA0u: goto label_18cda0;
            case 0x18CDA4u: goto label_18cda4;
            case 0x18CDA8u: goto label_18cda8;
            case 0x18CDACu: goto label_18cdac;
            case 0x18CDB0u: goto label_18cdb0;
            case 0x18CDB4u: goto label_18cdb4;
            case 0x18CDB8u: goto label_18cdb8;
            case 0x18CDBCu: goto label_18cdbc;
            case 0x18CDC0u: goto label_18cdc0;
            case 0x18CDC4u: goto label_18cdc4;
            case 0x18CDC8u: goto label_18cdc8;
            case 0x18CDCCu: goto label_18cdcc;
            case 0x18CDD0u: goto label_18cdd0;
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CDD8u: goto label_18cdd8;
            case 0x18CDDCu: goto label_18cddc;
            case 0x18CDE0u: goto label_18cde0;
            case 0x18CDE4u: goto label_18cde4;
            case 0x18CDE8u: goto label_18cde8;
            case 0x18CDECu: goto label_18cdec;
            case 0x18CDF0u: goto label_18cdf0;
            case 0x18CDF4u: goto label_18cdf4;
            case 0x18CDF8u: goto label_18cdf8;
            case 0x18CDFCu: goto label_18cdfc;
            case 0x18CE00u: goto label_18ce00;
            case 0x18CE04u: goto label_18ce04;
            case 0x18CE08u: goto label_18ce08;
            case 0x18CE0Cu: goto label_18ce0c;
            default: break;
        }
        return;
    }
label_fallthrough_0x18ce08:
    ctx->pc = 0x18CE10u;
}
