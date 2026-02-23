#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_EndDrawFrm
// Address: 0x198fd8 - 0x199000
void SFMPVF_EndDrawFrm_0x198fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_EndDrawFrm");


    ctx->pc = 0x198fd8u;

    // 0x198fd8: 0x10800007
    ctx->pc = 0x198FD8u;
    {
        const bool branch_taken_0x198fd8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x198FDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x198fd8) {
            ctx->pc = 0x198FF8u;
            goto label_198ff8;
        }
    }
    ctx->pc = 0x198FE0u;
    // 0x198fe0: 0x8c830000
    ctx->pc = 0x198fe0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198fe4: 0x54620004
    ctx->pc = 0x198FE4u;
    {
        const bool branch_taken_0x198fe4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x198fe4) {
            ctx->pc = 0x198FE8u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x198FF8u;
            goto label_198ff8;
        }
    }
    ctx->pc = 0x198FECu;
    // 0x198fec: 0x24020003
    ctx->pc = 0x198fecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x198ff0: 0x3e00008
    ctx->pc = 0x198FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198FF4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198FF8u: goto label_198ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198FF8u;
label_198ff8:
    // 0x198ff8: 0x3e00008
    ctx->pc = 0x198FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198FF8u: goto label_198ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199000u;
}
