#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitFonts
// Address: 0x2c48b0 - 0x2c48f4
void MBInitFonts_0x2c48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c48b0u;

    // 0x2c48b0: 0x3c02003d
    ctx->pc = 0x2c48b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c48b4: 0xac40b89c
    ctx->pc = 0x2c48b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949020), GPR_U32(ctx, 0));
    // 0x2c48b8: 0x182d
    ctx->pc = 0x2c48b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48bc: 0x3c02003d
    ctx->pc = 0x2c48bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c48c0: 0x2444b938
    ctx->pc = 0x2c48c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294949176));
    // 0x2c48c4: 0x0
    ctx->pc = 0x2c48c4u;
    // NOP
label_2c48c8:
    // 0x2c48c8: 0x31080
    ctx->pc = 0x2c48c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c48cc: 0x441021
    ctx->pc = 0x2c48ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c48d0: 0xac400000
    ctx->pc = 0x2c48d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c48d4: 0x24630001
    ctx->pc = 0x2c48d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c48d8: 0x28620008
    ctx->pc = 0x2c48d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x2c48dc: 0x1440fffa
    ctx->pc = 0x2C48DCu;
    {
        const bool branch_taken_0x2c48dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c48dc) {
            ctx->pc = 0x2C48C8u;
            goto label_2c48c8;
        }
    }
    ctx->pc = 0x2C48E4u;
    // 0x2c48e4: 0x3c030038
    ctx->pc = 0x2c48e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c48e8: 0x24020001
    ctx->pc = 0x2c48e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c48ec: 0x80b11f8
    ctx->pc = 0x2C48ECu;
    ctx->pc = 0x2C48F0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947124), GPR_U32(ctx, 2));
    ctx->pc = 0x2C47E0u;
    MBResetFonts_0x2c47e0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C48F4u;
}
