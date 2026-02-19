#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetStringText
// Address: 0x201978 - 0x2019ac
void GetStringText_0x201978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201978u;

    // 0x201978: 0x27bdfff0
    ctx->pc = 0x201978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20197c: 0xffbf0000
    ctx->pc = 0x20197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201980: 0x80102d
    ctx->pc = 0x201980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201984: 0xa0182d
    ctx->pc = 0x201984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201988: 0xc0382d
    ctx->pc = 0x201988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20198c: 0x3c040031
    ctx->pc = 0x20198cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x201990: 0x2484f6a8
    ctx->pc = 0x201990u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964904));
    // 0x201994: 0x40282d
    ctx->pc = 0x201994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201998: 0xc080642
    ctx->pc = 0x201998u;
    SET_GPR_U32(ctx, 31, 0x2019A0u);
    ctx->pc = 0x20199Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201908u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringTextSub_0x201908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019A0u; }
    }
    if (ctx->pc != 0x2019A0u) { return; }
    ctx->pc = 0x2019A0u;
    // 0x2019a0: 0xdfbf0000
    ctx->pc = 0x2019a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2019a4: 0x3e00008
    ctx->pc = 0x2019A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2019ACu;
}
