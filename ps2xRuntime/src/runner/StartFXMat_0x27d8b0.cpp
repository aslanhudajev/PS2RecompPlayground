#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartFXMat
// Address: 0x27d8b0 - 0x27d8f8
void StartFXMat_0x27d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27d8b0u;

    // 0x27d8b0: 0x27bdffd0
    ctx->pc = 0x27d8b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d8b4: 0xffbf0020
    ctx->pc = 0x27d8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27d8b8: 0xffb10010
    ctx->pc = 0x27d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27d8bc: 0xffb00000
    ctx->pc = 0x27d8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d8c0: 0xa0882d
    ctx->pc = 0x27d8c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8c4: 0xc09f866
    ctx->pc = 0x27D8C4u;
    SET_GPR_U32(ctx, 31, 0x27D8CCu);
    ctx->pc = 0x27D8C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 48));
    ctx->pc = 0x27E198u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXNoLoop_0x27e198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D8CCu; }
    }
    if (ctx->pc != 0x27D8CCu) { return; }
    ctx->pc = 0x27D8CCu;
    // 0x27d8cc: 0x40802d
    ctx->pc = 0x27d8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8d0: 0x200202d
    ctx->pc = 0x27d8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8d4: 0x220282d
    ctx->pc = 0x27d8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8d8: 0xc09f748
    ctx->pc = 0x27D8D8u;
    SET_GPR_U32(ctx, 31, 0x27D8E0u);
    ctx->pc = 0x27D8DCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DD20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMat_0x27dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D8E0u; }
    }
    if (ctx->pc != 0x27D8E0u) { return; }
    ctx->pc = 0x27D8E0u;
    // 0x27d8e0: 0x200102d
    ctx->pc = 0x27d8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8e4: 0xdfbf0020
    ctx->pc = 0x27d8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d8e8: 0xdfb10010
    ctx->pc = 0x27d8e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d8ec: 0xdfb00000
    ctx->pc = 0x27d8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d8f0: 0x3e00008
    ctx->pc = 0x27D8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D8F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D8F8u;
}
