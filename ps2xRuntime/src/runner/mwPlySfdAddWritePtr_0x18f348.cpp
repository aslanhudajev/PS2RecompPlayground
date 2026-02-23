#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdAddWritePtr
// Address: 0x18f348 - 0x18f360
void mwPlySfdAddWritePtr_0x18f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdAddWritePtr");


    ctx->pc = 0x18f348u;

    // 0x18f348: 0x4a00003
    ctx->pc = 0x18F348u;
    {
        const bool branch_taken_0x18f348 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18F34Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        if (branch_taken_0x18f348) {
            ctx->pc = 0x18F358u;
            goto label_18f358;
        }
    }
    ctx->pc = 0x18F350u;
    // 0x18f350: 0x8066f52
    ctx->pc = 0x18F350u;
    ctx->pc = 0x19BD48u;
    SFD_AddWritePtr_0x19bd48(rdram, ctx, runtime); return;
    ctx->pc = 0x18F358u;
label_18f358:
    // 0x18f358: 0x3e00008
    ctx->pc = 0x18F358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F358u: goto label_18f358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F360u;
}
