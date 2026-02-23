#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @8@64@__dt__14McchkYesNoTaskFv
// Address: 0x1f8e40 - 0x1f8e50
void _8_64___dt__14McchkYesNoTaskFv_0x1f8e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_8_64___dt__14McchkYesNoTaskFv");


    ctx->pc = 0x1f8e40u;

    // 0x1f8e40: 0x8c990040
    ctx->pc = 0x1f8e40u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f8e44: 0x2484fff8
    ctx->pc = 0x1f8e44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1f8e48: 0x807e328
    ctx->pc = 0x1F8E48u;
    ctx->pc = 0x1F8E4Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1F8CA0u;
    ps2___dt__14McchkYesNoTaskFv_0x1f8ca0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F8E50u;
}
