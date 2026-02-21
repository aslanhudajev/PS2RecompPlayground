#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: hexstrtoint
// Address: 0x108d60 - 0x108dd0
void hexstrtoint_0x108d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108d60u;

    // 0x108d60: 0x90830000
    ctx->pc = 0x108d60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108d64: 0x10600018
    ctx->pc = 0x108D64u;
    {
        const bool branch_taken_0x108d64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x108D68u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108d64) {
            ctx->pc = 0x108DC8u;
            goto label_108dc8;
        }
    }
    ctx->pc = 0x108D6Cu;
    // 0x108d6c: 0x2462ff9f
    ctx->pc = 0x108d6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967199));
label_108d70:
    // 0x108d70: 0x2c420006
    ctx->pc = 0x108d70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 6));
    // 0x108d74: 0x10400004
    ctx->pc = 0x108D74u;
    {
        const bool branch_taken_0x108d74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108D78u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x108d74) {
            ctx->pc = 0x108D88u;
            goto label_108d88;
        }
    }
    ctx->pc = 0x108D7Cu;
    // 0x108d7c: 0x90830000
    ctx->pc = 0x108d7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108d80: 0x1000000c
    ctx->pc = 0x108D80u;
    {
        const bool branch_taken_0x108d80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108D84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967209));
        if (branch_taken_0x108d80) {
            ctx->pc = 0x108DB4u;
            goto label_108db4;
        }
    }
    ctx->pc = 0x108D88u;
label_108d88:
    // 0x108d88: 0x2462ffbf
    ctx->pc = 0x108d88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x108d8c: 0x2c420006
    ctx->pc = 0x108d8cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 6));
    // 0x108d90: 0x10400003
    ctx->pc = 0x108D90u;
    {
        const bool branch_taken_0x108d90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108D94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967241));
        if (branch_taken_0x108d90) {
            ctx->pc = 0x108DA0u;
            goto label_108da0;
        }
    }
    ctx->pc = 0x108D98u;
    // 0x108d98: 0x10000006
    ctx->pc = 0x108D98u;
    {
        const bool branch_taken_0x108d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108D9Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x108d98) {
            ctx->pc = 0x108DB4u;
            goto label_108db4;
        }
    }
    ctx->pc = 0x108DA0u;
label_108da0:
    // 0x108da0: 0x2462ffd0
    ctx->pc = 0x108da0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x108da4: 0x2c42000a
    ctx->pc = 0x108da4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
    // 0x108da8: 0x10400003
    ctx->pc = 0x108DA8u;
    {
        const bool branch_taken_0x108da8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108DACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967248));
        if (branch_taken_0x108da8) {
            ctx->pc = 0x108DB8u;
            goto label_108db8;
        }
    }
    ctx->pc = 0x108DB0u;
    // 0x108db0: 0x90830000
    ctx->pc = 0x108db0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_108db4:
    // 0x108db4: 0x432821
    ctx->pc = 0x108db4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_108db8:
    // 0x108db8: 0x24840001
    ctx->pc = 0x108db8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x108dbc: 0x90830000
    ctx->pc = 0x108dbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108dc0: 0x1460ffeb
    ctx->pc = 0x108DC0u;
    {
        const bool branch_taken_0x108dc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x108DC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967199));
        if (branch_taken_0x108dc0) {
            ctx->pc = 0x108D70u;
            goto label_108d70;
        }
    }
    ctx->pc = 0x108DC8u;
label_108dc8:
    // 0x108dc8: 0x3e00008
    ctx->pc = 0x108DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108DCCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108D70u: goto label_108d70;
            case 0x108D88u: goto label_108d88;
            case 0x108DA0u: goto label_108da0;
            case 0x108DB4u: goto label_108db4;
            case 0x108DB8u: goto label_108db8;
            case 0x108DC8u: goto label_108dc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108DD0u;
}
