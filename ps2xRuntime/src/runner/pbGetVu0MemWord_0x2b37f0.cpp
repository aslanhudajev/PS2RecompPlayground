#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu0MemWord
// Address: 0x2b37f0 - 0x2b3828
void pbGetVu0MemWord_0x2b37f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b37f0u;

    // 0x2b37f0: 0x27bdffd0
    ctx->pc = 0x2b37f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b37f4: 0xffbf0020
    ctx->pc = 0x2b37f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b37f8: 0xffb00010
    ctx->pc = 0x2b37f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b37fc: 0x80802d
    ctx->pc = 0x2b37fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3800: 0x3a0202d
    ctx->pc = 0x2b3800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3804: 0xc0acdde
    ctx->pc = 0x2B3804u;
    SET_GPR_U32(ctx, 31, 0x2B380Cu);
    ctx->pc = 0x2B3808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3778u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu0MemQWord_0x2b3778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B380Cu; }
    }
    if (ctx->pc != 0x2B380Cu) { return; }
    ctx->pc = 0x2B380Cu;
    // 0x2b380c: 0x3210000c
    ctx->pc = 0x2b380cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 12));
    // 0x2b3810: 0x3b01021
    ctx->pc = 0x2b3810u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x2b3814: 0x8c420000
    ctx->pc = 0x2b3814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b3818: 0xdfbf0020
    ctx->pc = 0x2b3818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b381c: 0xdfb00010
    ctx->pc = 0x2b381cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3820: 0x3e00008
    ctx->pc = 0x2B3820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3824u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3828u;
}
