#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbTextureDmaFree
// Address: 0x2c04e8 - 0x2c0504
void pbTextureDmaFree_0x2c04e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c04e8u;

    // 0x2c04e8: 0x3c020037
    ctx->pc = 0x2c04e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c04ec: 0xac402960
    ctx->pc = 0x2c04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10592), GPR_U32(ctx, 0));
    // 0x2c04f0: 0x3c020037
    ctx->pc = 0x2c04f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c04f4: 0xac40295c
    ctx->pc = 0x2c04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10588), GPR_U32(ctx, 0));
    // 0x2c04f8: 0x3c020037
    ctx->pc = 0x2c04f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c04fc: 0x3e00008
    ctx->pc = 0x2C04FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0500u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 10596), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0504u;
}
