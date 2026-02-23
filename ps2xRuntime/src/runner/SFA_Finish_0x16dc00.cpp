#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFA_Finish
// Address: 0x16dc00 - 0x16dc10
void SFA_Finish_0x16dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFA_Finish");


    ctx->pc = 0x16dc00u;

    // 0x16dc00: 0x8f8281f4
    ctx->pc = 0x16dc00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935028)));
    // 0x16dc04: 0x2442ffff
    ctx->pc = 0x16dc04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16dc08: 0x3e00008
    ctx->pc = 0x16DC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DC0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935028), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DC10u;
}
