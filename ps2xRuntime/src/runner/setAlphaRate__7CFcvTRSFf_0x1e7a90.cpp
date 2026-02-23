#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setAlphaRate__7CFcvTRSFf
// Address: 0x1e7a90 - 0x1e7aa4
void setAlphaRate__7CFcvTRSFf_0x1e7a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setAlphaRate__7CFcvTRSFf");


    ctx->pc = 0x1e7a90u;

    // 0x1e7a90: 0xe48c00c4
    ctx->pc = 0x1e7a90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
    // 0x1e7a94: 0x8c8300ec
    ctx->pc = 0x1e7a94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e7a98: 0x34630010
    ctx->pc = 0x1e7a98u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16));
    // 0x1e7a9c: 0x3e00008
    ctx->pc = 0x1E7A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7AA0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7AA4u;
}
