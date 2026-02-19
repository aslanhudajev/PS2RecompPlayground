#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _unknown_extension
// Address: 0x2ef308 - 0x2ef314
void _unknown_extension_0x2ef308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ef308u;

    // 0x2ef308: 0x3c04003c
    ctx->pc = 0x2ef308u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2ef30c: 0x80bba56
    ctx->pc = 0x2EF30Cu;
    ctx->pc = 0x2EF310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942296));
    ctx->pc = 0x2EE958u;
    ps2__Error_0x2ee958(rdram, ctx, runtime); return;
    ctx->pc = 0x2EF314u;
}
