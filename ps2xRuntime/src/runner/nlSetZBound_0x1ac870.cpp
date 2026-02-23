#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetZBound
// Address: 0x1ac870 - 0x1ac934
void nlSetZBound_0x1ac870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetZBound");


    ctx->pc = 0x1ac870u;

    // 0x1ac870: 0x8f858a10
    ctx->pc = 0x1ac870u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x1ac874: 0x24030001
    ctx->pc = 0x1ac874u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac878: 0x8ca40000
    ctx->pc = 0x1ac878u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ac87c: 0x1483000a
    ctx->pc = 0x1AC87Cu;
    {
        const bool branch_taken_0x1ac87c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ac87c) {
            ctx->pc = 0x1AC8A8u;
            goto label_1ac8a8;
        }
    }
    ctx->pc = 0x1AC884u;
    // 0x1ac884: 0x3c030030
    ctx->pc = 0x1ac884u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1ac888: 0x24633700
    ctx->pc = 0x1ac888u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 14080));
    // 0x1ac88c: 0x10a30003
    ctx->pc = 0x1AC88Cu;
    {
        const bool branch_taken_0x1ac88c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ac88c) {
            ctx->pc = 0x1AC89Cu;
            goto label_1ac89c;
        }
    }
    ctx->pc = 0x1AC894u;
label_1ac894:
    // 0x1ac894: 0x1000ffff
    ctx->pc = 0x1AC894u;
    {
        const bool branch_taken_0x1ac894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ac894) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC89Cu;
label_1ac89c:
    // 0x1ac89c: 0x90a30083
    ctx->pc = 0x1ac89cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 131)));
    // 0x1ac8a0: 0x10000003
    ctx->pc = 0x1AC8A0u;
    {
        const bool branch_taken_0x1ac8a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AC8A4u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
        if (branch_taken_0x1ac8a0) {
            ctx->pc = 0x1AC8B0u;
            goto label_1ac8b0;
        }
    }
    ctx->pc = 0x1AC8A8u;
label_1ac8a8:
    // 0x1ac8a8: 0x90a30033
    ctx->pc = 0x1ac8a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 51)));
    // 0x1ac8ac: 0x3063000f
    ctx->pc = 0x1ac8acu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
label_1ac8b0:
    // 0x1ac8b0: 0x34640030
    ctx->pc = 0x1ac8b0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 48));
    // 0x1ac8b4: 0x2403003a
    ctx->pc = 0x1ac8b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 58));
    // 0x1ac8b8: 0x1083000e
    ctx->pc = 0x1AC8B8u;
    {
        const bool branch_taken_0x1ac8b8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AC8BCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)18815 << 16));
        if (branch_taken_0x1ac8b8) {
            ctx->pc = 0x1AC8F4u;
            goto label_1ac8f4;
        }
    }
    ctx->pc = 0x1AC8C0u;
    // 0x1ac8c0: 0x24030032
    ctx->pc = 0x1ac8c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 50));
    // 0x1ac8c4: 0x1083000a
    ctx->pc = 0x1AC8C4u;
    {
        const bool branch_taken_0x1ac8c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ac8c4) {
            ctx->pc = 0x1AC8F0u;
            goto label_1ac8f0;
        }
    }
    ctx->pc = 0x1AC8CCu;
    // 0x1ac8cc: 0x24030031
    ctx->pc = 0x1ac8ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 49));
    // 0x1ac8d0: 0x10830003
    ctx->pc = 0x1AC8D0u;
    {
        const bool branch_taken_0x1ac8d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AC8D4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)19840 << 16));
        if (branch_taken_0x1ac8d0) {
            ctx->pc = 0x1AC8E0u;
            goto label_1ac8e0;
        }
    }
    ctx->pc = 0x1AC8D8u;
    // 0x1ac8d8: 0x24030030
    ctx->pc = 0x1ac8d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ac8dc: 0x3c034d80
    ctx->pc = 0x1ac8dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)19840 << 16));
label_1ac8e0:
    // 0x1ac8e0: 0x44800800
    ctx->pc = 0x1ac8e0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1ac8e4: 0x44830000
    ctx->pc = 0x1ac8e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1ac8e8: 0x10000006
    ctx->pc = 0x1AC8E8u;
    {
        const bool branch_taken_0x1ac8e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AC8ECu;
        ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        if (branch_taken_0x1ac8e8) {
            ctx->pc = 0x1AC904u;
            goto label_1ac904;
        }
    }
    ctx->pc = 0x1AC8F0u;
label_1ac8f0:
    // 0x1ac8f0: 0x3c03497f
    ctx->pc = 0x1ac8f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)18815 << 16));
label_1ac8f4:
    // 0x1ac8f4: 0x3463fff0
    ctx->pc = 0x1ac8f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65520));
    // 0x1ac8f8: 0x44800800
    ctx->pc = 0x1ac8f8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1ac8fc: 0x44830000
    ctx->pc = 0x1ac8fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1ac900: 0x460c001a
    ctx->pc = 0x1ac900u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_1ac904:
    // 0x1ac904: 0x460d0882
    ctx->pc = 0x1ac904u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x1ac908: 0x460d0002
    ctx->pc = 0x1ac908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1ac90c: 0x460d085d
    ctx->pc = 0x1ac90cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[13]));
    // 0x1ac910: 0x460c68c1
    ctx->pc = 0x1ac910u;
    ctx->f[3] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x1ac914: 0x4600601a
    ctx->pc = 0x1ac914u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1ac918: 0x4602601d
    ctx->pc = 0x1ac918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[2]));
    // 0x1ac91c: 0x46030843
    ctx->pc = 0x1ac91cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x1ac920: 0x46030003
    ctx->pc = 0x1ac920u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1ac924: 0x0
    ctx->pc = 0x1ac924u;
    // NOP
    // 0x1ac928: 0xe7818a18
    ctx->pc = 0x1ac928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), bits); }
    // 0x1ac92c: 0x3e00008
    ctx->pc = 0x1AC92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC930u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937108), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AC894u: goto label_1ac894;
            case 0x1AC89Cu: goto label_1ac89c;
            case 0x1AC8A8u: goto label_1ac8a8;
            case 0x1AC8B0u: goto label_1ac8b0;
            case 0x1AC8E0u: goto label_1ac8e0;
            case 0x1AC8F0u: goto label_1ac8f0;
            case 0x1AC8F4u: goto label_1ac8f4;
            case 0x1AC904u: goto label_1ac904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AC934u;
}
