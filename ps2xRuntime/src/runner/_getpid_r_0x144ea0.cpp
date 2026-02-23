#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _getpid_r
// Address: 0x144ea0 - 0x144ebc
void _getpid_r_0x144ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_getpid_r");


    ctx->pc = 0x144ea0u;

    // 0x144ea0: 0x27bdfff0
    ctx->pc = 0x144ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144ea4: 0xffbf0000
    ctx->pc = 0x144ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144ea8: 0xc055402
    ctx->pc = 0x144EA8u;
    SET_GPR_U32(ctx, 31, 0x144EB0u);
    ctx->pc = 0x155008u;
    {
        const uint32_t __entryPc = ctx->pc;
        getpid_0x155008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144EB0u; }
        else if (ctx->pc != 0x144EB0u) { ctx->pc = 0x144EB0u; }
    }
    if (ctx->pc != 0x144EB0u) { return; }
    ctx->pc = 0x144EB0u;
    // 0x144eb0: 0xdfbf0000
    ctx->pc = 0x144eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144eb4: 0x3e00008
    ctx->pc = 0x144EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144EB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144EBCu;
}
