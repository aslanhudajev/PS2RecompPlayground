#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimInit
// Address: 0x2107f8 - 0x210810
void AnimInit_0x2107f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2107f8u;

    // 0x2107f8: 0x3c02003c
    ctx->pc = 0x2107f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2107fc: 0x3c013d08
    ctx->pc = 0x2107fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x210800: 0x34218889
    ctx->pc = 0x210800u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x210804: 0x44810000
    ctx->pc = 0x210804u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x210808: 0x8083a30
    ctx->pc = 0x210808u;
    ctx->pc = 0x21080Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294953376), bits); }
    ctx->pc = 0x20E8C0u;
    InitAnimInvDeltaTable_0x20e8c0(rdram, ctx, runtime); return;
    ctx->pc = 0x210810u;
}
