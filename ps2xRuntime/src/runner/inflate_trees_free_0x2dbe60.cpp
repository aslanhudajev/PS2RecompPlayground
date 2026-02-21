#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_trees_free
// Address: 0x2dbe60 - 0x2dbedc
void inflate_trees_free_0x2dbe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dbe60u;

label_2dbe60:
    // 0x2dbe60: 0x27bdffd0
    ctx->pc = 0x2dbe60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_2dbe64:
    // 0x2dbe64: 0xffbf0020
    ctx->pc = 0x2dbe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2dbe68:
    // 0x2dbe68: 0xffb10010
    ctx->pc = 0x2dbe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2dbe6c:
    // 0x2dbe6c: 0xffb00000
    ctx->pc = 0x2dbe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2dbe70:
    // 0x2dbe70: 0xa0882d
    ctx->pc = 0x2dbe70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe74:
    // 0x2dbe74: 0x80802d
    ctx->pc = 0x2dbe74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe78:
    // 0x2dbe78: 0x12000008
label_2dbe7c:
    if (ctx->pc == 0x2DBE7Cu) {
        ctx->pc = 0x2DBE7Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE80u;
        goto label_2dbe80;
    }
    ctx->pc = 0x2DBE78u;
    {
        const bool branch_taken_0x2dbe78 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBE7Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe78) {
            ctx->pc = 0x2DBE9Cu;
            goto label_2dbe9c;
        }
    }
    ctx->pc = 0x2DBE80u;
label_2dbe80:
    // 0x2dbe80: 0x8e02fffc
    ctx->pc = 0x2dbe80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_2dbe84:
    // 0x2dbe84: 0xae05fffc
    ctx->pc = 0x2dbe84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 5));
label_2dbe88:
    // 0x2dbe88: 0x200282d
    ctx->pc = 0x2dbe88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe8c:
    // 0x2dbe8c: 0x40802d
    ctx->pc = 0x2dbe8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe90:
    // 0x2dbe90: 0x0
    ctx->pc = 0x2dbe90u;
    // NOP
label_2dbe94:
    // 0x2dbe94: 0x1600fffa
label_2dbe98:
    if (ctx->pc == 0x2DBE98u) {
        ctx->pc = 0x2DBE9Cu;
        goto label_2dbe9c;
    }
    ctx->pc = 0x2DBE94u;
    {
        const bool branch_taken_0x2dbe94 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dbe94) {
            ctx->pc = 0x2DBE80u;
            goto label_2dbe80;
        }
    }
    ctx->pc = 0x2DBE9Cu;
label_2dbe9c:
    // 0x2dbe9c: 0x10a0000a
label_2dbea0:
    if (ctx->pc == 0x2DBEA0u) {
        ctx->pc = 0x2DBEA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBEA4u;
        goto label_2dbea4;
    }
    ctx->pc = 0x2DBE9Cu;
    {
        const bool branch_taken_0x2dbe9c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DBEA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe9c) {
            ctx->pc = 0x2DBEC8u;
            goto label_2dbec8;
        }
    }
    ctx->pc = 0x2DBEA4u;
label_2dbea4:
    // 0x2dbea4: 0x24a5fff8
    ctx->pc = 0x2dbea4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967288));
label_2dbea8:
    // 0x2dbea8: 0x8cb00004
    ctx->pc = 0x2dbea8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2dbeac:
    // 0x2dbeac: 0x8e220024
    ctx->pc = 0x2dbeacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2dbeb0:
    // 0x2dbeb0: 0x40f809
