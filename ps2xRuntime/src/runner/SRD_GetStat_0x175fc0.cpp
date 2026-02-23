#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_GetStat
// Address: 0x175fc0 - 0x175fcc
void SRD_GetStat_0x175fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_GetStat");


    ctx->pc = 0x175fc0u;

    // 0x175fc0: 0x3c030024
    ctx->pc = 0x175fc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x175fc4: 0x3e00008
    ctx->pc = 0x175FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175FC8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294936436)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175FCCu;
}
