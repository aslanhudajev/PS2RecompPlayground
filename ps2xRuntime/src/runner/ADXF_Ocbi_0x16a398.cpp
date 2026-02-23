#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_Ocbi
// Address: 0x16a398 - 0x16a3ac
void ADXF_Ocbi_0x16a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_Ocbi");


    ctx->pc = 0x16a398u;

    // 0x16a398: 0x5283c
    ctx->pc = 0x16a398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x16a39c: 0x5283f
    ctx->pc = 0x16a39cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x16a3a0: 0x852821
    ctx->pc = 0x16a3a0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16a3a4: 0x805549c
    ctx->pc = 0x16A3A4u;
    ctx->pc = 0x16A3A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x155270u;
    InvalidDCache_0x155270(rdram, ctx, runtime); return;
    ctx->pc = 0x16A3ACu;
}
