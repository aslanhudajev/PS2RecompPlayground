#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setFadeOut__7CFcvTRSFff
// Address: 0x1e7b10 - 0x1e7b28
void setFadeOut__7CFcvTRSFff_0x1e7b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setFadeOut__7CFcvTRSFff");


    ctx->pc = 0x1e7b10u;

    // 0x1e7b10: 0xe48c00d4
    ctx->pc = 0x1e7b10u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x1e7b14: 0xe48d00d0
    ctx->pc = 0x1e7b14u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x1e7b18: 0x8c8300ec
    ctx->pc = 0x1e7b18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e7b1c: 0x34630002
    ctx->pc = 0x1e7b1cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x1e7b20: 0x3e00008
    ctx->pc = 0x1E7B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7B24u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7B28u;
}
