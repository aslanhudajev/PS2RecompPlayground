#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: kputchar
// Address: 0x1560c8 - 0x156100
void kputchar_0x1560c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("kputchar");


    ctx->pc = 0x1560c8u;

    // 0x1560c8: 0x3c031000
    ctx->pc = 0x1560c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1560cc: 0x3463f130
    ctx->pc = 0x1560ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 61744));
label_1560d0:
    // 0x1560d0: 0x8c620000
    ctx->pc = 0x1560d0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1560d4: 0x30428000
    ctx->pc = 0x1560d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x1560d8: 0x0
    ctx->pc = 0x1560d8u;
    // NOP
    // 0x1560dc: 0x0
    ctx->pc = 0x1560dcu;
    // NOP
    // 0x1560e0: 0x0
    ctx->pc = 0x1560e0u;
    // NOP
    // 0x1560e4: 0x1440fffa
    ctx->pc = 0x1560E4u;
    {
        const bool branch_taken_0x1560e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1560e4) {
            ctx->pc = 0x1560D0u;
            goto label_1560d0;
        }
    }
    ctx->pc = 0x1560ECu;
    // 0x1560ec: 0x3c031000
    ctx->pc = 0x1560ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1560f0: 0x80102d
    ctx->pc = 0x1560f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1560f4: 0x3463f180
    ctx->pc = 0x1560f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 61824));
    // 0x1560f8: 0x3e00008
    ctx->pc = 0x1560F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1560FCu;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1560D0u: goto label_1560d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156100u;
}
