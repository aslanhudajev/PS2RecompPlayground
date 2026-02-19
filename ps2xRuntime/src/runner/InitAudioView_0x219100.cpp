#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitAudioView
// Address: 0x219100 - 0x21918c
void InitAudioView_0x219100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x219100u;

    // 0x219100: 0x27bdfff0
    ctx->pc = 0x219100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219104: 0xffbf0000
    ctx->pc = 0x219104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219108: 0x3c05003c
    ctx->pc = 0x219108u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x21910c: 0x3c04003c
    ctx->pc = 0x21910cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x219110: 0x3c03003c
    ctx->pc = 0x219110u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x219114: 0x3c02003c
    ctx->pc = 0x219114u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219118: 0xac40d564
    ctx->pc = 0x219118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956388), GPR_U32(ctx, 0));
    // 0x21911c: 0xac60d560
    ctx->pc = 0x21911cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956384), GPR_U32(ctx, 0));
    // 0x219120: 0xac80d55c
    ctx->pc = 0x219120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956380), GPR_U32(ctx, 0));
    // 0x219124: 0xaca0d558
    ctx->pc = 0x219124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294956376), GPR_U32(ctx, 0));
    // 0x219128: 0x3c03003c
    ctx->pc = 0x219128u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21912c: 0x24020002
    ctx->pc = 0x21912cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x219130: 0xac62d568
    ctx->pc = 0x219130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956392), GPR_U32(ctx, 2));
    // 0x219134: 0x3c02003c
    ctx->pc = 0x219134u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219138: 0xac40d56c
    ctx->pc = 0x219138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956396), GPR_U32(ctx, 0));
    // 0x21913c: 0x3c02003c
    ctx->pc = 0x21913cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219140: 0x2403007f
    ctx->pc = 0x219140u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
    // 0x219144: 0xac43d570
    ctx->pc = 0x219144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956400), GPR_U32(ctx, 3));
    // 0x219148: 0x3c02003c
    ctx->pc = 0x219148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21914c: 0xac43d574
    ctx->pc = 0x21914cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956404), GPR_U32(ctx, 3));
    // 0x219150: 0x3c02003c
    ctx->pc = 0x219150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219154: 0x2403ffff
    ctx->pc = 0x219154u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219158: 0xac43d578
    ctx->pc = 0x219158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956408), GPR_U32(ctx, 3));
    // 0x21915c: 0x3c02003c
    ctx->pc = 0x21915cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219160: 0xac43d57c
    ctx->pc = 0x219160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956412), GPR_U32(ctx, 3));
    // 0x219164: 0x3c02003c
    ctx->pc = 0x219164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219168: 0xac40d580
    ctx->pc = 0x219168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956416), GPR_U32(ctx, 0));
    // 0x21916c: 0x3c02003c
    ctx->pc = 0x21916cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219170: 0xac40d584
    ctx->pc = 0x219170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956420), GPR_U32(ctx, 0));
    // 0x219174: 0x3c02003c
    ctx->pc = 0x219174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219178: 0xc0881b8
    ctx->pc = 0x219178u;
    SET_GPR_U32(ctx, 31, 0x219180u);
    ctx->pc = 0x21917Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956424), GPR_U32(ctx, 0));
    ctx->pc = 0x2206E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audio_init_0x2206e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219180u; }
    }
    if (ctx->pc != 0x219180u) { return; }
    ctx->pc = 0x219180u;
    // 0x219180: 0xdfbf0000
    ctx->pc = 0x219180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219184: 0x808816e
    ctx->pc = 0x219184u;
    ctx->pc = 0x219188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2205B8u;
    AudioGameVolume_0x2205b8(rdram, ctx, runtime); return;
    ctx->pc = 0x21918Cu;
}
