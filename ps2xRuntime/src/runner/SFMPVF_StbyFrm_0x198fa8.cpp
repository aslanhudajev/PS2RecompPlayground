#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_StbyFrm
// Address: 0x198fa8 - 0x198fbc
void SFMPVF_StbyFrm_0x198fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_StbyFrm");


    ctx->pc = 0x198fa8u;

    // 0x198fa8: 0x10800002
    ctx->pc = 0x198FA8u;
    {
        const bool branch_taken_0x198fa8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x198FACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x198fa8) {
            ctx->pc = 0x198FB4u;
            goto label_198fb4;
        }
    }
    ctx->pc = 0x198FB0u;
    // 0x198fb0: 0xac820000
    ctx->pc = 0x198fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_198fb4:
    // 0x198fb4: 0x3e00008
    ctx->pc = 0x198FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198FB4u: goto label_198fb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198FBCu;
}
