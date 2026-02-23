#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofSetTexAddr
// Address: 0x1a58b0 - 0x1a58c8
void nlDofSetTexAddr_0x1a58b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofSetTexAddr");


    ctx->pc = 0x1a58b0u;

    // 0x1a58b0: 0x4810003
    ctx->pc = 0x1A58B0u;
    {
        const bool branch_taken_0x1a58b0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A58B4u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
        if (branch_taken_0x1a58b0) {
            ctx->pc = 0x1A58C0u;
            goto label_1a58c0;
        }
    }
    ctx->pc = 0x1A58B8u;
    // 0x1a58b8: 0x248300ff
    ctx->pc = 0x1a58b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 255));
    // 0x1a58bc: 0x31a03
    ctx->pc = 0x1a58bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_1a58c0:
    // 0x1a58c0: 0x3e00008
    ctx->pc = 0x1A58C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A58C4u;
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937048), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A58C0u: goto label_1a58c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A58C8u;
}
