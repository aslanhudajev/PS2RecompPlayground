#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setPatChg__7CFcvTRSFii
// Address: 0x1e7ad0 - 0x1e7ae8
void setPatChg__7CFcvTRSFii_0x1e7ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setPatChg__7CFcvTRSFii");


    ctx->pc = 0x1e7ad0u;

    // 0x1e7ad0: 0xac8500e4
    ctx->pc = 0x1e7ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 5));
    // 0x1e7ad4: 0xac8600e8
    ctx->pc = 0x1e7ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 6));
    // 0x1e7ad8: 0x8c8300ec
    ctx->pc = 0x1e7ad8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e7adc: 0x34630008
    ctx->pc = 0x1e7adcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8));
    // 0x1e7ae0: 0x3e00008
    ctx->pc = 0x1E7AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7AE4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7AE8u;
}
