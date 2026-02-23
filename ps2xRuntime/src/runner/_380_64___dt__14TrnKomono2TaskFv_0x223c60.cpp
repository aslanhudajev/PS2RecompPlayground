#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @380@64@__dt__14TrnKomono2TaskFv
// Address: 0x223c60 - 0x223c70
void _380_64___dt__14TrnKomono2TaskFv_0x223c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_380_64___dt__14TrnKomono2TaskFv");


    ctx->pc = 0x223c60u;

    // 0x223c60: 0x8c990040
    ctx->pc = 0x223c60u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x223c64: 0x2484fe84
    ctx->pc = 0x223c64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966916));
    // 0x223c68: 0x8088280
    ctx->pc = 0x223C68u;
    ctx->pc = 0x223C6Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x220A00u;
    ps2___dt__14TrnKomono2TaskFv_0x220a00(rdram, ctx, runtime); return;
    ctx->pc = 0x223C70u;
}
