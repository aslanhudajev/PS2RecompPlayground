#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwl_convBufFmtToSFD
// Address: 0x18dc18 - 0x18dc70
void mwl_convBufFmtToSFD_0x18dc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwl_convBufFmtToSFD");


    ctx->pc = 0x18dc18u;

    // 0x18dc18: 0x24020002
    ctx->pc = 0x18dc18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18dc1c: 0x1082000e
    ctx->pc = 0x18DC1Cu;
    {
        const bool branch_taken_0x18dc1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DC20u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x18dc1c) {
            ctx->pc = 0x18DC58u;
            goto label_18dc58;
        }
    }
    ctx->pc = 0x18DC24u;
    // 0x18dc24: 0x10400005
    ctx->pc = 0x18DC24u;
    {
        const bool branch_taken_0x18dc24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DC28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18dc24) {
            ctx->pc = 0x18DC3Cu;
            goto label_18dc3c;
        }
    }
    ctx->pc = 0x18DC2Cu;
    // 0x18dc2c: 0x10820008
    ctx->pc = 0x18DC2Cu;
    {
        const bool branch_taken_0x18dc2c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DC30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x18dc2c) {
            ctx->pc = 0x18DC50u;
            goto label_18dc50;
        }
    }
    ctx->pc = 0x18DC34u;
    // 0x18dc34: 0x1000000c
    ctx->pc = 0x18DC34u;
    {
        const bool branch_taken_0x18dc34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18dc34) {
            ctx->pc = 0x18DC68u;
            goto label_18dc68;
        }
    }
    ctx->pc = 0x18DC3Cu;
label_18dc3c:
    // 0x18dc3c: 0x24020003
    ctx->pc = 0x18dc3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18dc40: 0x10820007
    ctx->pc = 0x18DC40u;
    {
        const bool branch_taken_0x18dc40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x18dc40) {
            ctx->pc = 0x18DC60u;
            goto label_18dc60;
        }
    }
    ctx->pc = 0x18DC48u;
    // 0x18dc48: 0x10000007
    ctx->pc = 0x18DC48u;
    {
        const bool branch_taken_0x18dc48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18dc48) {
            ctx->pc = 0x18DC68u;
            goto label_18dc68;
        }
    }
    ctx->pc = 0x18DC50u;
label_18dc50:
    // 0x18dc50: 0x3e00008
    ctx->pc = 0x18DC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DC54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DC3Cu: goto label_18dc3c;
            case 0x18DC50u: goto label_18dc50;
            case 0x18DC58u: goto label_18dc58;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC68u: goto label_18dc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DC58u;
label_18dc58:
    // 0x18dc58: 0x3e00008
    ctx->pc = 0x18DC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DC5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DC3Cu: goto label_18dc3c;
            case 0x18DC50u: goto label_18dc50;
            case 0x18DC58u: goto label_18dc58;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC68u: goto label_18dc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DC60u;
label_18dc60:
    // 0x18dc60: 0x3e00008
    ctx->pc = 0x18DC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DC64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DC3Cu: goto label_18dc3c;
            case 0x18DC50u: goto label_18dc50;
            case 0x18DC58u: goto label_18dc58;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC68u: goto label_18dc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DC68u;
label_18dc68:
    // 0x18dc68: 0x3e00008
    ctx->pc = 0x18DC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DC3Cu: goto label_18dc3c;
            case 0x18DC50u: goto label_18dc50;
            case 0x18DC58u: goto label_18dc58;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC68u: goto label_18dc68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DC70u;
}
