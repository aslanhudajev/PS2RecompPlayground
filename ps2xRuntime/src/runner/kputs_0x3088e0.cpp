#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kputs
// Address: 0x3088e0 - 0x308904
void kputs_0x3088e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3088e0u;

    // 0x3088e0: 0x27bdffe0
    ctx->pc = 0x3088e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3088e4: 0xafa40000
    ctx->pc = 0x3088e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3088e8: 0x3a0282d
    ctx->pc = 0x3088e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088ec: 0xffbf0010
    ctx->pc = 0x3088ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3088f0: 0xc0c0e84
    ctx->pc = 0x3088F0u;
    SET_GPR_U32(ctx, 31, 0x3088F8u);
    ctx->pc = 0x3088F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x303A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        Deci2Call_0x303a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3088F8u; }
    }
    if (ctx->pc != 0x3088F8u) { return; }
    ctx->pc = 0x3088F8u;
    // 0x3088f8: 0xdfbf0010
    ctx->pc = 0x3088f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3088fc: 0x3e00008
    ctx->pc = 0x3088FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308900u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308904u;
}
