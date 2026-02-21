#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ClearErrorsSub
// Address: 0x2d26b8 - 0x2d2700
void ClearErrorsSub_0x2d26b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d26b8u;

    // 0x2d26b8: 0x182d
    ctx->pc = 0x2d26b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d26bc: 0x3c02003d
    ctx->pc = 0x2d26bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d26c0: 0x24442a60
    ctx->pc = 0x2d26c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 10848));
    // 0x2d26c4: 0x0
    ctx->pc = 0x2d26c4u;
    // NOP
label_2d26c8:
    // 0x2d26c8: 0x31180
    ctx->pc = 0x2d26c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 6));
    // 0x2d26cc: 0x441021
    ctx->pc = 0x2d26ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d26d0: 0xa0400000
    ctx->pc = 0x2d26d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d26d4: 0x24630001
    ctx->pc = 0x2d26d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d26d8: 0x28620008
    ctx->pc = 0x2d26d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x2d26dc: 0x1440fffa
    ctx->pc = 0x2D26DCu;
    {
        const bool branch_taken_0x2d26dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d26dc) {
            ctx->pc = 0x2D26C8u;
            goto label_2d26c8;
        }
    }
    ctx->pc = 0x2D26E4u;
    // 0x2d26e4: 0x3c02003d
    ctx->pc = 0x2d26e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d26e8: 0xa0402a58
    ctx->pc = 0x2d26e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10840), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d26ec: 0x3c02003d
    ctx->pc = 0x2d26ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d26f0: 0xa0402a59
    ctx->pc = 0x2d26f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10841), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d26f4: 0x3c02003d
    ctx->pc = 0x2d26f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d26f8: 0x3e00008
    ctx->pc = 0x2D26F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D26FCu;
        WRITE8(ADD32(GPR_U32(ctx, 2), 10842), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D26C8u: goto label_2d26c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2700u;
}
