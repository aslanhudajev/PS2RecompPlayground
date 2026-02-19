#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getUniqueIdx
// Address: 0x2ccc38 - 0x2ccc64
void getUniqueIdx_0x2ccc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ccc38u;

    // 0x2ccc38: 0x94a30000
    ctx->pc = 0x2ccc38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ccc3c: 0x14660003
    ctx->pc = 0x2CCC3Cu;
    {
        const bool branch_taken_0x2ccc3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        if (branch_taken_0x2ccc3c) {
            ctx->pc = 0x2CCC4Cu;
            goto label_2ccc4c;
        }
    }
    ctx->pc = 0x2CCC44u;
    // 0x2ccc44: 0x3e00008
    ctx->pc = 0x2CCC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCC48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CCC4Cu: goto label_2ccc4c;
            case 0x2CCC58u: goto label_2ccc58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CCC4Cu;
label_2ccc4c:
    // 0x2ccc4c: 0x14600002
    ctx->pc = 0x2CCC4Cu;
    {
        const bool branch_taken_0x2ccc4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CCC50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x2ccc4c) {
            ctx->pc = 0x2CCC58u;
            goto label_2ccc58;
        }
    }
    ctx->pc = 0x2CCC54u;
    // 0x2ccc54: 0x2482ffff
    ctx->pc = 0x2ccc54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
label_2ccc58:
    // 0x2ccc58: 0xa4a20000
    ctx->pc = 0x2ccc58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccc5c: 0x3e00008
    ctx->pc = 0x2CCC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCC60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CCC4Cu: goto label_2ccc4c;
            case 0x2CCC58u: goto label_2ccc58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CCC64u;
}
