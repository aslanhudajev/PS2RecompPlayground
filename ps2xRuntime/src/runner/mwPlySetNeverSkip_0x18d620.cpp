#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySetNeverSkip
// Address: 0x18d620 - 0x18d644
void mwPlySetNeverSkip_0x18d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySetNeverSkip");


    ctx->pc = 0x18d620u;

    // 0x18d620: 0x24020001
    ctx->pc = 0x18d620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d624: 0x14a20004
    ctx->pc = 0x18D624u;
    {
        const bool branch_taken_0x18d624 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x18D628u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        if (branch_taken_0x18d624) {
            ctx->pc = 0x18D638u;
            goto label_18d638;
        }
    }
    ctx->pc = 0x18D62Cu;
    // 0x18d62c: 0x24050027
    ctx->pc = 0x18d62cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 39));
    // 0x18d630: 0x806741e
    ctx->pc = 0x18D630u;
    ctx->pc = 0x18D634u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18D638u;
label_18d638:
    // 0x18d638: 0x24050027
    ctx->pc = 0x18d638u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 39));
    // 0x18d63c: 0x806741e
    ctx->pc = 0x18D63Cu;
    ctx->pc = 0x18D640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18D644u;
}
