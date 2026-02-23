#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isceSifDmaStat
// Address: 0x154c90 - 0x154ca0
void isceSifDmaStat_0x154c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isceSifDmaStat");


    ctx->pc = 0x154c90u;

    // 0x154c90: 0x2403ff8a
    ctx->pc = 0x154c90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967178));
    // 0x154c94: 0xc
    ctx->pc = 0x154c94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154c98: 0x3e00008
    ctx->pc = 0x154C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154CA0u;
}
