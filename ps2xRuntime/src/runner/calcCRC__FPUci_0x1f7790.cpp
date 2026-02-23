#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcCRC__FPUci
// Address: 0x1f7790 - 0x1f7814
void calcCRC__FPUci_0x1f7790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcCRC__FPUci");


    ctx->pc = 0x1f7790u;

    // 0x1f7790: 0x3c02debd
    ctx->pc = 0x1f7790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57021 << 16));
    // 0x1f7794: 0x3443eb00
    ctx->pc = 0x1f7794u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 60160));
label_1f7798:
    // 0x1f7798: 0x90820000
    ctx->pc = 0x1f7798u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f779c: 0x24060008
    ctx->pc = 0x1f779cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f77a0: 0x621825
    ctx->pc = 0x1f77a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f77a4: 0x24840001
    ctx->pc = 0x1f77a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1f77a8:
    // 0x1f77a8: 0x4630006
    ctx->pc = 0x1F77A8u;
    {
        const bool branch_taken_0x1f77a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f77a8) {
            ctx->pc = 0x1F77ACu;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x1F77C4u;
            goto label_1f77c4;
        }
    }
    ctx->pc = 0x1F77B0u;
    // 0x1f77b0: 0x31840
    ctx->pc = 0x1f77b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f77b4: 0x3c021021
    ctx->pc = 0x1f77b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4129 << 16));
    // 0x1f77b8: 0x10000003
    ctx->pc = 0x1F77B8u;
    {
        const bool branch_taken_0x1f77b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F77BCu;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1f77b8) {
            ctx->pc = 0x1F77C8u;
            goto label_1f77c8;
        }
    }
    ctx->pc = 0x1F77C0u;
    // 0x1f77c0: 0x31840
    ctx->pc = 0x1f77c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_1f77c4:
    // 0x1f77c4: 0x0
    ctx->pc = 0x1f77c4u;
    // NOP
label_1f77c8:
    // 0x1f77c8: 0x24c6ffff
    ctx->pc = 0x1f77c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1f77cc: 0x14c0fff6
    ctx->pc = 0x1F77CCu;
    {
        const bool branch_taken_0x1f77cc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f77cc) {
            ctx->pc = 0x1F77A8u;
            goto label_1f77a8;
        }
    }
    ctx->pc = 0x1F77D4u;
    // 0x1f77d4: 0x24a5ffff
    ctx->pc = 0x1f77d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f77d8: 0x14a0ffef
    ctx->pc = 0x1F77D8u;
    {
        const bool branch_taken_0x1f77d8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f77d8) {
            ctx->pc = 0x1F7798u;
            goto label_1f7798;
        }
    }
    ctx->pc = 0x1F77E0u;
    // 0x1f77e0: 0x24040008
    ctx->pc = 0x1f77e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1f77e4:
    // 0x1f77e4: 0x4630006
    ctx->pc = 0x1F77E4u;
    {
        const bool branch_taken_0x1f77e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f77e4) {
            ctx->pc = 0x1F77E8u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x1F7800u;
            goto label_1f7800;
        }
    }
    ctx->pc = 0x1F77ECu;
    // 0x1f77ec: 0x31840
    ctx->pc = 0x1f77ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f77f0: 0x3c021021
    ctx->pc = 0x1f77f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4129 << 16));
    // 0x1f77f4: 0x10000002
    ctx->pc = 0x1F77F4u;
    {
        const bool branch_taken_0x1f77f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F77F8u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1f77f4) {
            ctx->pc = 0x1F7800u;
            goto label_1f7800;
        }
    }
    ctx->pc = 0x1F77FCu;
    // 0x1f77fc: 0x31840
    ctx->pc = 0x1f77fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_1f7800:
    // 0x1f7800: 0x2484ffff
    ctx->pc = 0x1f7800u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f7804: 0x1480fff7
    ctx->pc = 0x1F7804u;
    {
        const bool branch_taken_0x1f7804 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F7808u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
        if (branch_taken_0x1f7804) {
            ctx->pc = 0x1F77E4u;
            goto label_1f77e4;
        }
    }
    ctx->pc = 0x1F780Cu;
    // 0x1f780c: 0x3e00008
    ctx->pc = 0x1F780Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7798u: goto label_1f7798;
            case 0x1F77A8u: goto label_1f77a8;
            case 0x1F77C4u: goto label_1f77c4;
            case 0x1F77C8u: goto label_1f77c8;
            case 0x1F77E4u: goto label_1f77e4;
            case 0x1F7800u: goto label_1f7800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7814u;
}
