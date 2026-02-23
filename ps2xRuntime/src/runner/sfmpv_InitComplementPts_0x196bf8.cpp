#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_InitComplementPts
// Address: 0x196bf8 - 0x196c1c
void sfmpv_InitComplementPts_0x196bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_InitComplementPts");


    ctx->pc = 0x196bf8u;

    // 0x196bf8: 0x2403ffff
    ctx->pc = 0x196bf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196bfc: 0x2482000c
    ctx->pc = 0x196bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 12));
    // 0x196c00: 0xac83000c
    ctx->pc = 0x196c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x196c04: 0xac800000
    ctx->pc = 0x196c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x196c08: 0xac800004
    ctx->pc = 0x196c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x196c0c: 0xac800008
    ctx->pc = 0x196c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x196c10: 0xac430008
    ctx->pc = 0x196c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x196c14: 0x3e00008
    ctx->pc = 0x196C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196C18u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196C1Cu;
}
