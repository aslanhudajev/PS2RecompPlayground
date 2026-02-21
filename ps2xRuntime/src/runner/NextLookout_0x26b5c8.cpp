#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextLookout
// Address: 0x26b5c8 - 0x26b618
void NextLookout_0x26b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b5c8u;

    // 0x26b5c8: 0x3c020034
    ctx->pc = 0x26b5c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b5cc: 0x8c45cd90
    ctx->pc = 0x26b5ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954384)));
    // 0x26b5d0: 0x3c020034
    ctx->pc = 0x26b5d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b5d4: 0x2442eb60
    ctx->pc = 0x26b5d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26b5d8: 0x240301a0
    ctx->pc = 0x26b5d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b5dc: 0x832018
    ctx->pc = 0x26b5dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b5e0: 0x822021
    ctx->pc = 0x26b5e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26b5e4: 0x8c86011c
    ctx->pc = 0x26b5e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x26b5e8: 0xc5102a
    ctx->pc = 0x26b5e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x26b5ec: 0x18a00008
    ctx->pc = 0x26B5ECu;
    {
        const bool branch_taken_0x26b5ec = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x26B5F0u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 0));
        if (branch_taken_0x26b5ec) {
            ctx->pc = 0x26B610u;
            goto label_26b610;
        }
    }
    ctx->pc = 0x26B5F4u;
    // 0x26b5f4: 0x619c0
    ctx->pc = 0x26b5f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 7));
    // 0x26b5f8: 0x3c020034
    ctx->pc = 0x26b5f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b5fc: 0x2442c390
    ctx->pc = 0x26b5fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951824));
    // 0x26b600: 0xac86011c
    ctx->pc = 0x26b600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 6));
    // 0x26b604: 0x3e00008
    ctx->pc = 0x26B604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B608u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B610u: goto label_26b610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B60Cu;
    // 0x26b60c: 0x0
    ctx->pc = 0x26b60cu;
    // NOP
label_26b610:
    // 0x26b610: 0x3e00008
    ctx->pc = 0x26B610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B614u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B610u: goto label_26b610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B618u;
}
