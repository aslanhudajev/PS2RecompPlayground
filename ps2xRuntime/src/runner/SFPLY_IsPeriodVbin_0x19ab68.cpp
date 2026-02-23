#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFPLY_IsPeriodVbin
// Address: 0x19ab68 - 0x19ab78
void SFPLY_IsPeriodVbin_0x19ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFPLY_IsPeriodVbin");


    ctx->pc = 0x19ab68u;

    // 0x19ab68: 0x3c030026
    ctx->pc = 0x19ab68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x19ab6c: 0x8c62df58
    ctx->pc = 0x19ab6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294958936)));
    // 0x19ab70: 0x3e00008
    ctx->pc = 0x19AB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AB74u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AB78u;
}
