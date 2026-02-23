#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFD_SetCond
// Address: 0x18f5c0 - 0x18f5d4
void MWSFD_SetCond_0x18f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFD_SetCond");


    ctx->pc = 0x18f5c0u;

    // 0x18f5c0: 0x10800002
    ctx->pc = 0x18F5C0u;
    {
        const bool branch_taken_0x18f5c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F5C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f5c0) {
            ctx->pc = 0x18F5CCu;
            goto label_18f5cc;
        }
    }
    ctx->pc = 0x18F5C8u;
    // 0x18f5c8: 0x8c820030
    ctx->pc = 0x18f5c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_18f5cc:
    // 0x18f5cc: 0x806741e
    ctx->pc = 0x18F5CCu;
    ctx->pc = 0x18F5D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18F5D4u;
}
