#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetHit
// Address: 0x27dda0 - 0x27ddcc
void SfxSetHit_0x27dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27dda0u;

    // 0x27dda0: 0x4800008
    ctx->pc = 0x27DDA0u;
    {
        const bool branch_taken_0x27dda0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27DDA4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
        if (branch_taken_0x27dda0) {
            ctx->pc = 0x27DDC4u;
            goto label_27ddc4;
        }
    }
    ctx->pc = 0x27DDA8u;
    // 0x27dda8: 0x831818
    ctx->pc = 0x27dda8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27ddac: 0x3c020034
    ctx->pc = 0x27ddacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27ddb0: 0x24420eb0
    ctx->pc = 0x27ddb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27ddb4: 0x621821
    ctx->pc = 0x27ddb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ddb8: 0xa46500be
    ctx->pc = 0x27ddb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 5));
    // 0x27ddbc: 0xac6600cc
    ctx->pc = 0x27ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 6));
    // 0x27ddc0: 0xac6700d0
    ctx->pc = 0x27ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 7));
label_27ddc4:
    // 0x27ddc4: 0x3e00008
    ctx->pc = 0x27DDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DDC4u: goto label_27ddc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DDCCu;
}
