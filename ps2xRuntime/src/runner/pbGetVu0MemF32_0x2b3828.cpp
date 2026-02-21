#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu0MemF32
// Address: 0x2b3828 - 0x2b3860
void pbGetVu0MemF32_0x2b3828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3828u;

    // 0x2b3828: 0x27bdffd0
    ctx->pc = 0x2b3828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b382c: 0xffbf0020
    ctx->pc = 0x2b382cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b3830: 0xffb00010
    ctx->pc = 0x2b3830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b3834: 0x80802d
    ctx->pc = 0x2b3834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3838: 0x3a0202d
    ctx->pc = 0x2b3838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b383c: 0xc0acdde
    ctx->pc = 0x2B383Cu;
    SET_GPR_U32(ctx, 31, 0x2B3844u);
    ctx->pc = 0x2B3840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3778u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemQWord_0x2b3778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3844u; }
    }
    if (ctx->pc != 0x2B3844u) { return; }
    ctx->pc = 0x2B3844u;
    // 0x2b3844: 0x3210000c
    ctx->pc = 0x2b3844u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 12));
    // 0x2b3848: 0x3b01021
    ctx->pc = 0x2b3848u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x2b384c: 0xc4400000
    ctx->pc = 0x2b384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3850: 0xdfbf0020
    ctx->pc = 0x2b3850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3854: 0xdfb00010
    ctx->pc = 0x2b3854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3858: 0x3e00008
    ctx->pc = 0x2B3858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B385Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3860u;
}
