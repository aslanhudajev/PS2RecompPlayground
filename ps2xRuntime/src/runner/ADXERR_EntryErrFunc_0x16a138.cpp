#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXERR_EntryErrFunc
// Address: 0x16a138 - 0x16a14c
void ADXERR_EntryErrFunc_0x16a138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXERR_EntryErrFunc");


    ctx->pc = 0x16a138u;

    // 0x16a138: 0x80102d
    ctx->pc = 0x16a138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a13c: 0xa0182d
    ctx->pc = 0x16a13cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a140: 0xaf828108
    ctx->pc = 0x16a140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934792), GPR_U32(ctx, 2));
    // 0x16a144: 0x805f85e
    ctx->pc = 0x16A144u;
    ctx->pc = 0x16A148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934796), GPR_U32(ctx, 3));
    ctx->pc = 0x17E178u;
    SVM_SetCbErr_0x17e178(rdram, ctx, runtime); return;
    ctx->pc = 0x16A14Cu;
}
