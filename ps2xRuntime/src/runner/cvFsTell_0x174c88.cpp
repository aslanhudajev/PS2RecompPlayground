#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsTell
// Address: 0x174c88 - 0x174cec
void cvFsTell_0x174c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsTell");


    ctx->pc = 0x174c88u;

label_174c88:
    // 0x174c88: 0x27bdffe0
    ctx->pc = 0x174c88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_174c8c:
    // 0x174c8c: 0xffbf0010
    ctx->pc = 0x174c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_174c90:
    // 0x174c90: 0x14800006
label_174c94:
    if (ctx->pc == 0x174C94u) {
        ctx->pc = 0x174C94u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x174C98u;
        goto label_174c98;
    }
    ctx->pc = 0x174C90u;
    {
        const bool branch_taken_0x174c90 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x174C94u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x174c90) {
            ctx->pc = 0x174CACu;
            goto label_174cac;
        }
    }
    ctx->pc = 0x174C98u;
label_174c98:
    // 0x174c98: 0x3c04002c
    ctx->pc = 0x174c98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174c9c:
    // 0x174c9c: 0xc05d076
label_174ca0:
    if (ctx->pc == 0x174CA0u) {
        ctx->pc = 0x174CA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944240));
        ctx->pc = 0x174CA4u;
        goto label_174ca4;
    }
    ctx->pc = 0x174C9Cu;
    SET_GPR_U32(ctx, 31, 0x174CA4u);
    ctx->pc = 0x174CA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944240));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CA4u; }
        else if (ctx->pc != 0x174CA4u) { ctx->pc = 0x174CA4u; }
    }
    if (ctx->pc != 0x174CA4u) { return; }
    ctx->pc = 0x174CA4u;
label_174ca4:
    // 0x174ca4: 0x1000000d
label_174ca8:
    if (ctx->pc == 0x174CA8u) {
        ctx->pc = 0x174CA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174CACu;
        goto label_174cac;
    }
    ctx->pc = 0x174CA4u;
    {
        const bool branch_taken_0x174ca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174CA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174ca4) {
            ctx->pc = 0x174CDCu;
            goto label_174cdc;
        }
    }
    ctx->pc = 0x174CACu;
label_174cac:
    // 0x174cac: 0x8c820000
    ctx->pc = 0x174cacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174cb0:
    // 0x174cb0: 0x8c42001c
    ctx->pc = 0x174cb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_174cb4:
    // 0x174cb4: 0x50400005
label_174cb8:
    if (ctx->pc == 0x174CB8u) {
        ctx->pc = 0x174CB8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x174CBCu;
        goto label_174cbc;
    }
    ctx->pc = 0x174CB4u;
    {
        const bool branch_taken_0x174cb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x174cb4) {
            ctx->pc = 0x174CB8u;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x174CCCu;
            goto label_174ccc;
        }
    }
    ctx->pc = 0x174CBCu;
label_174cbc:
    // 0x174cbc: 0x40f809
label_174cc0:
    if (ctx->pc == 0x174CC0u) {
        ctx->pc = 0x174CC0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x174CC4u;
        goto label_174cc4;
    }
    ctx->pc = 0x174CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174CC4u);
        ctx->pc = 0x174CC0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174C88u: goto label_174c88;
            case 0x174C8Cu: goto label_174c8c;
            case 0x174C90u: goto label_174c90;
            case 0x174C94u: goto label_174c94;
            case 0x174C98u: goto label_174c98;
            case 0x174C9Cu: goto label_174c9c;
            case 0x174CA0u: goto label_174ca0;
            case 0x174CA4u: goto label_174ca4;
            case 0x174CA8u: goto label_174ca8;
            case 0x174CACu: goto label_174cac;
            case 0x174CB0u: goto label_174cb0;
            case 0x174CB4u: goto label_174cb4;
            case 0x174CB8u: goto label_174cb8;
            case 0x174CBCu: goto label_174cbc;
            case 0x174CC0u: goto label_174cc0;
            case 0x174CC4u: goto label_174cc4;
            case 0x174CC8u: goto label_174cc8;
            case 0x174CCCu: goto label_174ccc;
            case 0x174CD0u: goto label_174cd0;
            case 0x174CD4u: goto label_174cd4;
            case 0x174CD8u: goto label_174cd8;
            case 0x174CDCu: goto label_174cdc;
            case 0x174CE0u: goto label_174ce0;
            case 0x174CE4u: goto label_174ce4;
            case 0x174CE8u: goto label_174ce8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174CC4u; }
            if (ctx->pc != 0x174CC4u) { return; }
        }
    }
    ctx->pc = 0x174CC4u;
