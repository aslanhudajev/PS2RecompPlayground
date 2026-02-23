#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_Finish
// Address: 0x16dc40 - 0x16dc54
void ADXSJD_Finish_0x16dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_Finish");


    ctx->pc = 0x16dc40u;

    // 0x16dc40: 0x3c040023
    ctx->pc = 0x16dc40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16dc44: 0x282d
    ctx->pc = 0x16dc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc48: 0x248456e0
    ctx->pc = 0x16dc48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22240));
    // 0x16dc4c: 0x8050cfe
    ctx->pc = 0x16DC4Cu;
    ctx->pc = 0x16DC50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1248));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x16DC54u;
}
