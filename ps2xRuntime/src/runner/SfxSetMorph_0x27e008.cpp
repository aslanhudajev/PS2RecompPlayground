#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetMorph
// Address: 0x27e008 - 0x27e040
void SfxSetMorph_0x27e008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e008u;

    // 0x27e008: 0x480000b
    ctx->pc = 0x27E008u;
    {
        const bool branch_taken_0x27e008 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27E00Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
        if (branch_taken_0x27e008) {
            ctx->pc = 0x27E038u;
            goto label_27e038;
        }
    }
    ctx->pc = 0x27E010u;
    // 0x27e010: 0x831818
    ctx->pc = 0x27e010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27e014: 0x3c020034
    ctx->pc = 0x27e014u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27e018: 0x24420eb0
    ctx->pc = 0x27e018u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27e01c: 0x621821
    ctx->pc = 0x27e01cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e020: 0xa46500c0
    ctx->pc = 0x27e020u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 192), (uint16_t)GPR_U32(ctx, 5));
    // 0x27e024: 0xa46600c2
    ctx->pc = 0x27e024u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 194), (uint16_t)GPR_U32(ctx, 6));
    // 0x27e028: 0x8c620064
    ctx->pc = 0x27e028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x27e02c: 0x34424000
    ctx->pc = 0x27e02cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x27e030: 0xac620064
    ctx->pc = 0x27e030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x27e034: 0xe46c0074
    ctx->pc = 0x27e034u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_27e038:
    // 0x27e038: 0x3e00008
    ctx->pc = 0x27E038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E038u: goto label_27e038;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27E040u;
}
