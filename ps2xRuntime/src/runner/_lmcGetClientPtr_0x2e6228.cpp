#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lmcGetClientPtr
// Address: 0x2e6228 - 0x2e624c
void _lmcGetClientPtr_0x2e6228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e6228u;

    // 0x2e6228: 0x3c02003e
    ctx->pc = 0x2e6228u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2e622c: 0x3c03003a
    ctx->pc = 0x2e622cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2e6230: 0x24421dc0
    ctx->pc = 0x2e6230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7616));
    // 0x2e6234: 0x24632f50
    ctx->pc = 0x2e6234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12112));
    // 0x2e6238: 0xac820000
    ctx->pc = 0x2e6238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2e623c: 0x3c02003e
    ctx->pc = 0x2e623cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2e6240: 0xaca30000
    ctx->pc = 0x2e6240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2e6244: 0x3e00008
    ctx->pc = 0x2E6244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6248u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2048));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E624Cu;
}
