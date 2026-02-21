#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LevelLetter
// Address: 0x2626a0 - 0x2626f0
void LevelLetter_0x2626a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2626a0u;

    // 0x2626a0: 0x3c02003c
    ctx->pc = 0x2626a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2626a4: 0x8c423200
    ctx->pc = 0x2626a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12800)));
    // 0x2626a8: 0x4410003
    ctx->pc = 0x2626A8u;
    {
        const bool branch_taken_0x2626a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2626ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2626a8) {
            ctx->pc = 0x2626B8u;
            goto label_2626b8;
        }
    }
    ctx->pc = 0x2626B0u;
    // 0x2626b0: 0x10000009
    ctx->pc = 0x2626B0u;
    {
        const bool branch_taken_0x2626b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2626B4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 65));
        if (branch_taken_0x2626b0) {
            ctx->pc = 0x2626D8u;
            goto label_2626d8;
        }
    }
    ctx->pc = 0x2626B8u;
label_2626b8:
    // 0x2626b8: 0x3c040034
    ctx->pc = 0x2626b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x2626bc: 0x2484e520
    ctx->pc = 0x2626bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960416));
    // 0x2626c0: 0x3c02003c
    ctx->pc = 0x2626c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2626c4: 0x8c423200
    ctx->pc = 0x2626c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12800)));
    // 0x2626c8: 0x2403002c
    ctx->pc = 0x2626c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x2626cc: 0x431018
    ctx->pc = 0x2626ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2626d0: 0x441021
    ctx->pc = 0x2626d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2626d4: 0x8043000f
    ctx->pc = 0x2626d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
label_2626d8:
    // 0x2626d8: 0x24020054
    ctx->pc = 0x2626d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 84));
    // 0x2626dc: 0x14620002
    ctx->pc = 0x2626DCu;
    {
        const bool branch_taken_0x2626dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2626E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        if (branch_taken_0x2626dc) {
            ctx->pc = 0x2626E8u;
            goto label_2626e8;
        }
    }
    ctx->pc = 0x2626E4u;
    // 0x2626e4: 0x45180a
    ctx->pc = 0x2626e4u;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
label_2626e8:
    // 0x2626e8: 0x3e00008
    ctx->pc = 0x2626E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2626ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2626B8u: goto label_2626b8;
            case 0x2626D8u: goto label_2626d8;
            case 0x2626E8u: goto label_2626e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2626F0u;
}
