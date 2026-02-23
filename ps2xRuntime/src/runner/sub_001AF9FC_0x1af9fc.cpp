#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AF9FC
// Address: 0x1af9fc - 0x1afa3c
void sub_001AF9FC_0x1af9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AF9FC");


    ctx->pc = 0x1af9fcu;

    // 0x1af9fc: 0x27bdfff0
    ctx->pc = 0x1af9fcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afa00: 0xffbf0000
    ctx->pc = 0x1afa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afa04: 0xc06be70
    ctx->pc = 0x1AFA04u;
    SET_GPR_U32(ctx, 31, 0x1AFA0Cu);
    ctx->pc = 0x1AF9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9C0_0x1af9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA0Cu; }
        else if (ctx->pc != 0x1AFA0Cu) { ctx->pc = 0x1AFA0Cu; }
    }
    if (ctx->pc != 0x1AFA0Cu) { return; }
    ctx->pc = 0x1AFA0Cu;
    // 0x1afa0c: 0x3c083f80
    ctx->pc = 0x1afa0cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)16256 << 16));
    // 0x1afa10: 0x44882000
    ctx->pc = 0x1afa10u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 8);
    // 0x1afa14: 0x46002103
    ctx->pc = 0x1afa14u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x1afa18: 0x46040842
    ctx->pc = 0x1afa18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1afa1c: 0xe4810000
    ctx->pc = 0x1afa1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1afa20: 0x46041082
    ctx->pc = 0x1afa20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1afa24: 0xe4820004
    ctx->pc = 0x1afa24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1afa28: 0x460418c2
    ctx->pc = 0x1afa28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1afa2c: 0xe4830008
    ctx->pc = 0x1afa2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1afa30: 0xdfbf0000
    ctx->pc = 0x1afa30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afa34: 0x3e00008
    ctx->pc = 0x1AFA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFA38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFA3Cu;
}
