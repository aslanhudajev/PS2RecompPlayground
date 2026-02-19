#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TextHeightMLines
// Address: 0x2015f8 - 0x201634
void TextHeightMLines_0x2015f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2015f8u;

    // 0x2015f8: 0x27bdffd0
    ctx->pc = 0x2015f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2015fc: 0xffbf0020
    ctx->pc = 0x2015fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x201600: 0xffb10010
    ctx->pc = 0x201600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201604: 0xffb00000
    ctx->pc = 0x201604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201608: 0xc080570
    ctx->pc = 0x201608u;
    SET_GPR_U32(ctx, 31, 0x201610u);
    ctx->pc = 0x20160Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201610u; }
    }
    if (ctx->pc != 0x201610u) { return; }
    ctx->pc = 0x201610u;
    // 0x201610: 0x40802d
    ctx->pc = 0x201610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201614: 0xc080408
    ctx->pc = 0x201614u;
    SET_GPR_U32(ctx, 31, 0x20161Cu);
    ctx->pc = 0x201618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201020u;
    {
        const uint32_t __entryPc = ctx->pc;
        TextMLines_0x201020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20161Cu; }
    }
    if (ctx->pc != 0x20161Cu) { return; }
    ctx->pc = 0x20161Cu;
    // 0x20161c: 0x501018
    ctx->pc = 0x20161cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201620: 0xdfbf0020
    ctx->pc = 0x201620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201624: 0xdfb10010
    ctx->pc = 0x201624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201628: 0xdfb00000
    ctx->pc = 0x201628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20162c: 0x3e00008
    ctx->pc = 0x20162Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201634u;
}
