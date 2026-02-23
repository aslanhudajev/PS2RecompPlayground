#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyLock
// Address: 0x18c620 - 0x18c63c
void mwPlyLock_0x18c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyLock");
    ctx->pc = 0x18c620u;

    // 0x18c620: 0x27bdfff0
    ctx->pc = 0x18c620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c624: 0xffbf0000
    ctx->pc = 0x18c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c628: 0xc063dd0
    ctx->pc = 0x18C628u;
    SET_GPR_U32(ctx, 31, 0x18C630u);
    ctx->pc = 0x18F740u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Lock_0x18f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C630u; }
        else if (ctx->pc != 0x18C630u) { ctx->pc = 0x18C630u; }
    }
    if (ctx->pc != 0x18C630u) { return; }
    ctx->pc = 0x18C630u;
    // 0x18c630: 0xdfbf0000
    ctx->pc = 0x18c630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c634: 0x3e00008
    ctx->pc = 0x18C634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C638u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C63Cu;
}
