#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_FreeFrm
// Address: 0x198f98 - 0x198fa8
void SFMPVF_FreeFrm_0x198f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_FreeFrm");


    ctx->pc = 0x198f98u;

    // 0x198f98: 0x54800001
    ctx->pc = 0x198F98u;
    {
        const bool branch_taken_0x198f98 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x198f98) {
            ctx->pc = 0x198F9Cu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x198FA0u;
            goto label_198fa0;
        }
    }
    ctx->pc = 0x198FA0u;
label_198fa0:
    // 0x198fa0: 0x3e00008
    ctx->pc = 0x198FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198FA0u: goto label_198fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198FA8u;
}
