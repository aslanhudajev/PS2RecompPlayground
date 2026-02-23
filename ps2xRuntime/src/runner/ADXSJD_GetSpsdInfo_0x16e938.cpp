#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetSpsdInfo
// Address: 0x16e938 - 0x16e940
void ADXSJD_GetSpsdInfo_0x16e938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetSpsdInfo");


    ctx->pc = 0x16e938u;

    // 0x16e938: 0x3e00008
    ctx->pc = 0x16E938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E93Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 88));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E940u;
}
