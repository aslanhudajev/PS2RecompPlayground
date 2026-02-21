#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EndCompass
// Address: 0x2282c0 - 0x2282cc
void EndCompass_0x2282c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2282c0u;

    // 0x2282c0: 0x3c020032
    ctx->pc = 0x2282c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2282c4: 0x3e00008
    ctx->pc = 0x2282C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2282C8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 1948), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2282CCu;
}
