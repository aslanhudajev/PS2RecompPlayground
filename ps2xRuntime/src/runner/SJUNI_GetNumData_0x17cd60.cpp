#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_GetNumData
// Address: 0x17cd60 - 0x17cdd4
void SJUNI_GetNumData_0x17cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_GetNumData");


    ctx->pc = 0x17cd60u;

label_17cd60:
    // 0x17cd60: 0x27bdfff0
    ctx->pc = 0x17cd60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17cd64:
    // 0x17cd64: 0x2ca20004
    ctx->pc = 0x17cd64u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 4));
label_17cd68:
    // 0x17cd68: 0x14400009
label_17cd6c:
    if (ctx->pc == 0x17CD6Cu) {
        ctx->pc = 0x17CD6Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17CD70u;
        goto label_17cd70;
    }
    ctx->pc = 0x17CD68u;
    {
        const bool branch_taken_0x17cd68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17CD6Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17cd68) {
            ctx->pc = 0x17CD90u;
            goto label_17cd90;
        }
    }
    ctx->pc = 0x17CD70u;
label_17cd70:
    // 0x17cd70: 0x8c820028
    ctx->pc = 0x17cd70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_17cd74:
    // 0x17cd74: 0x50400014
label_17cd78:
    if (ctx->pc == 0x17CD78u) {
        ctx->pc = 0x17CD78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17CD7Cu;
        goto label_17cd7c;
    }
    ctx->pc = 0x17CD74u;
    {
        const bool branch_taken_0x17cd74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17cd74) {
            ctx->pc = 0x17CD78u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17CDC8u;
            goto label_17cdc8;
        }
    }
    ctx->pc = 0x17CD7Cu;
label_17cd7c:
    // 0x17cd7c: 0x8c84002c
    ctx->pc = 0x17cd7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_17cd80:
    // 0x17cd80: 0x40f809
label_17cd84:
    if (ctx->pc == 0x17CD84u) {
        ctx->pc = 0x17CD84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17CD88u;
        goto label_17cd88;
    }
    ctx->pc = 0x17CD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17CD88u);
        ctx->pc = 0x17CD84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CD60u: goto label_17cd60;
            case 0x17CD64u: goto label_17cd64;
            case 0x17CD68u: goto label_17cd68;
            case 0x17CD6Cu: goto label_17cd6c;
            case 0x17CD70u: goto label_17cd70;
            case 0x17CD74u: goto label_17cd74;
            case 0x17CD78u: goto label_17cd78;
            case 0x17CD7Cu: goto label_17cd7c;
            case 0x17CD80u: goto label_17cd80;
            case 0x17CD84u: goto label_17cd84;
            case 0x17CD88u: goto label_17cd88;
            case 0x17CD8Cu: goto label_17cd8c;
            case 0x17CD90u: goto label_17cd90;
            case 0x17CD94u: goto label_17cd94;
            case 0x17CD98u: goto label_17cd98;
            case 0x17CD9Cu: goto label_17cd9c;
            case 0x17CDA0u: goto label_17cda0;
            case 0x17CDA4u: goto label_17cda4;
            case 0x17CDA8u: goto label_17cda8;
            case 0x17CDACu: goto label_17cdac;
            case 0x17CDB0u: goto label_17cdb0;
            case 0x17CDB4u: goto label_17cdb4;
            case 0x17CDB8u: goto label_17cdb8;
            case 0x17CDBCu: goto label_17cdbc;
            case 0x17CDC0u: goto label_17cdc0;
            case 0x17CDC4u: goto label_17cdc4;
            case 0x17CDC8u: goto label_17cdc8;
            case 0x17CDCCu: goto label_17cdcc;
            case 0x17CDD0u: goto label_17cdd0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17CD88u; }
            if (ctx->pc != 0x17CD88u) { return; }
        }
    }
    ctx->pc = 0x17CD88u;
label_17cd88:
    // 0x17cd88: 0x1000000f
label_17cd8c:
    if (ctx->pc == 0x17CD8Cu) {
        ctx->pc = 0x17CD8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17CD90u;
        goto label_17cd90;
    }
    ctx->pc = 0x17CD88u;
    {
        const bool branch_taken_0x17cd88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CD8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17cd88) {
            ctx->pc = 0x17CDC8u;
            goto label_17cdc8;
        }
    }
    ctx->pc = 0x17CD90u;
