#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNewTempQuad
// Address: 0x2c3120 - 0x2c31a4
void MBNewTempQuad_0x2c3120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3120u;

    // 0x2c3120: 0x27bdffc0
    ctx->pc = 0x2c3120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c3124: 0xffbf0030
    ctx->pc = 0x2c3124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c3128: 0xffb20020
    ctx->pc = 0x2c3128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c312c: 0xffb10010
    ctx->pc = 0x2c312cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c3130: 0xffb00000
    ctx->pc = 0x2c3130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3134: 0x3c020038
    ctx->pc = 0x2c3134u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c3138: 0x8c42b0c0
    ctx->pc = 0x2c3138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947008)));
    // 0x2c313c: 0x28420100
    ctx->pc = 0x2c313cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 256));
    // 0x2c3140: 0x14400006
    ctx->pc = 0x2C3140u;
    {
        const bool branch_taken_0x2c3140 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C3144u;
        SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
        if (branch_taken_0x2c3140) {
            ctx->pc = 0x2C315Cu;
            goto label_2c315c;
        }
    }
    ctx->pc = 0x2C3148u;
    // 0x2c3148: 0x3c04003b
    ctx->pc = 0x2c3148u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c314c: 0x24846e90
    ctx->pc = 0x2c314cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28304));
    // 0x2c3150: 0xc0b49a6
    ctx->pc = 0x2C3150u;
    SET_GPR_U32(ctx, 31, 0x2C3158u);
    ctx->pc = 0x2C3154u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3158u; }
    }
    if (ctx->pc != 0x2C3158u) { return; }
    ctx->pc = 0x2C3158u;
    // 0x2c3158: 0x3c110038
    ctx->pc = 0x2c3158u;
    SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
label_2c315c:
    // 0x2c315c: 0x8e24b0c0
    ctx->pc = 0x2c315cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294947008)));
    // 0x2c3160: 0x24840001
    ctx->pc = 0x2c3160u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c3164: 0xae24b0c0
    ctx->pc = 0x2c3164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947008), GPR_U32(ctx, 4));
    // 0x2c3168: 0x24120024
    ctx->pc = 0x2c3168u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c316c: 0x922018
    ctx->pc = 0x2c316cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c3170: 0x3c100038
    ctx->pc = 0x2c3170u;
    SET_GPR_U32(ctx, 16, ((uint32_t)56 << 16));
    // 0x2c3174: 0x26108c9c
    ctx->pc = 0x2c3174u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294937756));
    // 0x2c3178: 0xc0b0af6
    ctx->pc = 0x2C3178u;
    SET_GPR_U32(ctx, 31, 0x2C3180u);
    ctx->pc = 0x2C317Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->pc = 0x2C2BD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitBlit_0x2c2bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3180u; }
    }
    if (ctx->pc != 0x2C3180u) { return; }
    ctx->pc = 0x2C3180u;
    // 0x2c3180: 0x8e22b0c0
    ctx->pc = 0x2c3180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947008)));
    // 0x2c3184: 0x521818
    ctx->pc = 0x2c3184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c3188: 0x701021
    ctx->pc = 0x2c3188u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2c318c: 0xdfbf0030
    ctx->pc = 0x2c318cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3190: 0xdfb20020
    ctx->pc = 0x2c3190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3194: 0xdfb10010
    ctx->pc = 0x2c3194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3198: 0xdfb00000
    ctx->pc = 0x2c3198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c319c: 0x3e00008
    ctx->pc = 0x2C319Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C31A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C315Cu: goto label_2c315c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C31A4u;
}
