#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _defRestartDMA
// Address: 0x164e38 - 0x164e44
void _defRestartDMA_0x164e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_defRestartDMA");


    ctx->pc = 0x164e38u;

    // 0x164e38: 0x8c840040
    ctx->pc = 0x164e38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x164e3c: 0x8055014
    ctx->pc = 0x164E3Cu;
    ctx->pc = 0x164E40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 76));
    ctx->pc = 0x154050u;
    sceIpuRestartDMA_0x154050(rdram, ctx, runtime); return;
    ctx->pc = 0x164E44u;
}
