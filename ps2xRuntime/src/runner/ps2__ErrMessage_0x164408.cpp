#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ErrMessage
// Address: 0x164408 - 0x164418
void ps2__ErrMessage_0x164408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2__ErrMessage");


    ctx->pc = 0x164408u;

    // 0x164408: 0x80282d
    ctx->pc = 0x164408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16440c: 0x3c04002c
    ctx->pc = 0x16440cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x164410: 0x805114a
    ctx->pc = 0x164410u;
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938168));
    ctx->pc = 0x144528u;
    printf_0x144528(rdram, ctx, runtime); return;
    ctx->pc = 0x164418u;
}
