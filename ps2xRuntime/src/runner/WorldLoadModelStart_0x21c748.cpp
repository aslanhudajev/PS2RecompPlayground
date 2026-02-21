#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldLoadModelStart
// Address: 0x21c748 - 0x21c754
void WorldLoadModelStart_0x21c748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c748u;

    // 0x21c748: 0x3c020032
    ctx->pc = 0x21c748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c74c: 0x80b1df6
    ctx->pc = 0x21C74Cu;
    ctx->pc = 0x21C750u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965884)));
    ctx->pc = 0x2C77D8u;
    MBOX_BGLoadModelStart_0x2c77d8(rdram, ctx, runtime); return;
    ctx->pc = 0x21C754u;
}
