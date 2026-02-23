#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _Bfree
// Address: 0x143570 - 0x14359c
void ps2__Bfree_0x143570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2__Bfree");


    ctx->pc = 0x143570u;

    // 0x143570: 0x10a00008
    ctx->pc = 0x143570u;
    {
        const bool branch_taken_0x143570 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x143570) {
            ctx->pc = 0x143594u;
            goto label_143594;
        }
    }
    ctx->pc = 0x143578u;
    // 0x143578: 0x8ca20004
    ctx->pc = 0x143578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14357c: 0x8c84004c
    ctx->pc = 0x14357cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x143580: 0x21080
    ctx->pc = 0x143580u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x143584: 0x441021
    ctx->pc = 0x143584u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x143588: 0x8c430000
    ctx->pc = 0x143588u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14358c: 0xaca30000
    ctx->pc = 0x14358cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x143590: 0xac450000
    ctx->pc = 0x143590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_143594:
    // 0x143594: 0x3e00008
    ctx->pc = 0x143594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143594u: goto label_143594;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14359Cu;
}
