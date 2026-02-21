#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartFXLoop
// Address: 0x27e170 - 0x27e198
void StartFXLoop_0x27e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e170u;

    // 0x27e170: 0x27bdfff0
    ctx->pc = 0x27e170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27e174: 0xffbf0000
    ctx->pc = 0x27e174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e178: 0x382d
    ctx->pc = 0x27e178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e17c: 0x402d
    ctx->pc = 0x27e17cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e180: 0x482d
    ctx->pc = 0x27e180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e184: 0xc09f832
    ctx->pc = 0x27E184u;
    SET_GPR_U32(ctx, 31, 0x27E18Cu);
    ctx->pc = 0x27E188u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27E0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMissile_0x27e0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E18Cu; }
    }
    if (ctx->pc != 0x27E18Cu) { return; }
    ctx->pc = 0x27E18Cu;
    // 0x27e18c: 0xdfbf0000
    ctx->pc = 0x27e18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e190: 0x3e00008
    ctx->pc = 0x27E190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E194u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27E198u;
}
