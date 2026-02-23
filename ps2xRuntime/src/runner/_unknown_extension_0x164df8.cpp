#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _unknown_extension
// Address: 0x164df8 - 0x164e04
void _unknown_extension_0x164df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_unknown_extension");


    ctx->pc = 0x164df8u;

    // 0x164df8: 0x3c04002c
    ctx->pc = 0x164df8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x164dfc: 0x8059112
    ctx->pc = 0x164DFCu;
    ctx->pc = 0x164E00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938328));
    ctx->pc = 0x164448u;
    ps2__Error_0x164448(rdram, ctx, runtime); return;
    ctx->pc = 0x164E04u;
}
