#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetNumChan
// Address: 0x167ff8 - 0x168000
void ADXB_GetNumChan_0x167ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetNumChan");


    ctx->pc = 0x167ff8u;

    // 0x167ff8: 0x3e00008
    ctx->pc = 0x167FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167FFCu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168000u;
}
