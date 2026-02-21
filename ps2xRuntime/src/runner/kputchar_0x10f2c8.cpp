#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kputchar
// Address: 0x10f2c8 - 0x10f300
void kputchar_0x10f2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10f2c8u;

    // 0x10f2c8: 0x3c031000
    ctx->pc = 0x10f2c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x10f2cc: 0x3463f130
    ctx->pc = 0x10f2ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 61744));
label_10f2d0:
    // 0x10f2d0: 0x8c620000
    ctx->pc = 0x10f2d0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10f2d4: 0x30428000
    ctx->pc = 0x10f2d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x10f2d8: 0x0
    ctx->pc = 0x10f2d8u;
    // NOP
    // 0x10f2dc: 0x0
    ctx->pc = 0x10f2dcu;
    // NOP
    // 0x10f2e0: 0x0
    ctx->pc = 0x10f2e0u;
    // NOP
    // 0x10f2e4: 0x1440fffa
    ctx->pc = 0x10F2E4u;
    {
        const bool branch_taken_0x10f2e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10f2e4) {
            ctx->pc = 0x10F2D0u;
            goto label_10f2d0;
        }
    }
    ctx->pc = 0x10F2ECu;
    // 0x10f2ec: 0x3c031000
    ctx->pc = 0x10f2ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x10f2f0: 0x80102d
    ctx->pc = 0x10f2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2f4: 0x3463f180
    ctx->pc = 0x10f2f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 61824));
    // 0x10f2f8: 0x3e00008
    ctx->pc = 0x10F2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F2FCu;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10F2D0u: goto label_10f2d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10F300u;
}
