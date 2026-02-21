#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetFade
// Address: 0x27e040 - 0x27e064
void SfxSetFade_0x27e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e040u;

    // 0x27e040: 0x4800006
    ctx->pc = 0x27E040u;
    {
        const bool branch_taken_0x27e040 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27E044u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
        if (branch_taken_0x27e040) {
            ctx->pc = 0x27E05Cu;
            goto label_27e05c;
        }
    }
    ctx->pc = 0x27E048u;
    // 0x27e048: 0x831818
    ctx->pc = 0x27e048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27e04c: 0x3c020034
    ctx->pc = 0x27e04cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27e050: 0x24420eb0
    ctx->pc = 0x27e050u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27e054: 0x621821
    ctx->pc = 0x27e054u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e058: 0xe46c00c8
    ctx->pc = 0x27e058u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 200), bits); }
label_27e05c:
    // 0x27e05c: 0x3e00008
    ctx->pc = 0x27E05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E05Cu: goto label_27e05c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27E064u;
}
