#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DCT_AcIdctDouble
// Address: 0x17e960 - 0x17e96c
void DCT_AcIdctDouble_0x17e960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DCT_AcIdctDouble");


    ctx->pc = 0x17e960u;

    // 0x17e960: 0x3c06002e
    ctx->pc = 0x17e960u;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x17e964: 0x805fa5c
    ctx->pc = 0x17E964u;
    ctx->pc = 0x17E968u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7680));
    ctx->pc = 0x17E970u;
    dctac_TransDouble_0x17e970(rdram, ctx, runtime); return;
    ctx->pc = 0x17E96Cu;
}
