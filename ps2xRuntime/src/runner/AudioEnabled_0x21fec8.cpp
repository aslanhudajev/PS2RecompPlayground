#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioEnabled
// Address: 0x21fec8 - 0x21fed8
void AudioEnabled_0x21fec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21fec8u;

    // 0x21fec8: 0x3c020032
    ctx->pc = 0x21fec8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21fecc: 0x8c42fd58
    ctx->pc = 0x21feccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x21fed0: 0x3e00008
    ctx->pc = 0x21FED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FED4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FED8u;
}
