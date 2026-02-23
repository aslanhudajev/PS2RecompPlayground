#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @5232@64@__dt__18KomonoTrnRigidTaskFv
// Address: 0x220890 - 0x2208a0
void _5232_64___dt__18KomonoTrnRigidTaskFv_0x220890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_5232_64___dt__18KomonoTrnRigidTaskFv");


    ctx->pc = 0x220890u;

    // 0x220890: 0x8c990040
    ctx->pc = 0x220890u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x220894: 0x2484eb90
    ctx->pc = 0x220894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962064));
    // 0x220898: 0x80881c4
    ctx->pc = 0x220898u;
    ctx->pc = 0x22089Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x220710u;
    ps2___dt__18KomonoTrnRigidTaskFv_0x220710(rdram, ctx, runtime); return;
    ctx->pc = 0x2208A0u;
}