label_174cc4:
    // 0x174cc4: 0x10000004
label_174cc8:
    if (ctx->pc == 0x174CC8u) {
        ctx->pc = 0x174CC8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174CCCu;
        goto label_174ccc;
    }
    ctx->pc = 0x174CC4u;
    {
        const bool branch_taken_0x174cc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174CC8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174cc4) {
            ctx->pc = 0x174CD8u;
            goto label_174cd8;
        }
    }
    ctx->pc = 0x174CCCu;
label_174ccc:
    // 0x174ccc: 0x802d
    ctx->pc = 0x174cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174cd0:
    // 0x174cd0: 0xc05d076
label_174cd4:
    if (ctx->pc == 0x174CD4u) {
        ctx->pc = 0x174CD4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944272));
        ctx->pc = 0x174CD8u;
        goto label_174cd8;
    }
    ctx->pc = 0x174CD0u;
    SET_GPR_U32(ctx, 31, 0x174CD8u);
    ctx->pc = 0x174CD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944272));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CD8u; }
        else if (ctx->pc != 0x174CD8u) { ctx->pc = 0x174CD8u; }
    }
    if (ctx->pc != 0x174CD8u) { return; }
    ctx->pc = 0x174CD8u;
label_174cd8:
    // 0x174cd8: 0x200102d
    ctx->pc = 0x174cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174cdc:
    // 0x174cdc: 0xdfbf0010
    ctx->pc = 0x174cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174ce0:
    // 0x174ce0: 0xdfb00000
    ctx->pc = 0x174ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174ce4:
    // 0x174ce4: 0x3e00008
label_174ce8:
    if (ctx->pc == 0x174CE8u) {
        ctx->pc = 0x174CE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x174CECu;
        goto label_fallthrough_0x174ce4;
    }
    ctx->pc = 0x174CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174CE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174C88u: goto label_174c88;
            case 0x174C8Cu: goto label_174c8c;
            case 0x174C90u: goto label_174c90;
            case 0x174C94u: goto label_174c94;
            case 0x174C98u: goto label_174c98;
            case 0x174C9Cu: goto label_174c9c;
            case 0x174CA0u: goto label_174ca0;
            case 0x174CA4u: goto label_174ca4;
            case 0x174CA8u: goto label_174ca8;
            case 0x174CACu: goto label_174cac;
            case 0x174CB0u: goto label_174cb0;
            case 0x174CB4u: goto label_174cb4;
            case 0x174CB8u: goto label_174cb8;
            case 0x174CBCu: goto label_174cbc;
            case 0x174CC0u: goto label_174cc0;
            case 0x174CC4u: goto label_174cc4;
            case 0x174CC8u: goto label_174cc8;
            case 0x174CCCu: goto label_174ccc;
            case 0x174CD0u: goto label_174cd0;
            case 0x174CD4u: goto label_174cd4;
            case 0x174CD8u: goto label_174cd8;
            case 0x174CDCu: goto label_174cdc;
            case 0x174CE0u: goto label_174ce0;
            case 0x174CE4u: goto label_174ce4;
            case 0x174CE8u: goto label_174ce8;
            default: break;
        }
        return;
    }
label_fallthrough_0x174ce4:
    ctx->pc = 0x174CECu;
}
