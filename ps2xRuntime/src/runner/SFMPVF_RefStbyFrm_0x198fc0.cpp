#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_RefStbyFrm
// Address: 0x198fc0 - 0x198fd4
void SFMPVF_RefStbyFrm_0x198fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_RefStbyFrm");


    ctx->pc = 0x198fc0u;

    // 0x198fc0: 0x10800002
    ctx->pc = 0x198FC0u;
    {
        const bool branch_taken_0x198fc0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x198FC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x198fc0) {
            ctx->pc = 0x198FCCu;
            goto label_198fcc;
        }
    }
    ctx->pc = 0x198FC8u;
    // 0x198fc8: 0xac820000
    ctx->pc = 0x198fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_198fcc:
    // 0x198fcc: 0x3e00008
    ctx->pc = 0x198FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198FCCu: goto label_198fcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198FD4u;
}
