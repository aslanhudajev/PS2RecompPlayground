#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_Init
// Address: 0x199de0 - 0x199e00
void SFMPVP_Init_0x199de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_Init");


    ctx->pc = 0x199de0u;

    // 0x199de0: 0x3c020026
    ctx->pc = 0x199de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x199de4: 0x8c43df50
    ctx->pc = 0x199de4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958928)));
    // 0x199de8: 0x10600003
    ctx->pc = 0x199DE8u;
    {
        const bool branch_taken_0x199de8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x199de8) {
            ctx->pc = 0x199DF8u;
            goto label_199df8;
        }
    }
    ctx->pc = 0x199DF0u;
    // 0x199df0: 0x8058da2
    ctx->pc = 0x199DF0u;
    ctx->pc = 0x163688u;
    sceMpegInit_0x163688(rdram, ctx, runtime); return;
    ctx->pc = 0x199DF8u;
label_199df8:
    // 0x199df8: 0x3e00008
    ctx->pc = 0x199DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199DF8u: goto label_199df8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199E00u;
}
