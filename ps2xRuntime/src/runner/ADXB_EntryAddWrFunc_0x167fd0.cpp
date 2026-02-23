#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_EntryAddWrFunc
// Address: 0x167fd0 - 0x167fdc
void ADXB_EntryAddWrFunc_0x167fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_EntryAddWrFunc");


    ctx->pc = 0x167fd0u;

    // 0x167fd0: 0xac860094
    ctx->pc = 0x167fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 6));
    // 0x167fd4: 0x3e00008
    ctx->pc = 0x167FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167FD8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167FDCu;
}
