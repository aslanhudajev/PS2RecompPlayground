#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPutLocalMem
// Address: 0x1a7280 - 0x1a7288
void nlPutLocalMem_0x1a7280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPutLocalMem");


    ctx->pc = 0x1a7280u;

    // 0x1a7280: 0x8069c34
    ctx->pc = 0x1A7280u;
    ctx->pc = 0x1A7284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A70D0u;
    nlPutLocalMem_i_0x1a70d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A7288u;
}
