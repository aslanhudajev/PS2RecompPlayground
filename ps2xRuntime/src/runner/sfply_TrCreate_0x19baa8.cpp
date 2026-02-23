#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_TrCreate
// Address: 0x19baa8 - 0x19bac4
void sfply_TrCreate_0x19baa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_TrCreate");


    ctx->pc = 0x19baa8u;

    // 0x19baa8: 0x27bdfff0
    ctx->pc = 0x19baa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19baac: 0xffbf0000
    ctx->pc = 0x19baacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bab0: 0xc067ca6
    ctx->pc = 0x19BAB0u;
    SET_GPR_U32(ctx, 31, 0x19BAB8u);
    ctx->pc = 0x19BAB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x19F298u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrSetup_0x19f298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAB8u; }
        else if (ctx->pc != 0x19BAB8u) { ctx->pc = 0x19BAB8u; }
    }
    if (ctx->pc != 0x19BAB8u) { return; }
    ctx->pc = 0x19BAB8u;
    // 0x19bab8: 0xdfbf0000
    ctx->pc = 0x19bab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19babc: 0x3e00008
    ctx->pc = 0x19BABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BAC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BAC4u;
}
