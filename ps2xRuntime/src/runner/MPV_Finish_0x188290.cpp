#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_Finish
// Address: 0x188290 - 0x1882a0
void MPV_Finish_0x188290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_Finish");


    ctx->pc = 0x188290u;

    // 0x188290: 0x3c02002e
    ctx->pc = 0x188290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x188294: 0x24050aa0
    ctx->pc = 0x188294u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2720));
    // 0x188298: 0x8062108
    ctx->pc = 0x188298u;
    ctx->pc = 0x18829Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 17088)));
    ctx->pc = 0x188420u;
    mpvlib_FreeLc_0x188420(rdram, ctx, runtime); return;
    ctx->pc = 0x1882A0u;
}
