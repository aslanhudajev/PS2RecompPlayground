#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chkStmId
// Address: 0x1a0f20 - 0x1a0f6c
void chkStmId_0x1a0f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chkStmId");


    ctx->pc = 0x1a0f20u;

    // 0x1a0f20: 0x2482ff40
    ctx->pc = 0x1a0f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967104));
    // 0x1a0f24: 0x2c420020
    ctx->pc = 0x1a0f24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 32));
    // 0x1a0f28: 0x10400003
    ctx->pc = 0x1A0F28u;
    {
        const bool branch_taken_0x1a0f28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0F2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967072));
        if (branch_taken_0x1a0f28) {
            ctx->pc = 0x1A0F38u;
            goto label_1a0f38;
        }
    }
    ctx->pc = 0x1A0F30u;
    // 0x1a0f30: 0x3e00008
    ctx->pc = 0x1A0F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0F34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0F38u: goto label_1a0f38;
            case 0x1A0F4Cu: goto label_1a0f4c;
            case 0x1A0F5Cu: goto label_1a0f5c;
            case 0x1A0F64u: goto label_1a0f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0F38u;
label_1a0f38:
    // 0x1a0f38: 0x2c420010
    ctx->pc = 0x1a0f38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 16));
    // 0x1a0f3c: 0x10400003
    ctx->pc = 0x1A0F3Cu;
    {
        const bool branch_taken_0x1a0f3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0F40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 189));
        if (branch_taken_0x1a0f3c) {
            ctx->pc = 0x1A0F4Cu;
            goto label_1a0f4c;
        }
    }
    ctx->pc = 0x1A0F44u;
    // 0x1a0f44: 0x3e00008
    ctx->pc = 0x1A0F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0F48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0F38u: goto label_1a0f38;
            case 0x1A0F4Cu: goto label_1a0f4c;
            case 0x1A0F5Cu: goto label_1a0f5c;
            case 0x1A0F64u: goto label_1a0f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0F4Cu;
label_1a0f4c:
    // 0x1a0f4c: 0x10820003
    ctx->pc = 0x1A0F4Cu;
    {
        const bool branch_taken_0x1a0f4c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A0F50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 191));
        if (branch_taken_0x1a0f4c) {
            ctx->pc = 0x1A0F5Cu;
            goto label_1a0f5c;
        }
    }
    ctx->pc = 0x1A0F54u;
    // 0x1a0f54: 0x14820003
    ctx->pc = 0x1A0F54u;
    {
        const bool branch_taken_0x1a0f54 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a0f54) {
            ctx->pc = 0x1A0F64u;
            goto label_1a0f64;
        }
    }
    ctx->pc = 0x1A0F5Cu;
label_1a0f5c:
    // 0x1a0f5c: 0x3e00008
    ctx->pc = 0x1A0F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0F60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 189));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0F38u: goto label_1a0f38;
            case 0x1A0F4Cu: goto label_1a0f4c;
            case 0x1A0F5Cu: goto label_1a0f5c;
            case 0x1A0F64u: goto label_1a0f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0F64u;
label_1a0f64:
    // 0x1a0f64: 0x3e00008
    ctx->pc = 0x1A0F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0F68u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0F38u: goto label_1a0f38;
            case 0x1A0F4Cu: goto label_1a0f4c;
            case 0x1A0F5Cu: goto label_1a0f5c;
            case 0x1A0F64u: goto label_1a0f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0F6Cu;
}
