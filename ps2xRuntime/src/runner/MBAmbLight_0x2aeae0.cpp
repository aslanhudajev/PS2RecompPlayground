#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBAmbLight
// Address: 0x2aeae0 - 0x2aeaf8
void MBAmbLight_0x2aeae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aeae0u;

    // 0x2aeae0: 0x80282d
    ctx->pc = 0x2aeae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeae4: 0x3c020036
    ctx->pc = 0x2aeae4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aeae8: 0x8c42dee0
    ctx->pc = 0x2aeae8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aeaec: 0x8c44001c
    ctx->pc = 0x2aeaecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2aeaf0: 0x80b958e
    ctx->pc = 0x2AEAF0u;
    ctx->pc = 0x2AEAF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 208));
    ctx->pc = 0x2E5638u;
    sceVu0CopyVector_0x2e5638(rdram, ctx, runtime); return;
    ctx->pc = 0x2AEAF8u;
}
