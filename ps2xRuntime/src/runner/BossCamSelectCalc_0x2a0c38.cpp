#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossCamSelectCalc
// Address: 0x2a0c38 - 0x2a0c54
void BossCamSelectCalc_0x2a0c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a0c38u;

    // 0x2a0c38: 0x3c030036
    ctx->pc = 0x2a0c38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a0c3c: 0x8c62db68
    ctx->pc = 0x2a0c3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294957928)));
    // 0x2a0c40: 0x14400002
    ctx->pc = 0x2A0C40u;
    {
        const bool branch_taken_0x2a0c40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A0C44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2a0c40) {
            ctx->pc = 0x2A0C4Cu;
            goto label_2a0c4c;
        }
    }
    ctx->pc = 0x2A0C48u;
    // 0x2a0c48: 0xac62db68
    ctx->pc = 0x2a0c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957928), GPR_U32(ctx, 2));
label_2a0c4c:
    // 0x2a0c4c: 0x3e00008
    ctx->pc = 0x2A0C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A0C4Cu: goto label_2a0c4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A0C54u;
}
