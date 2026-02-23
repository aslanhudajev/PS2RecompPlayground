#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetLayerFog
// Address: 0x1a6620 - 0x1a6694
void nlSetLayerFog_0x1a6620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetLayerFog");


    ctx->pc = 0x1a6620u;

    // 0x1a6620: 0x27bdffc0
    ctx->pc = 0x1a6620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a6624: 0x7fbf0020
    ctx->pc = 0x1a6624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a6628: 0x7fb00010
    ctx->pc = 0x1a6628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a662c: 0xe7b50004
    ctx->pc = 0x1a662cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a6630: 0xe7b40000
    ctx->pc = 0x1a6630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a6634: 0x46006546
    ctx->pc = 0x1a6634u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1a6638: 0x46006d06
    ctx->pc = 0x1a6638u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1a663c: 0x70808628
    ctx->pc = 0x1a663cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a6640: 0xc06be8f
    ctx->pc = 0x1A6640u;
    SET_GPR_U32(ctx, 31, 0x1A6648u);
    ctx->pc = 0x1A6644u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1AFA3Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFA3C_0x1afa3c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6648u; }
        else if (ctx->pc != 0x1A6648u) { ctx->pc = 0x1A6648u; }
    }
    if (ctx->pc != 0x1A6648u) { return; }
    ctx->pc = 0x1A6648u;
    // 0x1a6648: 0x3c010030
    ctx->pc = 0x1a6648u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a664c: 0xe4353a68
    ctx->pc = 0x1a664cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14952), bits); }
    // 0x1a6650: 0x3c010030
    ctx->pc = 0x1a6650u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6654: 0xe4343a6c
    ctx->pc = 0x1a6654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14956), bits); }
    // 0x1a6658: 0xc6000000
    ctx->pc = 0x1a6658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a665c: 0x3c010030
    ctx->pc = 0x1a665cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6660: 0xe4203a70
    ctx->pc = 0x1a6660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14960), bits); }
    // 0x1a6664: 0xc6000004
    ctx->pc = 0x1a6664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6668: 0x3c010030
    ctx->pc = 0x1a6668u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a666c: 0xe4203a74
    ctx->pc = 0x1a666cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14964), bits); }
    // 0x1a6670: 0xc6000008
    ctx->pc = 0x1a6670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6674: 0x3c010030
    ctx->pc = 0x1a6674u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6678: 0xe4203a78
    ctx->pc = 0x1a6678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14968), bits); }
    // 0x1a667c: 0x7bbf0020
    ctx->pc = 0x1a667cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6680: 0x7bb00010
    ctx->pc = 0x1a6680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6684: 0xc7b50004
    ctx->pc = 0x1a6684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a6688: 0xc7b40000
    ctx->pc = 0x1a6688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a668c: 0x3e00008
    ctx->pc = 0x1A668Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6690u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6694u;
}
