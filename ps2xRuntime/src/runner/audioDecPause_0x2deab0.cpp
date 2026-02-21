#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecPause
// Address: 0x2deab0 - 0x2deabc
void audioDecPause_0x2deab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2deab0u;

    // 0x2deab0: 0x24020003
    ctx->pc = 0x2deab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2deab4: 0x808839e
    ctx->pc = 0x2DEAB4u;
    ctx->pc = 0x2DEAB8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x220E78u;
    AudioStreamStop_0x220e78(rdram, ctx, runtime); return;
    ctx->pc = 0x2DEABCu;
}
