#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwsfd_SetDefCond
// Address: 0x18df98 - 0x18dfe4
void mwsfd_SetDefCond_0x18df98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwsfd_SetDefCond");
    ctx->pc = 0x18df98u;

    // 0x18df98: 0xc4810000
    ctx->pc = 0x18df98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18df9c: 0x3c01426f
    ctx->pc = 0x18df9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17007 << 16));
    // 0x18dfa0: 0x3421c28f
    ctx->pc = 0x18dfa0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49807));
    // 0x18dfa4: 0x44810000
    ctx->pc = 0x18dfa4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x18dfa8: 0x46000832
    ctx->pc = 0x18dfa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18dfac: 0x0
    ctx->pc = 0x18dfacu;
    // NOP
    // 0x18dfb0: 0x45010009
    ctx->pc = 0x18DFB0u;
    {
        const bool branch_taken_0x18dfb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DFB4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x18dfb0) {
            ctx->pc = 0x18DFD8u;
            goto label_18dfd8;
        }
    }
    ctx->pc = 0x18DFB8u;
    // 0x18dfb8: 0x3c014248
    ctx->pc = 0x18dfb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x18dfbc: 0x44810000
    ctx->pc = 0x18dfbcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x18dfc0: 0x460008a4
    ctx->pc = 0x18dfc0u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[1]);
    // 0x18dfc4: 0x44061000
    ctx->pc = 0x18dfc4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[2]);
    // 0x18dfc8: 0x46000832
    ctx->pc = 0x18dfc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18dfcc: 0x0
    ctx->pc = 0x18dfccu;
    // NOP
    // 0x18dfd0: 0x45030001
    ctx->pc = 0x18DFD0u;
    {
        const bool branch_taken_0x18dfd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18dfd0) {
            ctx->pc = 0x18DFD4u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 50));
            ctx->pc = 0x18DFD8u;
            goto label_18dfd8;
        }
    }
    ctx->pc = 0x18DFD8u;
label_18dfd8:
    // 0x18dfd8: 0x202d
    ctx->pc = 0x18dfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfdc: 0x8063d70
    ctx->pc = 0x18DFDCu;
    ctx->pc = 0x18DFE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 27));
    ctx->pc = 0x18F5C0u;
    MWSFD_SetCond_0x18f5c0(rdram, ctx, runtime); return;
    ctx->pc = 0x18DFE4u;
}
