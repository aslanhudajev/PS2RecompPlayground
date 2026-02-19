#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioEnemyWalk
// Address: 0x25fa18 - 0x25fa54
void AudioEnemyWalk_0x25fa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fa18u;

    // 0x25fa18: 0x80282d
    ctx->pc = 0x25fa18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa1c: 0x8ca30000
    ctx->pc = 0x25fa1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25fa20: 0x2402001d
    ctx->pc = 0x25fa20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x25fa24: 0x10620003
    ctx->pc = 0x25FA24u;
    {
        const bool branch_taken_0x25fa24 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25FA28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x25fa24) {
            ctx->pc = 0x25FA34u;
            goto label_25fa34;
        }
    }
    ctx->pc = 0x25FA2Cu;
    // 0x25fa2c: 0x14620007
    ctx->pc = 0x25FA2Cu;
    {
        const bool branch_taken_0x25fa2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25fa2c) {
            ctx->pc = 0x25FA4Cu;
            goto label_25fa4c;
        }
    }
    ctx->pc = 0x25FA34u;
label_25fa34:
    // 0x25fa34: 0x3c020034
    ctx->pc = 0x25fa34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25fa38: 0x8c44dab0
    ctx->pc = 0x25fa38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x25fa3c: 0x24a50040
    ctx->pc = 0x25fa3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x25fa40: 0x2406007f
    ctx->pc = 0x25fa40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25fa44: 0x8088a62
    ctx->pc = 0x25FA44u;
    ctx->pc = 0x25FA48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FA4Cu;
label_25fa4c:
    // 0x25fa4c: 0x3e00008
    ctx->pc = 0x25FA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FA34u: goto label_25fa34;
            case 0x25FA4Cu: goto label_25fa4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25FA54u;
}
