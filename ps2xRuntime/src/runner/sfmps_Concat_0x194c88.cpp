#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_Concat
// Address: 0x194c88 - 0x194c9c
void sfmps_Concat_0x194c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_Concat");


    ctx->pc = 0x194c88u;

    // 0x194c88: 0x24843060
    ctx->pc = 0x194c88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12384));
    // 0x194c8c: 0x8c820014
    ctx->pc = 0x194c8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x194c90: 0x24420001
    ctx->pc = 0x194c90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x194c94: 0x3e00008
    ctx->pc = 0x194C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194C98u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194C9Cu;
}
