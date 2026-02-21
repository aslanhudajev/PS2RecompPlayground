#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetOwner
// Address: 0x27e068 - 0x27e08c
void SfxSetOwner_0x27e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e068u;

    // 0x27e068: 0x4800006
    ctx->pc = 0x27E068u;
    {
        const bool branch_taken_0x27e068 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27E06Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
        if (branch_taken_0x27e068) {
            ctx->pc = 0x27E084u;
            goto label_27e084;
        }
    }
    ctx->pc = 0x27E070u;
    // 0x27e070: 0x831818
    ctx->pc = 0x27e070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27e074: 0x3c020034
    ctx->pc = 0x27e074u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27e078: 0x24420eb0
    ctx->pc = 0x27e078u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27e07c: 0x621821
    ctx->pc = 0x27e07cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e080: 0xa46500bc
    ctx->pc = 0x27e080u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 5));
label_27e084:
    // 0x27e084: 0x3e00008
    ctx->pc = 0x27E084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E084u: goto label_27e084;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27E08Cu;
}
