#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu0MemHWord
// Address: 0x2b3860 - 0x2b3898
void pbGetVu0MemHWord_0x2b3860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3860u;

    // 0x2b3860: 0x27bdffd0
    ctx->pc = 0x2b3860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b3864: 0xffbf0020
    ctx->pc = 0x2b3864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b3868: 0xffb00010
    ctx->pc = 0x2b3868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b386c: 0x80802d
    ctx->pc = 0x2b386cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3870: 0x3a0202d
    ctx->pc = 0x2b3870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3874: 0xc0acdde
    ctx->pc = 0x2B3874u;
    SET_GPR_U32(ctx, 31, 0x2B387Cu);
    ctx->pc = 0x2B3878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3778u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemQWord_0x2b3778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B387Cu; }
    }
    if (ctx->pc != 0x2B387Cu) { return; }
    ctx->pc = 0x2B387Cu;
    // 0x2b387c: 0x3210000e
    ctx->pc = 0x2b387cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 14));
    // 0x2b3880: 0x3b01021
    ctx->pc = 0x2b3880u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x2b3884: 0x94420000
    ctx->pc = 0x2b3884u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b3888: 0xdfbf0020
    ctx->pc = 0x2b3888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b388c: 0xdfb00010
    ctx->pc = 0x2b388cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3890: 0x3e00008
    ctx->pc = 0x2B3890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3894u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3898u;
}
