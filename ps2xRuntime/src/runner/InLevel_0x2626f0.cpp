#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InLevel
// Address: 0x2626f0 - 0x262768
void InLevel_0x2626f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2626f0u;

    // 0x2626f0: 0x3c020034
    ctx->pc = 0x2626f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2626f4: 0x8c45e7c8
    ctx->pc = 0x2626f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x2626f8: 0x80a30008
    ctx->pc = 0x2626f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2626fc: 0x80820000
    ctx->pc = 0x2626fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x262700: 0x14620017
    ctx->pc = 0x262700u;
    {
        const bool branch_taken_0x262700 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x262700) {
            ctx->pc = 0x262760u;
            goto label_262760;
        }
    }
    ctx->pc = 0x262708u;
    // 0x262708: 0x80a30009
    ctx->pc = 0x262708u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x26270c: 0x10600004
    ctx->pc = 0x26270Cu;
    {
        const bool branch_taken_0x26270c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x262710u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26270c) {
            ctx->pc = 0x262720u;
            goto label_262720;
        }
    }
    ctx->pc = 0x262714u;
    // 0x262714: 0x80820001
    ctx->pc = 0x262714u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x262718: 0x14620011
    ctx->pc = 0x262718u;
    {
        const bool branch_taken_0x262718 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26271Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x262718) {
            ctx->pc = 0x262760u;
            goto label_262760;
        }
    }
    ctx->pc = 0x262720u;
label_262720:
    // 0x262720: 0x8c42e7c8
    ctx->pc = 0x262720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x262724: 0x8043000a
    ctx->pc = 0x262724u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x262728: 0x10600004
    ctx->pc = 0x262728u;
    {
        const bool branch_taken_0x262728 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x26272Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x262728) {
            ctx->pc = 0x26273Cu;
            goto label_26273c;
        }
    }
    ctx->pc = 0x262730u;
    // 0x262730: 0x80820002
    ctx->pc = 0x262730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x262734: 0x1462000a
    ctx->pc = 0x262734u;
    {
        const bool branch_taken_0x262734 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x262738u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x262734) {
            ctx->pc = 0x262760u;
            goto label_262760;
        }
    }
    ctx->pc = 0x26273Cu;
label_26273c:
    // 0x26273c: 0x8c42e7c8
    ctx->pc = 0x26273cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x262740: 0x8043000b
    ctx->pc = 0x262740u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x262744: 0x10600004
    ctx->pc = 0x262744u;
    {
        const bool branch_taken_0x262744 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x262744) {
            ctx->pc = 0x262758u;
            goto label_262758;
        }
    }
    ctx->pc = 0x26274Cu;
    // 0x26274c: 0x80820003
    ctx->pc = 0x26274cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x262750: 0x14620003
    ctx->pc = 0x262750u;
    {
        const bool branch_taken_0x262750 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x262750) {
            ctx->pc = 0x262760u;
            goto label_262760;
        }
    }
    ctx->pc = 0x262758u;
label_262758:
    // 0x262758: 0x3e00008
    ctx->pc = 0x262758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26275Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262720u: goto label_262720;
            case 0x26273Cu: goto label_26273c;
            case 0x262758u: goto label_262758;
            case 0x262760u: goto label_262760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262760u;
label_262760:
    // 0x262760: 0x3e00008
    ctx->pc = 0x262760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262764u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262720u: goto label_262720;
            case 0x26273Cu: goto label_26273c;
            case 0x262758u: goto label_262758;
            case 0x262760u: goto label_262760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262768u;
}
