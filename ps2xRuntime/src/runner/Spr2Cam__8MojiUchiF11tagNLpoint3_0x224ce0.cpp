#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Spr2Cam__8MojiUchiF11tagNLpoint3
// Address: 0x224ce0 - 0x224d68
void Spr2Cam__8MojiUchiF11tagNLpoint3_0x224ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Spr2Cam__8MojiUchiF11tagNLpoint3");


    ctx->pc = 0x224ce0u;

    // 0x224ce0: 0xc4a40000
    ctx->pc = 0x224ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224ce4: 0xc4a30004
    ctx->pc = 0x224ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224ce8: 0xc4a20008
    ctx->pc = 0x224ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224cec: 0x27bdfff0
    ctx->pc = 0x224cecu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224cf0: 0x27a60000
    ctx->pc = 0x224cf0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 0));
    // 0x224cf4: 0x3c0343a0
    ctx->pc = 0x224cf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17312 << 16));
    // 0x224cf8: 0x44830800
    ctx->pc = 0x224cf8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x224cfc: 0xe4c40000
    ctx->pc = 0x224cfcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x224d00: 0xe4c30004
    ctx->pc = 0x224d00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x224d04: 0xe4c20008
    ctx->pc = 0x224d04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x224d08: 0xc7a20000
    ctx->pc = 0x224d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224d0c: 0xc7858c50
    ctx->pc = 0x224d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224d10: 0x3c034360
    ctx->pc = 0x224d10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17248 << 16));
    // 0x224d14: 0xc7a40008
    ctx->pc = 0x224d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224d18: 0x44830000
    ctx->pc = 0x224d18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x224d1c: 0x0
    ctx->pc = 0x224d1cu;
    // NOP
    // 0x224d20: 0x46011041
    ctx->pc = 0x224d20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x224d24: 0x46012842
    ctx->pc = 0x224d24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x224d28: 0x460028c7
    ctx->pc = 0x224d28u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x224d2c: 0x46030843
    ctx->pc = 0x224d2cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x224d30: 0x46050843
    ctx->pc = 0x224d30u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x224d34: 0x46012042
    ctx->pc = 0x224d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x224d38: 0xe4810000
    ctx->pc = 0x224d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x224d3c: 0xc7a10004
    ctx->pc = 0x224d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224d40: 0x46000801
    ctx->pc = 0x224d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x224d44: 0x46000007
    ctx->pc = 0x224d44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x224d48: 0x46002802
    ctx->pc = 0x224d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x224d4c: 0x46030003
    ctx->pc = 0x224d4cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x224d50: 0x46050003
    ctx->pc = 0x224d50u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x224d54: 0x46002002
    ctx->pc = 0x224d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x224d58: 0xe4800004
    ctx->pc = 0x224d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x224d5c: 0xe4840008
    ctx->pc = 0x224d5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x224d60: 0x3e00008
    ctx->pc = 0x224D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224D64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224D68u;
}
