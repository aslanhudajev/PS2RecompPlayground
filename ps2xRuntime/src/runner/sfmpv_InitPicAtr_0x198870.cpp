#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_InitPicAtr
// Address: 0x198870 - 0x19887c
void sfmpv_InitPicAtr_0x198870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_InitPicAtr");


    ctx->pc = 0x198870u;

    // 0x198870: 0x2405ffff
    ctx->pc = 0x198870u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198874: 0x80601e6
    ctx->pc = 0x198874u;
    ctx->pc = 0x198878u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x180798u;
    UTY_MemsetDword_0x180798(rdram, ctx, runtime); return;
    ctx->pc = 0x19887Cu;
}
