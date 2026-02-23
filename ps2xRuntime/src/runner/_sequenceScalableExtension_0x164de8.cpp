#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _sequenceScalableExtension
// Address: 0x164de8 - 0x164df4
void _sequenceScalableExtension_0x164de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_sequenceScalableExtension");


    ctx->pc = 0x164de8u;

    // 0x164de8: 0x3c04002c
    ctx->pc = 0x164de8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x164dec: 0x8059112
    ctx->pc = 0x164DECu;
    ctx->pc = 0x164DF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938280));
    ctx->pc = 0x164448u;
    ps2__Error_0x164448(rdram, ctx, runtime); return;
    ctx->pc = 0x164DF4u;
}
