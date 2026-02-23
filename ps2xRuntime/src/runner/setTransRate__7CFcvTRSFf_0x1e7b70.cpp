#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setTransRate__7CFcvTRSFf
// Address: 0x1e7b70 - 0x1e7b84
void setTransRate__7CFcvTRSFf_0x1e7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setTransRate__7CFcvTRSFf");


    ctx->pc = 0x1e7b70u;

    // 0x1e7b70: 0xe48c00c8
    ctx->pc = 0x1e7b70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 200), bits); }
    // 0x1e7b74: 0x8c8300ec
    ctx->pc = 0x1e7b74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e7b78: 0x34630001
    ctx->pc = 0x1e7b78u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
    // 0x1e7b7c: 0x3e00008
    ctx->pc = 0x1E7B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7B80u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7B84u;
}
