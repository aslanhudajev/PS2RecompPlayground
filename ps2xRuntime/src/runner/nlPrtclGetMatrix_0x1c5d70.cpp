#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrtclGetMatrix
// Address: 0x1c5d70 - 0x1c5d94
void nlPrtclGetMatrix_0x1c5d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrtclGetMatrix");


    ctx->pc = 0x1c5d70u;

    // 0x1c5d70: 0xf8b80000
    ctx->pc = 0x1c5d70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x1c5d74: 0xf8b90010
    ctx->pc = 0x1c5d74u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x1c5d78: 0xf8ba0020
    ctx->pc = 0x1c5d78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x1c5d7c: 0xf8bb0030
    ctx->pc = 0x1c5d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x1c5d80: 0xf89c0000
    ctx->pc = 0x1c5d80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x1c5d84: 0xf89d0010
    ctx->pc = 0x1c5d84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x1c5d88: 0xf89e0020
    ctx->pc = 0x1c5d88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x1c5d8c: 0x3e00008
    ctx->pc = 0x1C5D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5D90u;
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[31]));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5D94u;
}
