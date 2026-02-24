#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecBeginPut
// Address: 0x1198f0 - 0x119990
void audioDecBeginPut_0x1198f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1198f0u;

    // 0x1198f0: 0x80482d
    ctx->pc = 0x1198f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198f4: 0x8d220000
    ctx->pc = 0x1198f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1198f8: 0x5440000d
    ctx->pc = 0x1198F8u;
    {
        const bool branch_taken_0x1198f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1198f8) {
            ctx->pc = 0x1198FCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 60)));
            ctx->pc = 0x119930u;
            goto label_119930;
        }
    }
    ctx->pc = 0x119900u;
    // 0x119900: 0x8d24002c
    ctx->pc = 0x119900u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x119904: 0x24020028
    ctx->pc = 0x119904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
    // 0x119908: 0x24830004
    ctx->pc = 0x119908u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
    // 0x11990c: 0x441023
    ctx->pc = 0x11990cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119910: 0x1231821
    ctx->pc = 0x119910u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x119914: 0xacc20000
    ctx->pc = 0x119914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x119918: 0xaca30000
    ctx->pc = 0x119918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x11991c: 0x8d22003c
    ctx->pc = 0x11991cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x119920: 0x8d230030
    ctx->pc = 0x119920u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x119924: 0xad020000
    ctx->pc = 0x119924u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x119928: 0x3e00008
    ctx->pc = 0x119928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11992Cu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119930u: goto label_119930;
            case 0x119964u: goto label_119964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119930u;
label_119930:
    // 0x119930: 0x8d220038
    ctx->pc = 0x119930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x119934: 0x8d240034
    ctx->pc = 0x119934u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x119938: 0x625023
    ctx->pc = 0x119938u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11993c: 0x641823
    ctx->pc = 0x11993cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x119940: 0x6a102a
    ctx->pc = 0x119940u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 10)));
    // 0x119944: 0x14400007
    ctx->pc = 0x119944u;
    {
        const bool branch_taken_0x119944 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x119948u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 48)));
        if (branch_taken_0x119944) {
            ctx->pc = 0x119964u;
            goto label_119964;
        }
    }
    ctx->pc = 0x11994Cu;
    // 0x11994c: 0xacca0000
    ctx->pc = 0x11994cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x119950: 0x441021
    ctx->pc = 0x119950u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119954: 0xad000000
    ctx->pc = 0x119954u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x119958: 0xaca20000
    ctx->pc = 0x119958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x11995c: 0x3e00008
    ctx->pc = 0x11995Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119960u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119930u: goto label_119930;
            case 0x119964u: goto label_119964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119964u;
label_119964:
    // 0x119964: 0xacc30000
    ctx->pc = 0x119964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x119968: 0x441021
    ctx->pc = 0x119968u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11996c: 0xaca20000
    ctx->pc = 0x11996cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x119970: 0x8d230034
    ctx->pc = 0x119970u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x119974: 0x8d22003c
    ctx->pc = 0x119974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x119978: 0x8d240030
    ctx->pc = 0x119978u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x11997c: 0x431023
    ctx->pc = 0x11997cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119980: 0x1421023
    ctx->pc = 0x119980u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x119984: 0xace40000
    ctx->pc = 0x119984u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x119988: 0x3e00008
    ctx->pc = 0x119988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11998Cu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119930u: goto label_119930;
            case 0x119964u: goto label_119964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119990u;
}
