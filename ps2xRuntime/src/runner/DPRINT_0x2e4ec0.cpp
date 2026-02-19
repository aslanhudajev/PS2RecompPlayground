#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DPRINT
// Address: 0x2e4ec0 - 0x2e4ee8
void DPRINT_0x2e4ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e4ec0u;

    // 0x2e4ec0: 0x27bdff80
    ctx->pc = 0x2e4ec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e4ec4: 0xffa50048
    ctx->pc = 0x2e4ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x2e4ec8: 0xffa60050
    ctx->pc = 0x2e4ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x2e4ecc: 0xffa70058
    ctx->pc = 0x2e4eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x2e4ed0: 0xffa80060
    ctx->pc = 0x2e4ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x2e4ed4: 0xffa90068
    ctx->pc = 0x2e4ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x2e4ed8: 0xffaa0070
    ctx->pc = 0x2e4ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x2e4edc: 0xffab0078
    ctx->pc = 0x2e4edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x2e4ee0: 0x3e00008
    ctx->pc = 0x2E4EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4EE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4EE8u;
}
