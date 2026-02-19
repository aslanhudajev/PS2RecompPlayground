#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScrollTextHeight
// Address: 0x2029c0 - 0x202a10
void ScrollTextHeight_0x2029c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2029c0u;

    // 0x2029c0: 0x27bdfff0
    ctx->pc = 0x2029c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2029c4: 0xffbf0000
    ctx->pc = 0x2029c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2029c8: 0x3c020031
    ctx->pc = 0x2029c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2029cc: 0x4800006
    ctx->pc = 0x2029CCu;
    {
        const bool branch_taken_0x2029cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2029D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964904));
        if (branch_taken_0x2029cc) {
            ctx->pc = 0x2029E8u;
            goto label_2029e8;
        }
    }
    ctx->pc = 0x2029D4u;
    // 0x2029d4: 0x24030044
    ctx->pc = 0x2029d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x2029d8: 0x831818
    ctx->pc = 0x2029d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2029dc: 0x3c020031
    ctx->pc = 0x2029dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2029e0: 0x2442f6f0
    ctx->pc = 0x2029e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x2029e4: 0x621821
    ctx->pc = 0x2029e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2029e8:
    // 0x2029e8: 0x4a10004
    ctx->pc = 0x2029E8u;
    {
        const bool branch_taken_0x2029e8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2029ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2029e8) {
            ctx->pc = 0x2029FCu;
            goto label_2029fc;
        }
    }
    ctx->pc = 0x2029F0u;
    // 0x2029f0: 0x8c45f278
    ctx->pc = 0x2029f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294963832)));
    // 0x2029f4: 0x4a00003
    ctx->pc = 0x2029F4u;
    {
        const bool branch_taken_0x2029f4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2029F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2029f4) {
            ctx->pc = 0x202A04u;
            goto label_202a04;
        }
    }
    ctx->pc = 0x2029FCu;
label_2029fc:
    // 0x2029fc: 0xc080a12
    ctx->pc = 0x2029FCu;
    SET_GPR_U32(ctx, 31, 0x202A04u);
    ctx->pc = 0x202A00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202848u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextHeightSub_0x202848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202A04u; }
    }
    if (ctx->pc != 0x202A04u) { return; }
    ctx->pc = 0x202A04u;
label_202a04:
    // 0x202a04: 0xdfbf0000
    ctx->pc = 0x202a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202a08: 0x3e00008
    ctx->pc = 0x202A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202A0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2029E8u: goto label_2029e8;
            case 0x2029FCu: goto label_2029fc;
            case 0x202A04u: goto label_202a04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202A10u;
}
