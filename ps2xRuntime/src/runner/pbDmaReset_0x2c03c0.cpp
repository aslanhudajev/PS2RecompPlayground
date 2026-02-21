#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDmaReset
// Address: 0x2c03c0 - 0x2c03f8
void pbDmaReset_0x2c03c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c03c0u;

    // 0x2c03c0: 0x3c020037
    ctx->pc = 0x2c03c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c03c4: 0xac402940
    ctx->pc = 0x2c03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10560), GPR_U32(ctx, 0));
    // 0x2c03c8: 0x3c020037
    ctx->pc = 0x2c03c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c03cc: 0x2403ffff
    ctx->pc = 0x2c03ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c03d0: 0xac432948
    ctx->pc = 0x2c03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10568), GPR_U32(ctx, 3));
    // 0x2c03d4: 0x3c020037
    ctx->pc = 0x2c03d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c03d8: 0xac43294c
    ctx->pc = 0x2c03d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10572), GPR_U32(ctx, 3));
    // 0x2c03dc: 0x3c020037
    ctx->pc = 0x2c03dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c03e0: 0xac432950
    ctx->pc = 0x2c03e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10576), GPR_U32(ctx, 3));
    // 0x2c03e4: 0x3c020037
    ctx->pc = 0x2c03e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c03e8: 0xac432954
    ctx->pc = 0x2c03e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10580), GPR_U32(ctx, 3));
    // 0x2c03ec: 0x3c020037
    ctx->pc = 0x2c03ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c03f0: 0x3e00008
    ctx->pc = 0x2C03F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C03F4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 10584), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C03F8u;
}
