#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_ResetVtimeTmr
// Address: 0x19dbd8 - 0x19dbe4
void sftim_ResetVtimeTmr_0x19dbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_ResetVtimeTmr");


    ctx->pc = 0x19dbd8u;

    // 0x19dbd8: 0x8c820254
    ctx->pc = 0x19dbd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x19dbdc: 0x3e00008
    ctx->pc = 0x19DBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DBE0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 636), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DBE4u;
}
