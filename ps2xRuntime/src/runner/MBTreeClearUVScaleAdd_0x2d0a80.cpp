#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeClearUVScaleAdd
// Address: 0x2d0a80 - 0x2d0ac8
void MBTreeClearUVScaleAdd_0x2d0a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0a80u;

    // 0x2d0a80: 0x8c820060
    ctx->pc = 0x2d0a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d0a84: 0x3c031000
    ctx->pc = 0x2d0a84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2d0a88: 0x431024
    ctx->pc = 0x2d0a88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0a8c: 0x1040000c
    ctx->pc = 0x2D0A8Cu;
    {
        const bool branch_taken_0x2d0a8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0A90u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a8c) {
            ctx->pc = 0x2D0AC0u;
            goto label_2d0ac0;
        }
    }
    ctx->pc = 0x2D0A94u;
    // 0x2d0a94: 0x3c02003a
    ctx->pc = 0x2d0a94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d0a98: 0x244210b0
    ctx->pc = 0x2d0a98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2d0a9c: 0x9083005e
    ctx->pc = 0x2d0a9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 94)));
    // 0x2d0aa0: 0x31900
    ctx->pc = 0x2d0aa0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d0aa4: 0x621821
    ctx->pc = 0x2d0aa4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0aa8: 0x3c017cf0
    ctx->pc = 0x2d0aa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)31984 << 16));
    // 0x2d0aac: 0x3421bdc2
    ctx->pc = 0x2d0aacu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 48578));
    // 0x2d0ab0: 0x44810000
    ctx->pc = 0x2d0ab0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d0ab4: 0xe4600000
    ctx->pc = 0x2d0ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d0ab8: 0x80b4266
    ctx->pc = 0x2D0AB8u;
    ctx->pc = 0x2D0ABCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2D0998u;
    MBTreeSetUVIndex_0x2d0998(rdram, ctx, runtime); return;
    ctx->pc = 0x2D0AC0u;
label_2d0ac0:
    // 0x2d0ac0: 0x3e00008
    ctx->pc = 0x2D0AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0AC0u: goto label_2d0ac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0AC8u;
}
