#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetHitTarget
// Address: 0x27e090 - 0x27e0c8
void SfxSetHitTarget_0x27e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e090u;

    // 0x27e090: 0x480000b
    ctx->pc = 0x27E090u;
    {
        const bool branch_taken_0x27e090 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27E094u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
        if (branch_taken_0x27e090) {
            ctx->pc = 0x27E0C0u;
            goto label_27e0c0;
        }
    }
    ctx->pc = 0x27E098u;
    // 0x27e098: 0x831818
    ctx->pc = 0x27e098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27e09c: 0x3c020034
    ctx->pc = 0x27e09cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27e0a0: 0x24420eb0
    ctx->pc = 0x27e0a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27e0a4: 0x621821
    ctx->pc = 0x27e0a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e0a8: 0xac6500e4
    ctx->pc = 0x27e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 5));
    // 0x27e0ac: 0xe46c00a0
    ctx->pc = 0x27e0acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x27e0b0: 0x8c620064
    ctx->pc = 0x27e0b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x27e0b4: 0x3c044000
    ctx->pc = 0x27e0b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16384 << 16));
    // 0x27e0b8: 0x441025
    ctx->pc = 0x27e0b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27e0bc: 0xac620064
    ctx->pc = 0x27e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_27e0c0:
    // 0x27e0c0: 0x3e00008
    ctx->pc = 0x27E0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E0C0u: goto label_27e0c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27E0C8u;
}
