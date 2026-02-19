#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbObjDmaStart
// Address: 0x2c0398 - 0x2c03bc
void pbObjDmaStart_0x2c0398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0398u;

    // 0x2c0398: 0x3c020037
    ctx->pc = 0x2c0398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c039c: 0xac40297c
    ctx->pc = 0x2c039cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10620), GPR_U32(ctx, 0));
    // 0x2c03a0: 0x3c040037
    ctx->pc = 0x2c03a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2c03a4: 0x3c020037
    ctx->pc = 0x2c03a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c03a8: 0x8c432974
    ctx->pc = 0x2c03a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10612)));
    // 0x2c03ac: 0xac832970
    ctx->pc = 0x2c03acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10608), GPR_U32(ctx, 3));
    // 0x2c03b0: 0x3c020037
    ctx->pc = 0x2c03b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c03b4: 0x3e00008
    ctx->pc = 0x2C03B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C03B8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 11664), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C03BCu;
}
