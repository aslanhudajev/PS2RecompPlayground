#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNodeIsVis
// Address: 0x2c0880 - 0x2c08b0
void MBNodeIsVis_0x2c0880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0880u;

    // 0x2c0880: 0x3085001f
    ctx->pc = 0x2c0880u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 31));
    // 0x2c0884: 0x42143
    ctx->pc = 0x2c0884u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x2c0888: 0x24020001
    ctx->pc = 0x2c0888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c088c: 0xa22804
    ctx->pc = 0x2c088cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c0890: 0x3c03003d
    ctx->pc = 0x2c0890u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c0894: 0x2463b200
    ctx->pc = 0x2c0894u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947328));
    // 0x2c0898: 0x42080
    ctx->pc = 0x2c0898u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c089c: 0x832021
    ctx->pc = 0x2c089cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c08a0: 0x8c830000
    ctx->pc = 0x2c08a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c08a4: 0xa32824
    ctx->pc = 0x2c08a4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c08a8: 0x3e00008
    ctx->pc = 0x2C08A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C08ACu;
        if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C08B0u;
}
