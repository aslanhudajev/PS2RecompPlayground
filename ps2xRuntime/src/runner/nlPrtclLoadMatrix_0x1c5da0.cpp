#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrtclLoadMatrix
// Address: 0x1c5da0 - 0x1c5dc4
void nlPrtclLoadMatrix_0x1c5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrtclLoadMatrix");


    ctx->pc = 0x1c5da0u;

    // 0x1c5da0: 0xd8b80000
    ctx->pc = 0x1c5da0u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c5da4: 0xd8b90010
    ctx->pc = 0x1c5da4u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c5da8: 0xd8ba0020
    ctx->pc = 0x1c5da8u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1c5dac: 0xd8bb0030
    ctx->pc = 0x1c5dacu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1c5db0: 0xd89c0000
    ctx->pc = 0x1c5db0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5db4: 0xd89d0010
    ctx->pc = 0x1c5db4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c5db8: 0xd89e0020
    ctx->pc = 0x1c5db8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1c5dbc: 0x3e00008
    ctx->pc = 0x1C5DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5DC0u;
        ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5DC4u;
}
