#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBStartBlits
// Address: 0x2c27a8 - 0x2c27b0
void MBStartBlits_0x2c27a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c27a8u;

    // 0x2c27a8: 0x80b04c8
    ctx->pc = 0x2C27A8u;
    ctx->pc = 0x2C1320u;
    pbBlitSendInitRegs_0x2c1320(rdram, ctx, runtime); return;
    ctx->pc = 0x2C27B0u;
}
