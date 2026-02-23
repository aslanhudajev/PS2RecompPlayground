#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: waitLoop__10PlayerTaskFv
// Address: 0x20efe0 - 0x20f044
void waitLoop__10PlayerTaskFv_0x20efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("waitLoop__10PlayerTaskFv");


    ctx->pc = 0x20efe0u;

    // 0x20efe0: 0x27bdfff0
    ctx->pc = 0x20efe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20efe4: 0x7fbf0000
    ctx->pc = 0x20efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20efe8: 0x8f838cb0
    ctx->pc = 0x20efe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20efec: 0x30630001
    ctx->pc = 0x20efecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x20eff0: 0x10600007
    ctx->pc = 0x20EFF0u;
    {
        const bool branch_taken_0x20eff0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20eff0) {
            ctx->pc = 0x20F010u;
            goto label_20f010;
        }
    }
    ctx->pc = 0x20EFF8u;
    // 0x20eff8: 0x8c831cbc
    ctx->pc = 0x20eff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20effc: 0x8c620094
    ctx->pc = 0x20effcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x20f000: 0xc08385c
    ctx->pc = 0x20F000u;
    SET_GPR_U32(ctx, 31, 0x20F008u);
    ctx->pc = 0x20F004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x20E170u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__10PlayerTaskFv_0x20e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F008u; }
        else if (ctx->pc != 0x20F008u) { ctx->pc = 0x20F008u; }
    }
    if (ctx->pc != 0x20F008u) { return; }
    ctx->pc = 0x20F008u;
    // 0x20f008: 0x1000000c
    ctx->pc = 0x20F008u;
    {
        const bool branch_taken_0x20f008 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F00Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x20f008) {
            ctx->pc = 0x20F03Cu;
            goto label_20f03c;
        }
    }
    ctx->pc = 0x20F010u;
label_20f010:
    // 0x20f010: 0x8f838be4
    ctx->pc = 0x20f010u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x20f014: 0x30630020
    ctx->pc = 0x20f014u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32));
    // 0x20f018: 0x10600007
    ctx->pc = 0x20F018u;
    {
        const bool branch_taken_0x20f018 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f018) {
            ctx->pc = 0x20F038u;
            goto label_20f038;
        }
    }
    ctx->pc = 0x20F020u;
    // 0x20f020: 0x97838bf4
    ctx->pc = 0x20f020u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
    // 0x20f024: 0x14600004
    ctx->pc = 0x20F024u;
    {
        const bool branch_taken_0x20f024 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20f024) {
            ctx->pc = 0x20F038u;
            goto label_20f038;
        }
    }
    ctx->pc = 0x20F02Cu;
    // 0x20f02c: 0x8c8327fc
    ctx->pc = 0x20f02cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 10236)));
    // 0x20f030: 0x34630001
    ctx->pc = 0x20f030u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
    // 0x20f034: 0xac8327fc
    ctx->pc = 0x20f034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10236), GPR_U32(ctx, 3));
label_20f038:
    // 0x20f038: 0x7bbf0000
    ctx->pc = 0x20f038u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f03c:
    // 0x20f03c: 0x3e00008
    ctx->pc = 0x20F03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F040u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F010u: goto label_20f010;
            case 0x20F038u: goto label_20f038;
            case 0x20F03Cu: goto label_20f03c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F044u;
}