label_17cd90:
    // 0x17cd90: 0x51080
    ctx->pc = 0x17cd90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_17cd94:
    // 0x17cd94: 0x821021
    ctx->pc = 0x17cd94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_17cd98:
    // 0x17cd98: 0x8c440018
    ctx->pc = 0x17cd98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_17cd9c:
    // 0x17cd9c: 0x10800009
label_17cda0:
    if (ctx->pc == 0x17CDA0u) {
        ctx->pc = 0x17CDA0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17CDA4u;
        goto label_17cda4;
    }
    ctx->pc = 0x17CD9Cu;
    {
        const bool branch_taken_0x17cd9c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CDA0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17cd9c) {
            ctx->pc = 0x17CDC4u;
            goto label_17cdc4;
        }
    }
    ctx->pc = 0x17CDA4u;
label_17cda4:
    // 0x17cda4: 0x0
    ctx->pc = 0x17cda4u;
    // NOP
label_17cda8:
    // 0x17cda8: 0x8c82000c
    ctx->pc = 0x17cda8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17cdac:
    // 0x17cdac: 0x8c840000
    ctx->pc = 0x17cdacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17cdb0:
    // 0x17cdb0: 0x621821
    ctx->pc = 0x17cdb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17cdb4:
    // 0x17cdb4: 0x0
    ctx->pc = 0x17cdb4u;
    // NOP
label_17cdb8:
    // 0x17cdb8: 0x0
    ctx->pc = 0x17cdb8u;
    // NOP
label_17cdbc:
    // 0x17cdbc: 0x1480fffa
label_17cdc0:
    if (ctx->pc == 0x17CDC0u) {
        ctx->pc = 0x17CDC4u;
        goto label_17cdc4;
    }
    ctx->pc = 0x17CDBCu;
    {
        const bool branch_taken_0x17cdbc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x17cdbc) {
            ctx->pc = 0x17CDA8u;
            goto label_17cda8;
        }
    }
    ctx->pc = 0x17CDC4u;
label_17cdc4:
    // 0x17cdc4: 0x60102d
    ctx->pc = 0x17cdc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17cdc8:
    // 0x17cdc8: 0xdfbf0000
    ctx->pc = 0x17cdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17cdcc:
    // 0x17cdcc: 0x3e00008
label_17cdd0:
    if (ctx->pc == 0x17CDD0u) {
        ctx->pc = 0x17CDD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17CDD4u;
        goto label_fallthrough_0x17cdcc;
    }
    ctx->pc = 0x17CDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CDD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CD60u: goto label_17cd60;
            case 0x17CD64u: goto label_17cd64;
            case 0x17CD68u: goto label_17cd68;
            case 0x17CD6Cu: goto label_17cd6c;
            case 0x17CD70u: goto label_17cd70;
            case 0x17CD74u: goto label_17cd74;
            case 0x17CD78u: goto label_17cd78;
            case 0x17CD7Cu: goto label_17cd7c;
            case 0x17CD80u: goto label_17cd80;
            case 0x17CD84u: goto label_17cd84;
            case 0x17CD88u: goto label_17cd88;
            case 0x17CD8Cu: goto label_17cd8c;
            case 0x17CD90u: goto label_17cd90;
            case 0x17CD94u: goto label_17cd94;
            case 0x17CD98u: goto label_17cd98;
            case 0x17CD9Cu: goto label_17cd9c;
            case 0x17CDA0u: goto label_17cda0;
            case 0x17CDA4u: goto label_17cda4;
            case 0x17CDA8u: goto label_17cda8;
            case 0x17CDACu: goto label_17cdac;
            case 0x17CDB0u: goto label_17cdb0;
            case 0x17CDB4u: goto label_17cdb4;
            case 0x17CDB8u: goto label_17cdb8;
            case 0x17CDBCu: goto label_17cdbc;
            case 0x17CDC0u: goto label_17cdc0;
            case 0x17CDC4u: goto label_17cdc4;
            case 0x17CDC8u: goto label_17cdc8;
            case 0x17CDCCu: goto label_17cdcc;
            case 0x17CDD0u: goto label_17cdd0;
            default: break;
        }
        return;
    }
label_fallthrough_0x17cdcc:
    ctx->pc = 0x17CDD4u;
}
