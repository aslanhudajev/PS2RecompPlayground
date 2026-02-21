#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPickupRune
// Address: 0x260ac8 - 0x260b1c
void AudioPickupRune_0x260ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260ac8u;

    // 0x260ac8: 0x27bdfff0
    ctx->pc = 0x260ac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x260acc: 0xffbf0000
    ctx->pc = 0x260accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260ad0: 0x3c020034
    ctx->pc = 0x260ad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260ad4: 0x2442d330
    ctx->pc = 0x260ad4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x260ad8: 0x41880
    ctx->pc = 0x260ad8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x260adc: 0x621821
    ctx->pc = 0x260adcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260ae0: 0x24040028
    ctx->pc = 0x260ae0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
    // 0x260ae4: 0x8c650000
    ctx->pc = 0x260ae4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260ae8: 0x2406007f
    ctx->pc = 0x260ae8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x260aec: 0xc088a4a
    ctx->pc = 0x260AECu;
    SET_GPR_U32(ctx, 31, 0x260AF4u);
    ctx->pc = 0x260AF0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222928u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX2_0x222928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260AF4u; }
    }
    if (ctx->pc != 0x260AF4u) { return; }
    ctx->pc = 0x260AF4u;
    // 0x260af4: 0xc088160
    ctx->pc = 0x260AF4u;
    SET_GPR_U32(ctx, 31, 0x260AFCu);
    ctx->pc = 0x260AF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x220580u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundLength_0x220580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260AFCu; }
    }
    if (ctx->pc != 0x260AFCu) { return; }
    ctx->pc = 0x260AFCu;
    // 0x260afc: 0x3c013f80
    ctx->pc = 0x260afcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x260b00: 0x44816000
    ctx->pc = 0x260b00u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260b04: 0x460c0301
    ctx->pc = 0x260b04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x260b08: 0x3c013f00
    ctx->pc = 0x260b08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x260b0c: 0x44816800
    ctx->pc = 0x260b0cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x260b10: 0xdfbf0000
    ctx->pc = 0x260b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260b14: 0x8097432
    ctx->pc = 0x260B14u;
    ctx->pc = 0x260B18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x25D0C8u;
    LowerBGMusic_0x25d0c8(rdram, ctx, runtime); return;
    ctx->pc = 0x260B1Cu;
}
