#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimSeqType
// Address: 0x20fb70 - 0x20fb88
void AnimSeqType_0x20fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20fb70u;

    // 0x20fb70: 0x8c830000
    ctx->pc = 0x20fb70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20fb74: 0x84a2000e
    ctx->pc = 0x20fb74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x20fb78: 0x210c0
    ctx->pc = 0x20fb78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x20fb7c: 0x621821
    ctx->pc = 0x20fb7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fb80: 0x3e00008
    ctx->pc = 0x20FB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FB84u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FB88u;
}
