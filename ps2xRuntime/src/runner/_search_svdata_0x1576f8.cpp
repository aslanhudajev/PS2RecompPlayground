#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _search_svdata
// Address: 0x1576f8 - 0x157744
void _search_svdata_0x1576f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_search_svdata");


    ctx->pc = 0x1576f8u;

    // 0x1576f8: 0x8ca50028
    ctx->pc = 0x1576f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1576fc: 0x10a0000f
    ctx->pc = 0x1576FCu;
    {
        const bool branch_taken_0x1576fc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1576fc) {
            ctx->pc = 0x15773Cu;
            goto label_15773c;
        }
    }
    ctx->pc = 0x157704u;
    // 0x157704: 0x8ca30008
    ctx->pc = 0x157704u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_157708:
    // 0x157708: 0x5060000a
    ctx->pc = 0x157708u;
    {
        const bool branch_taken_0x157708 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x157708) {
            ctx->pc = 0x15770Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->pc = 0x157734u;
            goto label_157734;
        }
    }
    ctx->pc = 0x157710u;
    // 0x157710: 0x8c620000
    ctx->pc = 0x157710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157714: 0x0
    ctx->pc = 0x157714u;
    // NOP
label_157718:
    // 0x157718: 0x54440003
    ctx->pc = 0x157718u;
    {
        const bool branch_taken_0x157718 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x157718) {
            ctx->pc = 0x15771Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->pc = 0x157728u;
            goto label_157728;
        }
    }
    ctx->pc = 0x157720u;
    // 0x157720: 0x3e00008
    ctx->pc = 0x157720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157724u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157708u: goto label_157708;
            case 0x157718u: goto label_157718;
            case 0x157728u: goto label_157728;
            case 0x157734u: goto label_157734;
            case 0x15773Cu: goto label_15773c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157728u;
label_157728:
    // 0x157728: 0x5460fffb
    ctx->pc = 0x157728u;
    {
        const bool branch_taken_0x157728 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x157728) {
            ctx->pc = 0x15772Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->pc = 0x157718u;
            goto label_157718;
        }
    }
    ctx->pc = 0x157730u;
    // 0x157730: 0x8ca50014
    ctx->pc = 0x157730u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_157734:
    // 0x157734: 0x54a0fff4
    ctx->pc = 0x157734u;
    {
        const bool branch_taken_0x157734 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x157734) {
            ctx->pc = 0x157738u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->pc = 0x157708u;
            goto label_157708;
        }
    }
    ctx->pc = 0x15773Cu;
label_15773c:
    // 0x15773c: 0x3e00008
    ctx->pc = 0x15773Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157740u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157708u: goto label_157708;
            case 0x157718u: goto label_157718;
            case 0x157728u: goto label_157728;
            case 0x157734u: goto label_157734;
            case 0x15773Cu: goto label_15773c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157744u;
}
