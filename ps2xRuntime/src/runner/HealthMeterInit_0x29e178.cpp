#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: HealthMeterInit
// Address: 0x29e178 - 0x29e194
void HealthMeterInit_0x29e178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29e178u;

    // 0x29e178: 0x3c02003c
    ctx->pc = 0x29e178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e17c: 0xac404178
    ctx->pc = 0x29e17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16760), GPR_U32(ctx, 0));
    // 0x29e180: 0x3c02003c
    ctx->pc = 0x29e180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e184: 0xac40417c
    ctx->pc = 0x29e184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16764), GPR_U32(ctx, 0));
    // 0x29e188: 0x3c02003c
    ctx->pc = 0x29e188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e18c: 0x3e00008
    ctx->pc = 0x29E18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E190u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 16768), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E194u;
}
