#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFD_GetCond
// Address: 0x18f5d8 - 0x18f5ec
void MWSFD_GetCond_0x18f5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFD_GetCond");


    ctx->pc = 0x18f5d8u;

    // 0x18f5d8: 0x10800002
    ctx->pc = 0x18F5D8u;
    {
        const bool branch_taken_0x18f5d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F5DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f5d8) {
            ctx->pc = 0x18F5E4u;
            goto label_18f5e4;
        }
    }
    ctx->pc = 0x18F5E0u;
    // 0x18f5e0: 0x8c820030
    ctx->pc = 0x18f5e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_18f5e4:
    // 0x18f5e4: 0x806749e
    ctx->pc = 0x18F5E4u;
    ctx->pc = 0x18F5E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D278u;
    SFD_GetCond_0x19d278(rdram, ctx, runtime); return;
    ctx->pc = 0x18F5ECu;
}
