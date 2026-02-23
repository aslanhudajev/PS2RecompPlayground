#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001400B8
// Address: 0x1400b8 - 0x1400d0
void sub_001400B8_0x1400b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001400B8");


    ctx->pc = 0x1400b8u;

    // 0x1400b8: 0x8055140
    ctx->pc = 0x1400B8u;
    ctx->pc = 0x1400BCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    ctx->pc = 0x154500u;
    Exit_0x154500(rdram, ctx, runtime); return;
    ctx->pc = 0x1400C0u;
    // 0x1400c0: 0x24030023
    ctx->pc = 0x1400c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 35));
    // 0x1400c4: 0xc
    ctx->pc = 0x1400c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1400c8: 0x0
    ctx->pc = 0x1400c8u;
    // NOP
    // 0x1400cc: 0x0
    ctx->pc = 0x1400ccu;
    // NOP
}
