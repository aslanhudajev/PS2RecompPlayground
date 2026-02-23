#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlBlurSetCenter
// Address: 0x1b1120 - 0x1b112c
void nlBlurSetCenter_0x1b1120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlBlurSetCenter");


    ctx->pc = 0x1b1120u;

    // 0x1b1120: 0xe78c8af4
    ctx->pc = 0x1b1120u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937332), bits); }
    // 0x1b1124: 0x3e00008
    ctx->pc = 0x1B1124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1128u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937328), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B112Cu;
}
