#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyGetSfdHn
// Address: 0x18f508 - 0x18f51c
void mwPlyGetSfdHn_0x18f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyGetSfdHn");


    ctx->pc = 0x18f508u;

    // 0x18f508: 0x10800002
    ctx->pc = 0x18F508u;
    {
        const bool branch_taken_0x18f508 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F50Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f508) {
            ctx->pc = 0x18F514u;
            goto label_18f514;
        }
    }
    ctx->pc = 0x18F510u;
    // 0x18f510: 0x8c820030
    ctx->pc = 0x18f510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_18f514:
    // 0x18f514: 0x3e00008
    ctx->pc = 0x18F514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F514u: goto label_18f514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F51Cu;
}
