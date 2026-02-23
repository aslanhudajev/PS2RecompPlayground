#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setFadeOut__7CFcvTRSFf
// Address: 0x1e7ab0 - 0x1e7acc
void setFadeOut__7CFcvTRSFf_0x1e7ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setFadeOut__7CFcvTRSFf");


    ctx->pc = 0x1e7ab0u;

    // 0x1e7ab0: 0xe48c00d4
    ctx->pc = 0x1e7ab0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x1e7ab4: 0x3c033f80
    ctx->pc = 0x1e7ab4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1e7ab8: 0xac8300d0
    ctx->pc = 0x1e7ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
    // 0x1e7abc: 0x8c8300ec
    ctx->pc = 0x1e7abcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e7ac0: 0x34630002
    ctx->pc = 0x1e7ac0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x1e7ac4: 0x3e00008
    ctx->pc = 0x1E7AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7AC8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7ACCu;
}
