#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ClearPlayerControl
// Address: 0x205ae0 - 0x205b2c
void ClearPlayerControl_0x205ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x205ae0u;

    // 0x205ae0: 0x3c020031
    ctx->pc = 0x205ae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205ae4: 0x24421b90
    ctx->pc = 0x205ae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7056));
    // 0x205ae8: 0x2403003c
    ctx->pc = 0x205ae8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x205aec: 0x832018
    ctx->pc = 0x205aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x205af0: 0x821821
    ctx->pc = 0x205af0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x205af4: 0xac650000
    ctx->pc = 0x205af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x205af8: 0x441821
    ctx->pc = 0x205af8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x205afc: 0xac600004
    ctx->pc = 0x205afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x205b00: 0xac600008
    ctx->pc = 0x205b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x205b04: 0xac60000c
    ctx->pc = 0x205b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x205b08: 0xac600014
    ctx->pc = 0x205b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x205b0c: 0xac600018
    ctx->pc = 0x205b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x205b10: 0xac600010
    ctx->pc = 0x205b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x205b14: 0xac60001c
    ctx->pc = 0x205b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x205b18: 0xac600020
    ctx->pc = 0x205b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x205b1c: 0xac600024
    ctx->pc = 0x205b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x205b20: 0x60102d
    ctx->pc = 0x205b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b24: 0x3e00008
    ctx->pc = 0x205B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205B28u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x205B2Cu;
}
