#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CameraNewPos
// Address: 0x26ae98 - 0x26aeac
void CameraNewPos_0x26ae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26ae98u;

    // 0x26ae98: 0x3c020034
    ctx->pc = 0x26ae98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ae9c: 0xac40f90c
    ctx->pc = 0x26ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965516), GPR_U32(ctx, 0));
    // 0x26aea0: 0x3c020034
    ctx->pc = 0x26aea0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26aea4: 0x3e00008
    ctx->pc = 0x26AEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AEA8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965520), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AEACu;
}
