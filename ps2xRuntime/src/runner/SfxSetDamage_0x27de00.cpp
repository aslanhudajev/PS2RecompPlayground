#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetDamage
// Address: 0x27de00 - 0x27de4c
void SfxSetDamage_0x27de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27de00u;

    // 0x27de00: 0x4800010
    ctx->pc = 0x27DE00u;
    {
        const bool branch_taken_0x27de00 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27DE04u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
        if (branch_taken_0x27de00) {
            ctx->pc = 0x27DE44u;
            goto label_27de44;
        }
    }
    ctx->pc = 0x27DE08u;
    // 0x27de08: 0x831818
    ctx->pc = 0x27de08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27de0c: 0x3c020034
    ctx->pc = 0x27de0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27de10: 0x24420eb0
    ctx->pc = 0x27de10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27de14: 0x621821
    ctx->pc = 0x27de14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27de18: 0x30a2000f
    ctx->pc = 0x27de18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 15));
    // 0x27de1c: 0x2c420005
    ctx->pc = 0x27de1cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 5));
    // 0x27de20: 0x14400004
    ctx->pc = 0x27DE20u;
    {
        const bool branch_taken_0x27de20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27DE24u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
        if (branch_taken_0x27de20) {
            ctx->pc = 0x27DE34u;
            goto label_27de34;
        }
    }
    ctx->pc = 0x27DE28u;
    // 0x27de28: 0x3c02ffff
    ctx->pc = 0x27de28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x27de2c: 0x3442fff3
    ctx->pc = 0x27de2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65523));
    // 0x27de30: 0xa22824
    ctx->pc = 0x27de30u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27de34:
    // 0x27de34: 0xac6500b4
    ctx->pc = 0x27de34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 5));
    // 0x27de38: 0xe46d00b8
    ctx->pc = 0x27de38u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x27de3c: 0xe46e007c
    ctx->pc = 0x27de3cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x27de40: 0xa46600bc
    ctx->pc = 0x27de40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 6));
label_27de44:
    // 0x27de44: 0x3e00008
    ctx->pc = 0x27DE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DE34u: goto label_27de34;
            case 0x27DE44u: goto label_27de44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DE4Cu;
}
