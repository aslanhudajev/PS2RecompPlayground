#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCloseDma
// Address: 0x2a5c50 - 0x2a5c94
void pbCloseDma_0x2a5c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5c50u;

    // 0x2a5c50: 0x27bdffd0
    ctx->pc = 0x2a5c50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5c54: 0xffbf0020
    ctx->pc = 0x2a5c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5c58: 0xffbe0010
    ctx->pc = 0x2a5c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a5c5c: 0xffb00000
    ctx->pc = 0x2a5c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5c60: 0x3a0f02d
    ctx->pc = 0x2a5c60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c64: 0x3c100036
    ctx->pc = 0x2a5c64u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a5c68: 0x8e10dee0
    ctx->pc = 0x2a5c68u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a5c6c: 0xc0a9888
    ctx->pc = 0x2A5C6Cu;
    SET_GPR_U32(ctx, 31, 0x2A5C74u);
    ctx->pc = 0x2A6220u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseDmaManager_0x2a6220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C74u; }
    }
    if (ctx->pc != 0x2A5C74u) { return; }
    ctx->pc = 0x2A5C74u;
    // 0x2a5c74: 0xae000020
    ctx->pc = 0x2a5c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2a5c78: 0x3c0e82d
    ctx->pc = 0x2a5c78u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c7c: 0xdfbf0020
    ctx->pc = 0x2a5c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5c80: 0xdfbe0010
    ctx->pc = 0x2a5c80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5c84: 0xdfb00000
    ctx->pc = 0x2a5c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5c88: 0x27bd0030
    ctx->pc = 0x2a5c88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a5c8c: 0x3e00008
    ctx->pc = 0x2A5C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5C94u;
}
