#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CaptionTextReset
// Address: 0x2655d8 - 0x2655f8
void CaptionTextReset_0x2655d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2655d8u;

    // 0x2655d8: 0x3c020034
    ctx->pc = 0x2655d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2655dc: 0xac40e8e4
    ctx->pc = 0x2655dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961380), GPR_U32(ctx, 0));
    // 0x2655e0: 0x3c020034
    ctx->pc = 0x2655e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2655e4: 0xac40e8e8
    ctx->pc = 0x2655e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 0));
    // 0x2655e8: 0x3c030034
    ctx->pc = 0x2655e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2655ec: 0x2402003c
    ctx->pc = 0x2655ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2655f0: 0x3e00008
    ctx->pc = 0x2655F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2655F4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961388), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2655F8u;
}
