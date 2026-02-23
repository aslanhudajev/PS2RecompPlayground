#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetEnvMapOffset
// Address: 0x1a9830 - 0x1a986c
void nlSetEnvMapOffset_0x1a9830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetEnvMapOffset");


    ctx->pc = 0x1a9830u;

    // 0x1a9830: 0x27bdffe0
    ctx->pc = 0x1a9830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9834: 0x7fbf0010
    ctx->pc = 0x1a9834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a9838: 0xe7b40000
    ctx->pc = 0x1a9838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a983c: 0xc069f28
    ctx->pc = 0x1A983Cu;
    SET_GPR_U32(ctx, 31, 0x1A9844u);
    ctx->pc = 0x1A9840u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1A7CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlFraction_0x1a7ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9844u; }
        else if (ctx->pc != 0x1A9844u) { ctx->pc = 0x1A9844u; }
    }
    if (ctx->pc != 0x1A9844u) { return; }
    ctx->pc = 0x1A9844u;
    // 0x1a9844: 0x3c010030
    ctx->pc = 0x1a9844u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9848: 0x4600a306
    ctx->pc = 0x1a9848u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a984c: 0xc069f28
    ctx->pc = 0x1A984Cu;
    SET_GPR_U32(ctx, 31, 0x1A9854u);
    ctx->pc = 0x1A9850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14688), bits); }
    ctx->pc = 0x1A7CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlFraction_0x1a7ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9854u; }
        else if (ctx->pc != 0x1A9854u) { ctx->pc = 0x1A9854u; }
    }
    if (ctx->pc != 0x1A9854u) { return; }
    ctx->pc = 0x1A9854u;
    // 0x1a9854: 0x3c010030
    ctx->pc = 0x1a9854u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9858: 0xe4203964
    ctx->pc = 0x1a9858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14692), bits); }
    // 0x1a985c: 0x7bbf0010
    ctx->pc = 0x1a985cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9860: 0xc7b40000
    ctx->pc = 0x1a9860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a9864: 0x3e00008
    ctx->pc = 0x1A9864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9868u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A986Cu;
}
