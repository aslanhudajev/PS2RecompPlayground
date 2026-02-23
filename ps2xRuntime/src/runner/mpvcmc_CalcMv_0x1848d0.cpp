#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_CalcMv
// Address: 0x1848d0 - 0x1848f4
void mpvcmc_CalcMv_0x1848d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_CalcMv");


    ctx->pc = 0x1848d0u;

    // 0x1848d0: 0x30830001
    ctx->pc = 0x1848d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1));
    // 0x1848d4: 0x30a20001
    ctx->pc = 0x1848d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 1));
    // 0x1848d8: 0x42043
    ctx->pc = 0x1848d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1848dc: 0x52843
    ctx->pc = 0x1848dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1848e0: 0xacc2000c
    ctx->pc = 0x1848e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x1848e4: 0xacc40000
    ctx->pc = 0x1848e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1848e8: 0xacc50004
    ctx->pc = 0x1848e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1848ec: 0x3e00008
    ctx->pc = 0x1848ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1848F0u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1848F4u;
}
