#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwl_convBufFmtFromSFD
// Address: 0x18da58 - 0x18dab0
void mwl_convBufFmtFromSFD_0x18da58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwl_convBufFmtFromSFD");


    ctx->pc = 0x18da58u;

    // 0x18da58: 0x24020002
    ctx->pc = 0x18da58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18da5c: 0x1082000e
    ctx->pc = 0x18DA5Cu;
    {
        const bool branch_taken_0x18da5c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DA60u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x18da5c) {
            ctx->pc = 0x18DA98u;
            goto label_18da98;
        }
    }
    ctx->pc = 0x18DA64u;
    // 0x18da64: 0x10400005
    ctx->pc = 0x18DA64u;
    {
        const bool branch_taken_0x18da64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DA68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18da64) {
            ctx->pc = 0x18DA7Cu;
            goto label_18da7c;
        }
    }
    ctx->pc = 0x18DA6Cu;
    // 0x18da6c: 0x10820008
    ctx->pc = 0x18DA6Cu;
    {
        const bool branch_taken_0x18da6c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DA70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x18da6c) {
            ctx->pc = 0x18DA90u;
            goto label_18da90;
        }
    }
    ctx->pc = 0x18DA74u;
    // 0x18da74: 0x1000000c
    ctx->pc = 0x18DA74u;
    {
        const bool branch_taken_0x18da74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18da74) {
            ctx->pc = 0x18DAA8u;
            goto label_18daa8;
        }
    }
    ctx->pc = 0x18DA7Cu;
label_18da7c:
    // 0x18da7c: 0x24020003
    ctx->pc = 0x18da7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18da80: 0x10820007
    ctx->pc = 0x18DA80u;
    {
        const bool branch_taken_0x18da80 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x18da80) {
            ctx->pc = 0x18DAA0u;
            goto label_18daa0;
        }
    }
    ctx->pc = 0x18DA88u;
    // 0x18da88: 0x10000007
    ctx->pc = 0x18DA88u;
    {
        const bool branch_taken_0x18da88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18da88) {
            ctx->pc = 0x18DAA8u;
            goto label_18daa8;
        }
    }
    ctx->pc = 0x18DA90u;
label_18da90:
    // 0x18da90: 0x3e00008
    ctx->pc = 0x18DA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DA94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DA7Cu: goto label_18da7c;
            case 0x18DA90u: goto label_18da90;
            case 0x18DA98u: goto label_18da98;
            case 0x18DAA0u: goto label_18daa0;
            case 0x18DAA8u: goto label_18daa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DA98u;
label_18da98:
    // 0x18da98: 0x3e00008
    ctx->pc = 0x18DA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DA9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DA7Cu: goto label_18da7c;
            case 0x18DA90u: goto label_18da90;
            case 0x18DA98u: goto label_18da98;
            case 0x18DAA0u: goto label_18daa0;
            case 0x18DAA8u: goto label_18daa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DAA0u;
label_18daa0:
    // 0x18daa0: 0x3e00008
    ctx->pc = 0x18DAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DAA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DA7Cu: goto label_18da7c;
            case 0x18DA90u: goto label_18da90;
            case 0x18DA98u: goto label_18da98;
            case 0x18DAA0u: goto label_18daa0;
            case 0x18DAA8u: goto label_18daa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DAA8u;
label_18daa8:
    // 0x18daa8: 0x3e00008
    ctx->pc = 0x18DAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DA7Cu: goto label_18da7c;
            case 0x18DA90u: goto label_18da90;
            case 0x18DA98u: goto label_18da98;
            case 0x18DAA0u: goto label_18daa0;
            case 0x18DAA8u: goto label_18daa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DAB0u;
}
