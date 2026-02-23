#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fogTableSet__11FogCtrlTaskFv
// Address: 0x1e9fb0 - 0x1e9fd0
void fogTableSet__11FogCtrlTaskFv_0x1e9fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fogTableSet__11FogCtrlTaskFv");


    ctx->pc = 0x1e9fb0u;

    // 0x1e9fb0: 0x27bdfff0
    ctx->pc = 0x1e9fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9fb4: 0x3c020050
    ctx->pc = 0x1e9fb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e9fb8: 0x7fbf0000
    ctx->pc = 0x1e9fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e9fbc: 0xc07a830
    ctx->pc = 0x1E9FBCu;
    SET_GPR_U32(ctx, 31, 0x1E9FC4u);
    ctx->pc = 0x1E9FC0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 3280));
    ctx->pc = 0x1EA0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetTable__11FogCtrlTaskFP9FOG_PARAM_0x1ea0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FC4u; }
        else if (ctx->pc != 0x1E9FC4u) { ctx->pc = 0x1E9FC4u; }
    }
    if (ctx->pc != 0x1E9FC4u) { return; }
    ctx->pc = 0x1E9FC4u;
    // 0x1e9fc4: 0x7bbf0000
    ctx->pc = 0x1e9fc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9fc8: 0x3e00008
    ctx->pc = 0x1E9FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9FCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9FD0u;
}
