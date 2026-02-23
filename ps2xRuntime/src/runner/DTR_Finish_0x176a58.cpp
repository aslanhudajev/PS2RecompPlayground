#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTR_Finish
// Address: 0x176a58 - 0x176a68
void DTR_Finish_0x176a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTR_Finish");


    ctx->pc = 0x176a58u;

    // 0x176a58: 0x8f828278
    ctx->pc = 0x176a58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935160)));
    // 0x176a5c: 0x2442ffff
    ctx->pc = 0x176a5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x176a60: 0x3e00008
    ctx->pc = 0x176A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176A64u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935160), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176A68u;
}
