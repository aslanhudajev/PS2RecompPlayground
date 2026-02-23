#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_SetCcnt
// Address: 0x183728 - 0x183744
void MPVCMC_SetCcnt_0x183728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_SetCcnt");


    ctx->pc = 0x183728u;

    // 0x183728: 0x8c85017c
    ctx->pc = 0x183728u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x18372c: 0x24020004
    ctx->pc = 0x18372cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x183730: 0x2403ffff
    ctx->pc = 0x183730u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183734: 0x65100a
    ctx->pc = 0x183734u;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x183738: 0xac8200f8
    ctx->pc = 0x183738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 2));
    // 0x18373c: 0x3e00008
    ctx->pc = 0x18373Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183740u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183744u;
}
