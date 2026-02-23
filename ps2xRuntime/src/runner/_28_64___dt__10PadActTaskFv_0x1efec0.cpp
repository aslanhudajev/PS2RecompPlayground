#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @28@64@__dt__10PadActTaskFv
// Address: 0x1efec0 - 0x1efed0
void _28_64___dt__10PadActTaskFv_0x1efec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_28_64___dt__10PadActTaskFv");


    ctx->pc = 0x1efec0u;

    // 0x1efec0: 0x8c990040
    ctx->pc = 0x1efec0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1efec4: 0x2484ffe4
    ctx->pc = 0x1efec4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967268));
    // 0x1efec8: 0x807be74
    ctx->pc = 0x1EFEC8u;
    ctx->pc = 0x1EFECCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1EF9D0u;
    ps2___dt__10PadActTaskFv_0x1ef9d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1EFED0u;
}
