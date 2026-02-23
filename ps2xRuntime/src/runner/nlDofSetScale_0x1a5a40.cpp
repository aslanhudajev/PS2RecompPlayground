#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofSetScale
// Address: 0x1a5a40 - 0x1a5a60
void nlDofSetScale_0x1a5a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofSetScale");


    ctx->pc = 0x1a5a40u;

    // 0x1a5a40: 0x3c034180
    ctx->pc = 0x1a5a40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16768 << 16));
    // 0x1a5a44: 0x44830000
    ctx->pc = 0x1a5a44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1a5a48: 0x0
    ctx->pc = 0x1a5a48u;
    // NOP
    // 0x1a5a4c: 0x460c0042
    ctx->pc = 0x1a5a4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1a5a50: 0x460d0002
    ctx->pc = 0x1a5a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1a5a54: 0xe78189cc
    ctx->pc = 0x1a5a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937036), bits); }
    // 0x1a5a58: 0x3e00008
    ctx->pc = 0x1A5A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A5Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937032), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5A60u;
}
