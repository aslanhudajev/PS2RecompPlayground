#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterCollideStart
// Address: 0x29a130 - 0x29a144
void CritterCollideStart_0x29a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29a130u;

    // 0x29a130: 0x3c02003c
    ctx->pc = 0x29a130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29a134: 0xac404170
    ctx->pc = 0x29a134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16752), GPR_U32(ctx, 0));
    // 0x29a138: 0x3c02003c
    ctx->pc = 0x29a138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29a13c: 0x3e00008
    ctx->pc = 0x29A13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A140u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 16756), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A144u;
}
