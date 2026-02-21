#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: advance_ok
// Address: 0x232f68 - 0x232fe0
void advance_ok_0x232f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x232f68u;

    // 0x232f68: 0x10800005
    ctx->pc = 0x232F68u;
    {
        const bool branch_taken_0x232f68 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x232F6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232f68) {
            ctx->pc = 0x232F80u;
            goto label_232f80;
        }
    }
    ctx->pc = 0x232F70u;
    // 0x232f70: 0x3c020032
    ctx->pc = 0x232f70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x232f74: 0x1000000e
    ctx->pc = 0x232F74u;
    {
        const bool branch_taken_0x232f74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x232F78u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 7356)));
        if (branch_taken_0x232f74) {
            ctx->pc = 0x232FB0u;
            goto label_232fb0;
        }
    }
    ctx->pc = 0x232F7Cu;
    // 0x232f7c: 0x0
    ctx->pc = 0x232f7cu;
    // NOP
label_232f80:
    // 0x232f80: 0x24a50001
    ctx->pc = 0x232f80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_232f84:
    // 0x232f84: 0x28a20004
    ctx->pc = 0x232f84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x232f88: 0x10400012
    ctx->pc = 0x232F88u;
    {
        const bool branch_taken_0x232f88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x232F8Cu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4));
        if (branch_taken_0x232f88) {
            ctx->pc = 0x232FD4u;
            goto label_232fd4;
        }
    }
    ctx->pc = 0x232F90u;
    // 0x232f90: 0x5085fffc
    ctx->pc = 0x232F90u;
    {
        const bool branch_taken_0x232f90 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        if (branch_taken_0x232f90) {
            ctx->pc = 0x232F94u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x232F84u;
            goto label_232f84;
        }
    }
    ctx->pc = 0x232F98u;
    // 0x232f98: 0x3c030032
    ctx->pc = 0x232f98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x232f9c: 0x24631bc0
    ctx->pc = 0x232f9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x232fa0: 0x24022b00
    ctx->pc = 0x232fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x232fa4: 0xa21018
    ctx->pc = 0x232fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x232fa8: 0x431021
    ctx->pc = 0x232fa8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232fac: 0x8c4300fc
    ctx->pc = 0x232facu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_232fb0:
    // 0x232fb0: 0x5060fff4
    ctx->pc = 0x232FB0u;
    {
        const bool branch_taken_0x232fb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x232fb0) {
            ctx->pc = 0x232FB4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x232F84u;
            goto label_232f84;
        }
    }
    ctx->pc = 0x232FB8u;
    // 0x232fb8: 0x24020002
    ctx->pc = 0x232fb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x232fbc: 0x5062fff1
    ctx->pc = 0x232FBCu;
    {
        const bool branch_taken_0x232fbc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x232fbc) {
            ctx->pc = 0x232FC0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x232F84u;
            goto label_232f84;
        }
    }
    ctx->pc = 0x232FC4u;
    // 0x232fc4: 0x24020003
    ctx->pc = 0x232fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x232fc8: 0x5062ffee
    ctx->pc = 0x232FC8u;
    {
        const bool branch_taken_0x232fc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x232fc8) {
            ctx->pc = 0x232FCCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x232F84u;
            goto label_232f84;
        }
    }
    ctx->pc = 0x232FD0u;
    // 0x232fd0: 0x28a30004
    ctx->pc = 0x232fd0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4));
label_232fd4:
    // 0x232fd4: 0x2402ffff
    ctx->pc = 0x232fd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232fd8: 0x3e00008
    ctx->pc = 0x232FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232FDCu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232F80u: goto label_232f80;
            case 0x232F84u: goto label_232f84;
            case 0x232FB0u: goto label_232fb0;
            case 0x232FD4u: goto label_232fd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232FE0u;
}
