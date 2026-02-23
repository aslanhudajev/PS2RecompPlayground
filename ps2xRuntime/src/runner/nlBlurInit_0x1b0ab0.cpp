#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlBlurInit
// Address: 0x1b0ab0 - 0x1b0b2c
void nlBlurInit_0x1b0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlBlurInit");


    ctx->pc = 0x1b0ab0u;

    // 0x1b0ab0: 0x3c010030
    ctx->pc = 0x1b0ab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0ab4: 0x84255834
    ctx->pc = 0x1b0ab4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1b0ab8: 0x24030060
    ctx->pc = 0x1b0ab8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1b0abc: 0xaf838b04
    ctx->pc = 0x1b0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937348), GPR_U32(ctx, 3));
    // 0x1b0ac0: 0x3c033f80
    ctx->pc = 0x1b0ac0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1b0ac4: 0xaf838af8
    ctx->pc = 0x1b0ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937336), GPR_U32(ctx, 3));
    // 0x1b0ac8: 0x3c033f00
    ctx->pc = 0x1b0ac8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16128 << 16));
    // 0x1b0acc: 0x44850800
    ctx->pc = 0x1b0accu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 5);
    // 0x1b0ad0: 0x3c010030
    ctx->pc = 0x1b0ad0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0ad4: 0x46800860
    ctx->pc = 0x1b0ad4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1b0ad8: 0x84245836
    ctx->pc = 0x1b0ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1b0adc: 0xaf808b00
    ctx->pc = 0x1b0adcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937344), GPR_U32(ctx, 0));
    // 0x1b0ae0: 0xaf808afc
    ctx->pc = 0x1b0ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937340), GPR_U32(ctx, 0));
    // 0x1b0ae4: 0xaf808aec
    ctx->pc = 0x1b0ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937324), GPR_U32(ctx, 0));
    // 0x1b0ae8: 0xaf808ae8
    ctx->pc = 0x1b0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937320), GPR_U32(ctx, 0));
    // 0x1b0aec: 0x44831000
    ctx->pc = 0x1b0aecu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1b0af0: 0x3c010030
    ctx->pc = 0x1b0af0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0af4: 0x46011042
    ctx->pc = 0x1b0af4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b0af8: 0x84235838
    ctx->pc = 0x1b0af8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1b0afc: 0x44840000
    ctx->pc = 0x1b0afcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1b0b00: 0x0
    ctx->pc = 0x1b0b00u;
    // NOP
    // 0x1b0b04: 0xe7818af4
    ctx->pc = 0x1b0b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937332), bits); }
    // 0x1b0b08: 0x46800060
    ctx->pc = 0x1b0b08u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1b0b0c: 0x44830000
    ctx->pc = 0x1b0b0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1b0b10: 0x0
    ctx->pc = 0x1b0b10u;
    // NOP
    // 0x1b0b14: 0x46800020
    ctx->pc = 0x1b0b14u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1b0b18: 0x46000803
    ctx->pc = 0x1b0b18u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1b0b1c: 0x0
    ctx->pc = 0x1b0b1cu;
    // NOP
    // 0x1b0b20: 0x46001002
    ctx->pc = 0x1b0b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b0b24: 0x3e00008
    ctx->pc = 0x1B0B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0B28u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937328), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0B2Cu;
}
