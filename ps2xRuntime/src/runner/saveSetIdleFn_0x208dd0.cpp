#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: saveSetIdleFn
// Address: 0x208dd0 - 0x208e00
void saveSetIdleFn_0x208dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x208dd0u;

    // 0x208dd0: 0x27bdffe0
    ctx->pc = 0x208dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208dd4: 0xffbe0010
    ctx->pc = 0x208dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x208dd8: 0x3a0f02d
    ctx->pc = 0x208dd8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ddc: 0xafc40000
    ctx->pc = 0x208ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x208de0: 0x8fc20000
    ctx->pc = 0x208de0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208de4: 0x3c01003c
    ctx->pc = 0x208de4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x208de8: 0xac22c4e4
    ctx->pc = 0x208de8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952164), GPR_U32(ctx, 2));
    // 0x208dec: 0x3c0e82d
    ctx->pc = 0x208decu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208df0: 0xdfbe0010
    ctx->pc = 0x208df0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208df4: 0x27bd0020
    ctx->pc = 0x208df4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x208df8: 0x3e00008
    ctx->pc = 0x208DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208E00u;
}
