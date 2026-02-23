#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AFA3C
// Address: 0x1afa3c - 0x1afa7c
void sub_001AFA3C_0x1afa3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AFA3C");


    ctx->pc = 0x1afa3cu;

    // 0x1afa3c: 0x27bdfff0
    ctx->pc = 0x1afa3cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afa40: 0xffbf0000
    ctx->pc = 0x1afa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afa44: 0xc06be70
    ctx->pc = 0x1AFA44u;
    SET_GPR_U32(ctx, 31, 0x1AFA4Cu);
    ctx->pc = 0x1AF9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9C0_0x1af9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA4Cu; }
        else if (ctx->pc != 0x1AFA4Cu) { ctx->pc = 0x1AFA4Cu; }
    }
    if (ctx->pc != 0x1AFA4Cu) { return; }
    ctx->pc = 0x1AFA4Cu;
    // 0x1afa4c: 0x3c083f80
    ctx->pc = 0x1afa4cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)16256 << 16));
    // 0x1afa50: 0x44882000
    ctx->pc = 0x1afa50u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 8);
    // 0x1afa54: 0x46002103
    ctx->pc = 0x1afa54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x1afa58: 0x46040842
    ctx->pc = 0x1afa58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1afa5c: 0xe4a10000
    ctx->pc = 0x1afa5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1afa60: 0x46041082
    ctx->pc = 0x1afa60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1afa64: 0xe4a20004
    ctx->pc = 0x1afa64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1afa68: 0x460418c2
    ctx->pc = 0x1afa68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1afa6c: 0xe4a30008
    ctx->pc = 0x1afa6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1afa70: 0xdfbf0000
    ctx->pc = 0x1afa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afa74: 0x3e00008
    ctx->pc = 0x1AFA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFA78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFA7Cu;
}
