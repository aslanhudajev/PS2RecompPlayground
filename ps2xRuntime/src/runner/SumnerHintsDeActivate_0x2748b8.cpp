#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerHintsDeActivate
// Address: 0x2748b8 - 0x2748d4
void SumnerHintsDeActivate_0x2748b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2748b8u;

    // 0x2748b8: 0x3c030034
    ctx->pc = 0x2748b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2748bc: 0x24020004
    ctx->pc = 0x2748bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2748c0: 0xac62fc88
    ctx->pc = 0x2748c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966408), GPR_U32(ctx, 2));
    // 0x2748c4: 0x3c030034
    ctx->pc = 0x2748c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2748c8: 0x24020001
    ctx->pc = 0x2748c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2748cc: 0x3e00008
    ctx->pc = 0x2748CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2748D0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966188), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2748D4u;
}
