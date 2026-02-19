#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TriggerCameraEnd
// Address: 0x2a27e0 - 0x2a2804
void TriggerCameraEnd_0x2a27e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a27e0u;

    // 0x2a27e0: 0x3c020036
    ctx->pc = 0x2a27e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a27e4: 0xac40dbb0
    ctx->pc = 0x2a27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958000), GPR_U32(ctx, 0));
    // 0x2a27e8: 0x3c020036
    ctx->pc = 0x2a27e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a27ec: 0xac40dbb4
    ctx->pc = 0x2a27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958004), GPR_U32(ctx, 0));
    // 0x2a27f0: 0x3c020036
    ctx->pc = 0x2a27f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a27f4: 0xac40dbb8
    ctx->pc = 0x2a27f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958008), GPR_U32(ctx, 0));
    // 0x2a27f8: 0x3c020036
    ctx->pc = 0x2a27f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a27fc: 0x3e00008
    ctx->pc = 0x2A27FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2800u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294958596), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2804u;
}