label_2dbeb4:
    if (ctx->pc == 0x2DBEB4u) {
        ctx->pc = 0x2DBEB4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x2DBEB8u;
        goto label_2dbeb8;
    }
    ctx->pc = 0x2DBEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DBEB8u);
        ctx->pc = 0x2DBEB4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DBE60u: goto label_2dbe60;
            case 0x2DBE64u: goto label_2dbe64;
            case 0x2DBE68u: goto label_2dbe68;
            case 0x2DBE6Cu: goto label_2dbe6c;
            case 0x2DBE70u: goto label_2dbe70;
            case 0x2DBE74u: goto label_2dbe74;
            case 0x2DBE78u: goto label_2dbe78;
            case 0x2DBE7Cu: goto label_2dbe7c;
            case 0x2DBE80u: goto label_2dbe80;
            case 0x2DBE84u: goto label_2dbe84;
            case 0x2DBE88u: goto label_2dbe88;
            case 0x2DBE8Cu: goto label_2dbe8c;
            case 0x2DBE90u: goto label_2dbe90;
            case 0x2DBE94u: goto label_2dbe94;
            case 0x2DBE98u: goto label_2dbe98;
            case 0x2DBE9Cu: goto label_2dbe9c;
            case 0x2DBEA0u: goto label_2dbea0;
            case 0x2DBEA4u: goto label_2dbea4;
            case 0x2DBEA8u: goto label_2dbea8;
            case 0x2DBEACu: goto label_2dbeac;
            case 0x2DBEB0u: goto label_2dbeb0;
            case 0x2DBEB4u: goto label_2dbeb4;
            case 0x2DBEB8u: goto label_2dbeb8;
            case 0x2DBEBCu: goto label_2dbebc;
            case 0x2DBEC0u: goto label_2dbec0;
            case 0x2DBEC4u: goto label_2dbec4;
            case 0x2DBEC8u: goto label_2dbec8;
            case 0x2DBECCu: goto label_2dbecc;
            case 0x2DBED0u: goto label_2dbed0;
            case 0x2DBED4u: goto label_2dbed4;
            case 0x2DBED8u: goto label_2dbed8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DBEB8u; }
            if (ctx->pc != 0x2DBEB8u) { return; }
        }
    }
    ctx->pc = 0x2DBEB8u;
label_2dbeb8:
    // 0x2dbeb8: 0x200282d
    ctx->pc = 0x2dbeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbebc:
    // 0x2dbebc: 0x54a0fffa
label_2dbec0:
    if (ctx->pc == 0x2DBEC0u) {
        ctx->pc = 0x2DBEC0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->pc = 0x2DBEC4u;
        goto label_2dbec4;
    }
    ctx->pc = 0x2DBEBCu;
    {
        const bool branch_taken_0x2dbebc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dbebc) {
            ctx->pc = 0x2DBEC0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967288));
            ctx->pc = 0x2DBEA8u;
            goto label_2dbea8;
        }
    }
    ctx->pc = 0x2DBEC4u;
label_2dbec4:
    // 0x2dbec4: 0x102d
    ctx->pc = 0x2dbec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbec8:
    // 0x2dbec8: 0xdfbf0020
    ctx->pc = 0x2dbec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2dbecc:
    // 0x2dbecc: 0xdfb10010
    ctx->pc = 0x2dbeccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dbed0:
    // 0x2dbed0: 0xdfb00000
    ctx->pc = 0x2dbed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbed4:
    // 0x2dbed4: 0x3e00008
label_2dbed8:
    if (ctx->pc == 0x2DBED8u) {
        ctx->pc = 0x2DBED8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2DBEDCu;
        goto label_fallthrough_0x2dbed4;
    }
    ctx->pc = 0x2DBED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBED8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DBE60u: goto label_2dbe60;
            case 0x2DBE64u: goto label_2dbe64;
            case 0x2DBE68u: goto label_2dbe68;
            case 0x2DBE6Cu: goto label_2dbe6c;
            case 0x2DBE70u: goto label_2dbe70;
            case 0x2DBE74u: goto label_2dbe74;
            case 0x2DBE78u: goto label_2dbe78;
            case 0x2DBE7Cu: goto label_2dbe7c;
            case 0x2DBE80u: goto label_2dbe80;
            case 0x2DBE84u: goto label_2dbe84;
            case 0x2DBE88u: goto label_2dbe88;
            case 0x2DBE8Cu: goto label_2dbe8c;
            case 0x2DBE90u: goto label_2dbe90;
            case 0x2DBE94u: goto label_2dbe94;
            case 0x2DBE98u: goto label_2dbe98;
            case 0x2DBE9Cu: goto label_2dbe9c;
            case 0x2DBEA0u: goto label_2dbea0;
            case 0x2DBEA4u: goto label_2dbea4;
            case 0x2DBEA8u: goto label_2dbea8;
            case 0x2DBEACu: goto label_2dbeac;
            case 0x2DBEB0u: goto label_2dbeb0;
            case 0x2DBEB4u: goto label_2dbeb4;
            case 0x2DBEB8u: goto label_2dbeb8;
            case 0x2DBEBCu: goto label_2dbebc;
            case 0x2DBEC0u: goto label_2dbec0;
            case 0x2DBEC4u: goto label_2dbec4;
            case 0x2DBEC8u: goto label_2dbec8;
            case 0x2DBECCu: goto label_2dbecc;
            case 0x2DBED0u: goto label_2dbed0;
            case 0x2DBED4u: goto label_2dbed4;
            case 0x2DBED8u: goto label_2dbed8;
            default: break;
        }
        return;
    }
label_fallthrough_0x2dbed4:
    ctx->pc = 0x2DBEDCu;
}
