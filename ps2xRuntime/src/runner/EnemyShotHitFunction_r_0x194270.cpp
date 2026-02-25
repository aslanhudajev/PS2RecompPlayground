#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotHitFunction_r
// Address: 0x194270 - 0x194278
void EnemyShotHitFunction_r_0x194270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotHitFunction_r_0x194270");
#endif

    ctx->pc = 0x194270u;

    // 0x194270: 0x3e00008  jr          $ra
    ctx->pc = 0x194270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194278u;
}
