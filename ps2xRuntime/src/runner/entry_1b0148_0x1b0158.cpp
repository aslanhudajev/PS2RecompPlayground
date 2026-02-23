#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entry_1b0148
// Address: 0x1b0148 - 0x1b0158
void entry_1b0148_0x1b0158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entry_1b0148");


    ctx->pc = 0x1b0148u;

    // 0x1b0148: 0x4be3e33c
    ctx->pc = 0x1b0148u;
    ctx->vu0_vf[3] = ctx->vu0_vf[28];
    // 0x1b014c: 0x4be4eb3c
    ctx->pc = 0x1b014cu;
    ctx->vu0_vf[4] = ctx->vu0_vf[29];
    // 0x1b0150: 0x4be5f33c
    ctx->pc = 0x1b0150u;
    ctx->vu0_vf[5] = ctx->vu0_vf[30];
    // 0x1b0154: 0x4be6fb3c
    ctx->pc = 0x1b0154u;
    ctx->vu0_vf[6] = ctx->vu0_vf[31];
}
