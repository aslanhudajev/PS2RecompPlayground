#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setFrameSpd__22CameraMgrInternalClassFi
// Address: 0x1cac70 - 0x1cacdc
void setFrameSpd__22CameraMgrInternalClassFi_0x1cac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setFrameSpd__22CameraMgrInternalClassFi");


    ctx->pc = 0x1cac70u;

    // 0x1cac70: 0x510c0
    ctx->pc = 0x1cac70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cac74: 0x451021
    ctx->pc = 0x1cac74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cac78: 0x27bdfff0
    ctx->pc = 0x1cac78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cac7c: 0x21180
    ctx->pc = 0x1cac7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cac80: 0x7fbf0000
    ctx->pc = 0x1cac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1cac84: 0x441021
    ctx->pc = 0x1cac84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cac88: 0x8c430010
    ctx->pc = 0x1cac88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1cac8c: 0x318c0
    ctx->pc = 0x1cac8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cac90: 0x641821
    ctx->pc = 0x1cac90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cac94: 0x8c660904
    ctx->pc = 0x1cac94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 2308)));
    // 0x1cac98: 0x3c023f99
    ctx->pc = 0x1cac98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16281 << 16));
    // 0x1cac9c: 0x3442999a
    ctx->pc = 0x1cac9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x1caca0: 0x44820800
    ctx->pc = 0x1caca0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1caca4: 0x51040
    ctx->pc = 0x1caca4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1caca8: 0x451021
    ctx->pc = 0x1caca8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cacac: 0xc4c0000c
    ctx->pc = 0x1cacacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cacb0: 0x21080
    ctx->pc = 0x1cacb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cacb4: 0x451021
    ctx->pc = 0x1cacb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cacb8: 0x21900
    ctx->pc = 0x1cacb8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cacbc: 0x8f828c48
    ctx->pc = 0x1cacbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cacc0: 0x46000802
    ctx->pc = 0x1cacc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cacc4: 0x431021
    ctx->pc = 0x1cacc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cacc8: 0xc072cd8
    ctx->pc = 0x1CACC8u;
    SET_GPR_U32(ctx, 31, 0x1CACD0u);
    ctx->pc = 0x1CACCCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    ctx->pc = 0x1CB360u;
    {
        const uint32_t __entryPc = ctx->pc;
        finishJob__22CameraMgrInternalClassFi_0x1cb360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CACD0u; }
        else if (ctx->pc != 0x1CACD0u) { ctx->pc = 0x1CACD0u; }
    }
    if (ctx->pc != 0x1CACD0u) { return; }
    ctx->pc = 0x1CACD0u;
    // 0x1cacd0: 0x7bbf0000
    ctx->pc = 0x1cacd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cacd4: 0x3e00008
    ctx->pc = 0x1CACD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CACD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CACDCu;
}
