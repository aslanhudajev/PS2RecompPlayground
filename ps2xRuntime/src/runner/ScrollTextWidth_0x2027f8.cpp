#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScrollTextWidth
// Address: 0x2027f8 - 0x202848
void ScrollTextWidth_0x2027f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2027f8u;

    // 0x2027f8: 0x27bdfff0
    ctx->pc = 0x2027f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2027fc: 0xffbf0000
    ctx->pc = 0x2027fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202800: 0x3c020031
    ctx->pc = 0x202800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202804: 0x4800006
    ctx->pc = 0x202804u;
    {
        const bool branch_taken_0x202804 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x202808u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964904));
        if (branch_taken_0x202804) {
            ctx->pc = 0x202820u;
            goto label_202820;
        }
    }
    ctx->pc = 0x20280Cu;
    // 0x20280c: 0x24030044
    ctx->pc = 0x20280cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x202810: 0x831818
    ctx->pc = 0x202810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202814: 0x3c020031
    ctx->pc = 0x202814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202818: 0x2442f6f0
    ctx->pc = 0x202818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x20281c: 0x621821
    ctx->pc = 0x20281cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_202820:
    // 0x202820: 0x4a10004
    ctx->pc = 0x202820u;
    {
        const bool branch_taken_0x202820 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x202824u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x202820) {
            ctx->pc = 0x202834u;
            goto label_202834;
        }
    }
    ctx->pc = 0x202828u;
    // 0x202828: 0x8c45f278
    ctx->pc = 0x202828u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294963832)));
    // 0x20282c: 0x4a00003
    ctx->pc = 0x20282Cu;
    {
        const bool branch_taken_0x20282c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x202830u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20282c) {
            ctx->pc = 0x20283Cu;
            goto label_20283c;
        }
    }
    ctx->pc = 0x202834u;
label_202834:
    // 0x202834: 0xc0809a8
    ctx->pc = 0x202834u;
    SET_GPR_U32(ctx, 31, 0x20283Cu);
    ctx->pc = 0x202838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2026A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidthSub_0x2026a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20283Cu; }
    }
    if (ctx->pc != 0x20283Cu) { return; }
    ctx->pc = 0x20283Cu;
label_20283c:
    // 0x20283c: 0xdfbf0000
    ctx->pc = 0x20283cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202840: 0x3e00008
    ctx->pc = 0x202840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202844u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202820u: goto label_202820;
            case 0x202834u: goto label_202834;
            case 0x20283Cu: goto label_20283c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202848u;
}
