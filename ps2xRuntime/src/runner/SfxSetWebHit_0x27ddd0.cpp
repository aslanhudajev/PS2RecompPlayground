#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetWebHit
// Address: 0x27ddd0 - 0x27de00
void SfxSetWebHit_0x27ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ddd0u;

    // 0x27ddd0: 0x4800009
    ctx->pc = 0x27DDD0u;
    {
        const bool branch_taken_0x27ddd0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27DDD4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
        if (branch_taken_0x27ddd0) {
            ctx->pc = 0x27DDF8u;
            goto label_27ddf8;
        }
    }
    ctx->pc = 0x27DDD8u;
    // 0x27ddd8: 0x831818
    ctx->pc = 0x27ddd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27dddc: 0x3c020034
    ctx->pc = 0x27dddcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27dde0: 0x24420eb0
    ctx->pc = 0x27dde0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27dde4: 0x621821
    ctx->pc = 0x27dde4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27dde8: 0xa46500be
    ctx->pc = 0x27dde8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 5));
    // 0x27ddec: 0xac6600cc
    ctx->pc = 0x27ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 6));
    // 0x27ddf0: 0xac6600d0
    ctx->pc = 0x27ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 6));
    // 0x27ddf4: 0xe46c0078
    ctx->pc = 0x27ddf4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_27ddf8:
    // 0x27ddf8: 0x3e00008
    ctx->pc = 0x27DDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DDF8u: goto label_27ddf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DE00u;
}
