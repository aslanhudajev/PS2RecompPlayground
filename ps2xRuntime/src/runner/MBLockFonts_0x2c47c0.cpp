#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBLockFonts
// Address: 0x2c47c0 - 0x2c47e0
void MBLockFonts_0x2c47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c47c0u;

    // 0x2c47c0: 0x3c02003d
    ctx->pc = 0x2c47c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c47c4: 0x2442b938
    ctx->pc = 0x2c47c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949176));
    // 0x2c47c8: 0x42080
    ctx->pc = 0x2c47c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c47cc: 0x822021
    ctx->pc = 0x2c47ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c47d0: 0x3c02003d
    ctx->pc = 0x2c47d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c47d4: 0x8c42b89c
    ctx->pc = 0x2c47d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949020)));
    // 0x2c47d8: 0x3e00008
    ctx->pc = 0x2C47D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C47DCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C47E0u;
}
