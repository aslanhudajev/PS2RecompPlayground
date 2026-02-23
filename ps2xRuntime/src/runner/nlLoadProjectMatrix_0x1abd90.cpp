#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLoadProjectMatrix
// Address: 0x1abd90 - 0x1abd9c
void nlLoadProjectMatrix_0x1abd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLoadProjectMatrix");


    ctx->pc = 0x1abd90u;

    // 0x1abd90: 0x3c020030
    ctx->pc = 0x1abd90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1abd94: 0x806c038
    ctx->pc = 0x1ABD94u;
    ctx->pc = 0x1ABD98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21872));
    ctx->pc = 0x1B00E0u;
    sub_001B00E0_0x1b00e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1ABD9Cu;
}
